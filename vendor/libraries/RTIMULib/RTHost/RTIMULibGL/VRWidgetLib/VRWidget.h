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

#ifndef VRWIDGET_H
#define VRWIDGET_H

#include <qobject.h>

#include <QGLWidget>
#include <QtOpenGL>

#include <QtGL.h>

typedef enum
{
    VRWIDGET_WIDGET,
    VRWIDGET_POINTER,
    VRWIDGET_SELECTOR,
    VRWIDGET_STATUS,
    VRWIDGET_PLANE,
    VRWIDGET_WEB,
    VRWIDGET_WEBPAGE,
    VRWIDGET_MAP,
    VRWIDGET_COMPASS,
    VRWIDGET_IMU,
    VRWIDGET_SPHERE
} VRWIDGET_TYPE;

//	Default used for the default render

#define	VRWIDGET_DEFAULT_X              0.0f
#define	VRWIDGET_DEFAULT_Y              0.0f
#define	VRWIDGET_DEFAULT_Z              -20.0f

#define	VRWIDGET_DEFAULT_RADIUS         1.0f

#define	VRWIDGET_DEFAULT_WIDTH          5.0f
#define	VRWIDGET_DEFAULT_HEIGHT         5.0f
#define	VRWIDGET_DEFAULT_DEPTH          5.0f

#define	VRWIDGET_BOUNDBOX_BORDER        0.1f

typedef enum
{
    VRWidgetRotationXYZ = 0,
    VRWidgetRotationXZY,
    VRWidgetRotationYXZ,
    VRWidgetRotationYZX,
    VRWidgetRotationZXY,
    VRWidgetRotationZYX
} VRWidgetRotationOrder;

class VRWidget : public QObject
{
    Q_OBJECT

public:
    VRWidget(QObject *parent, VRWIDGET_TYPE  = VRWIDGET_WIDGET);
    ~VRWidget();

    // VRWidgetInit() called to init OpenGL stuff - must be provided

    virtual void VRWidgetInit() = 0;

    // VRWidgetRender() called to render the widget - must be provided

    virtual void VRWidgetRender() = 0;                      // function to render the widget

    // ARHandleSingleClick() can be overriden to process single click events

    //  virtual void ARHandleSingleClick(int x, int y, Qt::MouseButton button)
    virtual void ARHandleSingleClick(int , int , Qt::MouseButton ) {};

    // ARHandleDoubleClick() can be overriden to process double click events

    //  virtual void ARHandleDoubleClick(int x, int y, Qt::MouseButton button)
    virtual void ARHandleDoubleClick(int , int , Qt::MouseButton ) {};

    // ARCustomSelectBox() allows a widget to draw a custom select box

    virtual void ARCustomSelectBox() {};

    // enableSelectBox() controls whether select box is drawn

    inline void enableSelectBox(bool enable) {m_drawSelectBox = enable;};

    // setIcon() sets the filename of the widget icon

    inline void setIcon(const char *icon) { m_icon = icon; };

    // getIcon() sets the filename of the widget icon

    inline const QString& getIcon() { return m_icon; };

    // getWidgetType() returns the type of the widget

    inline VRWIDGET_TYPE getWidgetType() { return m_widgetType; };

    // setCenter() sets the position of the center of the object

    virtual void setCenter(float x, float y, float z, bool unconditional = false);
    virtual void setCenter(const QVector3D center, bool unconditional = false);

    // getCenter() sets the position of the center of the object

    virtual void getCenter(float& x, float& y, float& z);
    virtual void getCenter(QVector3D& center);

    // setSize() sets the width and height and depth of the object

    virtual void setSize(float width, float height, float depth);

    // getSize() gets the width and height and depth of the object

    virtual void getSize(float& width, float& height, float& depth);

    // moveCenter() moves the center of the widget

    virtual void moveCenter(float deltaX, float deltaY, float deltaZ, bool unconditional = false);
    virtual void moveCenter(const QVector3D delta, bool unconditional = false);

    // moveCenterTransform() moves the center of the widget using intersections
    // with the bounding box so as to maintain a constant intersection point

    virtual void moveCenterTransform(const QVector3D& intersection, const QVector3D& newIntersection);

    // moveTowardOrigin() moves object towards the eye point origin

    virtual void moveTowardOrigin(float distance);

    // setMoveMask() allows individual move directions to be controlled

    virtual void setMoveMask(bool enableX, bool enableY, bool enableZ);

    // setRotationOrder() sets the order of rotation

    virtual void setRotationOrder(VRWidgetRotationOrder order);

    // setRotation() sets the orientation of the object

    virtual void setRotation(float x, float y, float z, bool unconditional = false);
    virtual void setRotation(const QVector3D rotation, bool unconditional = false);

