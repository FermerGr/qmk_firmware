// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = 
{
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐
     * │   │   │F2 │F3 │F4 │F5 │   │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Esc│TO1│ Q │ W │ E │ R │ T │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │   │   │ A │ S │ D │ F │ G │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │   │Shi│ Z │ X │ C │ V │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │   │Ctr│   │ B │Del│Ent│Spc│
     * └───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_NO,    KC_NO,     KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_NO,
        KC_ESC,   TO(1),      KC_Q,    KC_W,    KC_E,    KC_R,       KC_T,
        KC_NO,    KC_NO,      KC_A,    KC_S,    KC_D,    KC_F,       KC_G,
        KC_NO,    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_BSPC,
        KC_NO,    KC_LCTL,    KC_NO,   KC_B,  KC_DEL,    KC_ENT,   KC_SPC
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┐
     * │   │   │Tab│ / │ * │ - │   │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Esc│TO0│ 7 │ 8 │ 9 │ + │ T │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │   │   │ 4 │ 5 │ 6 │ R │ F │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │   │Shi│ 1 │ 2 │ 3 │ V │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │   │Ctr│   │ B │Dot│Ent│Spc│
     * └───┴───┴───┴───┴───┴───┴───┘
     */
    [1] = LAYOUT(
        KC_NO,    KC_NO,    KC_TAB,   KC_PSLS,    KC_PAST,    KC_PMNS,    KC_NO,
        KC_ESC,   TO(0),      KC_P7,    KC_P8,      KC_P9,    KC_PPLS,     KC_T,
        KC_NO,    KC_NO,      KC_P4,    KC_P5,      KC_P6,    KC_R,        KC_F,
        KC_NO,    KC_LSFT,    KC_P1,    KC_P2,      KC_P3,    KC_V,     KC_BSPC,
        KC_NO,    KC_LCTL,    KC_NO,    KC_P0,    KC_PDOT,    KC_ENT,    KC_SPC
    )
};
