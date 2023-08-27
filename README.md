# Microcontroller Tiva C GPTM Modes

This repository provides documentation for three Tiva C GPTM Modes: GPT_Edge_Time, PwmTimerMode, and Periodic_Timer.

## GPT_Edge_Time

The `GPT_Edge_Time` component allows you to capture time intervals based on edge events using the General-Purpose Timers (GPT) module on the TM4C123 microcontroller.

### Features

- Capture time intervals using edge events.
- Configure timer settings such as mode, direction, and interrupt.
- Read the captured time intervals.
- for example :
  - turn on led red if capture times between (0 : 5 seconds)
  - turn on led blue if capture times between (5 : 10 seconds)
  - turn on led green if capture times between (10 : 15 seconds)

### Getting Started

1. **Include Header Files**: Include the required header files in your project:

    ```c
    #include "Tiva_GPTimers.h"
    ```

2. **Configuration**: Configure the GPT_Struct settings to match your requirements:

    ```c
    GPT_Struct GPTM_EdgeTimer = {
        /* Configure settings here */
    };
    ```

3. **Initialization**: Initialize the GPT_Edge_Time:

    ```c
    GPT_Init(&GPTM_EdgeTimer);
    ```

4. **Enable Timer**: Enable the GPT:

    ```c
    GPT_Enable(GPTM_EdgeTimer.timer);
    ```

5. **Capture Time Intervals**: Use the GPIO PORTF interrupt handler to capture time intervals based on edge events.

6. **Processing**: Calculate and process the captured time intervals in your application.
   

## PwmTimerMode

The `PwmTimerMode` component enables generating PWM (Pulse Width Modulation) signals using the PWM timer mode of the General-Purpose Timers (GPT) module on the TM4C123 microcontroller.

### Features

- Generate PWM signals with configurable duty cycle and frequency.
- Configure PWM settings, including timer mode and output pin.
- for example: Fade led blue

### Getting Started

1. **Include Header Files**: Include the necessary header files in your project

2. **Configuration**: Configure the PWM timer settings according to your requirements

3. **Initialization**: Initialize the PWM timer mode:

4. **Duty Cycle**: Set the desired duty cycle using the `PwmTimer_SetDutyCycle` function:


5. **Enable PWM**: Enable the PWM timer:


## Periodic_Timer

The `Periodic_Timer` component facilitates creating periodic timer interrupts using the General-Purpose Timers (GPT) module on the TM4C123 microcontroller.

### Features

- Generate periodic timer interrupts at specified time intervals.
- Configure timer settings, including interrupt type and interval.
- for example blink LED with interval.

### Getting Started

1. **Include Header Files**: Include the necessary header files in your project

2. **Configuration**: Configure the Periodic_Timer settings to match your requirements:

    ```c
        /* Configure settings here */
    GPTM_ConfigType Gptm_Config = {_16_OR_32_BIT_TIMER , TIMER1 , _16BIT_IN_16_OR_32_BIT_TIMER , PERIODIC , INDIVIDUAL_A};
    
    ```

3. **Initialization**: Initialize the periodic timer:

    ```c
    Timer_Init(const GPTM_ConfigType * Config_Ptr,uint32_t milliSeconds);
    ```

4. **Enable Interrupt**: Enable the timer interrupt:

    ```c
    Timer_Init(const GPTM_ConfigType * Config_Ptr,uint32_t milliSeconds);
    ```

5. **Interrupt Handling**: Implement the timer interrupt handler function to execute tasks at regular intervals.
5. **Interrupt Handling**: Implement the timer interrupt handler function to execute tasks at regular intervals.

6. **Main Application**: In your `main.c` file, you can call the necessary functions to set up and utilize the periodic timer as required for your application.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request.

## License

This project is licensed under the [MIT License](LICENSE).


*Note: This documentation provides an overview of the features and usage of the GPT_Edge_Time, PwmTimerMode, and Periodic_Timer components. For detailed implementation instructions and code examples, refer to the relevant header files and example code provided in this repository.*
