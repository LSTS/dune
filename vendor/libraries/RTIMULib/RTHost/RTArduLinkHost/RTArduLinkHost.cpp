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

#include "RTArduLinkHost.h"
#include "RTArduLinkUtils.h"

#include <QTimerEvent>
#include "qdebug.h"

//  Uncomment this symbol to get message trace

//#define RTARDULINKHOST_TRACE

RTArduLinkHost::RTArduLinkHost(QObject *parent)
    : QObject(parent)
{
    for (int i = 0; i < RTARDULINKHOST_MAX_PORTS; i++) {
        m_ports[i].index = i;
        m_ports[i].port = NULL;
    }
    m_running = false;
}


RTArduLinkHost::~RTArduLinkHost()
{
    if (m_running)
        end();
}

bool RTArduLinkHost::begin()
{
    initSubsystem();
    m_backgroundTimerID = startTimer(RTARDULINKHOST_BACKGROUND_INTERVAL);
    m_identityTimerID = startTimer(RTARDULINKHOST_IDENTITY_INTERVAL);
    m_pollTimerID = startTimer(RTARDULINKHOST_POLL_INTERVAL);
    sendIdentifyRequest();
    m_running = true;
    return true;
}

bool RTArduLinkHost::addPort(int port, QString portName, BaudRateType portSpeed)
{
    RTARDULINKHOST_PORT *portInfo;

    if ((port < 0) || (port >= RTARDULINKHOST_MAX_PORTS))
        return false;

    portInfo = m_ports + port;

    if (portInfo->port != NULL) {                           // must clear old one
        deletePort(port);
    }

    portInfo->settings.BaudRate = portSpeed;
    portInfo->settings.DataBits = DATA_8;
    portInfo->settings.FlowControl = FLOW_OFF;
    portInfo->settings.Parity = PAR_NONE;
    portInfo->settings.StopBits = STOP_1;
    portInfo->settings.Timeout_Millisec = -1;
    portInfo->port = new QextSerialPort(portName, portInfo->settings, QextSerialPort::Polling);

    RTArduLinkRXFrameInit(&(portInfo->RXFrame), &(portInfo->RXFrameBuffer));
    portInfo->TXFrameBuffer.sync0 = RTARDULINK_MESSAGE_SYNC0;
    portInfo->TXFrameBuffer.sync1 = RTARDULINK_MESSAGE_SYNC1;
    connect(portInfo->port, SIGNAL(readyRead()), this, SLOT(readyRead()));
    portInfo->open = false;
    return true;
}

void RTArduLinkHost::deletePort(int port)
{
    RTARDULINKHOST_PORT *portInfo;

    if ((port < 0) || (port >= RTARDULINKHOST_MAX_PORTS))
        return;

    portInfo = m_ports + port;
    if (portInfo->port == NULL)
        return;
    closePort(portInfo);
    delete portInfo->port;
    portInfo->port = NULL;
}

void RTArduLinkHost::end()
{
    for (int i = 0; i < RTARDULINKHOST_MAX_PORTS; i++)
        deletePort(i);

    killTimer(m_backgroundTimerID);
    killTimer(m_identityTimerID);
    killTimer(m_pollTimerID);

    initSubsystem();
    m_running = false;
}

void RTArduLinkHost::initSubsystem()
{
    RTARDULINKHOST_SUBSYSTEM *subsystem;
    int port, address;

    for (port = 0; port < RTARDULINKHOST_MAX_PORTS; port++) {
        subsystem = m_subsystem[port];
        for (address = 0; address < RTARDULINK_ADDRESSES; address++, subsystem++) {
            subsystem->address = address;
            subsystem->active = false;
            subsystem->identity[0] = 0;
            subsystem->pollsIn = 0;
            subsystem->pollsOut = 0;
            emitStatus(port, address);
        }
    }
}

void RTArduLinkHost::timerEvent(QTimerEvent *event)
{
    RTARDULINKHOST_PORT *portInfo;

    if (event->timerId() == m_backgroundTimerID) {
        processBackground();
        for (int i = 0; i < RTARDULINKHOST_MAX_PORTS; i++) {
            portInfo = m_ports + i;
            if (portInfo->port == NULL)
                continue;
            if (!portInfo->port->isOpen()) {
                if (portInfo->open)
                    emit RTArduLinkPortClosed(i);
                portInfo->open = false;
                if (portInfo->port->open(QIODevice::ReadWrite)) {
                    emit RTArduLinkPortOpen(i);
                    portInfo->open = true;
                }
            }
        }
        readyRead();
    } else if (event->timerId() == m_identityTimerID) {
        sendIdentifyRequest();
    }	else if (event->timerId() == m_pollTimerID) {
        sendPollRequest();
    }
}


