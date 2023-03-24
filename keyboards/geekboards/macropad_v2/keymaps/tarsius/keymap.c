// Copyright 2023 Jonas Bernoulli (@tarsius)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
LAYOUT_ortho_2x4(
    QK_BOOT,     MEH(KC_F1), MEH(KC_F2), MEH(KC_F3),
    MEH(KC_F10), MEH(KC_F4), MEH(KC_F5), MEH(KC_F6))};
