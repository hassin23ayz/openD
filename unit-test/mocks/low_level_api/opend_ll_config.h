#ifdef __cplusplus
extern "C" {
#endif
/**
 * @code
 *  ___ _____ _   ___ _  _____ ___  ___  ___ ___
 * / __|_   _/_\ / __| |/ / __/ _ \| _ \/ __| __|
 * \__ \ | |/ _ \ (__| ' <| _| (_) |   / (__| _|
 * |___/ |_/_/ \_\___|_|\_\_| \___/|_|_\\___|___|
 * embedded.connectivity.solutions.==============
 * @endcode
 *
 * @file       opend_ll_config.h
 * @copyright  STACKFORCE GmbH, Heitersheim, Germany, http://www.stackforce.de
 * @author     STACKFORCE
 * @details
 *
 * This work is dual-licensed under Apache 2.0 and GPL 2.0. You can choose between one of them if you use this work.
 * For further details, please refer to the project home: https://github.com/opend-connect/openD
 *
 * SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-only
 */

#ifndef __OPEND_LL_CONFIG_H__
#define __OPEND_LL_CONFIG_H__

/*!
  * @brief   GPIO bit RESET and bit SET enumeration.
  */
typedef enum {
  OPEND_LL_GPIO_PIN_USER_BUTTON_01 = 0U,
  OPEND_LL_GPIO_PIN_USER_LED_01
} openD_ll_gpio_pin_t;


#define OPEND_LL_GPIO_PIN_USER_BUTTON_01_Pin GPIO_PIN_0
#define OPEND_LL_GPIO_PIN_USER_BUTTON_01_Port GPIOB

#define OPEND_LL_GPIO_PIN_USER_LED_01_Pin GPIO_PIN_0
#define OPEND_LL_GPIO_PIN_USER_LED_01_Port GPIOA

#endif  // __OPEND_LL_CONFIG_H__

#ifdef __cplusplus
}
#endif
