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


#include "RTHostIMUThread.h"
#include "RTHostIMUClient.h"

#include <QDebug>

RTHostIMUThread::RTHostIMUThread() : QObject()
{
    m_imu = NULL;
    m_settings = new RTIMUSettings();                       // just use default name (RTIMULib.ini) for settings file
    m_timer = -1;
}

RTHostIMUThread::~RTHostIMUThread()
{

}

void RTHostIMUThread::newIMU()
{
    m_lock.lock();

    if (m_imu != NULL) {
        delete m_imu;
        m_imu = NULL;
    }

    if (m_timer != -1) {
        killTimer(m_timer);
        m_timer = -1;
    }

    m_imu = new RTHostIMUClient(m_settings);
    m_lock.unlock();

    emit IMURunning();

    //  set up IMU

    m_imu->IMUInit();

    m_timer = startTimer(m_imu->IMUGetPollInterval());
}

void RTHostIMUThread::initThread()
{
    //  create IMU. There's a special function call for this
    //  as it makes sure that the required one is created as specified in the settings.

    m_imu = new RTHostIMUClient(m_settings);
    emit IMURunning();

    //  set up IMU

    m_imu->IMUInit();

    //  poll at the rate suggested by the IMU

    m_timer = startTimer(m_imu->IMUGetPollInterval());
}

void RTHostIMUThread::finishThread()
{
    if (m_timer != -1)
        killTimer(m_timer);

    m_timer = -1;

    if (m_imu != NULL)
        delete m_imu;

    m_imu = NULL;

    delete m_settings;
}

void RTHostIMUThread::timerEvent(QTimerEvent * /* event */)
{
    //  check for valid IMU

    if (m_imu == NULL)
        return;

    //  loop here to clear all samples just in case things aren't keeping up

    while (m_imu->IMURead()) {
        emit newIMUData(m_imu->getIMUData());
    }
}

//----------------------------------------------------------
//
//  The following is some Qt threading stuff

void RTHostIMUThread::resumeThread()
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

