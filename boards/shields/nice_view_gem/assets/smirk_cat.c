#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SMIRK_CAT
#define LV_ATTRIBUTE_IMG_SMIRK_CAT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SMIRK_CAT uint8_t smirk_cat_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x08, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x18, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xd0, 0x00, 0x00, 
  0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x10, 0x00, 0x00, 
  0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc6, 0x20, 0x00, 0x00, 
  0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x60, 0x00, 0x00, 
  0x00, 0x4b, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x60, 0x40, 0x00, 0x00, 
  0x00, 0x26, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x80, 0x80, 0x00, 0x00, 
  0x00, 0x31, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x80, 0x00, 0x00, 
  0x00, 0x10, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc6, 0x00, 0x80, 0x00, 0x00, 
  0x00, 0x08, 0x39, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x04, 0x01, 0x80, 0x00, 0x00, 
  0x00, 0x0c, 0x0c, 0x38, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xa8, 0x18, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x06, 0x03, 0x0f, 0x00, 0x01, 0xff, 0xeb, 0xc0, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x01, 0xc0, 0xf0, 0x0f, 0x00, 0x1c, 0x00, 0x00, 0x08, 0x01, 0x80, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x30, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xc0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x30, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x10, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0c, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0c, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x82, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x78, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x0f, 0xef, 0xc0, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x60, 0x20, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x40, 0x20, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x20, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x20, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80, 0x20, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x80, 0x40, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x80, 0x40, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0xe1, 0x80, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0xff, 0x00, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x18, 0x00, 0x07, 0xfe, 0x00, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x1f, 0x9c, 0x00, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x46, 0x00, 0xf8, 0x3d, 0x00, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x41, 0xff, 0xf7, 0xf1, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x30, 0x0f, 0xff, 0x83, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf4, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0xf0, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t smirk_cat = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 120,
  .header.h = 68,
  .data_size = 1028,
  .data = smirk_cat_map,
};
