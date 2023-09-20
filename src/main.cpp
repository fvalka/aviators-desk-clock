#include <Arduino.h>

#include "lvgl.h"
#include "clock_gui.h"
#include "config.h"

/* The product now has two screens, and the initialization code needs a small change in the new version. The LCD_MODULE_CMD_1 is used to define the
 * switch macro. */
#define LCD_MODULE_CMD_1

#include "OneButton.h" /* https://github.com/mathertel/OneButton.git */
#include "Wire.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_panel_vendor.h"
#include <ESPNtpClient.h>
#include "time.h"
#include <sunset.h>
#include "WiFiManager.h"

#include <esp_wifi.h>

#include "Ticker.h"

esp_lcd_panel_io_handle_t io_handle = NULL;
static lv_disp_draw_buf_t disp_buf; // contains internal graphic buffer(s) called draw buffer(s)
static lv_disp_drv_t disp_drv;      // contains callback functions
static lv_color_t *lv_disp_buf;
static bool is_initialized_lvgl = false;
OneButton button1(PIN_BUTTON_1, true);
OneButton button2(PIN_BUTTON_2, true);

SunSet sun;
int current_sunrise_calculation_day = -1;

#if defined(LCD_MODULE_CMD_1)
typedef struct {
    uint8_t cmd;
    uint8_t data[14];
    uint8_t len;
} lcd_cmd_t;

lcd_cmd_t lcd_st7789v[] = {
        {0x11, {0}, 0 | 0x80},
        {0x3A, {0X05}, 1},
        {0xB2, {0X0B, 0X0B, 0X00, 0X33, 0X33}, 5},
        {0xB7, {0X75}, 1},
        {0xBB, {0X28}, 1},
        {0xC0, {0X2C}, 1},
        {0xC2, {0X01}, 1},
        {0xC3, {0X1F}, 1},
        {0xC6, {0X13}, 1},
        {0xD0, {0XA7}, 1},
        {0xD0, {0XA4, 0XA1}, 2},
        {0xD6, {0XA1}, 1},
        {0xE0, {0XF0, 0X05, 0X0A, 0X06, 0X06, 0X03, 0X2B, 0X32, 0X43, 0X36, 0X11, 0X10, 0X2B, 0X32}, 14},
        {0xE1, {0XF0, 0X08, 0X0C, 0X0B, 0X09, 0X24, 0X2B, 0X22, 0X43, 0X38, 0X15, 0X16, 0X2F, 0X37}, 14},

};
#endif

#if defined(TOUCH_READ_FROM_INTERRNUPT)
bool get_int_signal = false;
#endif

void connectWiFi();
bool getGMTTime(struct tm * info, uint32_t ms = 5000);
bool isClockValid();
String formatTime(struct tm *info);
String formatFractionalMinutes(double fractMinutes);

void updateSunCalculations(const tm &timeinfo);

static bool example_notify_lvgl_flush_ready(esp_lcd_panel_io_handle_t panel_io, esp_lcd_panel_io_event_data_t *edata, void *user_ctx)
{
    if (is_initialized_lvgl) {
        lv_disp_drv_t *disp_driver = (lv_disp_drv_t *)user_ctx;
        lv_disp_flush_ready(disp_driver);
    }
    return false;
}

static void example_lvgl_flush_cb(lv_disp_drv_t *drv, const lv_area_t *area, lv_color_t *color_map)
{
    esp_lcd_panel_handle_t panel_handle = (esp_lcd_panel_handle_t)drv->user_data;
    int offsetx1 = area->x1;
    int offsetx2 = area->x2;
    int offsety1 = area->y1;
    int offsety2 = area->y2;
    // copy a buffer's content to a specific area of the display
    esp_lcd_panel_draw_bitmap(panel_handle, offsetx1, offsety1, offsetx2 + 1, offsety2 + 1, color_map);
}

