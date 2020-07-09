//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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

        const float PWM_MAX = 1900.0;
        const float PWM_MIN = 1100.0;
        const float PWM_IDLE = 1500.0;
        const float GAIN_MAX = 1.0; //percentage
        const float GAIN_MIN = 0.1;
        //! Used in roll and pitch
        const int TRIM_MAX = 200;
        const int TRIM_MIN = -200;
        const int TRIM_STEP = 10;
        const uint16_t NOTUSED = 0; //0xffff;
        //! Shift functions and input hold are handled at a higher level in the (A)CCU side
        const std::string remote_actions[19] =
          { "GainUP", "GainDown", "TiltUP", "TiltDown", "Center", "LightDimmer",
              "LightBrighter", "PitchForward", "PitchBackward", "RollLeft",
              "RollRight", "Stabilize", "DepthHold", "Manual", "PositionHold",
              "Arm", "Disarm","CameraPanUP","CameraPanDown"}; //TODO home and SK
        const std::string axis[6] =
          { "Pitch", "Roll", "Throttle", "Heading", "Forward", "Lateral" };
        const std::string js_params_id[6] =
          { "MNT_RC_IN_TILT", "JS_GAIN_MAX", "JS_GAIN_MIN", "JS_GAIN_STEPS",
              "JS_LIGHTS_STEPS", "JS_THR_GAIN" };
        int rc_pwm[11];

        //! see: https://www.ardusub.com/operators-manual/rc-input-and-output.html
        enum RC_INPUT
        {
          Pitch = 0,
          Roll = 1,
          Throttle = 2,
          Heading = 3,
          Forward = 4,
          Lateral = 5,
          Camera_Pan = 8,
          Camera_Tilt = 7,
          Lights_1_Level = 6,
          Lights_2_Level = 9,
          Video_Switch = 10,
        };

        struct Arguments
        {
          //!Gain Step increment and decrement
          int gain_step;
          Address addr;
          uint16_t port;
          uint16_t listen;
          //!ArduSub control channels
          MAVLink::RadioChannel rc[11];
        };

        struct Task : public DUNE::Control::BasicRemoteOperation
        {
          Arguments m_args; // Task arguments.
          Network::UDPSocket* m_socket; //TODO move to Transport/MAVLink
//          Network::UDPSocket* m_sender; //TODO move to Transport/MAVLink

          //! Type definition for Arduino packet handler.
          typedef void
          (Task::*PktHandler)(const mavlink_message_t* msg);
          typedef std::map<int, PktHandler> PktHandlerMap;
          //! Arduino packet handling
          PktHandlerMap m_mlh;

          //! Gains
          float m_gain;
          float m_thr_gain;
          //! Steps - https://github.com/ArduPilot/ardupilot/blob/master/Tools/Frame_params/Sub/bluerov2-3_5.params
          int m_lights_step;
          int m_cam_tilt_steps;
          //!Trim values
          int m_pitch_trim;
          int m_roll_trim;
          //! This System ID
          uint8_t m_sysid;
          //! Target_system System ID
          uint8_t m_targetid;
          //! Parsing variables
          uint8_t m_buf[512];
          mavlink_message_t m_recv_msg;
          //! Timer for heartbeat
          Time::Counter<float> m_timer;
          //! MAVLink system status
          int m_sys_status;
          //!Communication status
          bool m_comms;
          //! previous GCS SYSID - before Dune takes control
          int m_gcs;

          Task(const std::string& name, Tasks::Context& ctx) :
              DUNE::Control::BasicRemoteOperation(name, ctx), m_gain(0.20), m_lights_step(
                  100), m_cam_tilt_steps(0), m_pitch_trim(0), m_roll_trim(0), m_sysid(
                  254), m_targetid(1), m_sys_status(
                  MAV_STATE_UNINIT), m_comms(false), m_gcs(1)
          {
            param("Gain Step", m_args.gain_step).minimumValue("2").maximumValue(
                "10").defaultValue("10").units(Units::Percentage).description(
                "Gain Step increment and decrement");

            param("IPv4 - Address", m_args.addr).defaultValue("127.0.0.1").description(
                "ArduSub Address, can be via MAVProxy");

            param("Port", m_args.port).defaultValue("5760").description(
                "ArduSub Port to receive data, can be via MAVProxy");

            param("Listen Port", m_args.listen).defaultValue("14552").description(
                "Local port to connect to MAVProxy");

            param("RC 1 MAX", m_args.rc[RC_INPUT::Pitch].val_max).defaultValue(
                "180").description(
                "Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 1 MIN", m_args.rc[RC_INPUT::Pitch].val_min).defaultValue(
                "-180").description(
                "Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 1 Neutral", m_args.rc[RC_INPUT::Pitch].val_neutral).defaultValue(
                "0").description(
                "Neutral value - associated to the joystick/ccu/accu input.");

            param("RC 2 MAX", m_args.rc[RC_INPUT::Roll].val_max).defaultValue(
                "180").description(
                "Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 2 MIN", m_args.rc[RC_INPUT::Roll].val_min).defaultValue(
                "-180").description(
                "Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 2 Neutral", m_args.rc[RC_INPUT::Roll].val_neutral).defaultValue(
                "0").description(
                "Neutral value - associated to the joystick/ccu/accu input.");

            param("RC 3 MAX", m_args.rc[RC_INPUT::Throttle].val_max).defaultValue(
                "1000").description(
                "Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 3 MIN", m_args.rc[RC_INPUT::Throttle].val_min).defaultValue(
                "-1000").description(
                "Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 3 Neutral", m_args.rc[RC_INPUT::Throttle].val_neutral).defaultValue(
                "0").description(
                "Neutral value - associated to the joystick/ccu/accu input.");

            param("RC 4 MAX", m_args.rc[RC_INPUT::Heading].val_max).defaultValue(
                "180").description(
                "Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 4 MIN", m_args.rc[RC_INPUT::Heading].val_min).defaultValue(
                "-180").description(
                "Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 4 Neutral", m_args.rc[RC_INPUT::Heading].val_neutral).defaultValue(
                "90").description(
                "Neutral value - associated to the joystick/ccu/accu input.");

            param("RC 5 MAX", m_args.rc[RC_INPUT::Forward].val_max).defaultValue(
                "1000").description(
                "Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 5 MIN", m_args.rc[RC_INPUT::Forward].val_min).defaultValue(
                "-1000").description(
                "Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 5 Neutral", m_args.rc[RC_INPUT::Forward].val_neutral).defaultValue(
                "0").description(
                "Neutral value - associated to the joystick/ccu/accu input.");

            param("RC 6 MAX", m_args.rc[RC_INPUT::Lateral].val_max).defaultValue(
                "1000").description(
                "Maximum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 6 MIN", m_args.rc[RC_INPUT::Lateral].val_min).defaultValue(
                "-1000").description(
                "Minimum manual control normalized value - associated to the joystick/ccu/accu input.");
            param("RC 6 Neutral", m_args.rc[RC_INPUT::Lateral].val_neutral).defaultValue(
                "0").description(
                "Neutral value - associated to the joystick/ccu/accu input.");

            // Setup packet handlers
            // IMPORTANT: set up function to handle each type of MAVLINK packet here
            m_mlh[MAVLINK_MSG_ID_PARAM_VALUE] = &Task::handleParams;
            m_mlh[MAVLINK_MSG_ID_SYSTEM_TIME] = &Task::handleSysTime;
            m_mlh[MAVLINK_MSG_ID_RC_CHANNELS] = &Task::handleRC;

            bind<Teleoperation>(this);
            bind<TeleoperationDone>(this);

            // Add remote actions.
            addActionAxis(axis[Throttle]); // X
            addActionAxis(axis[Heading]); // Y
            addActionAxis(axis[Forward]); // Z
            addActionAxis(axis[Lateral]); // R

            //! JS Buttons (17)
            for (int button = 0; button < 17; button++)
            {
              addActionButton(remote_actions[button]);
              //! Free buttons - A, RT, LT
            }

          }

          void
          onUpdateParameters(void)
          {
          }

          void
          openConnection(void)
          {
            try
            {
              m_socket = new UDPSocket;
              m_socket->bind(m_args.listen, Address::Any, true);
              m_socket->connect(m_args.addr, m_args.port);
              //m_socket->setNoDelay(true);
              //m_sender->setNoDelay(true);
              inf(DTR("Ardupilot  Teleoperation interface initialized"));
              m_comms = true;
              requestGCSParam();
              debug(DTR("Sending GCS configurations"));
              setParamByName("FS_GCS_ENABLE", 3.0); //Heartbeat lost 0:Disabled; 1:Warn; 2:Disarm; 3:Depth Hold; 4:Surface
            }
            catch (std::exception& e)
            {
              m_comms = false;
              Memory::clear(m_socket);
              war(DTR("Connection failed: %s"), e.what());
              setEntityState(IMC::EntityState::ESTA_NORMAL,
                             Status::CODE_COM_ERROR);
            }
          }

          void
          onResourceAcquisition(void)
          {
            m_timer.setTop(1.5);
            war(DTR("Set counter top to: %f "),m_timer.getTop());
            for (int i = 0; i < 11; i++)
            {
              m_args.rc[i].pwm_max = PWM_MAX;
              m_args.rc[i].pwm_min = PWM_MIN;
              m_args.rc[i].pwm_neutral = PWM_IDLE;
              m_args.rc[i].reverse = false;

            }
            openConnection();
            m_sys_status = MAV_STATE_BOOT;
            setParamByName("FS_PILOT_INPUT", 1.0); //Failsafe to warning instead of disarm
          }
          void
          onResourceRelease(void)
          {
            m_sys_status = MAV_STATE_STANDBY;
            if (isActive() && isStopping())
            {
              m_sys_status = MAV_STATE_POWEROFF;
              //Disable control
              disableControl();
              Time::Delay::wait(1.0);
            }
            Memory::clear(m_socket);
//			  Memory::clear(m_sender);
          }

          void
          onDeactivation(void)
          {
            m_sys_status = MAV_STATE_STANDBY;
            disableControl();
            war("Deactivating Ardupilot control");
          }

          void
          onConnectionTimeout(void)
          {
            //TODO
          }

          //Disabling GCS control from dune to stop expecting heartbeat msgs
          void
          disableControl(void)
          {
            //Set neutral control
            debug(DTR("Disabling GCS control"));
            idle(false);
            mavlink_message_t msg;
            uint8_t buf[512];
            mavlink_msg_change_operator_control_pack(m_sysid, 1, &msg,
                                                     m_targetid, 1, //0: request control of this MAV, 1: Release control of this MAV
                                                     0, 0);

            int len = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, len);
            setParamByName("SYSID_MYGCS", m_gcs); // Reestablish old GCS control before Dune
          }

          void
          consume(const IMC::Teleoperation* m)
          {
            m_sys_status = MAV_STATE_ACTIVE;
            setParamByName("SYSID_MYGCS", m_sysid);
            mavlink_message_t msg;
            uint8_t buf[512];
            mavlink_msg_change_operator_control_pack(m_sysid, 1, &msg,
                                                     m_targetid, 0, //0: request control of this MAV, 1: Release control of this MAV
                                                     0, 0);
            int len = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, len);
            requestParams();
            changeMode(MAVLink::SUB_MODE_MANUAL);
            arm();
            idle(true);
            inf(DTR("Gain is at %f percent"), (m_gain * 100));
            war(DTR("Started Teleoperation requested by: %s"),
                m->custom.c_str()); //FIXME check src? and resolve id
