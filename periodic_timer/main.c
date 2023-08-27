/*******************************************************************************
 *                                                                             *
 * [FILE NAME]:   main.c                                                       *
 *                                                                             *
 * [AUTHOR]:      Ahmed Saeed                                                  *
 *                                                                             *
 * [Version]:     1.0.0                                                        *
 *                                                                             *
 * [DATE]:        25/08/2023                                                   *
 *                                                                             *
 * [DESCRIPTION]: Led blinking using periodic GPTM                             *
 *                                                                             *
 *******************************************************************************/

#include "bitwise_operation.h"
#include "DIO.h"
#include "timer.h"


int main(void)
{
    /* Initialize the led white pin */
    DIO_Init(PORTF_ID, PIN1_ID, PIN_OUTPUT_PULL_DOWN);
    DIO_Init(PORTF_ID, PIN2_ID, PIN_OUTPUT_PULL_DOWN);
    DIO_Init(PORTF_ID, PIN3_ID, PIN_OUTPUT_PULL_DOWN);

    /* Passing values to timer configuration structure*/
    GPTM_ConfigType Gptm_Config = {_16_OR_32_BIT_TIMER , TIMER0 , _16BIT_IN_16_OR_32_BIT_TIMER , PERIODIC , INDIVIDUAL_A};

    /* A periodic delay for a 500 milliseconds */
    Timer_Init(&Gptm_Config,500);

    while(1)
    {

    }
}
