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

QtGLTextureShader::QtGLTextureShader(QObject *parent)
    : QtGLShader(parent)
{
    #define PROGRAM_VERTEX_ATTRIBUTE 0
    #define PROGRAM_TEXCOORD_ATTRIBUTE 1

    m_type = QTGLSHADER_TEXTURE;

    m_vshader = new QGLShader(QGLShader::Vertex, parent);
    const char *vsrc =
        "attribute highp vec3 vertex;\n"
        "attribute mediump vec2 texCoord;\n"
        "varying mediump vec2 texc;\n"
        "uniform mediump mat4 matrix;\n"
        "void main(void)\n"
        "{\n"
        "    gl_Position = matrix * vec4(vertex, 1.0);\n"
        "    texc = texCoord;\n"
        "}\n";
    m_vshader->compileSourceCode(vsrc);

    m_fshader = new QGLShader(QGLShader::Fragment, parent);
    const char *fsrc =
        "uniform sampler2D texture;\n"
        "varying mediump vec2 texc;\n"
        "void main(void)\n"
        "{\n"
        "    gl_FragColor = texture2D(texture, texc.st);\n"
        "}\n";
    m_fshader->compileSourceCode(fsrc);

    addShader(m_vshader);
    addShader(m_fshader);
    bindAttributeLocation("vertex", PROGRAM_VERTEX_ATTRIBUTE);
    bindAttributeLocation("texCoord", PROGRAM_TEXCOORD_ATTRIBUTE);
    link();
    setUniformValue("texture", 0);
}

QtGLTextureShader::~QtGLTextureShader()
{

}

void QtGLTextureShader::load(const QVector3D *vertices, const QVector2D *textureCoords)
{
    bind();
    setUniformValue("matrix", globalTransforms.modelViewProjectionMatrix);
    enableAttributeArray(PROGRAM_VERTEX_ATTRIBUTE);
    enableAttributeArray(PROGRAM_TEXCOORD_ATTRIBUTE);
    setAttributeArray(PROGRAM_VERTEX_ATTRIBUTE, vertices);
    setAttributeArray(PROGRAM_TEXCOORD_ATTRIBUTE, textureCoords);
}
