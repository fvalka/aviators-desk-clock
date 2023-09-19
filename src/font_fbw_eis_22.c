/*******************************************************************************
 * Size: 22 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FONT_FBW_EIS_22
#define FONT_FBW_EIS_22 1
#endif

#if FONT_FBW_EIS_22

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0028 "(" */
    0x0, 0x1, 0x20, 0x0, 0xcc, 0x0, 0x6f, 0x50,
    0x1e, 0xc0, 0x9, 0xf3, 0x1, 0xfa, 0x0, 0x2f,
    0x50, 0x3, 0xf5, 0x0, 0x3f, 0x50, 0x3, 0xf5,
    0x0, 0x2f, 0x50, 0x0, 0xeb, 0x0, 0x7, 0xf5,
    0x0, 0xd, 0xe0, 0x0, 0x4f, 0x70, 0x0, 0xab,
    0x0, 0x0, 0x0,

    /* U+0029 ")" */
    0x3, 0x0, 0x1, 0xf8, 0x0, 0xb, 0xf1, 0x0,
    0x2f, 0xa0, 0x0, 0x8f, 0x30, 0x0, 0xeb, 0x0,
    0xa, 0xd0, 0x0, 0xae, 0x0, 0xa, 0xe0, 0x0,
    0xae, 0x0, 0xa, 0xd0, 0x1, 0xfa, 0x0, 0xaf,
    0x20, 0x3f, 0x80, 0xc, 0xe0, 0x1, 0xf5, 0x0,
    0x0, 0x0, 0x0,

    /* U+002A "*" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xb0, 0x0, 0x0, 0x0, 0xc8, 0xb, 0xd0,
    0x7d, 0x0, 0x0, 0x9f, 0x8b, 0xd6, 0xfb, 0x0,
    0x0, 0xa, 0xff, 0xff, 0xb0, 0x0, 0x18, 0x99,
    0xff, 0xff, 0x99, 0x81, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0x0, 0x4, 0xff, 0xff, 0x50, 0x0,
    0x0, 0x3f, 0xdc, 0xdc, 0xf4, 0x0, 0x0, 0xee,
    0x2b, 0xd1, 0xdf, 0x0, 0x0, 0x52, 0xb, 0xd0,
    0x16, 0x0, 0x0, 0x0, 0x8, 0xa0, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0x99, 0x0, 0x0, 0x0, 0x0, 0xcc,
    0x0, 0x0, 0x0, 0x0, 0xcc, 0x0, 0x0, 0x18,
    0x99, 0xee, 0x99, 0x80, 0x3f, 0xff, 0xff, 0xff,
    0xf2, 0x0, 0x0, 0xcc, 0x0, 0x0, 0x0, 0x0,
    0xcc, 0x0, 0x0, 0x0, 0x0, 0xcc, 0x0, 0x0,
    0x0, 0x0, 0x88, 0x0, 0x0,

    /* U+002C "," */

    /* U+002D "-" */
    0x18, 0x99, 0x99, 0x99, 0x99, 0x23, 0xff, 0xff,
    0xff, 0xff, 0xf6,

    /* U+002E "." */
    0x47, 0x70, 0xff, 0xf5, 0xff, 0xf6, 0xcf, 0xf3,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0x90, 0x0, 0x0, 0x0, 0x0, 0xbf, 0x10,
    0x0, 0x0, 0x0, 0x4, 0xf7, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0x50, 0x0, 0x0, 0x0, 0x0, 0xec, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xf3, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0xa0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0x10,
    0x0, 0x0, 0x0, 0x3, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0x60, 0x0, 0x0, 0x0, 0x0, 0xed, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x3e, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x8, 0xef, 0xd7, 0x0, 0x0, 0xc, 0xfb,
    0x9c, 0xfa, 0x0, 0x8, 0xf5, 0x0, 0x8, 0xf5,
    0x0, 0xfb, 0x0, 0x0, 0xe, 0xc0, 0x3f, 0x50,
    0x0, 0x0, 0x8f, 0x5, 0xf3, 0x0, 0x0, 0x6,
    0xf2, 0x5f, 0x20, 0x0, 0x0, 0x5f, 0x25, 0xf2,
    0x0, 0x0, 0x5, 0xf2, 0x5f, 0x20, 0x0, 0x0,
    0x5f, 0x25, 0xf2, 0x0, 0x0, 0x5, 0xf2, 0x5f,
    0x20, 0x0, 0x0, 0x5f, 0x25, 0xf3, 0x0, 0x0,
    0x6, 0xf2, 0x3f, 0x50, 0x0, 0x0, 0x8f, 0x0,
    0xfb, 0x0, 0x0, 0xe, 0xc0, 0x8, 0xf5, 0x0,
    0x8, 0xf5, 0x0, 0xc, 0xfb, 0x9c, 0xfa, 0x0,
    0x0, 0x8, 0xef, 0xd7, 0x0, 0x0,

    /* U+0031 "1" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xda,
    0x0, 0x0, 0x0, 0xa, 0xfb, 0x0, 0x0, 0x0,
    0x6f, 0xfb, 0x0, 0x0, 0x3, 0xfb, 0xcb, 0x0,
    0x0, 0xd, 0xe1, 0xcb, 0x0, 0x0, 0x3f, 0x40,
    0xcb, 0x0, 0x0, 0x0, 0x0, 0xcb, 0x0, 0x0,
    0x0, 0x0, 0xcb, 0x0, 0x0, 0x0, 0x0, 0xcb,
    0x0, 0x0, 0x0, 0x0, 0xcb, 0x0, 0x0, 0x0,
    0x0, 0xcb, 0x0, 0x0, 0x0, 0x0, 0xcb, 0x0,
    0x0, 0x0, 0x0, 0xcb, 0x0, 0x0, 0x0, 0x0,
    0xcb, 0x0, 0x0, 0x0, 0x0, 0xcb, 0x0, 0x0,
    0x18, 0x99, 0xee, 0x99, 0x81, 0x3f, 0xff, 0xff,
    0xff, 0xf2,

    /* U+0032 "2" */
    0x0, 0x8, 0xdf, 0xfc, 0x70, 0x0, 0x1, 0xdf,
    0xc9, 0xad, 0xfc, 0x0, 0xa, 0xf4, 0x0, 0x0,
    0x6f, 0x80, 0x2f, 0x70, 0x0, 0x0, 0xb, 0xd0,
    0x2d, 0x10, 0x0, 0x0, 0x8, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0xe, 0xb0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0x30,
    0x0, 0x0, 0x0, 0xa, 0xf7, 0x0, 0x0, 0x0,
    0x3, 0xef, 0x60, 0x0, 0x0, 0x0, 0x7f, 0xd3,
    0x0, 0x0, 0x0, 0x1c, 0xfa, 0x0, 0x0, 0x0,
    0x5, 0xff, 0x50, 0x0, 0x0, 0x0, 0x3f, 0xc2,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xa9, 0x99, 0x99, 0x99, 0x60,
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xd0,

    /* U+0033 "3" */
    0x0, 0x29, 0xef, 0xd8, 0x0, 0x0, 0x2e, 0xfb,
    0x9c, 0xfd, 0x10, 0x5, 0xd2, 0x0, 0x4, 0xf9,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x8f, 0x0, 0x0, 0x0, 0x0, 0xc,
    0xd0, 0x0, 0x0, 0x1, 0x3b, 0xf6, 0x0, 0x0,
    0x9, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x4a, 0xef,
    0xd1, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0x40, 0x0, 0x0, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xf, 0x81,
    0x91, 0x0, 0x0, 0x2, 0xf6, 0x3f, 0xb1, 0x0,
    0x1, 0xcf, 0x10, 0x7f, 0xfa, 0x9b, 0xff, 0x50,
    0x0, 0x3a, 0xef, 0xea, 0x30, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0x90, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0xef, 0xb0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xb0, 0x0, 0x0, 0x0,
    0x2f, 0xad, 0xb0, 0x0, 0x0, 0x0, 0xaf, 0x2d,
    0xb0, 0x0, 0x0, 0x3, 0xf8, 0xd, 0xb0, 0x0,
    0x0, 0xc, 0xe0, 0xd, 0xb0, 0x0, 0x0, 0x5f,
    0x60, 0xd, 0xb0, 0x0, 0x0, 0xed, 0x0, 0xd,
    0xb0, 0x0, 0x7, 0xf4, 0x0, 0xd, 0xb0, 0x0,
    0x1f, 0xf9, 0x99, 0x9e, 0xd9, 0x60, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0xd,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0xa, 0x80, 0x0,

    /* U+0035 "5" */
    0x2f, 0xff, 0xff, 0xff, 0xfe, 0x15, 0xfa, 0x99,
    0x99, 0x99, 0x70, 0x5f, 0x20, 0x0, 0x0, 0x0,
    0x5, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0x5, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0xff, 0xfe, 0xb5, 0x0, 0x0, 0x89,
    0x99, 0xae, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x7,
    0xfb, 0x0, 0x0, 0x0, 0x0, 0x7, 0xf3, 0x0,
    0x0, 0x0, 0x0, 0xf, 0x70, 0x0, 0x0, 0x0,
    0x0, 0xe9, 0x0, 0x0, 0x0, 0x0, 0xf, 0x70,
    0x0, 0x0, 0x0, 0x7, 0xf3, 0x18, 0x10, 0x0,
    0x7, 0xfb, 0x2, 0xff, 0xb9, 0xae, 0xfc, 0x0,
    0x2, 0x9d, 0xff, 0xb5, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x19, 0xdf, 0xec, 0x50, 0x0, 0x3, 0xff,
    0xca, 0xae, 0xfb, 0x0, 0xd, 0xe2, 0x0, 0x0,
    0x6f, 0x20, 0x3f, 0x60, 0x0, 0x0, 0x0, 0x0,
    0x5f, 0x20, 0x0, 0x0, 0x0, 0x0, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0x21, 0x68, 0x85,
    0x0, 0x0, 0x5f, 0xaf, 0xff, 0xff, 0xe4, 0x0,
    0x5f, 0xfa, 0x30, 0x4, 0xdf, 0x20, 0x5f, 0xc0,
    0x0, 0x0, 0x2f, 0x90, 0x5f, 0x50, 0x0, 0x0,
    0xb, 0xe0, 0x5f, 0x30, 0x0, 0x0, 0x8, 0xf0,
    0x4f, 0x30, 0x0, 0x0, 0x9, 0xf0, 0x2f, 0x80,
    0x0, 0x0, 0xd, 0xc0, 0xb, 0xf4, 0x0, 0x0,
    0x9f, 0x50, 0x1, 0xef, 0xca, 0xae, 0xf9, 0x0,
    0x0, 0x18, 0xdf, 0xfc, 0x50, 0x0,

    /* U+0037 "7" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x18, 0x99,
    0x99, 0x99, 0x9c, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x1e, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0x30, 0x0, 0x0,
    0x0, 0x5, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x1e,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0x30, 0x0,
    0x0, 0x0, 0x4, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0xe, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0x30,
    0x0, 0x0, 0x0, 0x4, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0xe, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x9f,
    0x40, 0x0, 0x0, 0x0, 0x3, 0xf9, 0x0, 0x0,
    0x0, 0x0, 0xd, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0x40, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0,
    0x0, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x6, 0xcf, 0xeb, 0x30, 0x0, 0x0, 0xbf,
    0xda, 0xae, 0xf5, 0x0, 0x6, 0xf8, 0x0, 0x1,
    0xcf, 0x10, 0xb, 0xe0, 0x0, 0x0, 0x3f, 0x50,
    0xc, 0xc0, 0x0, 0x0, 0x1f, 0x60, 0x9, 0xf2,
    0x0, 0x0, 0x8f, 0x30, 0x1, 0xee, 0x61, 0x29,
    0xfb, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0xbf, 0xda, 0xaf, 0xf7, 0x0, 0x9, 0xf6,
    0x0, 0x1, 0xbf, 0x40, 0x1f, 0x90, 0x0, 0x0,
    0xe, 0xb0, 0x4f, 0x30, 0x0, 0x0, 0x9, 0xe0,
    0x5f, 0x30, 0x0, 0x0, 0x8, 0xf0, 0x2f, 0x60,
    0x0, 0x0, 0xc, 0xd0, 0xc, 0xe3, 0x0, 0x0,
    0x7f, 0x70, 0x2, 0xef, 0xc9, 0xae, 0xfa, 0x0,
    0x0, 0x18, 0xdf, 0xfb, 0x50, 0x0,

    /* U+0039 "9" */
    0x0, 0x18, 0xdf, 0xfc, 0x50, 0x0, 0x2, 0xef,
    0xca, 0xae, 0xfa, 0x0, 0xc, 0xe4, 0x0, 0x0,
    0x8f, 0x60, 0x2f, 0x70, 0x0, 0x0, 0xc, 0xc0,
    0x5f, 0x30, 0x0, 0x0, 0x8, 0xf0, 0x5f, 0x30,
    0x0, 0x0, 0x9, 0xf0, 0x2f, 0x70, 0x0, 0x0,
    0xd, 0xf0, 0xc, 0xf3, 0x0, 0x0, 0x8f, 0xf0,
    0x2, 0xef, 0xca, 0xad, 0xfe, 0xf0, 0x0, 0x18,
    0xdf, 0xfc, 0x58, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x9, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0xc, 0xd0, 0x7, 0xd3, 0x0, 0x0,
    0x7f, 0x80, 0x3, 0xef, 0xc9, 0xad, 0xfc, 0x0,
    0x0, 0x18, 0xdf, 0xfc, 0x60, 0x0,

    /* U+003A ":" */
    0x4f, 0xfb, 0x7f, 0xfe, 0x6f, 0xfe, 0x16, 0x74,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xfb,
    0x7f, 0xfe, 0x6f, 0xfe, 0x16, 0x74,

    /* U+003B ";" */
    0x9e, 0xeb, 0xdf, 0xff, 0xdf, 0xff, 0x9f, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8e, 0xea, 0xdf, 0xff, 0xdf, 0xff, 0x9f, 0xfc,

    /* U+003C "<" */

    /* U+003D "=" */

    /* U+003E ">" */
    0x14, 0x0, 0x0, 0x0, 0x0, 0x6f, 0x90, 0x0,
    0x0, 0x0, 0x9, 0xfb, 0x10, 0x0, 0x0, 0x0,
    0x6f, 0xd2, 0x0, 0x0, 0x0, 0x3, 0xef, 0x50,
    0x0, 0x0, 0x0, 0x1c, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0xaf, 0xb0, 0x0, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x0, 0x1c, 0xf7, 0x0, 0x0, 0x3,
    0xef, 0x40, 0x0, 0x0, 0x6f, 0xd2, 0x0, 0x0,
    0x9, 0xfb, 0x10, 0x0, 0x1, 0xcf, 0x80, 0x0,
    0x0, 0x2e, 0xf5, 0x0, 0x0, 0x0, 0x5d, 0x30,
    0x0, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0x2, 0x30, 0x0, 0x0, 0x0, 0x0,
    0xd, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xec, 0x0, 0x0,
    0x0, 0x1, 0xf9, 0x7f, 0x20, 0x0, 0x0, 0x7,
    0xf2, 0x1f, 0x90, 0x0, 0x0, 0xd, 0xc0, 0xa,
    0xe0, 0x0, 0x0, 0x4f, 0x50, 0x4, 0xf6, 0x0,
    0x0, 0xbe, 0x0, 0x0, 0xdc, 0x0, 0x1, 0xf8,
    0x0, 0x0, 0x7f, 0x30, 0x8, 0xf2, 0x0, 0x0,
    0x1f, 0x90, 0xe, 0xe9, 0x99, 0x99, 0x9e, 0xf0,
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x4f, 0x40,
    0x0, 0x0, 0x2, 0xf5, 0x5f, 0x20, 0x0, 0x0,
    0x1, 0xf7, 0x7f, 0x10, 0x0, 0x0, 0x0, 0xf8,
    0x8f, 0x0, 0x0, 0x0, 0x0, 0xe9, 0x48, 0x0,
    0x0, 0x0, 0x0, 0x75,

    /* U+0042 "B" */
    0x3f, 0xff, 0xff, 0xff, 0xd7, 0x0, 0x5f, 0xa9,
    0x99, 0x99, 0xdf, 0xa0, 0x5f, 0x20, 0x0, 0x0,
    0x8, 0xf5, 0x5f, 0x20, 0x0, 0x0, 0x0, 0xeb,
    0x5f, 0x20, 0x0, 0x0, 0x0, 0xbd, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0xeb, 0x5f, 0x20, 0x0, 0x0,
    0xa, 0xf4, 0x5f, 0xa9, 0x99, 0x9a, 0xef, 0x80,
    0x5f, 0xff, 0xff, 0xff, 0xfe, 0x10, 0x5f, 0x20,
    0x0, 0x0, 0x6f, 0xd0, 0x5f, 0x20, 0x0, 0x0,
    0x5, 0xf6, 0x5f, 0x20, 0x0, 0x0, 0x0, 0xdc,
    0x5f, 0x20, 0x0, 0x0, 0x0, 0xbd, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0xeb, 0x5f, 0x20, 0x0, 0x0,
    0x8, 0xf5, 0x5f, 0xa9, 0x99, 0x99, 0xcf, 0xa0,
    0x3f, 0xff, 0xff, 0xff, 0xd7, 0x0,

    /* U+0043 "C" */
    0x0, 0x19, 0xdf, 0xeb, 0x40, 0x0, 0x1, 0xef,
    0xb9, 0xae, 0xfa, 0x0, 0xa, 0xf3, 0x0, 0x0,
    0x9f, 0x90, 0x1f, 0x90, 0x0, 0x0, 0x9, 0xf4,
    0x4f, 0x40, 0x0, 0x0, 0x0, 0x71, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x5f, 0x20, 0x0, 0x0, 0x0, 0x0, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0x40, 0x0, 0x0, 0x0, 0xa2, 0xf, 0x90,
    0x0, 0x0, 0x8, 0xf3, 0xa, 0xf3, 0x0, 0x0,
    0x8f, 0xa0, 0x1, 0xdf, 0xc9, 0xbe, 0xfb, 0x0,
    0x0, 0x18, 0xdf, 0xeb, 0x50, 0x0,

    /* U+0044 "D" */
    0x3f, 0xff, 0xff, 0xea, 0x20, 0x0, 0x5f, 0xa9,
    0x99, 0xaf, 0xf5, 0x0, 0x5f, 0x20, 0x0, 0x1,
    0xcf, 0x10, 0x5f, 0x20, 0x0, 0x0, 0x2f, 0x70,
    0x5f, 0x20, 0x0, 0x0, 0xc, 0xc0, 0x5f, 0x20,
    0x0, 0x0, 0x9, 0xe0, 0x5f, 0x20, 0x0, 0x0,
    0x8, 0xf0, 0x5f, 0x20, 0x0, 0x0, 0x8, 0xf0,
    0x5f, 0x20, 0x0, 0x0, 0x8, 0xf0, 0x5f, 0x20,
    0x0, 0x0, 0x8, 0xf0, 0x5f, 0x20, 0x0, 0x0,
    0x8, 0xf0, 0x5f, 0x20, 0x0, 0x0, 0x9, 0xe0,
    0x5f, 0x20, 0x0, 0x0, 0xc, 0xc0, 0x5f, 0x20,
    0x0, 0x0, 0x2f, 0x70, 0x5f, 0x20, 0x0, 0x1,
    0xcf, 0x10, 0x5f, 0xa9, 0x99, 0xaf, 0xf5, 0x0,
    0x3f, 0xff, 0xff, 0xea, 0x20, 0x0,

    /* U+0045 "E" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x5, 0xfa,
    0x99, 0x99, 0x99, 0x99, 0x70, 0x5f, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f,
    0x20, 0x0, 0x0, 0x0, 0x0, 0x5, 0xfa, 0x99,
    0x99, 0x80, 0x0, 0x0, 0x5f, 0xff, 0xff, 0xff,
    0x20, 0x0, 0x5, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0x20, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x5, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5f, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xfa, 0x99, 0x99, 0x99, 0x99, 0x70,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0,

    /* U+0046 "F" */
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xfc, 0x99,
    0x99, 0x99, 0x99, 0x81, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xfc, 0x99, 0x99, 0x83, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xf7, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd5, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x4b, 0xfe, 0xc5, 0x0, 0x0, 0x7, 0xfe,
    0x9a, 0xdf, 0xc2, 0x0, 0x2f, 0xa0, 0x0, 0x6,
    0xfe, 0x20, 0x9f, 0x10, 0x0, 0x0, 0x2e, 0xe0,
    0xeb, 0x0, 0x0, 0x0, 0x3, 0xb1, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf8, 0x0, 0x6f, 0xff, 0xff, 0xf1, 0xf8, 0x0,
    0x28, 0x99, 0x9a, 0xf3, 0xf8, 0x0, 0x0, 0x0,
    0x4, 0xf3, 0xf8, 0x0, 0x0, 0x0, 0x5, 0xf2,
    0xea, 0x0, 0x0, 0x0, 0x9, 0xf0, 0xae, 0x0,
    0x0, 0x0, 0x2f, 0xa0, 0x4f, 0x90, 0x0, 0x2,
    0xdf, 0x20, 0x9, 0xfd, 0x99, 0xcf, 0xe4, 0x0,
    0x0, 0x6c, 0xff, 0xd8, 0x10, 0x0,

    /* U+0048 "H" */
    0xc5, 0x0, 0x0, 0x0, 0x2, 0xe1, 0xf8, 0x0,
    0x0, 0x0, 0x4, 0xf3, 0xf8, 0x0, 0x0, 0x0,
    0x4, 0xf3, 0xf8, 0x0, 0x0, 0x0, 0x4, 0xf3,
    0xf8, 0x0, 0x0, 0x0, 0x4, 0xf3, 0xf8, 0x0,
    0x0, 0x0, 0x4, 0xf3, 0xf8, 0x0, 0x0, 0x0,
    0x4, 0xf3, 0xfc, 0x99, 0x99, 0x99, 0x9b, 0xf3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf8, 0x0,
    0x0, 0x0, 0x4, 0xf3, 0xf8, 0x0, 0x0, 0x0,
    0x4, 0xf3, 0xf8, 0x0, 0x0, 0x0, 0x4, 0xf3,
    0xf8, 0x0, 0x0, 0x0, 0x4, 0xf3, 0xf8, 0x0,
    0x0, 0x0, 0x4, 0xf3, 0xf8, 0x0, 0x0, 0x0,
    0x4, 0xf3, 0xf8, 0x0, 0x0, 0x0, 0x4, 0xf3,
    0xd5, 0x0, 0x0, 0x0, 0x2, 0xe1,

    /* U+0049 "I" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0x61, 0x89, 0x99,
    0xfb, 0x99, 0x82, 0x0, 0x0, 0x2f, 0x60, 0x0,
    0x0, 0x0, 0x2, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0x60, 0x0, 0x0, 0x0, 0x2, 0xf6, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0, 0x0,
    0x2, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x2f, 0x60,
    0x0, 0x0, 0x0, 0x2, 0xf6, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0x60, 0x0, 0x0, 0x0, 0x2, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0,
    0x0, 0x2, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0x60, 0x0, 0x1, 0x89, 0x99, 0xfb, 0x99, 0x82,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0x60,

    /* U+004A "J" */
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0x20, 0x0,
    0x0, 0x2, 0x8b, 0xf9, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0x20, 0x0, 0x0, 0x0, 0x0, 0x6,
    0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6f, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x6, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0x20, 0x0, 0x0, 0x0, 0x0, 0x6, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6f, 0x20, 0x1,
    0x80, 0x0, 0x0, 0x6, 0xf2, 0x0, 0x4f, 0x40,
    0x0, 0x0, 0x7f, 0x10, 0x0, 0xeb, 0x0, 0x0,
    0xb, 0xe0, 0x0, 0x7, 0xf6, 0x0, 0x6, 0xf7,
    0x0, 0x0, 0xc, 0xfc, 0x9c, 0xfb, 0x0, 0x0,
    0x0, 0x8, 0xef, 0xd7, 0x0, 0x0, 0x0,

    /* U+004B "K" */
    0xd4, 0x0, 0x0, 0x0, 0x9, 0xbf, 0x70, 0x0,
    0x0, 0x9, 0xf7, 0xf7, 0x0, 0x0, 0x9, 0xf7,
    0xf, 0x70, 0x0, 0x8, 0xf7, 0x0, 0xf7, 0x0,
    0x8, 0xf8, 0x0, 0xf, 0x70, 0x8, 0xf8, 0x0,
    0x0, 0xf7, 0x8, 0xf8, 0x0, 0x0, 0xf, 0x78,
    0xf8, 0x0, 0x0, 0x0, 0xfd, 0xff, 0x60, 0x0,
    0x0, 0xf, 0xf9, 0xaf, 0x40, 0x0, 0x0, 0xfa,
    0x0, 0xcf, 0x20, 0x0, 0xf, 0x70, 0x1, 0xde,
    0x10, 0x0, 0xf7, 0x0, 0x2, 0xed, 0x0, 0xf,
    0x70, 0x0, 0x3, 0xfb, 0x0, 0xf7, 0x0, 0x0,
    0x5, 0xf9, 0xf, 0x70, 0x0, 0x0, 0x7, 0xf7,
    0xd4, 0x0, 0x0, 0x0, 0x9, 0xb0,

    /* U+004C "L" */
    0x3e, 0x10, 0x0, 0x0, 0x0, 0x0, 0x5, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f,
    0x20, 0x0, 0x0, 0x0, 0x0, 0x5, 0xf2, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x5, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x5f, 0x20, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x5, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5f, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xfa, 0x99, 0x99, 0x99, 0x99, 0x70,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0,

    /* U+004D "M" */
    0x1, 0x0, 0x0, 0x0, 0x0, 0x20, 0x4f, 0x40,
    0x0, 0x0, 0x6, 0xf2, 0x5f, 0xe1, 0x0, 0x0,
    0x2f, 0xf3, 0x5f, 0xfa, 0x0, 0x0, 0xcf, 0xf3,
    0x5f, 0xaf, 0x50, 0x8, 0xfa, 0xf3, 0x5f, 0x2c,
    0xf1, 0x3f, 0xa4, 0xf3, 0x5f, 0x22, 0xfc, 0xde,
    0x14, 0xf3, 0x5f, 0x20, 0x6f, 0xf4, 0x4, 0xf3,
    0x5f, 0x20, 0x9, 0x70, 0x4, 0xf3, 0x5f, 0x20,
    0x0, 0x0, 0x4, 0xf3, 0x5f, 0x20, 0x0, 0x0,
    0x4, 0xf3, 0x5f, 0x20, 0x0, 0x0, 0x4, 0xf3,
    0x5f, 0x20, 0x0, 0x0, 0x4, 0xf3, 0x5f, 0x20,
    0x0, 0x0, 0x4, 0xf3, 0x5f, 0x20, 0x0, 0x0,
    0x4, 0xf3, 0x5f, 0x20, 0x0, 0x0, 0x4, 0xf3,
    0x5f, 0x20, 0x0, 0x0, 0x4, 0xf3, 0x3e, 0x10,
    0x0, 0x0, 0x2, 0xe1,

    /* U+004E "N" */
    0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0x30,
    0x0, 0x0, 0x2, 0xe1, 0x5f, 0xc0, 0x0, 0x0,
    0x4, 0xf3, 0x5f, 0xf6, 0x0, 0x0, 0x4, 0xf3,
    0x5f, 0xfe, 0x0, 0x0, 0x4, 0xf3, 0x5f, 0x7f,
    0x80, 0x0, 0x4, 0xf3, 0x5f, 0x2b, 0xf2, 0x0,
    0x4, 0xf3, 0x5f, 0x22, 0xfb, 0x0, 0x4, 0xf3,
    0x5f, 0x20, 0x8f, 0x40, 0x4, 0xf3, 0x5f, 0x20,
    0xe, 0xd0, 0x4, 0xf3, 0x5f, 0x20, 0x5, 0xf6,
    0x4, 0xf3, 0x5f, 0x20, 0x0, 0xce, 0x14, 0xf3,
    0x5f, 0x20, 0x0, 0x3f, 0x94, 0xf3, 0x5f, 0x20,
    0x0, 0x9, 0xf7, 0xf3, 0x5f, 0x20, 0x0, 0x1,
    0xef, 0xf3, 0x5f, 0x20, 0x0, 0x0, 0x6f, 0xf3,
    0x5f, 0x20, 0x0, 0x0, 0xd, 0xf3, 0x3e, 0x10,
    0x0, 0x0, 0x3, 0xe1,

    /* U+004F "O" */
    0x0, 0x6, 0xcf, 0xeb, 0x40, 0x0, 0x0, 0xaf,
    0xd9, 0xae, 0xf6, 0x0, 0x6, 0xf8, 0x0, 0x0,
    0xbf, 0x30, 0xe, 0xc0, 0x0, 0x0, 0x1f, 0xa0,
    0x3f, 0x50, 0x0, 0x0, 0x9, 0xf0, 0x7f, 0x10,
    0x0, 0x0, 0x5, 0xf3, 0x9e, 0x0, 0x0, 0x0,
    0x2, 0xf6, 0xbd, 0x0, 0x0, 0x0, 0x0, 0xf7,
    0xbc, 0x0, 0x0, 0x0, 0x0, 0xf7, 0xbd, 0x0,
    0x0, 0x0, 0x1, 0xf7, 0x9f, 0x0, 0x0, 0x0,
    0x2, 0xf5, 0x7f, 0x10, 0x0, 0x0, 0x5, 0xf3,
    0x3f, 0x60, 0x0, 0x0, 0xa, 0xf0, 0xd, 0xd0,
    0x0, 0x0, 0x1f, 0x90, 0x5, 0xf9, 0x0, 0x1,
    0xcf, 0x20, 0x0, 0x8f, 0xd9, 0xae, 0xf5, 0x0,
    0x0, 0x5, 0xcf, 0xeb, 0x30, 0x0,

    /* U+0050 "P" */
    0x3f, 0xff, 0xff, 0xfe, 0xb3, 0x0, 0x5f, 0xa9,
    0x99, 0x9b, 0xff, 0x50, 0x5f, 0x20, 0x0, 0x0,
    0x1d, 0xe0, 0x5f, 0x20, 0x0, 0x0, 0x4, 0xf4,
    0x5f, 0x20, 0x0, 0x0, 0x1, 0xf6, 0x5f, 0x20,
    0x0, 0x0, 0x4, 0xf4, 0x5f, 0x20, 0x0, 0x0,
    0x2e, 0xe0, 0x5f, 0xa9, 0x99, 0x9a, 0xff, 0x30,
    0x5f, 0xff, 0xff, 0xfe, 0xa2, 0x0, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x5f, 0x20, 0x0, 0x0, 0x0, 0x0, 0x5f, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x5, 0xcf, 0xeb, 0x40, 0x0, 0x0, 0x9f,
    0xea, 0xae, 0xf8, 0x0, 0x6, 0xf9, 0x0, 0x0,
    0xaf, 0x40, 0xe, 0xc0, 0x0, 0x0, 0xd, 0xc0,
    0x2f, 0x50, 0x0, 0x0, 0x7, 0xf1, 0x5f, 0x30,
    0x0, 0x0, 0x4, 0xf3, 0x5f, 0x20, 0x0, 0x0,
    0x4, 0xf4, 0x5f, 0x20, 0x0, 0x0, 0x4, 0xf4,
    0x5f, 0x20, 0x0, 0x0, 0x4, 0xf4, 0x5f, 0x20,
    0x0, 0x0, 0x4, 0xf4, 0x5f, 0x20, 0x0, 0x20,
    0x4, 0xf4, 0x5f, 0x30, 0x4, 0xf7, 0x4, 0xf3,
    0x2f, 0x50, 0x0, 0xaf, 0x77, 0xf1, 0xe, 0xc0,
    0x0, 0xa, 0xff, 0xc0, 0x6, 0xf9, 0x0, 0x1,
    0xef, 0x90, 0x0, 0x9f, 0xea, 0xae, 0xfd, 0xf6,
    0x0, 0x5, 0xcf, 0xfc, 0x40, 0xaa,

    /* U+0052 "R" */
    0x3f, 0xff, 0xff, 0xfe, 0xb3, 0x0, 0x5f, 0xa9,
    0x99, 0x9a, 0xef, 0x50, 0x5f, 0x20, 0x0, 0x0,
    0x1d, 0xe0, 0x5f, 0x20, 0x0, 0x0, 0x4, 0xf5,
    0x5f, 0x20, 0x0, 0x0, 0x1, 0xf6, 0x5f, 0x20,
    0x0, 0x0, 0x4, 0xf4, 0x5f, 0x20, 0x0, 0x0,
    0x2e, 0xe0, 0x5f, 0xa9, 0x99, 0x9a, 0xff, 0x30,
    0x5f, 0xff, 0xff, 0xfe, 0xa2, 0x0, 0x5f, 0x20,
    0xcf, 0x40, 0x0, 0x0, 0x5f, 0x20, 0x1d, 0xf3,
    0x0, 0x0, 0x5f, 0x20, 0x2, 0xee, 0x20, 0x0,
    0x5f, 0x20, 0x0, 0x3f, 0xd1, 0x0, 0x5f, 0x20,
    0x0, 0x5, 0xfc, 0x0, 0x5f, 0x20, 0x0, 0x0,
    0x6f, 0xa0, 0x5f, 0x20, 0x0, 0x0, 0x8, 0xf8,
    0x3e, 0x10, 0x0, 0x0, 0x0, 0xaa,

    /* U+0053 "S" */
    0x0, 0x4, 0xbe, 0xfd, 0x70, 0x0, 0x0, 0x9,
    0xfe, 0xa9, 0xcf, 0xe3, 0x0, 0x7, 0xf8, 0x0,
    0x0, 0x4e, 0xe2, 0x0, 0xdb, 0x0, 0x0, 0x0,
    0x2e, 0xd0, 0xf, 0x80, 0x0, 0x0, 0x0, 0x3f,
    0x20, 0xdc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xfd,
    0x98, 0x63, 0x0, 0x0, 0x0, 0x5, 0xce, 0xff,
    0xfc, 0x20, 0x0, 0x0, 0x0, 0x0, 0x27, 0xee,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x2, 0xf9, 0x0,
    0x93, 0x0, 0x0, 0x0, 0xb, 0xc0, 0xe, 0x90,
    0x0, 0x0, 0x0, 0xbd, 0x0, 0xaf, 0x10, 0x0,
    0x0, 0x1f, 0x90, 0x2, 0xfb, 0x0, 0x0, 0x2c,
    0xf2, 0x0, 0x6, 0xfe, 0xa9, 0xbf, 0xe4, 0x0,
    0x0, 0x3, 0xbe, 0xfd, 0x91, 0x0, 0x0,

    /* U+0054 "T" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x21, 0x89,
    0x99, 0xbf, 0xa9, 0x99, 0x80, 0x0, 0x0, 0x4,
    0xf3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xf3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4f, 0x30, 0x0, 0x0, 0x0,
    0x0, 0x4, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0x30, 0x0, 0x0, 0x0, 0x0, 0x4, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x4, 0xf3, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0x30, 0x0, 0x0, 0x0, 0x0,
    0x4, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x4, 0xf3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4f, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xe1, 0x0, 0x0, 0x0,

    /* U+0055 "U" */
    0x3e, 0x10, 0x0, 0x0, 0x5, 0xd0, 0x5f, 0x20,
    0x0, 0x0, 0x8, 0xf0, 0x5f, 0x20, 0x0, 0x0,
    0x8, 0xf0, 0x5f, 0x20, 0x0, 0x0, 0x8, 0xf0,
    0x5f, 0x20, 0x0, 0x0, 0x8, 0xf0, 0x5f, 0x20,
    0x0, 0x0, 0x8, 0xf0, 0x5f, 0x20, 0x0, 0x0,
    0x8, 0xf0, 0x5f, 0x20, 0x0, 0x0, 0x8, 0xf0,
    0x5f, 0x20, 0x0, 0x0, 0x8, 0xf0, 0x5f, 0x20,
    0x0, 0x0, 0x8, 0xf0, 0x5f, 0x20, 0x0, 0x0,
    0x8, 0xf0, 0x5f, 0x30, 0x0, 0x0, 0x8, 0xf0,
    0x3f, 0x50, 0x0, 0x0, 0xb, 0xd0, 0xe, 0xc0,
    0x0, 0x0, 0x2f, 0x80, 0x6, 0xf8, 0x0, 0x1,
    0xdf, 0x10, 0x0, 0x9f, 0xda, 0xaf, 0xf4, 0x0,
    0x0, 0x5, 0xcf, 0xea, 0x20, 0x0,

    /* U+0056 "V" */
    0x1, 0x0, 0x0, 0x0, 0x0, 0x10, 0x4f, 0x20,
    0x0, 0x0, 0x1, 0xf5, 0x3f, 0x50, 0x0, 0x0,
    0x3, 0xf4, 0x1f, 0x70, 0x0, 0x0, 0x6, 0xf2,
    0xd, 0xb0, 0x0, 0x0, 0xa, 0xf0, 0x8, 0xf1,
    0x0, 0x0, 0xf, 0xa0, 0x3, 0xf5, 0x0, 0x0,
    0x4f, 0x50, 0x0, 0xeb, 0x0, 0x0, 0x9f, 0x0,
    0x0, 0x9f, 0x0, 0x0, 0xea, 0x0, 0x0, 0x4f,
    0x50, 0x4, 0xf5, 0x0, 0x0, 0xe, 0xa0, 0x9,
    0xf0, 0x0, 0x0, 0x9, 0xf0, 0xe, 0xb0, 0x0,
    0x0, 0x4, 0xf5, 0x3f, 0x50, 0x0, 0x0, 0x0,
    0xfa, 0x8f, 0x10, 0x0, 0x0, 0x0, 0xaf, 0xeb,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xf6, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0x9, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+0057 "W" */
    0x3e, 0x10, 0x0, 0x0, 0x0, 0xd4, 0x5f, 0x30,
    0x0, 0x0, 0x1, 0xf6, 0x4f, 0x30, 0x0, 0x0,
    0x2, 0xf5, 0x3f, 0x40, 0x0, 0x0, 0x3, 0xf4,
    0x2f, 0x50, 0x0, 0x0, 0x4, 0xf3, 0x1f, 0x60,
    0x0, 0x0, 0x5, 0xf2, 0xf, 0x70, 0x0, 0x0,
    0x6, 0xf2, 0xf, 0x80, 0x0, 0x0, 0x7, 0xf1,
    0xf, 0x90, 0x0, 0x0, 0x7, 0xf0, 0xe, 0xa0,
    0xa, 0xb0, 0x8, 0xf0, 0xd, 0xa0, 0x4f, 0xf5,
    0x9, 0xe0, 0xc, 0xb0, 0xce, 0xdd, 0xa, 0xd0,
    0xb, 0xc6, 0xf6, 0x4f, 0x7b, 0xc0, 0xa, 0xee,
    0xc0, 0xb, 0xfd, 0xc0, 0xa, 0xff, 0x30, 0x2,
    0xff, 0xb0, 0x9, 0xfa, 0x0, 0x0, 0x9f, 0xa0,
    0x7, 0xf2, 0x0, 0x0, 0x1e, 0x80, 0x0, 0x20,
    0x0, 0x0, 0x1, 0x0,

    /* U+0058 "X" */
    0x3e, 0x10, 0x0, 0x0, 0x5, 0xd0, 0x5f, 0x20,
    0x0, 0x0, 0x8, 0xf0, 0x4f, 0x50, 0x0, 0x0,
    0xb, 0xf0, 0xc, 0xf2, 0x0, 0x0, 0x6f, 0x70,
    0x2, 0xfc, 0x0, 0x3, 0xfb, 0x0, 0x0, 0x5f,
    0x80, 0xd, 0xe1, 0x0, 0x0, 0x9, 0xf4, 0xaf,
    0x40, 0x0, 0x0, 0x0, 0xdf, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0xf8, 0x0, 0x0, 0x0, 0x9, 0xf4, 0xaf,
    0x40, 0x0, 0x0, 0x5f, 0x80, 0xd, 0xe1, 0x0,
    0x2, 0xfc, 0x0, 0x3, 0xfb, 0x0, 0xc, 0xf2,
    0x0, 0x0, 0x6f, 0x70, 0x4f, 0x50, 0x0, 0x0,
    0xb, 0xf0, 0x5f, 0x20, 0x0, 0x0, 0x8, 0xf0,
    0x3e, 0x10, 0x0, 0x0, 0x5, 0xd0,

    /* U+0059 "Y" */
    0x3e, 0x10, 0x0, 0x0, 0x5, 0xd0, 0x5f, 0x20,
    0x0, 0x0, 0x8, 0xf0, 0x4f, 0x50, 0x0, 0x0,
    0xb, 0xf0, 0xc, 0xf2, 0x0, 0x0, 0x6f, 0x70,
    0x2, 0xfc, 0x0, 0x3, 0xfb, 0x0, 0x0, 0x5f,
    0x80, 0xd, 0xe1, 0x0, 0x0, 0x9, 0xf4, 0xaf,
    0x40, 0x0, 0x0, 0x0, 0xdf, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x2f, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0xe, 0x90, 0x0, 0x0, 0x0, 0x0, 0xe, 0x90,
    0x0, 0x0, 0x0, 0x0, 0xe, 0x90, 0x0, 0x0,
    0x0, 0x0, 0xe, 0x90, 0x0, 0x0, 0x0, 0x0,
    0xe, 0x90, 0x0, 0x0, 0x0, 0x0, 0xe, 0x90,
    0x0, 0x0, 0x0, 0x0, 0xe, 0x90, 0x0, 0x0,
    0x0, 0x0, 0xb, 0x60, 0x0, 0x0,

    /* U+005A "Z" */
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x18, 0x99,
    0x99, 0x99, 0x9c, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0xd, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x40,
    0x0, 0x0, 0x0, 0x2, 0xfa, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xe1, 0x0, 0x0, 0x0, 0x0, 0x6f,
    0x60, 0x0, 0x0, 0x0, 0x1, 0xec, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0x80, 0x0, 0x0, 0x0, 0x0, 0xdd, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0x90, 0x0, 0x0, 0x0, 0x0, 0xce,
    0x10, 0x0, 0x0, 0x0, 0x6, 0xf5, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xf9, 0x99, 0x99, 0x99, 0x95,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xfa
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 221, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 221, .box_w = 5, .box_h = 17, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 221, .box_w = 5, .box_h = 17, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 221, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 158, .adv_w = 221, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 203, .adv_w = 221, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 221, .box_w = 11, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 214, .adv_w = 221, .box_w = 4, .box_h = 4, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 221, .box_w = 12, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 336, .adv_w = 221, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 221, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 221, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 221, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 221, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 221, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1128, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1332, .adv_w = 221, .box_w = 4, .box_h = 11, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1354, .adv_w = 221, .box_w = 4, .box_h = 12, .ofs_x = 3, .ofs_y = 2},
    {.bitmap_index = 1378, .adv_w = 221, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1378, .adv_w = 221, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1378, .adv_w = 221, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1453, .adv_w = 221, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1561, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1663, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1867, .adv_w = 221, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1978, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2080, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2182, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2284, .adv_w = 221, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2378, .adv_w = 221, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2489, .adv_w = 221, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2583, .adv_w = 221, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2694, .adv_w = 221, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2802, .adv_w = 221, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2910, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3012, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3114, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3216, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3318, .adv_w = 221, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3429, .adv_w = 221, .box_w = 13, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3540, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3642, .adv_w = 221, .box_w = 12, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3756, .adv_w = 221, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 3864, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3966, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4068, .adv_w = 221, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 40, .range_length = 23, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 25,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t font_fbw_eis_22 = {
#else
lv_font_t font_fbw_eis_22 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_FBW_EIS_22*/
