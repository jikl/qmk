// Copyright 2023 Jonas Bernoulli (@tarsius)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {_Q_, _C_, _M_, _B_, _L_, _F_};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _C_, _M_, _B_);
}

const key_override_t semicolon = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_SCLN);
const key_override_t colon     = ko_make_basic(MOD_MASK_SHIFT, KC_DOT,  KC_COLN);

const key_override_t **key_overrides = (const key_override_t *[]){
    &semicolon, &colon, NULL
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Enter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Level|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  | Space| Level|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |  ,;  |  .:  | Tab  | Shift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Fn   |      | Bksp | Gui  | Ctrl | Alt  | Alt  | Ctrl | Gui  |      |      | Fn   |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_planck_grid(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
    MO(_L_), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SPC,  MO(_L_),
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_TAB,  KC_RSFT,
    MO(_F_), XXXXXXX, XXXXXXX, KC_LGUI, MO(_C_), MO(_M_), KC_RALT, KC_RCTL, KC_RGUI, XXXXXXX, XXXXXXX, MO(_F_)),

/* ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      | Home | Up   | End  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Left | Down | Right|      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | Bksp |      | Del  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_C_] = LAYOUT_planck_grid(
    _______, C(KC_Q), C(KC_W), C(KC_E), C(KC_R), C(KC_T), C(KC_Y), KC_HOME, KC_UP,      KC_END,     C(KC_P),   C(KC_ENT),
    _______, C(KC_A), C(KC_S), C(KC_D), C(KC_F), C(KC_G), C(KC_H), KC_LEFT, KC_DOWN,    KC_RGHT,    C(KC_SPC), _______,
    _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B), C(KC_N), KC_BSPC, C(KC_COMM), KC_DEL,     C(KC_TAB), _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,    _______,   _______),

[_M_] = LAYOUT_planck_grid(
    _______, A(KC_Q), A(KC_W), A(KC_E), A(KC_R), A(KC_T), A(KC_Y), C(KC_HOME), C(KC_UP),   C(KC_END),  A(KC_P),   A(KC_ENT),
    _______, A(KC_A), A(KC_S), A(KC_D), A(KC_F), A(KC_G), A(KC_H), C(KC_LEFT), C(KC_DOWN), C(KC_RGHT), A(KC_SPC), _______,
    _______, A(KC_Z), A(KC_X), A(KC_C), A(KC_V), A(KC_B), A(KC_N), C(KC_BSPC), A(KC_COMM), C(KC_DEL),  A(KC_TAB), _______,
    _______, _______, _______, _______, _______, _______, _______, _______,    _______,    _______,    _______,   _______),

[_B_] = LAYOUT_planck_grid(
    _______, LCA(KC_Q), LCA(KC_W), LCA(KC_E), LCA(KC_R), LCA(KC_T), LCA(KC_Y), A(KC_HOME), A(KC_UP),     A(KC_END),  LCA(KC_P),   LCA(KC_ENT),
    _______, LCA(KC_A), LCA(KC_S), LCA(KC_D), LCA(KC_F), LCA(KC_G), LCA(KC_H), A(KC_LEFT), A(KC_DOWN),   A(KC_RGHT), LCA(KC_SPC), _______,
    _______, LCA(KC_Z), LCA(KC_X), LCA(KC_C), LCA(KC_V), LCA(KC_B), LCA(KC_N), A(KC_BSPC), LCA(KC_COMM), A(KC_DEL),  LCA(KC_TAB), _______,
    _______, _______,   _______,   _______,   _______,   _______,   _______,   _______,    _______,      _______,    _______,     _______),

/* ,-----------------------------------------------------------------------------------.
 * |      |   #  |   [  |   '  |   ]  |   %  |   =  |   <  |   ~  |   >  |   ^  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   $  |   \  |   "  |   /  |   *  |   +  |   (  |   -  |   )  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   @  |   {  |   `  |   }  |   _  |   &  |   |  |   !  |   ?  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_L_] = LAYOUT_planck_grid(
    _______, KC_HASH, KC_LBRC, KC_QUOT, KC_RBRC, KC_PERC, KC_EQL,  KC_LT,   KC_TILD, KC_GT,   KC_CIRC, _______,
    _______, KC_DLR,  KC_BSLS, KC_DQUO, KC_SLSH, KC_ASTR, KC_PLUS, KC_LPRN, KC_MINS, KC_RPRN, _______, _______,
    _______, KC_AT,   KC_LCBR, KC_GRV,  KC_RCBR, KC_UNDS, KC_AMPR, KC_PIPE, KC_EXLM, KC_QUES, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

/* ,-----------------------------------------------------------------------------------.
 * |Reset |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | F11  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Debug |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_F_] = LAYOUT_planck_grid(
    QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
    DB_TOGG, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)};


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