    // getRotation() sets the orientation of the object

    virtual void getRotation(float& x, float& y, float& z);
    virtual void getRotation(QVector3D& rotation);

    // moveRotation() changes the rotation angles of the widget

    virtual void moveRotation(float deltaPhi, float deltaTheta, float deltaPsi, bool unconditional = false);
    virtual void moveRotation(const QVector3D delta, bool unconditional = false);

    // setRotationMask() allows individual rotations to be controlled

    virtual void setRotationMask(bool enableX, bool enableY, bool enableZ);

    // setSelected() tell the widget to be in selected state if true

    inline void setSelected(bool selected) {m_selected = selected;}

    // selected() returns true if the widget is selected

    inline bool selected() { return m_selected; }

    // boundingBoxIntersection() returns the point where the ray defined by points ray0 and ray1
    // intersect with the bounding box and which rectangle index. If it doesn't, the function returns false

    bool boundingBoxIntersection(QVector3D& intersection, int& rectIndex,
                const QVector3D& ray0, const QVector3D& ray1);

    // boundingBoxRectIntersection() looks for an intersection with a specific
    // rectangle in the bounding box

    bool boundingRectIntersection(QVector3D& intersection, const int rectIndex,
                const QVector3D& ray0, const QVector3D& ray1);

protected:
    // startWidgetRender() is called at start of widget's render function

    void startWidgetRender();

    // endWidgetRender() is called at end of widget's render function

    void endWidgetRender();

    // startCompositeRender() is called at start of composite component render sequence
    // parameters are offset from widget center for this composite component

    void startCompositeRender(const QVector3D& posOffset, const QVector3D& angleOffset);
    void startCompositeRender(float offsetX = 0.0f, float offsetY = 0.0f, float offsetZ = 0.0f,
                        float rotOffsetX = 0.0f, float rotOffsetY = 0.0f, float rotOffsetZ = 0.0f);


    // endCompositeRender() is called at end of a composite component render sequence

    void endCompositeRender();

    // startComponentRender() is called at start of component render sequence
    // parameters are offset from widget center for this component

    void startComponentRender(const QVector3D& posOffset, const QVector3D& angleOffset);
    void startComponentRender(float offsetX = 0.0f, float offsetY = 0.0f, float offsetZ = 0.0f,
                        float rotOffsetX = 0.0f, float rotOffsetY = 0.0f, float rotOffsetZ = 0.0f);

    // endComponentRender() is called at end of a component render sequence

    void endComponentRender(const QVector3D& boundMinus, const QVector3D& boundPlus);

    // pushModelMatrix() push the current globalModelMatrix on the stack

    void pushModelMatrix();

    // popModelMatrix() pops the current globalModelMatrix from the stack

    void popModelMatrix();

    // pushOffsetMatrix() push the current offset matrix on the stack

    void pushOffsetMatrix();

    // popOffsetMatrix() pops the current offset matrix from the stack

    void popOffsetMatrix();


    QVector3D m_center;
    QVector3D m_rotation;

    float m_width;
    float m_height;
    float m_depth;


private:
    void updateViewportBox();                               // update the viewport bounding box
    void conditionalMove(const QVector3D& newCenter, bool unconditional);   // performs move if allowed
    void conditionalRotate(const QVector3D& newRotation, bool unconditional);   // performs rotate if allowed

    bool m_enableMoveX;
    bool m_enableMoveY;
    bool m_enableMoveZ;

    bool m_enableRotX;
    bool m_enableRotY;
    bool m_enableRotZ;

    bool m_saveState;                                       // true if save settings, false if not
    void setModelMatrix();                                  // sets the model matrix for the widget

    bool m_drawSelectBox;                                   // true if draw select box automatically

    QString m_icon;                                         // the icon filename
    VRWIDGET_TYPE m_widgetType;                             // type of widget

    QVector3D m_boundMinus;                                 // lowest in each coord for box in widget coords
    QVector3D m_boundPlus;                                  // highest in each coord for box in widget coords

    QVector3D m_viewportBoundBox[8];                        // the bounding box in viewport coords

    QStack <QMatrix4x4> m_modelMatrixStack;                 // the model matrix stack
    QStack <QMatrix4x4> m_offsetMatrixStack;                // the offset matrix stack

    QMatrix4x4 m_offsetMatrix;                              // the current offset matrix
    QMatrix4x4 m_modelMatrix;                               // the current model matrix
    QMatrix4x4 m_inverseModelMatrix;                        // the reverse transformation


    bool m_selected;                                        // if in selected state

    VRWidgetRotationOrder m_rotationOrder;
};

#endif // VRWIDGET_H
