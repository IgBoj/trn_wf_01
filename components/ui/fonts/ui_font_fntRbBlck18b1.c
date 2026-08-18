/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font D:/ESP/sqls_ws/learn/l01/assets/Roboto-Black.ttf -o D:/ESP/sqls_ws/learn/l01/assets\ui_font_fntRbBlck18b1.c --format lvgl --symbols АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&'()*+,-./:;<=>?@[\]^_{|}~
 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FNTRBBLCK18B1
#define UI_FONT_FNTRBBLCK18B1 1
#endif

#if UI_FONT_FNTRBBLCK18B1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xe3, 0xfe,

    /* U+0023 "#" */
    0x9, 0x6, 0xc1, 0xb1, 0xff, 0x7f, 0xc4, 0x81,
    0x23, 0xfe, 0xff, 0x8d, 0x83, 0x60, 0xd8, 0x24,
    0x0,

    /* U+0024 "$" */
    0x8, 0x4, 0x2, 0x7, 0xc7, 0xf7, 0xff, 0x8f,
    0xc0, 0xf8, 0x3f, 0x7, 0xc0, 0xfe, 0x3f, 0x1d,
    0xfc, 0x7c, 0x8, 0x4, 0x0,

    /* U+0025 "%" */
    0x78, 0xf, 0xc0, 0xcc, 0xcc, 0xd8, 0xff, 0x7,
    0xb0, 0x6, 0x0, 0xde, 0xf, 0xf1, 0xb3, 0x33,
    0x31, 0x3f, 0x1, 0xe0,

    /* U+0026 "&" */
    0x1e, 0x3, 0xf0, 0x77, 0x7, 0x70, 0x7f, 0x3,
    0xe0, 0x7c, 0x7, 0xee, 0xef, 0xee, 0x7e, 0xe3,
    0xc7, 0xfc, 0x3f, 0xe0,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x0, 0x63, 0x8c, 0x71, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x87, 0x1c, 0x38, 0x70, 0x80,

    /* U+0029 ")" */
    0x1, 0x87, 0xc, 0x38, 0x61, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x63, 0x8e, 0x73, 0x84, 0x0,

    /* U+002A "*" */
    0x18, 0x18, 0x9a, 0xff, 0x38, 0x3c, 0x6c, 0x44,

    /* U+002B "+" */
    0x1c, 0xe, 0x7, 0x3, 0x8f, 0xff, 0xfc, 0x70,
    0x38, 0x1c, 0xe, 0x0,

    /* U+002C "," */
    0x77, 0x77, 0xe4,

    /* U+002D "-" */
    0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xc, 0x31, 0x86, 0x18, 0xe3, 0xc, 0x31, 0x86,
    0x18, 0xc3, 0xc, 0x0,

    /* U+0030 "0" */
    0x3e, 0x3f, 0xbd, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xdd, 0xcf, 0xe3, 0xe0,

    /* U+0031 "1" */
    0xd, 0xff, 0xff, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c,

    /* U+0032 "2" */
    0x3e, 0x3f, 0xbc, 0xfc, 0x70, 0x38, 0x3c, 0x1c,
    0x1c, 0x1c, 0x1e, 0x1e, 0x1f, 0xff, 0xf8,

    /* U+0033 "3" */
    0x3e, 0x3f, 0xb8, 0xe0, 0x70, 0x38, 0xf8, 0x78,
    0x3e, 0x3, 0x81, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+0034 "4" */
    0x7, 0x3, 0xc1, 0xf0, 0x7c, 0x3f, 0xd, 0xc7,
    0x73, 0x9c, 0xff, 0xff, 0xf0, 0x70, 0x1c, 0x7,
    0x0,

    /* U+0035 "5" */
    0x7f, 0xbf, 0xd8, 0xc, 0xf, 0xe7, 0xf8, 0x9e,
    0x7, 0x3, 0xf1, 0xf9, 0xef, 0xe3, 0xe0,

    /* U+0036 "6" */
    0xe, 0x1f, 0x1e, 0xe, 0xe, 0xe7, 0xfb, 0x9f,
    0xc7, 0xe3, 0xf1, 0xdd, 0xef, 0xe3, 0xe0,

    /* U+0037 "7" */
    0xff, 0xff, 0xc0, 0xe0, 0xe0, 0x70, 0x70, 0x38,
    0x1c, 0x1c, 0xe, 0xe, 0x7, 0x7, 0x80,

    /* U+0038 "8" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x3b, 0xf8, 0xf8,
    0xfe, 0xe3, 0xf1, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+0039 "9" */
    0x3e, 0x3f, 0xbd, 0xdc, 0x7e, 0x3f, 0x1d, 0xfe,
    0x7f, 0x3, 0x83, 0x83, 0xc7, 0xc3, 0x80,

    /* U+003A ":" */
    0xff, 0x80, 0x7, 0xfc,

    /* U+003B ";" */
    0xff, 0x80, 0x0, 0xff, 0xfd, 0x0,

    /* U+003C "<" */
    0x1, 0xf, 0x3f, 0xfc, 0xe0, 0xfc, 0x3f, 0xf,
    0x1,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0x80, 0xe0, 0xfc, 0x3f, 0xf, 0x3f, 0xfc, 0xe0,
    0x80,

    /* U+003F "?" */
    0x3e, 0x3f, 0x9c, 0xe0, 0x70, 0x78, 0x78, 0x78,
    0x38, 0x1c, 0x0, 0x7, 0x3, 0x81, 0xc0,

    /* U+0040 "@" */
    0x7, 0xe0, 0x3f, 0xf0, 0xf0, 0xf3, 0x80, 0x66,
    0x3c, 0xec, 0xfc, 0xf3, 0x99, 0xe6, 0x33, 0xcc,
    0x67, 0x99, 0x8f, 0x33, 0x36, 0x7f, 0xee, 0x77,
    0x8c, 0x0, 0x1e, 0x0, 0x1f, 0xe0, 0xf, 0xc0,

    /* U+0041 "A" */
    0xf, 0x0, 0xf0, 0xf, 0x81, 0xf8, 0x1f, 0x83,
    0x9c, 0x39, 0xc3, 0x9c, 0x7f, 0xe7, 0xfe, 0x70,
    0xff, 0x7, 0xe0, 0x70,

    /* U+0042 "B" */
    0xff, 0x3f, 0xee, 0x1f, 0x87, 0xe1, 0xff, 0xff,
    0xfb, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0xfe, 0xff,
    0x0,

    /* U+0043 "C" */
    0x1f, 0x7, 0xf9, 0xc7, 0x70, 0x7e, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1c, 0x1d, 0xc7, 0x9f,
    0xe1, 0xf0,

    /* U+0044 "D" */
    0xfe, 0x3f, 0xce, 0x3b, 0x86, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0xee, 0x3b, 0xfc, 0xfe,
    0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0xfb, 0xfd,
    0xc0, 0xe0, 0x70, 0x38, 0x1f, 0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0x3, 0xfd,
    0xfe, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x0,

    /* U+0047 "G" */
    0x1f, 0x87, 0xf9, 0xc7, 0xf0, 0x7e, 0x1, 0xc0,
    0x38, 0xff, 0x1f, 0xe0, 0xfc, 0x1d, 0xc3, 0x9f,
    0xf1, 0xf8,

    /* U+0048 "H" */
    0xe0, 0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0xf, 0xff,
    0xff, 0xff, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7e, 0xe,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+004A "J" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe,
    0x7, 0x3, 0xf1, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+004B "K" */
    0xe3, 0xdc, 0x7b, 0x9e, 0x77, 0x8e, 0xe1, 0xfc,
    0x3f, 0x87, 0xf0, 0xff, 0x1c, 0xf3, 0x8e, 0x71,
    0xee, 0x1c,

    /* U+004C "L" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1f, 0xff, 0xf8,

    /* U+004D "M" */
    0xf0, 0x3f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xfc,
    0xff, 0xf3, 0xfe, 0xcd, 0xfb, 0xf7, 0xef, 0xdf,
    0x9e, 0x7e, 0x79, 0xf9, 0xe7, 0xe3, 0x1c,

    /* U+004E "N" */
    0xe0, 0xfe, 0x1f, 0xe3, 0xfc, 0x7f, 0xcf, 0xf9,
    0xfb, 0xbf, 0x3f, 0xe7, 0xfc, 0x7f, 0x8f, 0xf0,
    0xfe, 0xe,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfc, 0x1d, 0xc7, 0x1f,
    0xc1, 0xf0,

    /* U+0050 "P" */
    0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1, 0xf8, 0x7f,
    0xfb, 0xfc, 0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0,
    0x0,

    /* U+0051 "Q" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfc, 0x1d, 0xc7, 0x1f,
    0xc1, 0xfc, 0x3, 0xc0, 0x30,

    /* U+0052 "R" */
    0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1, 0xf8, 0xff,
    0xfb, 0xfc, 0xe7, 0x39, 0xee, 0x3b, 0x8f, 0xe1,
    0xc0,

    /* U+0053 "S" */
    0x1f, 0x87, 0xf9, 0xc3, 0xb8, 0x77, 0x80, 0x7e,
    0x7, 0xf0, 0x3e, 0x1, 0xee, 0x1d, 0xc3, 0x9f,
    0xe1, 0xf8,

    /* U+0054 "T" */
    0xff, 0xff, 0xfc, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0x80, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xe0,

    /* U+0055 "U" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x7f, 0x3d, 0xfe, 0x3f,
    0x0,

    /* U+0056 "V" */
    0xf0, 0xff, 0xe, 0x70, 0xe7, 0xe, 0x79, 0xc3,
    0x9c, 0x39, 0xc3, 0xb8, 0x1f, 0x81, 0xf8, 0x1f,
    0x0, 0xf0, 0xf, 0x0,

    /* U+0057 "W" */
    0xe3, 0x8f, 0xe7, 0x1d, 0xcf, 0x3b, 0x9e, 0x77,
    0x7c, 0xce, 0xfb, 0x8d, 0xff, 0x1f, 0x7e, 0x3e,
    0xfc, 0x7c, 0xf0, 0xf9, 0xe0, 0xe3, 0xc1, 0xc7,
    0x80,

    /* U+0058 "X" */
    0xf0, 0xee, 0x3d, 0xe7, 0x1d, 0xc1, 0xf8, 0x3e,
    0x3, 0xc0, 0xf8, 0x1f, 0x87, 0x71, 0xe7, 0x38,
    0xff, 0xe,

    /* U+0059 "Y" */
    0xe0, 0xee, 0x39, 0xc7, 0x1d, 0xc3, 0xb8, 0x36,
    0x7, 0xc0, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xe0,

    /* U+005A "Z" */
    0xff, 0xff, 0xf0, 0x38, 0x1e, 0x7, 0x3, 0x81,
    0xe0, 0x70, 0x38, 0x1e, 0x7, 0x3, 0xff, 0xff,
    0xc0,

    /* U+005B "[" */
    0xff, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee,
    0xef, 0xf0,

    /* U+005C "\\" */
    0xe0, 0xe0, 0x70, 0x70, 0x78, 0x38, 0x38, 0x1c,
    0x1c, 0x1c, 0xe, 0xe, 0xf, 0x7, 0x7,

    /* U+005D "]" */
    0xff, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77,
    0x7f, 0xf0,

    /* U+005E "^" */
    0x18, 0x1c, 0x3c, 0x3c, 0x66, 0x66, 0x67,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0061 "a" */
    0x3c, 0x7e, 0xe7, 0x7, 0x3f, 0xff, 0xe7, 0xe7,
    0xff, 0x7f,

    /* U+0062 "b" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0xe7, 0xfb, 0x9f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0xff, 0xf7, 0x70,

    /* U+0063 "c" */
    0x3e, 0x3f, 0xb9, 0xdc, 0x6e, 0x7, 0x3, 0x81,
    0xee, 0x7f, 0x1f, 0x0,

    /* U+0064 "d" */
    0x3, 0x81, 0xc0, 0xe0, 0x73, 0xbb, 0xff, 0xcf,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfe, 0x77, 0xf9, 0xdc,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xbc, 0xfc, 0x7f, 0xff, 0xff, 0x80,
    0xe2, 0x7f, 0x8f, 0x0,

    /* U+0066 "f" */
    0xe, 0x7c, 0xe1, 0xcf, 0xff, 0xce, 0x1c, 0x38,
    0x70, 0xe1, 0xc3, 0x87, 0x0,

    /* U+0067 "g" */
    0x3f, 0xbf, 0xfc, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xe7, 0x7f, 0x9f, 0xc0, 0xec, 0xf7, 0xf1, 0xf0,

    /* U+0068 "h" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0xf7, 0xfb, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1c,

    /* U+0069 "i" */
    0xff, 0x8f, 0xff, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x39, 0xce, 0x3, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9c, 0xe7, 0xf7, 0x0,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7f, 0x7b, 0xb9,
    0xf8, 0xfc, 0x7f, 0x3f, 0x9c, 0xee, 0x77, 0x1c,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xee, 0x7b, 0xff, 0xfe, 0x71, 0xf9, 0xc7, 0xe7,
    0x1f, 0x9c, 0x7e, 0x71, 0xf9, 0xc7, 0xe7, 0x1f,
    0x9c, 0x70,

    /* U+006E "n" */
    0xef, 0x7f, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xc0,

    /* U+006F "o" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xef, 0x7f, 0x1f, 0x0,

    /* U+0070 "p" */
    0xee, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xcf, 0xff, 0x7f, 0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+0071 "q" */
    0x3b, 0xbf, 0xfc, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xe7, 0x7f, 0x9d, 0xc0, 0xe0, 0x70, 0x38, 0x1c,

    /* U+0072 "r" */
    0xef, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x80,

    /* U+0073 "s" */
    0x3e, 0x3f, 0x99, 0xce, 0x7, 0xe1, 0xf8, 0x1d,
    0xc6, 0x7f, 0x1f, 0x0,

    /* U+0074 "t" */
    0x71, 0xc7, 0x3f, 0xfd, 0xc7, 0x1c, 0x71, 0xc7,
    0x5f, 0x3c,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xff, 0xbd, 0xc0,

    /* U+0076 "v" */
    0xe3, 0xf1, 0xdd, 0xce, 0xe7, 0x73, 0xb8, 0xf8,
    0x7c, 0x3e, 0xe, 0x0,

    /* U+0077 "w" */
    0xe6, 0x37, 0x3b, 0x99, 0xdc, 0xde, 0xe7, 0xf7,
    0x3e, 0xf1, 0xf7, 0x87, 0x3c, 0x39, 0xe1, 0xc6,
    0x0,

    /* U+0078 "x" */
    0xf3, 0xbb, 0x8f, 0xc7, 0xc1, 0xe1, 0xf0, 0xf8,
    0xee, 0x77, 0x71, 0xc0,

    /* U+0079 "y" */
    0xe3, 0xf1, 0xdd, 0xce, 0xe7, 0x71, 0xf0, 0xf8,
    0x7c, 0x1c, 0xe, 0x7, 0xf, 0x7, 0x83, 0x80,

    /* U+007A "z" */
    0xff, 0xff, 0xe, 0xe, 0x1c, 0x38, 0x78, 0x70,
    0xff, 0xff,

    /* U+007B "{" */
    0xc, 0x73, 0x8e, 0x38, 0xe3, 0xbc, 0xe3, 0xc3,
    0x8e, 0x38, 0xe3, 0x87, 0xc,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xc7, 0x1c, 0xe7, 0x39, 0xcf, 0x1b, 0xdc, 0xe7,
    0x39, 0xdc, 0xc0,

    /* U+007E "~" */
    0x71, 0xfe, 0x6c, 0xfb, 0x1c,

    /* U+0401 "Ё" */
    0x77, 0x3b, 0x80, 0x1f, 0xff, 0xff, 0x3, 0x81,
    0xc0, 0xff, 0x7f, 0xb8, 0x1c, 0xe, 0x7, 0x3,
    0xff, 0xff,

    /* U+0410 "А" */
    0xf, 0x0, 0xf0, 0xf, 0x81, 0xf8, 0x1f, 0x83,
    0x9c, 0x39, 0xc3, 0x9c, 0x7f, 0xe7, 0xfe, 0x70,
    0xff, 0x7, 0xe0, 0x70,

    /* U+0411 "Б" */
    0xff, 0xbf, 0xee, 0x3, 0x80, 0xe0, 0x3f, 0xcf,
    0xfb, 0x8f, 0xe1, 0xf8, 0x7e, 0x3f, 0xfe, 0xfe,
    0x0,

    /* U+0412 "В" */
    0xff, 0x3f, 0xee, 0x1f, 0x87, 0xe1, 0xff, 0xff,
    0xfb, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0xfe, 0xff,
    0x0,

    /* U+0413 "Г" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x0,

    /* U+0414 "Д" */
    0x1f, 0xf0, 0xff, 0x87, 0x1c, 0x38, 0xe1, 0xc7,
    0xe, 0x38, 0x71, 0xc7, 0x8e, 0x38, 0x71, 0xc3,
    0x9e, 0x1d, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0x80,
    0xfc, 0x7,

    /* U+0415 "Е" */
    0xff, 0xff, 0xf8, 0x1c, 0xe, 0x7, 0xfb, 0xfd,
    0xc0, 0xe0, 0x70, 0x38, 0x1f, 0xff, 0xf8,

    /* U+0416 "Ж" */
    0x70, 0xe3, 0xcf, 0x1c, 0x78, 0xe3, 0x9e, 0x1e,
    0x73, 0x81, 0xce, 0xf0, 0x1f, 0xfc, 0x3, 0xff,
    0x80, 0xff, 0xf8, 0x1c, 0xe7, 0x7, 0x9c, 0xf1,
    0xe3, 0x8e, 0x3c, 0x71, 0xef, 0xe, 0x1c,

    /* U+0417 "З" */
    0x1f, 0x1f, 0xe7, 0x1c, 0x7, 0x1, 0xc3, 0xe0,
    0xf0, 0x3f, 0x1, 0xc0, 0x77, 0x1d, 0xfe, 0x1f,
    0x0,

    /* U+0418 "И" */
    0xe0, 0xfc, 0x3f, 0x8f, 0xf1, 0xfe, 0x7f, 0xcf,
    0xfb, 0xbf, 0xe7, 0xfc, 0xff, 0x1f, 0xe3, 0xf8,
    0x7e, 0xe,

    /* U+0419 "Й" */
    0x31, 0x87, 0xf0, 0x7c, 0x0, 0xe, 0xf, 0xc3,
    0xf8, 0xff, 0x1f, 0xe7, 0xfc, 0xff, 0xbb, 0xfe,
    0x7f, 0xcf, 0xf1, 0xfe, 0x3f, 0x87, 0xe0, 0xe0,

    /* U+041A "К" */
    0xe3, 0xdc, 0x7b, 0x9e, 0x73, 0x8e, 0xf1, 0xfc,
    0x3f, 0x87, 0xf8, 0xe7, 0x1c, 0xf3, 0x8e, 0x71,
    0xee, 0x1e,

    /* U+041B "Л" */
    0x1f, 0xf1, 0xff, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x73, 0xc7, 0xf8,
    0x7f, 0x87, 0xf0, 0x70,

    /* U+041C "М" */
    0xf0, 0x3f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xfc,
    0xff, 0xf3, 0xfe, 0xcd, 0xfb, 0xf7, 0xef, 0xdf,
    0x9e, 0x7e, 0x79, 0xf9, 0xe7, 0xe3, 0x1c,

    /* U+041D "Н" */
    0xe0, 0xfc, 0x1f, 0x83, 0xf0, 0x7e, 0xf, 0xff,
    0xff, 0xff, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7e, 0xe,

    /* U+041E "О" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfc, 0x1d, 0xc7, 0x1f,
    0xc1, 0xf0,

    /* U+041F "П" */
    0xff, 0xff, 0xff, 0x83, 0xf0, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7e, 0xe,

    /* U+0420 "Р" */
    0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1, 0xf8, 0x7f,
    0xfb, 0xfc, 0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0,
    0x0,

    /* U+0421 "С" */
    0x1f, 0x7, 0xf9, 0xc7, 0x70, 0x7e, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1c, 0x1d, 0xc7, 0x9f,
    0xe1, 0xf0,

    /* U+0422 "Т" */
    0xff, 0xff, 0xfc, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0x80, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xe0,

    /* U+0423 "У" */
    0xe0, 0xfe, 0x39, 0xc7, 0x3d, 0xe3, 0xb8, 0x7f,
    0x7, 0xc0, 0xf8, 0xe, 0x1, 0xc0, 0x38, 0x1e,
    0x3, 0x80,

    /* U+0424 "Ф" */
    0x7, 0x0, 0x38, 0x7, 0xf0, 0xff, 0xe7, 0x77,
    0x73, 0x9f, 0x9c, 0xfc, 0xe7, 0xe7, 0x3f, 0x39,
    0xdd, 0xdc, 0xff, 0xe1, 0xfc, 0x3, 0x80, 0x1c,
    0x0,

    /* U+0425 "Х" */
    0xf0, 0xee, 0x3d, 0xe7, 0x1d, 0xc1, 0xf8, 0x3e,
    0x3, 0xc0, 0xf8, 0x1f, 0x87, 0x71, 0xe7, 0x38,
    0xff, 0xe,

    /* U+0426 "Ц" */
    0xe0, 0xe7, 0x7, 0x38, 0x39, 0xc1, 0xce, 0xe,
    0x70, 0x73, 0x83, 0x9c, 0x1c, 0xe0, 0xe7, 0x7,
    0x38, 0x39, 0xff, 0xff, 0xff, 0x80, 0x1c, 0x0,
    0xe0, 0x7,

    /* U+0427 "Ч" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xf8, 0x77,
    0xfc, 0xff, 0x1, 0xc0, 0x70, 0x1c, 0x7, 0x1,
    0xc0,

    /* U+0428 "Ш" */
    0xe3, 0x8f, 0xc7, 0x1f, 0x8e, 0x3f, 0x1c, 0x7e,
    0x38, 0xfc, 0x71, 0xf8, 0xe3, 0xf1, 0xc7, 0xe3,
    0x8f, 0xc7, 0x1f, 0x8e, 0x3f, 0xff, 0xff, 0xff,
    0xe0,

    /* U+0429 "Щ" */
    0xe3, 0x87, 0x71, 0xc3, 0xb8, 0xe1, 0xdc, 0x70,
    0xee, 0x38, 0x77, 0x1c, 0x3b, 0x8e, 0x1d, 0xc7,
    0xe, 0xe3, 0x87, 0x71, 0xc3, 0xb8, 0xe1, 0xdf,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x1c, 0x0, 0xe,
    0x0, 0x7,

    /* U+042A "Ъ" */
    0xfe, 0x3, 0xf8, 0x0, 0xe0, 0x3, 0x80, 0xe,
    0x0, 0x3f, 0xc0, 0xff, 0x83, 0x8f, 0xe, 0x1c,
    0x38, 0x70, 0xe3, 0xc3, 0xfe, 0xf, 0xf0,

    /* U+042B "Ы" */
    0xe0, 0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0,
    0x1f, 0xfc, 0x7f, 0xf9, 0xf8, 0xf7, 0xe1, 0xdf,
    0x87, 0x7e, 0x3d, 0xff, 0xe7, 0xfe, 0x1c,

    /* U+042C "Ь" */
    0xe0, 0x38, 0xe, 0x3, 0x80, 0xe0, 0x3f, 0xcf,
    0xfb, 0x8f, 0xe1, 0xf8, 0x7e, 0x3f, 0xfe, 0xfe,
    0x0,

    /* U+042D "Э" */
    0x1f, 0xf, 0xf3, 0xc7, 0x70, 0x70, 0xe, 0x1f,
    0xc3, 0xf8, 0x7, 0xe0, 0xfc, 0x1d, 0xc7, 0x3f,
    0xc1, 0xf0,

    /* U+042E "Ю" */
    0xe1, 0xf1, 0xc7, 0xf3, 0x9c, 0x77, 0x78, 0x7e,
    0xe0, 0xfd, 0xc1, 0xff, 0x83, 0xff, 0x7, 0xee,
    0xf, 0xde, 0x1f, 0x9c, 0x77, 0x1f, 0xce, 0x1f,
    0x0,

    /* U+042F "Я" */
    0x1f, 0xcf, 0xf7, 0x1d, 0xc7, 0x71, 0xdc, 0x73,
    0xfc, 0x7f, 0x39, 0xce, 0x77, 0x1d, 0xc7, 0xf1,
    0xc0,

    /* U+0430 "а" */
    0x3c, 0x7e, 0xe7, 0x7, 0x3f, 0xff, 0xe7, 0xe7,
    0xff, 0x7f,

    /* U+0431 "б" */
    0x3, 0x3, 0x8f, 0xcf, 0x86, 0x7, 0x3, 0x79,
    0xfe, 0xf3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3b, 0xf8,
    0xf8,

    /* U+0432 "в" */
    0xfc, 0x7f, 0xb9, 0xdc, 0xef, 0xf7, 0xfb, 0x8d,
    0xc7, 0xff, 0x7f, 0x0,

    /* U+0433 "г" */
    0xff, 0xff, 0x87, 0xe, 0x1c, 0x38, 0x70, 0xe1,
    0xc0,

    /* U+0434 "д" */
    0x3f, 0xc7, 0xf8, 0xe7, 0x1c, 0xe3, 0x9c, 0x73,
    0x8e, 0x73, 0x8e, 0xff, 0xff, 0xff, 0x83, 0xf0,
    0x7e, 0xe,

    /* U+0435 "е" */
    0x3e, 0x3f, 0xbc, 0xfc, 0x7f, 0xff, 0xff, 0x80,
    0xe2, 0x7f, 0x8f, 0x0,

    /* U+0436 "ж" */
    0xf3, 0x9e, 0xe7, 0x3d, 0xce, 0x71, 0xdd, 0xc3,
    0xff, 0x87, 0xff, 0xf, 0xfe, 0x3d, 0xde, 0x73,
    0x9d, 0xe7, 0x3c,

    /* U+0437 "з" */
    0x3e, 0x3f, 0xdc, 0xe3, 0xf1, 0xf0, 0xfc, 0xe,
    0xe7, 0x7f, 0x1f, 0x0,

    /* U+0438 "и" */
    0xe3, 0xf3, 0xf9, 0xfd, 0xfe, 0xff, 0xdf, 0xef,
    0xe7, 0xf3, 0xf1, 0xc0,

    /* U+0439 "й" */
    0x63, 0x1f, 0x8f, 0x80, 0xe, 0x3f, 0x3f, 0x9f,
    0xdf, 0xef, 0xfd, 0xfe, 0xfe, 0x7f, 0x3f, 0x1c,

    /* U+043A "к" */
    0xe7, 0xf3, 0xbb, 0xdd, 0xcf, 0xe7, 0xf3, 0xf9,
    0xde, 0xe7, 0xf3, 0xc0,

    /* U+043B "л" */
    0x3f, 0xcf, 0xf3, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0x9f, 0xe7, 0xf1, 0xf8, 0x70,

    /* U+043C "м" */
    0xf0, 0xff, 0xf, 0xf9, 0xff, 0x9f, 0xf9, 0xff,
    0xff, 0xef, 0x7e, 0xf7, 0xef, 0x7e, 0x67,

    /* U+043D "н" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7f, 0xff, 0xff, 0x8f,
    0xc7, 0xe3, 0xf1, 0xc0,

    /* U+043E "о" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xef, 0x7f, 0x1f, 0x0,

    /* U+043F "п" */
    0xff, 0xff, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xc0,

    /* U+0440 "р" */
    0xee, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xcf, 0xff, 0x7f, 0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+0441 "с" */
    0x3e, 0x3f, 0xb9, 0xdc, 0x6e, 0x7, 0x3, 0x81,
    0xee, 0x7f, 0x1f, 0x0,

    /* U+0442 "т" */
    0xff, 0xff, 0xc7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x0,

    /* U+0443 "у" */
    0xe3, 0xf1, 0xdd, 0xce, 0xe7, 0x71, 0xf0, 0xf8,
    0x7c, 0x1c, 0xe, 0x7, 0xf, 0x7, 0x83, 0x80,

    /* U+0444 "ф" */
    0x7, 0x0, 0x70, 0x7, 0x0, 0x70, 0x3f, 0xc7,
    0xfe, 0xf7, 0x7e, 0x77, 0xe7, 0x7e, 0x77, 0xe7,
    0x7e, 0x77, 0x7f, 0xe3, 0xfc, 0x7, 0x0, 0x70,
    0x7, 0x0, 0x70,

    /* U+0445 "х" */
    0xf3, 0xbb, 0x8f, 0xc7, 0xc1, 0xe1, 0xf0, 0xf8,
    0xee, 0x77, 0x71, 0xc0,

    /* U+0446 "ц" */
    0xe3, 0xb8, 0xee, 0x3b, 0x8e, 0xe3, 0xb8, 0xee,
    0x3b, 0x8e, 0xff, 0xff, 0xf0, 0x1c, 0x7, 0x1,
    0xc0,

    /* U+0447 "ч" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3b, 0xfc, 0xfe,
    0x7, 0x3, 0x81, 0xc0,

    /* U+0448 "ш" */
    0xe7, 0x3f, 0x39, 0xf9, 0xcf, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0xe7, 0xff, 0xff, 0xff,
    0xc0,

    /* U+0449 "щ" */
    0xe7, 0x39, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce,
    0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73, 0x9c, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x38, 0x0, 0x70, 0x0,
    0xe0,

    /* U+044A "ъ" */
    0xfc, 0xf, 0xc0, 0x1c, 0x1, 0xfc, 0x1f, 0xe1,
    0xc7, 0x1c, 0x71, 0xc7, 0x1f, 0xe1, 0xfc,

    /* U+044B "ы" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xfc, 0x7f, 0xf3,
    0xf1, 0xdf, 0x8e, 0xfc, 0x77, 0xff, 0x3f, 0xf1,
    0xc0,

    /* U+044C "ь" */
    0xe0, 0x70, 0x38, 0x1f, 0xcf, 0xf7, 0x1f, 0x8f,
    0xc7, 0xff, 0x7f, 0x0,

    /* U+044D "э" */
    0x3e, 0x3f, 0x9c, 0xe0, 0x70, 0xf8, 0x7f, 0x8e,
    0xe7, 0x7f, 0x1f, 0x0,

    /* U+044E "ю" */
    0xe3, 0xe7, 0x3f, 0xbb, 0xdf, 0xdc, 0x7f, 0xe3,
    0xff, 0x1f, 0xb8, 0xfd, 0xef, 0xe7, 0xf7, 0x1f,
    0x0,

    /* U+044F "я" */
    0x3f, 0xbf, 0xf8, 0xfc, 0x7e, 0x3b, 0xfc, 0xfe,
    0xe7, 0x73, 0xf1, 0xc0,

    /* U+0451 "ё" */
    0xe7, 0x73, 0x80, 0x7, 0xc7, 0xf7, 0x9f, 0x8f,
    0xff, 0xff, 0xf0, 0x1c, 0x4f, 0xf1, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 72, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 80, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 167, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 167, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 44, .adv_w = 214, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 194, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 44, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 86, .adv_w = 102, .box_w = 6, .box_h = 19, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 101, .adv_w = 102, .box_w = 6, .box_h = 19, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 116, .adv_w = 134, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 124, .adv_w = 154, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 136, .adv_w = 78, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 139, .adv_w = 130, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 141, .adv_w = 87, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 101, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 155, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 167, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 167, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 167, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 86, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 83, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 312, .adv_w = 147, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 321, .adv_w = 169, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 327, .adv_w = 148, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 336, .adv_w = 147, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 258, .box_w = 15, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 383, .adv_w = 196, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 186, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 189, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 186, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 158, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 196, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 202, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 87, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 162, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 184, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 252, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 202, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 199, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 199, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 671, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 180, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 706, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 191, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 190, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 250, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 184, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 181, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 176, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 839, .adv_w = 81, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 849, .adv_w = 123, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 864, .adv_w = 81, .box_w = 4, .box_h = 19, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 874, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 881, .adv_w = 127, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 883, .adv_w = 153, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 104, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 166, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 978, .adv_w = 163, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 994, .adv_w = 79, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1000, .adv_w = 78, .box_w = 5, .box_h = 18, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1012, .adv_w = 158, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 79, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1034, .adv_w = 248, .box_w = 14, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1076, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1092, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1108, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1116, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1128, .adv_w = 99, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1138, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1150, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1162, .adv_w = 209, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1179, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1191, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1207, .adv_w = 148, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1217, .adv_w = 94, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1230, .adv_w = 74, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1234, .adv_w = 94, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1245, .adv_w = 182, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1250, .adv_w = 161, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1268, .adv_w = 196, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 180, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1305, .adv_w = 186, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1322, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1337, .adv_w = 214, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1363, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1378, .adv_w = 300, .box_w = 19, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1409, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1426, .adv_w = 200, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1444, .adv_w = 200, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1468, .adv_w = 186, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 203, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1506, .adv_w = 252, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 202, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1547, .adv_w = 199, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1565, .adv_w = 203, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1583, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1600, .adv_w = 189, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1618, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1636, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1654, .adv_w = 241, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1679, .adv_w = 184, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1697, .adv_w = 222, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1723, .adv_w = 201, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1740, .adv_w = 278, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 301, .box_w = 17, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1799, .adv_w = 224, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1822, .adv_w = 251, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1845, .adv_w = 179, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1862, .adv_w = 183, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1880, .adv_w = 280, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1905, .adv_w = 165, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1922, .adv_w = 153, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1932, .adv_w = 167, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1949, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1961, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1970, .adv_w = 185, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1988, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2000, .adv_w = 260, .box_w = 15, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2019, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2031, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2043, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2059, .adv_w = 165, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2071, .adv_w = 162, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2084, .adv_w = 221, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2099, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2111, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2123, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2135, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2151, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2163, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2175, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2191, .adv_w = 211, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2218, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2230, .adv_w = 177, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2247, .adv_w = 161, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2259, .adv_w = 241, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2276, .adv_w = 270, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2301, .adv_w = 195, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2316, .adv_w = 246, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2333, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2345, .adv_w = 147, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2357, .adv_w = 233, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2374, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2386, .adv_w = 157, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 2, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 35, .range_length = 61, .glyph_id_start = 3,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 30, .glyph_id_start = 64,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1025, .range_length = 1, .glyph_id_start = 94,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1040, .range_length = 64, .glyph_id_start = 95,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1105, .range_length = 1, .glyph_id_start = 159,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t __attribute__((aligned(4))) kern_left_class_mapping[] =
{
    0, 1, 0, 0, 0, 0, 0, 2,
    3, 0, 0, 0, 4, 0, 4, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 7, 8, 9, 10, 11, 0,
    12, 12, 13, 14, 15, 12, 12, 9,
    16, 17, 18, 0, 19, 13, 20, 21,
    22, 23, 24, 25, 0, 0, 0, 0,
    26, 27, 28, 0, 29, 30, 0, 31,
    0, 0, 32, 0, 31, 31, 33, 27,
    0, 34, 0, 35, 0, 36, 37, 38,
    36, 39, 40, 0, 0, 0, 10, 6,
    41, 7, 42, 43, 10, 22, 44, 12,
    0, 14, 12, 12, 12, 9, 0, 16,
    8, 19, 45, 0, 22, 12, 12, 12,
    46, 47, 12, 48, 49, 50, 51, 26,
    52, 53, 54, 55, 29, 38, 28, 0,
    0, 56, 0, 0, 0, 33, 0, 27,
    28, 57, 36, 27, 38, 58, 0, 0,
    59, 60, 0, 61, 27, 62, 0, 29
};

