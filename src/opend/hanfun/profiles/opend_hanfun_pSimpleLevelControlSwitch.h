/**
 * @code
 *  ___ _____ _   ___ _  _____ ___  ___  ___ ___
 * / __|_   _/_\ / __| |/ / __/ _ \| _ \/ __| __|
 * \__ \ | |/ _ \ (__| ' <| _| (_) |   / (__| _|
 * |___/ |_/_/ \_\___|_|\_\_| \___/|_|_\\___|___|
 * embedded.connectivity.solutions.==============
 * @endcode
 *
 * @file       opend_hanfun_pSimpleLevelControlSwitch.h
 * @copyright  STACKFORCE GmbH, Heitersheim, Germany, www.stackforce.de
 * @author     Patrick Weber
 * @brief      openD HAN-FUN pSimpleLevelControlSwitch.
 * @details
 *
 * This work is dual-licensed under Apache 2.0 and GPL 2.0. You can choose between one of them if you use this work.
 * For further details, please refer to the project home: https://github.com/opend-connect/openD
 *
 * SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-only
 *
 * @addtogroup OPEND_HANFUN_PROFILE
 * @{
 *
 * @defgroup   OPEND_HANFUN_PSIMPLELEVELCONTROLSWITCH openD HAN-FUN pSimpleLevelControlSwitch
 *             This module specifies the HAN-FUN simple level control switch profile.
 * @{
 */

#ifndef __OPEND_HANFUN_PSIMPLELEVELCONTROLSWITCH_H__
#define __OPEND_HANFUN_PSIMPLELEVELCONTROLSWITCH_H__

#include "../interfaces/opend_hanfun_iLevelControl.h"
#include "../interfaces/opend_hanfun_iOnOff.h"

/**
 * openD Hanfun pSimpleLevelControlSwitch interfaces.
 */
typedef enum openD_hanfun_pSimpleLevelControlSwitch_interface {
  /**
   * Interface iOnOff.
   */
  OPEND_HANFUN_PSIMPLELEVELCONTROLSWITCH_IONOFF,
  /**
   * Interface iLevelControl.
   */
  OPEND_HANFUN_PSIMPLELEVELCONTROLSWITCH_ILEVELCONTROL,
} openD_hanfun_pSimpleLevelControlSwitch_interface_t;

/**
 * openD Hanfun pSimpleLevelControlSwitch profile request structure.
 */
typedef struct openD_hanfun_pSimpleLevelControlSwitchReq {
  /**
   * Interface.
   */
  openD_hanfun_pSimpleLevelControlSwitch_interface_t interface;

  /**
   * Interface structures.
   */
  union {
    openD_hanfun_iOnOffClientReq_t onOff;
    openD_hanfun_iLevelControlClientReq_t levelControl;
  };
} openD_hanfun_pSimpleLevelControlSwitchReq_t;


/*! @} defgroup OPEND_HANFUN_PSIMPLELEVELCONTROLSWITCH */

/*! @} addtogroup OPEND_HANFUN_PROFILE */

#endif /* __OPEND_HANFUN_PSIMPLELEVELCONTROLSWITCH_H__ */

