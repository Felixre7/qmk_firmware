#pragma once

/* number of backlight levels */
/* Not sure what pin controls the backlighting, need help for this. */
#define BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 1

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

/* allows retro tapping, this sends the held key if no other key is pressed*/
#define RETRO_TAPPING

/* better for fast typists, instantly executes any mod keys rather than waiting for tapping term */
//#define PERMISSIVE_HOLD

/* defines the length of the hold in ms */
#define TAPPING_TERM 175

/* allows more than one key to be sent per scan */
//#define QMK_KEYS_PER_SCAN 2


/* there is no rgb underglow by default. */
/*#define RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
*/
