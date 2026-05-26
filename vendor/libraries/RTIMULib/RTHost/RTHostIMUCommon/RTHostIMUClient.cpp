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


#include "RTHostIMUClient.h"
#include "RTIMUSettings.h"

#include "RTArduLinkUtils.h"

#include "qdebug.h"
#include <qsettings.h>

BaudRateType speedMap[]= {BAUD9600, BAUD19200, BAUD38400, BAUD57600, BAUD115200};
const char *speedString[] = {"9600", "19200", "38400", "57600", "115200"};

RTHostIMUClient::RTHostIMUClient(RTIMUSettings *settings)
    : RTArduLinkHost(NULL), RTIMU(settings)
{
    m_settings->m_gyroBiasValid = false;
}

RTHostIMUClient::~RTHostIMUClient()
{
}

//----------------------------------------------------------
//
//  RTIMU overrides

bool RTHostIMUClient::IMUInit()
{
    int speed;
    QString portString;

    setCalibrationData();

    QSettings *settings = new QSettings("RTHostIMU.ini", QSettings::IniFormat);

    portString = settings->value(RTARDULINKHOST_SETTINGS_PORT).toString();

    speed = settings->value(RTARDULINKHOST_SETTINGS_SPEED).toInt();
    if ((speed >= 0) && (speed <= 4))
        speed = 4;

    addPort(0, portString, speedMap[speed]);

    begin();
    return true;
}

bool RTHostIMUClient::IMURead()
{
    QMutexLocker lock(&m_lock);

    if (m_messageQ.empty())
        return false;

    RTARDULINKIMU_MESSAGE message = m_messageQ.dequeue();

    // put data in correct places

    m_imuData.gyro.setX(message.gyro[0]);
    m_imuData.gyro.setY(message.gyro[1]);
    m_imuData.gyro.setZ(message.gyro[2]);
    m_imuData.accel.setX(message.accel[0]);
    m_imuData.accel.setY(message.accel[1]);
    m_imuData.accel.setZ(message.accel[2]);
    m_imuData.compass.setX(message.mag[0]);
    m_imuData.compass.setY(message.mag[1]);
    m_imuData.compass.setZ(message.mag[2]);

    //  The Arduino timestamp is unfortunately in mS so it needs to be multiplied by 1000
    //  as RTIMULib uses timestamps in uS.

    m_imuData.timestamp = RTArduLinkConvertUC4ToLong(message.timestamp) * 1000;

    calibrateAverageCompass();
    calibrateAccel();

    updateFusion();

    return true;
}

int RTHostIMUClient::IMUGetPollInterval()
{
    return 2;
}


//----------------------------------------------------------
//
//  RTArduLinkHost overrides


//  This functions processes response from the subsystem. It emits a series of signals
//  to update the input states.

void RTHostIMUClient::processCustomMessage(RTARDULINKHOST_PORT *portInfo, unsigned int messageAddress,
                        unsigned char messageType, unsigned char messageParam, unsigned char *data, int dataLength)
{
    int port;

    port = portInfo->index;

    if (messageType != RTARDULINK_MESSAGE_IMU) {
        qDebug() << QString("Received unexpected message type %1 from port %2 address %3")
            .arg(messageType).arg(port).arg(messageAddress);
        return;
    }
    if (dataLength != sizeof(RTARDULINKIMU_MESSAGE)) {
        qDebug() << QString("Received message with incorrect length %1 (should have been %2) from port %3 address %4")
            .arg(dataLength).arg(sizeof(RTARDULINKIMU_MESSAGE)).arg(port).arg(messageAddress);
        return;
    }

    QMutexLocker lock(&m_lock);

    m_messageQ.enqueue((*(RTARDULINKIMU_MESSAGE *)data));
    m_settings->m_gyroBiasValid = messageParam & RTARDULINKIMU_STATE_GYRO_BIAS_VALID;

    // check to see if too many messages and delete oldest if necessary

    if (m_messageQ.count() > 5)
        m_messageQ.dequeue();
}
