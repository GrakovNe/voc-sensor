#include <lib/U8g2/src/U8g2lib.h>
#include "screen.h"

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

void init_screen() {
    u8g2.begin();
    u8g2.clearDisplay();
    u8g2.clearBuffer();
    draw_tvoc(8888);
}

void draw_tvoc(int tvoc) {
    u8g2.drawXBMP(TVOC_FIRST_DIG_OFFSET, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[(tvoc / 1000)]);
    u8g2.drawXBMP(TVOC_SECOND_DIG_OFFSET, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[tvoc % 1000 / 100]);
    u8g2.drawXBMP(TVOC_THIRD_DIG_OFFSET, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[tvoc % 100 / 10]);
    u8g2.drawXBMP(TVOC_FOUR_DIG_OFFSET, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[tvoc % 10]);
    u8g2.sendBuffer();
}
