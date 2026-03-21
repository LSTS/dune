////////////////////////////////////////////////////////////////////////////
//
//  This file is part of RTIMULib
//
//  Copyright (c) 2014, richards-tech
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
//  Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
//  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
//  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


#ifndef RTARDULINKIMUDEFS_H_
#define RTARDULINKIMUDEFS_H_

#include "RTArduLinkDefs.h"

//  Defines for the format of the IMU record passed between the Arduino and the
//  host system. Both Arduino and host system should use identical copies of this file.

//  RTARDULINKIMU_MESSAGE is used to send messages to the host. 
//  Note: the gyro bias and mag cal state come back in the messageParam field

typedef struct
{
    RTARDULINK_UC4 timestamp;                               // timestamp in mS
    float gyro[3];                                          // the de-biased gyro data in rads/sec
    float accel[3];                                         // raw accel data in gs
    float mag[3];                                           // magnetometer data in uT
} RTARDULINKIMU_MESSAGE;


//  Message type

#define RTARDULINK_MESSAGE_IMU  (RTARDULINK_MESSAGE_CUSTOM + 1)

//  Defines for the messageParam field

#define RTARDULINKIMU_STATE_GYRO_BIAS_VALID    1            // bit 0 set if bias is valid
#define RTARDULINKIMU_STATE_MAG_CAL_VALID      2            // bit 1 set if mag calibration is valid

#endif /* RTARDULINKIMUDEFS_H_ */
