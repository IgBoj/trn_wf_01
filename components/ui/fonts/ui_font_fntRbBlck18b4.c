/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font D:/ESP/sqls_ws/learn/l01/assets/Roboto-Black.ttf -o D:/ESP/sqls_ws/learn/l01/assets\ui_font_fntRbBlck18b4.c --format lvgl --symbols АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя
 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FNTRBBLCK18B4
#define UI_FONT_FNTRBBLCK18B4 1
#endif

#if UI_FONT_FNTRBBLCK18B4

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
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
    {.bitmap_index = 0, .adv_w = 161, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 196, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 180, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 186, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 214, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 113, .adv_w = 161, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 300, .box_w = 19, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 200, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 200, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 186, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 203, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 252, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 202, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 199, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 203, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 188, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 189, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 241, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 429, .adv_w = 184, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 222, .box_w = 13, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 473, .adv_w = 201, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 278, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 301, .box_w = 17, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 549, .adv_w = 224, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 251, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 179, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 183, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 280, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 165, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 153, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 167, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 185, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 738, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 260, .box_w = 15, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 165, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 162, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 221, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 849, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 873, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 162, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 901, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 925, .adv_w = 149, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 941, .adv_w = 211, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 968, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 980, .adv_w = 177, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 997, .adv_w = 161, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1009, .adv_w = 241, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 270, .box_w = 15, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1051, .adv_w = 195, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1066, .adv_w = 246, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1083, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 147, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1107, .adv_w = 233, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1124, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1136, .adv_w = 157, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0}
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
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, -3, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 2,
    -3, -17, 0, -8, -8, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 3, -2,
    -8, -7, -5, 0, 0, -7, 0, 0,
    0, 0, -2, 0, 0, -4, -3, -3,
    -4, 0, 0, 0, 0, -6, 0, 0,
    -2, 0, 0, 0, -7, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, -4, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -29, -22, 0, -15, -9, 1, 0, 0,
    1, 0, -23, -9, -26, -24, -36, -24,
    -21, -33, -34, -22, -21, -22, -34, 0,
    -34, -21, -33, -35, 2, 3, 0, 2,
    -3, -4, 0, -4, -4, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 3, 0, 2, -4, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, -4,
    0, 0, 2, -3, -6, -4, -7, 0,
    0, 0, 0, 0, 0, 0, -2, -2,
    0, -2, -2, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 3, 2, 2, 0, -4, 0, -4,
    0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 2, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, -4, 0, 0, 0, -4,
    -10, -6, -13, 0, 0, -3, 0, 0,
    -3, -5, -3, -4, 0, -12, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -25, -33, -7, -20,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, -24, -2, 0, 0, -13, -2,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, -11, 0, -7,
    -4, 2, 0, 0, 2, 0, -24, -4,
    -13, -13, -20, -13, -11, -18, -18, -29,
    -11, -12, -19, 0, -18, -11, -18, -19,
    -13, -12, 0, -8, -3, 3, 0, 0,
    3, 0, -11, 0, -4, -12, -12, -9,
    0, -6, -10, -9, 0, 0, -3, 0,
    -5, -12, 0, -6, 2, 3, 2, 2,
    0, -4, 2, -4, -4, -2, 0, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    -4, 0, -3, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, -14, -3, -4,
    -8, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, -7, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, -14, -3, -4, -9, 0, 0, 0,
    0, 0, 0, 0, -8, 0, 0, 0,
    -7, 0, 0, 0, 0, -6, 0, 0,
    0, -4, -4, -4, 0, -4, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -4, -4,
    0, -4, -3, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -3, 0,
    -2, 0, 0, 0, -3, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -21, -3,
    0, 0, -6, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 3, 0, 0, 0, 0, 0,
    -3, 0, -3, -7, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, -3, 0, -2, 0,
    -4, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -2, 0, -2, 0, -6, -2, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, -8, -9, 0, 0, -6, -4,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, -8, -2,
    0, 0, -6, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 2, 0,
    -2, 0, -2, 0, 0, -2, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, -3,
    0, 0, 2, 0, -4, 0, -4, -10,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    -18, -9, -3, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, -21, -11, -4, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -2, 0, -2, 0,
    0, -2, 0, 0, 0, -3, 0, 0
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
const lv_font_t ui_font_fntRbBlck18b4 = {
#else
lv_font_t ui_font_fntRbBlck18b4 = {
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



#endif /*#if UI_FONT_FNTRBBLCK18B4*/

