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


#include <QMessageBox>
#include <qboxlayout.h>
#include <QSettings>

#include "qextserialenumerator.h"

#include "RTHostIMU.h"
#include "SelectFusionDlg.h"
#include "RTHostIMUThread.h"
#include "RTHostIMUClient.h"
#include "AccelCalDlg.h"
#include "MagCalDlg.h"

#define RATE_TIMER_INTERVAL 2

RTHostIMU::RTHostIMU()
    : QMainWindow()
{
    //  This is some normal Qt GUI stuff
    ui.setupUi(this);

    layoutWindow();
    layoutStatusBar();

    //  This code connects up signals from the GUI

    connect(ui.actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui.actionSelectFusionAlgorithm, SIGNAL(triggered()), this, SLOT(onSelectFusionAlgorithm()));
    connect(ui.actionCalibrateAccelerometers, SIGNAL(triggered()), this, SLOT(onCalibrateAccelerometers()));
    connect(ui.actionCalibrateMagnetometers, SIGNAL(triggered()), this, SLOT(onCalibrateMagnetometers()));
    connect(m_enableGyro, SIGNAL(stateChanged(int)), this, SLOT(onEnableGyro(int)));
    connect(m_enableAccel, SIGNAL(stateChanged(int)), this, SLOT(onEnableAccel(int)));
    connect(m_enableCompass, SIGNAL(stateChanged(int)), this, SLOT(onEnableCompass(int)));
    connect(m_enableDebug, SIGNAL(stateChanged(int)), this, SLOT(onEnableDebug(int)));

    //  create the imu thread and connect up the signal

    m_imuThread = new RTHostIMUThread();

    connect(m_imuThread, SIGNAL(newIMUData(const RTIMU_DATA&)),
            this, SLOT(newIMUData(const RTIMU_DATA&)), Qt::DirectConnection);

    connect(m_imuThread, SIGNAL(IMURunning()), this, SLOT(IMURunning()), Qt::DirectConnection);

    connect(this, SIGNAL(newIMU()), m_imuThread, SLOT(newIMU()));

    m_imuThread->resumeThread();

    //  This value allows a sample rate to be calculated

    m_sampleCount = 0;

    //  start some timers to get things going

    m_rateTimer = startTimer(RATE_TIMER_INTERVAL * 1000);

    //  Only update the display 10 times per second to keep CPU reasonable

    m_displayTimer = startTimer(100);

    m_fusionType->setText(RTFusion::fusionName(m_imuThread->getSettings()->m_fusionType));
}

RTHostIMU::~RTHostIMU()
{
}

void RTHostIMU::onSelectFusionAlgorithm()
{
    SelectFusionDlg dlg(m_imuThread->getSettings(), this);

    if (dlg.exec() == QDialog::Accepted) {
        emit newIMU();
        m_fusionType->setText(RTFusion::fusionName(m_imuThread->getSettings()->m_fusionType));
    }
}

void RTHostIMU::onCalibrateAccelerometers()
{
    m_imuThread->getIMU()->setAccelCalibrationMode(true);

    AccelCalDlg dlg(this, m_imuThread->getSettings());

    connect(m_imuThread, SIGNAL(newIMUData(const RTIMU_DATA&)),
        &dlg, SLOT(newIMUData(const RTIMU_DATA&)), Qt::DirectConnection);


    if (dlg.exec() == QDialog::Accepted) {

    }

    disconnect(m_imuThread, SIGNAL(newIMUData(const RTIMU_DATA&)),
        &dlg, SLOT(newIMUData(const RTIMU_DATA&)));
    emit newIMU();
}