//            //Control Loops
//            enableControlLoops(
//                IMC::CL_YAW_RATE | IMC::CL_PITCH | IMC::CL_ROLL | IMC::CL_DEPTH
//                    | IMC::CL_THROTTLE);
          }

          void
          consume(const IMC::TeleoperationDone* msg)
          {
            m_sys_status = MAV_STATE_STANDBY;
            disableControl();
          }

          bool
          isReversibleAxis(int channel)
          {
            if (channel == RC_INPUT::Forward || channel == RC_INPUT::Lateral
                || channel == RC_INPUT::Throttle
                || channel == RC_INPUT::Heading)
              return true;
            return false;
          }

          void
          idle(bool control)
          {
            int idle = control? floor(PWM_IDLE): 0;// UINT16_MAX means no change to that channel | 0 means control released back to the RC radio
            for (int channel = 0; channel < 11; channel++)
            {
              rc_pwm[channel] = idle;
            }
            // Clear pitch/roll trim settings //TODO
//               pitchTrim = 0;
//               rollTrim  = 0;
            actuate();
          }

          //! Send rc PWM values to ArduSub
          void
          actuate(void)
          {
            // UINT16_MAX means no change to that channel | 0 means control released back to the RC radio
            mavlink_message_t msg;
            mavlink_msg_rc_channels_override_pack(m_sysid, 1, &msg, m_targetid,
                                                  0, rc_pwm[0], rc_pwm[1],
                                                  rc_pwm[2], rc_pwm[3],
                                                  rc_pwm[4], rc_pwm[5],
                                                  rc_pwm[6], rc_pwm[7]);
            uint8_t buf[512];
            int len = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, len);
