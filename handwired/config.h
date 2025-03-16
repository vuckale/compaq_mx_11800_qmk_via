/*
Copyright 2024 BFB Workshop

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

#define DEBOUNCE 5

#define MATRIX_ROWS 7
#define MATRIX_COLS 17
#define DIODE_DIRECTION COL2ROW
#define ROW_PINS { A0, A1, B0, B1, B10, B12, B13 }
#define COL_PINS { NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, B9 }

// *** PS2 Mouse ***
# define PS2_CLOCK_PIN   A2
# define PS2_DATA_PIN    A3
#define PS2_MOUSE_USE_REMOTE_MODE 
#define PS2_MOUSE_DEBUG_HID
#define PS2_MOUSE_DEBUG_RAW
#define PS2_MOUSE_INIT_DELAY 1000
// Applies a transformation to the movement before sending to the host (see link)
#define PS2_MOUSE_USE_2_1_SCALING
// Define a lower presition for move
#define PS2_MOUSE_X_MULTIPLIER 3
#define PS2_MOUSE_Y_MULTIPLIER 3
#define PS2_MOUSE_V_MULTIPLIER 1
// Define a higher presition on scroll
#define PS2_MOUSE_SCROLL_DIVISOR_H 3
#define PS2_MOUSE_SCROLL_DIVISOR_V 3

// *** LEDs ***
#define LED_NUM_LOCK_PIN  B14
#define LED_CAPS_LOCK_PIN B15
// #define LED_SCROLL_LOCK_PIN B3
#define LAYER_LED         A8

// *** Physical Layout ***
/* #define LAYOUT(                                                                                                    \
    K00,  K01, K02, K03, K04, K05,  K06, K07, K08, K09, K0A, K0C,                         K0D, K0E, K0F, K0G,         \
        K11, K12, K13, K14, K15, K16,  K17, K18, K19, K1A,                              K1D, K1E, K1F,                \
                                                                                        K2D, K2E, K2F, K2G,           \
    K10, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,   K2C,               K3D, K3E, K3F,              \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,                      K4E, K4F,      K4G,         \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C,  K4D,                                            \
    K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C,                K5E,                              \
    K60, K61,                   K66,                   K6A, K6B,               K6D, K6E, K6F                          \
) {                                                                                                                   \
    { K00, K01, K02,   K03,   K04,   K05,   K06, K07,   K08,   K09,   K0A, KC_NO, K0C,   K0D,   K0E, K0F,   K0G   },  \
    { K10, K11, K12,   K13,   K14,   K15,   K16, K17,   K18,   K19,   K1A, KC_NO, KC_NO, K1D,   K1E, K1F,   KC_NO },  \
    { K20, K21, K22,   K23,   K24,   K25,   K26, K27,   K28,   K29,   K2A, K2B,   K2C,   K2D,   K2E, K2F,   K2G   },  \
    { K30, K31, K32,   K33,   K34,   K35,   K36, K37,   K38,   K39,   K3A, K3B,   K3C,   K3D,   K3E, K3F,   KC_NO },  \
    { K40, K41, K42,   K43,   K44,   K45,   K46, K47,   K48,   K49,   K4A, K4B,   K4C,   K4D,   K4E, K4F,   K4G   },  \
    { K50, K51, K52,   K53,   K54,   K55,   K56, K57,   K58,   K59,   K5A, K5B,   K5C,   KC_NO, K5E, KC_NO, KC_NO },  \
    { K60, K61, KC_NO, KC_NO, KC_NO, KC_NO, K66, KC_NO, KC_NO, KC_NO, K6A, K6B,   KC_NO, K6D,   K6E, K6F,   KC_NO },  \
}
*/