void RTHostIMU::onCalibrateMagnetometers()
{
    m_imuThread->getIMU()->setCompassCalibrationMode(true);
    MagCalDlg dlg(this, m_imuThread->getSettings());

    connect(m_imuThread, SIGNAL(newIMUData(const RTIMU_DATA&)),
        &dlg, SLOT(newIMUData(const RTIMU_DATA&)), Qt::DirectConnection);

    if (dlg.exec() == QDialog::Accepted) {

    }
    disconnect(m_imuThread, SIGNAL(newIMUData(const RTIMU_DATA&)),
        &dlg, SLOT(newIMUData(const RTIMU_DATA&)));
    emit newIMU();
}

void RTHostIMU::newIMUData(const RTIMU_DATA& data)
{
    m_imuData = data;
    m_sampleCount++;
}

void RTHostIMU::onEnableGyro(int state)
{
    if (m_imuThread->getIMU() != NULL)
        m_imuThread->getIMU()->setGyroEnable(state == Qt::Checked);
}

void RTHostIMU::onEnableAccel(int state)
{
    if (m_imuThread->getIMU() != NULL)
        m_imuThread->getIMU()->setAccelEnable(state == Qt::Checked);
}

void RTHostIMU::onEnableCompass(int state)
{
    if (m_imuThread->getIMU() != NULL)
        m_imuThread->getIMU()->setCompassEnable(state == Qt::Checked);
}

void RTHostIMU::onEnableDebug(int state)
{
    if (m_imuThread->getIMU() != NULL)
        m_imuThread->getIMU()->setDebugEnable(state == Qt::Checked);
}

void RTHostIMU::closeEvent(QCloseEvent *)
{
    killTimer(m_displayTimer);
    killTimer(m_rateTimer);
    m_imuThread->exitThread();
}

void RTHostIMU::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == m_displayTimer) {
        //  Update the GUI

        m_gyroX->setText(QString::number(m_imuData.gyro.x(), 'f', 6));
        m_gyroY->setText(QString::number(m_imuData.gyro.y(), 'f', 6));
        m_gyroZ->setText(QString::number(m_imuData.gyro.z(), 'f', 6));

        m_accelX->setText(QString::number(m_imuData.accel.x(), 'f', 6));
        m_accelY->setText(QString::number(m_imuData.accel.y(), 'f', 6));
        m_accelZ->setText(QString::number(m_imuData.accel.z(), 'f', 6));

        m_compassX->setText(QString::number(m_imuData.compass.x(), 'f', 6));
        m_compassY->setText(QString::number(m_imuData.compass.y(), 'f', 6));
        m_compassZ->setText(QString::number(m_imuData.compass.z(), 'f', 6));

        m_fusionPoseX->setText(QString::number(m_imuData.fusionPose.x() * RTMATH_RAD_TO_DEGREE, 'f', 6));
        m_fusionPoseY->setText(QString::number(m_imuData.fusionPose.y() * RTMATH_RAD_TO_DEGREE, 'f', 6));
        m_fusionPoseZ->setText(QString::number(m_imuData.fusionPose.z() * RTMATH_RAD_TO_DEGREE, 'f', 6));

        m_fusionQPoseScalar->setText(QString::number(m_imuData.fusionQPose.scalar(), 'f', 6));
        m_fusionQPoseX->setText(QString::number(m_imuData.fusionQPose.x(), 'f', 6));
        m_fusionQPoseY->setText(QString::number(m_imuData.fusionQPose.y(), 'f', 6));
        m_fusionQPoseZ->setText(QString::number(m_imuData.fusionQPose.z(), 'f', 6));

        updateComRXTX(m_comRXLabel, false);
        updateComRXTX(m_comTXLabel, false);

        m_accelMagnitude->setText(QString::number(m_imuData.accel.length(), 'f', 6));
        m_compassMagnitude->setText(QString::number(m_imuData.compass.length(), 'f', 6));

        RTVector3 residuals = m_imuThread->getIMU()->getAccelResiduals();
        m_accelResidualX->setText(QString::number(residuals.x(), 'f', 6));
        m_accelResidualY->setText(QString::number(residuals.y(), 'f', 6));
        m_accelResidualZ->setText(QString::number(residuals.z(), 'f', 6));
    } else {

        //  Update the sample rate

        float rate = (float)m_sampleCount / (float(RATE_TIMER_INTERVAL));
        m_sampleCount = 0;
        m_rateStatus->setText(QString("Sample rate: %1 per second").arg(rate));

        if (m_imuThread->getIMU() == NULL) {
            m_calStatus->setText("No IMU found");
        } else {
            m_calStatus->setText(QString("Accel %1 : Compass %2 : Ellipsoid %3")
                    .arg(m_imuThread->getIMU()->getAccelCalibrationValid() ? "calibrated" : "uncalibrated")
                    .arg(m_imuThread->getIMU()->getCompassCalibrationValid() ? "calibrated" : "uncalibrated")
                    .arg(m_imuThread->getIMU()->getCompassCalibrationEllipsoidValid() ? "in use" : "not in use"));
        }

        if (m_imuThread->getIMU() != NULL) {
            m_imuType->setText(m_imuThread->getIMU()->IMUName());

            if (!m_imuThread->getIMU()->IMUGyroBiasValid())
                m_biasStatus->setText("Gyro bias being calculated - keep IMU still!");
            else
                m_biasStatus->setText("Gyro bias valid");
        }
    }
}

