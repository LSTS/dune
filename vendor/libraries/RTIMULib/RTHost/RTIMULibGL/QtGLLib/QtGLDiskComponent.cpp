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

//	Based on code from the OpenGL SuperBible:

/*
 *  OpenGL SuperBible
 *
Copyright (c) 2007-2009, Richard S. Wright Jr.
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

Redistributions of source code must retain the above copyright notice, this list
of conditions and the following disclaimer.

Redistributions in binary form must reproduce the above copyright notice, this list
of conditions and the following disclaimer in the documentation and/or other
materials provided with the distribution.

Neither the name of Richard S. Wright Jr. nor the names of other contributors may be used
to endorse or promote products derived from this software without specific prior
written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. */

#include "QtGL.h"

QtGLDiskComponent::QtGLDiskComponent()
{

}

QtGLDiskComponent::~QtGLDiskComponent()
{

}

void QtGLDiskComponent::generate(GLfloat innerRadius, GLfloat outerRadius, GLint numSlices, GLint numStacks)
{
    // How much to step out each stack
    GLfloat stepSizeRadial = outerRadius - innerRadius;
    if(stepSizeRadial < 0.0f)                               // Dum dum...
        stepSizeRadial *= -1.0f;

    stepSizeRadial /= float(numStacks);

    GLfloat stepSizeSlice = (3.1415926536f * 2.0f) / float(numSlices);

    reset();

    QVector3D vertex[4];
    QVector3D normal[4];
    QVector2D texture[4];

    float radialScale = 1.0f / outerRadius;

    for(GLint i = 0; i < numStacks; i++) {
        float theta;
        float thetaNext;
        for (GLint j = 0; j < numSlices; j++) {
            float inner = innerRadius + (float(i)) * stepSizeRadial;
            float outer = innerRadius + (float(i+1)) * stepSizeRadial;

            theta = stepSizeSlice * float(j);
            if(j == (numSlices - 1))
                thetaNext = 0.0f;
            else
                thetaNext = stepSizeSlice * (float(j+1));

            // Inner First
            vertex[0].setX(cos(theta) * inner);             // X
            vertex[0].setY(sin(theta) * inner);             // Y
            vertex[0].setZ(0.0f);                           // Z

            normal[0].setX(0.0f);                           // Surface Normal, same for everybody
            normal[0].setY(0.0f);
            normal[0].setZ(1.0f);

            texture[0].setX(((vertex[0].x() * radialScale) + 1.0f) * 0.5f);
            texture[0].setY(((vertex[0].y() * radialScale) + 1.0f) * 0.5f);

            // Outer First
            vertex[1].setX(cos(theta) * outer);             // X
            vertex[1].setY(sin(theta) * outer);             // Y
            vertex[1].setZ(0.0f);                           // Z

            normal[1].setX(0.0f);                           // Surface Normal, same for everybody
            normal[1].setY(0.0f);
            normal[1].setZ(1.0f);

            texture[1].setX(((vertex[1].x() * radialScale) + 1.0f) * 0.5f);
            texture[1].setY(((vertex[1].y() * radialScale) + 1.0f) * 0.5f);

            // Inner Second
            vertex[2].setX(cos(thetaNext) * inner);         // X
            vertex[2].setY(sin(thetaNext) * inner);         // Y
            vertex[2].setZ(0.0f);                           // Z

            normal[2].setX(0.0f);                           // Surface Normal, same for everybody
            normal[2].setY(0.0f);
            normal[2].setZ(1.0f);

            texture[2].setX(((vertex[2].x() * radialScale) + 1.0f) * 0.5f);
            texture[2].setY(((vertex[2].y() * radialScale) + 1.0f) * 0.5f);

            // Outer Second
            vertex[3].setX(cos(thetaNext) * outer);         // X
            vertex[3].setY(sin(thetaNext) * outer);         // Y
            vertex[3].setZ(0.0f);                           // Z

            normal[3].setX(0.0f);                       // Surface Normal, same for everybody
            normal[3].setY(0.0f);
            normal[3].setZ(1.0f);

            texture[3].setX(((vertex[3].x() * radialScale) + 1.0f) * 0.5f);
            texture[3].setY(((vertex[3].y() * radialScale) + 1.0f) * 0.5f);

            addTriangle(vertex, normal, texture);

            // Rearrange for next triangle

            vertex[0] = vertex[1];
            normal[0] = normal[1];
            texture[0] = texture[1];

            vertex[1] = vertex[3];
            normal[1] = normal[3];
            texture[1] = texture[3];

            addTriangle(vertex, normal, texture);
        }
    }
    useIndexBuffer(true);
    useNormalBuffer(true);
}

void QtGLDiskComponent::draw()
{
    QtGLComponent::draw(GL_TRIANGLES);
}
