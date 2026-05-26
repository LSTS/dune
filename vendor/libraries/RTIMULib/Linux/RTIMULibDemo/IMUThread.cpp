////////////////////////////////////////////////////////////////////////////
//
//  This file is part of RTIMULib
//
//  Copyright (c) 2014-2015, richards-tech, LLC
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

#include "IMUThread.h"
#include "IMUDrivers/RTPressure.h"
#include "IMUDrivers/RTHumidity.h"
#include <QDebug>

IMUThread::IMUThread() : QObject()
{
    m_imu = NULL;
    m_pressure = NULL;
    m_humidity  = NULL;
    m_calibrationMode = false;
    m_settings = new RTIMUSettings();                       // just use default name (RTIMULib.ini) for settings file
    m_timer = -1;
}

IMUThread::~IMUThread()
{

}

void IMUThread::newIMU()
{
    if (m_imu != NULL) {
        delete m_imu;
        m_imu = NULL;
    }

    if (m_timer != -1) {
        killTimer(m_timer);
        m_timer = -1;
    }

    m_imu = RTIMU::createIMU(m_settings);

    if (m_imu == NULL)
        return;

    //  set up IMU

    m_imu->IMUInit();

    m_timer = startTimer(m_imu->IMUGetPollInterval());
}

void IMUThread::newPressure()
{
    if (m_pressure != NULL) {
        delete m_pressure;
        m_pressure = NULL;
    }

    m_pressure = RTPressure::createPressure(m_settings);

    if (m_pressure == NULL)
        return;

    //  set up pressure sensor

    m_pressure->pressureInit();
}

void IMUThread::newHumidity()
{
    if (m_humidity != NULL) {
        delete m_humidity;
        m_humidity = NULL;
    }

    m_humidity = RTHumidity::createHumidity(m_settings);

    if (m_humidity == NULL)
        return;

    //  set up humidity sensor

    m_humidity->humidityInit();
}

void IMUThread::initThread()
{
    //  create IMU. There's a special function call for this
    //  as it makes sure that the required one is created as specified in the settings.

    m_imu = RTIMU::createIMU(m_settings);

    if (m_imu == NULL) {
        qDebug() << "No IMU found.";
        return;
    }

    //  set up IMU

    m_imu->IMUInit();

    //  create pressure sensor. There's a special function call for this
    //  as it makes sure that the required one is created as specified in the settings.

    m_pressure = RTPressure::createPressure(m_settings);

    newPressure();
    newHumidity();

    //  poll at the rate suggested bu the IMU

    m_timer = startTimer(m_imu->IMUGetPollInterval());

    //  up the priority in case it's helpful

    m_thread->setPriority(QThread::TimeCriticalPriority);
}

void IMUThread::finishThread()
{
    if (m_timer != -1)
        killTimer(m_timer);

    m_timer = -1;

    if (m_imu != NULL)
        delete m_imu;

    m_imu = NULL;

    if (m_pressure != NULL)
        delete m_pressure;

    m_pressure = NULL;

    if (m_humidity != NULL)
        delete m_humidity;

    m_humidity = NULL;

    delete m_settings;
}

void IMUThread::timerEvent(QTimerEvent * /* event */)
{
    //  check for valid IMU

    if (m_imu == NULL)
        return;

    if (m_imu->IMUType() == RTIMU_TYPE_NULL)
        return;

    //  loop here to clear all samples just in case things aren't keeping up

    while (m_imu->IMURead()) {
        if (m_calibrationMode) {
            emit newCalData(m_imu->getCompass());
        } else {
            RTIMU_DATA data = m_imu->getIMUData();
            if (m_pressure != NULL)
                m_pressure->pressureRead(data);
            if (m_humidity != NULL)
                m_humidity->humidityRead(data);

            emit newIMUData(data);
        }
    }
}

//----------------------------------------------------------
//
//  The following is some Qt threading stuff

void IMUThread::resumeThread()
{
    m_thread = new QThread();
    moveToThread(m_thread);
    connect(m_thread, SIGNAL(started()), this, SLOT(internalRunLoop()));
    connect(this, SIGNAL(internalEndThread()), this, SLOT(cleanup()));
    connect(this, SIGNAL(internalKillThread()), m_thread, SLOT(quit()));
    connect(m_thread, SIGNAL(finished()), m_thread, SLOT(deleteLater()));
    connect(m_thread, SIGNAL(finished()), this, SLOT(deleteLater()));
    m_thread->start();
}

