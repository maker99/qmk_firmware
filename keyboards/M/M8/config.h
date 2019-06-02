/*
Copyright 2019 marker99 

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
#define PRODUCT_ID      0x0024
#define DEVICE_VER      0x0001
#define MANUFACTURER    marker99
#define PRODUCT         M8_zeal
#define DESCRIPTION     A custom 2x4 keyboard

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

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

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4
#define MATRIX_ROW_PINS { F0, F1 }
#define MATRIX_COL_PINS { B3, B2, B1, B0 }
#define UNUSED_PINS


/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE




/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0


// the rest is taken from zeal60
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// EEPROM usage

// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 32
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x08
#define EEPROM_VERSION_ADDR 34

// Backlight config starts after EEPROM version
#define RGB_BACKLIGHT_CONFIG_EEPROM_ADDR 35
// Dynamic keymap starts after backlight config (35+31)
#define DYNAMIC_KEYMAP_EEPROM_ADDR 66
// Dynamic macro starts after dynamic keymaps (66+(4*5*14*2)) = (66+560)
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 626
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 398
#define DYNAMIC_KEYMAP_MACRO_COUNT 16

