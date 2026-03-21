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

#include "VRWidget.h"

#include <qvector.h>

VRWidget::VRWidget(QObject *parent, VRWIDGET_TYPE widgetType)
    : QObject(parent)
{
    m_widgetType = widgetType;
    m_selected = false;
    m_center = QVector3D(VRWIDGET_DEFAULT_X, VRWIDGET_DEFAULT_Y, VRWIDGET_DEFAULT_Z / globalTransforms.tanViewportFOV);
    m_rotation = QVector3D(0, 0, 0);
    m_width = VRWIDGET_DEFAULT_WIDTH;
    m_height = VRWIDGET_DEFAULT_HEIGHT;
    m_depth = VRWIDGET_DEFAULT_DEPTH;
    setModelMatrix();
    m_icon = "IconDefault.png";
    m_enableMoveX = m_enableMoveY = m_enableMoveZ = true;
    m_enableRotX = m_enableRotY = m_enableRotZ = true;
    m_drawSelectBox = true;
    m_rotationOrder = VRWidgetRotationZYX;
}

VRWidget::~VRWidget()
{
}


void VRWidget::startWidgetRender()
{
    pushModelMatrix();
    globalTransforms.modelViewMatrix = m_modelMatrix * globalTransforms.modelViewMatrix;
    m_boundMinus = QVector3D(10000.0f, 10000.0f, 10000.0f);
    m_boundPlus = QVector3D(-10000.0f, -10000.0f, -10000.0f);
    m_offsetMatrix.setToIdentity();
}

void VRWidget::startCompositeRender(const QVector3D& posOffset, const QVector3D& angleOffset)
{
    startComponentRender(posOffset.x(), posOffset.y(), posOffset.z(), angleOffset.x(), angleOffset.y(), angleOffset.z());
}

void VRWidget::startCompositeRender(float offsetX, float offsetY, float offsetZ,
                        float rotOffsetX, float rotOffsetY, float rotOffsetZ)
{
    startComponentRender(offsetX, offsetY, offsetZ, rotOffsetX, rotOffsetY, rotOffsetZ);
}


void VRWidget::startComponentRender(const QVector3D& posOffset, const QVector3D& angleOffset)
{
    startComponentRender(posOffset.x(), posOffset.y(), posOffset.z(), angleOffset.x(), angleOffset.y(), angleOffset.z());
}

void VRWidget::startComponentRender(float offsetX, float offsetY, float offsetZ,
                        float rotOffsetX, float rotOffsetY, float rotOffsetZ)
{
    pushModelMatrix();
    pushOffsetMatrix();
    globalTransforms.modelViewMatrix.translate(offsetX, offsetY, offsetZ);
    m_offsetMatrix.translate(offsetX, offsetY, offsetZ);

    switch (m_rotationOrder) {
        case VRWidgetRotationXYZ:
            globalTransforms.modelViewMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            m_offsetMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            break;

        case VRWidgetRotationXZY:
            globalTransforms.modelViewMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            m_offsetMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            break;

        case VRWidgetRotationYXZ:
            globalTransforms.modelViewMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            m_offsetMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            break;

        case VRWidgetRotationYZX:
            globalTransforms.modelViewMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            m_offsetMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            break;

        case VRWidgetRotationZXY:
            globalTransforms.modelViewMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            m_offsetMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            break;

        case VRWidgetRotationZYX:
            globalTransforms.modelViewMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            globalTransforms.modelViewMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            m_offsetMatrix.rotate(rotOffsetX, 1.0f, 0.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetY, 0.0f, 1.0f, 0.0f);
            m_offsetMatrix.rotate(rotOffsetZ, 0.0f, 0.0f, 1.0f);
            break;
    }

    globalTransforms.modelViewProjectionMatrix = globalTransforms.projectionMatrix * globalTransforms.modelViewMatrix;
    globalTransforms.normalMatrix = globalTransforms.modelViewMatrix.normalMatrix();
}