//            for(int i=0;i<11;i++)
//            	debug(DTR("Actuating on channel %d with PWM: %d"),i+1,rc_pwm[i]); //TODO clean-up
          }

          bool
          disarm(void)
          {
            try
            {
              uint8_t buffer[512];
              //sendCommandPacket(MAV_CMD_COMPONENT_ARM_DISARM, 0);
              uint16_t size = MAVLink::packCmd2Buffer(
                  MAV_CMD_COMPONENT_ARM_DISARM, m_targetid, buffer, 0);
              sendData(buffer, size);
              return true;
            }
            catch (std::exception& e)
            {
              war(DTR("Error disarming: %s"), e.what());
              return false;
            }
          }

          bool
          arm(void)
          {
            try
            {
              uint8_t buffer[512];
              uint16_t size = MAVLink::packCmd2Buffer(
                  MAV_CMD_COMPONENT_ARM_DISARM, m_targetid, buffer, 1);
              sendData(buffer, size);
              trace(DTR("Sent Arm Command."));
              return true;
            }
            catch (std::exception& e)
            {
              war(DTR("Error arming: %s"), e.what());
              return false;
            }
          }

          void
          sendHeartbeat(void)
          {
            uint8_t buffer[512];
            mavlink_message_t msg;
            mavlink_msg_heartbeat_pack(m_sysid, 1, &msg, MAV_TYPE_GCS,
                                       MAV_AUTOPILOT_INVALID, 0, 0,
                                       m_sys_status);
            uint16_t size = mavlink_msg_to_send_buffer(buffer, &msg);
            sendData(buffer, size);
            debug(DTR("Sent Heatbeat."));
          }

          //! Enable and Disable UBLS as main GPS for navigation
          //! uses MAVLink GPS_INPUT with best lock
