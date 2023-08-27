/*******************************************************************************
 *                                                                             *
 * [FILE NAME]:   timer.c                                                      *
 *                                                                             *
 * [AUTHOR]:      Ahmed Saeed                                                  *
 *                                                                             *
 * [Version]:     1.0.0                                                        *
 *                                                                             *
 * [DATE]:        25/08/2023                                                   *
 *                                                                             *
 * [DESCRIPTION]: source file for timer driver                                 *
 *                                                                             *
 *******************************************************************************/

#include "tm4c123gh6pm.h"
#include "bitwise_operation.h"
#include "DIO.h"
#include "timer.h"

/* timer0A handler triggered at user-defined intervals */
void TIMER0A_Handler(void)
{
    if(GET_BIT(TIMER0_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer0A timeout flag bit clears*/
    SET_BIT(TIMER0_ICR_R,INDIVIDUAL_A);
}

/* timer0B handler triggered at user-defined intervals */
void TIMER0B_Handler(void)
{
    if(GET_BIT(TIMER0_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer0B timeout flag bit clears*/
    SET_BIT(TIMER0_ICR_R,INDIVIDUAL_B);
}

/* timer1A handler triggered at user-defined intervals */
void TIMER1A_Handler(void)
{
    if(GET_BIT(TIMER1_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer1A timeout flag bit clears*/
    SET_BIT(TIMER1_ICR_R,INDIVIDUAL_A);
}

/* timer1B handler triggered at user-defined intervals */
void TIMER1B_Handler(void)
{
    if(GET_BIT(TIMER1_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer1B timeout flag bit clears*/
    SET_BIT(TIMER1_ICR_R,INDIVIDUAL_B);
}

/* timer1A handler triggered at user-defined intervals */
void TIMER2A_Handler(void)
{
    if(GET_BIT(TIMER2_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer2A timeout flag bit clears*/
    SET_BIT(TIMER2_ICR_R,INDIVIDUAL_A);
}

/* timer2B handler triggered at user-defined intervals */
void TIMER2B_Handler(void)
{
    if(GET_BIT(TIMER2_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer2B timeout flag bit clears*/
    SET_BIT(TIMER2_ICR_R,INDIVIDUAL_B);
}

/* timer3A handler triggered at user-defined intervals */
void TIMER3A_Handler(void)
{
    if(GET_BIT(TIMER3_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer3A timeout flag bit clears*/
    SET_BIT(TIMER3_ICR_R,INDIVIDUAL_A);
}

/* timer3B handler triggered at user-defined intervals */
void TIMER3B_Handler(void)
{
    if(GET_BIT(TIMER3_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer3B timeout flag bit clears*/
    SET_BIT(TIMER3_ICR_R,INDIVIDUAL_B);
}

/* timer4A handler triggered at user-defined intervals */
void TIMER4A_Handler(void)
{
    if(GET_BIT(TIMER4_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer4A timeout flag bit clears*/
    SET_BIT(TIMER4_ICR_R,INDIVIDUAL_A);
}

/* timer4B handler triggered at user-defined intervals */
void TIMER4B_Handler(void)
{
    if(GET_BIT(TIMER4_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer4B timeout flag bit clears*/
    SET_BIT(TIMER4_ICR_R,INDIVIDUAL_B);
}

/* timer5A handler triggered at user-defined intervals */
void TIMER5A_Handler(void)
{
    if(GET_BIT(TIMER5_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer5A timeout flag bit clears*/
    SET_BIT(TIMER5_ICR_R,INDIVIDUAL_A);
}

/* timer5B handler triggered at user-defined intervals */
void TIMER5B_Handler(void)
{
    if(GET_BIT(TIMER5_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer5B timeout flag bit clears*/
    SET_BIT(TIMER5_ICR_R,INDIVIDUAL_B);
}

/* Wtimer0A handler triggered at user-defined intervals */
void WTIMER0A_Handler(void)
{
    if(GET_BIT(WTIMER0_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* Timer0A timeout flag bit clears*/
    SET_BIT(WTIMER0_ICR_R,INDIVIDUAL_A);
}

/* Wtimer0B handler triggered at user-defined intervals */
void WTIMER0B_Handler(void)
{
    if(GET_BIT(WTIMER0_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer0B timeout flag bit clears*/
    SET_BIT(WTIMER0_ICR_R,INDIVIDUAL_B);
}

/* Wtimer1A handler triggered at user-defined intervals */
void WTIMER1A_Handler(void)
{
    if(GET_BIT(WTIMER1_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer1A timeout flag bit clears*/
    SET_BIT(WTIMER1_ICR_R,INDIVIDUAL_A);
}

/* Wtimer1B handler triggered at user-defined intervals */
void WTIMER1B_Handler(void)
{
    if(GET_BIT(WTIMER1_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer1B timeout flag bit clears*/
    SET_BIT(WTIMER1_ICR_R,INDIVIDUAL_B);
}

/* Wtimer1A handler triggered at user-defined intervals */
void WTIMER2A_Handler(void)
{
    if(GET_BIT(WTIMER2_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer2A timeout flag bit clears*/
    SET_BIT(WTIMER2_ICR_R,INDIVIDUAL_A);
}

/* Wtimer2B handler triggered at user-defined intervals */
void WTIMER2B_Handler(void)
{
    if(GET_BIT(WTIMER2_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer2B timeout flag bit clears*/
    SET_BIT(WTIMER2_ICR_R,INDIVIDUAL_B);
}

/* Wtimer3A handler triggered at user-defined intervals */
void WTIMER3A_Handler(void)
{
    if(GET_BIT(WTIMER3_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer3A timeout flag bit clears*/
    SET_BIT(WTIMER3_ICR_R,INDIVIDUAL_A);
}

/* Wtimer3B handler triggered at user-defined intervals */
void WTIMER3B_Handler(void)
{
    if(GET_BIT(WTIMER3_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer3B timeout flag bit clears*/
    SET_BIT(WTIMER3_ICR_R,INDIVIDUAL_B);
}

/* Wtimer4A handler triggered at user-defined intervals */
void WTIMER4A_Handler(void)
{
    if(GET_BIT(WTIMER4_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer4A timeout flag bit clears*/
    SET_BIT(WTIMER4_ICR_R,INDIVIDUAL_A);
}

/* Wtimer4B handler triggered at user-defined intervals */
void WTIMER4B_Handler(void)
{
    if(GET_BIT(WTIMER4_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer4B timeout flag bit clears*/
    SET_BIT(WTIMER4_ICR_R,INDIVIDUAL_B);
}

/* Wtimer5A handler triggered at user-defined intervals */
void WTIMER5A_Handler(void)
{
    if(GET_BIT(WTIMER5_MIS_R,INDIVIDUAL_A))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer5A timeout flag bit clears*/
    SET_BIT(WTIMER5_ICR_R,INDIVIDUAL_A);
}

/* Wtimer5B handler triggered at user-defined intervals */
void WTIMER5B_Handler(void)
{
    if(GET_BIT(WTIMER5_MIS_R,INDIVIDUAL_B))
    {
        /* toggle Blue LED*/
        TOGGLE_BIT(GPIO_PORTF_DATA_R,1);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,2);
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
    }

    /* WTimer5B timeout flag bit clears*/
    SET_BIT(WTIMER5_ICR_R,INDIVIDUAL_B);
}

/* A function that accepts a time duration in milliseconds as input and counts time periodically */
void Timer_Init(const GPTM_ConfigType * Config_Ptr,uint32_t milliSeconds)
{
    uint32_t time;
    uint32_t prescaler;

    switch(Config_Ptr->timer_type)
    {
    case _16_OR_32_BIT_TIMER:
        /*enable clock Timer in run mode */
        SET_BIT(SYSCTL_RCGCTIMER_R,Config_Ptr->timer_number);
        switch(Config_Ptr->timer_number)
        {
        case TIMER0:

            /* disable timer0 output */
            CLEAR_BIT(TIMER0_CTL_R,Config_Ptr->timer_use);

            /*assign the global operation configuration option */
            TIMER0_CFG_R = Config_Ptr->timer_global_operation;

            switch(Config_Ptr->timer_use)
            {
            case INDIVIDUAL_A:
                /*assign the mode of timerA0 */
                TIMER0_TAMR_R |= Config_Ptr->timer_mode;

                /* TimerA0 prescaler value */
                TIMER0_TAPR_R = (int)((float)(milliSeconds - 1) / 4);

                /* TimerA0 counter starting count down value  */
                TIMER0_TAILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                break;

            case INDIVIDUAL_B:
                /*assign the mode of timerB0 */
                TIMER0_TBMR_R |= Config_Ptr->timer_mode;

                /* TimerB0 prescaler value */
                TIMER0_TBPR_R = (int)((float)(milliSeconds - 1) / 4);

                /* TimerB0 counter starting count down value  */
                TIMER0_TBILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                break;
            }

            /* Timer0 timeout flag bit clears*/
            SET_BIT(TIMER0_ICR_R,Config_Ptr->timer_use);

            /*enables Timer0 timeout  interrupt mask */
            SET_BIT(TIMER0_IMR_R,Config_Ptr->timer_use);

            /* Enable Timer0 module */
            SET_BIT(TIMER0_CTL_R,Config_Ptr->timer_use);

            switch(Config_Ptr->timer_use)
            {
            case INDIVIDUAL_A:
                /*enable IRQ19 */
                SET_BIT(NVIC_EN0_R,19);
                break;

            case INDIVIDUAL_B:
                /*enable IRQ20 */
                SET_BIT(NVIC_EN0_R,20);
                break;
            }

            break;

            case TIMER1:

                /* disable timer1 output */
                CLEAR_BIT(TIMER1_CTL_R,Config_Ptr->timer_use);

                /*assign the global operation configuration option */
                TIMER1_CFG_R = Config_Ptr->timer_global_operation;

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*assign the mode of timerA1 */
                    TIMER1_TAMR_R |= Config_Ptr->timer_mode;

                    /* TimerA1 prescaler value */
                    TIMER1_TAPR_R = (int)((float)(milliSeconds - 1) / 4);

                    /* TimerA1 counter starting count down value  */
                    TIMER1_TAILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                    break;

                case INDIVIDUAL_B:
                    /*assign the mode of timerB1 */
                    TIMER1_TBMR_R |= Config_Ptr->timer_mode;

                    /* TimerB1 prescaler value */
                    TIMER1_TBPR_R = (int)((float)(milliSeconds - 1) / 4);

                    /* TimerB1 counter starting count down value  */
                    TIMER1_TBILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                    break;
                }

                /* Timer1 timeout flag bit clears*/
                SET_BIT(TIMER1_ICR_R,Config_Ptr->timer_use);

                /*enables Timer1 timeout  interrupt mask */
                SET_BIT(TIMER1_IMR_R,Config_Ptr->timer_use);

                /* Enable Timer1 module */
                SET_BIT(TIMER1_CTL_R,Config_Ptr->timer_use);

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*enable IRQ21 */
                    SET_BIT(NVIC_EN0_R,21);
                    break;

                case INDIVIDUAL_B:
                    /*enable IRQ22 */
                    SET_BIT(NVIC_EN0_R,22);
                    break;
                }

                break;

                case TIMER2:

                    /* disable timer2 output */
                    CLEAR_BIT(TIMER2_CTL_R,Config_Ptr->timer_use);

                    /*assign the global operation configuration option */
                    TIMER2_CFG_R = Config_Ptr->timer_global_operation;

                    switch(Config_Ptr->timer_use)
                    {
                    case INDIVIDUAL_A:
                        /*assign the mode of timerA2 */
                        TIMER2_TAMR_R |= Config_Ptr->timer_mode;

                        /* TimerA2 prescaler value */
                        TIMER2_TAPR_R = (int)((float)(milliSeconds - 1) / 4);

                        /* TimerA2 counter starting count down value  */
                        TIMER2_TAILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                        break;

                    case INDIVIDUAL_B:
                        /*assign the mode of timerB2 */
                        TIMER2_TBMR_R |= Config_Ptr->timer_mode;

                        /* TimerB2 prescaler value */
                        TIMER2_TBPR_R = (int)((float)(milliSeconds - 1) / 4);

                        /* TimerB2 counter starting count down value  */
                        TIMER2_TBILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                        break;
                    }

                    /* Timer2 timeout flag bit clears*/
                    SET_BIT(TIMER2_ICR_R,Config_Ptr->timer_use);

                    /*enables Timer2 timeout  interrupt mask */
                    SET_BIT(TIMER2_IMR_R,Config_Ptr->timer_use);

                    /* Enable Timer2 module */
                    SET_BIT(TIMER2_CTL_R,Config_Ptr->timer_use);

                    switch(Config_Ptr->timer_use)
                    {
                    case INDIVIDUAL_A:
                        /*enable IRQ23 */
                        SET_BIT(NVIC_EN0_R,23);
                        break;

                    case INDIVIDUAL_B:
                        /*enable IRQ24 */
                        SET_BIT(NVIC_EN0_R,24);
                        break;
                    }

                    break;

                    case TIMER3:

                        /* disable timer3 output */
                        CLEAR_BIT(TIMER3_CTL_R,Config_Ptr->timer_use);

                        /*assign the global operation configuration option */
                        TIMER3_CFG_R = Config_Ptr->timer_global_operation;

                        switch(Config_Ptr->timer_use)
                        {
                        case INDIVIDUAL_A:
                            /*assign the mode of timerA3 */
                            TIMER3_TAMR_R |= Config_Ptr->timer_mode;

                            /* TimerA3 prescaler value */
                            TIMER3_TAPR_R = (int)((float)(milliSeconds - 1) / 4);

                            /* TimerA3 counter starting count down value  */
                            TIMER3_TAILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                            break;

                        case INDIVIDUAL_B:
                            /*assign the mode of timerB3 */
                            TIMER3_TBMR_R |= Config_Ptr->timer_mode;

                            /* TimerB3 prescaler value */
                            TIMER3_TBPR_R = (int)((float)(milliSeconds - 1) / 4);

                            /* TimerB3 counter starting count down value  */
                            TIMER3_TBILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                            break;
                        }

                        /* Timer3 timeout flag bit clears*/
                        SET_BIT(TIMER3_ICR_R,Config_Ptr->timer_use);

                        /*enables Timer3 time-out  interrupt mask */
                        SET_BIT(TIMER3_IMR_R,Config_Ptr->timer_use);

                        /* Enable Timer3 module */
                        SET_BIT(TIMER3_CTL_R,Config_Ptr->timer_use);

                        switch(Config_Ptr->timer_use)
                        {
                        case INDIVIDUAL_A:
                            /*enable IRQ35 */
                            SET_BIT(NVIC_EN1_R,3);
                            break;

                        case INDIVIDUAL_B:
                            /*enable IRQ36 */
                            SET_BIT(NVIC_EN1_R,4);
                            break;
                        }

                        break;

                        case TIMER4:

                            /* disable timer4 output */
                            CLEAR_BIT(TIMER4_CTL_R,Config_Ptr->timer_use);

                            /*assign the global operation configuration option */
                            TIMER4_CFG_R = Config_Ptr->timer_global_operation;

                            switch(Config_Ptr->timer_use)
                            {
                            case INDIVIDUAL_A:
                                /*assign the mode of timerA4 */
                                TIMER4_TAMR_R |= Config_Ptr->timer_mode;

                                /* TimerA4 prescaler value */
                                TIMER4_TAPR_R = (int)((float)(milliSeconds - 1) / 4);

                                /* TimerA4 counter starting count down value  */
                                TIMER4_TAILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                                break;

                            case INDIVIDUAL_B:
                                /*assign the mode of timerB4 */
                                TIMER4_TBMR_R |= Config_Ptr->timer_mode;

                                /* TimerB4 prescaler value */
                                TIMER4_TBPR_R = (int)((float)(milliSeconds - 1) / 4);

                                /* TimerB4 counter starting count down value  */
                                TIMER4_TBILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                                break;
                            }

                            /* Timer4 timeout flag bit clears*/
                            SET_BIT(TIMER4_ICR_R,Config_Ptr->timer_use);

                            /*enables Timer4 time-out  interrupt mask */
                            SET_BIT(TIMER4_IMR_R,Config_Ptr->timer_use);

                            /* Enable Timer4 module */
                            SET_BIT(TIMER4_CTL_R,Config_Ptr->timer_use);

                            switch(Config_Ptr->timer_use)
                            {
                            case INDIVIDUAL_A:
                                /*enable IRQ70 */
                                SET_BIT(NVIC_EN2_R,6);
                                break;

                            case INDIVIDUAL_B:
                                /*enable IRQ71 */
                                SET_BIT(NVIC_EN2_R,7);
                                break;
                            }

                            break;

                            case TIMER5:

                                /* disable timer5 output */
                                CLEAR_BIT(TIMER5_CTL_R,Config_Ptr->timer_use);

                                /*assign the global operation configuration option */
                                TIMER5_CFG_R = Config_Ptr->timer_global_operation;

                                switch(Config_Ptr->timer_use)
                                {
                                case INDIVIDUAL_A:
                                    /*assign the mode of timerA5 */
                                    TIMER5_TAMR_R |= Config_Ptr->timer_mode;

                                    /* TimerA5 prescaler value */
                                    TIMER5_TAPR_R = (int)((float)(milliSeconds - 1) / 4);

                                    /* TimerA5 counter starting count down value  */
                                    TIMER5_TAILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                                    break;

                                case INDIVIDUAL_B:
                                    /*assign the mode of timerB5 */
                                    TIMER5_TBMR_R |= Config_Ptr->timer_mode;

                                    /* TimerB5 prescaler value */
                                    TIMER5_TBPR_R = (int)((float)(milliSeconds - 1) / 4);

                                    /* TimerB5 counter starting count down value  */
                                    TIMER5_TBILR_R = (((SYSTEM_FREQUENCY - 1) / 1000) * 4);

                                    break;
                                }

                                /* Timer5 timeout flag bit clears*/
                                SET_BIT(TIMER5_ICR_R,Config_Ptr->timer_use);

                                /*enables Timer5 time-out  interrupt mask */
                                SET_BIT(TIMER5_IMR_R,Config_Ptr->timer_use);

                                /* Enable Timer5 module */
                                SET_BIT(TIMER5_CTL_R,Config_Ptr->timer_use);

                                switch(Config_Ptr->timer_use)
                                {
                                case INDIVIDUAL_A:
                                    /*enable IRQ92 */
                                    SET_BIT(NVIC_EN2_R,28);
                                    break;

                                case INDIVIDUAL_B:
                                    /*enable IRQ93 */
                                    SET_BIT(NVIC_EN2_R,29);
                                    break;
                                }

                                break;
        }
        break;

    case _32_OR_64_BIT_WIDE_TIMER:
        /*enable clock Timer in run mode */
        SET_BIT(SYSCTL_RCGCWTIMER_R,Config_Ptr->timer_number);
        switch(Config_Ptr->timer_number)
            {
            case TIMER0:

                /* disable timer0 output */
                CLEAR_BIT(WTIMER0_CTL_R,Config_Ptr->timer_use);

                /*assign the global operation configuration option */
                WTIMER0_CFG_R = Config_Ptr->timer_global_operation;

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*assign the mode of timerA0 */
                    WTIMER0_TAMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerA0 prescaler value */
                    WTIMER0_TAPR_R = prescaler;

                    /* TimerA0 counter starting count down value  */
                    WTIMER0_TAILR_R = time - prescaler * 4294967296;

                    break;

                case INDIVIDUAL_B:
                    /*assign the mode of timerB0 */
                    WTIMER0_TBMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerB0 prescaler value */
                    WTIMER0_TBPR_R = prescaler;

                    /* TimerB0 counter starting count down value  */
                    WTIMER0_TBILR_R = time - prescaler * 4294967296;

                    break;
                }

                /* Timer0 timeout flag bit clears*/
                SET_BIT(WTIMER0_ICR_R,Config_Ptr->timer_use);

                /*enables Timer0 timeout  interrupt mask */
                SET_BIT(WTIMER0_IMR_R,Config_Ptr->timer_use);

                /* Enable Timer0 module */
                SET_BIT(WTIMER0_CTL_R,Config_Ptr->timer_use);

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*enable IRQ94 */
                    SET_BIT(NVIC_EN2_R,30);
                    break;

                case INDIVIDUAL_B:
                    /*enable IRQ95 */
                    SET_BIT(NVIC_EN2_R,31);
                    break;
                }

                break;

            case TIMER1:

                /* disable timer1 output */
                CLEAR_BIT(WTIMER1_CTL_R,Config_Ptr->timer_use);

                /*assign the global operation configuration option */
                WTIMER1_CFG_R = Config_Ptr->timer_global_operation;

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*assign the mode of timerA1 */
                    WTIMER1_TAMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerA1 prescaler value */
                    WTIMER1_TAPR_R = prescaler;

                    /* TimerA1 counter starting count down value  */
                    WTIMER1_TAILR_R = time - prescaler * 4294967296;

                    break;

                case INDIVIDUAL_B:
                    /*assign the mode of timerB1 */
                    WTIMER1_TBMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerB1 prescaler value */
                    WTIMER1_TBPR_R = prescaler;

                    /* TimerB1 counter starting count down value  */
                    WTIMER1_TBILR_R = time - prescaler * 4294967296;

                    break;
                }

                /* Timer1 timeout flag bit clears*/
                SET_BIT(WTIMER1_ICR_R,Config_Ptr->timer_use);

                /*enables Timer1 timeout  interrupt mask */
                SET_BIT(WTIMER1_IMR_R,Config_Ptr->timer_use);

                /* Enable Timer1 module */
                SET_BIT(WTIMER1_CTL_R,Config_Ptr->timer_use);

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*enable IRQ96 */
                    SET_BIT(NVIC_EN3_R,0);
                    break;

                case INDIVIDUAL_B:
                    /*enable IRQ97 */
                    SET_BIT(NVIC_EN3_R,1);
                    break;
                }

                break;

            case TIMER2:

                /* disable timer2 output */
                CLEAR_BIT(WTIMER2_CTL_R,Config_Ptr->timer_use);

                /*assign the global operation configuration option */
                WTIMER2_CFG_R = Config_Ptr->timer_global_operation;

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*assign the mode of timerA2 */
                    WTIMER2_TAMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerA2 prescaler value */
                    WTIMER2_TAPR_R = prescaler;

                    /* TimerA2 counter starting count down value  */
                    WTIMER2_TAILR_R = time - prescaler * 4294967296;

                    break;

                case INDIVIDUAL_B:
                    /*assign the mode of timerB2 */
                    WTIMER2_TBMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerB2 prescaler value */
                    WTIMER2_TBPR_R = prescaler;

                    /* TimerB2 counter starting count down value  */
                    WTIMER2_TBILR_R = time - prescaler * 4294967296;

                    break;
                }

                /* Timer2 timeout flag bit clears*/
                SET_BIT(WTIMER2_ICR_R,Config_Ptr->timer_use);

                /*enables Timer2 timeout  interrupt mask */
                SET_BIT(WTIMER2_IMR_R,Config_Ptr->timer_use);

                /* Enable Timer2 module */
                SET_BIT(WTIMER2_CTL_R,Config_Ptr->timer_use);

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*enable IRQ98 */
                    SET_BIT(NVIC_EN3_R,2);
                    break;

                case INDIVIDUAL_B:
                    /*enable IRQ99 */
                    SET_BIT(NVIC_EN3_R,3);
                    break;
                }

                break;

            case TIMER3:

                /* disable timer3 output */
                CLEAR_BIT(WTIMER3_CTL_R,Config_Ptr->timer_use);

                /*assign the global operation configuration option */
                WTIMER3_CFG_R = Config_Ptr->timer_global_operation;

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*assign the mode of timerA3 */
                    WTIMER3_TAMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerA3 prescaler value */
                    WTIMER3_TAPR_R = prescaler;

                    /* TimerA3 counter starting count down value  */
                    WTIMER3_TAILR_R = time - prescaler * 4294967296;

                    break;

                case INDIVIDUAL_B:
                    /*assign the mode of timerB3 */
                    WTIMER3_TBMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerB3 prescaler value */
                    WTIMER3_TBPR_R = prescaler;

                    /* TimerB3 counter starting count down value  */
                    WTIMER3_TBILR_R = time - prescaler * 4294967296;

                    break;
                }

                /* Timer3 timeout flag bit clears*/
                SET_BIT(WTIMER3_ICR_R,Config_Ptr->timer_use);

                /*enables Timer3 time-out  interrupt mask */
                SET_BIT(WTIMER3_IMR_R,Config_Ptr->timer_use);

                /* Enable Timer3 module */
                SET_BIT(WTIMER3_CTL_R,Config_Ptr->timer_use);

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*enable IRQ100 */
                    SET_BIT(NVIC_EN3_R,4);
                    break;

                case INDIVIDUAL_B:
                    /*enable IRQ101 */
                    SET_BIT(NVIC_EN3_R,5);
                    break;
                }

                break;

            case TIMER4:

                /* disable timer4 output */
                CLEAR_BIT(WTIMER4_CTL_R,Config_Ptr->timer_use);

                /*assign the global operation configuration option */
                WTIMER4_CFG_R = Config_Ptr->timer_global_operation;

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*assign the mode of timerA4 */
                    WTIMER4_TAMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerA4 prescaler value */
                    WTIMER4_TAPR_R = prescaler;

                    /* TimerA4 counter starting count down value  */
                    WTIMER4_TAILR_R = time - prescaler * 4294967296;

                    break;

                case INDIVIDUAL_B:
                    /*assign the mode of timerB4 */
                    WTIMER4_TBMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerB4 prescaler value */
                    WTIMER4_TBPR_R = prescaler;

                    /* TimerB4 counter starting count down value  */
                    WTIMER4_TBILR_R = time - prescaler * 4294967296;

                    break;
                }

                /* Timer4 timeout flag bit clears*/
                SET_BIT(WTIMER4_ICR_R,Config_Ptr->timer_use);

                /*enables Timer4 time-out  interrupt mask */
                SET_BIT(WTIMER4_IMR_R,Config_Ptr->timer_use);

                /* Enable Timer4 module */
                SET_BIT(WTIMER4_CTL_R,Config_Ptr->timer_use);

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*enable IRQ102 */
                    SET_BIT(NVIC_EN3_R,6);
                    break;

                case INDIVIDUAL_B:
                    /*enable IRQ103 */
                    SET_BIT(NVIC_EN3_R,7);
                    break;
                }

                break;

            case TIMER5:

                /* disable timer5 output */
                CLEAR_BIT(WTIMER5_CTL_R,Config_Ptr->timer_use);

                /*assign the global operation configuration option */
                WTIMER5_CFG_R = Config_Ptr->timer_global_operation;

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*assign the mode of timerA5 */
                    WTIMER5_TAMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerA5 prescaler value */
                    WTIMER5_TAPR_R = prescaler;

                    /* TimerA5 counter starting count down value  */
                    WTIMER5_TAILR_R = time - prescaler * 4294967296;

                    break;

                case INDIVIDUAL_B:
                    /*assign the mode of timerB5 */
                    WTIMER5_TBMR_R |= Config_Ptr->timer_mode;

                    time = (((SYSTEM_FREQUENCY - 1) / 1000) * milliSeconds);
                    prescaler = time / 4294967296;

                    /* TimerB5 prescaler value */
                    WTIMER5_TBPR_R = prescaler;

                    /* TimerB5 counter starting count down value  */
                    WTIMER5_TBILR_R = time - prescaler * 4294967296;

                    break;
                }

                /* Timer5 timeout flag bit clears*/
                SET_BIT(WTIMER5_ICR_R,Config_Ptr->timer_use);

                /*enables Timer5 time-out  interrupt mask */
                SET_BIT(WTIMER5_IMR_R,Config_Ptr->timer_use);

                /* Enable Timer5 module */
                SET_BIT(WTIMER5_CTL_R,Config_Ptr->timer_use);

                switch(Config_Ptr->timer_use)
                {
                case INDIVIDUAL_A:
                    /*enable IRQ104 */
                    SET_BIT(NVIC_EN3_R,8);
                    break;

                case INDIVIDUAL_B:
                    /*enable IRQ105 */
                    SET_BIT(NVIC_EN3_R,9);
                    break;
                }

                break;
            }
        break;
    }
}



