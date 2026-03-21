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

#ifndef QTGLSHADER_H
#define QTGLSHADER_H

typedef enum
{
    QTGLSHADER_FLAT,
    QTGLSHADER_TEXTURE,
    QTGLSHADER_ADS,
    QTGLSHADER_ADSTEXTURE,
    QTGLSHADER_COUNT
} QTGLSHADER_TYPE;

class QtGLShader : public QGLShaderProgram
{
public:
    QtGLShader(QObject *parent) : QGLShaderProgram(parent) {};
    virtual ~QtGLShader() { removeAllShaders(); };

    inline QTGLSHADER_TYPE getType() {return m_type;};

//  virtual void load(const QVector3D *vertices, const QVector2D *textureCoords);
    virtual void load(const QVector3D *, const QVector2D *) { qDebug() << "No shader load";};

//  virtual void load(const QVector3D *vertices, const QColor& color);
    virtual void load(const QVector3D *, const QColor&) {qDebug() << "No shader load";};

//  virtual void load(const QVector3D *vertices, const QVector3D *normals, const COMPONENT_MATERIAL& material);
    virtual void load(const QVector3D *, const QVector3D *, const COMPONENT_MATERIAL& ) {qDebug() << "No shader load";};

//  virtual void load(const QVector3D *vertices, const QVector3D *normals,
//			const QVector2D *textureCoords, const COMPONENT_MATERIAL& material);
    virtual void load(const QVector3D *, const QVector3D *, const QVector2D*, const COMPONENT_MATERIAL& ) {qDebug() << "No shader load";};

protected:
    QGLShader *m_vshader;
    QGLShader *m_fshader;
    QTGLSHADER_TYPE m_type;
};

#endif // QTGLSHADER_H
