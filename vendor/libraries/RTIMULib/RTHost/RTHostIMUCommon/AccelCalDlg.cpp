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

#include "AccelCalDlg.h"
#include "RTIMUAccelCal.h"
#include "RTIMUSettings.h"

#include <qboxlayout.h>
#include <qgridlayout.h>
#include <qdialogbuttonbox.h>
#include <qformlayout.h>
#include <qdebug.h>

AccelCalDlg::AccelCalDlg(QWidget *parent, RTIMUSettings* settings)
    : QDialog(parent)
{
    m_cal = new RTIMUAccelCal(settings);
    m_newData = false;

    m_cal->accelCalInit();

    layoutWindow();

    setWindowTitle("Accelerometer Calibration");

    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    m_timer = startTimer(50);

    connect(m_checkAllBtn, SIGNAL(clicked()), this, SLOT(onCheckAll()));
    connect(m_uncheckAllBtn, SIGNAL(clicked()), this, SLOT(onUncheckAll()));
    connect(m_resetBtn, SIGNAL(clicked()), this, SLOT(onReset()));
    connect(m_okBtn, SIGNAL(clicked()), this, SLOT(onOk()));
    connect(m_cancelBtn, SIGNAL(clicked()), this, SLOT(onCancel()));
}

AccelCalDlg::~AccelCalDlg()
{
}

void AccelCalDlg::newIMUData(const RTIMU_DATA& data)
{
    QMutexLocker lock(&m_refreshMutex);

    m_currentVal = data.accel;

    for (int i = 0; i < 3; i++)
        m_cal->accelCalEnable(i, m_check[i]->checkState() == Qt::Checked);
    m_cal->newAccelCalData(data.accel);

    m_newData = true;
}

void AccelCalDlg::onOk()
{
    killTimer(m_timer);
    m_cal->accelCalSave();
    accept();
}

void AccelCalDlg::onCancel()
{
    killTimer(m_timer);
    reject();
}

void AccelCalDlg::onReset()
{
    QMutexLocker lock(&m_refreshMutex);
    for (int i = 0; i < 3; i++)
        m_cal->accelCalEnable(i, m_check[i]->checkState() == Qt::Checked);
    m_cal->accelCalReset();
    m_okBtn->setEnabled(m_cal->accelCalValid());
}


void AccelCalDlg::onCheckAll()
{
    for (int j = 0; j < 3; j++)
        m_check[j]->setChecked(true);
}

void AccelCalDlg::onUncheckAll()
{
    for (int j = 0; j < 3; j++)
        m_check[j]->setChecked(false);
}

void AccelCalDlg::timerEvent(QTimerEvent *)
{
    QMutexLocker lock(&m_refreshMutex);

    m_okBtn->setEnabled(m_cal->accelCalValid());

    if (m_newData)
        updateControls();
    m_newData = false;
}

void AccelCalDlg::updateControls()
{
    for (int i = 0; i < 3; i++) {
        setRaw(m_raw[i], m_currentVal.data(i));
        setRawMinMax(m_rawMin[i], m_cal->m_accelMin.data(i));
        setRawMinMax(m_rawMax[i], m_cal->m_accelMax.data(i));
    }
}

void AccelCalDlg::setRaw(QLabel *label, float val)
{
    label->setText(QString::number(val, 'f', 4));

    if (val < 0)
        label->setStyleSheet(m_redStyleSheet);
    else
        label->setStyleSheet(m_greenStyleSheet);
}

void AccelCalDlg::setRawMinMax(QLabel *label, float val)
{
    label->setText(QString::number(val, 'f', 4));

    if (val < 0)
        label->setStyleSheet(m_lightRedStyleSheet);
    else
        label->setStyleSheet(m_lightGreenStyleSheet);
}

