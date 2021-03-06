﻿/**************************************************************************************************
  Filename:       hal_drivers.h
  Revised:        $Date: 2012-07-09 13:23:30 -0700 (Mon, 09 Jul 2012) $
  Revision:       $Revision: 30873 $

  Description:    This file contains the interface to the Drivers service.

**************************************************************************************************/
#ifndef HAL_DRIVER_H
#define HAL_DRIVER_H

#ifdef __cplusplus
extern "C"
{
#endif

/**************************************************************************************************
 * INCLUDES
 **************************************************************************************************/

/**************************************************************************************************
 * CONSTANTS
 **************************************************************************************************/
#define HAL_KEY TRUE

#define HAL_LED_BLINK_EVENT                 0x0020
#define HAL_KEY_EVENT                       0x0010

/**************************************************************************************************
 * GLOBAL VARIABLES
 **************************************************************************************************/

extern uint8_t Hal_TaskID;

/**************************************************************************************************
 * FUNCTIONS - API
 **************************************************************************************************/

extern void Hal_Init ( uint8_t task_id );

/*
 * Process Serial Buffer
 */
extern uint16_t Hal_ProcessEvent ( uint8_t task_id, uint16_t events );

/*
 * Process Polls
 */
extern void Hal_ProcessPoll (void);

/*
 * Initialize HW
 */
extern void HalDriverInit (void);

#ifdef __cplusplus
}
#endif

#endif

/**************************************************************************************************
**************************************************************************************************/
