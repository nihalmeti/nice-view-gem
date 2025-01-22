#include <stdlib.h>
#include <zephyr/kernel.h>
#include "animation.h"

/*
meteor animations
*/

LV_IMG_DECLARE(meteor_1);

const lv_img_dsc_t *anim_imgs[] = {
    &meteor_1
};

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



void draw_animation(lv_obj_t *canvas) {
#if IS_ENABLED(CONFIG_NICE_VIEW_GEM_ANIMATION)
    lv_obj_t *art = lv_animimg_create(canvas);
    lv_obj_center(art);

    lv_animimg_set_src(art, (const void **)anim_imgs, 1);
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