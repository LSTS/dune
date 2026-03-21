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
  * @file    vrpnServer.h
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

#ifndef _VRPNSERVER_H
#define _VRPNSERVER_H

#include "vrpn_Connection.h"
#include "vrpn_Text.h"
#include "vrpn_Tracker.h"

#include "RTIMULib.h"

class trackerVrpnServer : public vrpn_Tracker
{
public:
    // Tracker0 is the name of the device. Any string could be used here to name the device.
    // You can connect through a VRPN Client using the followign address:
    // Tracker0@Device_IP_number or Tracker0@localhost.
    
    trackerVrpnServer( vrpn_Connection *c = 0 ) : vrpn_Tracker( "Tracker0", c ){};	
    virtual ~trackerVrpnServer() {};

    virtual void mainloop();
    void update_tracking(const RTVector3& position, const RTQuaternion& quaternion);

protected:
    struct timeval _timestamp;
    double value;
};


class vrpnServer
{
public:
	vrpnServer();
    	~vrpnServer();
    	void mainloop();

	trackerVrpnServer *serverTracker;

protected:
	vrpn_Connection_IP *m_Connection;

};

#endif // _VRPNSERVER_H