void RTArduLinkHost::readyRead()
{
    QByteArray data;
    int bytesAvailable;
    unsigned char *charData;
    RTARDULINKHOST_PORT *portInfo;

    for (int index = 0; index < RTARDULINKHOST_MAX_PORTS; index++) {
        portInfo = m_ports + index;
        if (portInfo->port == NULL)
            continue;

        if (!portInfo->port->isOpen()) {
            if (portInfo->open)
                emit RTArduLinkPortClosed(index);
            portInfo->open = false;
            continue;
        }

        bytesAvailable = portInfo->port->bytesAvailable();
        if (bytesAvailable == -1) {                             // port must have closed or had an error
            closePort(portInfo);
            continue;
        }
        if (bytesAvailable) {
            data = portInfo->port->readAll();
            charData = (unsigned char *)data.constData();
            for (int i = 0; i < data.length(); i++) {
                if (!RTArduLinkReassemble(&(portInfo->RXFrame), *charData++))
                    qDebug() << QString("Reassembly error on port %1").arg(index);
                if (portInfo->RXFrame.complete) {
                    processReceivedMessage(portInfo);
                    RTArduLinkRXFrameInit(&(portInfo->RXFrame), &(portInfo->RXFrameBuffer));
                }
            }
        }
    }
}

void RTArduLinkHost::processReceivedMessage(RTARDULINKHOST_PORT *portInfo)
{
    RTARDULINK_MESSAGE *message;                            // a pointer to the message part of the frame
    unsigned int address;
    RTARDULINKHOST_SUBSYSTEM *subsystem;

    emit RTArduLinkPortRX(portInfo->index);

    if ((portInfo->RXFrameBuffer.messageLength < RTARDULINK_MESSAGE_HEADER_LEN) ||
        (portInfo->RXFrameBuffer.messageLength > RTARDULINK_MESSAGE_MAX_LEN)) {
            qDebug() << QString("Received message with incorrect length %1").arg(portInfo->RXFrameBuffer.messageLength);
        return;
    }

    message = &(portInfo->RXFrameBuffer.message);           // get the message pointer
    address = RTArduLinkConvertUC2ToUInt(message->messageAddress);
    if (address == RTARDULINK_BROADCAST_ADDRESS) {
        qDebug() << "Received message with broadcast address";
        return;
    }
    subsystem = m_subsystem[portInfo->index] + address;
#ifdef RTARDULINKHOST_TRACE
    qDebug() << "Received " << message->messageType << " from port " << portInfo->index << " address " << address;
#endif
    switch (message->messageType)
    {
        case RTARDULINK_MESSAGE_POLL:
            subsystem->pollsIn++;
            emitStatus(portInfo->index, address);
            if (!subsystem->active && ((int)strlen(subsystem->identity) > 0)) {
#ifdef RTARDULINKHOST_TRACE
                qDebug() << QString("Subsystem port %1 address %2 active").arg(portInfo->index).arg(address);
#endif
                subsystem->active = true;
                subsystem->pollsIn = 0;
                subsystem->pollsOut = 0;
                emitStatus(portInfo->index, address);
            }
            subsystem->waitingForPoll = false;
            break;

        case RTARDULINK_MESSAGE_IDENTITY:
            subsystem->waitingForIdentity = false;
            message->data[RTARDULINK_DATA_MAX_LEN - 1] = 0;	// make sure zero terminated
            strcpy(subsystem->identity, (const char *)message->data);
#ifdef RTARDULINKHOST_TRACE
            qDebug() << QString("Received identity %1") .arg(subsystem->identity);
#endif
            emitStatus(portInfo->index, address);
            break;

        case RTARDULINK_MESSAGE_DEBUG:
            message->data[RTARDULINK_DATA_MAX_LEN - 1] = 0;	// make sure zero terminated
            qDebug() << QString("Debug message from port %1, address %2: %3")
                    .arg(portInfo->index).arg(address).arg((char *)message->data);
            break;

        default:
            processCustomMessage(portInfo,address, message->messageType, message->messageParam,
                        message->data, portInfo->RXFrameBuffer.messageLength - RTARDULINK_MESSAGE_HEADER_LEN);
            break;
    }
}

void RTArduLinkHost::sendIdentifyRequest()
{
    int port, address;
    RTARDULINKHOST_SUBSYSTEM *subsystem;

    // check if any active subsystem failed to respond

    for (port = 0; port < RTARDULINKHOST_MAX_PORTS; port++) {
        subsystem = m_subsystem[port];
        for (address = 0; address < RTARDULINK_ADDRESSES; address++, subsystem++) {
            if (subsystem->active && subsystem->waitingForIdentity) {
                qDebug() << QString("Subsystem %1 failed to re-identify") .arg(subsystem->identity);
                subsystem->active = false;
                subsystem->identity[0] = 0;
                emitStatus(port, address);
            }
        }
    }

    for (int i = 0; i < RTARDULINKHOST_MAX_PORTS; i++)
        sendMessage(i, RTARDULINK_BROADCAST_ADDRESS, RTARDULINK_MESSAGE_IDENTITY, 0, NULL, 0);

    for (port = 0; port < RTARDULINKHOST_MAX_PORTS; port++) {
        subsystem = m_subsystem[port];
        for (address = 0; address < RTARDULINK_ADDRESSES; address++, subsystem++)
            subsystem->waitingForIdentity = true;
    }

//  qDebug() << "Sent identity request";
}

