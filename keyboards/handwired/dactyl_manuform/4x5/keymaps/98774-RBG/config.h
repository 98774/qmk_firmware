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
#define RGB_MATRIX_SPLIT {23, 23}
// Remove upward config options
/* Set 0 if debouncing isn't needed */
#ifdef DEBOUNCE
  #undef DEBOUNCE
#endif

/* serial.c configuration for split keyboard */
#ifdef USE_SERIAL
  #undef USE_SERIAL
#endif
#ifdef SOFT_SERIAL_PIN
  #undef SOFT_SERIAL_PIN
#endif

#define SPLIT_MODS_ENABLE
#define SPLIT_WATCHDOG_ENABLE
//  * Reboot slave if no communication from master within timeout.
//  * Helps resolve issue where both sides detect as slave using `SPLIT_USB_DETECT`
#define USE_I2C
#define SPLIT_WATCHDOG_TIMEOUT 3000
//  * Maximum slave timeout when waiting for communication from master when using `SPLIT_WATCHDOG_ENABLE`

#define FORCED_SYNC_THROTTLE_MS 100
//  * Deadline for synchronizing data from master to slave when using the QMK-provided split transport.

//* `#define SPLIT_TRANSPORT_MIRROR
//  * Mirrors the master-side matrix on the slave when using the QMK-provided split transport.

#define SPLIT_LAYER_STATE_ENABLE
//  * Ensures the current layer state is available on the slave when using the QMK-provided split transport.

//#define SPLIT_LED_STATE_ENABLE
//   * Ensures the current host indicator state (caps/num/scroll) is available on the slave when using the QMK-provided split transport.


// #define WS2812_DI_PIN D3
// #define RGB_MATRIX_LED_COUNT 50

// #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING + 2
// #define USB_MAX_POWER_CONSUMPTION 500

#  define RGB_MATRIX_HUE_STEP 8
#  define RGB_MATRIX_SAT_STEP 8
#  define RGB_MATRIX_VAL_STEP 8
#  define RGB_MATRIX_SPD_STEP 10

#ifdef RGB_MATRIX_ENABLE
#  define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN            // Static gradient top to bottom speed controls how much gradient changes
#  define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT         // Static gradient left to right speed controls how much gradient changes
#  define ENABLE_RGB_MATRIX_BREATHING                   // Single hue brightness cycling animation
#  define ENABLE_RGB_MATRIX_BAND_SAT                    // Single hue band fading saturation scrolling left to right
#  define ENABLE_RGB_MATRIX_BAND_VAL                    // Single hue band fading brightness scrolling left to right
#  define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT           // Single hue 3 blade spinning pinwheel fades saturation
#  define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL           // Single hue 3 blade spinning pinwheel fades brightness
#  define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT             // Single hue spinning spiral fades saturation
#  define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL             // Single hue spinning spiral fades brightness
#  define ENABLE_RGB_MATRIX_CYCLE_ALL                   // Full keyboard solid hue cycling through full gradient
#  define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT            // Full gradient scrolling left to right
#  define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN               // Full gradient scrolling top to bottom
#  define ENABLE_RGB_MATRIX_CYCLE_OUT_IN                // Full gradient scrolling out to in
#  define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL           // Full dual gradients scrolling out to in
#endif