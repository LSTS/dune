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


#ifndef _RTHOSTIMUTHREAD_H
#define	_RTHOSTIMUTHREAD_H

#include <QThread>
#include <qmutex.h>

#include "RTIMULib.h"

class RTHostIMUThread : public QObject
{
    Q_OBJECT

public:
    RTHostIMUThread();
    virtual ~RTHostIMUThread();

    //  resumeThread() is called when init is complete

    void resumeThread();

    //  exitThread is called to terminate and delete the thread

    void exitThread() { emit internalEndThread(); }

    RTIMUSettings *getSettings() { return m_settings; }
    RTIMU *getIMU() { QMutexLocker lock(&m_lock); return m_imu; }

public slots:
    void internalRunLoop() { initThread(); emit running();}
    void cleanup() {finishThread(); emit internalKillThread(); }
    void newIMU();

signals:
    void running();											// emitted when everything set up and thread active
    void internalEndThread();								// this to end thread
    void internalKillThread();								// tells the QThread to quit

    void IMURunning();                                      // emitted when a new IMU is running
    void newIMUData(const RTIMU_DATA& data);                // this contains the latest data from the IMU

protected:
    void initThread();
    void finishThread();
    void timerEvent(QTimerEvent *event);

private:
    int m_timer;
    RTIMUSettings *m_settings;

    RTIMU *m_imu;

    QThread *m_thread;

    QMutex m_lock;
};

#endif // _RTHOSTIMUTHREAD_H
