#include <stdlib.h>
#include <zephyr/kernel.h>
#include "animation.h"

/*
static pictures
*/

// LV_IMG_DECLARE(pavane);

// const lv_img_dsc_t *anim_imgs[] = {
//     &pavane
// };

// LV_IMG_DECLARE(wizard);

// const lv_img_dsc_t *anim_imgs[] = {
//     &wizard
// };

// LV_IMG_DECLARE(Daniel);

// const lv_img_dsc_t *anim_imgs[] = {
//     &Daniel
// };

// LV_IMG_DECLARE(moon);

// const lv_img_dsc_t *anim_imgs[] = {
//     &moon
// };

// LV_IMG_DECLARE(puck);

// const lv_img_dsc_t *anim_imgs[] = {
//     &puck
// };

/*
crsytal animations
*/

// LV_IMG_DECLARE(crystal_01);
// LV_IMG_DECLARE(crystal_02);
// LV_IMG_DECLARE(crystal_03);
// LV_IMG_DECLARE(crystal_04);
// LV_IMG_DECLARE(crystal_05);
// LV_IMG_DECLARE(crystal_06);
// LV_IMG_DECLARE(crystal_07);
// LV_IMG_DECLARE(crystal_08);
// LV_IMG_DECLARE(crystal_09);
// LV_IMG_DECLARE(crystal_10);
// LV_IMG_DECLARE(crystal_11);
// LV_IMG_DECLARE(crystal_12);
// LV_IMG_DECLARE(crystal_13);
// LV_IMG_DECLARE(crystal_14);
// LV_IMG_DECLARE(crystal_15);
// LV_IMG_DECLARE(crystal_16);

// const lv_img_dsc_t *anim_imgs[] = {
//     &crystal_01, &crystal_02, &crystal_03, &crystal_04, &crystal_05, &crystal_06,
//     &crystal_07, &crystal_08, &crystal_09, &crystal_10, &crystal_11, &crystal_12,
//     &crystal_13, &crystal_14, &crystal_15, &crystal_16,
// };



/*
bongo animations
*/

// LV_IMG_DECLARE(bongo_1);
// LV_IMG_DECLARE(bongo_2);

// const lv_img_dsc_t *anim_imgs[] = {
//     &bongo_1, 
//     &bongo_2
// };



/*
mashle animations
*/

// LV_IMG_DECLARE(mashle_1);
// LV_IMG_DECLARE(mashle_2);
// LV_IMG_DECLARE(mashle_3);
// LV_IMG_DECLARE(mashle_4);
// LV_IMG_DECLARE(mashle_5);
// LV_IMG_DECLARE(mashle_6);
// LV_IMG_DECLARE(mashle_7);
// LV_IMG_DECLARE(mashle_8);
// LV_IMG_DECLARE(mashle_9);
// LV_IMG_DECLARE(mashle_10);
// LV_IMG_DECLARE(mashle_11);
// LV_IMG_DECLARE(mashle_12);
// LV_IMG_DECLARE(mashle_13);
// LV_IMG_DECLARE(mashle_14);
// LV_IMG_DECLARE(mashle_15);
// LV_IMG_DECLARE(mashle_16);
// LV_IMG_DECLARE(mashle_17);
// LV_IMG_DECLARE(mashle_18);
// LV_IMG_DECLARE(mashle_19);
// LV_IMG_DECLARE(mashle_20);
// LV_IMG_DECLARE(mashle_21);
// LV_IMG_DECLARE(mashle_22);
// LV_IMG_DECLARE(mashle_23);
// LV_IMG_DECLARE(mashle_24);
// LV_IMG_DECLARE(mashle_25);
// LV_IMG_DECLARE(mashle_26);
// LV_IMG_DECLARE(mashle_27);
// LV_IMG_DECLARE(mashle_28);
// LV_IMG_DECLARE(mashle_29);
// LV_IMG_DECLARE(mashle_30);
// LV_IMG_DECLARE(mashle_31);
// LV_IMG_DECLARE(mashle_32);
// LV_IMG_DECLARE(mashle_33);
// LV_IMG_DECLARE(mashle_34);
// LV_IMG_DECLARE(mashle_35);
// LV_IMG_DECLARE(mashle_36);
// LV_IMG_DECLARE(mashle_37);
// LV_IMG_DECLARE(mashle_38);
// LV_IMG_DECLARE(mashle_39);
// LV_IMG_DECLARE(mashle_40);
// LV_IMG_DECLARE(mashle_41);
// LV_IMG_DECLARE(mashle_42);
// LV_IMG_DECLARE(mashle_43);
// LV_IMG_DECLARE(mashle_44);
// LV_IMG_DECLARE(mashle_45);
// LV_IMG_DECLARE(mashle_46);
// LV_IMG_DECLARE(mashle_47);
// LV_IMG_DECLARE(mashle_48);
// LV_IMG_DECLARE(mashle_49);
// LV_IMG_DECLARE(mashle_50);
// LV_IMG_DECLARE(mashle_51);
// LV_IMG_DECLARE(mashle_52);
// LV_IMG_DECLARE(mashle_53);
// LV_IMG_DECLARE(mashle_54);
// LV_IMG_DECLARE(mashle_55);
// LV_IMG_DECLARE(mashle_56);
// LV_IMG_DECLARE(mashle_57);
// LV_IMG_DECLARE(mashle_58);
// LV_IMG_DECLARE(mashle_59);
// LV_IMG_DECLARE(mashle_60);
// LV_IMG_DECLARE(mashle_61);
// LV_IMG_DECLARE(mashle_62);
// LV_IMG_DECLARE(mashle_63);
// LV_IMG_DECLARE(mashle_64);
// LV_IMG_DECLARE(mashle_65);
// LV_IMG_DECLARE(mashle_66);
// LV_IMG_DECLARE(mashle_67);
// LV_IMG_DECLARE(mashle_68);
// LV_IMG_DECLARE(mashle_69);

