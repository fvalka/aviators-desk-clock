#pragma once

#define UI_BG_COLOR    lv_color_black()
#define UI_FONT_COLOR  lv_color_white()
#define UI_FONT_COLOR_LOCAL lv_color_hex(0x50fa7b)
#define UI_PAGE_COUNT  2

#define MSG_NEW_VOLT   3
#define MSG_LOCALTIME 10
#define MSG_GMTTIME 11
#define MSG_BCMT 12
#define MSG_ECET 13
#define MSG_UPTIME 14
#define MSG_SYNC_STATUS 15

#define LV_DELAY(x)                                                                                                                                  \
  do {                                                                                                                                               \
    uint32_t t = x;                                                                                                                                  \
    while (t--) {                                                                                                                                    \
      lv_timer_handler();                                                                                                                            \
      delay(1);                                                                                                                                      \
    }                                                                                                                                                \
  } while (0);

#define MAIN_SCREEN_LEFT_COLUMN_WIDTH 60
#define MAIN_SCREEN_RIGHT_COLUMN_WIDTH 36

#define MAIN_SCREEN_SECOND_ROW_PADDING 26

#define MAIN_SCREEN_HEADING_CONTENT_PADDING 10

void ui_begin();
void ui_switch_page(void);