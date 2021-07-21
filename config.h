/*
Copyright 2021 vuckale

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

#define VENDOR_ID       0x049F
#define PRODUCT_ID      0xB944
#define DEVICE_VER      0x0001
#define MANUFACTURER    Compaq Computer Comporation
#define PRODUCT         COMPAQ MX11800
#define DESCRIPTION     Server Keyboard

#define CORE_TEENSY

#define MATRIX_ROWS 8
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS {F7, F6, F5, F4, F3, F2, F1, F0}
#define MATRIX_COL_PINS { C7, C6, C5, C4, C3, C2, C1, C0, E1, E0, D7, D6, E6, E7, B0, B1 }
#define UNUSED_PINS { B4, B5, B6, D5, D4, D3, D2, D1, D0, B7, A7, A6, A5, A4, A4, A2, A1, A0, E4, E3}

#define LED_SCROLL_LOCK_PIN B2
#define LED_CAPS_LOCK_PIN B3
#define LED_NUM_LOCK_PIN B4

#define DIODE_DIRECTION COL2ROW

// Set 0 if debouncing isn't needed
#define DEBOUNCE 5

// Define layers count
#ifndef DYNAMIC_KEYMAP_LAYER_COUNT
#    define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif

// Define keymap macro count
#ifndef DYNAMIC_KEYMAP_MACRO_COUNT
#    define DYNAMIC_KEYMAP_MACRO_COUNT 16
#endif

#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 4095

//Define bootmagic on ESC
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 13

#define MATRIX_HAS_GHOST