// const lv_img_dsc_t *anim_imgs[] = {
//     &mashle_1, &mashle_2, &mashle_3, &mashle_4, &mashle_5, &mashle_6,
//     &mashle_7, &mashle_8, &mashle_9, &mashle_10, &mashle_11, &mashle_12,
//     &mashle_13, &mashle_14, &mashle_15, &mashle_16, &mashle_17, &mashle_18,
//     &mashle_19, &mashle_20, &mashle_21, &mashle_22, &mashle_23, &mashle_24,
//     &mashle_25, &mashle_26, &mashle_27, &mashle_28, &mashle_29, &mashle_30,
//     &mashle_31, &mashle_32, &mashle_33, &mashle_34, &mashle_35, &mashle_36,
//     &mashle_37, &mashle_38, &mashle_39, &mashle_40, &mashle_41, &mashle_42,
//     &mashle_43, &mashle_44, &mashle_45, &mashle_46, &mashle_47, &mashle_48,
//     &mashle_49, &mashle_50, &mashle_51, &mashle_52, &mashle_53, &mashle_54,
//     &mashle_55, &mashle_56, &mashle_57, &mashle_58, &mashle_59, &mashle_60,
//     &mashle_61, &mashle_62, &mashle_63, &mashle_64, &mashle_65, &mashle_66,
//     &mashle_67, &mashle_68, &mashle_69,
// };

/*
ufo animations
*/

// LV_IMG_DECLARE(ufo_1);
// LV_IMG_DECLARE(ufo_2);
// LV_IMG_DECLARE(ufo_3);
// LV_IMG_DECLARE(ufo_4);
// LV_IMG_DECLARE(ufo_5);
// LV_IMG_DECLARE(ufo_6);
// LV_IMG_DECLARE(ufo_7);
// LV_IMG_DECLARE(ufo_8);
// LV_IMG_DECLARE(ufo_9);
// LV_IMG_DECLARE(ufo_10);
// LV_IMG_DECLARE(ufo_11);
// LV_IMG_DECLARE(ufo_12);
// LV_IMG_DECLARE(ufo_13);
// LV_IMG_DECLARE(ufo_14);
// LV_IMG_DECLARE(ufo_15);
// LV_IMG_DECLARE(ufo_16);
// LV_IMG_DECLARE(ufo_17);
// LV_IMG_DECLARE(ufo_18);
// LV_IMG_DECLARE(ufo_19);
// LV_IMG_DECLARE(ufo_20);
// LV_IMG_DECLARE(ufo_21);
// LV_IMG_DECLARE(ufo_22);
// LV_IMG_DECLARE(ufo_23);
// LV_IMG_DECLARE(ufo_24);
// LV_IMG_DECLARE(ufo_25);
// LV_IMG_DECLARE(ufo_26);
// LV_IMG_DECLARE(ufo_27);
// LV_IMG_DECLARE(ufo_28);
// LV_IMG_DECLARE(ufo_29);
// LV_IMG_DECLARE(ufo_30);
// LV_IMG_DECLARE(ufo_31);
// LV_IMG_DECLARE(ufo_32);
// LV_IMG_DECLARE(ufo_33);
// LV_IMG_DECLARE(ufo_34);
// LV_IMG_DECLARE(ufo_35);
// LV_IMG_DECLARE(ufo_36);
// LV_IMG_DECLARE(ufo_37);
// LV_IMG_DECLARE(ufo_38);
// LV_IMG_DECLARE(ufo_39);
// LV_IMG_DECLARE(ufo_40);

