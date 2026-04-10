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

#ifndef _IMUTHREAD_H
#define	_IMUTHREAD_H

#include <QThread>

#include "RTIMULib.h"

class RTPressure;
class RTHumidity;

class IMUThread : public QObject
{
    Q_OBJECT

public:
    IMUThread();
    virtual ~IMUThread();

    //  resumeThread() is called when init is complete

    void resumeThread();

    //  exitThread is called to terminate and delete the thread

    void exitThread() { emit internalEndThread(); }

    RTIMUSettings *getSettings() { return m_settings; }
    void setCalibrationMode(bool enable);
    void newCompassCalData(const RTVector3& compassCalMin, const RTVector3& compassCalMax);

    RTIMU *getIMU() { return m_imu; }
    RTPressure *getPressure() { return m_pressure; }
    RTHumidity *getHumidity() { return m_humidity; }

public slots:
    void internalRunLoop() { initThread(); emit running();}
    void cleanup() {finishThread(); emit internalKillThread(); }
    void newIMU();
    void newPressure();
    void newHumidity();

signals:
    void running();											// emitted when everything set up and thread active
    void internalEndThread();								// this to end thread
    void internalKillThread();								// tells the QThread to quit

    void newCalData(const RTVector3& compass);              // this is uncalibrated compass data emitted in cal mode
    void newIMUData(const RTIMU_DATA& data);                // this contains the latest data form the IMU

protected:
    void initThread();
    void finishThread();
    void timerEvent(QTimerEvent *event);

private:
    int m_timer;
    RTIMUSettings *m_settings;

    RTIMU *m_imu;
    RTPressure *m_pressure;
    RTHumidity *m_humidity;
    bool m_calibrationMode;

    QThread *m_thread;
};

#endif // _IMUTHREAD_H