void RTHostIMU::layoutWindow()
{
    QVBoxLayout *vLayout = new QVBoxLayout();
    vLayout->setContentsMargins(3, 3, 3, 3);
    vLayout->setSpacing(1);

    vLayout->addSpacing(10);

    //  Set up com port line and controls

    QHBoxLayout *commLayout = new QHBoxLayout();
    commLayout->setAlignment(Qt::AlignLeft);
    vLayout->addLayout(commLayout);
    m_comLabel = new QLabel("Com port: ");
    m_comLabel->setAlignment(Qt::AlignLeft);
    m_comLabel->setAlignment(Qt::AlignCenter);
    commLayout->addWidget(m_comLabel);

    m_comPort = new QComboBox(this);
    populateComPorts();

    connect(m_comPort, SIGNAL(currentIndexChanged(int)), this, SLOT(newComSetting(int)));

    commLayout->addWidget(m_comPort);
    commLayout->addSpacing(10);

    QLabel *label = new QLabel("Port speed: ");
    label->setAlignment(Qt::AlignLeft);
    label->setAlignment(Qt::AlignCenter);
    commLayout->addWidget(label);

    m_comSpeed = new QComboBox(this);

    for (int i = 0; i < 5; i++)
        m_comSpeed->insertItem(i, speedString[i]);
    m_comSpeed->setCurrentIndex(4);
    commLayout->addWidget(m_comSpeed);
    commLayout->addSpacing(10);

    connect(m_comSpeed, SIGNAL(currentIndexChanged(int)), this, SLOT(newComSetting(int)));

    m_comRXLabel = new QLabel(QString("RX"));
    m_comRXLabel->setAlignment(Qt::AlignLeft);
    m_comRXLabel->setAlignment(Qt::AlignCenter);
    m_comRXLabel->setMaximumHeight(20);
    commLayout->addWidget(m_comRXLabel);
    commLayout->addSpacing(10);

    m_comTXLabel = new QLabel(QString("TX"));
    m_comTXLabel->setAlignment(Qt::AlignLeft);
    m_comTXLabel->setAlignment(Qt::AlignCenter);
    m_comTXLabel->setMaximumHeight(20);
    commLayout->addWidget(m_comTXLabel);

    vLayout->addSpacing(10);

    //  Set up subsystem

    QHBoxLayout *subLayout = new QHBoxLayout();
    subLayout->setAlignment(Qt::AlignLeft);
    vLayout->addLayout(subLayout);
    label = new QLabel("Subsystem: ");
    label->setAlignment(Qt::AlignLeft);
    label->setAlignment(Qt::AlignCenter);
    subLayout->addWidget(label);

    m_subsystem = new QLabel();
    m_subsystem->setMinimumWidth(200);
    subLayout->addWidget(m_subsystem);
    vLayout->addSpacing(10);

    QHBoxLayout *imuLayout = new QHBoxLayout();
    vLayout->addLayout(imuLayout);
    imuLayout->setAlignment(Qt::AlignLeft);
    imuLayout->addWidget(new QLabel("IMU type: "));
    m_imuType = new QLabel();
    imuLayout->addWidget(m_imuType);

    vLayout->addSpacing(10);

    QHBoxLayout *biasLayout = new QHBoxLayout();
    vLayout->addLayout(biasLayout);
    biasLayout->setAlignment(Qt::AlignLeft);
    biasLayout->addWidget(new QLabel("Gyro bias status: "));
    m_biasStatus = new QLabel();
    biasLayout->addWidget(m_biasStatus);

    vLayout->addSpacing(10);

    vLayout->addWidget(new QLabel("Fusion state (quaternion): "));

    QHBoxLayout *dataLayout = new QHBoxLayout();
    dataLayout->setAlignment(Qt::AlignLeft);
    m_fusionQPoseScalar = getFixedPanel("1");
    m_fusionQPoseX = getFixedPanel("0");
    m_fusionQPoseY = getFixedPanel("0");
    m_fusionQPoseZ = getFixedPanel("0");
    dataLayout->addSpacing(30);
    dataLayout->addWidget(m_fusionQPoseScalar);
    dataLayout->addWidget(m_fusionQPoseX);
    dataLayout->addWidget(m_fusionQPoseY);
    dataLayout->addWidget(m_fusionQPoseZ);
    vLayout->addLayout(dataLayout);

    vLayout->addSpacing(10);
    vLayout->addWidget(new QLabel("Pose - roll, pitch, yaw (degrees): "));

    m_fusionPoseX = getFixedPanel("0");
    m_fusionPoseY = getFixedPanel("0");
    m_fusionPoseZ = getFixedPanel("0");
    dataLayout = new QHBoxLayout();
    dataLayout->setAlignment(Qt::AlignLeft);
    dataLayout->addSpacing(30);
    dataLayout->addWidget(m_fusionPoseX);
    dataLayout->addWidget(m_fusionPoseY);
    dataLayout->addWidget(m_fusionPoseZ);
    vLayout->addLayout(dataLayout);

    vLayout->addSpacing(10);
    vLayout->addWidget(new QLabel("Gyros (radians/s): "));

    m_gyroX = getFixedPanel("0");
    m_gyroY = getFixedPanel("0");
    m_gyroZ = getFixedPanel("0");
    dataLayout = new QHBoxLayout();
    dataLayout->setAlignment(Qt::AlignLeft);
    dataLayout->addSpacing(30);
    dataLayout->addWidget(m_gyroX);
    dataLayout->addWidget(m_gyroY);
    dataLayout->addWidget(m_gyroZ);
    vLayout->addLayout(dataLayout);

    vLayout->addSpacing(10);
    vLayout->addWidget(new QLabel("Accelerometers (g): "));

    m_accelX = getFixedPanel("0");
    m_accelY = getFixedPanel("0");
    m_accelZ = getFixedPanel("0");
    dataLayout = new QHBoxLayout();
    dataLayout->addSpacing(30);
    dataLayout->setAlignment(Qt::AlignLeft);
    dataLayout->addWidget(m_accelX);
    dataLayout->addWidget(m_accelY);
    dataLayout->addWidget(m_accelZ);
    vLayout->addLayout(dataLayout);

    vLayout->addSpacing(10);
    vLayout->addWidget(new QLabel("Accelerometer magnitude (g): "));

    m_accelMagnitude = getFixedPanel("0");
    dataLayout = new QHBoxLayout();
    dataLayout->addSpacing(30);
    dataLayout->addWidget(m_accelMagnitude);
    dataLayout->setAlignment(Qt::AlignLeft);
    vLayout->addLayout(dataLayout);

    vLayout->addSpacing(10);
    vLayout->addWidget(new QLabel("Accelerometer residuals (g): "));

    m_accelResidualX = getFixedPanel("0");
    m_accelResidualY = getFixedPanel("0");
    m_accelResidualZ = getFixedPanel("0");
    dataLayout = new QHBoxLayout();
    dataLayout->addSpacing(30);
    dataLayout->setAlignment(Qt::AlignLeft);
    dataLayout->addWidget(m_accelResidualX);
    dataLayout->addWidget(m_accelResidualY);
    dataLayout->addWidget(m_accelResidualZ);
    vLayout->addLayout(dataLayout);

    vLayout->addSpacing(10);
    vLayout->addWidget(new QLabel("Magnetometers (uT): "));

    m_compassX = getFixedPanel("0");
    m_compassY = getFixedPanel("0");
    m_compassZ = getFixedPanel("0");
    dataLayout = new QHBoxLayout();
    dataLayout->setAlignment(Qt::AlignLeft);
    dataLayout->addSpacing(30);
    dataLayout->addWidget(m_compassX);
    dataLayout->addWidget(m_compassY);
    dataLayout->addWidget(m_compassZ);
    vLayout->addLayout(dataLayout);

    vLayout->addSpacing(10);
    vLayout->addWidget(new QLabel("Compass magnitude (uT): "));

    m_compassMagnitude = getFixedPanel("0");
    dataLayout = new QHBoxLayout();
    dataLayout->addSpacing(30);
    dataLayout->addWidget(m_compassMagnitude);
    dataLayout->setAlignment(Qt::AlignLeft);
    vLayout->addLayout(dataLayout);

    vLayout->addSpacing(10);

    vLayout->addSpacing(10);

    QHBoxLayout *fusionBox = new QHBoxLayout();
    QLabel *fusionTypeLabel = new QLabel("Fusion algorithm: ");
    fusionBox->addWidget(fusionTypeLabel);
    fusionTypeLabel->setMaximumWidth(150);
    m_fusionType = new QLabel();
    fusionBox->addWidget(m_fusionType);
    vLayout->addLayout(fusionBox);

    vLayout->addSpacing(10);

    vLayout->addWidget(new QLabel("Fusion controls: "));

    m_enableGyro = new QCheckBox("Enable gyros");
    m_enableGyro->setChecked(true);
    vLayout->addWidget(m_enableGyro);

    m_enableAccel = new QCheckBox("Enable accels");
    m_enableAccel->setChecked(true);
    vLayout->addWidget(m_enableAccel);

    m_enableCompass = new QCheckBox("Enable compass");
    m_enableCompass->setChecked(true);
    vLayout->addWidget(m_enableCompass);

    m_enableDebug = new QCheckBox("Enable debug messages");
    m_enableDebug->setChecked(false);
    vLayout->addWidget(m_enableDebug);

    vLayout->addStretch(1);

    centralWidget()->setLayout(vLayout);
    setFixedSize(700, 700);
    loadSettings();
    updateComState(false);
}

