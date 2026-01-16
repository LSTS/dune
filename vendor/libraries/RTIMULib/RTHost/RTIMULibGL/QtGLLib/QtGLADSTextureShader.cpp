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

QtGLADSTextureShader::QtGLADSTextureShader(QObject *parent)
    : QtGLShader(parent)
{
    #define PROGRAM_VERTEX_ATTRIBUTE 0
    #define PROGRAM_NORMAL_ATTRIBUTE 1
    #define PROGRAM_TEXTURE_ATTRIBUTE 2

    m_type = QTGLSHADER_ADSTEXTURE;

    m_vshader = new QGLShader(QGLShader::Vertex, parent);
    const char *vsrc =
        "attribute highp vec3 vertex;\n"
        "attribute mediump vec3 normal;\n"
        "attribute mediump vec2 texCoord;\n"
        "varying mediump vec2 texc;\n"
        "varying mediump vec3 lightI;\n"
        "uniform mediump mat4 MV;\n"
        "uniform mediump mat4 MVP\n;"
        "uniform mediump mat3 normalMatrix;\n"
        "uniform mediump int lightCount;\n"
        "uniform mediump vec4 posL[4];\n"
        "uniform mediump vec3 ambientL[4];\n"
        "uniform mediump vec3 diffuseL[4];\n"
        "uniform mediump vec3 specularL[4];\n"
        "uniform mediump vec3 ambientM;\n"
        "uniform mediump vec3 diffuseM;\n"
        "uniform mediump vec3 specularM;\n"
        "uniform mediump float shininess;\n"
        "void main(void)\n"
        "{\n"
        "    gl_Position = MVP * vec4(vertex, 1.0);\n"
        "    texc = texCoord;\n"
        "    vec3 tnorm = normalize(normalMatrix * normal);\n"
        "    vec4 eyeCoords = MV * vec4(vertex, 1.0);\n"
        "    vec3 v = normalize(-eyeCoords.xyz);\n"
        "    lightI = vec3(0.0, 0.0, 0.0);\n"
        "    for (int i = 0; i < lightCount; i++) {\n"
        "        vec3 s = normalize(vec3(posL[i] - eyeCoords));\n"
        "        float sDotN = max(dot(s, tnorm), 0.0);\n"
        "        vec3 r = reflect(-s, tnorm);\n"
        "        vec3 ambient = ambientL[i] * ambientM;\n"
        "        vec3 diffuse = diffuseL[i] * diffuseM * sDotN;\n"
        "        vec3 spec = vec3(0.0);\n"
        "        if (sDotN > 0.0) spec = specularL[i] * specularM * pow(max(dot(r,v), 0.0), shininess);\n"
        "        lightI += ambient + diffuse + spec;\n"
        "    }\n"
       "}\n";
    if (!m_vshader->compileSourceCode(vsrc))
        qDebug() << "Failed to compile ADS shader";

    m_fshader = new QGLShader(QGLShader::Fragment, parent);
    const char *fsrc =
        "uniform sampler2D texture;\n"
        "varying mediump vec2 texc;\n"
        "varying mediump vec3 lightI;\n"
        "void main(void)\n"
        "{\n"
        "    gl_FragColor = texture2D(texture, texc.st) * vec4(lightI, 1.0);\n"
        "}\n";
    if (!m_fshader->compileSourceCode(fsrc))
        qDebug() << "Failed to compile ADS fragment shader";

    addShader(m_vshader);
    addShader(m_fshader);
    bindAttributeLocation("vertex", PROGRAM_VERTEX_ATTRIBUTE);
    bindAttributeLocation("normal", PROGRAM_NORMAL_ATTRIBUTE);
    bindAttributeLocation("texCoord", PROGRAM_TEXTURE_ATTRIBUTE);
    link();
    setUniformValue("texture", 0);
}

QtGLADSTextureShader::~QtGLADSTextureShader()
{

}

void QtGLADSTextureShader::load(const QVector3D *vertices, const QVector3D *normals,
                const QVector2D* textureCoords, const COMPONENT_MATERIAL& material)
{
    bind();
    setUniformValue("MV", globalTransforms.modelViewMatrix);
    setUniformValue("MVP", globalTransforms.modelViewProjectionMatrix);
    setUniformValue("normalMatrix", globalTransforms.normalMatrix);
    setUniformValue("lightCount", globalLights.lightCount);
    setUniformValueArray("posL", globalLights.position, globalLights.lightCount);
    setUniformValueArray("ambientL", globalLights.ambient, globalLights.lightCount);
    setUniformValueArray("diffuseL", globalLights.diffuse, globalLights.lightCount);
    setUniformValueArray("specularL", globalLights.specular, globalLights.lightCount);
    setUniformValue("ambientM", material.ambientReflectivity);
    setUniformValue("diffuseM", material.diffuseReflectivity);
    setUniformValue("specularM", material.specularReflectivity);
    setUniformValue("shininess", material.shininess);
    enableAttributeArray(PROGRAM_VERTEX_ATTRIBUTE);
    enableAttributeArray(PROGRAM_NORMAL_ATTRIBUTE);
    enableAttributeArray(PROGRAM_TEXTURE_ATTRIBUTE);
    setAttributeArray(PROGRAM_VERTEX_ATTRIBUTE, vertices);
    setAttributeArray(PROGRAM_NORMAL_ATTRIBUTE, normals);
    setAttributeArray(PROGRAM_TEXTURE_ATTRIBUTE, textureCoords);
}
