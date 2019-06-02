/*
Copyright 2019 maker99 

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0104
#define DEVICE_VER      0x0001
#define MANUFACTURER    maker99
#define PRODUCT         M104
#define DESCRIPTION     A custom 104 key keyboard based on HP KU-0316

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 17


/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
#define MATRIX_ROW_PINS { C4,C5,C6,C7,F4,F5,F6,F7 }
#define MATRIX_COL_PINS { D3,D4,D5,D7,E0,E1,C0,C1,C2,E6,E7,B0,B1,F0,F1,F2,F3 }

#define UNUSED_PINS { A0,A1,A2,A3,A4,A5,A6,A7,B5,B6,B7,C3,D0,D1,D2, E4,E5}

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
// ESC key is on row 4 column 12
#define BOOTMAGIC_LITE_ROW 4
#define BOOTMAGIC_LITE_COLUMN 12

// the rest is partly taken from zeal60
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// EEPROM usage

// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 32
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x09
#define EEPROM_VERSION_ADDR 34

// Backlight config starts after EEPROM version
#define RGB_BACKLIGHT_CONFIG_EEPROM_ADDR 35
// Dynamic keymap starts after backlight config (35+37)
#define DYNAMIC_KEYMAP_EEPROM_ADDR 72
// Dynamic macro starts after dynamic keymaps (72+(4*8*17*2)) = (72+1088)
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 1160
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 398
#define DYNAMIC_KEYMAP_MACRO_COUNT 16



#define RGB_BACKLIGHT_ENABLED 1

// This conditionally compiles the backlight code for Zeal60 specifics
#define RGB_BACKLIGHT_WS2812 1
#define RGB_BACKLIGHT_DI_PIN B6 
#define RGB_BACKLIGHT_LED_NUM 3


// enable/disable LEDs based on layout
#define RGB_BACKLIGHT_USE_SPLIT_BACKSPACE 0
#define RGB_BACKLIGHT_USE_SPLIT_LEFT_SHIFT 0
#define RGB_BACKLIGHT_USE_SPLIT_RIGHT_SHIFT 0
#define RGB_BACKLIGHT_USE_7U_SPACEBAR 0
#define RGB_BACKLIGHT_USE_ISO_ENTER 0
#define RGB_BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS 0

// disable backlight when USB suspended (PC sleep/hibernate/shutdown)
#define RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 1

// disable backlight after timeout in minutes, 0 = no timeout
#define RGB_BACKLIGHT_DISABLE_AFTER_TIMEOUT 0

// the default brightness
#define RGB_BACKLIGHT_BRIGHTNESS 10

// the default effect (RGB test)
#define RGB_BACKLIGHT_EFFECT 1

// the default effect speed (0-3)
#define RGB_BACKLIGHT_EFFECT_SPEED 0

// the default color1 and color2
#define RGB_BACKLIGHT_COLOR_1 { .h = 0,   .s = 255 }
#define RGB_BACKLIGHT_COLOR_2 { .h = 127, .s = 255 }

// These define which keys in the matrix are alphas/mods
// Used for backlight effects so colors are different for
// alphas vs. mods
// Each value is for a row, bit 0 is column 0
// Alpha=0 Mod=1
#define RGB_BACKLIGHT_ALPHAS_MODS_ROW_0 0b0010000000000001
#define RGB_BACKLIGHT_ALPHAS_MODS_ROW_1 0b0000000000000001
#define RGB_BACKLIGHT_ALPHAS_MODS_ROW_2 0b0001000000000001
#define RGB_BACKLIGHT_ALPHAS_MODS_ROW_3 0b0011000000000001
#define RGB_BACKLIGHT_ALPHAS_MODS_ROW_4 0b0011110000000111

#define RGB_BACKLIGHT_CAPS_LOCK_INDICATOR   { .color = { .h =  30, .s = 255 }, .index = 1 }
#define RGB_BACKLIGHT_NUM_LOCK_INDICATOR    { .color = { .h =  30, .s = 255 }, .index = 2 }
#define RGB_BACKLIGHT_SCROLL_LOCK_INDICATOR { .color = { .h =  30, .s = 255 }, .index = 0 }
#define RGB_BACKLIGHT_LAYER_1_INDICATOR     { .color = { .h =  64, .s = 255 }, .index = 0 }
#define RGB_BACKLIGHT_LAYER_2_INDICATOR     { .color = { .h = 132, .s = 102 }, .index = 0 }
#define RGB_BACKLIGHT_LAYER_3_INDICATOR     { .color = { .h = 213, .s = 255 }, .index = 0 }


//Set up RGB underglow.
#define RGB_DI_PIN RGB_BACKLIGHT_DI_PIN    // The pin your RGB strip is wired to
#define RGBLED_NUM RGB_BACKLIGHT_LED_NUM // Number of LEDs
#define RGBLIGHT_HUE_STEP 5    // How much each press of rgb_hue changes hue
#define RGBLIGHT_SAT_STEP 10   // How much each press of rgb_sat changes sat
#define RGBLIGHT_VAL_STEP 10   // How much each press of rgb_val changes val

// // Enable current limiting for RGB underglow.
// #define RGBSTRIP_CURRENT_LIMIT 500        // Strip current limit in mA. (USB amperage - 500mA for keyboard)
// #define RGBSTRIP_MAX_CURRENT_PER_LIGHT 40 // mA per light when at max brightness.

// Scale brightnes according to BRIGHTNESS_CORRECTION_TABLE in quantum/rgblight.c.
// This allows to mitigate uneven brightness from LED underglow strips.
// #define LED_BRIGHTNESS_CORRECTION