QLabel* RTHostIMU::getFixedPanel(QString text)
{
    QLabel *label = new QLabel(text);
    label->setFrameStyle(QFrame::Panel);
    label->setFixedSize(QSize(100, 16));
    return label;
}

void RTHostIMU::layoutStatusBar()
{
    m_rateStatus = new QLabel(this);
    m_rateStatus->setAlignment(Qt::AlignLeft);
    ui.statusBar->addWidget(m_rateStatus, 1);

    m_calStatus = new QLabel(this);
    m_calStatus->setAlignment(Qt::AlignLeft);
    ui.statusBar->addWidget(m_calStatus, 0);
}

void RTHostIMU::IMURunning()
{
    RTHostIMUClient *client = (RTHostIMUClient *)m_imuThread->getIMU();
    connect(client, SIGNAL(RTArduLinkStatus(int, int, bool, QString, qint64, qint64)), this,
                    SLOT(RTArduLinkStatus(int, int, bool, QString, qint64, qint64)));
    connect(client, SIGNAL(RTArduLinkPortOpen(int)), SLOT(RTArduLinkPortOpen(int)));
    connect(client, SIGNAL(RTArduLinkPortClosed(int)), SLOT(RTArduLinkPortClosed(int)));
    connect(client, SIGNAL(RTArduLinkPortRX(int)), SLOT(RTArduLinkPortRX(int)));
    connect(client, SIGNAL(RTArduLinkPortTX(int)), SLOT(RTArduLinkPortTX(int)));
}

