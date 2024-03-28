
/*
Copyright 2021 @dlford

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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
#define NL NO_LED
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  //LHS
  {22, 19, 15,  5,  2},	
  {21, 18, 14,  4,  1},
  {20, 17, 13,  3,  0},
  {NL, 16, 12,  6,  7},
  {NL, 11, 10,  9,  8},

  //NOTE: I slid the indices around the bottom so they fit in the matrix
  //
  // 16, 12,  6,  7,  8 --> 16, 12,  6,  7  
  //         11, 10,  9     11, 10,  9,  8 
  //RHS
  {43, 40, 30, 26, 23},
  {44, 41, 31, 27, 24},
  {45, 42, 32, 28, 24},
  {38, 39, 33, 29, NL},
  {37, 36, 35, 34, NL},
}, {
  // LED Index to Physical Position

{81,25},{81,12},{81,0},{61,25},{61,12},{61,0},
{61,38},{81,38},{101,38},{101,51},{81,51},{61,51},
{40,38},{40,25},{40,12},{40,0},{20,38},{20,25},
{20,12},{20,0},{0,25},{0,12},{0,0},{224,0},
{224,12},{224,25},{203,0},{203,12},{203,25},{203,38},
{183,0},{183,12},{183,25},{183,38},{162,51},{142,51},
{122,51},{122,38},{142,38},{162,38},{162,0},{162,12},
{162,25},{142,0},{142,12},{142,25}
}, {
  // LED Index to Flag

  //LHS
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4,

  //RHS
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4
} };
#endif