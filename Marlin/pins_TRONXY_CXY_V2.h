/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Pins assignment for Tronxy CXY-V2 0508
 * This board is mostly sanguinololu compatible but with some deviations
 */

#define BOARD_NAME "Tronxy CXY-V2"


//
// Limit Switches
//
#define X_STOP_PIN         18
#define Y_STOP_PIN         19
#define Z_STOP_PIN         20

//
// Steppers
//
#define X_STEP_PIN         15
#define X_DIR_PIN          21

#define Y_STEP_PIN         22
#define Y_DIR_PIN          23

#define Z_STEP_PIN          3
#define Z_DIR_PIN           2

#define E0_STEP_PIN         1
#define E0_DIR_PIN          0

#define X_ENABLE_PIN       14
#define Y_ENABLE_PIN       14
#define Z_ENABLE_PIN       14
#define E0_ENABLE_PIN      14

//
// Temperature Sensors
//
#define TEMP_0_PIN          7   // Analog Input (pin 33 extruder)
#define TEMP_BED_PIN        6   // Analog Input (pin 34 bed)

//
// Heaters / Fans
//
#define HEATER_0_PIN       13 // (extruder)
#define HEATER_BED_PIN     12 // (bed)

#define FAN_PIN            4

#define SDSS               31
#define LED_PIN            27


#ifdef REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
	#define LCD_PINS_RS     30	// CS chip select /SS chip slave select
	#define LCD_PINS_ENABLE 28	// SID (MOSI)
	#define LCD_PINS_D4     16	// SCK (CLK) clock
	
	#define BTN_ENC         26  // Push button of encoder
	#define BTN_EN1         11
	#define BTN_EN2         10
	
	#define ST7920_DELAY_1 DELAY_0_NOP
	#define ST7920_DELAY_2 DELAY_3_NOP
	#define ST7920_DELAY_3 DELAY_0_NOP
#endif