void RTHostIMU::populateComPorts()
{
    QList<QextPortInfo> ports = QextSerialEnumerator::getPorts();

    m_comPort->clear();
    m_comPort->insertItem(0, "Off");
    for (int i = 0; i < ports.size(); i++)
#if defined(Q_OS_WIN) || defined(Q_OS_MAC)
        m_comPort->insertItem(i + 1, ports.at(i).portName);
#else
        m_comPort->insertItem(i + 1, ports.at(i).physName);
#endif

}

void RTHostIMU::newComSetting(int)
{
    saveSettings();
    emit newIMU();
}

void RTHostIMU::RTArduLinkPortOpen(int )
{
    updateComState(true);
}

void RTHostIMU::RTArduLinkPortClosed(int )
{
    updateComState(false);
}

void RTHostIMU::RTArduLinkPortRX(int )
{
    updateComRXTX(m_comRXLabel, true);
}

void RTHostIMU::RTArduLinkPortTX(int )
{
    updateComRXTX(m_comTXLabel, true);
}

void RTHostIMU::RTArduLinkStatus(int, int /* address */, bool /* active */, QString identity, qint64, qint64)
{
    m_subsystem->setText(identity);
}

void RTHostIMU::updateComState(bool open)
{
    QPalette pal = m_comLabel->palette();

    if (open)
        pal.setColor(m_comLabel->backgroundRole(), Qt::green);
    else
        pal.setColor(m_comLabel->backgroundRole(), Qt::red);
    m_comLabel->setPalette(pal);
    m_comLabel->setAutoFillBackground(true);
}

