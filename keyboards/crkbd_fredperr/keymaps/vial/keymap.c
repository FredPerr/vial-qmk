/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_canadian_french.h"

#include <stdio.h>

enum custom_keycodes {
    L6_ALT = SAFE_RANGE,

    // Accentued keys
    FR_E_ACUTE      = UC(0x80E9), // é
    FR_E_GRAVE      = UC(0x80E8), // è
    FR_E_CIRC       = UC(0x80EA), // ê
    FR_E_UML        = UC(0x80EB), // ë
    FR_A_GRAVE      = UC(0x80E0), // à
    FR_A_CIRC       = UC(0x80E2), // â
    FR_A_UML        = UC(0x80E4), // ä
    FR_U_GRAVE      = UC(0x80F9), // ù
    FR_U_CIRC       = UC(0x80FB), // û
    FR_U_UML        = UC(0x80FC), // ü
    FR_O_CIRC     = UC(0x80F4), // ô
    FR_I_CIRC     = UC(0x80EE), // î
    FR_I_UML      = UC(0x80EF), // ï
    FR_C_CED       = UC(0x80E7), // ç
    FR_OE           = UC(0x8153), // œ
    FR_GRAVE     = UC(0x8060), // `

    // Accentuted (capitals)
    FR_E_ACUTE_CAP  = UC(0x80C9), // É
    FR_E_GRAVE_CAP  = UC(0x80C8), // È
    FR_E_CIRC_CAP   = UC(0x80CA), // Ê
    FR_E_UML_CAP    = UC(0x80CB), // Ë
    FR_A_GRAVE_CAP  = UC(0x80C0), // À
    FR_A_CIRC_CAP   = UC(0x80C2), // Â
    FR_C_CED_CAP    = UC(0x80C7), // Ç
    FR_U_GRAVE_CAP  = UC(0x80D9), // Ù
    FR_U_CIRC_CAP   = UC(0x80DB), // Û
    FR_U_UML_CAP    = UC(0x80DC), // Ü
    FR_O_CIRC_CAP   = UC(0x80D4), // Ô
    FR_I_CIRC_CAP   = UC(0x80CE), // Î
    FR_I_UML_CAP    = UC(0x80CF), // Ï
    FR_OE_CAP       = UC(0x8152), // Œ
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
    MT(MOD_LGUI, KC_ESC),   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,        KC_O,    KC_P,    MT(MOD_RGUI, KC_LBRC),
    LCTL_T(KC_TAB),         KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,        KC_L,    KC_SCLN, MT(MOD_RCTL, KC_QUOT),
    L6_ALT,                KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM,     KC_DOT,  KC_SLSH, KC_RBRC,
                   LT(1, KC_BSPC), LSFT_T(KC_SPACE), LT(2, KC_ENTER),      LT(4, KC_ENTER), RSFT_T(KC_SPACE), LT(3, KC_DELETE)
  ),

  [1] = LAYOUT_split_3x6_3(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,
    KC_NO, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,  KC_RPRN, KC_UNDS,
    KC_LALT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_INS,
                       KC_TRNS, KC_TRNS, LT(3, KC_ENTER),      LT(3, KC_ENTER), KC_TRNS, KC_TRNS
  ),

  [2] = LAYOUT_split_3x6_3(
     KC_GRV, KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,      KC_EQL,  KC_NO, KC_NO,    KC_NO, KC_NO, KC_LGUI,
     KC_NO,KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,      KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, KC_MUTE, KC_BSLS,
     KC_NUM, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PCMM,      KC_VOLD, KC_VOLU,  KC_MPRV,  KC_MPLY, KC_MNXT, KC_RCTL,
                        LT(3, KC_BSPC), KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, LT(3, KC_DELETE)
  ),

  [3] = LAYOUT_split_3x6_3(
     RGB_MODE_PLAIN,  AS_DOWN, AS_TOGG, AS_UP,   QK_BOOT, KC_NO,      KC_NO, QK_BOOT,  AS_DOWN, AS_TOGG, AS_UP,   RGB_MODE_PLAIN, \
     RGB_TOG,         RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD,      RGB_MOD, RGB_SPI,  RGB_VAI, RGB_SAI, RGB_HUI, RGB_TOG, \
     KC_NO,         RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_RMOD,     RGB_RMOD,RGB_SPD,  RGB_VAD, RGB_SAD, RGB_HUD, KC_NO, \
                                      _______, _______,   _______,      _______, _______,   _______\
  ),

  [4] = LAYOUT_split_3x6_3(
     KC_NO, FR_A_CIRC, FR_E_CIRC, FR_E_ACUTE,  KC_NO, KC_NO,      KC_NO, FR_U_CIRC, FR_I_CIRC, FR_O_CIRC, KC_NO, KC_NO, \
     KC_NO, FR_A_GRAVE, FR_E_UML, FR_E_GRAVE,  KC_NO, KC_NO,      KC_NO, FR_U_GRAVE, FR_I_UML, KC_NO, KC_NO, _______, \
     KC_NO, KC_NO, KC_NO, FR_C_CED,  KC_NO, KC_NO,      KC_NO, KC_NO, FR_U_UML, FR_GRAVE, KC_NO, KC_NO, \
                                KC_NO, LT(5, KC_TRNS), KC_NO,      KC_NO, LT(5, KC_TRNS),   KC_NO\
  ),

  [5] = LAYOUT_split_3x6_3(
     KC_NO, FR_A_CIRC_CAP, FR_E_CIRC_CAP, FR_E_ACUTE_CAP,  KC_NO, KC_NO,       KC_NO, FR_U_CIRC_CAP, FR_I_CIRC_CAP, FR_O_CIRC_CAP, KC_NO, KC_NO, \
     KC_NO, FR_A_GRAVE_CAP, FR_E_UML_CAP, FR_E_GRAVE_CAP,  KC_NO, KC_NO,      KC_NO, FR_U_GRAVE_CAP, FR_I_UML_CAP, KC_NO, KC_NO, KC_NO, \
     KC_NO, KC_NO, KC_NO, FR_C_CED_CAP, KC_NO, KC_NO,                    KC_NO, FR_U_UML_CAP, KC_NO, KC_NO, KC_NO, KC_NO, \
                                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO\
  ),

  // Used for window management (which don't overlap with hexcodes (a-f))
  // Remaining keys that should not have conflict with other use cases are g,m,n,o,p,q,r,s,t,u,v,y,z
  [6] = LAYOUT_split_3x6_3(
     KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
     KC_NO, KC_NO, KC_NO, KC_NO,  KC_G, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
     KC_NO, KC_M, KC_N, KC_O,  KC_P, KC_Q,                    KC_R, KC_S, KC_NO, KC_NO, KC_NO, KC_NO, \
                                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO\
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case L6_ALT:
            if (record->event.pressed) {
                layer_on(6);
                register_code(KC_LALT);
            } else {
                unregister_code(KC_LALT);
                layer_off(6);
            }
            return false; // Tells QMK/Vial not to process this key further
    }
    return true;
}

#include "oled.c"