void AccelCalDlg::layoutWindow()
{
    QHBoxLayout *hLayout;
    QHBoxLayout *checkLayout;
    QLabel *label;
    QSpacerItem *spacer;
    int gridRow = 0;

    m_whiteStyleSheet = QString::fromUtf8("background-color: rgb(255, 255, 255);");
    m_lightRedStyleSheet = QString::fromUtf8("background-color: rgb(200, 100, 100);");
    m_lightGreenStyleSheet = QString::fromUtf8("background-color: rgb(100, 200, 100);");
    m_redStyleSheet = QString::fromUtf8("background-color: rgb(220, 80, 80);");
    m_greenStyleSheet = QString::fromUtf8("background-color: rgb(38, 244, 54);");

    QVBoxLayout *centralLayout = new QVBoxLayout(this);
    centralLayout->setSpacing(20);
    centralLayout->setContentsMargins(6, 6, 6, 6);

    QGridLayout *gridLayout = new QGridLayout();

    gridLayout->setSpacing(6);
    gridLayout->setContentsMargins(4, 4, 4, 4);

    hLayout = new QHBoxLayout();
    hLayout->setSpacing(4);

    spacer = new QSpacerItem(80, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);
    hLayout->addItem(spacer);

    label = getFixedLabel("XMin", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);
    label = getFixedLabel("X", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);
    label = getFixedLabel("XMax", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);

    spacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);
    hLayout->addItem(spacer);

    label = getFixedLabel("YMin", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);
    label = getFixedLabel("Y", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);
    label = getFixedLabel("YMax", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);

    spacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);
    hLayout->addItem(spacer);

    label = getFixedLabel("ZMin", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);
    label = getFixedLabel("Z", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);
    label = getFixedLabel("ZMax", 80, 20, Qt::AlignCenter);
    hLayout->addWidget(label);

    gridLayout->addLayout(hLayout, gridRow++, 0, 1, 1);
    spacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);
    gridLayout->addItem(spacer, gridRow++, 0, 1, 1);

    // the old row
    hLayout = new QHBoxLayout();
    hLayout->setSpacing(4);

    label = getFixedLabel("Old ", 80, 20, Qt::AlignLeft | Qt::AlignVCenter);
    hLayout->addWidget(label);

    m_oldMin = m_cal->m_accelMin;
    m_oldMax = m_cal->m_accelMax;

    for (int j = 0; j < 3; j++) {
        m_oldRawMin[j] = getFixedLabel(QString::number(m_oldMin.data(j)), 80, 20, Qt::AlignCenter, m_whiteStyleSheet);
        hLayout->addWidget(m_oldRawMin[j]);

        checkLayout = new QHBoxLayout();
        checkLayout->setMargin(0);
        checkLayout->setAlignment(Qt::AlignCenter);
        m_check[j] = new QCheckBox();
        checkLayout->addWidget(m_check[j]);
        hLayout->addLayout(checkLayout);

        m_oldRawMax[j] = getFixedLabel(QString::number(m_oldMax.data(j)), 80, 20, Qt::AlignCenter, m_whiteStyleSheet);
        hLayout->addWidget(m_oldRawMax[j]);

        if (j < 2) {
            spacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);
            hLayout->addItem(spacer);
        }
    }

    gridLayout->addLayout(hLayout, gridRow++, 0, 1, 1);
    spacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);
    gridLayout->addItem(spacer, gridRow++, 0, 1, 1);

    // the current row
    hLayout = new QHBoxLayout();
    hLayout->setSpacing(4);

    label = getFixedLabel("Current ", 80, 20, Qt::AlignLeft | Qt::AlignVCenter);
    hLayout->addWidget(label);

    for (int j = 0; j < 3; j++) {
        m_rawMin[j] = getFixedLabel("0", 80, 20, Qt::AlignCenter, m_whiteStyleSheet);
        hLayout->addWidget(m_rawMin[j]);
        m_raw[j] = getFixedLabel("0", 80, 20, Qt::AlignCenter, m_whiteStyleSheet);
        hLayout->addWidget(m_raw[j]);
        m_rawMax[j] = getFixedLabel("0", 80, 20, Qt::AlignCenter, m_whiteStyleSheet);
        hLayout->addWidget(m_rawMax[j]);

        if (j < 2) {
            spacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);
            hLayout->addItem(spacer);
        }
    }

    gridLayout->addLayout(hLayout, gridRow++, 0, 1, 1);
    spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    gridLayout->addItem(spacer, gridRow++, 0, 1, 1);

    spacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);
    gridLayout->addItem(spacer, gridRow++, 0, 1, 1);

    centralLayout->addLayout(gridLayout);

    m_checkAllBtn = new QPushButton("Check All");
    m_uncheckAllBtn = new QPushButton("Uncheck All");
    m_resetBtn = new QPushButton("Reset");
    m_resetBtn->setDefault(true);
    m_okBtn = new QPushButton("OK");
    m_okBtn->setEnabled(m_cal->accelCalValid());
    m_cancelBtn = new QPushButton("Cancel");

    hLayout = new QHBoxLayout();
    hLayout->addSpacing(24);
    hLayout->addWidget(m_checkAllBtn);
    hLayout->addWidget(m_uncheckAllBtn);
    hLayout->addWidget(m_resetBtn);
    hLayout->addStretch();
    hLayout->addWidget(m_okBtn);
    hLayout->addWidget(m_cancelBtn);
    hLayout->addSpacing(24);

    centralLayout->addLayout(hLayout);
}

QLabel* AccelCalDlg::getFixedLabel(QString text, int w, int h, Qt::Alignment alignment, QString styleSheet)
{
    QLabel *label = new QLabel(text);

    label->setMaximumSize(QSize(w + 10, h));
    label->setMinimumSize(QSize(w, h));
    label->setAlignment(alignment);

    if (styleSheet.length() > 0)
        label->setStyleSheet(styleSheet);

    return label;
}
