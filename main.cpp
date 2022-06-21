/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "Stepper.h"


#define WAIT_TIME_MS 500 
DigitalOut led1(LED1);

int main()
{
    Stepper motor=Stepper(PA_5,PA_6,PA_7);

    motor.enableStepper();
    while (true)
    {
        led1 = !led1;
        thread_sleep_for(WAIT_TIME_MS);
    }
}
