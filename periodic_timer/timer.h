/*******************************************************************************
 *                                                                             *
 * [FILE NAME]:   timer.h                                                      *
 *                                                                             *
 * [AUTHOR]:      Ahmed Saeed                                                  *
 *                                                                             *
 * [Version]:     1.0.0                                                        *
 *                                                                             *
 * [DATE]:        25/08/2023                                                   *
 *                                                                             *
 * [DESCRIPTION]: header file for timer driver                                 *
 *                                                                             *
 *******************************************************************************/

#ifndef TIMER_H_
#define TIMER_H_

#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define SYSTEM_FREQUENCY 16000000

/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/

/*
 * Description :
 * Enum responsible for configuring the timer type for GPTM driver.
 */
typedef enum
{
    _16_OR_32_BIT_TIMER,_32_OR_64_BIT_WIDE_TIMER
}GPTM_TimerType;

/*
 * Description :
 * Enum responsible for configuring the timer number for GPTM driver.
 */
typedef enum
{
    TIMER0,TIMER1,TIMER2,TIMER3,TIMER4,TIMER5
}GPTM_TimerNumber;

/*
 * Description :
 * Enum responsible for configuring the timer global operation for GPTM driver.
 */
typedef enum
{
    _32BIT_IN_16_OR_32_BIT_TIMER = 0x0     , _64BIT_IN_32_OR_64_BIT_TIMER = 0x0,
    _32BIT_IN_16_OR_32_BIT_RTC_TIMER = 0x1 , _64BIT_IN_32_OR_64_BIT_RTC_TIMER = 0x1,
    _16BIT_IN_16_OR_32_BIT_TIMER = 0x4     , _32BIT_IN_32_OR_64_BIT_TIMER = 0x4,
}GPTM_TimerGlobalOperation;

/*
 * Description :
 * Enum responsible for configuring the timer mode for GPTM driver.
 */
typedef enum
{
    ONE_SHOT = 1,PERIODIC,CAPTURE
}GPTM_TimerMode;

/*
 * Description :
 * Enum responsible for configuring the timer use for GPTM driver.
 */
typedef enum
{
    INDIVIDUAL_A,INDIVIDUAL_B = 8,CONCATENATED
}GPTM_TimerUse;

/*
 * Description :
 * Structure responsible for configuring the timer driver.
 */
typedef struct{
 GPTM_TimerType timer_type;
 GPTM_TimerNumber timer_number;
 GPTM_TimerGlobalOperation timer_global_operation;
 GPTM_TimerMode timer_mode;
 GPTM_TimerUse timer_use;
}GPTM_ConfigType;

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

/* timer0A handler triggered at user-defined intervals */
void TIMER0A_Handler(void);

/* timer0B handler triggered at user-defined intervals */
void TIMER0B_Handler(void);

/* timer1A handler triggered at user-defined intervals */
void TIMER1A_Handler(void);

/* timer1B handler triggered at user-defined intervals */
void TIMER1B_Handler(void);

/* timer2A handler triggered at user-defined intervals */
void TIMER2A_Handler(void);

/* timer2B handler triggered at user-defined intervals */
void TIMER2B_Handler(void);

/* timer3A handler triggered at user-defined intervals */
void TIMER3A_Handler(void);

/* timer3B handler triggered at user-defined intervals */
void TIMER3B_Handler(void);

/* timer4A handler triggered at user-defined intervals */
void TIMER4A_Handler(void);

/* timer4B handler triggered at user-defined intervals */
void TIMER4B_Handler(void);

/* timer5A handler triggered at user-defined intervals */
void TIMER5A_Handler(void);

/* timer5B handler triggered at user-defined intervals */
void TIMER5B_Handler(void);

/* Wide timer0A handler triggered at user-defined intervals */
void WTIMER0A_Handler(void);

/* Wide timer0B handler triggered at user-defined intervals */
void WTIMER0B_Handler(void);

/* Wide timer1A handler triggered at user-defined intervals */
void WTIMER1A_Handler(void);

/* Wide timer1B handler triggered at user-defined intervals */
void WTIMER1B_Handler(void);

/* Wide timer2A handler triggered at user-defined intervals */
void WTIMER2A_Handler(void);

/* Wide timer2B handler triggered at user-defined intervals */
void WTIMER2B_Handler(void);

/* Wide timer3A handler triggered at user-defined intervals */
void WTIMER3A_Handler(void);

/* Wide timer3B handler triggered at user-defined intervals */
void WTIMER3B_Handler(void);

/* Wide timer4A handler triggered at user-defined intervals */
void WTIMER4A_Handler(void);

/* Wide timer4B handler triggered at user-defined intervals */
void WTIMER4B_Handler(void);

/* Wide timer5A handler triggered at user-defined intervals */
void WTIMER5A_Handler(void);

/* Wide timer5B handler triggered at user-defined intervals */
void WTIMER5B_Handler(void);

/* Wide A function that accepts a time duration in milliseconds as input and counts time periodically */
void Timer_Init(const GPTM_ConfigType * Config_Ptr,uint32_t milliSeconds);




#endif /* TIMER_H_ */
