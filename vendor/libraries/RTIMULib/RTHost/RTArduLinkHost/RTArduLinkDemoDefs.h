///////////////////////////////////////////////////////////
//
//  This file is part of RTArduLink
//
//  Copyright (c) 2014 richards-tech
//
//  Permission is hereby granted, free of charge,
//  to any person obtaining a copy of
//  this software and associated documentation files
//  (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute,
//  sublicense, and/or sell copies of the Software, and
//  to permit persons to whom the Software is furnished
//  to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions
//  of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF
//  ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
//  TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
//  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

#ifndef RTARDULINKDEMODEFS_H_
#define RTARDULINKDEMODEFS_H_

#include "RTArduLinkUtils.h"

#define SERVO_COUNT    2                                   // 2 servo channels
#define PWM_COUNT      3                                   // 3 pwm channels
#define INPUT_COUNT    2                                   // 2 inputs
#define OUTPUT_COUNT   2                                   // 2 outputs

#define SERVO_MIN_VALUE   1000                             // min servo value
#define SERVO_CTR_VALUE   1500                             // center servo value
#define SERVO_MAX_VALUE   2000                             // max servo value

#define PWM_MIN_VALUE     0                                // min pwm value
#define PWM_CTR_VALUE     128                              // center pwm value
#define PWM_MAX_VALUE     255                              // max pwm value

//    The command structure is sent from the host to the subsystem

typedef struct
{
    RTARDULINK_UC2 servoPos[SERVO_COUNT];                  // the servo positions
    unsigned char pwmValue[PWM_COUNT];                     // PWM values
    unsigned char outputValue[OUTPUT_COUNT];               // the output pin values (true=high, false=low)
} RTARDULINKDEMO_COMMAND;

//    the response structure is sent from the subsystem to the host

typedef struct
{
    unsigned char inputValue[INPUT_COUNT];                // the input pin values (true=high, false=low)
} RTARDULINKDEMO_RESPONSE;


#endif /* RTARDULINKDEMODEFS_H_ */