void VRWidget::endComponentRender(const QVector3D& boundMinus, const QVector3D& boundPlus)
{
    QVector3D mappedMinus, mappedPlus;

    mappedMinus = m_offsetMatrix.map(boundMinus);
    mappedPlus = m_offsetMatrix.map(boundPlus);

    if (mappedMinus.x() < m_boundMinus.x())
        m_boundMinus.setX(mappedMinus.x());

    if (mappedMinus.y() < m_boundMinus.y())
        m_boundMinus.setY(mappedMinus.y());

    if (mappedMinus.z() < m_boundMinus.z())
        m_boundMinus.setZ(mappedMinus.z());

    if (mappedPlus.x() > m_boundPlus.x())
        m_boundPlus.setX(mappedPlus.x());

    if (mappedPlus.y() > m_boundPlus.y())
        m_boundPlus.setY(mappedPlus.y());

    if (mappedPlus.z() > m_boundPlus.z())
        m_boundPlus.setZ(mappedPlus.z());

    popOffsetMatrix();
    popModelMatrix();
}

void VRWidget::endCompositeRender()
{
    popOffsetMatrix();
    popModelMatrix();
}

void VRWidget::endWidgetRender()
{
    float border = 0.1f;

    if (m_selected && m_drawSelectBox) {
        QtGLWireCubeComponent box;

        box.generate(	m_boundPlus.x() - m_boundMinus.x() + border,
                        m_boundPlus.y() - m_boundMinus.y() + border,
                        m_boundPlus.z() - m_boundMinus.z() + border);
        globalTransforms.modelViewMatrix.translate((m_boundPlus.x() + m_boundMinus.x()) / 2.0f,
                                    (m_boundPlus.y() + m_boundMinus.y()) / 2.0f,
                                    (m_boundPlus.z() + m_boundMinus.z()) / 2.0f);
        box.setShader(globalShader[QTGLSHADER_FLAT]);
        box.setColor(Qt::red);
        globalTransforms.modelViewProjectionMatrix = globalTransforms.projectionMatrix * globalTransforms.modelViewMatrix;
        box.draw();
    }
    ARCustomSelectBox();
    popModelMatrix();
    if (m_modelMatrixStack.size() != 0) {
        qDebug() << m_widgetType << " leaving with non empty model stack";
        return;
    }
    if (m_offsetMatrixStack.size() != 0) {
        qDebug() << m_widgetType << " leaving with non empty offset stack";
        return;
    }
}

void VRWidget::pushModelMatrix()
{
    m_modelMatrixStack.push(globalTransforms.modelViewMatrix);
}

void VRWidget::popModelMatrix()
{
    if (m_modelMatrixStack.size() == 0) {
        qDebug() << m_widgetType << " tried to pop empty matrix stack";
        return;
    }
    globalTransforms.modelViewMatrix = m_modelMatrixStack.pop();
}

void VRWidget::pushOffsetMatrix()
{
    m_offsetMatrixStack.push(m_offsetMatrix);
}

void VRWidget::popOffsetMatrix()
{
    if (m_offsetMatrixStack.size() == 0) {
        qDebug() << m_widgetType << " tried to pop empty offset matrix stack";
        return;
    }
    m_offsetMatrix = m_offsetMatrixStack.pop();
}

void VRWidget::setCenter(float x, float y, float z, bool unconditional)
{
    QVector3D newCenter(x, y, z);
    conditionalMove(newCenter, unconditional);
}

void VRWidget::setCenter(const QVector3D center, bool unconditional)
{
    conditionalMove(center, unconditional);
}

void VRWidget::getCenter(float& x, float& y, float& z)
{
    x = m_center.x();
    y = m_center.y();
    z = m_center.z();
}

void VRWidget::getCenter(QVector3D& center)
{
    center = m_center;
}


void VRWidget::moveCenter(float deltaX, float deltaY, float deltaZ, bool unconditional)
{
    QVector3D newCenter = m_center + QVector3D(deltaX, deltaY, deltaZ);
    conditionalMove(newCenter, unconditional);
}

void VRWidget::moveCenter(const QVector3D delta, bool unconditional)
{
    QVector3D newCenter = m_center + delta;
    conditionalMove(newCenter, unconditional);
}

