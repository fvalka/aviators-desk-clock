#include "clock_gui.h"
#include "Arduino.h"
#include "lvgl.h"

LV_FONT_DECLARE(font_fbw_eis_32);
LV_FONT_DECLARE(font_fbw_eis_22);
LV_FONT_DECLARE(font_mcdu_18);

static lv_point_t line_points[] = {{-320, 0},
                                   {320,  0}};

static void update_text_subscriber(lv_event_t *e);
static void update_text_subscriber_int(lv_event_t *e);

static lv_obj_t *dis;

void ui_switch_page(void) {
    static uint8_t n;
    n++;
    lv_obj_set_tile_id(dis, 0, n % UI_PAGE_COUNT, LV_ANIM_ON);
}

void ui_begin() {

    dis = lv_tileview_create(lv_scr_act());
    lv_obj_align(dis, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_obj_set_size(dis, LV_PCT(100), LV_PCT(100));
    lv_obj_remove_style(dis, 0, LV_PART_SCROLLBAR);

    lv_obj_t *tv1 = lv_tileview_add_tile(dis, 0, 0, LV_DIR_VER);
    lv_obj_t *tv2 = lv_tileview_add_tile(dis, 0, 1, LV_DIR_VER);
    lv_obj_t *tv3 = lv_tileview_add_tile(dis, 0, 2, LV_DIR_VER);
    lv_obj_t *tv4 = lv_tileview_add_tile(dis, 0, 3, LV_DIR_VER);


    /* page 1 */
    lv_obj_t *main_screen = lv_obj_create(tv1);
    lv_obj_set_size(main_screen, LV_PCT(100), LV_PCT(100));
    lv_obj_clear_flag(main_screen, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_border_width(main_screen, 0, 0);
    lv_obj_set_style_bg_color(main_screen, UI_BG_COLOR, 0);


    /*** UTC ***/

    lv_obj_t *zulu_heading = lv_label_create(main_screen);
    lv_obj_set_size(zulu_heading, LV_PCT(MAIN_SCREEN_LEFT_COLUMN_WIDTH), LV_SIZE_CONTENT);
    lv_obj_set_align( zulu_heading, LV_ALIGN_TOP_LEFT );
    lv_label_set_text(zulu_heading,"UTC");
    lv_obj_set_style_text_font(zulu_heading, &font_fbw_eis_22, 0);
    lv_obj_set_style_text_align(zulu_heading, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(zulu_heading, UI_FONT_COLOR, 0);

    lv_obj_t *zulu_content = lv_label_create(main_screen);
    lv_obj_set_size(zulu_content, LV_PCT(MAIN_SCREEN_LEFT_COLUMN_WIDTH), LV_SIZE_CONTENT);
    lv_obj_align_to(zulu_content, zulu_heading, LV_ALIGN_OUT_BOTTOM_LEFT, 0, MAIN_SCREEN_HEADING_CONTENT_PADDING);
    lv_label_set_text(zulu_content,"INOP");
    lv_obj_set_style_text_font(zulu_content, &font_fbw_eis_32, 0);
    lv_obj_set_style_text_align(zulu_content, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(zulu_content, UI_FONT_COLOR, 0);
    lv_obj_add_event_cb(zulu_content, update_text_subscriber, LV_EVENT_MSG_RECEIVED, NULL);
    lv_msg_subsribe_obj(MSG_GMTTIME, zulu_content, (void *) "%s");


    /*** LOCAL ***/

    lv_obj_t *localtime_heading = lv_label_create(main_screen);
    lv_obj_set_size(localtime_heading, LV_PCT(MAIN_SCREEN_LEFT_COLUMN_WIDTH), LV_SIZE_CONTENT);
    lv_obj_align_to(localtime_heading, zulu_content, LV_ALIGN_OUT_BOTTOM_LEFT, 0, MAIN_SCREEN_SECOND_ROW_PADDING);
    lv_label_set_text(localtime_heading,"LOCAL");
    lv_obj_set_style_text_font(localtime_heading, &font_fbw_eis_22, 0);
    lv_obj_set_style_text_align(localtime_heading, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(localtime_heading, UI_FONT_COLOR_LOCAL, 0);

    lv_obj_t *localtime_content = lv_label_create(main_screen);
    lv_obj_set_size(localtime_content, LV_PCT(MAIN_SCREEN_LEFT_COLUMN_WIDTH), LV_SIZE_CONTENT);
    lv_obj_align_to(localtime_content, localtime_heading, LV_ALIGN_OUT_BOTTOM_LEFT, 0, MAIN_SCREEN_HEADING_CONTENT_PADDING);
    lv_label_set_text(localtime_content,"INOP");
    lv_obj_set_style_text_font(localtime_content, &font_fbw_eis_32, 0);
    lv_obj_set_style_text_align(localtime_content, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(localtime_content, UI_FONT_COLOR_LOCAL, 0);
    lv_obj_add_event_cb(localtime_content, update_text_subscriber, LV_EVENT_MSG_RECEIVED, NULL);
    lv_msg_subsribe_obj(MSG_LOCALTIME, localtime_content, (void *) "%s");

    /*** BCMT ***/

    lv_obj_t *bcmt_heading = lv_label_create(main_screen);
    lv_obj_set_size(bcmt_heading, LV_PCT(MAIN_SCREEN_RIGHT_COLUMN_WIDTH), LV_SIZE_CONTENT);
    lv_obj_set_align( bcmt_heading, LV_ALIGN_TOP_RIGHT );
    lv_label_set_text(bcmt_heading,"BCMT");
    lv_obj_set_style_text_font(bcmt_heading, &font_fbw_eis_22, 0);
    lv_obj_set_style_text_align(bcmt_heading, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(bcmt_heading, UI_FONT_COLOR, 0);

    lv_obj_t *bcmt_content = lv_label_create(main_screen);
    lv_obj_set_size(bcmt_content, LV_PCT(MAIN_SCREEN_RIGHT_COLUMN_WIDTH), LV_SIZE_CONTENT);
    lv_obj_align_to(bcmt_content, bcmt_heading, LV_ALIGN_OUT_BOTTOM_LEFT, 0, MAIN_SCREEN_HEADING_CONTENT_PADDING);
    lv_label_set_text(bcmt_content,"INOP");
    lv_obj_set_style_text_font(bcmt_content, &font_fbw_eis_32, 0);
    lv_obj_set_style_text_align(bcmt_content, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(bcmt_content, UI_FONT_COLOR, 0);
    lv_obj_add_event_cb(bcmt_content, update_text_subscriber, LV_EVENT_MSG_RECEIVED, NULL);
    lv_msg_subsribe_obj(MSG_BCMT, bcmt_content, (void *) "%s");



    /*** ECET ***/

    lv_obj_t *ecet_heading = lv_label_create(main_screen);
    lv_obj_set_size(ecet_heading, LV_PCT(MAIN_SCREEN_RIGHT_COLUMN_WIDTH), LV_SIZE_CONTENT);
    lv_obj_align_to(ecet_heading, bcmt_content, LV_ALIGN_OUT_BOTTOM_LEFT, 0, MAIN_SCREEN_SECOND_ROW_PADDING);
    lv_label_set_text(ecet_heading,"ECET");
    lv_obj_set_style_text_font(ecet_heading, &font_fbw_eis_22, 0);
    lv_obj_set_style_text_align(ecet_heading, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(ecet_heading, UI_FONT_COLOR, 0);

    lv_obj_t *ecet_content = lv_label_create(main_screen);
    lv_obj_set_size(ecet_content, LV_PCT(MAIN_SCREEN_RIGHT_COLUMN_WIDTH), LV_SIZE_CONTENT);
    lv_obj_align_to(ecet_content, ecet_heading, LV_ALIGN_OUT_BOTTOM_LEFT, 0, MAIN_SCREEN_HEADING_CONTENT_PADDING);
    lv_label_set_text(ecet_content,"INOP");
    lv_obj_set_style_text_font(ecet_content, &font_fbw_eis_32, 0);
    lv_obj_set_style_text_align(ecet_content, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(ecet_content, UI_FONT_COLOR, 0);
    lv_obj_add_event_cb(ecet_content, update_text_subscriber, LV_EVENT_MSG_RECEIVED, NULL);
    lv_msg_subsribe_obj(MSG_ECET, ecet_content, (void *) "%s");

    /* DEBUG page */
    lv_obj_t *debug_label = lv_label_create(tv2);
    String text;
    esp_chip_info_t t;
    esp_chip_info(&t);
    text = "chip : ";
    text += ESP.getChipModel();
    text += "\n";
    text += "psram size : ";
    text += ESP.getPsramSize() / 1024;
    text += " KB\n";
    text += "flash size : ";
    text += ESP.getFlashChipSize() / 1024;
    text += " KB\n";
    text += ESP.getSketchMD5();



    lv_label_set_text(debug_label, text.c_str());
    lv_obj_align(debug_label, LV_ALIGN_TOP_LEFT, 0, 0);

    lv_obj_t *bat_label = lv_label_create(tv2);
    lv_obj_align_to(bat_label, debug_label, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);
    lv_obj_add_event_cb(bat_label, update_text_subscriber_int, LV_EVENT_MSG_RECEIVED, NULL);
    lv_msg_subsribe_obj(MSG_NEW_VOLT, bat_label, (void *) "Voltage: %d mV");

    lv_obj_t *uptime_label = lv_label_create(tv2);
    lv_obj_align_to(uptime_label, bat_label, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);
    lv_obj_add_event_cb(uptime_label, update_text_subscriber, LV_EVENT_MSG_RECEIVED, NULL);
    lv_msg_subsribe_obj(MSG_UPTIME, uptime_label, (void *) "Uptime: %s");

    lv_obj_t *ntp_status_label = lv_label_create(tv2);
    lv_obj_align_to(ntp_status_label, uptime_label, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);
    lv_obj_add_event_cb(ntp_status_label, update_text_subscriber, LV_EVENT_MSG_RECEIVED, NULL);
    lv_msg_subsribe_obj(MSG_SYNC_STATUS, ntp_status_label, (void *) "NTP status: %s");
    


}

static void update_text_subscriber(lv_event_t *e)
{
    lv_obj_t *label = lv_event_get_target(e);
    lv_msg_t *m = lv_event_get_msg(e);

    const char *t = (const char *) lv_msg_get_payload(m);
    const char *fmt = (const char *) lv_msg_get_user_data(m);

    lv_label_set_text_fmt(label, fmt, t);
}

static void update_text_subscriber_int(lv_event_t *e) {
    lv_obj_t *label = lv_event_get_target(e);
    lv_msg_t *m = lv_event_get_msg(e);

    const char *fmt = (const char *) lv_msg_get_user_data(m);
    const int32_t *v = (const int32_t *) lv_msg_get_payload(m);

    lv_label_set_text_fmt(label, fmt, *v);
}