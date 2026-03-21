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

//	This file contains OpenGL and Qt includes. This file should be included first
//	and the order of includes is very important (especially on Linux).

#include <QtGL.h>

QGLWidget *globalGLWidget;                                  // the global GL widget
TRANSFORM_MATRICES globalTransforms;                        // the various viewport transforms
LIGHT_SOURCES globalLights;                                 // the lights
QtGLShader *globalShader[QTGLSHADER_COUNT];                 // the shaders

void QtGLInit(QGLWidget *widget)
{
    globalLights.lightCount = 0;                            // no lights
    globalShader[QTGLSHADER_FLAT] = new QtGLFlatShader(widget);
    globalShader[QTGLSHADER_TEXTURE] = new QtGLTextureShader(widget);
    globalShader[QTGLSHADER_ADS] = new QtGLADSShader(widget);
    globalShader[QTGLSHADER_ADSTEXTURE] = new QtGLADSTextureShader(widget);
}

void QtGLAddLight(const QVector4D& position, const QVector3D& ambient,
                        const QVector3D& diffuse, const QVector3D& specular)
{
    int count;
    if ((count = globalLights.lightCount) == QTGL_MAX_LIGHTS) {
        qDebug() << "Too many lights";
        return;
    }
    globalLights.ambient[count] = ambient;
    globalLights.diffuse[count] = diffuse;
    globalLights.specular[count] = specular;
    globalLights.position[count] = position;
    globalLights.lightCount++;
}

bool QtGLRayRectangleIntersection(QVector3D& intersection, const QVector3D& ray0, const QVector3D& ray1,
                const QVector3D& plane0, const QVector3D& plane1, const QVector3D& plane2, const QVector3D& plane3,
                bool checkInside)
{
    QVector3D normal;
    QVector3D test;
    float dist0, dist1;

    //  Compute normal to plane

    normal = QVector3D::crossProduct(plane1 - plane0, plane2 - plane0);
    normal.normalize();

    //  find distance from points defining line to plane

    dist0 = QVector3D::dotProduct(ray0 - plane0, normal);
    dist1 = QVector3D::dotProduct(ray1 - plane0, normal);

    if (qFuzzyCompare(dist0, dist1))
        return false;                                           // line and plane are parallel

    intersection = ray0 + (ray1 - ray0) * (-dist0 / (dist1 - dist0));

    if (!checkInside)
        return true;

    //  check if intersection point lies within the rectangle

    test = QVector3D::crossProduct(normal, plane1 - plane0);
    if (QVector3D::dotProduct(test, intersection - plane0) < 0.0f)
        return false;

    test = QVector3D::crossProduct(normal, plane2 - plane1);
    if (QVector3D::dotProduct(test, intersection - plane1) < 0.0f)
        return false;

    test = QVector3D::crossProduct(normal, plane3 - plane2);
    if (QVector3D::dotProduct(test, intersection - plane2) < 0.0f)
        return false;

    test = QVector3D::crossProduct(normal, plane0 - plane3);
    if (QVector3D::dotProduct(test, intersection - plane3) < 0.0f)
        return false;

    return true;
}
