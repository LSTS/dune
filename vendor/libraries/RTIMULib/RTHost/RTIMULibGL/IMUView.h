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

#ifndef IMUVIEW_H
#define IMUVIEW_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QtGL.h>

#include "VRIMUWidget.h"
#include "RTMath.h"

#define IMUVIEW_DEPTH                   -15						// normal IMU position
#define	IMUVIEW_RESTART_INTERVAL		1000					// length of time in restart interval

class VRIMUWidget;

class IMUView : public QGLWidget, protected QGLFunctions
{
	Q_OBJECT

public:
    IMUView(QWidget *parent = NULL);
    void updateIMU(RTVector3& pose);

protected:
	void initializeGL();
	void resizeGL(int width, int height);
	void paintGL();
	void closeEvent(QCloseEvent *);

private:
	void setupViewport(int width, int height);

    VRIMUWidget *m_IMUWidget;

    QMutex m_lock;
};

#endif // IMUVIEW_H
