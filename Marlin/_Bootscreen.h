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

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#pragma once

#define CUSTOM_BOOTSCREEN_TIMEOUT 1000
#define CUSTOM_BOOTSCREEN_INVERTED

#define CUSTOM_BOOTSCREEN_BMPWIDTH  85

const unsigned char custom_start_bmp[] PROGMEM = {
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11101000, // ###################################################################################.#...
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B10011000, // #################################################################################..##...
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B00111000, // ################################################################################..###...
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111110,B01111000, // ###############################################################################..####...
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,B11111101,B11111000, // ###################################################################.....######.######...
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B00000000,B00111011,B11111000, // ################################################################..........###.#######...
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111110,B00000000,B00000011,B11110000, // ###############################################################...............######....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111000,B00000000,B00000011,B11110000, // #############################################################.................######....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11110000,B00111111,B11000011,B11100000, // ############################################################......########....#####.....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11110001,B11111111,B11100011,B11111000, // ############################################################...############...#######...
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100011,B11111111,B11100011,B01100000, // ###########################################################...#############...##.##.....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100111,B11111111,B11100011,B11100000, // ###########################################################..##############...#####.....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100111,B11111111,B11100011,B11110000, // ###########################################################..##############...######....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100110,B11110011,B10110011,B11110000, // ###########################################################..##.####..###.##..######....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100100,B00100000,B00110001,B11110000, // ###########################################################..#....#.......##...#####....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11110000,B00100000,B11110001,B11110000, // ############################################################......#.....####...#####....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11110000,B01111111,B11111011,B10110000, // ############################################################.....############.###.##....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111001,B11111111,B11111111,B10110000, // #############################################################..##################.##....
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11001111,B11111111,B11110000, // ##################################################################..################....
  B11111111,B11111111,B11111111,B11111111,B11111101,B11111111,B11111111,B11111111,B00000110,B00111111,B11111000, // ######################################.#########################.....##...###########...
  B11111111,B11111111,B11111111,B11111111,B11000000,B01111111,B11111111,B11110000,B00000000,B11110111,B11011000, // ##################################.......###################............####.#####.##...
  B11111111,B11111111,B11111111,B11111111,B00000000,B00011111,B11111111,B11110000,B00000000,B11100011,B11011000, // ################################...........#################............###...####.##...
  B11111111,B11111111,B11111111,B11111111,B00001110,B00001111,B11111111,B11110000,B00000000,B00000011,B11010000, // ################################....###.....################..................####.#....
  B11111111,B11111111,B11111111,B11111111,B00011111,B00001111,B11111111,B11110000,B00000110,B00000111,B11111000, // ################################...#####....################.........##......########...
  B11111111,B11111111,B11111111,B11111111,B00111111,B10000111,B11111111,B11111000,B10001110,B00001111,B11011000, // ################################..#######....################...#...###.....######.##...
  B11111111,B11111111,B11111111,B11111111,B00111111,B11000111,B11111111,B11111000,B01001100,B00011111,B11110000, // ################################..########...################....#..##.....#########....
  B11111111,B11111011,B11111111,B11111111,B01111111,B11000011,B11111111,B11111100,B00000000,B00111100,B11111000, // #############.##################.#########....################............####..#####...
  B11111111,B11000000,B01111111,B11111110,B00001100,B00100011,B11111111,B11111110,B00000000,B01111000,B00011000, // ##########.......##############.....##....#...#################..........####......##...
  B11111111,B10000000,B00111111,B11111110,B00000100,B00100011,B11111111,B11111111,B00000000,B01111000,B00011000, // #########.........#############......#....#...##################.........####......##...
  B11111111,B00001111,B00011111,B11111110,B00000110,B11100001,B11111111,B11111110,B00000000,B11110000,B00111000, // ########....####...############......##.###....################.........####......###...
  B11111110,B00111111,B10001111,B11111110,B00011111,B11110001,B11111111,B11110000,B00000000,B11110000,B01110000, // #######...#######...###########....#########...#############............####.....###....
  B11111110,B00111111,B11001111,B11111110,B01111110,B11100000,B11111111,B11000000,B00000001,B11110000,B00000000, // #######...########..###########..######.###.....##########.............#####............
  B11111110,B01111111,B11001111,B11111110,B01100001,B00000010,B01111111,B11000000,B00000001,B11110000,B00000000, // #######..#########..###########..##....#......#..#########.............#####............
  B11111100,B01100110,B11000111,B11111110,B00000001,B00100011,B01111111,B11000000,B00000011,B11100000,B00000000, // ######...##..##.##...##########........#..#...##.#########............#####.............
  B11111100,B00000110,B00000111,B11111110,B00000010,B11000011,B00111111,B11000000,B00000011,B11100000,B00000000, // ######.......##......##########.......#.##....##..########............#####.............
  B11111100,B10111111,B10000111,B11111110,B00000001,B11000111,B01111111,B10000000,B00000111,B11100000,B00000000, // ######..#.#######....##########........###...###.########............######.............
  B11111100,B11111111,B11000111,B11111110,B01000111,B10001111,B10111111,B10010000,B00000111,B11100000,B00000000, // ######..##########...##########..#...####...#####.#######..#.........######.............
  B11111100,B11110000,B11000111,B11111110,B01100111,B00000011,B11111111,B00110000,B00001111,B11100000,B00000000, // ######..####....##...##########..##..###......##########..##........#######.............
  B11111100,B11111111,B11100011,B11111110,B01110000,B00000011,B00001110,B00110000,B00001111,B11110000,B00000000, // ######..###########...#########..###..........##....###...##........########............
  B11111100,B11111111,B11100011,B11111110,B10000000,B00001110,B00000100,B01110000,B00001111,B11110000,B00000000, // ######..###########...#########.#...........###......#...###........########............
  B11110100,B11100100,B01000011,B11111110,B11000000,B00011110,B00000000,B11111000,B00011111,B11110000,B00000000, // ####.#..###..#...#....#########.##.........####.........#####......#########............
  B11111110,B01111000,B00000001,B11111100,B00000000,B00111111,B01000000,B11111000,B00011111,B11110000,B00000000, // #######..####..........#######............######.#......#####......#########............
  B11101110,B00111111,B00001001,B11111000,B01000000,B01111111,B00000000,B11110000,B00011111,B11110000,B00000000, // ###.###...######....#..######....#.......#######........####.......#########............
  B11101100,B00011110,B00000001,B11110000,B11100000,B11111111,B01000000,B11110000,B00011111,B11110000,B00000000, // ###.##.....####........#####....###.....########.#......####.......#########............
  B11011100,B00000000,B00001100,B11100000,B11110001,B11111111,B11000000,B11110000,B00011111,B11110000,B00000000, // ##.###..............##..###.....####...###########......####.......#########............
  B11011100,B00000000,B00001100,B00000000,B11111101,B11111111,B11011000,B11110000,B00111111,B11110000,B00000000, // ##.###..............##..........######.###########.##...####......##########............
  B11011100,B00000000,B00001100,B00000000,B11111111,B11111111,B11100000,B11110000,B00111111,B11110000,B00000000, // ##.###..............##..........###################.....####......##########............
  B11011000,B00000000,B00000100,B00000000,B11111111,B11111111,B11100000,B11100000,B00111111,B11110000,B00000000, // ##.##................#..........###################.....###.......##########............
  B10111000,B00000000,B00100100,B00000000,B01111111,B11111111,B11100000,B11100000,B00111111,B11110000,B00000000, // #.###.............#..#...........##################.....###.......##########............
  B00111000,B11100000,B11000110,B01100000,B00111111,B11111111,B11100000,B11100000,B00111111,B11110000,B00000000, // ..###...###.....##...##..##.......#################.....###.......##########............
  B00111000,B11111111,B11100110,B01000011,B01111111,B11101111,B11110000,B11100000,B01111111,B11110000,B00000000, // ..###...###########..##..#....##.##########.########....###......###########............
  B00111000,B11111111,B11110110,B10010001,B11111111,B11111111,B11100001,B11100000,B01111111,B11110000,B00000000, // ..###...############.##.#..#...####################....####......###########............
  B01110011,B11111111,B11111110,B11000000,B00111111,B11111111,B11100001,B11100000,B01111111,B11110000,B00000000, // .###..#################.##........#################....####......###########............
  B01110011,B11111111,B11110110,B01100000,B10111111,B11111111,B11011001,B11100000,B01111111,B11111000,B00000000, // .###..##############.##..##.....#.################.##..####......############...........
  B11110111,B11111111,B11110110,B01100000,B11111111,B11111111,B11100000,B11100000,B01111111,B11111000,B00000000, // ####.###############.##..##.....###################.....###......############...........
  B11100011,B11111111,B11110011,B01100001,B11111111,B11111111,B11100000,B11100000,B01111111,B11111000,B00000000, // ###...##############..##.##....####################.....###......############...........
  B01100111,B11111111,B11110011,B11100000,B10011101,B11111111,B11000001,B11100000,B01111111,B11111000,B00000000, // .##..###############..#####.....#..###.###########.....####......############...........
  B11101111,B11111111,B11110111,B01100000,B00000111,B01001101,B01000000,B11100000,B01111111,B11111000,B00000000, // ###.################.###.##..........###.#..##.#.#......###......############...........
  B11100111,B11111111,B11110010,B01100000,B00011011,B00011110,B00000000,B11100000,B01111111,B11111000,B00000000, // ###..###############..#..##........##.##...####.........###......############...........
  B11011111,B11111111,B11111011,B11110000,B00011001,B00011110,B00001000,B11100000,B01111111,B11111000,B00000000, // ##.##################.######.......##..#...####.....#...###......############...........
  B11111111,B11111111,B11111000,B00010000,B00011111,B11101111,B00000000,B11100000,B01111111,B11111100,B00000000, // #####################......#.......########.####........###......#############..........
  B10011111,B11111111,B11111010,B01000000,B00010010,B01101010,B00000000,B11100000,B01111111,B11111100,B00000000, // #..##################.#..#.........#..#..##.#.#.........###......#############..........
  B10011000,B10011111,B11111011,B00000000,B00011110,B01110000,B00000000,B11100000,B11111111,B11111100,B00000000, // #..##...#..##########.##...........####..###............###.....##############..........
  B11111011,B11101111,B11111001,B00100000,B00001111,B00000010,B10000000,B11000000,B11111111,B11111100,B00000000  // #####.#####.#########..#..#.........####......#.#.......##......##############..........
};