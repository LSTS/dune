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

#ifndef VRIMUWIDGET_H
#define VRIMUWIDGET_H

#include "VRWidget.h"

class VRIMUWidget : public VRWidget
{
    Q_OBJECT

public:
    VRIMUWidget(QObject *parent, VRWIDGET_TYPE = VRWIDGET_IMU);
    ~VRIMUWidget();

    virtual void VRWidgetInit();
    virtual void VRWidgetRender();

private:
    QtGLCylinderComponent m_IMUXCylinder;
    QtGLCylinderComponent m_IMUYCylinder;
    QtGLCylinderComponent m_IMUZCylinder;
    QtGLDiskComponent m_IMUXTop;
    QtGLDiskComponent m_IMUYTop;
    QtGLDiskComponent m_IMUZTop;

    QtGLWireCubeComponent m_cube;

    qreal m_IMURadius;
    qreal m_IMULength;
};

#endif // VRIMUWIDGET_H