void setup()
{
    // (POWER ON)IO15 must be set to HIGH before starting, otherwise the screen will not display when using battery
    pinMode(PIN_POWER_ON, OUTPUT);
    digitalWrite(PIN_POWER_ON, HIGH);
    Serial.begin(115200);

    pinMode(PIN_LCD_RD, OUTPUT);
    digitalWrite(PIN_LCD_RD, HIGH);
    esp_lcd_i80_bus_handle_t i80_bus = NULL;
    esp_lcd_i80_bus_config_t bus_config = {
            .dc_gpio_num = PIN_LCD_DC,
            .wr_gpio_num = PIN_LCD_WR,
            .clk_src = LCD_CLK_SRC_PLL160M,
            .data_gpio_nums =
                    {
                            PIN_LCD_D0,
                            PIN_LCD_D1,
                            PIN_LCD_D2,
                            PIN_LCD_D3,
                            PIN_LCD_D4,
                            PIN_LCD_D5,
                            PIN_LCD_D6,
                            PIN_LCD_D7,
                    },
            .bus_width = 8,
            .max_transfer_bytes = LVGL_LCD_BUF_SIZE * sizeof(uint16_t),
    };
    esp_lcd_new_i80_bus(&bus_config, &i80_bus);

    esp_lcd_panel_io_i80_config_t io_config = {
            .cs_gpio_num = PIN_LCD_CS,
            .pclk_hz = LCD_PIXEL_CLOCK_HZ,
            .trans_queue_depth = 20,
            .on_color_trans_done = example_notify_lvgl_flush_ready,
            .user_ctx = &disp_drv,
            .lcd_cmd_bits = 8,
            .lcd_param_bits = 8,
            .dc_levels =
                    {
                            .dc_idle_level = 0,
                            .dc_cmd_level = 0,
                            .dc_dummy_level = 0,
                            .dc_data_level = 1,
                    },
    };
    ESP_ERROR_CHECK(esp_lcd_new_panel_io_i80(i80_bus, &io_config, &io_handle));
    esp_lcd_panel_handle_t panel_handle = NULL;
    esp_lcd_panel_dev_config_t panel_config = {
            .reset_gpio_num = PIN_LCD_RES,
            .color_space = ESP_LCD_COLOR_SPACE_RGB,
            .bits_per_pixel = 16,
    };
    esp_lcd_new_panel_st7789(io_handle, &panel_config, &panel_handle);
    esp_lcd_panel_reset(panel_handle);
    esp_lcd_panel_init(panel_handle);

    esp_lcd_panel_invert_color(panel_handle, true);

    esp_lcd_panel_swap_xy(panel_handle, true);

    //The screen faces you, and the USB is on the left
    esp_lcd_panel_mirror(panel_handle, false, true);

    //The screen faces you, the USB is to the right
    // esp_lcd_panel_mirror(panel_handle, true, false);

    // the gap is LCD panel specific, even panels with the same driver IC, can
    // have different gap value
    esp_lcd_panel_set_gap(panel_handle, 0, 35);
#if defined(LCD_MODULE_CMD_1)
    for (uint8_t i = 0; i < (sizeof(lcd_st7789v) / sizeof(lcd_cmd_t)); i++) {
        esp_lcd_panel_io_tx_param(io_handle, lcd_st7789v[i].cmd, lcd_st7789v[i].data, lcd_st7789v[i].len & 0x7f);
        if (lcd_st7789v[i].len & 0x80)
            delay(120);
    }
#endif
    /* Lighten the screen with gradient */
    ledcSetup(0, 10000, 8);
    ledcAttachPin(PIN_LCD_BL, 0);
    for (uint8_t i = 0; i < 0xFF; i++) {
        ledcWrite(0, i);
        delay(2);
    }

    ledcWrite(0, 0xFF/2);

    lv_init();
    lv_disp_buf = (lv_color_t *)heap_caps_malloc(LVGL_LCD_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA | MALLOC_CAP_INTERNAL);

    lv_disp_draw_buf_init(&disp_buf, lv_disp_buf, NULL, LVGL_LCD_BUF_SIZE);
    /*Initialize the display*/
    lv_disp_drv_init(&disp_drv);
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = LCD_H_RES;
    disp_drv.ver_res = LCD_V_RES;
    disp_drv.flush_cb = example_lvgl_flush_cb;
    disp_drv.draw_buf = &disp_buf;
    disp_drv.user_data = panel_handle;
    lv_disp_drv_register(&disp_drv);

    is_initialized_lvgl = true;

    //wifi_test();
    connectWiFi();

    LV_DELAY(2000);
    ui_begin();

    button1.attachClick([]() {
        pinMode(PIN_POWER_ON, OUTPUT);
        pinMode(PIN_LCD_BL, OUTPUT);
        digitalWrite(PIN_POWER_ON, LOW);
        digitalWrite(PIN_LCD_BL, LOW);
        esp_sleep_enable_ext0_wakeup((gpio_num_t)PIN_BUTTON_2, 0); // 1 = High, 0 = Low
        esp_deep_sleep_start();
    });

    button2.attachClick([]() {
        ui_switch_page();
    });

    sun.setPosition(LATITUDE, LONGITUDE, 0);

    NTP.setTimeZone(TIMEZONE);
    NTP.begin(NTP_SERVER);
    NTP.setMinSyncAccuracy(NTP_MIN_ACCURACY);
    NTP.setInterval(NTP_SHORT_INTERVAL, NTP_LONG_INTERVAL);
}

void loop()
{
    lv_timer_handler();
    button1.tick();
    button2.tick();
    delay(3);
    static uint32_t last_tick;
    if (millis() - last_tick > 100) {
        struct tm timeinfo;
        struct tm timeinfo_gmt;
        if (getLocalTime(&timeinfo)) {
            String localtime_formatted = formatTime(&timeinfo);
            lv_msg_send(MSG_LOCALTIME, localtime_formatted.c_str());

            updateSunCalculations(timeinfo);

        }

        if(getGMTTime(&timeinfo_gmt)) {
            String gmttime_formatted = formatTime(&timeinfo_gmt);
            lv_msg_send(MSG_GMTTIME, gmttime_formatted.c_str());
        }

        uint32_t volt = (analogRead(PIN_BAT_VOLT) * 2 * 3.3 * 1000) / 4096;
        lv_msg_send(MSG_NEW_VOLT, &volt);
        lv_msg_send(MSG_UPTIME, NTP.getUptimeString());

        last_tick = millis();
    }
}

