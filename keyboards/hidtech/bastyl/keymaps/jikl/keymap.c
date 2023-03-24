// Copyright 2023 Jonas Bernoulli (@tarsius)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {_Q_, _L_, _F_};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_Q_] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_CAPS,
    MO(_L_), KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    MO(_L_),
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SPC,  KC_RSFT,
    MO(_F_), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_TAB,  MO(_F_),

                               KC_LGUI, KC_LCTL, KC_ENT,           KC_ENT,  KC_RCTL, KC_RGUI,
                                        KC_LCTL, KC_LALT,          KC_RALT, KC_RCTL),

[_L_] = LAYOUT(
    _______, KC_HASH, KC_LBRC, KC_QUOT, KC_RBRC, KC_PERC,          KC_EQL,  KC_LABK, KC_TILD, KC_RABK, KC_CIRC, _______,
    _______, KC_DLR,  KC_BSLS, KC_DQT,  KC_SLSH, KC_ASTR,          KC_PLUS, KC_LPRN, KC_MINS, KC_RPRN, _______, _______,
    _______, KC_AT,   KC_LCBR, KC_GRV,  KC_RCBR, KC_UNDS,          KC_AMPR, KC_PIPE, KC_EXLM, KC_QUES, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,

                               _______, _______, _______,          _______, _______, _______,
                                        _______, _______,          _______, _______),

[_F_] = LAYOUT(
    QK_BOOT, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, QK_BOOT,
    DB_TOGG, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, DB_TOGG,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,

                               _______, _______, _______,          _______, _______, _______,
                                        _______, _______,          _______, _______)};


// clang-format on
const key_override_t semicolon = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_SCLN);
const key_override_t colon     = ko_make_basic(MOD_MASK_SHIFT, KC_DOT,  KC_COLN);

const key_override_t CU    = ko_make_basic(MOD_BIT(KC_LCTL), KC_U,   KC_HOME);
const key_override_t CI    = ko_make_basic(MOD_BIT(KC_LCTL), KC_I,   KC_UP);
const key_override_t CO    = ko_make_basic(MOD_BIT(KC_LCTL), KC_O,   KC_END);
const key_override_t CJ    = ko_make_basic(MOD_BIT(KC_LCTL), KC_J,   KC_LEFT);
const key_override_t CK    = ko_make_basic(MOD_BIT(KC_LCTL), KC_K,   KC_DOWN);
const key_override_t CL    = ko_make_basic(MOD_BIT(KC_LCTL), KC_L,   KC_RGHT);
const key_override_t CM    = ko_make_basic(MOD_BIT(KC_LCTL), KC_M,   KC_BSPC);
const key_override_t CDOT  = ko_make_basic(MOD_BIT(KC_LCTL), KC_DOT, KC_DEL);

const key_override_t MU    = ko_make_basic(MOD_BIT(KC_LALT), KC_U,   LCTL(KC_HOME));
const key_override_t MI    = ko_make_basic(MOD_BIT(KC_LALT), KC_I,   LCTL(KC_UP));
const key_override_t MO    = ko_make_basic(MOD_BIT(KC_LALT), KC_O,   LCTL(KC_END));
const key_override_t MJ    = ko_make_basic(MOD_BIT(KC_LALT), KC_J,   LCTL(KC_LEFT));
const key_override_t MK    = ko_make_basic(MOD_BIT(KC_LALT), KC_K,   LCTL(KC_DOWN));
const key_override_t ML    = ko_make_basic(MOD_BIT(KC_LALT), KC_L,   LCTL(KC_RGHT));
const key_override_t MM    = ko_make_basic(MOD_BIT(KC_LALT), KC_M,   LCTL(KC_BSPC));
const key_override_t MDOT  = ko_make_basic(MOD_BIT(KC_LALT), KC_DOT, LCTL(KC_DEL));

const key_override_t CMU   = ko_make_basic((MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)), KC_U,   LCTL(LALT(KC_HOME)));
const key_override_t CMI   = ko_make_basic((MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)), KC_I,   LCTL(LALT(KC_UP)));
const key_override_t CMO   = ko_make_basic((MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)), KC_O,   LCTL(LALT(KC_END)));
const key_override_t CMJ   = ko_make_basic((MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)), KC_J,   LCTL(LALT(KC_LEFT)));
const key_override_t CMK   = ko_make_basic((MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)), KC_K,   LCTL(LALT(KC_DOWN)));
const key_override_t CML   = ko_make_basic((MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)), KC_L,   LCTL(LALT(KC_RGHT)));
const key_override_t CMM   = ko_make_basic((MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)), KC_M,   LCTL(LALT(KC_BSPC)));
const key_override_t CMDOT = ko_make_basic((MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)), KC_DOT, LCTL(LALT(KC_DEL)));

const key_override_t **key_overrides = (const key_override_t *[]){
    &semicolon, &colon,
	&CU, &CI, &CO, &CJ, &CK, &CL, &CM, &CDOT,
	&MU, &MI, &MO, &MJ, &MK, &ML, &MM, &MDOT,
	&CMU, &CMI, &CMO, &CMJ, &CMK, &CML, &CMM, &CMDOT,
	NULL
};
