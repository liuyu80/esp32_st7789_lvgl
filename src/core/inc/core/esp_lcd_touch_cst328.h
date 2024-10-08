/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief ESP LCD touch: cst328
 */

#pragma once

#include "esp_lcd_touch.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Create a new cst328 touch driver
 *
 * @note  The I2C communication should be initialized before use this function.
 *
 * @param io LCD panel IO handle, it should be created by `esp_lcd_new_panel_io_i2c()`
 * @param config Touch panel configuration
 * @param tp Touch panel handle
 * @return
 *      - ESP_OK: on success
 */
esp_err_t esp_lcd_touch_new_i2c_cst328(const esp_lcd_panel_io_handle_t io, const esp_lcd_touch_config_t *config, esp_lcd_touch_handle_t *tp);

/**
 * @brief I2C address of the cst328 controller
 *
 */
#define ESP_LCD_TOUCH_IO_I2C_CST328_ADDRESS    (0x1A)

/**
 * @brief Touch IO configuration structure
 *
 */
#define ESP_LCD_TOUCH_IO_I2C_CST328_CONFIG()             \
    {                                                    \
        .dev_addr = ESP_LCD_TOUCH_IO_I2C_CST328_ADDRESS, \
        .control_phase_bytes = 1,                        \
        .dc_bit_offset = 0,                              \
        .lcd_cmd_bits = 16,                              \
        .flags =                                         \
        {                                                \
            .disable_control_phase = 1,                  \
        }                                                \
    }

#ifdef __cplusplus
}
#endif