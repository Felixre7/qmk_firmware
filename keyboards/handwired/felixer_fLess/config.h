#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Murph Inc.
#define PRODUCT         Felix1
#define DESCRIPTION     main + numpad - fKeys.

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 19

/* key matrix pins */
#define MATRIX_ROW_PINS { F3, F2, F1, F0, F7 }
#define MATRIX_COL_PINS { C5, C4, C3, C2, C1, C0, F6, E6, B5, E1, E0, D7, D5, D4, D3, D2 ,D1, D0, B7 }
#define UNUSED_PINS {}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
/* Not sure what pin controls the backlighting, need help for this. */
#define BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 1

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
/*
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
*/

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

/* allows retro tapping, this sends the held key if no other key is pressed*/
#define RETRO_TAPPING

/* better for fast typists, instantly executes any mod keys rather than waiting for tapping term */
//#define PERMISSIVE_HOLD

/* defines the length of the hold in ms */
#define TAPPING_TERM 175

/* allows more than one key to be sent per scan */
//#define QMK_KEYS_PER_SCAN 2

/* there is no rgb underglow by default. */
#define RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif
