/**************************************************************************************************
  Filename:       OSAL_Timers.h
  Revised:        $Date: 2011-09-16 19:09:24 -0700 (Fri, 16 Sep 2011) $
  Revision:       $Revision: 27618 $

  Description:    This file contains the OSAL Timer definition and manipulation functions.
**************************************************************************************************/

#ifndef OSAL_TIMERS_H
#define OSAL_TIMERS_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDES
 */

/*********************************************************************
 * MACROS
 */

/*********************************************************************
 * CONSTANTS
 * the unit is chosen such that the 320us tick equivalent can fit in 
 * 32 bits.
 */
 #define OSAL_TIMERS_MAX_TIMEOUT 0x28f5c28e /* unit is ms*/

/*********************************************************************
 * TYPEDEFS
 */

/*********************************************************************
 * GLOBAL VARIABLES
 */

/*********************************************************************
 * FUNCTIONS
 */

  /*
   * Initialization for the OSAL Timer System.
   */
  extern void osalTimerInit( void );

  /*
   * Set a Timer
   */
  extern uint8_t osal_start_timerEx( uint8_t task_id, uint16_t event_id, uint32_t timeout_value );
  
  /*
   * Set a timer that reloads itself.
   */
  extern uint8_t osal_start_reload_timer( uint8_t taskID, uint16_t event_id, uint32_t timeout_value );

  /*
   * Stop a Timer
   */
  extern uint8_t osal_stop_timerEx( uint8_t task_id, uint16_t event_id );

  /*
   * Get the tick count of a Timer.
   */
  extern uint32_t osal_get_timeoutEx( uint8_t task_id, uint16_t event_id );

  /*
   * Adjust timer tables
   */
  extern void osal_adjust_timers( void );

  /*
   * Update timer tables
   */
  extern void osalTimerUpdate( uint32_t updateTime );

  /*
   * Count active timers
   */
  extern uint8_t osal_timer_num_active( void );

 /*
  * Read the system clock - returns milliseconds
  */
  extern uint32_t osal_GetSystemClock( void );

  /*
   * Get the next OSAL timer expiration.
   * This function should only be called in OSAL_PwrMgr.c
   */
  extern uint32_t osal_next_timeout( void );

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* OSAL_TIMERS_H */