/*Map glyph_ids to kern right classes*/
static const uint8_t __attribute__((aligned(4))) kern_right_class_mapping[] =
{
    0, 1, 0, 0, 0, 0, 2, 3,
    0, 4, 5, 0, 6, 7, 6, 8,
    0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 10,
    0, 11, 0, 12, 0, 0, 0, 12,
    0, 0, 13, 0, 0, 0, 0, 12,
    0, 12, 0, 14, 15, 16, 17, 18,
    19, 20, 21, 0, 0, 22, 0, 0,
    23, 0, 24, 24, 24, 25, 24, 0,
    0, 0, 0, 0, 26, 26, 27, 26,
    24, 28, 29, 30, 31, 32, 33, 34,
    32, 35, 0, 0, 36, 0, 0, 11,
    0, 0, 0, 37, 0, 19, 0, 0,
    0, 0, 38, 0, 0, 12, 0, 0,
    12, 15, 39, 0, 19, 0, 40, 0,
    0, 0, 0, 41, 42, 0, 0, 23,
    43, 44, 26, 45, 24, 34, 46, 26,
    26, 26, 47, 26, 26, 27, 26, 26,
    24, 48, 32, 24, 34, 26, 49, 26,
    26, 50, 51, 52, 53, 26, 54, 24
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 5, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -35,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -17, 0, 0, 0, 0, 0, 0, -11,
    0, -3, 0, 0, -17, -2, -11, -5,
    0, -21, 0, 0, 0, 0, 0, -7,
    -2, 0, 0, -2, -2, -7, -5, 0,
    2, 0, 3, 2, 0, -8, -8, 0,
    0, 0, 0, 0, 3, -8, -5, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, -3, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -17, 0, 0,
    0, 0, -3, 0, 0, 0, -12, 0,
    -3, 0, -3, -6, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -4, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -3, 0,
    -3, 0, 0, 0, -2, -4, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -39, 0, 0, 0, 0, -27, 0,
    -29, 0, 3, 0, 0, 0, 0, 0,
    0, 0, -5, -3, 0, 0, -3, -4,
    0, 0, -3, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0,
    -4, 0, 0, 0, 2, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 2,
    0, -4, 0, 0, 0, 0, 3, 0,
    2, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -23, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    -4, 0, 0, 0, -3, -6, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, -10, -13, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, -9,
    0, 0, -29, -3, -29, -13, 0, -39,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -17, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -57,
    0, 0, 0, 0, -25, 0, -26, 0,
    0, 0, 0, 0, -7, 0, -5, 0,
    -2, -2, 0, 0, -2, 0, 0, 2,
    0, 2, 0, 0, 0, 0, -33, -20,
    0, 0, 0, 0, 0, 0, -24, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    -4, -3, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, -3, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, 0, 0,
    0, -36, -38, 0, 0, 0, -17, -4,
    -30, -2, 2, 0, 2, 2, 0, 2,
    0, 0, -24, -13, 0, -13, -29, -9,
    -11, 0, -9, -12, -7, -11, -8, 0,
    -11, -7, 0, 0, 2, 0, -4, -13,
    -20, -18, -18, -11, -19, 0, -18, -11,
    -18, -19, 0, 0, 0, 3, 0, -30,
    -22, 0, 0, 0, -11, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    -6, -6, 0, 0, -6, -4, 0, 0,
    -4, -2, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, -20, -8, 0,
    0, 0, -6, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 2, -5, -4,
    0, 0, -4, -3, 0, 0, -3, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -22, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    -3, 0, 0, 0, -3, -4, 0, 0,
    0, 0, 3, 2, 0, 0, 0, 0,
    -3, 0, 0, 0, 2, -6, -7, 0,
    0, 0, 0, 0, 0, -4, 0, 3,
    -7, -32, -21, 0, 0, 0, -21, -4,
    -13, -2, 2, -13, 3, 2, 2, 3,
    0, 3, -9, -9, -3, -6, -9, -6,
    -8, -3, -5, -3, 0, -3, -4, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, -3, 0, 0, 0,
    -3, -4, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, -2, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, -2, -6, 0, 0, 0, -3,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, -3, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -10, 0, -2, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, -24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -3, 3, 0,
    -5, 0, 0, 7, 0, 3, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, -23,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 2, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -4, 0, -2, -4, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, -3, -3,
    -4, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, -64, -68, 0, 0, 0,
    -29, -9, 0, -7, 1, 0, 1, 1,
    0, 1, 0, 0, -23, -24, 0, -24,
    -22, -18, -21, 0, -18, -22, -14, -21,
    -17, 0, -22, -15, 0, 0, 1, 0,
    -9, -26, -36, -33, -34, -21, -34, 0,
    -34, -21, -33, -35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, -3,
    0, 0, -4, 0, -4, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 2, 0, -4, -4, 0, 0, 0,
    3, 0, 2, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    -2, 0, -2, 0, -2, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -55, -28, 0,
    0, 0, -13, -3, 0, 0, 3, 0,
    0, 0, 0, 3, 0, 0, -11, -9,
    0, -12, -9, 0, -6, 0, 0, 0,
    0, 0, 0, 0, -12, -8, 0, 0,
    3, 0, 0, -4, -12, -6, -10, 0,
    -3, 0, -5, -12, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, -4, 0, -4, 0,
    2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 2, 2, -4, -4, -2,
    0, 0, 3, 0, 2, -4, -3, 0,
    0, -4, 0, 0, 0, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, 0, -8, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, -3, -4, -8, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, -6,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, -8, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    -3, -4, -9, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, -4, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -4, -3, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -4, -3, 0, 0, 0,
    0, 0, -4, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, -3, 0, 0, 0, -2, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -21, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, -3, -3, -7, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -9,
    2, 0, -4, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 2, -2, -2, 0,
    0, -2, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 2, -4, -4, -10, 0, -4,
    0, 0, 0, 0, -19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -18, -3, 0, 0, -2, 0, 0,
    0, 0, -19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -11,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -21,
    -4, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -2, 0, 0, 0,
    0, -3, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 62,
    .right_class_cnt     = 54,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 6,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_fntRbBlck18b1 = {
#else
lv_font_t ui_font_fntRbBlck18b1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FNTRBBLCK18B1*/

