#include "felix_fLess.h"
#include "action_layer.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
// layer list
#define _BL 0
#define _FL 1
#define _AL 2
#define _BLANK 30
// fancy keys for layer switching
#define FN_ENT  LT(_FL, KC_PENT)
#define AUD_LCTL LM(_AL, MOD_LCTL)
#define AUD_LSFT LM(_AL, MOD_LSFT)
#define CAP_HYP LT(_HYP, KC_CAPS)

/* Layer 0: Default Layer
 * ,--------------------------------------------------------------------------------------------.
 * | esc |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    BSp |  PGUP| PRSR |  /  | *  |  -  |
 * |--------------------------------------------------------------------------------------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \  | PGDN  |  7  |  8  |  9  |
 * |---------------------------------------------------------------------------------------  +  |
 * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter     |  DEL |  4  |  5  |  6  |
 * |--------------------------------------------------------------------------------------------|
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | UP  |      |  1  |  2  |  3  |
 * |--------------------------------------------------------------------------------------- ENT |
 * | Ctrl |Gui|Alt  |      Space      |Alt|Ctrl |    LEFT | DOWN | RIGHT|     0     |  .  |
 * `---
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: QWERTY */
    [_BL] = KEYMAP(
           KC_ESC,      KC_1,    KC_2,    KC_3,   KC_4,    KC_5,   KC_6,   KC_7,    KC_8,     KC_9,     KC_0, KC_MINS, KC_EQL  , KC_BSPC,   KC_PGUP , KC_PSCR, KC_PSLS, KC_PAST, KC_PMNS,
           KC_TAB,      KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,     KC_O,     KC_P, KC_LBRC, KC_RBRC , KC_BSLS, KC_PGDOWN , KC_P7,   KC_P8  , KC_P9  ,
           KC_CAPS,     KC_A,    KC_S,    KC_D,   KC_F,    KC_G,   KC_H,   KC_J,    KC_K,     KC_L,  KC_SCLN, KC_QUOT,            KC_ENT,    KC_DEL , KC_P4,   KC_P5  , KC_P6  ,  KC_PPLS,
           KC_LSFT,     KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,   KC_N,   KC_M, KC_COMM,   KC_DOT,  KC_SLSH,           KC_RSFT,  KC_UP ,             KC_P1,   KC_P2  , KC_P3  ,
           AUD_LCTL, KC_LGUI, KC_LALT,                    KC_SPC,                          KC_RALT,  KC_RCTL,           KC_LEFT, KC_DOWN,  KC_RIGHT , KC_P0,            KC_PDOT,   FN_ENT),
  /* function layer */
     [_FL] = KEYMAP(
            KC_GRV,    KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,  KC_F6,  KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11 ,  KC_F12, _______,_______, _______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______, _______, _______,_______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______,          _______,_______, _______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,           _______, _______,         _______, _______, _______,
            _______, _______, _______,                  _______,                           _______,  _______,           _______, _______,_______, _______, _______,          _______),
  /* audio layer */
     [_AL] = KEYMAP(
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______, _______, _______,_______, _______, _______, _______, KC_VOLU,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______, _______, _______,_______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______,          _______,_______, _______, _______, _______, KC_VOLD,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,           _______, _______,         _______, _______, _______,
            _______, _______, _______,                  _______,                           _______,  _______,           _______, _______,_______, _______, _______,          _______),
  /* blank for reference */
     [_HYP] = KEYMAP(
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______, _______, _______,_______, _______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______, _______, _______,_______, _______, _______, _______,
            KC_HYPER, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______,          _______,_______, _______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,           _______, _______,         _______, _______, _______,
            _______, _______, _______,                  _______,                           _______,  _______,           _______, _______,_______, _______, _______,          _______),
  /* blank for reference */
     [_BLANK] = KEYMAP(
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______, _______, _______,_______, _______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______, _______, _______,_______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,  _______,          _______,_______, _______, _______, _______, _______,
            _______, _______, _______, _______,_______, _______,_______,_______, _______,  _______,  _______,           _______, _______,         _______, _______, _______,
            _______, _______, _______,                  _______,                           _______,  _______,           _______, _______,_______, _______, _______,          _______),


};
