#pragma once

#include "quantum.h"

/* Layer 0: Default Layer
 * ,--------------------------------------------------------------------------------------------.
 * | ESC |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    BSp  |  PSRC|     |  /  |  *  |  -  |
 * |--------------------------------------------------------------------------------------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \  | DEL  |  7  |  8  |  9  |
 * |---------------------------------------------------------------------------------------  +  |
 * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter     |      |  4  |  5  |  6  |
 * |--------------------------------------------------------------------------------------------|
 * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | UP  |      |  1  |  2  |  3  |
 * |---------------------------------------------------------------------------------------  -  |
 * | Ctrl |Gui|Alt  |      Space      |Alt|    Ctrl |LEFT | DOWN | RIGHT|     0     |  .  |
 * `--------------------------------------------------------------------------------------------'
 */

/* felix fkeyLess */
#define LAYOUT( \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H,      \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3E, K3F, K3G, K3H, K3I, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A,      K4C, K4D,      K4F, K4G, K4H,      \
    K50, K51, K52,           K55,                K59, K5A,      K5C, K5D, K5E, K5F,      K5H, K5I  \
) { \
    { K10, K11, K12, K13,    K14, K15,   K16,    K17,    K18, K19, K1A,   K1B,   K1C,   K1D,   K1E,   K1F,   K1G,   K1H,   K1I }, \
    { K20, K21, K22, K23,    K24, K25,   K26,    K27,    K28, K29, K2A,   K2B,   K2C,   K2D,   K2E,   K2F,   K2G,   K2H, KC_NO }, \
    { K30, K31, K32, K33,    K34, K35,   K36,    K37,    K38, K39, K3A,   K3B, KC_NO,   K3D,   K3E,   K3F,   K3G,   K3H,   K3I }, \
    { K40, K41, K42, K43,    K44, K45,   K46,    K47,    K48, K49, K4A, KC_NO,   K4C,   K4D, KC_NO,   K4F,   K4G,   K4H, KC_NO }, \
    { K50, K51, K52, KC_NO,KC_NO, K55, KC_NO,  KC_NO,  KC_NO, K59, K5A, KC_NO,   K5C,   K5D,   K5E,   K5F, KC_NO,   K5H,   K5I }  \
}
