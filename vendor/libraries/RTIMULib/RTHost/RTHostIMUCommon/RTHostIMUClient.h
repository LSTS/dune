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

#ifndef _RTHOSTIMUCLIENT_H
#define _RTHOSTIMUCLIENT_H

#include "RTArduLinkHost.h"
#include "IMUDrivers/RTIMU.h"
#include "RTArduLinkIMUDefs.h"

#include <qqueue.h>
#include <qmutex.h>

//  setting keys for client data

#define	RTARDULINKHOST_SETTINGS_PORT    "port"
#define	RTARDULINKHOST_SETTINGS_SPEED   "speed"

class RTIMUSettings;

class RTHostIMUClient : public RTArduLinkHost, public RTIMU
{
    Q_OBJECT

public:
    RTHostIMUClient(RTIMUSettings *settings);
    ~RTHostIMUClient();

    virtual const char *IMUName() { return "RTArduLink"; }
    virtual int IMUType() { return 0; }
    virtual bool IMUInit();
    virtual bool IMURead();
    virtual int IMUGetPollInterval();

signals:
    void updateInputStatus(int inputNumber, bool value);

protected:
    void processCustomMessage(RTARDULINKHOST_PORT *portInfo, unsigned int messageAddress,
                       unsigned char messageType, unsigned char messageParam, unsigned char *data, int dataLength);

private:
    QQueue<RTARDULINKIMU_MESSAGE> m_messageQ;
    QMutex m_lock;
};

extern BaudRateType speedMap[];
extern const char *speedString[];

#endif // _RTHOSTIMUCLIENT_H
