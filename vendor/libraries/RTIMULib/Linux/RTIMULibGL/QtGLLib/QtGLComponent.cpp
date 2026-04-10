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

QtGLComponent::QtGLComponent()
{
    m_shader = NULL;
    m_texture = -1;
    m_indexBuffer = NULL;
    m_normalBuffer = NULL;
    m_useIndexBuffer = false;
    m_useNormalBuffer = false;
}

QtGLComponent::~QtGLComponent()
{
    reset();
}

void QtGLComponent::reset()
{
    if (m_texture != -1)
        globalGLWidget->deleteTexture(m_texture);

    if (m_indexBuffer != NULL)
        delete m_indexBuffer;
    m_indexBuffer = NULL;
    if (m_normalBuffer != NULL)
        delete m_normalBuffer;
    m_normalBuffer = NULL;
    m_vertices.clear();
    m_normals.clear();
    m_textureCoords.clear();
    m_indices.clear();
    m_boundMinus = QVector3D(10000.0f, 10000.0f, 10000.0f);
    m_boundPlus = QVector3D(-10000.0f, -10000.0f, -10000.0f);
}

void QtGLComponent::addVertex(const QVector3D& vertex)
{
    m_vertices.append(vertex);
    updateBoundingBox(vertex);
}

void QtGLComponent::addNormal(const QVector3D& normal)
{
    m_normals.append(normal);
}

void QtGLComponent::addTextureCoord(const QVector2D& textureCoord)
{
    m_textureCoords.append(textureCoord);
}

void QtGLComponent::addIndex(GLushort index)
{
    m_indices.append(index);
}


void QtGLComponent::setShader(QtGLShader *shader)
{
    m_shader = shader;
}

void QtGLComponent::setTexture(GLuint texture)
{
    if (m_texture != -1)
        globalGLWidget->deleteTexture(m_texture);
    m_texture = texture;
}

void QtGLComponent::setTexture(const QImage& image)
{
    int width, height;
    int newWidth, newHeight;

    width = image.width();
    height = image.height();

    newWidth = nearestPOT(width);                           // find nearest power of two
    newHeight = nearestPOT(height);

    if ((width == newWidth) && (height = newHeight)) {
        setTexture(globalGLWidget->bindTexture(image));
    } else {
        QImage newImage = image.scaled(newWidth, newHeight, Qt::IgnoreAspectRatio);
        setTexture(globalGLWidget->bindTexture(newImage));
        qDebug() << "New size " << newImage.width() << " " << newImage.height();
    }
}

void QtGLComponent::setMaterial(const COMPONENT_MATERIAL& material)
{
    m_material = material;
}

void QtGLComponent::setMaterial(const QVector3D& ambient, const QVector3D& diffuse, const QVector3D& specular,
            float shininess)
{
    m_material.ambientReflectivity = ambient;
    m_material.diffuseReflectivity = diffuse;
    m_material.specularReflectivity = specular;
    m_material.shininess = shininess;
}


int QtGLComponent::nearestPOT(int val)
{
    if (val <= 3)
        return 2;
    if (val <= 6)
        return 4;
    if (val <= 12)
        return 8;
    if (val <= 24)
        return 16;
    if (val <= 48)
        return 32;
    if (val <= 96)
        return 64;
    if (val <= 192)
        return 128;
    if (val <= 384)
        return 256;
    if (val <= 768)
        return 512;
    if (val <= 1536)
        return 1024;
    return 2048;
}

void QtGLComponent::useIndexBuffer(bool use)
{
    if (m_indexBuffer != NULL)
        delete m_indexBuffer;
    m_indexBuffer = NULL;
    m_useIndexBuffer = use;
    if (!use)
        return;
    m_indexBuffer = new QGLBuffer(QGLBuffer::IndexBuffer);
    m_indexBuffer->create();
    m_indexBuffer->bind();
    m_indexBuffer->setUsagePattern(QGLBuffer::StaticDraw);
    m_indexBuffer->allocate(m_indices.constData(), m_indices.size() * sizeof(GLushort));
    m_indexBuffer->release();
}

