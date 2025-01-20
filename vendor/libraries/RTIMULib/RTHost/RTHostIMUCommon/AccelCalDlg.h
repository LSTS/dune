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

#ifndef ACCELCALDLG_H
#define ACCELCALDLG_H

#include "RTIMULib.h"
#include "RTIMUCalDefs.h"

#include <qdialog.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qmutex.h>
#include <qsettings.h>
#include <qcheckbox.h>
#include <qlineedit.h>
#include <qfile.h>

class RTIMUAccelCal;

class AccelCalDlg : public QDialog
{
    Q_OBJECT

public:
    AccelCalDlg(QWidget *parent, RTIMUSettings* settings);
    ~AccelCalDlg();

public slots:
    void onOk();
    void onCancel();
    void onReset();
    void onCheckAll();
    void onUncheckAll();
    void newIMUData(const RTIMU_DATA& data);

protected:
    void timerEvent(QTimerEvent *);

private:
    void updateControls();
    void setRaw(QLabel *label, float val);
    void setRawMinMax(QLabel *label, float val);
    void layoutWindow();
    QLabel* getFixedLabel(QString text, int w, int h,
        Qt::Alignment alignment = Qt::AlignCenter, QString styleSheet = "");

    int m_timer;

    QMutex m_refreshMutex;

    QString m_whiteStyleSheet;
    QString m_lightRedStyleSheet;
    QString m_lightGreenStyleSheet;
    QString m_redStyleSheet;
    QString m_greenStyleSheet;

    RTVector3 m_currentVal;
    RTVector3 m_oldMin;
    RTVector3 m_oldMax;

    QLabel *m_rawMin[3];
    QLabel *m_raw[3];
    QLabel *m_rawMax[3];

    QLabel *m_oldRawMin[3];
    QLabel *m_oldRawMax[3];

    QCheckBox *m_check[3];

    QPushButton *m_okBtn;
    QPushButton *m_cancelBtn;
    QPushButton *m_resetBtn;
    QPushButton *m_checkAllBtn;
    QPushButton *m_uncheckAllBtn;

    bool m_newData;

    RTIMUAccelCal *m_cal;
};

#endif // ACCELCALDLG_H