void RTHostIMU::updateComRXTX(QLabel *label, bool active)
{
    QPalette pal = label->palette();

    if (active)
        pal.setColor(label->backgroundRole(), Qt::green);
    else
        pal.setColor(label->backgroundRole(), Qt::lightGray);
    label->setPalette(pal);
    label->setAutoFillBackground(true);
}

void RTHostIMU::loadSettings()
{
    int speed;
    int port;
    QString portString;

    m_settings = new QSettings("RTHostIMU.ini", QSettings::IniFormat);

    //	See if need to set defaults

    if (!m_settings->contains(RTARDULINKHOST_SETTINGS_PORT))
        m_settings->setValue(RTARDULINKHOST_SETTINGS_PORT, "Off");
    if (!m_settings->contains(RTARDULINKHOST_SETTINGS_SPEED))
        m_settings->setValue(RTARDULINKHOST_SETTINGS_SPEED, 4);

    //	Now read in values

    portString = m_settings->value(RTARDULINKHOST_SETTINGS_PORT).toString();
    if ((port = m_comPort->findText(portString)) != -1) {
        m_comPort->setCurrentIndex(port);
    } else {
        m_comPort->addItem(portString);
        m_comPort->setCurrentIndex(m_comPort->count()-1);
    }

    speed = m_settings->value(RTARDULINKHOST_SETTINGS_SPEED).toInt();
    if ((speed >= 0) && (speed <= 4))
        m_comSpeed->setCurrentIndex(speed);
}

void RTHostIMU::saveSettings()
{
    m_settings->setValue(RTARDULINKHOST_SETTINGS_PORT, m_comPort->currentText());
    m_settings->setValue(RTARDULINKHOST_SETTINGS_SPEED, m_comSpeed->currentIndex());
}