// const lv_img_dsc_t *anim_imgs[] = {
//     &ufo_1, &ufo_2, &ufo_3, &ufo_4, &ufo_5, &ufo_6,
//     &ufo_7, &ufo_8, &ufo_9, &ufo_10, &ufo_11, &ufo_12,
//     &ufo_13, &ufo_14, &ufo_15, &ufo_16, &ufo_17, &ufo_18,
//     &ufo_19, &ufo_20, &ufo_21, &ufo_22, &ufo_23, &ufo_24,
//     &ufo_25, &ufo_26, &ufo_27, &ufo_28, &ufo_29, &ufo_30,
//     &ufo_31, &ufo_32, &ufo_33, &ufo_34, &ufo_35, &ufo_36,
//     &ufo_37, &ufo_38, &ufo_39, &ufo_40,
// };

/*
idea animations
*/

// LV_IMG_DECLARE(idea_1);
// LV_IMG_DECLARE(idea_2);
// LV_IMG_DECLARE(idea_3);
// LV_IMG_DECLARE(idea_4);
// LV_IMG_DECLARE(idea_5);
// LV_IMG_DECLARE(idea_6);
// LV_IMG_DECLARE(idea_7);
// LV_IMG_DECLARE(idea_8);
// LV_IMG_DECLARE(idea_9);
// LV_IMG_DECLARE(idea_10);
// LV_IMG_DECLARE(idea_11);
// LV_IMG_DECLARE(idea_12);
// LV_IMG_DECLARE(idea_13);
// LV_IMG_DECLARE(idea_14);
// LV_IMG_DECLARE(idea_15);
// LV_IMG_DECLARE(idea_16);
// LV_IMG_DECLARE(idea_17);
// LV_IMG_DECLARE(idea_18);
// LV_IMG_DECLARE(idea_19);
// LV_IMG_DECLARE(idea_20);
// LV_IMG_DECLARE(idea_21);
// LV_IMG_DECLARE(idea_22);
// LV_IMG_DECLARE(idea_23);
// LV_IMG_DECLARE(idea_24);
// LV_IMG_DECLARE(idea_25);
// LV_IMG_DECLARE(idea_26);
// LV_IMG_DECLARE(idea_27);
// LV_IMG_DECLARE(idea_28);
// LV_IMG_DECLARE(idea_29);
// LV_IMG_DECLARE(idea_30);

// const lv_img_dsc_t *anim_imgs[] = {
//     &idea_1, &idea_2, &idea_3, &idea_4, &idea_5, &idea_6,
//     &idea_7, &idea_8, &idea_9, &idea_10, &idea_11, &idea_12,
//     &idea_13, &idea_14, &idea_15, &idea_16, &idea_17, &idea_18,
//     &idea_19, &idea_20, &idea_21, &idea_22, &idea_23, &idea_24,
//     &idea_25, &idea_26, &idea_27, &idea_28, &idea_29, &idea_30,
// };

/*
Simon_cat animations
*/

