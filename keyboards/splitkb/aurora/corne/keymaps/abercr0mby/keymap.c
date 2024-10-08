#include QMK_KEYBOARD_H



/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
enum layers {
  _DEFAULT,
  _ADJUST,
  _NUM,
  _SYMBOL,
  _NAV,
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

enum tap_dances{
  TD_PAR,
  TD_BRC,
  TD_BKT,
  TD_AB,
  TD_EXLM,
  TD_QUOT,
  TD_UNDS,
  TD_COLN,
  TD_SLASH,
  TD_CURR,
  TD_AT,
  TD_AMP,
  TD_DATE
};

tap_dance_action_t tap_dance_actions[] = {
  [TD_PAR] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_RPRN),
  [TD_BRC] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_RCBR),
  [TD_BKT] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
  [TD_AB] = ACTION_TAP_DANCE_DOUBLE(KC_LABK, KC_RABK),
  [TD_EXLM] = ACTION_TAP_DANCE_DOUBLE(KC_EXLM, KC_QUES),
  [TD_QUOT] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT,KC_AT), //KC_GRV
  [TD_UNDS] = ACTION_TAP_DANCE_DOUBLE(KC_MINUS, KC_UNDS),
  [TD_COLN] = ACTION_TAP_DANCE_DOUBLE(KC_COLN, KC_SCLN),
  [TD_SLASH] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_NUBS),
  [TD_CURR] = ACTION_TAP_DANCE_DOUBLE(KC_HASH, KC_DLR),
  [TD_AT] = ACTION_TAP_DANCE_DOUBLE(KC_DQUO, KC_NUHS),
  [TD_AMP] = ACTION_TAP_DANCE_DOUBLE(KC_AMPR, LSFT(KC_NUBS)),
  [TD_DATE] = ACTION_TAP_DANCE_DOUBLE(KC_SLASH, KC_COLN)
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                                            KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,
        KC_NO, LGUI_T(KC_A), LSFT_T(KC_S), LCTL_T(KC_D), LALT_T(KC_F), KC_G,            KC_H, RALT_T(KC_J), RCTL_T(KC_K), RSFT_T(KC_L), RGUI_T(KC_QUOT), KC_NO,
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,                                            KC_N, KC_M, KC_COMM, KC_DOT, TD(TD_SLASH), KC_NO,
        LT(_SYMBOL, KC_TAB), LT(_NAV, KC_DEL), LSFT_T(KC_BSPC),                         LT(_SYMBOL, KC_SPC), LT(_NUM, KC_ESC), KC_ENT),

	[_ADJUST] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10,                                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LALT, KC_F4, KC_F5, KC_F6, KC_F11,                                  KC_TRNS, KC_RALT, KC_RCTL, KC_RSFT, KC_RGUI, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12,                                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_TRNS, KC_TRNS, KC_TRNS),

    [_NUM] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_PLUS, KC_7, KC_8, KC_9, KC_MINUS,                                   TD(TD_PAR), TD(TD_AB), TD(TD_EXLM), TD(TD_AT), TD(TD_UNDS), KC_TRNS,
        KC_TRNS, TD(TD_DATE), KC_4, KC_5, KC_6, KC_ASTR,                                   TD(TD_BRC), KC_RALT, KC_RCTL, KC_LSFT, KC_RGUI, KC_TRNS,
        KC_TRNS, KC_0, KC_1, KC_2, KC_3, KC_EQUAL,                                      TD(TD_BKT), TD(TD_AMP), KC_COMM, KC_DOT, TD(TD_SLASH), KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_TRNS, KC_TRNS, KC_TRNS),

    [_SYMBOL] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_PLUS, KC_GRV, KC_PIPE, LSFT(KC_NUBS), KC_MINUS,                     TD(TD_PAR), TD(TD_AB), TD(TD_EXLM), TD(TD_AT), TD(TD_UNDS), KC_TRNS,
        KC_TRNS, LGUI_T(KC_SLASH), KC_LSFT, KC_LCTL, KC_LALT, KC_ASTR,                  TD(TD_BRC), TD(TD_CURR), KC_PERC, TD(TD_COLN), TD(TD_QUOT), KC_TRNS,
        KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_EQUAL,              TD(TD_BKT), TD(TD_AMP), KC_COMM, KC_DOT, TD(TD_SLASH), KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_TRNS, KC_TRNS, KC_TRNS),

	[_NAV] = LAYOUT_split_3x6_3(
        KC_TRNS, LCTL(KC_A), KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS,                         KC_PGUP, LCTL(KC_LEFT), KC_UP, LCTL(KC_RIGHT), LCTL(LALT(KC_DEL)), KC_TRNS,
        KC_TRNS, KC_LGUI, KC_LSFT, KC_LCTL, KC_LALT, KC_TRNS,                           KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, KC_TRNS,
        KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y),            KC_PGDN, KC_APP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS, KC_TRNS,                                                     KC_TRNS, KC_TRNS, KC_TRNS),

 	[_REFERENCE] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                                            KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,  /*Use to allow combos to use same keys and apply to all layers even if keys different*/
        KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G,                                            KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_NO,
        KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B,                                            KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
        KC_F1, KC_F2, KC_F3,                                                            KC_F12, KC_F11, KC_F10)
};

const uint16_t PROGMEM adjust_layer[] = {KC_F2, KC_F11, COMBO_END};
const uint16_t PROGMEM default_layer[] = {KC_F3, KC_F12, COMBO_END};
const uint16_t PROGMEM qw_esc[] = {KC_Q, KC_W, COMBO_END};

combo_t key_combos[] = {
    COMBO(adjust_layer, MO(_ADJUST)),
    COMBO(default_layer, TO(_DEFAULT)),
    COMBO(qw_esc,  KC_ESC)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

        case LSFT_T(KC_S):
        case LCTL_T(KC_D):
        case LALT_T(KC_F):
        case LGUI_T(KC_A):
        case RALT_T(KC_J):
        case RCTL_T(KC_K):
        case RSFT_T(KC_L):
        case RGUI_T(KC_QUOT):
        case LGUI_T(KC_SLASH):
        case LT(_SYMBOL, KC_SPC):
           return TAPPING_TERM + 150;
        default:
            return TAPPING_TERM;
    }
}


bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_BSPC):
        case LT(_NUM, KC_ESC):
        case LT(_NAV, KC_DEL):
        case LT(_SYMBOL, KC_TAB):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}


/* bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RCTL_T(KC_PERC):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_PERC); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
} */



/*This allows the hold instead of the tap when held immediatley after a tap. If 0 you get the hold, otherwise you can get the
multi-tap, the effect you would normally get when holding the key. NOTE this seems to break the layer toggle part of TT so
need to decide if it is worth it. In theory should not be tapping layer keys as they stand as they are dedicated at time of writing.*/
/*uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TT(_NAV):
        case TT(_SYMBOL):
            return 0;
        default:
            return QUICK_TAP_TERM;
    }
}*/

/* bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) { //if no keypress follows it counts as a tap even if held long enough
    switch (keycode) {
        case LCTL_T(KC_SPC):
        //case LSFT_T(KC_BSPC):
            return true;
        default:
            return false;
    }
} */



