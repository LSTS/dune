//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Keila Lima                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <sstream>
#include <iomanip>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Utils/MAVLink.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

namespace Control
{
  namespace UAV
  {
    namespace Ardupilot
    {
      namespace RemoteOperation
      {
        using DUNE_NAMESPACES;

        const uint16_t PWM_MAX  = 1900.0;
        const uint16_t PWM_MIN  = 1100.0;
        const uint16_t PWM_IDLE = 1500.0;
        const float GAIN_MAX = 1.0; //percentage
        const float GAIN_MIN = 0.1;
        //! Used in roll and pitch
        const int TRIM_MAX  = 200;
        const int TRIM_MIN  = -200;
        const int TRIM_STEP = 10;
        const uint16_t INVALID  = 0xffff;
        const std::string remote_actions[14]={"GainUP","GainDown","TiltUP","TiltDown",
        		"LightDimmer","LightBrighter","PitchForward","PitchBackward","RollLeft","RollRight",
				"Stabilize","DepthHold","Manual","PositionHold"};
        const std::string axis[6] = {"Pitch","Roll","Throttle","Heading","Forward","Lateral"};
        const std::string js_params_id[6] = {"JS_GAIN_DEFAULT","JS_GAIN_MAX","JS_GAIN_MIN",
        		"JS_GAIN_STEPS","JS_LIGHTS_STEPS","JS_THR_GAIN"};
        int rc_pwm[11];
        //! List of ArduPlane modes.
		//! From ArduPlane/defines.h in diydrones git repo.
		enum BUTTONS
		{
		};

		//! see: https://www.ardusub.com/operators-manual/rc-input-and-output.html
		enum RC_INPUT
		{
			Pitch          = 0,
			Roll           = 1,
			Throttle       = 2,
			Heading        = 3,
			Forward        = 4,
			Lateral        = 5,
			Camera_Pan     = 6,
			Camera_Tilt    = 7,
			Lights_1_Level = 8,
			Lights_2_Level = 9,
			Video_Switch   = 10,
		};

        struct Arguments
        {
          //!Gain Step increment and decrement
		  int gain_step;
          Address addr;
          uint16_t port;
          //!ArduSub control channels
          MAVLink::RadioChannel rc [11];
        };

        struct Task: public DUNE::Control::BasicRemoteOperation
        {
          Arguments m_args; // Task arguments.
          Network::TCPSocket* m_socket; //TODO move to Transport/MAVLink TCPSocket

          //! Type definition for Arduino packet handler.
			typedef void (Task::* PktHandler)(const mavlink_message_t* msg);
			typedef std::map<int, PktHandler> PktHandlerMap;
			//! Arduino packet handling
			PktHandlerMap m_mlh;

