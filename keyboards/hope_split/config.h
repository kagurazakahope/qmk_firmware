// Copyright 2023 Kagurazaka Hope (@Kagurazaka Hope)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_COLS 17
#define MATRIX_ROWS 7

//                         0   1   2   3    4    5    6    7   8   9  10  11  12  13  14  15  16
#define MATRIX_COL_PINS { A7, C4, C5, B0, B12, B13, B14, B15, C6, C7, C8, C9, A5, A6, C2, C1, C0 }
//                         0   1   2   3   4    5    6
#define MATRIX_ROW_PINS { B5, B6, B4, B3, D2, C12, C11 }

#define ENCODERS_PAD_A { A2 }
#define ENCODERS_PAD_B { A1 }
#define ENCODER_RESOLUTION 4
#define MY_MUTE_BTN_DIRECT_PIN B8

#define LED_NUM_LOCK_PIN B7
#define LED_CAPS_LOCK_PIN A8
#define LED_SCROLL_LOCK_PIN B9

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