void VRWidget::moveCenterTransform(const QVector3D& intersection, const QVector3D& newIntersection)
{
    QVector3D mappedIntersection;
    QVector3D mappedNewIntersection;

    mappedIntersection = m_modelMatrix.map(intersection);
    mappedNewIntersection = m_modelMatrix.map(newIntersection);

    QVector3D newCenter = m_center + mappedNewIntersection - mappedIntersection;
    conditionalMove(newCenter, false);
//	qDebug() << "MCT " << mappedIntersection.x() << " -> " << mappedNewIntersection.x() << " "
//		<< mappedIntersection.y() << " -> " << mappedNewIntersection.y() << " "
//		<< mappedIntersection.z() << " -> " << mappedNewIntersection.z() << " ";
    moveTowardOrigin(mappedNewIntersection.length() - mappedIntersection.length());
}

void VRWidget::moveTowardOrigin(float distance)
{
//	qDebug() << "MTO " << distance;
    QVector3D origin = -m_center;
    origin.normalize();
    origin *= distance;
    QVector3D newCenter = m_center + origin;
    conditionalMove(newCenter, false);
}

void VRWidget::setRotationOrder(VRWidgetRotationOrder order)
{
    m_rotationOrder = order;
}


void VRWidget::setRotation(float x, float y, float z, bool unconditional)
{
    QVector3D newRotation(x, y, z);
    conditionalRotate(newRotation, unconditional);
}

void VRWidget::setRotation(const QVector3D rotation, bool unconditional)
{
    conditionalRotate(rotation, unconditional);
}

void VRWidget::getRotation(float& x, float& y, float& z)
{
    x = m_rotation.x();
    y = m_rotation.y();
    z = m_rotation.z();
}

void VRWidget::getRotation(QVector3D& rotation)
{
    rotation = m_rotation;
}

void VRWidget::moveRotation(float deltaX, float deltaY, float deltaZ, bool unconditional)
{
    QVector3D rotation;
    rotation.setX(m_rotation.x() + deltaX);
    rotation.setY(m_rotation.y() + deltaY);
    rotation.setZ(m_rotation.z() + deltaZ);
    conditionalRotate(rotation, unconditional);
}

void VRWidget::moveRotation(const QVector3D delta, bool unconditional)
{
    QVector3D rotation(m_rotation);
    rotation += delta;
    conditionalRotate(rotation, unconditional);
}

void VRWidget::setSize(float width, float height, float depth)
{
    m_width = width;
    m_height = height;
    m_depth = depth;
}

void VRWidget::getSize(float& width, float& height, float& depth)
{
    width = m_width;
    height = m_height;
    depth = m_depth;
}

void VRWidget::setMoveMask(bool enableX, bool enableY, bool enableZ)
{
    m_enableMoveX = enableX;
    m_enableMoveY = enableY;
    m_enableMoveZ = enableZ;
}

void VRWidget::setRotationMask(bool enableX, bool enableY, bool enableZ)
{
    m_enableRotX = enableX;
    m_enableRotY = enableY;
    m_enableRotZ = enableZ;
}


void VRWidget::updateViewportBox()
{
    // bottom left front
    m_viewportBoundBox[0] = m_modelMatrix.map(QVector3D(m_boundMinus.x() - VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundMinus.y() - VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundPlus.z() + VRWIDGET_BOUNDBOX_BORDER));

    // top left front
    m_viewportBoundBox[1] = m_modelMatrix.map(QVector3D(m_boundMinus.x() - VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundPlus.y() + VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundPlus.z() + VRWIDGET_BOUNDBOX_BORDER));

    // top right front
    m_viewportBoundBox[2] = m_modelMatrix.map(QVector3D(m_boundPlus.x() + VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundPlus.y() + VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundPlus.z() + VRWIDGET_BOUNDBOX_BORDER));

    // bottom right front
    m_viewportBoundBox[3] = m_modelMatrix.map(QVector3D(m_boundPlus.x() + VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundMinus.y() - VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundPlus.z() + VRWIDGET_BOUNDBOX_BORDER));

    // bottom left back
    m_viewportBoundBox[4] = m_modelMatrix.map(QVector3D(m_boundMinus.x() - VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundMinus.y() - VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundMinus.z() - VRWIDGET_BOUNDBOX_BORDER));

    // top left back
    m_viewportBoundBox[5] = m_modelMatrix.map(QVector3D(m_boundMinus.x() - VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundPlus.y() + VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundMinus.z() - VRWIDGET_BOUNDBOX_BORDER));

    // top right back
    m_viewportBoundBox[6] = m_modelMatrix.map(QVector3D(m_boundPlus.x() + VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundPlus.y() + VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundMinus.z() - VRWIDGET_BOUNDBOX_BORDER));

    // bottom right back
    m_viewportBoundBox[7] = m_modelMatrix.map(QVector3D(m_boundPlus.x() + VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundMinus.y() - VRWIDGET_BOUNDBOX_BORDER,
                                                    m_boundMinus.z() - VRWIDGET_BOUNDBOX_BORDER));

}