void updateSunCalculations(const tm &timeinfo) {
    // check if the day of the month changed, if not skip the calculation to save CPU cycles
    if(current_sunrise_calculation_day != timeinfo.tm_mday && isClockValid()) {
        sun.setCurrentDate(timeinfo.tm_year + 1900, timeinfo.tm_mon + 1, timeinfo.tm_mday);
        double sunrise = sun.calcCivilSunrise();
        double sunset = sun.calcCivilSunset();

        String sunrise_formatted = formatFractionalMinutes(round(sunrise));
        String sunset_formatted = formatFractionalMinutes(round(sunset));

        lv_msg_send(MSG_BCMT, sunrise_formatted.c_str());
        lv_msg_send(MSG_ECET, sunset_formatted.c_str());

        current_sunrise_calculation_day = timeinfo.tm_mday;

        Serial.printf("Updated BCMT to %s and ECET to %s\n",
                      sunrise_formatted.c_str(),
                      sunset_formatted.c_str());
        Serial.printf("Fractional minutes: BCMT %.2f and ECET %.2f",
                      sunrise,
                      sunset);
    }
}

void connectWiFi() {
    String text;

    lv_obj_t *log_label = lv_label_create(lv_scr_act());
    lv_obj_align(log_label, LV_ALIGN_TOP_LEFT, 0, 0);
    lv_obj_set_width(log_label, LV_PCT(100));
    lv_label_set_long_mode(log_label, LV_LABEL_LONG_SCROLL);
    lv_label_set_recolor(log_label, true);
    lv_label_set_long_mode(log_label, LV_LABEL_LONG_WRAP);

    text = "Please configure your clock:\n";
    text += "1.) Connect to the WiFi network: \n";
    text += "\taviators-desk-clock\n";
    text += "2.) Sign-in to the network\n";
    text += "3.) Enter your home Wifi SSID and password and other config options in the portal\n";
    lv_label_set_text(log_label, text.c_str());

    lv_label_set_text(log_label, text.c_str());
    LV_DELAY(100);
    lv_label_set_text(log_label, text.c_str());

    WiFiManager wm;

    // reset settings - wipe stored credentials for testing
    // wm.resetSettings();

    bool res;
    res = wm.autoConnect("aviators-desk-clock");

    if(!res) {
        Serial.println("Failed to connect");
        // ESP.restart();
    }
    else {
        //if you get here you have connected to the WiFi
        Serial.println("WiFi connected");
    }
}

bool getGMTTime(struct tm * info, uint32_t ms)
{
    uint32_t start = millis();
    time_t now;
    while((millis()-start) <= ms) {
        time(&now);
        gmtime_r(&now, info);
        if(info->tm_year > (2016 - 1900)){
            return true;
        }
        delay(10);
    }
    return false;
}

bool isClockValid() {
    timeval currenttime;
    gettimeofday(&currenttime, NULL);
    double ntp_sync_age_seconds = difftime(currenttime.tv_sec, NTP.getLastNTPSync());
    int32_t ntp_sync_age_seconds_int = static_cast<int32_t>(ntp_sync_age_seconds);
    lv_msg_send(MSG_SYNC_AGE, &ntp_sync_age_seconds_int);

    if(difftime(NTP.getLastNTPSync(), NTP.getFirstSync()) == 0) {
        // the status check needs to be stricter on the first sync
        if(NTP.syncStatus() == syncd) {
            lv_msg_send(MSG_SYNC_STATUS, "First sync successful");
            return true;
        } else {
            lv_msg_send(MSG_SYNC_STATUS, "Waiting for first sync");
            return false;
        }
    } else {
        // on a later sync we can also accept a partialSync since this regularly happens
        // during the sync process, where the status is at first partialSync and
        // then again syncd after a second sync step
        if(NTP.syncStatus() == syncd || NTP.syncStatus() == partialSync) {
            lv_msg_send(MSG_SYNC_STATUS, "Synced");

            if (ntp_sync_age_seconds > NTP_MAX_SYNC_AGE) {
                lv_msg_send(MSG_SYNC_STATUS, "Sync older than max age");

                return false;
            }

            lv_msg_send(MSG_SYNC_STATUS, "Synced");
            return true;
        } else {
            lv_msg_send(MSG_SYNC_STATUS, "Not synced");
            return false;
        }
    }
}

String formatTime(struct tm * info)
{
    if(!isClockValid()) {
        return "INOP";
    }

    char ts_char[10] = {0};
    strftime(ts_char,sizeof(ts_char),"%H:%M:%S", info);
    return String(ts_char);
}

String formatFractionalMinutes(double fractMinutes) {
    if(!isClockValid()) {
        return "INOP";
    }

    int hours = floor(fractMinutes / 60);
    int minutes = static_cast<int>(round(fractMinutes - hours * 60));

    char buffer[10];
    snprintf(buffer, sizeof(buffer), "%02d:%02d", hours, minutes);
    return String(buffer);
}