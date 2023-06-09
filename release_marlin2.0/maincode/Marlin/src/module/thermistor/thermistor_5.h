/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4267 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: https://www.mouser.com/datasheet/2/362/semitec%20usa%20corporation_gtthermistor-1202937.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
#if MACCHINE_ID == MACCHINE_5X_ID || MACCHINE_ID == MACCHINE_V8110_5X_ID
  // constexpr temp_entry_t temptable_5[] PROGMEM = {
  //   { OV(   1), 713 },
  //   { OV(  8), 300 }, // top rating 300C
  //   { OV(  10), 290 },
  //   { OV(  12), 280 },
  //   { OV(  15), 270 },
  //   { OV(  20), 260 },
  //   { OV(  24), 250 },
  //   { OV(  29), 240 },
  //   { OV(  35), 230 },
  //   { OV(  42), 220 },
  //   { OV(  53), 210 },
  //   { OV(  64), 200 },
  //   { OV( 79), 190 },
  //   { OV( 99), 180 },
  //   { OV( 126), 170 },
  //   { OV( 156), 160 },
  //   { OV( 198), 150 },
  //   { OV( 246), 140 },
  //   { OV( 311), 130 },
  //   { OV( 375), 120 },
  //   { OV( 457), 110 },
  //   { OV( 539), 100 },
  //   { OV( 623),  90 },
  //   { OV( 702),  80 },
  //   { OV( 777),  70 },
  //   { OV( 838),  60 },
  //   { OV( 892),  50 },
  //   { OV( 913),  40 },
  //   { OV( 959),  30 },
  //   { OV( 986),  20 },
  //   { OV(1000),  10 },
  //   { OV(1010),   0 }
  // };
    constexpr temp_entry_t temptable_5[] PROGMEM = {
    { OV(   1), 713 },
    { OV(  20), 300 }, // top rating 300C
    { OV(  22), 290 },
    { OV(  26), 280 },
    { OV(  30), 270 },
    { OV(  36), 260 },
    { OV(  42), 250 },
    { OV(  47), 240 },
    { OV(  57), 230 },
    { OV(  68), 220 },
    { OV(  83), 210 },
    { OV(  102), 200 },
    { OV( 120), 190 },
    { OV( 146), 180 },
    { OV( 177), 170 },
    { OV( 212), 160 },
    { OV( 259), 150 },
    { OV( 311), 140 },
    { OV( 368), 130 },
    { OV( 432), 120 },
    { OV( 498), 110 },
    { OV( 539), 100 },
    { OV( 623),  90 },
    { OV( 702),  80 },
    { OV( 777),  70 },
    { OV( 838),  60 },
    { OV( 892),  50 },
    { OV( 913),  40 },
    { OV( 959),  30 },
    { OV( 986),  20 },
    { OV(1000),  10 },
    { OV(1010),   0 }
  };
#elif MACCHINE_ID == MACCHINE_10X_ID
  // constexpr temp_entry_t temptable_5[] PROGMEM = {
  //   { OV(   1), 713 },
  //   { OV(  8), 300 }, // top rating 300C
  //   { OV(  10), 290 },
  //   { OV(  12), 280 },
  //   { OV(  15), 270 },
  //   { OV(  19), 260 },
  //   { OV(  23), 250 },
  //   { OV(  28), 240 },
  //   { OV(  34), 230 },
  //   { OV(  41), 220 },
  //   { OV(  50), 210 },
  //   { OV(  61), 200 },
  //   { OV( 79), 190 },
  //   { OV( 99), 180 },
  //   { OV( 125), 170 },
  //   { OV( 153), 160 },
  //   { OV( 193), 150 },
  //   { OV( 240), 140 },
  //   { OV( 303), 130 },
  //   { OV( 368), 120 },
  //   { OV( 449), 110 },
  //   { OV( 530), 100 },
  //   { OV( 618),  90 },
  //   { OV( 695),  80 },
  //   { OV( 768),  70 },
  //   { OV( 838),  60 },
  //   { OV( 892),  50 },
  //   { OV( 929),  40 },
  //   { OV( 962),  30 },
  //   { OV( 986),  20 },
  //   { OV(1000),  10 },
  //   { OV(1010),   0 }
  // };
  constexpr temp_entry_t temptable_5[] PROGMEM = {
    { OV(   1), 713 },
    { OV(  20), 300 }, // top rating 300C
    { OV(  22), 290 },
    { OV(  26), 280 },
    { OV(  30), 270 },
    { OV(  36), 260 },
    { OV(  42), 250 },
    { OV(  47), 240 },
    { OV(  57), 230 },
    { OV(  68), 220 },
    { OV(  83), 210 },
    { OV(  102), 200 },
    { OV( 120), 190 },
    { OV( 146), 180 },
    { OV( 177), 170 },
    { OV( 212), 160 },
    { OV( 259), 150 },
    { OV( 311), 140 },
    { OV( 368), 130 },
    { OV( 432), 120 },
    { OV( 498), 110 },
    { OV( 579), 100 },
    { OV( 671),  90 },
    { OV( 744),  80 },
    { OV( 811),  70 },
    { OV( 869),  60 },
    { OV( 916),  50 },
    { OV( 954),  40 },
    { OV( 982),  30 },
    { OV( 1002),  20 },
    { OV(1016),  10 },
    { OV(1025),   0 }
  };
#else
 constexpr temp_entry_t temptable_5[] PROGMEM = {
  { OV(   1), 713 },
  { OV(  17), 300 }, // top rating 300C
  { OV(  20), 290 },
  { OV(  23), 280 },
  { OV(  27), 270 },
  { OV(  31), 260 },
  { OV(  37), 250 },
  { OV(  43), 240 },
  { OV(  51), 230 },
  { OV(  61), 220 },
  { OV(  73), 210 },
  { OV(  87), 200 },
  { OV( 106), 190 },
  { OV( 128), 180 },
  { OV( 155), 170 },
  { OV( 189), 160 },
  { OV( 230), 150 },
  { OV( 278), 140 },
  { OV( 336), 130 },
  { OV( 402), 120 },
  { OV( 476), 110 },
  { OV( 554), 100 },
  { OV( 635),  90 },
  { OV( 713),  80 },
  { OV( 784),  70 },
  { OV( 846),  60 },
  { OV( 897),  50 },
  { OV( 937),  40 },
  { OV( 966),  30 },
  { OV( 986),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
};
#endif