bool VRWidget::boundingBoxIntersection(QVector3D& intersection, int& rectIndex,
                const QVector3D& ray0, const QVector3D& ray1)
{
    QVector3D bestIntersection;
    int bestFace = -1;
    float bestDistance = 100000000000;
    float length;

    updateViewportBox();

    // Nearest face
    rectIndex = 0;
    if (QtGLRayRectangleIntersection(intersection, ray0, ray1,
        m_viewportBoundBox[0], m_viewportBoundBox[1], m_viewportBoundBox[2], m_viewportBoundBox[3], true)) {
        bestIntersection = intersection;
        bestDistance = bestIntersection.length();
        bestFace = rectIndex;
    }

    // Furthest face
    rectIndex++;
    if (QtGLRayRectangleIntersection(intersection, ray0, ray1,
        m_viewportBoundBox[4], m_viewportBoundBox[5], m_viewportBoundBox[6], m_viewportBoundBox[7], true)) {
        if ((length = intersection.length()) < bestDistance) {
            bestIntersection = intersection;
            bestDistance = length;
            bestFace = rectIndex;
        }
    }

    // Top face
    rectIndex++;
    if (QtGLRayRectangleIntersection(intersection, ray0, ray1,
        m_viewportBoundBox[1], m_viewportBoundBox[5], m_viewportBoundBox[6], m_viewportBoundBox[2], true)) {
        if ((length = intersection.length()) < bestDistance) {
            bestIntersection = intersection;
            bestDistance = length;
            bestFace = rectIndex;
        }
    }

    // Bottom face
    rectIndex++;
    if (QtGLRayRectangleIntersection(intersection, ray0, ray1,
        m_viewportBoundBox[0], m_viewportBoundBox[4], m_viewportBoundBox[7], m_viewportBoundBox[3], true)) {
        if ((length = intersection.length()) < bestDistance) {
            bestIntersection = intersection;
            bestDistance = length;
            bestFace = rectIndex;
        }
    }

    // Left side face
    rectIndex++;
    if (QtGLRayRectangleIntersection(intersection, ray0, ray1,
        m_viewportBoundBox[0], m_viewportBoundBox[4], m_viewportBoundBox[5], m_viewportBoundBox[1], true)) {
        if ((length = intersection.length()) < bestDistance) {
            bestIntersection = intersection;
            bestDistance = length;
            bestFace = rectIndex;
        }
    }

    // Right side face
    rectIndex++;
    if (QtGLRayRectangleIntersection(intersection, ray0, ray1,
        m_viewportBoundBox[3], m_viewportBoundBox[2], m_viewportBoundBox[6], m_viewportBoundBox[7], true)) {
        if ((length = intersection.length()) < bestDistance) {
            bestIntersection = intersection;
            bestDistance = length;
            bestFace = rectIndex;
        }
    }

    if (bestFace == -1)
        return false;

    intersection = m_inverseModelMatrix.map(bestIntersection);
    rectIndex = bestFace;
    qDebug() << "Hit face " << rectIndex << " raw inter " << bestIntersection.x() << " "
        << bestIntersection.y() << " " << bestIntersection.z();
    return true;
}

