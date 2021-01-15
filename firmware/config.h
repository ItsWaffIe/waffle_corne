/* Copyright 2020 @wafflekeebs/@waffle#6666
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include "config_common.h"

#undef USE_I2C
#undef SSD1306OLED

#define MASTER_LEFT
// #define MASTER_RIGHT
//#define EE_HANDS

#define USE_SERIAL_PD2

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 27 //per half
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_SLEEP

#ifdef MOUSEKEY_ENABLE
#define MOUSEKEY_DELAY 300
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 5
#endif

#ifdef BOOTMAGIC_ENABLE
// top left and top right
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0
#endif

#ifdef UNICODEMAP_ENABLE
#define UNICODE_SELECTED_MODES UC_WINC, UC_MAC, UC_LNX
#define UNICODE_CYCLE_PERSIST false
#endif

#ifdef AUTOSHIFT_ENABLE
#define AUTO_SHIFT_MODIFIERS
#define AUTO_SHIFT_TIMEOUT 170
#define NO_AUTO_SHIFT_SPECIAL
#define NO_AUTO_SHIFT_NUMERIC
#endif

#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define TAPPING_TERM 150

#ifdef COMBO_ENABLE
  #define COMBO_COUNT 13
  #define COMBO_TERM 50
#endif

#ifdef OLED_DRIVER_ENABLE
//#define OLED_TIMEOUT 10000
#define OLED_DISABLE_TIMEOUT
#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#endif

//RGB using PWM on pin B0
#define WS2812_PWM_DRIVER PWMD3  // default: PWMD2
#define WS2812_PWM_CHANNEL 3  // default: 2
#define WS2812_PWM_PAL_MODE 2  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM3  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 3  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
//Serial over USART config
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D3  // USART TX pin
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
#define SERIAL_USART_DRIVER SD1 // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
