// Copyright [see default keymap]
// Copyright 2023 Jonas Bernoulli (@tarsius)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ┌─────┬────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┬─────┐
 * │ =+  │ 1  │ 2  │ 3  │ 4  │ 5  │    │    │    │ 6  │ 7  │ 8  │ 9  │ 0  │ -_  │
 * ├─────┼────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┼─────┤
 * │ Esc │ q  │ w  │ e  │ r  │ t  │    │    │    │ y  │ u  │ i  │ o  │ p  │Capsl│
 * ├─────┼────┼────┼────┼────┼────┤    │    │    ├────┼────┼────┼────┼────┼─────┤
 * │Symbl│ a  │ s  │ d  │ f  │ g  ├────┤    ├────┤ h  │ j  │ k  │ l  │Spc │Symbl│
 * ├─────┼────┼────┼────┼────┼────┤    │    │    ├────┼────┼────┼────┼────┼─────┤
 * │Shift│ z  │ x  │ c  │ v  │ b  │    │    │    │ n  │ m  │ ,; │ .: │Tab │Shift│
 * └┬────┼────┼────┼────┼────┼────┴────┘    └────┴────┼────┼────┼────┼────┼────┬┘
 *  │ Fn │    │Bspc│    │    │                        │    │    │    │    │ Fn │
 *  └────┴────┴────┴────┴────┘                        └────┴────┴────┴────┴────┘
 *                         ┏━━━━┳━━━━┓        ┏━━━━┳━━━━┓
 *                         ┃Bspc┃Tab ┃        ┃    ┃    ┃
 *                    ┏━━━━╋━━━━╋━━━━┫        ┣━━━━╋━━━━╋━━━━┓
 *                    ┃    ┃    ┃Ret ┃        ┃Ret ┃    ┃    ┃
 *                    ┃lGui┃lCtl┣━━━━┫        ┣━━━━┫rCtl┃rGui┃
 *                    ┃    ┃    ┃lAlt┃        ┃rAlt┃    ┃    ┃
 *                    ┗━━━━┻━━━━┻━━━━┛        ┗━━━━┻━━━━┻━━━━┛
 */
[0] = LAYOUT_ergodox(

     KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX,
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX,
     MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX,
     MO(2),   XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX,

                                                  KC_BSPC, KC_TAB,
                                                           KC_ENT,
                                         KC_LGUI, KC_LCTL, KC_LALT,

     XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
     XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
              KC_H,    KC_J,    KC_K,    KC_L,    KC_SPC,  MO(1),
     XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_TAB,  KC_RSFT,
                       KC_LEFT, KC_DOWN, KC_RGHT, KC_RBRC, MO(2),

     XXXXXXX, XXXXXXX,
     KC_ENT,
     KC_LALT, KC_RCTL, KC_RGUI),

/* ┌─────┬────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┬─────┐
 * │     │ F1 │ F2 │ F3 │ F4 │ F5 │    │    │    │ F6 │ F7 │ F8 │ F9 │ F10│     │
 * ├─────┼────┼────┼────┼────┼────┼────┤    ├────┼────┼────┼────┼────┼────┼─────┤
 * │     │ #  │ [  │ '  │ ]  │ %  │    │    │    │ =  │ <  │ ~  │ >  │ ^  │     │
 * ├─────┼────┼────┼────┼────┼────┤    │    │    ├────┼────┼────┼────┼────┼─────┤
 * │     │ $  │ \  │ "  │ /  │ *  ├────┤    ├────┤ +  │ (  │ -  │ )  │ :  │     │
 * ├─────┼────┼────┼────┼────┼────┤    │    │    ├────┼────┼────┼────┼────┼─────┤
 * │     │ @  │ {  │ `  │ }  │ _  │    │    │    │ &  │ |  │ !  │ ?  │ ;  │     │
 * └┬────┼────┼────┼────┼────┼────┴────┘    └────┴────┼────┼────┼────┼────┼────┬┘
 *  │    │    │    │    │    │                        │    │    │    │    │    │
 *  └────┴────┴────┴────┴────┘                        └────┴────┴────┴────┴────┘
 */
[1] = LAYOUT_ergodox(

     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,
     _______, KC_HASH, KC_LBRC, KC_QUOT, KC_RBRC, KC_PERC, _______,
     _______, KC_DLR,  KC_BSLS, KC_DQT,  KC_SLSH, KC_ASTR,
     _______, KC_AT,   KC_LCBR, KC_GRV,  KC_RCBR, KC_UNDS, _______,
     _______, _______, _______, _______, _______,

                                                  _______, _______,
                                                           _______,
                                         _______, _______, _______,

     _______, KC_F6,   KC_F7,   KC_F8,   KC_F8,   KC_F10,  _______,
     _______, KC_EQL,  KC_LABK, KC_TILD, KC_RABK, KC_CIRC, _______,
              KC_PLUS, KC_LPRN, KC_MINS, KC_RPRN, KC_COLN, _______,
     _______, KC_AMPR, KC_PIPE, KC_EXLM, KC_QUES, KC_SCLN, _______,
                       _______, _______, _______, _______, _______,

     _______, _______,
     _______,
     _______, _______, _______),
};