bool VRWidget::boundingRectIntersection(QVector3D& intersection, const int rectIndex,
                const QVector3D& ray0, const QVector3D& ray1)
{
    bool success;

    updateViewportBox();

    switch (rectIndex) {
        // Nearest face
        case 0:
            success = QtGLRayRectangleIntersection(intersection, ray0, ray1,
                m_viewportBoundBox[0], m_viewportBoundBox[1], m_viewportBoundBox[2], m_viewportBoundBox[3], false);
            break;

        // Furthest face
        case 1:
            success = QtGLRayRectangleIntersection(intersection, ray0, ray1,
                m_viewportBoundBox[4], m_viewportBoundBox[5], m_viewportBoundBox[6], m_viewportBoundBox[7], false);
            break;

        // Top face
        case 2:
            success = QtGLRayRectangleIntersection(intersection, ray0, ray1,
                m_viewportBoundBox[1], m_viewportBoundBox[5], m_viewportBoundBox[6], m_viewportBoundBox[2], false);
            break;

        // Bottom face
        case 3:
            success = QtGLRayRectangleIntersection(intersection, ray0, ray1,
                m_viewportBoundBox[0], m_viewportBoundBox[4], m_viewportBoundBox[7], m_viewportBoundBox[3], false);
            break;

        // Left side face
        case 4:
            success = QtGLRayRectangleIntersection(intersection, ray0, ray1,
                m_viewportBoundBox[0], m_viewportBoundBox[4], m_viewportBoundBox[5], m_viewportBoundBox[1], false);
            break;

        // Right side face
        case 5:
            success = QtGLRayRectangleIntersection(intersection, ray0, ray1,
                m_viewportBoundBox[3], m_viewportBoundBox[2], m_viewportBoundBox[6], m_viewportBoundBox[7], false);
            break;

        default:
            success = false;
    }
    if (success) {
//		qDebug() << "raw inter " << intersection.x() << " " << intersection.y() << " " << intersection.z();
        intersection = m_inverseModelMatrix.map(intersection);
    }
    return success;
}