void QtGLComponent::useNormalBuffer(bool use)
{
    if (m_normalBuffer != NULL)
        delete m_normalBuffer;
    m_normalBuffer = NULL;
    m_useNormalBuffer = use;
    if (!use)
        return;

    m_normalBuffer = new QGLBuffer(QGLBuffer::VertexBuffer);
    m_normalBuffer->create();
    m_normalBuffer->bind();
    m_normalBuffer->setUsagePattern(QGLBuffer::StaticDraw);
    m_normalBuffer->allocate(m_normals.constData(), m_normals.size() * sizeof(QVector3D));
    m_normalBuffer->release();
}


void QtGLComponent::addTriangle(QVector3D *verts, QVector3D *norms, QVector2D *texCoords)
{
    // Search for match - triangle consists of three verts
    for(GLuint iVertex = 0; iVertex < 3; iVertex++){
        GLuint iMatch = 0;

        for(iMatch = 0; iMatch < (GLuint)m_vertices.size(); iMatch++) {
            if (!qFuzzyCompare(m_vertices.at(iMatch), verts[iVertex]))
                continue;
            if (!qFuzzyCompare(m_normals.at(iMatch), norms[iVertex]))
                continue;

            if (!qFuzzyCompare(m_textureCoords.at(iMatch), texCoords[iVertex]))
                continue;

            // Then add the index only
            addIndex(iMatch);
                break;
        }

        // No match for this vertex, add to end of list
        if((int)iMatch == m_vertices.size()) {
            addIndex(iMatch);
            addVertex(verts[iVertex]);
            addNormal(norms[iVertex]);
            addTextureCoord(texCoords[iVertex]);
        }
    }
}

void QtGLComponent::setColor(const QColor& color)
{
    m_color = color;
}

void QtGLComponent::draw(GLenum drawMode)
{
    if (m_shader == NULL)
        return;

    switch (m_shader->getType()) {
        case QTGLSHADER_FLAT:
            m_shader->load(m_vertices.constData(), m_color);
            break;

        case QTGLSHADER_TEXTURE:
            m_shader->load(m_vertices.constData(), m_textureCoords.constData());
            break;

        case QTGLSHADER_ADS:
            m_shader->load(m_vertices.constData(), m_normals.constData(), m_material);
            break;

        case QTGLSHADER_ADSTEXTURE:
            m_shader->load(m_vertices.constData(), m_normals.constData(), m_textureCoords.constData(), m_material);
            break;

        default:
            qDebug() << "Invalidate shader type " << m_shader->getType();
            return;

    }
    if (m_texture != -1)
        glBindTexture(GL_TEXTURE_2D, m_texture);
    if (m_useIndexBuffer)
        m_indexBuffer->bind();
    if (m_useNormalBuffer)
        m_normalBuffer->bind();

    switch (drawMode) {
        case GL_TRIANGLES:
            glDrawElements(GL_TRIANGLES, m_indices.size(), GL_UNSIGNED_SHORT, 0);
            break;

        case GL_TRIANGLE_FAN:
            glDrawArrays(GL_TRIANGLE_FAN, 0, m_vertices.size());
            break;

        case GL_LINES:
            glDrawArrays(GL_LINES, 0, m_vertices.size());
            break;

        default:
            qDebug() << "Invalid draw mode " << drawMode;
            break;
    }
    m_shader->release();
    if (m_useIndexBuffer)
        m_indexBuffer->release();
    if (m_useNormalBuffer)
        m_normalBuffer->release();
}

void QtGLComponent::updateBoundingBox(const QVector3D& vert)
{
    if (vert.x() < m_boundMinus.x())
        m_boundMinus.setX(vert.x());

    if (vert.y() < m_boundMinus.y())
        m_boundMinus.setY(vert.y());

    if (vert.z() < m_boundMinus.z())
        m_boundMinus.setZ(vert.z());

    if (vert.x() > m_boundPlus.x())
        m_boundPlus.setX(vert.x());

    if (vert.y() > m_boundPlus.y())
        m_boundPlus.setY(vert.y());

    if (vert.z() > m_boundPlus.z())
        m_boundPlus.setZ(vert.z());
}

