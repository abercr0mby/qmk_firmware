#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, LSFT_T(KC_HOME), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NUHS, LCTL_T(KC_END), KC_LGUI, LALT_T(KC_UNDS), LT(1,KC_SPC), LT(1,KC_SPC), MO(3), MO(2), LT(4,KC_NUBS), KC_QUOT),
	[1] = LAYOUT(KC_ESC, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO, KC_DEL, KC_UP, KC_BSPC, KC_NO, KC_DEL, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_ENT, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_PGDN, KC_DEL, KC_UP, KC_BSPC, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT),
	[2] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_PPLS, KC_PMNS, KC_ASTR, KC_PSLS, KC_EQL, KC_PERC, KC_NO, KC_NO, KC_DOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DOT, KC_DOT, KC_NO, KC_TRNS, KC_NO, KC_NO),
	[3] = LAYOUT(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LCBR, KC_RCBR, KC_ENT, KC_NO, KC_PPLS, KC_PMNS, KC_ASTR, KC_PSLS, KC_EQL, KC_PERC, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO, KC_NO, KC_MINS, KC_UNDS, KC_UNDS, KC_TRNS, KC_NO, KC_NO, KC_QUOT),
	[4] = LAYOUT(RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, RGB_RMOD, RGB_MOD, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SPD, RGB_SPI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_VAI, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUD, RGB_HUI, KC_TRNS, KC_VOLD)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




