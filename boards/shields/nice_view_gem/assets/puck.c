#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_PUCK
#define LV_ATTRIBUTE_IMG_PUCK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_PUCK uint8_t puck_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xf4, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfe, 0x82, 0x00, 0x00, 0x00, 0x05, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xd5, 0x50, 0x00, 0x00, 0x00, 0x53, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xa0, 0x00, 0x00, 0x00, 0x2a, 0xa7, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x40, 0x00, 0x00, 0x05, 0x55, 0x56, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xaa, 0xaa, 0xac, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x51, 0x57, 0xd5, 0x0c, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0a, 0xae, 0xfe, 0xf4, 0x38, 0x05, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0xaa, 0xab, 0xff, 0xa8, 0x70, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x15, 0x77, 0xff, 0xfd, 0x41, 0xe0, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaf, 0xff, 0xff, 0xf5, 0x07, 0xc0, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xaa, 0x8f, 0x80, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xfe, 0xa0, 0x1e, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xfa, 0x95, 0x7a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x55, 0x40, 0x7c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xfa, 0xaa, 0x15, 0xfc, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xd5, 0x50, 0xab, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfa, 0xaa, 0x85, 0x5f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xaa, 0x04, 0x55, 0xf7, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xa9, 0x55, 0x5f, 0xff, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x42, 0x0a, 0xff, 0xf7, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x29, 0x57, 0xff, 0xdf, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x42, 0xbf, 0xff, 0xef, 0xa8, 0x00, 0x00, 0x00, 0x2f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x2b, 0xff, 0xf8, 0xff, 0x44, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x5f, 0xff, 0xf8, 0x3e, 0xb8, 0x00, 0x7f, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xf0, 0x0e, 0xf4, 0x07, 0xf0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xf8, 0x07, 0xe8, 0x7e, 0x80, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xf0, 0x03, 0xf4, 0xf0, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xf8, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xfb, 0xf8, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xf7, 0xf8, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xd5, 0xfe, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xeb, 0xff, 0x80, 0x02, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0x5a, 0xff, 0xc0, 0x14, 0x00, 0x00, 0x00, 0x7f, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfd, 0xf5, 0xff, 0xe0, 0x04, 0x00, 0x00, 0x1f, 0xfc, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xdb, 0xff, 0xe8, 0x0b, 0x80, 0x07, 0xfe, 0x80, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xf5, 0xff, 0xd7, 0xfe, 0x0c, 0x00, 0xfe, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0x4a, 0xff, 0x71, 0x00, 0xe0, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xfd, 0x00, 0x1f, 0xce, 0x80, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xf0, 0x00, 0x07, 0xbb, 0x40, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0x80, 0x00, 0x01, 0xfd, 0xa0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xfd, 0x40, 0x00, 0x01, 0xf6, 0xf4, 0x00, 0x00, 0x03, 0x80, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0xf4, 0x00, 0x00, 0x02, 0xff, 0xf8, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xc0, 0x00, 0x00, 0x00, 0xff, 0xee, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0x7f, 0xfd, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x02, 0xff, 0xfe, 0xe0, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x2b, 0xff, 0xff, 0x80, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x5f, 0xff, 0xfe, 0x80, 0x00, 0x06, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0xbf, 0xff, 0xfb, 0x80, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x15, 0xff, 0xf7, 0xff, 0x80, 0x00, 0x03, 0xa0, 0x24, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xaf, 0xff, 0xed, 0xff, 0x80, 0x00, 0x01, 0x80, 0x08, 0x00, 0x00, 0x20, 0x00, 
  0x00, 0x02, 0xbf, 0xff, 0xf7, 0xfe, 0x80, 0x00, 0x01, 0x80, 0xa0, 0x00, 0x02, 0x10, 0x02, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t puck = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 120,
  .header.h = 68,
  .data_size = 1028,
  .data = puck_map,
};
