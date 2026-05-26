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

#ifndef QTGL_H
#define QTGL_H

#include <QtOpenGL>

#define	QTGL_PI                 3.1415926535
#define	QTGL_DEGREE_TO_RAD      (QTGL_PI / 180.0)
#define	QTGL_RAD_TO_DEGREE      (180.0 / QTGL_PI)

#define	QTGL_MAX_LIGHTS         4

typedef struct
{
    QMatrix4x4 modelViewMatrix;                             // the model view matrix
    QMatrix4x4 projectionMatrix;                            // the projection matrix
    QMatrix4x4 modelViewProjectionMatrix;                   // the model view projection matrix
    QMatrix3x3 normalMatrix;                                // the normal matrix
    float viewportAspect;                                   // the viewport aspect ratio
    float viewportFieldOfView;                              // angular field of view in x direction
    float tanViewportFOV;                                   // tan of the field of view
    float width;                                            // viewport width
    float height;                                           // viewport height
    float halfWidth;                                        // half viewport width
    float halfHeight;                                       // half viewport height
    float nearPlane;                                        // where the near plane is
    float farPlane;                                         // viewport distance
} TRANSFORM_MATRICES;

typedef struct
{
    int lightCount;
    QVector4D position[QTGL_MAX_LIGHTS];
    QVector3D ambient[QTGL_MAX_LIGHTS];
    QVector3D diffuse[QTGL_MAX_LIGHTS];
    QVector3D specular[QTGL_MAX_LIGHTS];
} LIGHT_SOURCES;

typedef struct
{
    QVector3D ambientReflectivity;
    QVector3D diffuseReflectivity;
    QVector3D specularReflectivity;
    float shininess;
} COMPONENT_MATERIAL;


#include "QtGLShader.h"
#include "QtGLTextureShader.h"
#include "QtGLFlatShader.h"
#include "QtGLADSShader.h"
#include "QtGLADSTextureShader.h"

#include "QtGLComponent.h"
#include "QtGLPlaneComponent.h"
#include "QtGLCylinderComponent.h"
#include "QtGLDiskComponent.h"
#include "QtGLWireCubeComponent.h"
#include "QtGLSphereComponent.h"


extern QGLWidget *globalGLWidget;                           // the global GL widget
extern TRANSFORM_MATRICES globalTransforms;                 // the various viewport transforms
extern LIGHT_SOURCES globalLights;                          // the lights
extern QtGLShader *globalShader[QTGLSHADER_COUNT];          // the shaders

void QtGLInit(QGLWidget *widget);

void QtGLAddLight(const QVector4D& position, const QVector3D& ambient,
                        const QVector3D& diffuse, const QVector3D& specular);

bool QtGLRayRectangleIntersection(QVector3D& intersection, const QVector3D& ray0, const QVector3D& ray1,
                const QVector3D& plane0, const QVector3D& plane1, const QVector3D& plane2, const QVector3D& plane3,
                bool checkInside);


#endif // QTGL_H
