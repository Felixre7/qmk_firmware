#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Murph Inc.
#define PRODUCT         Felix1
#define DESCRIPTION     main + numpad.

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 19

/* key matrix pins */
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F3, F2 }
#define MATRIX_COL_PINS { C7, C6, C5, C4, C3, C2, C1, C0, E1, E0, D7, F0, D5, D4, D3, D2 ,D1, D0, B7 }
#define UNUSED_PINS {}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
/* Not sure what pin controls the backlighting, need help for this. */
#define BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 10

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

/* there is no rgb underglow by default. */
#define RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#endif
