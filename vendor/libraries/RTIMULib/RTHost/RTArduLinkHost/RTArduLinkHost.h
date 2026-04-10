///////////////////////////////////////////////////////////
//
//  This file is part of RTArduLink
//
//  Copyright (c) 2014 richards-tech
//
//  Permission is hereby granted, free of charge,
//  to any person obtaining a copy of
//  this software and associated documentation files
//  (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute,
//  sublicense, and/or sell copies of the Software, and
//  to permit persons to whom the Software is furnished
//  to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions
//  of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF
//  ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
//  TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
//  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

#ifndef RTARDULINKHOST_H
#define RTARDULINKHOST_H

//	RTArduLinkHost is the common RTArduLink API and library for host processors

#include "RTArduLinkDefs.h"
#include "qextserialport.h"

#include <QObject>

//  This value defines how manu USB/serial ports are supported
//  This can be modified if required

#define	RTARDULINKHOST_MAX_PORTS            8               // max supported COM ports

//  Poll Intervals and timeouts
//
//  Note - all intervals are in units of mS.

#define	RTARDULINKHOST_POLL_INTERVAL        1000            // time between polls in normal operation
#define	RTARDULINKHOST_POLL_TIMEOUT         (4 * RTARDULINKHOST_POLL_INTERVAL)	// timeout interval after which link is declared down

#define	RTARDULINKHOST_BACKGROUND_INTERVAL  5               // background loop interval
#define	RTARDULINKHOST_IDENTITY_INTERVAL    (5 * 1000)      // identity request interval

//  RTARDULINKHOST_SUBSYSTEM maintains state for each subsystem port/address combination

typedef struct
{
    int address;                                            // address of this entry
    bool active;                                            // if polling operational
    bool waitingForIdentity;                                // if still waiting for identity
    bool waitingForPoll;                                    // if still waiting for poll response
    char identity[RTARDULINK_DATA_MAX_LEN];                 // identity string
    qint64 pollsOut;                                        // number of polls sent
    qint64 pollsIn;                                         // number of polls received

} RTARDULINKHOST_SUBSYSTEM;

//  RTARDULINKHOST_PORT maintains state for each USB/serial port

typedef struct
{
    int index;                                              // index of port
    bool open;                                              // true if open
    QextSerialPort *port;                                   // serial port driver
    PortSettings settings;                                  // the settings structure
    RTARDULINK_RXFRAME RXFrame;                             // structure to maintain receive frame state
    RTARDULINK_FRAME RXFrameBuffer;                         // used to assemble received frames
    RTARDULINK_FRAME TXFrameBuffer;                         // used to assemble frames for transmission
} RTARDULINKHOST_PORT;

//	The RTArduLinkHost object itself. This should be sub-classed
//	in a custom application.

class RTArduLinkHost : public QObject
{
    Q_OBJECT

public:
    RTArduLinkHost(QObject *parent);
    virtual ~RTArduLinkHost();

//----------------------------------------------------------
//
//  Public functions. These can be called to configure the library
//  and also send messages.

//  begin() is used to start processing RTArduLink. Any configured ports
//  will be opened and polling initiated

    bool begin();                                           // start comms

//  addPort() adds a new USB/serial port for processing.
//
//  port        = the subsystem port number to assign (0 - (RTARDULINKHOST_MAX_PORTS - 1))
//  portName    = the name of the port to open (eg COM3, /dev/ttyUSB0)
//  portSpeed   = the serial port speed
//
//  returns true if the port was added, false if the addPort failed.

    bool addPort(int port, QString portName, BaudRateType portSpeed); // add a serial port

//  deletePort() deletes a previously added port at index port.

    void deletePort(int port);                              // delete a serial port

//  end() terminates RTArduLink processing and removes all ports.

    void end();                                             // end communications

//  sendMessage() can be called to send a message to a subsystem
//
//  port            = subsystem port index to send the message on
//  messageAddress  = the subsystem address of the target system
//  messageType     = the messageType codes
//  messageParam    = a parameter for the type
//  data            = a pointer to the data field (NULL if there isn't one)
//  length          = length of data in data field (0 - 56)
//
//  Returns true if the message was sent, false if there was an error

    bool sendMessage(int port, unsigned int messageAddress, unsigned char messageType, 
        unsigned char messageParam, unsigned char *data, int length);

public slots:
    void readyRead();

signals:
//----------------------------------------------------------
//
//  Signals. These are emitted when various conditions occur. They can be connected
//  to slots in the custom app code.

//  RTArduLinkStatus is emitted when a subsystem's status has changed or a poll event has occurred
//
//  port        = subsystem port index
//  address     = subsystem address
//  active      = true if the RTArduLink to this subsystem is active, false if not
//  identity    = pointer to the identity string supplied by the subsystem
//  pollsIn     = number of polls received while active
//  pollsOut    = number of polls send while active

    void RTArduLinkStatus(int port, int address, bool active, QString identity, qint64 pollsIn, qint64 pollsOut);

//  RTArduLinkPortOpen is emitted when a USB/serial port has been opened

    void RTArduLinkPortOpen(int port);

//  RTArduLinkPortClosed is emitted when a USB/serial port has been closed

    void RTArduLinkPortClosed(int port);

//  RTArduLinkPortTX is emitted when a message is transmitted on a port

    void RTArduLinkPortTX(int port);

//  RTArduLinkPortRX is emitted when a message is received on a port

    void RTArduLinkPortRX(int port);

protected:

//----------------------------------------------------------
//
//  Overrides. These functions can be overridden in the sub-class

//  processCustomMessage() passes a received message to the custom code
//  The parameters include a pointer to the RTARDULINKHOST_PORT on which
//  the message was received and the various message fields

    virtual void processCustomMessage(RTARDULINKHOST_PORT *portInfo, unsigned int messageAddress,
                        unsigned char messageType, unsigned char messageParam, unsigned char *data, int dataLength);

//  processBackground() is called once per background loop and custom code can perform
//  any regular background processing using this call

    virtual void processBackground() {};

//----------------------------------------------------------

    void timerEvent(QTimerEvent *event);

    RTARDULINKHOST_SUBSYSTEM m_subsystem[RTARDULINKHOST_MAX_PORTS][RTARDULINK_ADDRESSES];   // the subsystem array
    RTARDULINKHOST_PORT m_ports[RTARDULINKHOST_MAX_PORTS];  // the port array
    bool m_running;

private:
    void initSubsystem();
    void processReceivedMessage(RTARDULINKHOST_PORT *portInfo);
    void sendIdentifyRequest();
    void sendPollRequest();
    void emitStatus(int port, int address);
    void closePort(RTARDULINKHOST_PORT *portInfo);

    int m_backgroundTimerID;
    int m_identityTimerID;
    int m_pollTimerID;
};

#endif // RTARDULINKHOST_H
