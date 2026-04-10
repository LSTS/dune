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

QtGLSphereComponent::QtGLSphereComponent()
{

}

QtGLSphereComponent::~QtGLSphereComponent()
{

}

void QtGLSphereComponent::generate(GLfloat radius, GLint numSlices, GLint numStacks)
{
    GLfloat drho = (GLfloat)(3.141592653589) / (GLfloat) numStacks;
    GLfloat dtheta = 2.0f * (GLfloat)(3.141592653589) / (GLfloat) numSlices;
	GLfloat ds = 1.0f / (GLfloat) numSlices;
	GLfloat dt = 1.0f / (GLfloat) numStacks;
	GLfloat t = 1.0f;	
	GLfloat s = 0.0f;
    GLint i, j;     // Looping variables

	GLfloat stepSizeSlice = (3.1415926536f * 2.0f) / float(numSlices);

	QVector3D vertex[4];
	QVector3D normal[4];
	QVector2D texture[4];

    reset();

	int vertA = 0;
	int vertB = 1;
	int vertC = 2;
	int vertD = 3;

	for (i = 0; i < numStacks; i++) {
		GLfloat rho = (GLfloat)i * drho;
		GLfloat srho = (GLfloat)(sin(rho));
		GLfloat crho = (GLfloat)(cos(rho));
		GLfloat srhodrho = (GLfloat)(sin(rho + drho));
		GLfloat crhodrho = (GLfloat)(cos(rho + drho));
		
        // Many sources of OpenGL sphere drawing code uses a triangle fan
        // for the caps of the sphere. This however introduces texturing 
        // artifacts at the poles on some OpenGL implementations
        s = 0.0f;

        for ( j = 0; j < numSlices; j++) {
			GLfloat theta = (j == numSlices) ? 0.0f : j * dtheta;
			GLfloat stheta = (GLfloat)(-sin(theta));
			GLfloat ctheta = (GLfloat)(cos(theta));
			
			GLfloat x = stheta * srho;
			GLfloat y = ctheta * srho;
			GLfloat z = crho;
        
            texture[vertA].setX(s);
            texture[vertA].setY(t);
            normal[vertA].setX(x);
            normal[vertA].setY(y);
            normal[vertA].setZ(z);
            vertex[vertA].setX(x * radius);
            vertex[vertA].setY(y * radius);
            vertex[vertA].setZ(z * radius);

            x = stheta * srhodrho;
			y = ctheta * srhodrho;
			z = crhodrho;

            texture[vertB].setX(s);
            texture[vertB].setY(t - dt);
            normal[vertB].setX(x);
            normal[vertB].setY(y);
            normal[vertB].setZ(z);
            vertex[vertB].setX(x * radius);
            vertex[vertB].setY(y * radius);
            vertex[vertB].setZ(z * radius);

			theta = ((j+1) == numSlices) ? 0.0f : (j+1) * dtheta;
			stheta = (GLfloat)(-sin(theta));
			ctheta = (GLfloat)(cos(theta));
			
			x = stheta * srho;
			y = ctheta * srho;
			z = crho;
        
            s += ds;

            texture[vertC].setX(s);
            texture[vertC].setY(t);
            normal[vertC].setX(x);
            normal[vertC].setY(y);
            normal[vertC].setZ(z);
            vertex[vertC].setX(x * radius);
            vertex[vertC].setY(y * radius);
            vertex[vertC].setZ(z * radius);
			
            x = stheta * srhodrho;
			y = ctheta * srhodrho;
			z = crhodrho;

            texture[vertD].setX(s);
            texture[vertD].setY(t - dt);
            normal[vertD].setX(x);
            normal[vertD].setY(y);
            normal[vertD].setZ(z);
            vertex[vertD].setX(x * radius);
            vertex[vertD].setY(y * radius);
            vertex[vertD].setZ(z * radius);

			addTriangle(vertex, normal, texture);			
			
			// Rearrange for next triangle

            vertex[vertA] = vertex[vertB];
            normal[vertA] = normal[vertB];
            texture[vertA] = texture[vertB];

            vertex[vertB] = vertex[vertD];
            normal[vertB] = normal[vertD];
            texture[vertB] = texture[vertD];

			addTriangle(vertex, normal, texture);			
		}
        t -= dt;
    }

	useIndexBuffer(true);
	useNormalBuffer(true);
}

void QtGLSphereComponent::draw()
{
	QtGLComponent::draw(GL_TRIANGLES);
}