//          void
//          sendGPSParams(bool enable)
//          {
//            if (enable)
//            {
//              setParamByName("GPS_AUTO_SWITCH", 1.0);
//              setParamByName("EK2_GPS_TYPE", 2.0);
//              setParamByName("GPS_TYPE", 14.0);
//            }
//            else
//            {
//              setParamByName("EK2_GPS_TYPE", 0.0);
//              setParamByName("GPS_TYPE", 1.0);
//
//            }
//          }

          void
          changeMode(uint8_t mode)
          {
            uint8_t buf[512];
            mavlink_message_t msg;

            mavlink_msg_set_mode_pack(m_sysid, 1, &msg, m_targetid, 1, mode);

            uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
            debug("Set mode to %d", mode);
          }

          void
          requestParams()
          {
            uint8_t buf[512];
            mavlink_message_t msg;
            uint16_t n;
            char param_id[16];
            for (int js_param = 0; js_param < 6; js_param++)
            {
              std::strcpy(param_id, js_params_id[js_param].c_str());
              mavlink_msg_param_request_read_pack(m_sysid, 1, &msg, m_targetid,
                                                  0, param_id, -1);
              n = mavlink_msg_to_send_buffer(buf, &msg);
              sendData(buf, n);
              inf(DTR("Requesting parameter: %s"), param_id);
            }
            std::strcpy(param_id, "SYSID_MYGCS");
            mavlink_msg_param_request_read_pack(m_sysid, 1, &msg, m_targetid, 0,
                                                param_id, -1);
            n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
          }

          void
          requestGCSParam(void)
          {
            uint8_t buf[512];
            mavlink_message_t msg;
            uint16_t n;
            char param_id[16];
            std::strcpy(param_id, "SYSID_MYGCS");
            mavlink_msg_param_request_read_pack(m_sysid, 1, &msg, m_targetid, 0,
                                                param_id, -1);
            n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
          }

          void
          setParamByName(std::string param_id, float value)
          {
            mavlink_message_t msg;
            mavlink_msg_param_set_pack(m_sysid, 0, &msg, //FIXME change to this system id
                                       m_targetid, //! target_system System ID
                                       1, //! target_component Component ID
                                       param_id.c_str(), //! Parameter name
                                       value, //! MAV GPS Type
                                       MAV_PARAM_TYPE_UINT8); //! Parameter type //FIXME check type
            uint8_t buf[512];
            int n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
            inf(DTR("Setting parameter: %s %f"), param_id.c_str(), value);
          }

          /*
           * Save some GCS and Joystick related parameters for control
           * and PWM calculation
           * https://www.ardusub.com/operators-manual/full-parameter-list.html
           */
          void
          handleParams(const mavlink_message_t* msg)
          {
            mavlink_param_value_t parameter;
            mavlink_msg_param_value_decode(msg, &parameter);
            debug(DTR("Received Parameter: %s with value %f"),
                  parameter.param_id, parameter.param_value);
            if (std::strcmp(js_params_id[5].c_str(), parameter.param_id) == 0)
            {
              m_thr_gain = parameter.param_value; //save Throttle gain
            }
            else if (std::strcmp(js_params_id[4].c_str(), parameter.param_id)
                == 0)
            {
              m_lights_step = parameter.param_value; //save JS_Lights_Step gain
            }
            else if (std::strcmp(js_params_id[0].c_str(), parameter.param_id)
                == 0)
            {
              //TODO
            }
            else if (std::strcmp(js_params_id[3].c_str(), parameter.param_id)
                == 0 && m_args.gain_step != parameter.param_value)
            {
              (parameter.param_id, (float)m_args.gain_step);
            }
            else if (std::strcmp("SYSID_MYGCS", parameter.param_id) == 0
                && (float)m_gcs != parameter.param_value
                && (float)m_sysid != parameter.param_value)
            {
              debug("Updating GCS from %f to %f", m_gcs, parameter.param_value);
              m_gcs = (int)parameter.param_value;
              if (isActive())
                war(DTR("Ardupilot Ground Control Station is not DUNE"));
            }
          }

          void
          handleSysTime(const mavlink_message_t* msg)
          {
            mavlink_system_time_t sysTime;
            mavlink_msg_system_time_decode(msg, &sysTime);
//        	  sysTime.time_boot_ms;
          }

          void
          handleRC(const mavlink_message_t* msg)
          {
            mavlink_rc_channels_t channels;
            mavlink_msg_rc_channels_decode(msg, &channels);
            trace(DTR("RC Channel 1 PWM %d"), channels.chan1_raw);
            trace(DTR("RC Channel 2 PWM %d"), channels.chan2_raw);
            trace(DTR("RC Channel 3 PWM %d"), channels.chan3_raw);
            trace(DTR("RC Channel 4 PWM %d"), channels.chan4_raw);
            trace(DTR("RC Channel 5 PWM %d"), channels.chan5_raw);
            debug(DTR("RC Channel 6 PWM %d"), channels.chan6_raw);
            debug(DTR("RC Channel 7 PWM %d"), channels.chan7_raw);
            debug(DTR("RC Channel 8 PWM %d"), channels.chan8_raw);
            debug(DTR("RC Channel 9 PWM %d"), channels.chan9_raw);
            debug(DTR("RC Channel 10 PWM %d"), channels.chan10_raw);
            trace(DTR("RC Channel 11 PWM %d"), channels.chan11_raw);
          }

          int
          sendData(uint8_t* buf, int len) //TODO move to Transport/MAVLink
          {
            if (!m_comms)
              return 0;
            trace(DTR("Sending MAVLINK Message"));
            int res = 0;
            try
            {
              //res = m_socket->write((char*)buf, len);
              res = m_socket->write(buf, len,m_args.addr, m_args.port);
              trace(DTR("Sent %d bytes of %d: %s %d"), res, len,
                    m_args.addr.c_str(), m_args.port);
              m_socket->flushOutput();
            }
            catch (std::exception& e)
            {
              err(DTR("Unable to send data to MAVLink System: %s"), e.what());
              openConnection();
            }
//			war(DTR("Sent %d bytes"),res);
            return res;
          }

          void
          handleData(int n)
          {
            mavlink_status_t status;
            for (int i = 0; i < n; i++)
            {
              int rv = mavlink_parse_char(MAVLINK_COMM_0, m_buf[i], &m_recv_msg,
                                          &status);
              if (status.packet_rx_drop_count)
                return;
              if (rv)
              {
                PktHandler h = m_mlh[m_recv_msg.msgid];

                if (!h)
                  continue;  // Ignore this packet (no handler for it)

                // Call handler
                (this->*h)(&m_recv_msg);
                //m_targetid = m_recv_msg.sysid;

              }
            }
          }

          //! Verifies the existence of actions for each axis and button
          //! Converts actions tuples in pwm values and applies idle values to the rest of channels
          void
          onRemoteActions(const IMC::RemoteActions* msg)
          {
            //mavlink_msg_manual_control_pack(system_id, component_id, msg, target, x, y, z, r, buttons);
            //war(DTR("Processing RemoteActions: %s"), msg->actions.c_str());
            TupleList tl(msg->actions);
            int button;
            button = tl.get(remote_actions[0], 0);
            if (button == 1)
            {
              m_gain += (float)m_args.gain_step / 100;
              m_gain = std::min(m_gain, GAIN_MAX);
              war(DTR("Gain is at %f percent"), (m_gain * 100));
            }
            else
            {
              button = tl.get(remote_actions[1], 0);
              if (button == 1)
              {
                m_gain -= (float)m_args.gain_step / 100;
                m_gain = std::max(m_gain, GAIN_MIN);
                war(DTR("Gain is at %f percent"), (m_gain * 100));
              }

            }

            for (int channel = 0; channel < 6; channel++)
            {
              int trimmed = PWM_IDLE;
              //Apply trim
              if (channel == Pitch)
              {
                trimmed += m_pitch_trim;
                rc_pwm[Pitch] = trimmed;
              }
              else if (channel == Roll)
              {
                trimmed += m_roll_trim;
                rc_pwm[Roll] = trimmed;
              }
              else
              {
                float value = tl.get(axis[channel], NAN);
                //				war(DTR("Value for %s on channel %f: "),axis[channel].c_str(),channel);
                if (!isNaN(value))
                {
                  //Apply gain
                  value = value * m_gain;

                  if (isReversibleAxis(channel))
                  {
                    m_args.rc[channel].reverse = false;
                    rc_pwm[channel] = MAVLink::mapRC2PWM(&m_args.rc[channel],
                                                         value);
                    //						war(DTR("Value from channel %s (%d):  %f"),axis[channel].c_str(),channel,value);
                  }
                  else
                  {
                    if (value <= m_args.rc[channel].val_neutral)
                      m_args.rc[channel].reverse = true;
                    else
                      m_args.rc[channel].reverse = false;
                    rc_pwm[channel] = MAVLink::mapRC2PWM(&m_args.rc[channel],
                                                         value);
                  }
                }
                else
                {
                  //					war("NEUTRAL CONTROL");
                  //reset channel to neutral control
                  m_args.rc[channel].reverse = false;
                  rc_pwm[channel] = PWM_IDLE;
                }
              }
//				war(DTR("CHANNEL %s with value: %f"),axis[channel].c_str(),rc_pwm[channel]);
            }

            //! Deal with buttons actions 1/0's
            button = tl.get(remote_actions[2], 0);
            int idle = floor(PWM_IDLE);
            int min = floor(PWM_MIN);
            int max = floor(PWM_MAX);
            if (button == 1)
            {
              m_cam_tilt_steps+= m_cam_tilt_steps < 8 ? 1: 0;
              rc_pwm[RC_INPUT::Camera_Tilt] = max;
//              war(DTR("Tilt RC %d PWM %d and step %d"),RC_INPUT::Camera_Tilt,rc_pwm[RC_INPUT::Camera_Tilt],m_cam_tilt_steps);
              actuate();
              rc_pwm[RC_INPUT::Camera_Tilt] = idle;
            }
            else
            {
              button = tl.get(remote_actions[3], 0);
              if (button == 1)
              {
                m_cam_tilt_steps-= m_cam_tilt_steps > -8 ? 1: 0;
                rc_pwm[RC_INPUT::Camera_Tilt] = min;
                actuate();
                rc_pwm[RC_INPUT::Camera_Tilt] = idle;
              }
              else
              {
                button = tl.get(remote_actions[4], 0);
                if (button == 1)
                {
                  while(m_cam_tilt_steps < 0){ //increase tilt
                    rc_pwm[RC_INPUT::Camera_Tilt] = max;
                    actuate();
                    m_cam_tilt_steps++;

                  }
                  while(m_cam_tilt_steps > 0){ //decrease tilt
                    rc_pwm[RC_INPUT::Camera_Tilt] = min;
                    actuate();
                    m_cam_tilt_steps--;
                  }
                  if(m_cam_tilt_steps == 0)
                    rc_pwm[RC_INPUT::Camera_Tilt] = idle;
                }
              }
              war(DTR("Tilt RC %d PWM %d and step %d"),RC_INPUT::Camera_Tilt,rc_pwm[RC_INPUT::Camera_Tilt],m_cam_tilt_steps);
            }

            //Handle Lights
            button = tl.get(remote_actions[6], 0);
            mavlink_message_t mc;
            uint8_t buf[512];
            int len = mavlink_msg_to_send_buffer(buf, &mc);
            short buttons = 0;
            uint16_t step = (PWM_MAX - PWM_MIN) / m_lights_step;
            if (button == 1)
            {
              int newV = rc_pwm[RC_INPUT::Lights_1_Level] + step;
              war(DTR("newV %d"),newV);
              int max = floor(PWM_MAX);
              newV = std::min(newV,max);
              war(DTR("newV %d"),newV);
              rc_pwm[RC_INPUT::Lights_1_Level] = newV;
//              rc_pwm[RC_INPUT::Lights_2_Level] = newV; //Same command for both lights
              war(DTR("Lights RC %d PWM %d and step %d"),RC_INPUT::Lights_1_Level,rc_pwm[RC_INPUT::Lights_1_Level],step);
              button |= 14;
              mavlink_msg_manual_control_pack(m_sysid, 1, &mc, m_targetid, INT16_MAX, INT16_MAX, INT16_MAX, INT16_MAX, buttons);
              sendData(buf, len);
            }
            else
            {
              button = tl.get(remote_actions[5], 0);
              if (button == 1)
              {
                int newV = rc_pwm[RC_INPUT::Lights_1_Level] - step;
                int min = floor(PWM_MIN);
                newV = std::max(newV,min);
                rc_pwm[RC_INPUT::Lights_1_Level] = newV;
//                rc_pwm[RC_INPUT::Lights_2_Level] = newV; //Same comand for both lights
                button |= 13;
                mavlink_msg_manual_control_pack(m_sysid, 1, &mc, m_targetid, INT16_MAX, INT16_MAX, INT16_MAX, INT16_MAX, buttons);
                sendData(buf, len);
              }
            }

            //Adjust Pitch and Roll - these values don't need to be reset after each iteraction
            // more details in https://www.ardusub.com/operators-manual/button-functions.html
            // and https://github.com/ArduPilot/ardupilot/blob/master/ArduSub/joystick.cpp#L332
            button = tl.get(remote_actions[7], 0);
            if (button == 1)
            {
              int newV = m_pitch_trim + TRIM_STEP;
              m_pitch_trim = std::min(newV, TRIM_MAX);
              //Inform user saved trim values
              war(DTR("Pitch trim is at %d"), m_pitch_trim);
            }

            button = tl.get(remote_actions[8], 0);
            if (button == 1)
            {
              int newV = m_pitch_trim - TRIM_STEP;
              m_pitch_trim = std::max(newV, TRIM_MIN);
              //Inform user saved trim values
              war(DTR("Pitch trim is at %d"), m_pitch_trim);
            }

            button = tl.get(remote_actions[10], 0);
            if (button == 1)
            {
              int newV = m_roll_trim + TRIM_STEP;
              m_roll_trim = std::min(newV, TRIM_MAX);
              //Inform user saved trim values
              war(DTR("Roll trim is at %d"), m_roll_trim);
            }

            button = tl.get(remote_actions[9], 0);
            if (button == 1)
            {
              int newV = m_roll_trim - TRIM_STEP;
              m_roll_trim = std::max(newV, TRIM_MIN);
              //Inform user saved trim values
              war(DTR("Roll trim is at %d"), m_roll_trim);
            }

            button = tl.get(remote_actions[11], 0);
            if (button == 1)
            {
              changeMode(MAVLink::SUB_MODE_STABILIZE);

            }
            button = tl.get(remote_actions[12], 0);

            if (button == 1)
            {
              changeMode(MAVLink::SUB_MODE_DEPTH_HOLD);
            }
            button = tl.get(remote_actions[14], 0);
            if (button == 1)
            {
              changeMode(MAVLink::SUB_MODE_POS_HOLD);
            }

            button = tl.get(remote_actions[13], 0);
            if (button == 1)
            {
              changeMode(MAVLink::SUB_MODE_MANUAL);
            }
            button = tl.get(remote_actions[16], 0);
            if (button == 1)
            {
              disarm();
            }

            button = tl.get(remote_actions[15], 0);
            if (button == 1)
            {
              arm();
            }

            button = tl.get(remote_actions[16], 0); //CameraTiltUP
            if (button == 1)
             {
              float newV = rc_pwm[RC_INPUT::Camera_Pan] + m_lights_step;
              newV = std::min(newV, (float)PWM_MAX);
              rc_pwm[RC_INPUT::Camera_Pan] = newV;
             }

             button = tl.get(remote_actions[17], 0); //CameraPanDown
             if (button == 1)
             {
               float newV = rc_pwm[RC_INPUT::Camera_Pan] - m_lights_step;
              newV = std::max(newV, (float)PWM_MIN);
              rc_pwm[RC_INPUT::Camera_Pan] = newV;
             }

            actuate();
          }

          int
          receiveData(uint8_t* buf, size_t blen)
          {
            try
            {
              if (m_socket)
              {
                trace(DTR("Received MAVLINK data with size: %d"), blen);
                return m_socket->read(buf, blen);
              }
            }
            catch (std::exception& e)
            {
              err(DTR("Error Receiving data: %s"), e.what());
              Memory::clear(m_socket);
              setEntityState(IMC::EntityState::ESTA_NORMAL,
                             Status::CODE_COM_ERROR);
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
              if (m_socket != NULL)
              {
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
                if (m_timer.overflow()){ // 1.5sec
                  sendHeartbeat();
                  m_timer.reset();
                }
              }
              else
              {
                Time::Delay::wait(0.5);
                openConnection(); //reopen connection
                m_timer.reset();
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
