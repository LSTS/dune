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

#include "QtGL.h"

QtGLPlaneComponent::QtGLPlaneComponent()
{
}

QtGLPlaneComponent::~QtGLPlaneComponent()
{

}

void QtGLPlaneComponent::generate(float width, float height)
{
    static const float coords[4][2] = {{+0.5f, +0.5f}, {-0.5f, +0.5f}, {-0.5f, -0.5f}, {+0.5f, -0.5f}};

    reset();

    for (int vert = 0; vert < 4; vert++) {
        addTextureCoord(QVector2D(vert == 0 || vert == 3, vert == 0 || vert == 1));
        addVertex(QVector3D(width * coords[vert][0], height * coords[vert][1], 0));
   }
}

void QtGLPlaneComponent::draw()
{
    QtGLComponent::draw(GL_TRIANGLE_FAN);
}
