#include "felix.h"
#include "action_layer.h"

/* Layer 0: Default Layer
 * ,--------------------------------------------------------------------------------------------.
 * | esc |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    BSp  |  DEL| PRSR |  /  |  *  |  -  |
 * |--------------------------------------------------------------------------------------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \  | PGUP  |  7  |  8  |  9  |
 * |---------------------------------------------------------------------------------------  +  |
 * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter     |  PGDN |  4  |  5  |  6  |
 * |--------------------------------------------------------------------------------------------|
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | UP  |      |  1  |  2  |  3  |
 * |---------------------------------------------------------------------------------------  -  |
 * | Ctrl |Gui|Alt  |      Space      |Alt|    Ctrl |LEFT | DOWN | RIGHT|     0     |  .  |
 * `---
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
           KC_ESC,     KC_1,   KC_2,    KC_3,   KC_4,    KC_5,   KC_6,   KC_7,    KC_8,     KC_9,     KC_0, KC_MINS,KC_EQL,    KC_BSPC,    KC_DEL  , KC_PSCR, KC_PSLS, KC_PAST, KC_PMNS,
           KC_TAB,     KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,     KC_O,     KC_P,  KC_LBRC, KC_RBRC, KC_BSLS,   KC_PGUP , KC_P7, KC_P8, KC_P9,
           KC_CAPS,    KC_A,    KC_S,    KC_D,   KC_F,    KC_G,   KC_H,   KC_J,    KC_K,     KC_L,  KC_SCLN, KC_QUOT,            KC_ENT, KC_PGDOWN , KC_P4, KC_P5, KC_P6, KC_PPLS,
           KC_LSFT,    KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,   KC_N,   KC_M, KC_COMM,   KC_DOT,  KC_SLSH, KC_RSFT,  KC_UP ,                      KC_P1, KC_P2, KC_P3,
           KC_LCTL, KC_LGUI, KC_LALT,             KC_SPC,                  KC_RALT,  KC_RCTL,        KC_LEFT,   KC_DOWN,      KC_RIGHT ,             KC_P0, KC_PDOT, KC_PENT),
};


void persistant_default_layer_set(uint16_t default_layer) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  }
  return true;
}
