/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* Select hand configuration */
#define MASTER_LEFT
//#define MASTER_RIGHT

//#define EE_HANDS

//Found on reddit
//#define SPLIT_USB_DETECT

// #define WS2812_DI_PIN D3
// #define RGB_MATRIX_LED_COUNT 50

// #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING + 2
// #define USB_MAX_POWER_CONSUMPTION 500

#  define RGB_MATRIX_HUE_STEP 8
#  define RGB_MATRIX_SAT_STEP 8
#  define RGB_MATRIX_VAL_STEP 8
#  define RGB_MATRIX_SPD_STEP 10

#ifdef RGB_MATRIX_ENABLE
// Enable animations
// #  define ENABLE_RGB_MATRIX_ALPHAS_MODS                 // Static dual hue speed is hue for secondary hue
// #  define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN            // Static gradient top to bottom speed controls how much gradient changes
#  define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT         // Static gradient left to right speed controls how much gradient changes
#  define ENABLE_RGB_MATRIX_BREATHING                   // Single hue brightness cycling animation
#  define ENABLE_RGB_MATRIX_BAND_SAT                    // Single hue band fading saturation scrolling left to right
// #  define ENABLE_RGB_MATRIX_BAND_VAL                    // Single hue band fading brightness scrolling left to right
// #  define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT           // Single hue 3 blade spinning pinwheel fades saturation
// #  define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL           // Single hue 3 blade spinning pinwheel fades brightness
// #  define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT             // Single hue spinning spiral fades saturation
// #  define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL             // Single hue spinning spiral fades brightness
// #  define ENABLE_RGB_MATRIX_CYCLE_ALL                   // Full keyboard solid hue cycling through full gradient
#endif