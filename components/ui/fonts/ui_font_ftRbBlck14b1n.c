/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --font D:/ESP/sqls_ws/learn/l01/assets/Roboto-Black.ttf -o D:/ESP/sqls_ws/learn/l01/assets\ui_font_ftRbBlck14b1n.c --format lvgl --symbols АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FTRBBLCK14B1N
#define UI_FONT_FTRBBLCK14B1N 1
#endif

#if UI_FONT_FTRBBLCK14B1N

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
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
    {.bitmap_index = 0, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 153, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 166, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 74, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 234, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 155, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 158, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 188, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 277, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 173, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 308, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 216, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 234, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 359, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 195, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 218, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 130, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 144, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 480, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 202, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 126, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 172, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 568, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 578, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 117, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 603, .adv_w = 164, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 619, .adv_w = 115, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 637, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 187, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 210, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 671, .adv_w = 151, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 191, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 127, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 181, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 122, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 1025, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1040, .range_length = 64, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1105, .range_length = 1, .glyph_id_start = 66,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t __attribute__((aligned(4))) kern_left_class_mapping[] =
{
    0, 1, 2, 3, 4, 5, 6, 1,
    7, 8, 9, 0, 10, 9, 9, 9,
    11, 0, 12, 13, 14, 15, 0, 7,
    9, 9, 9, 16, 17, 9, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27,
    28, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 31, 0, 32, 33, 31, 28,
    34, 0, 0, 35, 36, 0, 37, 31,
    38, 0, 27
};

/*Map glyph_ids to kern right classes*/
static const uint8_t __attribute__((aligned(4))) kern_right_class_mapping[] =
{
    0, 0, 1, 0, 0, 0, 2, 0,
    3, 0, 0, 0, 0, 4, 0, 0,
    5, 0, 0, 5, 6, 7, 0, 3,
    0, 8, 0, 0, 0, 0, 9, 10,
    0, 0, 11, 12, 13, 14, 15, 16,
    17, 18, 14, 14, 14, 19, 14, 14,
    20, 14, 14, 16, 21, 22, 16, 17,
    14, 23, 14, 14, 24, 25, 26, 27,
    14, 28, 16
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -2, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 2,
    -2, -13, 0, -6, -6, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 2, -1,
    -6, -5, -4, 0, 0, -5, 0, 0,
    0, 0, -2, 0, 0, -3, -2, -3,
    -3, 0, 0, 0, 0, -5, 0, 0,
    -2, 0, 0, 0, -5, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -3, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, -17, 0, -12, -7, 1, 0, 0,
    1, 0, -18, -7, -20, -19, -28, -19,
    -16, -26, -26, -17, -17, -17, -27, 0,
    -26, -17, -26, -27, 2, 2, 0, 2,
    -3, -3, 0, -3, -3, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 2, 0, 2, -3, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, -3,
    0, 0, 2, -2, -4, -3, -5, 0,
    0, 0, 0, 0, 0, 0, -1, -1,
    0, -2, -1, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 2, 2, 2, 0, -3, 0, -3,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 2, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, -3, 0, 0, 0, -3,
    -8, -4, -10, 0, 0, -3, 0, 0,
    -2, -4, -2, -3, 0, -9, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -19, -26, -6, -16,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, -19, -1, 0, 0, -10, -1,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, -9, 0, -6,
    -3, 2, 0, 0, 2, 0, -18, -3,
    -10, -10, -15, -10, -8, -14, -14, -23,
    -9, -9, -14, 0, -14, -9, -14, -15,
    -10, -9, 0, -6, -3, 2, 0, 0,
    2, 0, -9, 0, -3, -9, -9, -7,
    0, -5, -8, -7, 0, 0, -3, 0,
    -4, -9, 0, -5, 2, 2, 2, 2,
    0, -3, 1, -3, -3, -1, 0, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    -3, 0, -3, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -11, -2, -3,
    -7, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, -6, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, -11, -2, -3, -7, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    -5, 0, 0, 0, 0, -5, 0, 0,
    0, -3, -3, -3, 0, -3, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -3, -3,
    0, -3, -3, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    -2, 0, 0, 0, -2, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -17, -2,
    0, 0, -4, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 2, 0, 0, 0, 0, 0,
    -2, 0, -2, -5, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, -2, 0, -2, 0,
    -3, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -2, 0, -2, 0, -5, -1, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, -6, -7, 0, 0, -4, -3,
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, -6, -1,
    0, 0, -4, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 2, 0,
    -2, 0, -2, 0, 0, -2, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, -2,
    0, 0, 2, 0, -3, 0, -3, -8,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -14, -7, -2, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, -16, -8, -3, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -2, 0, -1, 0,
    0, -1, 0, 0, 0, -2, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 38,
    .right_class_cnt     = 28,
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
const lv_font_t ui_font_ftRbBlck14b1n = {
#else
lv_font_t ui_font_ftRbBlck14b1n = {
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



#endif /*#if UI_FONT_FTRBBLCK14B1N*/