void VRWidget::setModelMatrix()
{
    m_modelMatrix.setToIdentity();
    m_inverseModelMatrix.setToIdentity();
    m_modelMatrix.translate(m_center);

    switch (m_rotationOrder) {
        case VRWidgetRotationXYZ:
            m_modelMatrix.rotate(m_rotation.z(), 0.0f, 0.0f, 1.0f);
            m_modelMatrix.rotate(m_rotation.y(), 0.0f, 1.0f, 0.0f);
            m_modelMatrix.rotate(m_rotation.x(), 1.0f, 0.0f, 0.0f);

            m_inverseModelMatrix.rotate(-m_rotation.x(), 1.0f, 0.0f, 0.0f);
            m_inverseModelMatrix.rotate(-m_rotation.y(), 0.0f, 1.0f, 0.0f);
            m_inverseModelMatrix.rotate(-m_rotation.z(), 0.0f, 0.0f, 1.0f);

            break;

        case VRWidgetRotationXZY:
            m_modelMatrix.rotate(m_rotation.y(), 0.0f, 1.0f, 0.0f);
            m_modelMatrix.rotate(m_rotation.z(), 0.0f, 0.0f, 1.0f);
            m_modelMatrix.rotate(m_rotation.x(), 1.0f, 0.0f, 0.0f);

            m_inverseModelMatrix.rotate(-m_rotation.x(), 1.0f, 0.0f, 0.0f);
            m_inverseModelMatrix.rotate(-m_rotation.z(), 0.0f, 0.0f, 1.0f);
            m_inverseModelMatrix.rotate(-m_rotation.y(), 0.0f, 1.0f, 0.0f);

            break;

        case VRWidgetRotationYXZ:
            m_modelMatrix.rotate(m_rotation.z(), 0.0f, 0.0f, 1.0f);
            m_modelMatrix.rotate(m_rotation.x(), 1.0f, 0.0f, 0.0f);
            m_modelMatrix.rotate(m_rotation.y(), 0.0f, 1.0f, 0.0f);

            m_inverseModelMatrix.rotate(-m_rotation.y(), 0.0f, 1.0f, 0.0f);
            m_inverseModelMatrix.rotate(-m_rotation.x(), 1.0f, 0.0f, 0.0f);
            m_inverseModelMatrix.rotate(-m_rotation.z(), 0.0f, 0.0f, 1.0f);

            break;

        case VRWidgetRotationYZX:
            m_modelMatrix.rotate(m_rotation.x(), 1.0f, 0.0f, 0.0f);
            m_modelMatrix.rotate(m_rotation.z(), 0.0f, 0.0f, 1.0f);
            m_modelMatrix.rotate(m_rotation.y(), 0.0f, 1.0f, 0.0f);

            m_inverseModelMatrix.rotate(-m_rotation.y(), 0.0f, 1.0f, 0.0f);
            m_inverseModelMatrix.rotate(-m_rotation.z(), 0.0f, 0.0f, 1.0f);
            m_inverseModelMatrix.rotate(-m_rotation.x(), 1.0f, 0.0f, 0.0f);

            break;

        case VRWidgetRotationZXY:
            m_modelMatrix.rotate(m_rotation.y(), 0.0f, 1.0f, 0.0f);
            m_modelMatrix.rotate(m_rotation.x(), 1.0f, 0.0f, 0.0f);
            m_modelMatrix.rotate(m_rotation.z(), 0.0f, 0.0f, 1.0f);

            m_inverseModelMatrix.rotate(-m_rotation.z(), 0.0f, 0.0f, 1.0f);
            m_inverseModelMatrix.rotate(-m_rotation.x(), 1.0f, 0.0f, 0.0f);
            m_inverseModelMatrix.rotate(-m_rotation.y(), 0.0f, 1.0f, 0.0f);
            break;

        case VRWidgetRotationZYX:
            m_modelMatrix.rotate(m_rotation.x(), 1.0f, 0.0f, 0.0f);
            m_modelMatrix.rotate(m_rotation.y(), 0.0f, 1.0f, 0.0f);
            m_modelMatrix.rotate(m_rotation.z(), 0.0f, 0.0f, 1.0f);

            m_inverseModelMatrix.rotate(-m_rotation.z(), 0.0f, 0.0f, 1.0f);
            m_inverseModelMatrix.rotate(-m_rotation.y(), 0.0f, 1.0f, 0.0f);
            m_inverseModelMatrix.rotate(-m_rotation.x(), 1.0f, 0.0f, 0.0f);

            break;
    }
    m_inverseModelMatrix.translate(-m_center);
}

void VRWidget::conditionalMove(const QVector3D& newCenter, bool unconditional)
{
    QVector3D oldCenter;
    bool visible = true;

    oldCenter = m_center;
    if (m_enableMoveX)
        m_center.setX(newCenter.x());
    if (m_enableMoveY)
        m_center.setY(newCenter.y());
    if (m_enableMoveZ)
        m_center.setZ(newCenter.z());
    setModelMatrix();

    if (unconditional)
        return;

    updateViewportBox();

    for (int i = 0; i < 8; i++) {
        if ((m_viewportBoundBox[i].z() >= -globalTransforms.nearPlane) ||
            (m_viewportBoundBox[i].z() <= -globalTransforms.farPlane)) {
                visible = false;
                break;
        }
    }
    if (!visible) {
        m_center = oldCenter;
        setModelMatrix();
    }
}

void VRWidget::conditionalRotate(const QVector3D& newRotation, bool unconditional)
{
    QVector3D oldRotation;
    bool visible = true;

    oldRotation = m_rotation;
    if (m_enableRotX)
        m_rotation.setX(newRotation.x());
    if (m_enableRotY)
        m_rotation.setY(newRotation.y());
    if (m_enableRotZ)
        m_rotation.setZ(newRotation.z());
    setModelMatrix();

    if (unconditional)
        return;

    updateViewportBox();

    for (int i = 0; i < 8; i++) {
        if ((m_viewportBoundBox[i].z() >= -globalTransforms.nearPlane) ||
            (m_viewportBoundBox[i].z() <= -globalTransforms.farPlane)) {
                visible = false;
                break;
        }
    }
    if (!visible) {
        m_rotation = oldRotation;
        setModelMatrix();
    }
}