void RTArduLinkHost::sendPollRequest()
{
    int port, address;
    RTARDULINKHOST_SUBSYSTEM *subsystem;

    // check if any active subsystem failed to respond
    for (port = 0; port < RTARDULINKHOST_MAX_PORTS; port++) {
        subsystem = m_subsystem[port];
        for (address = 0; address < RTARDULINK_ADDRESSES; address++, subsystem++) {
            if (subsystem->active && subsystem->waitingForPoll) {
                qDebug() << QString("Subsystem %1 failed to respond to poll") .arg(subsystem->identity);
                subsystem->active = false;
                emitStatus(port, address);
            }
        }
    }

    for (int i = 0; i < RTARDULINKHOST_MAX_PORTS; i++)
        sendMessage(i, RTARDULINK_BROADCAST_ADDRESS, RTARDULINK_MESSAGE_POLL, 0, NULL, 0);

    for (port = 0; port < RTARDULINKHOST_MAX_PORTS; port++) {
        subsystem = m_subsystem[port];
        for (address = 0; address < RTARDULINK_ADDRESSES; address++, subsystem++) {
            subsystem->pollsOut++;
            subsystem->waitingForPoll = true;
        }
    }

//  qDebug() << "Sent poll";
}

bool RTArduLinkHost::sendMessage(int port, unsigned int messageAddress, unsigned char messageType, 
                unsigned char messageParam, unsigned char *data, int length)
{
    RTARDULINK_MESSAGE *message;
    qint64 bytesWritten;
    qint64 totalLength;
    unsigned char *framePtr;
    RTARDULINKHOST_PORT *portInfo;

    if ((port < 0) || (port >= RTARDULINKHOST_MAX_PORTS))
        return false;

    portInfo = m_ports + port;

    if (portInfo->port == NULL)
        return false;
    if (!portInfo->port->isOpen())
        return false;
    if (length > RTARDULINK_DATA_MAX_LEN)
        return false;

    message = &(portInfo->TXFrameBuffer.message);

#ifdef RTARDULINKHOST_TRACE
    qDebug() << "Sending " << message->messageType << " to port " << portInfo->index << " address " << messageAddress;
#endif

    portInfo->TXFrameBuffer.messageLength = length + RTARDULINK_MESSAGE_HEADER_LEN;
    RTArduLinkConvertIntToUC2(messageAddress, message->messageAddress);
    message->messageType = messageType;
    message->messageParam = messageParam;
    if (data != NULL)
        memcpy(message->data, data, length);
    RTArduLinkSetChecksum(&portInfo->TXFrameBuffer);
    totalLength = RTARDULINK_FRAME_HEADER_LEN + RTARDULINK_MESSAGE_HEADER_LEN + length;
    framePtr = (unsigned char *)&portInfo->TXFrameBuffer;

    while (totalLength > 0) {
        bytesWritten = portInfo->port->write((const char *)framePtr, totalLength);
        if (bytesWritten == -1) {
            closePort(portInfo);
            return false;
        }
        totalLength -= bytesWritten;
        framePtr += bytesWritten;
    }
    emit RTArduLinkPortTX(port);
    return true;
}

void RTArduLinkHost::closePort(RTARDULINKHOST_PORT *portInfo)
{
    if (portInfo->port == NULL)
        return;
    if (portInfo->port->isOpen()) {
        portInfo->port->close();
        if (portInfo->open)
            emit RTArduLinkPortClosed(portInfo->index);
    }
    portInfo->open = false;
}

void RTArduLinkHost::emitStatus(int port, int address)
{
    RTARDULINKHOST_SUBSYSTEM *subsystem;

    subsystem = m_subsystem[port] + address;
    if (subsystem->active)
        emit RTArduLinkStatus(port, address, true, subsystem->identity, subsystem->pollsIn, subsystem->pollsOut);
    else
        emit RTArduLinkStatus(port, address, false, subsystem->identity, 0, 0);
}

//  Dummy functions to satisfy linker if not overridden

void RTArduLinkHost::processCustomMessage(RTARDULINKHOST_PORT *, unsigned int,
    unsigned char, unsigned char, unsigned char *, int ) {}
