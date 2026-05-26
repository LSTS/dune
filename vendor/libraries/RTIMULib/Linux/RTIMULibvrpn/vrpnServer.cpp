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

//  Original code by Lucas Matias Angarola (lucasangarola@gmail.com):

/**
  ******************************************************************************
  * @file    vrpnServer.c
  * @author  Lucas Matías Angarola
  * @version V1.0.0
  * @date    23-May-2014
  * @brief
  ******************************************************************************
  * @copyright
  *
  *  Permission is hereby granted, free of charge, to any person obtaining a copy of
  *  this software and associated documentation files (the "Software"), to deal in
  *  the Software without restriction, including without limitation the rights to use,
  *  copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
  *  Software, and to permit persons to whom the Software is furnished to do so,
  *  subject to the following conditions:
  *
  *  The above copyright notice and this permission notice shall be included in all
  *  copies or substantial portions of the Software.
  *
  *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
  *  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
  *  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
  *  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
  *  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
  *  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
  *
  *
  ******************************************************************************
  */

#include "vrpnServer.h"
#include <iostream>

void trackerVrpnServer::mainloop()
{
    vrpn_gettimeofday(&_timestamp, NULL);

    vrpn_Tracker::timestamp = _timestamp;

    char msgbuf[1000];

    d_sensor = 0;

    int  len = vrpn_Tracker::encode_to(msgbuf);

    d_connection->pack_message(len, _timestamp, position_m_id, d_sender_id, msgbuf,vrpn_CONNECTION_LOW_LATENCY);

    server_mainloop();
}

void trackerVrpnServer::update_tracking(const RTVector3& position, const RTQuaternion& quaternion)
{
    //Quaternions update
    d_quat[0] = quaternion.x();
    d_quat[1] = quaternion.y();
    d_quat[2] = quaternion.z();
    d_quat[3] = quaternion.scalar();

    //Location update
    pos[0] = position.x();
    pos[1] = position.y();
    pos[2] = position.z();
}

vrpnServer::vrpnServer()
{
    m_Connection = NULL;
    serverTracker = NULL;

    m_Connection = new vrpn_Connection_IP();

    if(m_Connection == NULL)
    {
        std::cout << "vrpnServer() Error: vrpn_Connection_IP could not be created" << std::endl;
        return;
    }

    serverTracker  = new trackerVrpnServer(this->m_Connection);

    if(serverTracker == NULL)
    {
        std::cout << "vrpnServer() Error: trackerVrpnServer could not be created" << std::endl;
        delete m_Connection;
        return;
    }
}

void vrpnServer::mainloop()
{
    serverTracker->mainloop();
    m_Connection->mainloop();
}

vrpnServer::~vrpnServer()
{
    if(serverTracker != NULL)
      delete serverTracker;

    if(m_Connection != NULL)
      delete m_Connection;
}
