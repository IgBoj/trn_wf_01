/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --font D:/ESP/sqls_ws/learn/l01/assets/Roboto-Black.ttf -o D:/ESP/sqls_ws/learn/l01/assets\ui_font_fntRbBlck14b1.c --format lvgl --symbols АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&'()*+,-./:;<=>?@[\]^_{|}~
 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FNTRBBLCK14B1
#define UI_FONT_FNTRBBLCK14B1 1
#endif

#if UI_FONT_FNTRBBLCK14B1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0x3c,

    /* U+0023 "#" */
    0x14, 0x14, 0x14, 0x7f, 0x7f, 0x2c, 0xfe, 0xfe,
    0x28, 0x28, 0x28,

    /* U+0024 "$" */
    0x8, 0x10, 0xf3, 0xf6, 0x6c, 0xdc, 0x1e, 0xe,
    0xcd, 0x9b, 0xf3, 0xc1, 0x0,

    /* U+0025 "%" */
    0x70, 0x7c, 0x36, 0x9f, 0x87, 0x40, 0x40, 0x6c,
    0x2f, 0x25, 0x83, 0xc0, 0xc0,

    /* U+0026 "&" */
    0x38, 0x3e, 0x1b, 0xd, 0x87, 0x83, 0x83, 0x6d,
    0xbe, 0xce, 0x7f, 0x1e, 0xc0,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x13, 0x66, 0xcc, 0xcc, 0xcc, 0xc6, 0x62, 0x30,

    /* U+0029 ")" */
    0x8c, 0x66, 0x33, 0x33, 0x33, 0x32, 0x64, 0xc0,

    /* U+002A "*" */
    0x10, 0x21, 0xf9, 0xc2, 0x8d, 0x80, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x6d, 0xa4,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x18, 0x8c, 0x63, 0x11, 0x8c, 0x46, 0x31, 0x0,

    /* U+0030 "0" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,
    0xf8, 0xe0,

    /* U+0031 "1" */
    0xb, 0xff, 0x31, 0x8c, 0x63, 0x18, 0xc6,

    /* U+0032 "2" */
    0x3c, 0xff, 0x9e, 0x30, 0x61, 0x86, 0x1c, 0x71,
    0xff, 0xf8,

    /* U+0033 "3" */
    0x3c, 0xfd, 0x98, 0x31, 0xe3, 0x87, 0x83, 0x66,
    0xfc, 0xf0,

    /* U+0034 "4" */
    0xc, 0x38, 0x71, 0xe2, 0xcd, 0xb3, 0x7f, 0xfe,
    0x18, 0x30,

    /* U+0035 "5" */
    0x7e, 0xfd, 0x83, 0x7, 0xcf, 0xc9, 0x83, 0x66,
    0xfc, 0xf0,

    /* U+0036 "6" */
    0x1c, 0x79, 0x86, 0xd, 0xdf, 0xf1, 0xe3, 0xc6,
    0xf8, 0xe0,

    /* U+0037 "7" */
    0xff, 0xfc, 0x38, 0x60, 0xc3, 0x6, 0x1c, 0x30,
    0x61, 0xc0,

    /* U+0038 "8" */
    0x7d, 0xff, 0x1e, 0x3e, 0xef, 0xbf, 0xe3, 0xc7,
    0xfd, 0xf0,

    /* U+0039 "9" */
    0x38, 0xfb, 0x9e, 0x3c, 0x78, 0xdf, 0xbf, 0xc,
    0xf1, 0xc0,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0xfc, 0x0, 0x1b, 0x79, 0x0,

    /* U+003C "<" */
    0x4, 0x7f, 0xb8, 0xf8, 0xf0, 0xc0,

    /* U+003D "=" */
    0xff, 0xf0, 0x3f, 0xfc,

    /* U+003E ">" */
    0x83, 0x87, 0xc3, 0x7f, 0xcc, 0x0,

    /* U+003F "?" */
    0x7b, 0xfe, 0xc3, 0x1c, 0x63, 0xc, 0x0, 0xc3,
    0x0,

    /* U+0040 "@" */
    0xf, 0x83, 0xc, 0x60, 0x66, 0x73, 0xcf, 0x3d,
    0xd3, 0xd9, 0x3d, 0x93, 0xdb, 0x7d, 0xfe, 0xed,
    0xc7, 0x0, 0x3f, 0x1, 0xf0,

    /* U+0041 "A" */
    0xc, 0x7, 0x81, 0xe0, 0x78, 0x3f, 0xc, 0xc3,
    0x31, 0xfe, 0x7f, 0x98, 0x6e, 0x1c,

    /* U+0042 "B" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xbf, 0xe3, 0xc7,
    0xff, 0xf0,

    /* U+0043 "C" */
    0x3e, 0x3f, 0xb9, 0xd8, 0x6c, 0x6, 0x3, 0x1,
    0x87, 0xe7, 0x3f, 0x8f, 0x80,

    /* U+0044 "D" */
    0xf8, 0xfe, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc6, 0xfe, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xbf, 0x60, 0xc1,
    0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xff, 0xe0, 0xc1,
    0x83, 0x0,

    /* U+0047 "G" */
    0x3c, 0x7e, 0xe3, 0xc3, 0xc0, 0xcf, 0xcf, 0xc3,
    0xe3, 0x7f, 0x3e,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x66,
    0xf8, 0xf0,

    /* U+004B "K" */
    0xc7, 0xce, 0xdc, 0xdc, 0xf8, 0xf8, 0xf8, 0xfc,
    0xce, 0xce, 0xc7,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0xff, 0xf8,

    /* U+004D "M" */
    0xe0, 0xfe, 0x3f, 0xc7, 0xf8, 0xfd, 0x37, 0xb6,
    0xf6, 0xde, 0x5b, 0xce, 0x79, 0xcf, 0x39, 0x80,

    /* U+004E "N" */
    0xc3, 0xe3, 0xe3, 0xf3, 0xfb, 0xdb, 0xdf, 0xcf,
    0xc7, 0xc7, 0xc3,

    /* U+004F "O" */
    0x3c, 0x7e, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xe6, 0x7e, 0x3c,

    /* U+0050 "P" */
    0xfc, 0xfe, 0xc3, 0xc3, 0xc3, 0xfe, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x3c, 0x7e, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xe6, 0x7e, 0x3e, 0x7, 0x2,

    /* U+0052 "R" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xbf, 0x66, 0xcd,
    0x9f, 0x18,

    /* U+0053 "S" */
    0x3c, 0x7e, 0x67, 0x60, 0x78, 0x3e, 0xf, 0xe3,
    0xe7, 0x7f, 0x3e,

    /* U+0054 "T" */
    0xff, 0xff, 0xc6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x0,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x7e, 0x3c,

    /* U+0056 "V" */
    0xe3, 0xf1, 0xd8, 0xee, 0x67, 0x71, 0xb8, 0xd8,
    0x6c, 0x1e, 0xe, 0x7, 0x0,

    /* U+0057 "W" */
    0xe6, 0x3e, 0x67, 0x67, 0x76, 0xf6, 0x6f, 0x66,
    0xf6, 0x7f, 0x63, 0x9e, 0x39, 0xc3, 0x9c, 0x39,
    0xc0,

    /* U+0058 "X" */
    0xe3, 0xbb, 0x9d, 0xc6, 0xc3, 0xe0, 0xe0, 0xf8,
    0x6c, 0x77, 0x33, 0xb8, 0xe0,

    /* U+0059 "Y" */
    0xe7, 0xe7, 0x66, 0x7e, 0x3c, 0x3c, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xff, 0x6, 0xe, 0x1c, 0x18, 0x38, 0x70,
    0x70, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0x6d, 0xb6, 0xdb, 0x6d, 0xf8,

    /* U+005C "\\" */
    0xc3, 0x86, 0x1c, 0x70, 0xc3, 0x86, 0x18, 0x70,
    0xc3,

    /* U+005D "]" */
    0xfd, 0xb6, 0xdb, 0x6d, 0xb7, 0xf8,

    /* U+005E "^" */
    0x30, 0xc3, 0x9e, 0x6b, 0x30,

    /* U+005F "_" */
    0xff, 0xf0,

    /* U+0061 "a" */
    0x7b, 0xfc, 0xdf, 0xff, 0x3f, 0xdf,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xef, 0xd8, 0xf1, 0xe3, 0xc7,
    0xff, 0xf0,

    /* U+0063 "c" */
    0x38, 0xfb, 0x36, 0xc, 0x19, 0x9f, 0x1c,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xb7, 0xf8, 0xf1, 0xe3, 0xc6,
    0xfd, 0xd8,

    /* U+0065 "e" */
    0x38, 0xfb, 0x3f, 0xff, 0xf8, 0x9f, 0x9e,

    /* U+0066 "f" */
    0x3b, 0xd9, 0xff, 0xb1, 0x8c, 0x63, 0x18,

    /* U+0067 "g" */
    0x7e, 0xff, 0x1e, 0x3c, 0x78, 0xdf, 0xbf, 0x46,
    0xf9, 0xe0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xef, 0xf8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0069 "i" */
    0xf3, 0xff, 0xfc,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0xfe,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x6d, 0xdf, 0x3c, 0x7c, 0xd9,
    0xbb, 0x38,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xfb, 0xdf, 0xff, 0x31, 0xe6, 0x3c, 0xc7, 0x98,
    0xf3, 0x1e, 0x63,

    /* U+006E "n" */
    0xdd, 0xdf, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+006F "o" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xdf, 0x1c,

    /* U+0070 "p" */
    0xfd, 0xfb, 0x1e, 0x3c, 0x78, 0xff, 0x7e, 0xc1,
    0x83, 0x0,

    /* U+0071 "q" */
    0x77, 0xff, 0x1e, 0x3c, 0x78, 0xdf, 0xbb, 0x6,
    0xc, 0x18,

    /* U+0072 "r" */
    0xdf, 0xf1, 0x8c, 0x63, 0x18,

    /* U+0073 "s" */
    0x79, 0xfb, 0x37, 0x81, 0xd9, 0xbf, 0x3c,

    /* U+0074 "t" */
    0x66, 0xff, 0x66, 0x66, 0x73,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xbf,

    /* U+0076 "v" */
    0xc7, 0xdf, 0xbb, 0x66, 0xcf, 0x8e, 0x1c,

    /* U+0077 "w" */
    0xcd, 0xb3, 0x6f, 0xd9, 0xf6, 0x77, 0x9d, 0xc7,
    0x30, 0xcc,

    /* U+0078 "x" */
    0xee, 0xd9, 0xf1, 0xc3, 0x8f, 0x9b, 0x73,

    /* U+0079 "y" */
    0xe6, 0xdd, 0xbb, 0x67, 0xc7, 0x8e, 0x1c, 0x38,
    0xe1, 0x80,

    /* U+007A "z" */
    0xff, 0xf1, 0x8c, 0x71, 0x8f, 0xff,

    /* U+007B "{" */
    0x13, 0x66, 0x66, 0xec, 0xe6, 0x66, 0x63, 0x10,

    /* U+007C "|" */
    0xff, 0xf0,

    /* U+007D "}" */
    0x8c, 0x66, 0x66, 0x73, 0x76, 0x66, 0x6c, 0x80,

    /* U+007E "~" */
    0x72, 0xfe, 0xce,

    /* U+0401 "Ё" */
    0x6c, 0xdb, 0xff, 0xfc, 0x18, 0x30, 0x7e, 0xfd,
    0x83, 0x7, 0xff, 0xe0,

    /* U+0410 "А" */
    0xc, 0x7, 0x81, 0xe0, 0x78, 0x3f, 0xc, 0xc3,
    0x31, 0xfe, 0x7f, 0x98, 0x6e, 0x1c,

    /* U+0411 "Б" */
    0xfd, 0xfb, 0x6, 0xf, 0x9f, 0xb1, 0xe3, 0xc7,
    0xfb, 0xe0,

    /* U+0412 "В" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xbf, 0xe3, 0xc7,
    0xff, 0xf0,

    /* U+0413 "Г" */
    0xff, 0xff, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0414 "Д" */
    0x3f, 0x8f, 0xe3, 0x98, 0xe6, 0x31, 0x8c, 0x63,
    0x19, 0xc6, 0x71, 0xbf, 0xff, 0xff, 0x3, 0xc0,
    0xf0, 0x30,

    /* U+0415 "Е" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0xbf, 0x60, 0xc1,
    0xff, 0xf8,

    /* U+0416 "Ж" */
    0xe3, 0x1d, 0xcc, 0xe7, 0x33, 0x8c, 0xcc, 0x3b,
    0x60, 0x7f, 0x83, 0xff, 0xe, 0xdc, 0x73, 0x39,
    0xcc, 0xee, 0x31, 0xc0,

    /* U+0417 "З" */
    0x7d, 0xff, 0x98, 0x33, 0xe7, 0x8f, 0x83, 0xc7,
    0xfd, 0xf0,

    /* U+0418 "И" */
    0xc3, 0xc7, 0xc7, 0xcf, 0xdf, 0xdb, 0xfb, 0xf3,
    0xe3, 0xe3, 0xc3,

    /* U+0419 "Й" */
    0x66, 0x3c, 0x3c, 0xc3, 0xc7, 0xc7, 0xcf, 0xdf,
    0xdb, 0xfb, 0xf3, 0xe3, 0xe3, 0xc3,

    /* U+041A "К" */
    0xc6, 0xce, 0xcc, 0xdc, 0xd8, 0xf8, 0xf8, 0xdc,
    0xce, 0xce, 0xc7,

    /* U+041B "Л" */
    0x3f, 0x9f, 0xcc, 0x66, 0x33, 0x19, 0x8c, 0xc6,
    0x63, 0x71, 0xf0, 0xf0, 0x60,

    /* U+041C "М" */
    0xe0, 0xfe, 0x3f, 0xc7, 0xf8, 0xfd, 0x37, 0xb6,
    0xf6, 0xde, 0x5b, 0xce, 0x79, 0xcf, 0x39, 0x80,

    /* U+041D "Н" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+041E "О" */
    0x3c, 0x7e, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xe6, 0x7e, 0x3c,

    /* U+041F "П" */
    0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+0420 "Р" */
    0xfc, 0xfe, 0xc3, 0xc3, 0xc3, 0xfe, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0421 "С" */
    0x3e, 0x3f, 0xb9, 0xd8, 0x6c, 0x6, 0x3, 0x1,
    0x87, 0xe7, 0x3f, 0x8f, 0x80,

    /* U+0422 "Т" */
    0xff, 0xff, 0xc6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x0,

    /* U+0423 "У" */
    0xe3, 0xb1, 0x9c, 0xc6, 0xe3, 0xe0, 0xf0, 0x70,
    0x18, 0xc, 0x1c, 0xc, 0x0,

    /* U+0424 "Ф" */
    0xc, 0xf, 0xc7, 0xfb, 0xb7, 0xcc, 0xf3, 0x3c,
    0xcf, 0xb7, 0x7f, 0x8f, 0xc0, 0xc0, 0x30,

    /* U+0425 "Х" */
    0xe3, 0xbb, 0x9d, 0xc6, 0xc3, 0xe0, 0xe0, 0xf8,
    0x6c, 0x77, 0x33, 0xb8, 0xe0,

    /* U+0426 "Ц" */
    0xc3, 0x30, 0xcc, 0x33, 0xc, 0xc3, 0x30, 0xcc,
    0x33, 0xc, 0xc3, 0x3f, 0xff, 0xfc, 0x3, 0x0,
    0xc0, 0x30,

    /* U+0427 "Ч" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f, 0x3f, 0x3,
    0x3, 0x3, 0x3,

    /* U+0428 "Ш" */
    0xc6, 0x3c, 0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3f, 0xff, 0xff,
    0xf0,

    /* U+0429 "Щ" */
    0xc6, 0x36, 0x31, 0xb1, 0x8d, 0x8c, 0x6c, 0x63,
    0x63, 0x1b, 0x18, 0xd8, 0xc6, 0xc6, 0x37, 0xff,
    0xff, 0xfe, 0x0, 0x30, 0x1, 0x80, 0xc,

    /* U+042A "Ъ" */
    0xf8, 0x3e, 0x1, 0x80, 0x60, 0x1f, 0x7, 0xe1,
    0x8c, 0x63, 0x18, 0xc7, 0xe1, 0xf0,

    /* U+042B "Ы" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3f, 0x87, 0xf8,
    0xf1, 0x9e, 0x33, 0xc6, 0x7f, 0x8f, 0xe1, 0x80,

    /* U+042C "Ь" */
    0xc1, 0x83, 0x6, 0xf, 0x9f, 0xb1, 0xe3, 0xc7,
    0xfb, 0xe0,

    /* U+042D "Э" */
    0x3c, 0x7e, 0xe7, 0xc3, 0x3, 0x1f, 0x1f, 0x3,
    0xe7, 0x7e, 0x3c,

    /* U+042E "Ю" */
    0xc7, 0xcc, 0xfe, 0xce, 0x6d, 0xc3, 0xdc, 0x3f,
    0xc3, 0xfc, 0x3d, 0xc3, 0xce, 0x6c, 0xfe, 0xc7,
    0xc0,

    /* U+042F "Я" */
    0x3f, 0x7f, 0x63, 0x63, 0x63, 0x3f, 0x3f, 0x33,
    0x73, 0x63, 0xe3,

    /* U+0430 "а" */
    0x7b, 0xfc, 0xdf, 0xff, 0x3f, 0xdf,

    /* U+0431 "б" */
    0x4, 0x39, 0xe3, 0xf, 0xdf, 0xb1, 0xe3, 0xc7,
    0x8d, 0xf1, 0xc0,

    /* U+0432 "в" */
    0xf9, 0xfb, 0x37, 0xef, 0xd9, 0xff, 0xfe,

    /* U+0433 "г" */
    0xff, 0xf1, 0x8c, 0x63, 0x18,

    /* U+0434 "д" */
    0x3e, 0x1f, 0xd, 0x86, 0xc3, 0x63, 0xb3, 0xff,
    0xff, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+0435 "е" */
    0x38, 0xfb, 0x3f, 0xff, 0xf8, 0x9f, 0x9e,

    /* U+0436 "ж" */
    0xe6, 0x77, 0x6e, 0x36, 0xc3, 0xfc, 0x3f, 0xc7,
    0x6e, 0x76, 0xee, 0x67,

    /* U+0437 "з" */
    0x79, 0xfb, 0x31, 0xe0, 0xd9, 0xff, 0x3c,

    /* U+0438 "и" */
    0xc7, 0x9f, 0x7e, 0xff, 0x7e, 0xf9, 0xe3,

    /* U+0439 "й" */
    0x44, 0xf8, 0xe0, 0xc, 0x79, 0xf7, 0xef, 0xf7,
    0xef, 0x9e, 0x30,

    /* U+043A "к" */
    0xcf, 0xbb, 0x67, 0xcf, 0x9b, 0xb7, 0x67,

    /* U+043B "л" */
    0x3f, 0x3f, 0x33, 0x33, 0x33, 0x33, 0xf3, 0xe3,

    /* U+043C "м" */
    0xe3, 0xf1, 0xf9, 0xfe, 0xff, 0x7e, 0xef, 0x77,
    0xbb,

    /* U+043D "н" */
    0xcf, 0x3c, 0xff, 0xff, 0x3c, 0xf3,

    /* U+043E "о" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xdf, 0x1c,

    /* U+043F "п" */
    0xff, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+0440 "р" */
    0xfd, 0xfb, 0x1e, 0x3c, 0x78, 0xff, 0x7e, 0xc1,
    0x83, 0x0,

    /* U+0441 "с" */
    0x38, 0xfb, 0x36, 0xc, 0x19, 0x9f, 0x1c,

    /* U+0442 "т" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+0443 "у" */
    0xe6, 0xdd, 0xbb, 0x67, 0xc7, 0x8e, 0x1c, 0x38,
    0xe1, 0x80,

    /* U+0444 "ф" */
    0xc, 0x6, 0x3, 0xf, 0xe7, 0xfe, 0x6f, 0x37,
    0x9b, 0xcd, 0xff, 0xdf, 0xc1, 0x80, 0xc0, 0x60,

    /* U+0445 "х" */
    0xee, 0xd9, 0xf1, 0xc3, 0x8f, 0x9b, 0x73,

    /* U+0446 "ц" */
    0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xff, 0xff,
    0x3, 0x3, 0x3,

    /* U+0447 "ч" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xef, 0xc1, 0x83,

    /* U+0448 "ш" */
    0xcc, 0xf3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3f,
    0xff, 0xff,

    /* U+0449 "щ" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xff, 0xff, 0xff, 0x0, 0x30, 0x3, 0x0,
    0x30,

    /* U+044A "ъ" */
    0xf0, 0x78, 0xf, 0xc7, 0xf3, 0x19, 0x8c, 0xfe,
    0x7e,

    /* U+044B "ы" */
    0xc0, 0xf0, 0x3f, 0x8f, 0xf3, 0xce, 0xf3, 0xbf,
    0xcf, 0xe3,

    /* U+044C "ь" */
    0xc1, 0x83, 0xf7, 0xfc, 0xf9, 0xff, 0xfe,

    /* U+044D "э" */
    0x38, 0xfb, 0x98, 0xf1, 0xec, 0xdf, 0x1c,

    /* U+044E "ю" */
    0xc7, 0x33, 0xed, 0xcf, 0xf3, 0xfc, 0xf7, 0x3c,
    0xfb, 0x1c,

    /* U+044F "я" */
    0x3e, 0xfd, 0x9b, 0x37, 0xe7, 0xdd, 0xb3,

    /* U+0451 "ё" */
    0xcd, 0x98, 0x1, 0xc7, 0xd8, 0xff, 0xff, 0xc0,
    0xfc, 0xf0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 130, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 130, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 28, .adv_w = 166, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 35, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 55, .adv_w = 79, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 63, .adv_w = 79, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 71, .adv_w = 104, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 78, .adv_w = 120, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 86, .adv_w = 60, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 88, .adv_w = 101, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 89, .adv_w = 68, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 79, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 98, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 130, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 67, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 65, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 202, .adv_w = 114, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 208, .adv_w = 131, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 212, .adv_w = 115, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 218, .adv_w = 114, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 201, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 248, .adv_w = 153, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 434, .adv_w = 146, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 148, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 195, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 141, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 63, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 550, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 559, .adv_w = 63, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 565, .adv_w = 100, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 570, .adv_w = 99, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 572, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 81, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 629, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 61, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 649, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 193, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 697, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 707, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 719, .adv_w = 77, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 163, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 765, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 73, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 779, .adv_w = 57, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 781, .adv_w = 73, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 789, .adv_w = 142, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 792, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 153, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 166, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 866, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 234, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 906, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 155, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 931, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 158, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1004, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1041, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 188, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1069, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 173, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1100, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1111, .adv_w = 216, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1128, .adv_w = 234, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1151, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1165, .adv_w = 195, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1181, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1191, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1202, .adv_w = 218, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1219, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1236, .adv_w = 130, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1247, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1254, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1259, .adv_w = 144, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1272, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1279, .adv_w = 202, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1291, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1298, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1305, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1323, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1331, .adv_w = 172, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1340, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1346, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1353, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1360, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1370, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1377, .adv_w = 117, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1385, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1395, .adv_w = 164, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1411, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1418, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1429, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1436, .adv_w = 187, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1446, .adv_w = 210, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1463, .adv_w = 151, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1472, .adv_w = 191, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1482, .adv_w = 127, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1496, .adv_w = 181, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1506, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1513, .adv_w = 122, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0}
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
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 4, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -27,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, -9,
    0, -2, 0, 0, -13, -2, -8, -4,
    0, -16, 0, 0, 0, 0, 0, -5,
    -1, 0, 0, -2, -1, -5, -4, 0,
    1, 0, 2, 2, 0, -6, -6, 0,
    0, 0, 0, 0, 2, -6, -4, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -3, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, 0, -2, 0, 0, 0, -9, 0,
    -2, 0, -2, -5, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -3, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    -2, 0, 0, 0, -2, -3, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -30, 0, 0, 0, 0, -21, 0,
    -23, 0, 2, 0, 0, 0, 0, 0,
    0, 0, -4, -2, 0, 0, -2, -3,
    0, 0, -2, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0,
    -3, 0, 0, 0, 2, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 2,
    0, -3, 0, 0, 0, 0, 2, 0,
    2, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -18, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -3, 0, 0, 0, -3, -4, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -8, -10, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, -7,
    0, 0, -22, -3, -23, -10, 0, -31,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -13, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -44,
    0, 0, 0, 0, -19, 0, -20, 0,
    0, 0, 0, 0, -6, 0, -4, 0,
    -1, -1, 0, 0, -1, 0, 0, 2,
    0, 2, 0, 0, 0, 0, -26, -16,
    0, 0, 0, 0, 0, 0, -19, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -3, -2, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, -2, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, -28, -30, 0, 0, 0, -13, -3,
    -24, -2, 2, 0, 2, 2, 0, 2,
    0, 0, -18, -10, 0, -10, -23, -7,
    -8, 0, -7, -9, -5, -8, -7, 0,
    -9, -6, 0, 0, 2, 0, -3, -10,
    -15, -14, -14, -9, -14, 0, -14, -9,
    -14, -15, 0, 0, 0, 2, 0, -24,
    -17, 0, 0, 0, -8, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    -5, -5, 0, 0, -5, -3, 0, 0,
    -3, -1, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, -16, -7, 0,
    0, 0, -5, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 1, -4, -3,
    0, 0, -3, -2, 0, 0, -2, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -2, 0, 0, 0, -2, -3, 0, 0,
    0, 0, 2, 2, 0, 0, 0, 0,
    -3, 0, 0, 0, 2, -4, -5, 0,
    0, 0, 0, 0, 0, -3, 0, 2,
    -5, -25, -17, 0, 0, 0, -16, -3,
    -10, -2, 2, -10, 2, 2, 1, 2,
    0, 2, -7, -7, -2, -4, -7, -4,
    -6, -2, -4, -2, 0, -3, -3, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -2, 0, 0, 0,
    -2, -3, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, -2,
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
    0, -2, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -2, -5, 0, 0, 0, -2,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, -2, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, -2, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, -19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -2, 2, 0,
    -4, 0, 0, 5, 0, 2, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, -18,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -1, 1, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -3, 0, -2, -3, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, -2, -3,
    -3, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, -50, -53, 0, 0, 0,
    -22, -7, 0, -5, 1, 0, 1, 1,
    0, 1, 0, 0, -18, -19, 0, -19,
    -17, -14, -16, 0, -14, -17, -11, -16,
    -13, 0, -17, -12, 0, 0, 1, 0,
    -7, -20, -28, -26, -26, -17, -27, 0,
    -26, -17, -26, -27, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, -3,
    0, 0, -3, 0, -3, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 2, 0, -3, -3, 0, 0, 0,
    2, 0, 2, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    -2, 0, -1, 0, -1, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    -1, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -43, -22, 0,
    0, 0, -10, -3, 0, 0, 2, 0,
    0, 0, 0, 2, 0, 0, -9, -7,
    0, -9, -7, 0, -5, 0, 0, 0,
    0, 0, 0, 0, -9, -6, 0, 0,
    2, 0, 0, -3, -9, -5, -8, 0,
    -3, 0, -4, -9, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, -3, 0, -3, 0,
    2, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 2, 1, -3, -3, -1,
    0, 0, 2, 0, 2, -3, -3, 0,
    0, -3, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, -6, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, -2, -3, -7, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, -5,
    0, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, -6, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    -2, -3, -7, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -3, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -3, -3, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -3, -3, 0, 0, 0,
    0, 0, -3, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, -2, 0, 0, 0, -2, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -17, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, -2, -2, -5, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -7,
    1, 0, -3, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 2, -2, -2, 0,
    0, -2, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 2, -3, -3, -8, 0, -3,
    0, 0, 0, 0, -15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -14, -2, 0, 0, -2, 0, 0,
    0, 0, -15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    -3, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -1, 0, 0, 0,
    0, -2, 0, 0
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
const lv_font_t ui_font_fntRbBlck14b1 = {
#else
lv_font_t ui_font_fntRbBlck14b1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_FNTRBBLCK14B1*/

