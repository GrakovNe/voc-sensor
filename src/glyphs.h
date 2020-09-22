#include <avr/pgmspace.h>

const static unsigned char dig_one[] PROGMEM = {
        0x00, 0xff, 0x07, 0x00, 0x00, 0xff, 0x07, 0x00, 0x00, 0xff, 0x07, 0x00,
        0x00, 0xff, 0x07, 0x00, 0x00, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00};

const static unsigned char dig_two[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_three[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0xf8, 0xff, 0x07,
        0x00, 0xf8, 0xff, 0x07, 0x00, 0xf8, 0xff, 0x07, 0x00, 0xf8, 0xff, 0x07,
        0x00, 0xf8, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_four[]PROGMEM = {
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07};

const static unsigned char dig_five[]PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_six[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_seven[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07};

const static unsigned char dig_eight[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_nine[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_zero[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char calibration[] PROGMEM = {
        0xff, 0xf3, 0x3f, 0x03, 0x30, 0xff, 0xf3, 0x3f, 0xff, 0xf3, 0x3f, 0xf3,
        0x3f, 0x03, 0x03, 0xff, 0xf3, 0x3f, 0x03, 0x30, 0xff, 0xf3, 0x3f, 0xff,
        0xf3, 0x3f, 0xf3, 0x3f, 0x07, 0x03, 0x03, 0x30, 0x30, 0x03, 0x30, 0x03,
        0x33, 0x30, 0x03, 0x03, 0x03, 0x33, 0x30, 0x0f, 0x03, 0x03, 0x30, 0x30,
        0x03, 0x30, 0x03, 0x33, 0x30, 0x03, 0x03, 0x03, 0x33, 0x30, 0x1f, 0x03,
        0x03, 0xf0, 0x3f, 0x03, 0x30, 0xff, 0xf3, 0x3f, 0xff, 0x03, 0x03, 0x33,
        0x30, 0x3b, 0x03, 0x03, 0xf0, 0x3f, 0x03, 0x30, 0xff, 0xf3, 0x3f, 0xff,
        0x03, 0x03, 0x33, 0x30, 0x73, 0x03, 0x03, 0x30, 0x30, 0x03, 0x30, 0x03,
        0x33, 0x07, 0x03, 0x03, 0x03, 0x33, 0x30, 0xe3, 0x03, 0x03, 0x30, 0x30,
        0x03, 0x30, 0x03, 0x33, 0x0e, 0x03, 0x03, 0x03, 0x33, 0x30, 0xc3, 0x03,
        0xff, 0x33, 0x30, 0xff, 0x33, 0xff, 0x33, 0x1c, 0x03, 0x03, 0x03, 0xf3,
        0x3f, 0x83, 0x03, 0xff, 0x33, 0x30, 0xff, 0x33, 0xff, 0x33, 0x38, 0x03,
        0x03, 0x03, 0xf3, 0x3f, 0x03, 0x03 };


static const char dig_width = 27;
static const char dig_height = 27;

static const char calibration_width = 114;
static const char calibration_height = 10;

const unsigned char *const digits[10] = {
        dig_zero, dig_one, dig_two, dig_three, dig_four, dig_five, dig_six, dig_seven, dig_eight, dig_nine
};