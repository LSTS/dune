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

#include "VRIMUWidget.h"

//  Do simpler shading on ARMs

#if defined(__arm__) || defined(__ARMEL__)
#define VRIMUWIDGET_SHADER  QTGLSHADER_TEXTURE
#else
#define VRIMUWIDGET_SHADER  QTGLSHADER_ADSTEXTURE
#endif

VRIMUWidget::VRIMUWidget(QObject *parent, VRWIDGET_TYPE widgetType)
    : VRWidget(parent, widgetType)
{
}

VRIMUWidget::~VRIMUWidget()
{

}

void VRIMUWidget::VRWidgetInit()
{
    m_IMULength = m_width;
    m_IMURadius = m_IMULength / 10.0;

    m_IMUXCylinder.generate(m_IMURadius / 100.0, m_IMURadius, m_IMULength, 50, 1);
    m_IMUXCylinder.setShader(globalShader[VRIMUWIDGET_SHADER]);
    m_IMUXCylinder.setMaterial(QVector3D(1.0, 1.0, 1.0), QVector3D(0.8, 0.8, 0.8),
                        QVector3D(1.0, 1.0, 1.0), 3.0);
    m_IMUXCylinder.setTexture(QPixmap(":/Images/RedShade.png").toImage());

    m_IMUXTop.generate(0, m_IMURadius, 50, 1);
    m_IMUXTop.setShader(globalShader[VRIMUWIDGET_SHADER]);
    m_IMUXTop.setMaterial(QVector3D(1.0, 1.0, 1.0), QVector3D(0.8, 0.8, 0.8),
                        QVector3D(1.0, 1.0, 1.0), 3.0);
    m_IMUXTop.setTexture(QPixmap(":/Images/RedShade.png").toImage());

    m_IMUYCylinder.generate(m_IMURadius / 100.0, m_IMURadius, m_IMULength, 50, 1);
    m_IMUYCylinder.setShader(globalShader[VRIMUWIDGET_SHADER]);
    m_IMUYCylinder.setMaterial(QVector3D(1.0, 1.0, 1.0), QVector3D(0.8, 0.8, 0.8),
                        QVector3D(1.0, 1.0, 1.0), 3.0);
    m_IMUYCylinder.setTexture(QPixmap(":/Images/GreenShade.png").toImage());

    m_IMUYTop.generate(0, m_IMURadius, 50, 1);
    m_IMUYTop.setShader(globalShader[VRIMUWIDGET_SHADER]);
    m_IMUYTop.setMaterial(QVector3D(1.0, 1.0, 1.0), QVector3D(0.8, 0.8, 0.8),
                        QVector3D(1.0, 1.0, 1.0), 3.0);
    m_IMUYTop.setTexture(QPixmap(":/Images/GreenShade.png").toImage());

    m_IMUZCylinder.generate(m_IMURadius / 100.0, m_IMURadius, m_IMULength, 50, 1);
    m_IMUZCylinder.setShader(globalShader[VRIMUWIDGET_SHADER]);
    m_IMUZCylinder.setMaterial(QVector3D(1.0, 1.0, 1.0), QVector3D(0.8, 0.8, 0.8),
                        QVector3D(1.0, 1.0, 1.0), 3.0);
    m_IMUZCylinder.setTexture(QPixmap(":/Images/BlueShade.png").toImage());

    m_IMUZTop.generate(0, m_IMURadius, 50, 1);
    m_IMUZTop.setShader(globalShader[VRIMUWIDGET_SHADER]);
    m_IMUZTop.setMaterial(QVector3D(1.0, 1.0, 1.0), QVector3D(0.8, 0.8, 0.8),
                        QVector3D(1.0, 1.0, 1.0), 3.0);
    m_IMUZTop.setTexture(QPixmap(":/Images/BlueShade.png").toImage());

    m_cube.generate(m_IMULength / 2.0, m_IMULength / 2.0, m_IMULength / 2.0);
    m_cube.setShader(globalShader[QTGLSHADER_FLAT]);
    m_cube.setMaterial(QVector3D(1.0, 1.0, 1.0), QVector3D(0.8, 0.8, 0.8),
                        QVector3D(1.0, 1.0, 1.0), 6.0);
    m_cube.setColor(QColor(255, 255, 0));

    setRotationOrder(VRWidgetRotationXZY);                  // so that roll/pitch/yaw works
}

void VRIMUWidget::VRWidgetRender()
{
    startWidgetRender();

    //  do cube

    startComponentRender(0, 0, 0, 0, 0, 0);
    m_cube.draw();
    endComponentRender(m_IMUXCylinder.getBoundMinus(), m_IMUXCylinder.getBoundPlus());

    // do X IMU cylinder

    startComponentRender(0, 0, 0, 0, 90, 0);
    m_IMUXCylinder.draw();
    endComponentRender(m_IMUXCylinder.getBoundMinus(), m_IMUXCylinder.getBoundPlus());

    // do X IMU top

    startComponentRender(m_IMULength, 0, 0, 0, 90, 0);
    m_IMUXTop.draw();
    endComponentRender(m_IMUXTop.getBoundMinus(), m_IMUXTop.getBoundPlus());

    // do Y IMU cylinder

    startComponentRender(0, 0, 0, 0, 0, 0);
    m_IMUYCylinder.draw();
    endComponentRender(m_IMUYCylinder.getBoundMinus(), m_IMUYCylinder.getBoundPlus());

    // do Y IMU top

    startComponentRender(0, 0, m_IMULength, 0, 0, -90);
    m_IMUYTop.draw();
    endComponentRender(m_IMUYTop.getBoundMinus(), m_IMUYTop.getBoundPlus());

    // do Z IMU cylinder

    startComponentRender(0, 0, 0, 90, 0, 0);
    m_IMUZCylinder.draw();
    endComponentRender(m_IMUZCylinder.getBoundMinus(), m_IMUZCylinder.getBoundPlus());

    // do Z IMU top

    startComponentRender(0, -m_IMULength, 0, 90, 0, 0);
    m_IMUZTop.draw();
    endComponentRender(m_IMUZTop.getBoundMinus(), m_IMUZTop.getBoundPlus());

    endWidgetRender();
}

