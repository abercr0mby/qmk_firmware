#include QMK_KEYBOARD_H



/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
enum layers {
  _DEFAULT,
  _SYMBOL,
  _NAV,
  _ADJUST,
  _MOUSE,
  _REFERENCE
};

void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}

/*  layer_state_t layer_state_set_user(layer_state_t state) {
   return layer_move(state, _SYMBOL, _NAV, _ADJUST);
} */


uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        //case LCTL_T(KC_SPC):
        //case LSFT_T(KC_BSPC):
            //return 0;
        default:
            return QUICK_TAP_TERM;
    }
}

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) { //if no keypress follows it counts as a tap even if held long enough
    switch (keycode) {
        //case LCTL_T(KC_SPC):
        //case LSFT_T(KC_BSPC):
            return true;
        default:
            return false;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        //case LCTL_T(KC_SPC):
        //case LSFT_T(KC_BSPC):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                                KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,
        KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G,                                KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_NO,
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,                                KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
        TT(_SYMBOL), LSFT_T(KC_BSPC), LCTL_T(KC_TAB), KC_ENT, LCTL_T(KC_SPC), TT(_NAV)),

	[_ADJUST] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_LALT,                       KC_NUHS, KC_HASH, KC_DLR, KC_CIRC, KC_AMPR, KC_TRNS,
        KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS,                       KC_GRV, KC_PIPE, LSFT(KC_NUBS), KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_DEFAULT),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_MOUSE)),

    [_SYMBOL] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_PLUS, KC_1, KC_2, KC_3, KC_MINUS,                       KC_LPRN, KC_RPRN, KC_EXLM, KC_AT, KC_UNDS, KC_TRNS,
        KC_TRNS, KC_SLASH, KC_4, KC_5, KC_6, KC_ASTR,                       KC_LCBR, KC_RCBR, KC_PERC, KC_SCLN, KC_COLN, KC_TRNS,
        KC_TRNS, KC_EQUAL, KC_7, KC_8, KC_9, KC_0,                          KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_NUBS, KC_TRNS,
        TO(_DEFAULT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_NAV)),

	[_NAV] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_PGUP, KC_MS_BTN1, KC_UP, KC_MS_BTN2, LCTL(LALT(KC_DEL)), KC_TRNS,
        KC_TRNS, LCTL(KC_A), KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL,           KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, KC_TRNS,
        KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_TRNS,   KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_SYMBOL), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_DEFAULT)),

    [_MOUSE] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        TO(_DEFAULT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_DEFAULT)),


 	[_REFERENCE] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                                KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,  /*Use to allow combos to use same keys and apply to all layers even if keys different*/
        KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G,                                KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_NO,
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,                                KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
        KC_F1, KC_F2, KC_F3, LALT_T(KC_SPC), KC_F11, KC_F10)
};

const uint16_t PROGMEM adjust_layer[] = {KC_F1, KC_F10, COMBO_END};
const uint16_t PROGMEM default_layer[] = {KC_F2, KC_F11, COMBO_END};
const uint16_t PROGMEM qw_esc[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM f_bkspc_del[] = {KC_F, KC_F2, COMBO_END};
//const uint16_t PROGMEM j_ctrl_shift[] = {KC_J, KC_F11, COMBO_END};
//const uint16_t PROGMEM m_comm_alt[] = {KC_M, KC_COMM, COMBO_END};
//const uint16_t PROGMEM jk_win[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[] = {
    COMBO(adjust_layer, TO(_ADJUST)),
    COMBO(default_layer, TO(_DEFAULT)),
    COMBO(qw_esc,  KC_ESC),
    COMBO(f_bkspc_del,  KC_DEL),
    //COMBO(f_shift_ctrl,  KC_LCTL)
    //COMBO(m_comm_alt,  KC_LALT),
    //COMBO(jk_win,  KC_LGUI)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