LV_IMG_DECLARE(simon_cat_1);
LV_IMG_DECLARE(simon_cat_2);
LV_IMG_DECLARE(simon_cat_3);
LV_IMG_DECLARE(simon_cat_4);
LV_IMG_DECLARE(simon_cat_5);
LV_IMG_DECLARE(simon_cat_6);
LV_IMG_DECLARE(simon_cat_7);
LV_IMG_DECLARE(simon_cat_8);
LV_IMG_DECLARE(simon_cat_9);
LV_IMG_DECLARE(simon_cat_10);
LV_IMG_DECLARE(simon_cat_11);
LV_IMG_DECLARE(simon_cat_12);
LV_IMG_DECLARE(simon_cat_13);
LV_IMG_DECLARE(simon_cat_14);
LV_IMG_DECLARE(simon_cat_15);
LV_IMG_DECLARE(simon_cat_16);
LV_IMG_DECLARE(simon_cat_17);
LV_IMG_DECLARE(simon_cat_18);
LV_IMG_DECLARE(simon_cat_19);
LV_IMG_DECLARE(simon_cat_20);
LV_IMG_DECLARE(simon_cat_21);
LV_IMG_DECLARE(simon_cat_22);
LV_IMG_DECLARE(simon_cat_23);
LV_IMG_DECLARE(simon_cat_24);
LV_IMG_DECLARE(simon_cat_25);
LV_IMG_DECLARE(simon_cat_26);
LV_IMG_DECLARE(simon_cat_27);
LV_IMG_DECLARE(simon_cat_28);
LV_IMG_DECLARE(simon_cat_29);
LV_IMG_DECLARE(simon_cat_30);
LV_IMG_DECLARE(simon_cat_31);
LV_IMG_DECLARE(simon_cat_32);
LV_IMG_DECLARE(simon_cat_33);
LV_IMG_DECLARE(simon_cat_34);
LV_IMG_DECLARE(simon_cat_35);
LV_IMG_DECLARE(simon_cat_36);
LV_IMG_DECLARE(simon_cat_37);
LV_IMG_DECLARE(simon_cat_38);
LV_IMG_DECLARE(simon_cat_39);
LV_IMG_DECLARE(simon_cat_40);
LV_IMG_DECLARE(simon_cat_41);
LV_IMG_DECLARE(simon_cat_42);
LV_IMG_DECLARE(simon_cat_43);
LV_IMG_DECLARE(simon_cat_44);
LV_IMG_DECLARE(simon_cat_45);
LV_IMG_DECLARE(simon_cat_46);
LV_IMG_DECLARE(simon_cat_47);
LV_IMG_DECLARE(simon_cat_48);
LV_IMG_DECLARE(simon_cat_49);
LV_IMG_DECLARE(simon_cat_50);
LV_IMG_DECLARE(simon_cat_51);

const lv_img_dsc_t *anim_imgs[] = {
    &simon_cat_1, &simon_cat_2, &simon_cat_3, &simon_cat_4, &simon_cat_5, &simon_cat_6,
    &simon_cat_7, &simon_cat_8, &simon_cat_9, &simon_cat_10, &simon_cat_11, &simon_cat_12,
    &simon_cat_13, &simon_cat_14, &simon_cat_15, &simon_cat_16, &simon_cat_17, &simon_cat_18,
    &simon_cat_19, &simon_cat_20, &simon_cat_21, &simon_cat_22, &simon_cat_23, &simon_cat_24,
    &simon_cat_25, &simon_cat_26, &simon_cat_27, &simon_cat_28, &simon_cat_29, &simon_cat_30,
    &simon_cat_31, &simon_cat_32, &simon_cat_33, &simon_cat_34, &simon_cat_35, &simon_cat_36,
    &simon_cat_37, &simon_cat_38, &simon_cat_39, &simon_cat_40, &simon_cat_41, &simon_cat_42,
    &simon_cat_43, &simon_cat_44, &simon_cat_45, &simon_cat_46, &simon_cat_47, &simon_cat_48,
    &simon_cat_49, &simon_cat_50, &simon_cat_51,
};

void draw_animation(lv_obj_t *canvas) {
#if IS_ENABLED(CONFIG_NICE_VIEW_GEM_ANIMATION)
    lv_obj_t *art = lv_animimg_create(canvas);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)anim_imgs, 30);   //change 16 to the number of images in the array
    lv_animimg_set_duration(art, CONFIG_NICE_VIEW_GEM_ANIMATION_MS);
    lv_animimg_set_repeat_count(art, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(art);
#else
    lv_obj_t *art = lv_img_create(canvas);

    int length = sizeof(anim_imgs) / sizeof(anim_imgs[0]);
    srand(k_uptime_get_32());
    int random_index = rand() % length;

    lv_img_set_src(art, anim_imgs[random_index]);
#endif

    lv_obj_align(art, LV_ALIGN_TOP_LEFT, 0, 0);
}