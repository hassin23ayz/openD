/**
 * @code
 *  ___ _____ _   ___ _  _____ ___  ___  ___ ___
 * / __|_   _/_\ / __| |/ / __/ _ \| _ \/ __| __|
 * \__ \ | |/ _ \ (__| ' <| _| (_) |   / (__| _|
 * |___/ |_/_/ \_\___|_|\_\_| \___/|_|_\\___|___|
 * embedded.connectivity.solutions.==============
 * @endcode
 *
 * @file       opend_hanfun_pAcOutlet.h
 * @copyright  STACKFORCE GmbH, Heitersheim, Germany, www.stackforce.de
 * @author     Patrick Weber
 * @brief      openD HAN-FUN pAcOutlet.
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
 * @defgroup   OPEND_HANFUN_PACOUTLET openD HAN-FUN pAcOutlet
 *             This module specifies the HAN-FUN AC outlet profile.
 * @{
 */

#ifndef __OPEND_HANFUN_PACOUTLET_H__
#define __OPEND_HANFUN_PACOUTLET_H__

#include "../interfaces/opend_hanfun_iOnOff.h"

/**
 * openD Hanfun pAcOutlet profile request structure.
 */
typedef openD_hanfun_iOnOffServerReq_t openD_hanfun_pAcOutletReq_t;

/**
 * openD Hanfun pAcOutlet profile confirm structure.
 */
typedef openD_hanfun_iOnOffServerCfm_t openD_hanfun_pAcOutletCfm_t;

/**
 * openD Hanfun pAcOutlet profile indication structure.
 */
typedef openD_hanfun_iOnOffServerInd_t openD_hanfun_pAcOutletInd_t;


/*! @} defgroup OPEND_HANFUN_PACOUTLET */

/*! @} addtogroup OPEND_HANFUN_PROFILE */

#endif /* __OPEND_HANFUN_PACOUTLET_H__ */