          //! Gains
          float m_gain;
          float m_thr_gain;
          //!Trim values
          float m_pitch_trim;
          float m_roll_trim;
          //! This System ID
          uint8_t m_sysid;
          //! Target_system System ID
          uint8_t m_targetid;
          //! Parsing variables
          uint8_t m_buf[512];
          mavlink_message_t m_recv_msg;

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Control::BasicRemoteOperation(name, ctx),
			m_gain(0.20),
			m_sysid(255),
            m_targetid(1)
          {
            param("Gain Step", m_args.gain_step)
            .minimumValue("10")
            .maximumValue("100")
            .defaultValue("20")
            .units(Units::Percentage)
            .description("Gain Step increment and decrement");

            param("MAVLink ADDR", m_args.addr)
			.defaultValue("127.0.0.1")
			.description("ArduSub Address, can be via MAVProxy");

            param("MAVLink Port", m_args.port)
			.defaultValue("5760")
			.description("ArduSub Port to receive data, can be via MAVProxy");

            param("RC 1 MAX", m_args.rc[RC_INPUT::Pitch].val_max)
			.defaultValue("180")
			.description("Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 1 MIN", m_args.rc[RC_INPUT::Pitch].val_min)
			.defaultValue("-180")
			.description("Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 1 Neutral", m_args.rc[RC_INPUT::Pitch].val_neutral)
			.defaultValue("0")
			.description("Neutral value - associated to the joystick/ccu/accu input.");

            param("RC 2 MAX", m_args.rc[RC_INPUT::Roll].val_max)
			.defaultValue("180")
			.description("Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
			param("RC 2 MIN", m_args.rc[RC_INPUT::Roll].val_min)
			.defaultValue("-180")
			.description("Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 2 Neutral", m_args.rc[RC_INPUT::Roll].val_neutral)
			.defaultValue("0")
			.description("Neutral value - associated to the joystick/ccu/accu input.");


			param("RC 3 MAX", m_args.rc[RC_INPUT::Throttle].val_max)
			.defaultValue("1000")
			.description("Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
			param("RC 3 MIN", m_args.rc[RC_INPUT::Throttle].val_min)
			.defaultValue("-1000")
			.description("Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 3 Neutral", m_args.rc[RC_INPUT::Throttle].val_neutral)
			.defaultValue("0")
			.description("Neutral value - associated to the joystick/ccu/accu input.");


			param("RC 4 MAX", m_args.rc[RC_INPUT::Heading].val_max)
			.defaultValue("180")
			.description("Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
			param("RC 4 MIN", m_args.rc[RC_INPUT::Heading].val_min)
			.defaultValue("-180")
			.description("Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 4 Neutral", m_args.rc[RC_INPUT::Heading].val_neutral)
			.defaultValue("90")
			.description("Neutral value - associated to the joystick/ccu/accu input.");


			param("RC 5 MAX", m_args.rc[RC_INPUT::Forward].val_max)
			.defaultValue("1000")
			.description("Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
			param("RC 5 MIN", m_args.rc[RC_INPUT::Forward].val_min)
			.defaultValue("-1000")
			.description("Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 5 Neutral", m_args.rc[RC_INPUT::Forward].val_neutral)
			.defaultValue("0")
			.description("Neutral value - associated to the joystick/ccu/accu input.");


			param("RC 6 MAX", m_args.rc[RC_INPUT::Lateral].val_max)
			.defaultValue("1000")
			.description("Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
			param("RC 6 MIN", m_args.rc[RC_INPUT::Lateral].val_min)
			.defaultValue("-1000")
			.description("Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 6 Neutral", m_args.rc[RC_INPUT::Lateral].val_neutral)
			.defaultValue("0")
			.description("Neutral value - associated to the joystick/ccu/accu input.");


            // Setup packet handlers
		   // IMPORTANT: set up function to handle each type of MAVLINK packet here
		   m_mlh[MAVLINK_MSG_ID_PARAM_VALUE] = &Task::handleParams;

            bind<Teleoperation>(this);
            bind<TeleoperationDone>(this);

            // Add remote actions.
            addActionAxis("Forward"); // X
            addActionAxis("Lateral"); // Y
            addActionAxis("Up"); // Z
            addActionAxis("Heading"); // R ?

            //! JS Buttons (16)
            addActionButton("TiltUP"); // gimbal with mounted camera
            addActionButton("TiltDown");
            addActionButton("Center");
            //addActionButton("InputHold"); //Handled at A(CCU) side
            addActionButton("LightDimmer");
            addActionButton("LightBrighter");
            addActionButton("GainUP");
            addActionButton("GainDown");
            //addActionButton("ArmDisarm"); //TODO instead of teleoperation?
            //! Shift functions and hold input are handled at a higher level in the (A)CCU side
            //! Shitf Buttons
            addActionButton("PitchForward"); //Trim pitch
            addActionButton("PitchBackward");
            addActionButton("RollLeft"); //Trim roll
            addActionButton("RollRight");
            //! APM Modes
            addActionButton("Stabilize");
            addActionButton("DepthHold");
            addActionButton("Manual");
            //! Free buttons - A, RT, LT

          }

          void
          onUpdateParameters(void)
          {
          }

          void
		  openConnection(void)
          {
        	try{
				m_socket = new TCPSocket;
				m_socket->connect(m_args.addr, m_args.port);
				m_socket->setNoDelay(true);
			inf(DTR("Ardupilot  Teleoperation interface initialized"));
			  }
			  catch(std::exception& e){
				Memory::clear(m_socket);
				war(DTR("Connection failed: %s"),e.what());
				setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
			  }
          }

		  void
		  onResourceAcquisition(void) //TODO separate connection and pwm
          {
            for(int i=0;i<11;i++)
            {
              m_args.rc[i].pwm_max = PWM_MAX;
              m_args.rc[i].pwm_min = PWM_MIN;
              m_args.rc[i].pwm_neutral = PWM_IDLE;
              m_args.rc[i].reverse = false;

            }
            openConnection();
          }
		  void
		  onResourceRelease(void)
		  {
			Memory::clear(m_socket);
		  }

          void
          onDeactivation(void)
          {
            idle();
            disarm();
            war("Deactivating task");
          }

          void
          onConnectionTimeout(void)
          {
            idle();//FIXME doesnt make sense
          }

          void
		  consume(const IMC::Teleoperation* msg)
          {
			  requestParams();
			  changeMode(MAVLink::SUB_MODE_MANUAL);
			  arm();
			  idle();
			  inf(DTR("Gain is at %f percent"),(m_gain*100));
			  war(DTR("Started Teleoperation requested by: %s"), msg->custom.c_str()); //FIXME check src? and resolve id
			  //Control Loops
			  enableControlLoops(IMC::CL_YAW_RATE | IMC::CL_PITCH | IMC::CL_ROLL| IMC::CL_DEPTH| IMC::CL_THROTTLE);
			  //disableControlLoops(mask);
          }

          void
		  consume(const IMC::TeleoperationDone* msg)
          {
        	  disarm();
          }

          bool
		  isReversible(int channel)
          {
			if (channel == RC_INPUT::Forward || channel == RC_INPUT::Lateral
					|| channel == RC_INPUT::Throttle)
				return true;
			return false;
          }

          void
          idle()
          {
            for(int channel=0; channel < 11; channel++)
            {
            	rc_pwm[channel] = PWM_IDLE;
            }
               // Clear pitch/roll trim settings //TODO
//               pitchTrim = 0;
//               rollTrim  = 0;
            actuate();
          }

          //! Send commands to ArduSub
          void
          actuate(void)
          {
            mavlink_message_t msg;
            mavlink_msg_rc_channels_override_pack(m_sysid,0,&msg,m_targetid,0,rc_pwm[0],rc_pwm[1],rc_pwm[2],rc_pwm[3],rc_pwm[4],rc_pwm[5],rc_pwm[6],rc_pwm[7]);
            for(int i=0;i<8;i++)
            	trace(DTR("Actuating on channel %d with PWM: %d"),i+1,rc_pwm[i]); //TODO clean-up

            uint8_t buf[512];
            uint16_t len = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, len);
          }

          bool
          disarm(void)
          {
            try {
              uint8_t buffer[512];
              //sendCommandPacket(MAV_CMD_COMPONENT_ARM_DISARM, 0);
              uint16_t size = MAVLink::packCmd2Buffer(MAV_CMD_COMPONENT_ARM_DISARM,m_targetid,buffer,0);
              sendData(buffer,size);
              return true;
            }
            catch(std::exception& e) {
              war(DTR("Error disarming: %s"),e.what());
              return false;
            }
          }

          bool
          arm(void)
          {
            try
            {
              uint8_t buffer[512];
              uint16_t size = MAVLink::packCmd2Buffer(MAV_CMD_COMPONENT_ARM_DISARM,m_targetid,buffer,1);
              sendData(buffer,size);
              trace(DTR("Sent Arm Command."));
              return true;
            }
            catch (std::exception& e)
            {
              war(DTR("Error arming: %s"),e.what());
              return false;
            }
          }

          void
		  changeMode(uint8_t mode)
          {
        	  uint8_t buf[512];
			  mavlink_message_t msg;

			  mavlink_msg_set_mode_pack(m_sysid, 0, &msg,
										m_targetid,
										1,
										mode);

			  uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
			  sendData(buf, n);
			  debug("Set mode to %d",mode);
          }

      	void
      	requestParams()
      	{
      		uint8_t buf[512];
      		mavlink_message_t msg;
      		for(int js_param=0;js_param<6;js_param++)
      		{
      			char param_id[16];
      			std::strcpy(param_id, js_params_id[js_param].c_str());
				mavlink_msg_param_request_read_pack(m_sysid, 0, &msg, m_targetid, 0,
						param_id, -1);
				uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
				sendData(buf, n);
				inf(DTR("Requesting parameter: %s"),param_id);
      		}
      	}

          void
		  handleParams(const mavlink_message_t* msg)
		  {
			mavlink_param_value_t param;
			mavlink_msg_param_value_decode(msg, &param);
			inf(DTR("Received Parameter: %s with value %f"),param.param_id,param.param_value);
			if(std::strcmp("JS_THR_GAIN",param.param_id) == 0){
				m_thr_gain = param.param_value; //save Throttle gain
			}
		  }

          int
          sendData(uint8_t* buf, uint16_t len) //TODO move to Transport/MAVLink
          {
        	debug(DTR("Sending MAVLINK Message"));
            int res = 0;
			try {
			  res = m_socket->write((char*)buf, len);
			  debug(DTR("Sent %d bytes of %d via UDP: %s %d"),res,len,m_args.addr.c_str(),m_args.port);
			}
			catch (std::exception& e)
			{
			  err(DTR("Unable to send data to MAVLink System: %s"),e.what());
			}
			return res;
          }

          void
		  handleData(int n)
          {
        	  mavlink_status_t status;
        	  double now = Clock::get();
              for (int i = 0; i < n; i++)
              {
                int rv = mavlink_parse_char(MAVLINK_COMM_0, m_buf[i], &m_recv_msg, &status);
                if (status.packet_rx_drop_count)
                	return;
			if (rv)
			{
			  PktHandler h = m_mlh[m_recv_msg.msgid];

			  if (!h)
				continue;  // Ignore this packet (no handler for it)

			  // Call handler
			  (this->*h)(&m_recv_msg);
			  m_sysid = m_recv_msg.sysid;

			}
		  }
          }

          //! Verifies the existence of actions for each axis and button
          //! Converts actions tuples in pwm values and applies idle values to the rest of channels
          void
          onRemoteActions(const IMC::RemoteActions* msg)
          {
        	//mavlink_msg_manual_control_pack(system_id, component_id, msg, target, x, y, z, r, buttons);
        	debug(DTR("Processing RemoteActions: %s"),msg->actions.c_str());
            TupleList tl(msg->actions);
            int exit  = tl.get("Exit", 0);
            int button;
			button = tl.get("GainUP", 0);
			if( button == 1 )
			{
				m_gain+= (float) m_args.gain_step/100;
				m_gain = std::min(m_gain,GAIN_MAX);
				war(DTR("Gain is at %f percent"),(m_gain*100));
			}
			else
			{
				button = tl.get("GainDown", 0);
				if( button == 1)
				{
					m_gain-= (float) m_args.gain_step/100;
					m_gain = std::max(m_gain,GAIN_MIN);
					war(DTR("Gain is at %f percent"),(m_gain*100));
				}

			}

			for(int channel=0;channel<6;channel++)
			{
				float value = tl.get(axis[channel], NAN);
//				war(DTR("Value for %s on channel %f: "),axis[channel].c_str(),channel);
				if( !isNaN(value))
				{
					if(value >= m_args.rc[channel].val_neutral || !isReversible(channel)){
						m_args.rc[channel].reverse = false;
						rc_pwm[channel] = MAVLink::mapRC2PWM(&m_args.rc[channel], value);
//						war(DTR("Value from channel %s (%d):  %f"),axis[channel].c_str(),channel,value);
					}
					else
					{
						m_args.rc[channel].reverse = true;
						rc_pwm[channel] = MAVLink::mapRC2PWM(&m_args.rc[channel], value);
					}
				}
				else {
					//reset channel to neutral control
					m_args.rc[channel].reverse = false;
					rc_pwm[channel] = PWM_IDLE;
				}
			}

            //! Deal with buttons actions 1/0's
			button = tl.get("TiltUP", 0);
			if( button == 1)
			{
				m_args.rc[RC_INPUT::Camera_Tilt].reverse = false;
				rc_pwm[RC_INPUT::Camera_Tilt] = PWM_MAX;
			}
			else {
				button = tl.get("TiltDown", 0);
				if(button == 1)
				{
					m_args.rc[RC_INPUT::Camera_Tilt].reverse = true;
					rc_pwm[RC_INPUT::Camera_Tilt] = PWM_MIN;
				}
				else {
					rc_pwm[RC_INPUT::Camera_Tilt] = PWM_IDLE;
				}
			}

			//Handle Lights
			button = tl.get("LightBrighter", 0);
			if( button == 1)
			{
				m_args.rc[RC_INPUT::Lights_1_Level].reverse = false;
				m_args.rc[RC_INPUT::Lights_2_Level].reverse = false;
				rc_pwm[RC_INPUT::Lights_1_Level] = PWM_MAX;
				rc_pwm[RC_INPUT::Lights_2_Level] = PWM_MAX;  //Same comand for both lights
			}
			else {
				button = tl.get("LightDimmer", 0);
				if( button == 1)
				{
					m_args.rc[RC_INPUT::Lights_1_Level].reverse = true;
					m_args.rc[RC_INPUT::Lights_2_Level].reverse = true;
					rc_pwm[RC_INPUT::Lights_1_Level] = PWM_MIN;
					rc_pwm[RC_INPUT::Lights_2_Level] = PWM_MIN;  //Same comand for both lights
				}
				else {
					button = tl.get("Center", 0);
					if( button == 1) {
						m_args.rc[RC_INPUT::Lights_1_Level].reverse = false;
						m_args.rc[RC_INPUT::Lights_2_Level].reverse = false;
						rc_pwm[RC_INPUT::Lights_1_Level] = PWM_IDLE;
						rc_pwm[RC_INPUT::Lights_2_Level] = PWM_IDLE;
					}
				}
			}

			//Adjust Pitch and Roll - these values don't need to be reset after each iteraction
			button = tl.get("PitchForward", 0);
			if(button == 1) {
				m_args.rc[RC_INPUT::Pitch].reverse = false;
				rc_pwm[RC_INPUT::Pitch] = m_args.rc[RC_INPUT::Pitch].pwm_max*m_gain;
			}

			button = tl.get("PitchBackward", 0);
			if(button == 1) {
				m_args.rc[RC_INPUT::Pitch].reverse = true;
				rc_pwm[RC_INPUT::Pitch] = m_args.rc[RC_INPUT::Pitch].pwm_min*m_gain;
			}

			button = tl.get("RollLeft", 0);
			if(button == 1) {
				m_args.rc[RC_INPUT::Roll].reverse = false;
				rc_pwm[RC_INPUT::Roll] = m_args.rc[RC_INPUT::Roll].pwm_max*m_gain;
			}

			button = tl.get("RollRight", 0);
			if(button == 1) {
				m_args.rc[RC_INPUT::Roll].reverse = true;
				rc_pwm[RC_INPUT::Roll] = m_args.rc[RC_INPUT::Roll].pwm_min*m_gain;
			}

			button = tl.get("Stabilize", 0);
			if( button == 1)
			{
				changeMode(MAVLink::SUB_MODE_STABILIZE);

			}
			button = tl.get("DepthHold", 0);

			if( button == 1)
			{
				changeMode(MAVLink::SUB_MODE_DEPTH_HOLD);
			}
			button = tl.get("PositionHold", 0);
			if( button == 1)
			{
				changeMode(MAVLink::SUB_MODE_POS_HOLD);
			}

			button = tl.get("Manual", 0);
			if( button == 1)
			{
				changeMode(MAVLink::SUB_MODE_MANUAL);
			}

			actuate();
            if(exit == 1)
            {
              disarm();
              IMC::TeleoperationDone* done;
              dispatch(done);
            }
          }

          int
		  receiveData(uint8_t* buf, size_t blen)
		  {
			  try
			  {
				 if (m_socket){
				   trace(DTR("Received MAVLINK data with size: %d"),blen);
				   return m_socket->read(buf, blen);
				 }
			  }
			  catch (std::exception& e)
			  {
				err(DTR("Error Receiving data: %s"), e.what());
				Memory::clear(m_socket);
				setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
				openConnection();
				return 0;
			  }
			return 0;
		  }

          bool
		  poll(double timeout)
		  {
			if (m_socket != NULL)
			  return Poll::poll(*m_socket, timeout);

			return false;
		  }

          void
          onMain(void)
          {
            while (!stopping())
            {
            	int counter = 0;
            	if(m_socket != NULL){
				  while (poll(0.01) && counter < 100)
				  {
					counter++;

					int n = receiveData(m_buf, sizeof(m_buf));
					if (n < 0)
					{
					  debug("Receive error");
					  break;
					}
					handleData(n);
				  }
            	}
            	else {
            		Time::Delay::wait(0.5);
            		openConnection(); //reopen connection
            	}
				  // Handle IMC messages from bus
				  consumeMessages();
			  }
          }
      };
    }
  }
}
}

DUNE_TASK
