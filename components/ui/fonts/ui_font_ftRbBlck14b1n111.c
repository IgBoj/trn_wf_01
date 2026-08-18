/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --font D:/ESP/sqls_ws/learn/l01/assets/Roboto-Black.ttf -o D:/ESP/sqls_ws/learn/l01/assets\ui_font_ftRbBlck14b1n111.c --format lvgl -r 32-127 -r 1024-1119 -r 1120-1279 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FTRBBLCK14B1N111
#define UI_FONT_FTRBBLCK14B1N111 1
#endif

#if UI_FONT_FTRBBLCK14B1N111

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0x3c,

    /* U+0022 "\"" */
    0xff, 0xff,

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

    /* U+0060 "`" */
    0x63,

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

    /* U+0400 "Ѐ" */
    0x60, 0x63, 0xff, 0xfc, 0x18, 0x30, 0x7e, 0xfd,
    0x83, 0x7, 0xff, 0xe0,

    /* U+0401 "Ё" */
    0x6c, 0xdb, 0xff, 0xfc, 0x18, 0x30, 0x7e, 0xfd,
    0x83, 0x7, 0xff, 0xe0,

    /* U+0402 "Ђ" */
    0xff, 0x3f, 0xc1, 0x80, 0x60, 0x1f, 0x87, 0xf1,
    0x8c, 0x63, 0x18, 0xc6, 0xe1, 0xb0,

    /* U+0403 "Ѓ" */
    0x18, 0x63, 0xff, 0xfc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x6, 0xc, 0x0,

    /* U+0404 "Є" */
    0x3c, 0x3f, 0x99, 0xd8, 0x6c, 0x7, 0xc3, 0xe1,
    0x80, 0xe3, 0x3f, 0x8f, 0x80,

    /* U+0405 "Ѕ" */
    0x3c, 0x7e, 0x67, 0x60, 0x78, 0x3e, 0xf, 0xe3,
    0xe7, 0x7f, 0x3e,

    /* U+0406 "І" */
    0xff, 0xff, 0xfc,

    /* U+0407 "Ї" */
    0xcf, 0x33, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30,

    /* U+0408 "Ј" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x66,
    0xf8, 0xf0,

    /* U+0409 "Љ" */
    0x3f, 0x80, 0xfe, 0x3, 0x18, 0xc, 0x60, 0x31,
    0xf0, 0xc7, 0xe3, 0x18, 0xcc, 0x63, 0x71, 0x8f,
    0x87, 0xec, 0x1f, 0x0,

    /* U+040A "Њ" */
    0xc3, 0x6, 0x18, 0x30, 0xc1, 0x86, 0xc, 0x3e,
    0x7f, 0xfb, 0xfc, 0x78, 0x63, 0xc3, 0x1e, 0x1f,
    0xb0, 0xf8,

    /* U+040B "Ћ" */
    0xfe, 0x7f, 0xc, 0x6, 0x3, 0xe1, 0xf8, 0xc6,
    0x63, 0x31, 0x98, 0xcc, 0x60,

    /* U+040C "Ќ" */
    0x18, 0x30, 0xc7, 0xce, 0xdc, 0xdc, 0xf8, 0xf8,
    0xf8, 0xfc, 0xce, 0xce, 0xc7,

    /* U+040D "Ѝ" */
    0x30, 0x18, 0xc3, 0xc7, 0xc7, 0xcf, 0xdf, 0xdb,
    0xfb, 0xf3, 0xe3, 0xe3, 0xc3,

    /* U+040E "Ў" */
    0x12, 0xf, 0x7, 0x1c, 0x77, 0x3b, 0x98, 0xdc,
    0x7c, 0x1e, 0xf, 0x3, 0x1, 0x83, 0x81, 0x80,

    /* U+040F "Џ" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xff, 0xff, 0x18, 0x18, 0x18,

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

    /* U+0450 "ѐ" */
    0x60, 0x60, 0x1, 0xc7, 0xd9, 0xff, 0xff, 0xc4,
    0xfc, 0xf0,

    /* U+0451 "ё" */
    0xcd, 0x98, 0x1, 0xc7, 0xd8, 0xff, 0xff, 0xc0,
    0xfc, 0xf0,

    /* U+0452 "ђ" */
    0x60, 0xf8, 0xf8, 0x6e, 0x7f, 0x63, 0x63, 0x63,
    0x63, 0x63, 0x63, 0x3, 0xf, 0xe,

    /* U+0453 "ѓ" */
    0x33, 0x1, 0xff, 0xe3, 0x18, 0xc6, 0x30,

    /* U+0454 "є" */
    0x38, 0xfb, 0xb7, 0x8f, 0x1d, 0x9f, 0x1c,

    /* U+0455 "ѕ" */
    0x79, 0xfb, 0x37, 0x81, 0xd9, 0xbf, 0x3c,

    /* U+0456 "і" */
    0xf3, 0xff, 0xfc,

    /* U+0457 "ї" */
    0xcf, 0x30, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+0458 "ј" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0xfe,

    /* U+0459 "љ" */
    0x7e, 0x7, 0xe0, 0x67, 0xc6, 0x7e, 0x66, 0x66,
    0x66, 0xe7, 0xec, 0x7c,

    /* U+045A "њ" */
    0xcc, 0x19, 0x83, 0x3e, 0x7f, 0xff, 0xcf, 0x99,
    0xf3, 0xfe, 0x7e,

    /* U+045B "ћ" */
    0x60, 0xf8, 0xf8, 0x6e, 0x7f, 0x63, 0x63, 0x63,
    0x63, 0x63, 0x63,

    /* U+045C "ќ" */
    0x18, 0x60, 0x6, 0x7d, 0xdb, 0x3e, 0x7c, 0xdd,
    0xbb, 0x38,

    /* U+045D "ѝ" */
    0x70, 0x70, 0x6, 0x3c, 0xfb, 0xf7, 0xfb, 0xf7,
    0xcf, 0x18,

    /* U+045E "ў" */
    0x6c, 0xf8, 0xe0, 0xe, 0x6d, 0xdb, 0x36, 0x7c,
    0x70, 0xe1, 0xc3, 0xe, 0x18, 0x0,

    /* U+045F "џ" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xff, 0x30,
    0x60, 0xc0,

    /* U+0460 "Ѡ" */
    0xc6, 0x3c, 0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc7, 0x37, 0xfe, 0x39,
    0xc0,

    /* U+0461 "ѡ" */
    0xcc, 0x79, 0x8f, 0x31, 0xe6, 0x3c, 0xc7, 0x9c,
    0xff, 0xf3, 0xdc,

    /* U+0462 "Ѣ" */
    0x60, 0xf8, 0xf8, 0x60, 0x7c, 0x7e, 0x63, 0x63,
    0x63, 0x7e, 0x7c,

    /* U+0463 "ѣ" */
    0x60, 0x60, 0xf8, 0xf8, 0x60, 0x60, 0x7e, 0x7f,
    0x63, 0x63, 0x7f, 0x7e,

    /* U+0464 "Ѥ" */
    0xc3, 0xcc, 0x7e, 0xce, 0x7c, 0xc7, 0xcc, 0xf,
    0xf8, 0xff, 0x8c, 0xc0, 0xce, 0x7c, 0x7e, 0xc3,
    0xc0,

    /* U+0465 "ѥ" */
    0xc7, 0x33, 0xed, 0x9b, 0xf8, 0xfe, 0x36, 0x6c,
    0xfb, 0x1c,

    /* U+0466 "Ѧ" */
    0x1e, 0x7, 0x81, 0xe0, 0x78, 0x3f, 0xc, 0xc3,
    0xf1, 0xfe, 0x6f, 0x9b, 0x6e, 0xdc,

    /* U+0467 "ѧ" */
    0x3c, 0x3c, 0x3c, 0x7e, 0x7e, 0x7e, 0xff, 0xdb,

    /* U+0468 "Ѩ" */
    0xc3, 0xc6, 0x1e, 0x30, 0xf1, 0x8f, 0x8c, 0x7e,
    0x63, 0x33, 0xff, 0x9f, 0xfe, 0xcd, 0xf6, 0xed,
    0xb7, 0x6e,

    /* U+0469 "ѩ" */
    0xc3, 0x98, 0xf3, 0x1f, 0x63, 0xef, 0xfd, 0xff,
    0xf7, 0xfe, 0xfb,

    /* U+046A "Ѫ" */
    0x7f, 0xc7, 0xf8, 0xe6, 0xf, 0xc0, 0xf0, 0xff,
    0x3f, 0xfe, 0x33, 0xc6, 0x78, 0xcf, 0x19, 0x80,

    /* U+046B "ѫ" */
    0x7f, 0x1f, 0x8f, 0x8f, 0xef, 0xfe, 0x6f, 0x37,
    0x9b,

    /* U+046C "Ѭ" */
    0xc7, 0xfd, 0x87, 0xfb, 0xe, 0x66, 0xf, 0xcc,
    0xf, 0x1f, 0xff, 0x3f, 0xff, 0xe6, 0x33, 0xcc,
    0x67, 0x98, 0xcf, 0x31, 0x98,

    /* U+046D "ѭ" */
    0xc7, 0xf6, 0x3f, 0x30, 0xf9, 0xff, 0xef, 0xff,
    0xe6, 0xcf, 0x36, 0x79, 0xb3,

    /* U+046E "Ѯ" */
    0x6c, 0x70, 0x3, 0xc7, 0xc1, 0x83, 0x1e, 0x38,
    0x7c, 0x18, 0x37, 0xff, 0x30, 0x70, 0x60,

    /* U+046F "ѯ" */
    0x6c, 0x70, 0x3, 0xc7, 0xc3, 0x9e, 0xe, 0xe,
    0xfb, 0xe6, 0xc, 0x8, 0x0,

    /* U+0470 "Ѱ" */
    0xcc, 0xf3, 0x3c, 0xcf, 0x33, 0xcc, 0xfb, 0x77,
    0xf8, 0xfc, 0xc, 0x3, 0x0, 0xc0,

    /* U+0471 "ѱ" */
    0xcd, 0xb3, 0x3c, 0xcf, 0x33, 0xcc, 0xfb, 0x77,
    0xf8, 0xfc, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+0472 "Ѳ" */
    0x3e, 0x3f, 0x98, 0xdc, 0x7e, 0x3f, 0xff, 0xff,
    0xc7, 0x63, 0x3f, 0x8f, 0x80,

    /* U+0473 "ѳ" */
    0x38, 0xfb, 0x1f, 0xff, 0xf9, 0xdf, 0x1c,

    /* U+0474 "Ѵ" */
    0xe1, 0xb1, 0xd8, 0xcc, 0x67, 0x31, 0xb0, 0xd8,
    0x6c, 0x1e, 0xe, 0x7, 0x0,

    /* U+0475 "ѵ" */
    0xe7, 0xdd, 0xb3, 0x66, 0xc7, 0xe, 0x1c,

    /* U+0476 "Ѷ" */
    0x6c, 0x1b, 0x38, 0x6c, 0x76, 0x33, 0x19, 0xcc,
    0x6c, 0x36, 0x1b, 0x7, 0x83, 0x81, 0xc0,

    /* U+0477 "ѷ" */
    0xd8, 0xd8, 0x7, 0x3e, 0xed, 0x9b, 0x36, 0x38,
    0x70, 0xe0,

    /* U+0478 "Ѹ" */
    0x3c, 0x0, 0x7e, 0x0, 0xe6, 0x0, 0xc3, 0x73,
    0xc3, 0x77, 0xc3, 0x37, 0xc3, 0x36, 0xc3, 0x3e,
    0xe6, 0x1e, 0x7e, 0x1c, 0x3c, 0x1c, 0x0, 0x1c,
    0x0, 0x38, 0x0, 0x30,

    /* U+0479 "ѹ" */
    0x38, 0xce, 0xf9, 0x9b, 0x1b, 0xb6, 0x33, 0xec,
    0x67, 0x98, 0xcf, 0x1f, 0xe, 0x1c, 0x18, 0x0,
    0x30, 0x1, 0xe0, 0x3, 0x80,

    /* U+047A "Ѻ" */
    0x18, 0x3c, 0x7e, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xfe, 0x7e, 0x3c, 0x18,

    /* U+047B "ѻ" */
    0x10, 0x71, 0xf6, 0xbc, 0x78, 0xf5, 0xbe, 0x38,
    0x20,

    /* U+047C "Ѽ" */
    0xe, 0x0, 0x98, 0x22, 0x46, 0x46, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x63, 0xc6, 0x3c, 0x63, 0xcf,
    0x37, 0xfe, 0x3b, 0xc0,

    /* U+047D "ѽ" */
    0x1c, 0x4, 0xc0, 0x40, 0xd6, 0xf1, 0xf0, 0x3c,
    0xcf, 0x33, 0xcc, 0xff, 0xf7, 0xb8,

    /* U+047E "Ѿ" */
    0x1f, 0x80, 0x20, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c, 0x63, 0xc7,
    0x37, 0xfe, 0x39, 0xc0,

    /* U+047F "ѿ" */
    0x3f, 0x1, 0x80, 0x0, 0x66, 0x3c, 0xc7, 0x98,
    0xf3, 0x1e, 0x63, 0xce, 0x7f, 0xf9, 0xee, 0x0,

    /* U+0480 "Ҁ" */
    0x3c, 0xfb, 0x9e, 0x3c, 0x18, 0x30, 0x60, 0xe0,
    0xf0, 0xe0, 0xc1, 0x83, 0x0,

    /* U+0481 "ҁ" */
    0x38, 0xfb, 0x36, 0xc, 0x18, 0x1e, 0x1c, 0x18,
    0x30, 0x60,

    /* U+0482 "҂" */
    0x4, 0x48, 0xe0, 0x61, 0x76, 0x18, 0x38, 0x49,
    0x80,

    /* U+0483 "҃" */
    0xf, 0xe0,

    /* U+0484 "҄" */
    0x3e, 0x40,

    /* U+0485 "҅" */
    0xf0,

    /* U+0486 "҆" */
    0xf0,

    /* U+0488 "҈" */
    0x7, 0x0, 0x0, 0x1c, 0x1c, 0x0, 0x0, 0x0,
    0x60, 0xe, 0x80, 0xa0, 0x0, 0x0, 0x3, 0x83,
    0x94, 0x14, 0xe, 0x0, 0x50, 0x0,

    /* U+0489 "҉" */
    0x2, 0x0, 0x10, 0x8, 0x8, 0x40, 0x0, 0x0,
    0x0, 0x3, 0x0, 0x60, 0x0, 0x0, 0x0, 0x0,
    0xc, 0x8, 0x4, 0x40, 0x20, 0x0,

    /* U+048A "Ҋ" */
    0x66, 0xf, 0x3, 0xc3, 0xc, 0xc7, 0x33, 0xcc,
    0xf3, 0x7c, 0xdb, 0x3e, 0xcf, 0x33, 0x8c, 0xe3,
    0xf0, 0xf0, 0xc, 0x3, 0x1, 0x80,

    /* U+048B "ҋ" */
    0x44, 0x78, 0x38, 0x0, 0xc6, 0xce, 0xde, 0xde,
    0xf6, 0xf6, 0xe7, 0xc7, 0x3, 0x3, 0x2,

    /* U+048C "Ҍ" */
    0x60, 0xf8, 0xf8, 0x60, 0x7c, 0x7e, 0x63, 0x63,
    0x63, 0x7e, 0x7c,

    /* U+048D "ҍ" */
    0x60, 0xf8, 0xf8, 0x60, 0x60, 0x60, 0x7e, 0x7f,
    0x63, 0x63, 0x7f, 0x7e,

    /* U+048E "Ҏ" */
    0xfc, 0xfe, 0xc3, 0xcb, 0xcb, 0xfe, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+048F "ҏ" */
    0xfd, 0xfb, 0x1e, 0x3c, 0x79, 0xff, 0x7f, 0xc1,
    0x83, 0x0,

    /* U+0490 "Ґ" */
    0x6, 0xc, 0x1f, 0xff, 0xf8, 0x30, 0x60, 0xc1,
    0x83, 0x6, 0xc, 0x18, 0x0,

    /* U+0491 "ґ" */
    0x18, 0xff, 0xfc, 0x63, 0x18, 0xc6, 0x0,

    /* U+0492 "Ғ" */
    0x7f, 0x7f, 0x60, 0x60, 0x60, 0xf8, 0xf8, 0x60,
    0x60, 0x60, 0x60,

    /* U+0493 "ғ" */
    0x7d, 0xf6, 0x3e, 0xf9, 0x86, 0x18,

    /* U+0494 "Ҕ" */
    0xfe, 0xfe, 0xc0, 0xc0, 0xc0, 0xfc, 0xfe, 0xc7,
    0xc3, 0xc3, 0xc3, 0x7, 0xe, 0xc,

    /* U+0495 "ҕ" */
    0xfb, 0xec, 0x3c, 0xfb, 0x3c, 0xf3, 0x18, 0x60,

    /* U+0496 "Җ" */
    0xe3, 0x1c, 0xe6, 0x71, 0xcc, 0xe1, 0x99, 0x83,
    0xb7, 0x3, 0xfc, 0xf, 0xfc, 0x1d, 0xb8, 0x73,
    0x38, 0xe6, 0x7f, 0x8c, 0x78, 0x0, 0x30, 0x0,
    0x60, 0x0, 0xc0,

    /* U+0497 "җ" */
    0xe6, 0x73, 0xb3, 0xd, 0xb8, 0x7f, 0x83, 0xfc,
    0x3b, 0x71, 0xd9, 0xfc, 0xcf, 0x0, 0x18, 0x0,
    0xc0, 0x6,

    /* U+0498 "Ҙ" */
    0x3c, 0x7f, 0x63, 0x3, 0x1f, 0x1e, 0x1f, 0x3,
    0x67, 0x7f, 0x3c, 0x18, 0x18, 0x18, 0x18,

    /* U+0499 "ҙ" */
    0x79, 0xfb, 0x31, 0xe0, 0xd9, 0xff, 0x3c, 0x30,
    0x60, 0xc1, 0x80,

    /* U+049A "Қ" */
    0xc7, 0x67, 0x33, 0x99, 0x8d, 0x87, 0xc3, 0xf1,
    0xb8, 0xce, 0x63, 0xf1, 0xe0, 0x30, 0x18, 0xc,

    /* U+049B "қ" */
    0xce, 0xdc, 0xd8, 0xf8, 0xf8, 0xdc, 0xdf, 0xcf,
    0x3, 0x3, 0x3,

    /* U+049C "Ҝ" */
    0xc7, 0x63, 0xb1, 0x9a, 0xcd, 0xc7, 0xe3, 0xf9,
    0xbc, 0xd7, 0x63, 0xb0, 0xe0,

    /* U+049D "ҝ" */
    0xc7, 0xc6, 0xde, 0xfc, 0xfe, 0xde, 0xc6, 0xc7,

    /* U+049E "Ҟ" */
    0x63, 0x7b, 0xbd, 0x8d, 0xc6, 0xc3, 0xe1, 0xf0,
    0xdc, 0x67, 0x33, 0x98, 0xe0,

    /* U+049F "ҟ" */
    0x60, 0xf0, 0xf0, 0x66, 0x6e, 0x6c, 0x78, 0x7c,
    0x6c, 0x6e, 0x66,

    /* U+04A0 "Ҡ" */
    0xf8, 0xff, 0x38, 0x66, 0xd, 0xc1, 0xb0, 0x3e,
    0x7, 0xc0, 0xdc, 0x19, 0xc3, 0x38, 0x63, 0x80,

    /* U+04A1 "ҡ" */
    0xf9, 0xfe, 0xe1, 0xb0, 0x7c, 0x1f, 0x6, 0xe1,
    0xb8, 0x67,

    /* U+04A2 "Ң" */
    0xc3, 0x30, 0xcc, 0x33, 0xc, 0xc3, 0x3f, 0xcf,
    0xf3, 0xc, 0xc3, 0x30, 0xfc, 0x3c, 0x3, 0x0,
    0xc0, 0x30,

    /* U+04A3 "ң" */
    0xcc, 0xcc, 0xcc, 0xfc, 0xfc, 0xcc, 0xcf, 0xcf,
    0x3, 0x3, 0x3,

    /* U+04A4 "Ҥ" */
    0xc3, 0xfe, 0x1f, 0xf0, 0xc1, 0x86, 0xc, 0x30,
    0x7f, 0x83, 0xfc, 0x18, 0x60, 0xc3, 0x6, 0x18,
    0x30, 0xc0,

    /* U+04A5 "ҥ" */
    0xcf, 0xe7, 0xf3, 0x1f, 0x8f, 0xc6, 0x63, 0x31,
    0x98,

    /* U+04A6 "Ҧ" */
    0xff, 0x7, 0xf8, 0x30, 0xc1, 0x86, 0xc, 0x30,
    0x61, 0xf3, 0xf, 0xd8, 0x67, 0xc3, 0x1e, 0x18,
    0xf0, 0xc6, 0x0, 0x70, 0x7, 0x0, 0x30,

    /* U+04A7 "ҧ" */
    0xfe, 0x1f, 0xc3, 0x18, 0x63, 0xcc, 0x7d, 0x8c,
    0xf1, 0x9e, 0x33, 0x0, 0xc0, 0x8,

    /* U+04A8 "Ҩ" */
    0x37, 0x1d, 0xee, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x3f, 0x67, 0x9f, 0xf1, 0xfc,

    /* U+04A9 "ҩ" */
    0x6e, 0xff, 0xdb, 0xdb, 0xdb, 0xff, 0x7e, 0x3f,

    /* U+04AA "Ҫ" */
    0x3e, 0x3f, 0xb9, 0xd8, 0x6c, 0x6, 0x3, 0x1,
    0x86, 0xe7, 0x3f, 0x8f, 0x83, 0x1, 0x80, 0xc0,
    0x60,

    /* U+04AB "ҫ" */
    0x38, 0xfb, 0x16, 0xc, 0x18, 0x9f, 0x1c, 0x18,
    0x30, 0x60, 0xc0,

    /* U+04AC "Ҭ" */
    0xff, 0xff, 0xc6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xf, 0x7, 0x80, 0xc0, 0x60, 0x30,

    /* U+04AD "ҭ" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x1e, 0x1e,
    0x6, 0x6, 0x6,

    /* U+04AE "Ү" */
    0xe7, 0xe7, 0x66, 0x7e, 0x3c, 0x3c, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+04AF "ү" */
    0xcf, 0x3e, 0xde, 0x79, 0xe3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+04B0 "Ұ" */
    0xe3, 0xb3, 0x99, 0xce, 0xc3, 0xe1, 0xe0, 0xf8,
    0x7c, 0x18, 0xc, 0x6, 0x0,

    /* U+04B1 "ұ" */
    0xcf, 0x3e, 0xde, 0x79, 0xe7, 0x9e, 0x30, 0xc3,
    0x0,

    /* U+04B2 "Ҳ" */
    0xe3, 0x33, 0x9d, 0x87, 0xc3, 0xc0, 0xe0, 0xf0,
    0x6c, 0x76, 0x33, 0xf8, 0xe0, 0x30, 0x18, 0xc,

    /* U+04B3 "ҳ" */
    0xec, 0xd9, 0xe1, 0xc7, 0x8f, 0xbb, 0xe7, 0x6,
    0xc, 0x18,

    /* U+04B4 "Ҵ" */
    0xfc, 0xcf, 0xcc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xff, 0x3f,
    0xf0, 0x3, 0x0, 0x30, 0x3,

    /* U+04B5 "ҵ" */
    0xf9, 0xbe, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63,
    0xfc, 0xff, 0x0, 0xc0, 0x30, 0xc,

    /* U+04B6 "Ҷ" */
    0xc3, 0x30, 0xcc, 0x33, 0xc, 0xc3, 0x1f, 0xc3,
    0xf0, 0xc, 0x3, 0x0, 0xf0, 0x3c, 0x3, 0x0,
    0xc0, 0x30,

    /* U+04B7 "ҷ" */
    0xc6, 0xc6, 0xc6, 0xc6, 0xfe, 0x7e, 0x7, 0x7,
    0x3, 0x3, 0x3,

    /* U+04B8 "Ҹ" */
    0xc3, 0xc3, 0xc3, 0xcb, 0xcb, 0x7f, 0x3f, 0xb,
    0xb, 0x3, 0x3,

    /* U+04B9 "ҹ" */
    0xc7, 0x8f, 0x5e, 0xbf, 0xef, 0xc5, 0x83,

    /* U+04BA "Һ" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xfe, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+04BB "һ" */
    0xc1, 0x83, 0x6, 0xef, 0xf8, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+04BC "Ҽ" */
    0xf, 0x7, 0xe3, 0x9e, 0xc3, 0xff, 0xdf, 0xf3,
    0x0, 0xc0, 0x38, 0x7, 0xe0, 0xf8,

    /* U+04BD "ҽ" */
    0xe, 0xf, 0xbe, 0x7f, 0xf7, 0xf9, 0xc0, 0x7e,
    0x1e,

    /* U+04BE "Ҿ" */
    0xf, 0x7, 0xe3, 0x8e, 0xc3, 0xff, 0xdf, 0xf3,
    0x0, 0xc0, 0x3c, 0x87, 0xe0, 0xf8, 0xc, 0x3,
    0x0, 0xc0, 0x30,

    /* U+04BF "ҿ" */
    0xe, 0xf, 0xbe, 0x7f, 0xf7, 0xf9, 0xc0, 0x7e,
    0x1e, 0x6, 0x3, 0x1, 0x80, 0xc0,

    /* U+04C0 "Ӏ" */
    0xff, 0xff, 0xfc,

    /* U+04C1 "Ӂ" */
    0x4, 0x80, 0x1e, 0x0, 0x70, 0x38, 0xc7, 0x73,
    0x19, 0xcc, 0xe3, 0x33, 0xe, 0xdc, 0x1f, 0xe0,
    0xff, 0xc3, 0x33, 0x1c, 0xce, 0x73, 0x1b, 0x8c,
    0x70,

    /* U+04C2 "ӂ" */
    0x9, 0x80, 0x7c, 0x1, 0xc0, 0x0, 0xe, 0x67,
    0x33, 0x39, 0xdb, 0x87, 0xf8, 0x3f, 0xe3, 0xb7,
    0x19, 0x9d, 0xcc, 0xe0,

    /* U+04C3 "Ӄ" */
    0xc6, 0xce, 0xcc, 0xdc, 0xd8, 0xfc, 0xfe, 0xc7,
    0xc3, 0xc3, 0xc3, 0x7, 0xe, 0xc,

    /* U+04C4 "ӄ" */
    0xcf, 0xbb, 0x77, 0xcf, 0xd9, 0xf1, 0xe3, 0xe,
    0x18,

    /* U+04C5 "Ӆ" */
    0x3f, 0x87, 0xf0, 0xc6, 0x18, 0xc3, 0x18, 0x63,
    0xc, 0x61, 0x8c, 0x71, 0x9c, 0x3f, 0x7, 0x80,
    0x30, 0x6, 0x1, 0x80,

    /* U+04C6 "ӆ" */
    0x3f, 0xf, 0xc3, 0x30, 0xcc, 0x33, 0x1c, 0xcf,
    0x3f, 0x8f, 0x0, 0xc0, 0x30, 0x18,

    /* U+04C7 "Ӈ" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3, 0x3, 0xf, 0xe,

    /* U+04C8 "ӈ" */
    0xcf, 0x3c, 0xff, 0xff, 0x3c, 0xf3, 0xc, 0xf3,
    0x80,

    /* U+04C9 "Ӊ" */
    0xc3, 0x30, 0xcc, 0x33, 0xc, 0xc3, 0x3f, 0xcf,
    0xf3, 0xc, 0xc3, 0x30, 0xfc, 0x3c, 0x3, 0x0,
    0xc0, 0x60,

    /* U+04CA "ӊ" */
    0xcc, 0xcc, 0xcc, 0xfc, 0xfc, 0xcc, 0xcf, 0xcf,
    0x3, 0x3, 0x6,

    /* U+04CB "Ӌ" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f, 0x3f, 0x3,
    0x3, 0xf, 0xf, 0xc, 0xc, 0xc,

    /* U+04CC "ӌ" */
    0xc7, 0x8f, 0x1e, 0x3f, 0xef, 0xc7, 0x8f, 0x18,
    0x30, 0x60,

    /* U+04CD "Ӎ" */
    0xe0, 0xef, 0x1e, 0xf1, 0xef, 0x1e, 0xdb, 0x6d,
    0xb6, 0xdb, 0x6c, 0xe6, 0xce, 0x6c, 0xe7, 0xce,
    0x70, 0x3, 0x0, 0x30, 0x2,

    /* U+04CE "ӎ" */
    0xe3, 0x9c, 0x73, 0x9e, 0x7b, 0xcf, 0x79, 0xbb,
    0x37, 0x7e, 0xef, 0x0, 0x60, 0xc, 0x3, 0x0,

    /* U+04CF "ӏ" */
    0xff, 0xff, 0xfc,

    /* U+04D0 "Ӑ" */
    0x32, 0x7, 0x81, 0xc0, 0x30, 0x1e, 0x7, 0x81,
    0xe0, 0xfc, 0x33, 0xc, 0xc7, 0xf9, 0xfe, 0x61,
    0xb8, 0x70,

    /* U+04D1 "ӑ" */
    0x4c, 0xf0, 0xe0, 0x7, 0x9f, 0xb3, 0x3e, 0xfd,
    0x9b, 0xf3, 0xe0,

    /* U+04D2 "Ӓ" */
    0x33, 0xc, 0xc1, 0xc0, 0x78, 0x1e, 0x7, 0x83,
    0xf0, 0xcc, 0x33, 0x1f, 0xe7, 0xf9, 0x87, 0xe1,
    0xc0,

    /* U+04D3 "ӓ" */
    0x66, 0xcc, 0x1, 0xe7, 0xfc, 0xcf, 0xbf, 0xe6,
    0xfc, 0xf8,

    /* U+04D4 "Ӕ" */
    0x7, 0xf0, 0x7f, 0x83, 0xc0, 0x3e, 0x1, 0xb0,
    0x1d, 0xf8, 0xcf, 0xcf, 0xe0, 0x7f, 0x7, 0x1f,
    0xf8, 0xfe,

    /* U+04D5 "ӕ" */
    0x3f, 0xc7, 0xfe, 0x66, 0x63, 0xfe, 0x7f, 0xf6,
    0x60, 0x7f, 0xe7, 0xbc,

    /* U+04D6 "Ӗ" */
    0x4c, 0xf8, 0xe7, 0xff, 0xf8, 0x30, 0x60, 0xfd,
    0xfb, 0x6, 0xf, 0xff, 0xc0,

    /* U+04D7 "ӗ" */
    0x4c, 0xf8, 0xe0, 0x3, 0x8f, 0xb1, 0xff, 0xff,
    0x81, 0xf9, 0xe0,

    /* U+04D8 "Ә" */
    0x7e, 0x3f, 0x90, 0xe0, 0x30, 0x1f, 0xff, 0xfe,
    0xc3, 0x63, 0xbf, 0x87, 0x80,

    /* U+04D9 "ә" */
    0x78, 0xf8, 0x1f, 0xff, 0xec, 0xdf, 0x1c,

    /* U+04DA "Ӛ" */
    0x33, 0x19, 0x9f, 0x8f, 0xe0, 0x38, 0xc, 0x7,
    0xff, 0xff, 0xb0, 0xdc, 0xef, 0xe1, 0xe0,

    /* U+04DB "ӛ" */
    0x66, 0xcc, 0x3, 0xc7, 0xc0, 0xff, 0xff, 0x66,
    0xf8, 0xe0,

    /* U+04DC "Ӝ" */
    0xc, 0xc0, 0x19, 0x83, 0x8c, 0x73, 0x18, 0xe7,
    0x33, 0x86, 0x67, 0xe, 0xdc, 0xf, 0xf0, 0x3f,
    0xf0, 0x66, 0x71, 0xcc, 0xe7, 0x18, 0xee, 0x31,
    0xc0,

    /* U+04DD "ӝ" */
    0x19, 0x81, 0x98, 0x0, 0xe, 0x67, 0x66, 0x67,
    0x6e, 0x3f, 0xc3, 0xfc, 0x76, 0xe6, 0x66, 0xe6,
    0x70,

    /* U+04DE "Ӟ" */
    0x66, 0xcd, 0xf7, 0xfe, 0x60, 0xc7, 0x8e, 0x1e,
    0xf, 0x9f, 0xf7, 0xc0,

    /* U+04DF "ӟ" */
    0x66, 0xcc, 0x1, 0xe7, 0xfd, 0xc7, 0x7, 0x66,
    0xfc, 0xf0,

    /* U+04E0 "Ӡ" */
    0x7f, 0x7f, 0x6, 0xc, 0x1e, 0x1e, 0x3, 0x3,
    0x63, 0x7f, 0x3c,

    /* U+04E1 "ӡ" */
    0x7f, 0x7f, 0x6, 0xc, 0x1e, 0x1e, 0x3, 0x3,
    0x63, 0x7f, 0x3c,

    /* U+04E2 "Ӣ" */
    0x3e, 0x3e, 0xc3, 0xc7, 0xc7, 0xcf, 0xdf, 0xdb,
    0xfb, 0xf3, 0xe3, 0xe3, 0xc3,

    /* U+04E3 "ӣ" */
    0x7c, 0xf8, 0x6, 0x3c, 0xfb, 0xf7, 0xfb, 0xf7,
    0xcf, 0x18,

    /* U+04E4 "Ӥ" */
    0x66, 0x66, 0xc3, 0xc7, 0xc7, 0xcf, 0xdf, 0xdb,
    0xfb, 0xf3, 0xe3, 0xe3, 0xc3,

    /* U+04E5 "ӥ" */
    0x6d, 0xb0, 0x33, 0xdf, 0x7f, 0xff, 0xef, 0xbc,
    0xc0,

    /* U+04E6 "Ӧ" */
    0x36, 0x36, 0x3c, 0x7e, 0xe6, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xe6, 0x7e, 0x3c,

    /* U+04E7 "ӧ" */
    0x6c, 0xd8, 0x1, 0xc7, 0xd8, 0xf1, 0xe3, 0xc6,
    0xf8, 0xe0,

    /* U+04E8 "Ө" */
    0x3e, 0x3f, 0x98, 0xdc, 0x7e, 0x3f, 0xff, 0xff,
    0xc7, 0x63, 0x3f, 0x8f, 0x80,

    /* U+04E9 "ө" */
    0x38, 0xfb, 0x1f, 0xff, 0xf9, 0xdf, 0x1c,

    /* U+04EA "Ӫ" */
    0x33, 0x19, 0x8f, 0x8f, 0xe7, 0x37, 0x8f, 0x87,
    0xff, 0xff, 0xf0, 0xd8, 0xcf, 0xe3, 0xe0,

    /* U+04EB "ӫ" */
    0x6c, 0xd8, 0x1, 0xc7, 0xdd, 0xff, 0xff, 0xee,
    0xf8, 0xe0,

    /* U+04EC "Ӭ" */
    0x33, 0x19, 0x87, 0x8f, 0xe6, 0x33, 0xc, 0x6,
    0x1f, 0xf, 0x80, 0xd8, 0xef, 0xe3, 0xe0,

    /* U+04ED "ӭ" */
    0x66, 0xcc, 0x1, 0xc7, 0xdc, 0xc7, 0x8f, 0x66,
    0xf8, 0xe0,

    /* U+04EE "Ӯ" */
    0x3e, 0x1f, 0x38, 0xfc, 0x66, 0x73, 0xb0, 0xd8,
    0x7c, 0x1c, 0xe, 0x6, 0xf, 0x7, 0x0,

    /* U+04EF "ӯ" */
    0x7c, 0xf8, 0x6, 0x3e, 0xfd, 0x9b, 0x3e, 0x38,
    0x70, 0xe1, 0x8f, 0x1c, 0x0,

    /* U+04F0 "Ӱ" */
    0x33, 0x19, 0xb8, 0x6e, 0x77, 0x31, 0xd8, 0xfc,
    0x3c, 0x1e, 0x6, 0x3, 0x7, 0x3, 0x0,

    /* U+04F1 "ӱ" */
    0x6c, 0xd8, 0x7, 0x76, 0xcd, 0x9b, 0x1e, 0x38,
    0x70, 0x61, 0x87, 0xc, 0x0,

    /* U+04F2 "Ӳ" */
    0xb, 0xd, 0x38, 0xec, 0x67, 0x31, 0xb8, 0xf8,
    0x3c, 0x1c, 0x6, 0x3, 0x7, 0x3, 0x0,

    /* U+04F3 "ӳ" */
    0x36, 0x2c, 0x0, 0xe6, 0x6e, 0x6e, 0x6c, 0x7c,
    0x3c, 0x38, 0x38, 0x38, 0x70, 0x60,

    /* U+04F4 "Ӵ" */
    0x36, 0x36, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f,
    0x3f, 0x3, 0x3, 0x3, 0x3,

    /* U+04F5 "ӵ" */
    0x6d, 0xb0, 0x33, 0xcf, 0x3c, 0xff, 0x7c, 0x30,
    0xc0,

    /* U+04F6 "Ӷ" */
    0xff, 0xff, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0xe3, 0xc1, 0x83, 0x6, 0x0,

    /* U+04F7 "ӷ" */
    0xff, 0xf1, 0x8c, 0x63, 0xde, 0x31, 0x8c,

    /* U+04F8 "Ӹ" */
    0x1b, 0x3, 0x63, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xfe, 0x1f, 0xe3, 0xc6, 0x78, 0xcf, 0x19, 0xfe,
    0x3f, 0x86,

    /* U+04F9 "ӹ" */
    0x33, 0xc, 0xc0, 0x3, 0x3, 0xc0, 0xfe, 0x3f,
    0xef, 0x3b, 0xce, 0xff, 0xbf, 0xcc,

    /* U+04FA "Ӻ" */
    0x7f, 0x7f, 0x60, 0x60, 0xf0, 0xf0, 0x60, 0x60,
    0x60, 0x78, 0x78, 0x18, 0x38, 0x30,

    /* U+04FB "ӻ" */
    0x7d, 0xf6, 0x3e, 0xf9, 0x87, 0x9e, 0x19, 0xe7,
    0x0,

    /* U+04FC "Ӽ" */
    0x63, 0x9c, 0xc3, 0x70, 0xf8, 0x1e, 0x7, 0x1,
    0xe0, 0xf8, 0x37, 0x1c, 0xf6, 0x3c, 0x3, 0x3,
    0xc0, 0xe0,

    /* U+04FD "ӽ" */
    0x66, 0x6c, 0x7c, 0x38, 0x38, 0x7c, 0x6f, 0xe7,
    0x3, 0xf, 0xe,

    /* U+04FE "Ӿ" */
    0xe3, 0xb3, 0x9d, 0xc6, 0xc3, 0xe1, 0xf0, 0xf8,
    0x7c, 0x76, 0x3b, 0xb8, 0xe0,

    /* U+04FF "ӿ" */
    0xee, 0xd9, 0xf3, 0xe7, 0xcf, 0x9b, 0x77
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 6, .adv_w = 130, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 130, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 30, .adv_w = 166, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 35, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 57, .adv_w = 79, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 65, .adv_w = 79, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 73, .adv_w = 104, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 80, .adv_w = 120, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 88, .adv_w = 60, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 90, .adv_w = 101, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 91, .adv_w = 68, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 79, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 100, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 130, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 67, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 65, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 204, .adv_w = 114, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 210, .adv_w = 131, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 214, .adv_w = 115, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 220, .adv_w = 114, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 201, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 250, .adv_w = 153, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 436, .adv_w = 146, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 148, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 195, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 141, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 63, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 552, .adv_w = 96, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 561, .adv_w = 63, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 567, .adv_w = 100, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 572, .adv_w = 99, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 574, .adv_w = 76, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 575, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 581, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 81, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 632, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 61, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 652, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 193, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 700, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 710, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 77, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 163, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 751, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 768, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 73, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 782, .adv_w = 57, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 784, .adv_w = 73, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 792, .adv_w = 142, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 795, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 167, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 146, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 68, .box_w = 6, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 235, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 235, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 168, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 143, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 956, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 142, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 985, .adv_w = 155, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 999, .adv_w = 153, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1013, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1023, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 166, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1061, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1071, .adv_w = 234, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1112, .adv_w = 155, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1126, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 158, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1150, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1166, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1177, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1223, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1236, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1249, .adv_w = 188, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1264, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1277, .adv_w = 173, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1295, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1306, .adv_w = 216, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1323, .adv_w = 234, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1346, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1360, .adv_w = 195, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1376, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1397, .adv_w = 218, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1414, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1425, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1431, .adv_w = 130, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1442, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1449, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1454, .adv_w = 144, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1467, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1474, .adv_w = 202, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1493, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1500, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1511, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1518, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1526, .adv_w = 172, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1535, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1541, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1548, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1555, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1565, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1572, .adv_w = 117, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1580, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1590, .adv_w = 164, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1606, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1613, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1624, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1631, .adv_w = 187, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1641, .adv_w = 210, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1658, .adv_w = 151, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1667, .adv_w = 191, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1677, .adv_w = 127, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1684, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1691, .adv_w = 181, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1701, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1708, .adv_w = 122, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1718, .adv_w = 122, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1728, .adv_w = 126, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1742, .adv_w = 94, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1749, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1756, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1763, .adv_w = 62, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1766, .adv_w = 64, .box_w = 6, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1775, .adv_w = 61, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1782, .adv_w = 194, .box_w = 12, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1794, .adv_w = 193, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1805, .adv_w = 126, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1816, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1826, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1836, .adv_w = 116, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1850, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1860, .adv_w = 221, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1877, .adv_w = 191, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1888, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1899, .adv_w = 127, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1911, .adv_w = 200, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1928, .adv_w = 170, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 155, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1952, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1960, .adv_w = 216, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1978, .adv_w = 184, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1989, .adv_w = 197, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2005, .adv_w = 163, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2014, .adv_w = 263, .box_w = 15, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2035, .adv_w = 228, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2048, .adv_w = 115, .box_w = 7, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2063, .adv_w = 116, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2076, .adv_w = 167, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2090, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2105, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2118, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2125, .adv_w = 145, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2138, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2145, .adv_w = 145, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2160, .adv_w = 115, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2170, .adv_w = 271, .box_w = 16, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2198, .adv_w = 242, .box_w = 15, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2219, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2232, .adv_w = 126, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2241, .adv_w = 221, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2261, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2275, .adv_w = 221, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2295, .adv_w = 191, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2311, .adv_w = 135, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2324, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2334, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2343, .adv_w = 0, .box_w = 5, .box_h = 3, .ofs_x = -6, .ofs_y = 8},
    {.bitmap_index = 2345, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 2347, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -4, .ofs_y = 9},
    {.bitmap_index = 2348, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -4, .ofs_y = 9},
    {.bitmap_index = 2349, .adv_w = 0, .box_w = 13, .box_h = 13, .ofs_x = -10, .ofs_y = -3},
    {.bitmap_index = 2371, .adv_w = 0, .box_w = 13, .box_h = 13, .ofs_x = -9, .ofs_y = -3},
    {.bitmap_index = 2393, .adv_w = 176, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2415, .adv_w = 149, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2430, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2441, .adv_w = 127, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2453, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2464, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2474, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2487, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2494, .adv_w = 125, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2505, .adv_w = 94, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2511, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2525, .adv_w = 122, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2533, .adv_w = 252, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2560, .adv_w = 216, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2578, .adv_w = 141, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2593, .adv_w = 116, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2604, .adv_w = 171, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2620, .adv_w = 152, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2631, .adv_w = 152, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2644, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2652, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2665, .adv_w = 125, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2676, .adv_w = 186, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2692, .adv_w = 163, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2702, .adv_w = 178, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2720, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2731, .adv_w = 223, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2749, .adv_w = 158, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2758, .adv_w = 236, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2781, .adv_w = 193, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2795, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2809, .adv_w = 150, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2817, .adv_w = 147, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2834, .adv_w = 116, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2845, .adv_w = 141, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2861, .adv_w = 117, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2872, .adv_w = 141, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2883, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2892, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2905, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2914, .adv_w = 152, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2930, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2940, .adv_w = 200, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2961, .adv_w = 156, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2975, .adv_w = 177, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2993, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3004, .adv_w = 152, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3015, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3022, .adv_w = 159, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3033, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3043, .adv_w = 167, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3057, .adv_w = 135, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3066, .adv_w = 167, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3085, .adv_w = 135, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3099, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3102, .adv_w = 234, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3127, .adv_w = 202, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3147, .adv_w = 148, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3161, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3170, .adv_w = 178, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3190, .adv_w = 149, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3204, .adv_w = 158, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3218, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3227, .adv_w = 177, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3245, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3256, .adv_w = 157, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3270, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3280, .adv_w = 216, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3301, .adv_w = 191, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3317, .adv_w = 68, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3320, .adv_w = 153, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3338, .adv_w = 119, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3349, .adv_w = 153, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3366, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3376, .adv_w = 211, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3394, .adv_w = 189, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3406, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3419, .adv_w = 122, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3430, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3443, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3450, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3465, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3475, .adv_w = 234, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3500, .adv_w = 202, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3517, .adv_w = 141, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3529, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3539, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3550, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3561, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3574, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3584, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3597, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3606, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3619, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3629, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3642, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3649, .adv_w = 155, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3664, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3674, .adv_w = 143, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3689, .adv_w = 114, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3699, .adv_w = 142, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3714, .adv_w = 116, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3727, .adv_w = 142, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3742, .adv_w = 116, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3755, .adv_w = 142, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3770, .adv_w = 116, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3784, .adv_w = 157, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3797, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3806, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3819, .adv_w = 94, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3826, .adv_w = 195, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3844, .adv_w = 191, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3858, .adv_w = 135, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3872, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3881, .adv_w = 163, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3899, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3910, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3923, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1024, .range_length = 135, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1160, .range_length = 120, .glyph_id_start = 231,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t __attribute__((aligned(4))) kern_left_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 0,
    2, 3, 0, 0, 0, 4, 0, 4,
    5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 7, 8, 9, 10, 11,
    0, 12, 12, 13, 14, 15, 12, 12,
    9, 16, 17, 18, 0, 19, 13, 20,
    21, 22, 23, 24, 25, 0, 0, 0,
    0, 0, 26, 27, 28, 0, 29, 30,
    0, 31, 0, 0, 32, 0, 31, 31,
    33, 27, 0, 34, 0, 35, 0, 36,
    37, 38, 36, 39, 40, 0, 0, 0,
    10, 10, 41, 42, 0, 0, 12, 12,
    13, 43, 44, 45, 14, 0, 46, 12,
    6, 47, 7, 42, 48, 10, 22, 49,
    12, 0, 14, 12, 12, 12, 9, 0,
    16, 8, 19, 46, 0, 22, 12, 12,
    12, 50, 51, 12, 52, 53, 54, 55,
    26, 56, 57, 58, 59, 29, 38, 28,
    0, 0, 60, 0, 0, 0, 33, 0,
    27, 28, 61, 36, 27, 38, 62, 0,
    0, 63, 64, 0, 65, 27, 66, 0,
    29, 29, 0, 58, 67, 0, 0, 0,
    0, 68, 69, 0, 0, 0, 36, 0,
    0, 0, 52, 65, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 20, 36, 20, 36,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 42,
    58, 42, 0, 0, 0, 22, 38, 0,
    0, 14, 0, 14, 0, 14, 0, 14,
    0, 12, 0, 0, 0, 0, 0, 0,
    0, 8, 28, 19, 0, 23, 36, 23,
    0, 22, 38, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 12,
    22, 38, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 12, 0, 12, 6,
    26, 6, 26, 0, 0, 10, 29, 9,
    29, 0, 29, 22, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 33, 0,
    0, 0, 33, 0, 27, 46, 36, 46,
    36, 46, 36, 0, 0, 42, 58, 0,
    0, 0, 58, 22, 38, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t __attribute__((aligned(4))) kern_right_class_mapping[] =
{
    0, 1, 0, 2, 0, 0, 0, 3,
    2, 0, 4, 5, 0, 6, 7, 6,
    8, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 11, 0, 12, 0, 0, 0,
    12, 0, 0, 13, 0, 0, 0, 0,
    12, 0, 12, 0, 14, 15, 16, 17,
    18, 19, 20, 21, 0, 0, 22, 0,
    0, 0, 23, 0, 24, 24, 24, 25,
    24, 0, 0, 0, 0, 0, 26, 26,
    27, 26, 24, 28, 29, 30, 31, 32,
    33, 34, 32, 35, 0, 0, 36, 0,
    0, 0, 15, 0, 12, 0, 0, 0,
    13, 37, 0, 15, 0, 0, 38, 0,
    11, 0, 0, 0, 39, 0, 19, 0,
    0, 0, 0, 37, 0, 0, 12, 0,
    0, 12, 15, 38, 0, 19, 0, 40,
    0, 0, 0, 0, 41, 42, 0, 0,
    23, 43, 44, 26, 45, 24, 34, 46,
    26, 26, 26, 47, 26, 26, 27, 26,
    26, 24, 48, 32, 24, 34, 26, 49,
    26, 26, 50, 51, 52, 53, 26, 54,
    24, 24, 55, 26, 24, 29, 0, 0,
    0, 47, 26, 0, 26, 26, 32, 56,
    12, 57, 0, 0, 0, 0, 11, 0,
    0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 12, 27, 17, 32, 17, 32,
    12, 24, 12, 59, 12, 24, 12, 60,
    12, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 61, 0,
    62, 0, 0, 0, 0, 19, 34, 0,
    0, 0, 26, 0, 56, 0, 0, 15,
    63, 0, 26, 0, 26, 0, 44, 12,
    24, 12, 24, 15, 0, 20, 32, 20,
    0, 19, 34, 15, 0, 40, 49, 64,
    65, 0, 0, 66, 67, 0, 0, 0,
    19, 34, 0, 0, 37, 47, 0, 26,
    0, 26, 40, 49, 0, 26, 0, 11,
    23, 11, 23, 0, 0, 0, 24, 68,
    24, 0, 24, 19, 34, 0, 0, 0,
    0, 0, 26, 0, 26, 12, 27, 12,
    24, 12, 27, 0, 0, 38, 32, 38,
    32, 38, 32, 40, 49, 0, 26, 0,
    26, 0, 26, 19, 34, 0, 0
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
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 4, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 0, -9, 0, -2,
    0, 0, -13, -2, -8, -4, 0, -16,
    0, 0, 0, 0, 0, -5, -1, 0,
    0, -2, -1, -5, -4, 0, 1, 0,
    2, 0, 2, -6, -6, 0, 0, 0,
    0, 0, 2, -6, -4, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, -17, -13, -17, -4, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -3, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, 0, -2, 0, 0, 0, -9, 0,
    -2, 0, -2, -5, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, -4, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -2, 0, -2, 0,
    0, 0, -2, -3, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -30, 0, 0,
    0, 0, -21, 0, -23, 0, 2, 0,
    0, 0, 0, 0, 0, 0, -4, -2,
    0, 0, -2, -3, 0, 0, -2, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, -3, 0, 0, 0, 2, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 2, -3, 0, 0, 0, 0,
    2, 0, 2, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -3, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -18, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -3, 0,
    0, 0, -3, -4, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, -8, -10, 0, 0, -3,
    0, 0, 0, 0, -9, 0, -5, -6,
    0, 0, -10, 0, -6, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, -7, 0, 0, -22, -3,
    -23, -10, 0, -31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -13,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -44, 0, 0, 0, 0, -19, 0,
    -20, 0, 0, 0, 0, 0, -6, 0,
    -4, 0, -1, -1, 0, 0, -1, 0,
    0, 2, 0, 2, 0, 0, 0, 0,
    -16, 0, -26, 0, 0, 0, 0, 0,
    -19, 0, -10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -3, -2, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, -2, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -28, -30, 0,
    0, 0, -13, -3, -24, -2, 2, 0,
    2, 2, 0, 2, 0, 0, -18, -10,
    0, -10, -23, -7, -8, 0, -7, -9,
    -5, -8, -7, 0, -6, 0, -9, 0,
    2, 0, -3, -10, -15, -14, -14, -9,
    -14, 0, -14, -9, -14, -15, 4, -14,
    -14, 0, -17, -4, -14, -11, -8, 0,
    -14, -11, -16, -3, 0, 0, 0, 2,
    0, -24, -17, 0, 0, 0, -8, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, -5, -5, 0, 0, -5, -3,
    0, 0, -3, -1, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, -16, -7, 0,
    0, 0, -5, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 1, -4, -3,
    0, 0, -3, -2, 0, 0, -2, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -17, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -2, 0,
    0, 0, -2, -3, 0, 0, 0, 0,
    2, 0, 2, 0, 0, 0, -3, 0,
    0, 0, 2, -4, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, -5, -5, -6, -3,
    0, 0, -3, 2, -5, -25, -17, 0,
    0, 0, -16, -3, -10, -2, 2, -10,
    2, 2, 1, 2, 0, 2, -7, -7,
    -2, -4, -7, -4, -6, -2, -4, -2,
    0, -3, -3, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -2, 0,
    0, 0, -2, -3, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, -2,
    0, 0, 0, 0, -2, 0, 0, -1,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -2, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -2, -5,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, -2, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, -2, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -2, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, -19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -2, 2, 0, -4, 0,
    0, 5, 0, 2, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, -18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, -1, 1, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    -5, 0, -1, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, -2, 0, 0, 0, -2, 0, -3,
    -5, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, -5, 0, 0, 0, 0,
    -3, 0, 0, -3, 0, 0, -7, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -50, -53, 0, 0, 0, -22, -7,
    0, -5, 1, 0, 1, 1, 0, 1,
    0, 0, -18, -19, 0, -19, -17, -14,
    -16, 0, -14, -17, -11, -16, -13, 0,
    -12, 0, -17, 0, 1, 0, -7, -20,
    -28, -26, -26, -17, -27, 0, -26, -17,
    -26, -27, 5, -26, -26, 0, -31, -9,
    -26, -21, -16, 0, -27, -21, -30, -7,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    -6, 0, -2, -9, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, -1, -2, 0, -3,
    -7, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -3,
    0, -4, 0, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, -6, 0, -2, -10,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, -2, 0, -3, -7, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, -3, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, -3, 0, 0, 0, 0,
    -2, 0, 0, -2, 0, 0, -4, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, -43, -22, 0, 0, 0, -10, -3,
    0, 0, 2, 0, 0, 0, 0, 2,
    0, 0, -9, -7, 0, -9, -7, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, -9, 0, 2, 0, 0, -3,
    -9, -5, -8, 0, -3, 0, -4, -9,
    0, -5, 0, -3, 0, 0, -5, 0,
    -4, -3, 0, 0, -3, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -3, 0, -2, -3, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -2, 0, -3,
    -3, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, -3,
    0, 0, -3, 0, -3, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 2, -3, -3, 0, 0, 0,
    2, 0, 2, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -3, 0, -3, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, -2, 0,
    -1, 0, -1, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, -3, 0, -3, 0, 2, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 1, 2, -3, -3, -1, 0, 0,
    2, 0, 2, -3, -3, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -3, -3, -3, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    -6, 0, 0, -9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, -2, 0, -3,
    -7, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -3,
    0, -4, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, -6, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, -2, 0, -3, -7, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -3, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, -3, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -3, -3, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, -3, -3, 0, 0, 0, 0, 0,
    -3, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, -2, 0, 0, 0, -2,
    0, 0, 0, 0, -1, 0, 0, -2,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, 0, 0, -1, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -17, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, -2,
    -2, -5, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -7,
    1, 0, -3, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 2, -2, -2, 0, 0, -2,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 2, -3,
    -3, -8, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    -4, 0, 0, 0, 0, -15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, -2, 0, 0, -2,
    0, 0, 0, 0, -4, 0, 0, -4,
    0, 0, -20, 0, -2, 0, 0, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    -3, 0, 0, -6, 0, 0, 0, 0,
    -4, 0, 0, -4, 0, 0, -25, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, -1, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -15, -7, 0, 0, -5,
    0, 0, 0, 0, -4, 0, 0, -4,
    0, 0, -25, 0, -2, 0, 0, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    -5, 0, 0, -4, 0, 0, 0, 0,
    -4, 0, 0, -4, 0, 0, -25, 0,
    -2, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 70,
    .right_class_cnt     = 68,
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
    .cmap_num = 3,
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
const lv_font_t ui_font_ftRbBlck14b1n111 = {
#else
lv_font_t ui_font_ftRbBlck14b1n111 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_FTRBBLCK14B1N111*/

