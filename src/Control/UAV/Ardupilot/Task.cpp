//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Joel Cardoso                                                     *
// Author: Eduardo Marques                                                  *
// Author: Ricardo Martins                                                  *
// Author: Joao Fortuna                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

#define GPS_EPOCH 315964800

namespace Control
{
  namespace UAV
  {
    namespace Ardupilot
    {
      using DUNE_NAMESPACES;

      //! %Task arguments.
      struct Arguments
      {
        //! Communications timeout
        uint8_t comm_timeout;
        //! Use Ardupilot's waypoint tracker
        bool ardu_tracker;
        //! TCP Port
        uint16_t TCP_port;
        //! TCP Address
        Address TCP_addr;
        //! Telemetry Rate
        uint8_t trate;
        //! Default Altitude
        float alt;
        //! Default Speed
        float speed;
        //! GPS is uBlox
        bool ublox;
        //! LoiterHere (default) radius
        float lradius;
        //! Loitering tolerance
        int ltolerance;
        //! Has Power Module
        bool pwrm;
        //! WP seconds before reach
        int secs;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Task arguments.
        Arguments m_args;
        //! Arduino packet handling
        typedef void (Task::* PktHandler)(const mavlink_message_t* msg);
        typedef std::map<int, PktHandler> PktHandlerMap;
        PktHandlerMap m_mlh;
        double m_last_pkt_time;
        uint8_t m_buf[512];
        //! Estimated state message.
        IMC::EstimatedState m_estate;
        //! Battery messages
        IMC::Voltage m_volt;
        IMC::Current m_curr;
        IMC::FuelLevel m_fuel;
        //! Pressure message
        IMC::Pressure m_pressure;
        //! Temperature message
        IMC::Temperature m_temp;
        //! GPS Fix message
        IMC::GpsFix m_fix;
        //! Wind message
        IMC::EstimatedStreamVelocity m_stream;
        //! IMU messages
        IMC::AngularVelocity m_ang_vel;
        IMC::Acceleration m_accel;
        IMC::MagneticField m_mag_field;
        //! Servo PWM message
        IMC::SetServoPosition m_servo;
        //! Path Control State
        IMC::PathControlState m_pcs;
        //! Reference Lat and Lon and Hei to measure displacement
        fp64_t ref_lat, ref_lon;
        fp32_t ref_hei;
        //! TCP socket
        TCPSocket* m_TCP_sock;
        Address m_TCP_addr;
        uint16_t m_TCP_port;
        //! System ID
        uint8_t m_sysid;
        //! Last received position
        double m_lat, m_lon;
        float m_alt;
        //! External control
        bool m_external;
        //! Current waypoint
        int m_current_wp;
        //! Critical WP
        bool m_critical;
        //! Bitfield of enabled control loops.
        uint32_t m_cloops;
        //! Parser Variables
        mavlink_message_t m_msg;
        int m_desired_radius;
        int m_gnd_speed;
        int m_mode;
        bool m_changing_wp;
        bool m_error_missing, m_error_ext;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          ref_lat(0.0),
          ref_lon(0.0),
          ref_hei(0.0),
          m_sysid(1),
          m_lat(0.0),
          m_lon(0.0),
          m_alt(0.0),
          m_external(true),
          m_current_wp(0),
          m_critical(false),
          m_cloops(0),
          m_desired_radius(0),
          m_gnd_speed(0),
          m_mode(0),
          m_changing_wp(false),
          m_error_missing(false),
          m_error_ext(false)
        {
          param("Communications Timeout", m_args.comm_timeout)
          .minimumValue("1")
          .maximumValue("60")
          .defaultValue("10")
          .units(Units::Second)
          .description("Ardupilot communications timeout");

          param("Ardupilot Tracker", m_args.ardu_tracker)
          .defaultValue("false")
          .description("Use Ardupilot's waypoint tracker");

          param("TCP - Port", m_args.TCP_port)
          .defaultValue("5760")
          .description("Port for connection to Ardupilot");

          param("TCP - Address", m_args.TCP_addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to Ardupilot");

          param("Telemetry Rate", m_args.trate)
          .defaultValue("10")
          .units(Units::Hertz)
          .description("Telemetry output rate from Ardupilot");

          param("Default altitude", m_args.alt)
          .defaultValue("200.0")
          .units(Units::Meter)
          .description("Altitude to be used if desired Z has no units");

          param("Default speed", m_args.speed)
          .defaultValue("18.0")
          .units(Units::MeterPerSecond)
          .description("Speed to be used if desired speed is not specified");

          param("uBlox GPS", m_args.ublox)
          .defaultValue("false")
          .description("The installed GPS is uBlox");

          param("Default loiter radius", m_args.lradius)
          .defaultValue("-150.0")
          .units(Units::Meter)
          .description("Loiter radius used in LoiterHere (idle)");

          param("Loitering tolerance", m_args.ltolerance)
          .defaultValue("10")
          .units(Units::Meter)
          .description("Distance to consider loitering (radius + tolerance)");

          param("Power Module", m_args.pwrm)
          .defaultValue("true")
          .description("There is a Power Module installed");

          param("Seconds before Waypoint", m_args.secs)
          .defaultValue("4")
          .units(Units::Second)
          .description("Seconds before actually reaching Waypoint that it is considered as reached");

          // Setup packet handlers
          // IMPORTANT: set up function to handle each type of MAVLINK packet here
          m_mlh[MAVLINK_MSG_ID_ATTITUDE] = &Task::handleAttitudePacket;
          m_mlh[MAVLINK_MSG_ID_GLOBAL_POSITION_INT] = &Task::handlePositionPacket;
          m_mlh[MAVLINK_MSG_ID_HWSTATUS] = &Task::handleHWStatusPacket;
          m_mlh[MAVLINK_MSG_ID_SCALED_PRESSURE] = &Task::handleScaledPressurePacket;
          m_mlh[MAVLINK_MSG_ID_GPS_RAW_INT] = &Task::handleRawGPSPacket;
          m_mlh[MAVLINK_MSG_ID_WIND] = &Task::handleWindPacket;
          m_mlh[MAVLINK_MSG_ID_COMMAND_ACK] = &Task::handleCmdAckPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_ACK] = &Task::handleMissionAckPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_CURRENT] = &Task::handleMissionCurrentPacket;
          m_mlh[MAVLINK_MSG_ID_STATUSTEXT] = &Task::handleStatusTextPacket;
          m_mlh[MAVLINK_MSG_ID_HEARTBEAT] = &Task::handleHeartbeatPacket;
          m_mlh[MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT] = &Task::handleNavControllerPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_ITEM] = &Task::handleMissionItemPacket;
          m_mlh[MAVLINK_MSG_ID_SYS_STATUS] = &Task::handleSystemStatusPacket;
          m_mlh[MAVLINK_MSG_ID_VFR_HUD] = &Task::handleHUDPacket;


          // Setup processing of IMC messages
          bind<DesiredPath>(this);
          bind<DesiredRoll>(this);
          bind<DesiredZ>(this);
          bind<SetServoPosition>(this);
          bind<IdleManeuver>(this);
          bind<ControlLoops>(this);
          bind<PowerChannelControl>(this);

          // Misc. initialization
          m_last_pkt_time = 0; // time of last packet from Ardupilot
          m_estate.clear();
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_TCP_sock);
        }

        void
        onResourceAcquisition(void)
        {
          m_TCP_addr = m_args.TCP_addr;
          m_TCP_port = m_args.TCP_port;
          openConnection();
        }

        void
        openConnection(void)
        {
          try
          {
            m_TCP_sock = new TCPSocket;
            m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
            setupRate(m_args.trate);
            inf(DTR("Ardupilot interface initialized"));
          }
          catch (...)
          {
            m_TCP_sock = 0;
            war(DTR("Connection failed, retrying..."));
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          }
        }

        void
        setupRate(uint8_t rate)
        {
          uint8_t buf[512];
          mavlink_message_t* msg = new mavlink_message_t;

          mavlink_msg_request_data_stream_pack(255, 0, msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA1,
                                               rate,
                                               1);

          uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew("ATTITUDE Stream setup to %d Hertz", rate);

          mavlink_msg_request_data_stream_pack(255, 0, msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA2,
                                               rate,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew("VFR Stream setup to %d Hertz", rate);

          mavlink_msg_request_data_stream_pack(255, 0, msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_POSITION,
                                               rate,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew("POSITION Stream setup to %d Hertz", rate);

          mavlink_msg_request_data_stream_pack(255, 0, msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTENDED_STATUS,
                                               (int)(rate/5),
                                               1);

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew("STATUS Stream setup to %d Hertz", (int)(rate/5));

          mavlink_msg_request_data_stream_pack(255, 0, msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA3,
                                               1,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew("AHRS-HWSTATUS-WIND Stream setup to 1 Hertz");

          mavlink_msg_request_data_stream_pack(255, 0, msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_RAW_SENSORS,
                                               1,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew("SENSORS Stream setup to 1 Hertz");

          mavlink_msg_request_data_stream_pack(255, 0, msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_RC_CHANNELS,
                                               1,
                                               0);

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew("RC Stream disabled");
        }

        void
        info(uint32_t was, uint32_t is, uint32_t loop, const char* desc)
        {
          was &= loop;
          is &= loop;

          if (was && !is)
            debug("%s - deactivating", desc);
          else if (!was && is)
            debug("%s - activating", desc);
        }

        void
        consume(const IMC::ControlLoops* cloops)
        {
          if(m_external || m_critical)
            return;

          uint32_t prev = m_cloops;

          if (cloops->enable)
          {
            m_cloops |= cloops->mask;
            if((!m_args.ardu_tracker) && (cloops->mask & IMC::CL_PATH))
            {
              debug("tracker is NOT enabled");
              m_cloops &= ~IMC::CL_PATH;
            }

            if(!(m_args.ardu_tracker) && (cloops->mask & IMC::CL_ROLL))
            {
              uint8_t buf[512];
              mavlink_message_t* msg = new mavlink_message_t;

              mavlink_msg_set_mode_pack(255, 0, msg,
                                        m_sysid,
                                        1,
                                        13); //! DUNE mode on ardupilot is 13

              uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
              sendData(buf, n);
            }
          }
          else
            m_cloops &= ~cloops->mask;

          info(prev, m_cloops, IMC::CL_SPEED, "speed control");
          info(prev, m_cloops, IMC::CL_ALTITUDE, "altitude control");
          info(prev, m_cloops, IMC::CL_ROLL, "bank control");
          info(prev, m_cloops, IMC::CL_YAW, "heading control");
          info(prev, m_cloops, IMC::CL_PATH, "path control");
        }

        void
        consume(const IMC::DesiredRoll* roll)
        {
          if (!(m_cloops & IMC::CL_ROLL))
          {
            debug("bank control is NOT active");
            return;
          }

          uint8_t buf[512];

          mavlink_message_t* msg = new mavlink_message_t;
          mavlink_msg_set_roll_pitch_yaw_thrust_pack(255, 0, msg,
                                                     1,
                                                     1,
                                                     (float)roll->value,
                                                     0,
                                                     0,
                                                     0);
          uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew("DesiredRoll packet sent to Ardupilot: %f", roll->value);
        }

        void
        consume(const IMC::DesiredZ* desired_z)
        {
          if (!(m_cloops & IMC::CL_ALTITUDE))
          {
            debug("altitude control is NOT active");
            return;
          }

          sendCommandPacket(MAV_CMD_CONDITION_CHANGE_ALT, // Ascend/descend at rate.  Delay mission state machine until desired altitude reached.
                            0, // Descent / Ascend rate (m/s)
                            0, // Empty
                            0, // Empty
                            0, // Empty
                            0, // Empty
                            0, // Empty
                            desired_z->value); // Finish Altitude
          spew("DesiredZ packet sent to Ardupilot");
        }

        void
        consume(const IMC::DesiredPath* path)
        {
          if(!m_args.ardu_tracker)
            return;

          if(!(m_cloops & IMC::CL_PATH))
          {
            debug("path control is NOT active");
            return;
          }

          uint8_t buf[512];

          mavlink_message_t* msg = new mavlink_message_t;

          mavlink_msg_param_set_pack(255, 0, msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "TRIM_ARSPD_CM", //! Parameter name
                                     (int)(path->speed * 100), //! Parameter value
                                     MAV_PARAM_TYPE_INT16); //! Parameter type

          int n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          mavlink_msg_param_set_pack(255, 0, msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "WP_LOITER_RAD", //! Parameter name
                                     path->flags & DesiredPath::FL_CCLOCKW ? (-1 * path->lradius) : (path->lradius), //! Parameter value
                                     MAV_PARAM_TYPE_INT16); //! Parameter type

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          m_desired_radius = (uint16_t) path->lradius;

          mavlink_msg_mission_count_pack(255, 0, msg,
                                         m_sysid, //! target_system System ID
                                         0, //! target_component Component ID
                                         3); //! size of Mission

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          mavlink_msg_mission_write_partial_list_pack(255, 0, msg,
                                                      m_sysid, //! target_system System ID
                                                      0, //! target_component Component ID
                                                      1, //! start_index Start index, 0 by default and smaller / equal to the largest index of the current onboard list
                                                      1); //! end_index End index, equal or greater than start index

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          float alt = (path->end_z_units & IMC::Z_NONE) ? m_args.alt : (float)path->end_z;

          //! Destination
          mavlink_msg_mission_item_pack(255, 0, msg,
                                        m_sysid, //! target_system System ID
                                        0, //! target_component Component ID
                                        1, //! seq Sequence
                                        MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                        MAV_CMD_NAV_LOITER_UNLIM, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                        2, //! current false:0, true:1
                                        0, //! autocontinue to next wp
                                        0, //! Not used
                                        0, //! Not used
                                        path->flags & DesiredPath::FL_CCLOCKW ? -1 : 0, //! If <0, then CCW loiter
                                        0, //! Not used
                                        (float)Angles::degrees(path->end_lat), //! x PARAM5 / local: x position, global: latitude
                                        (float)Angles::degrees(path->end_lon), //! y PARAM6 / y position: global: longitude
                                        alt);//! z PARAM7 / z position: global: altitude

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          m_changing_wp = true;

          m_pcs.start_lat = Angles::radians(m_lat);
          m_pcs.start_lon = Angles::radians(m_lon);
          m_pcs.start_z = m_alt;
          m_pcs.start_z_units = IMC::Z_HEIGHT;

          m_pcs.end_lat = path->end_lat;
          m_pcs.end_lon = path->end_lon;
          m_pcs.end_z = alt;
          m_pcs.end_z_units = IMC::Z_HEIGHT;
          m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
          m_pcs.flags &= path->flags;
          m_pcs.lradius = path->lradius;

          dispatch(m_pcs);

          debug("Waypoint packet sent to Ardupilot");
        }

        void
        loiterHere(void)
        {

          if(getEntityState() != IMC::EntityState::ESTA_NORMAL)
            return;

          mavlink_message_t* msg = new mavlink_message_t;
          uint8_t buf[512];

          mavlink_msg_param_set_pack(255, 0, msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "WP_LOITER_RAD", //! Parameter name
                                     m_args.lradius, //! Parameter value
                                     MAV_PARAM_TYPE_INT16); //! Parameter type

          int n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          sendCommandPacket(MAV_CMD_NAV_LOITER_UNLIM);
          debug("Sent LOITER packet to Ardupilot");

          m_pcs.start_lat = m_fix.lat;
          m_pcs.start_lon = m_fix.lon;
          m_pcs.start_z = m_fix.height;

          m_pcs.end_lat = m_fix.lat;
          m_pcs.end_lon = m_fix.lon;
          m_pcs.end_z = m_fix.height;

          m_pcs.flags = PathControlState::FL_LOITERING | PathControlState::FL_NEAR | (m_args.lradius < 0 ? PathControlState::FL_CCLOCKW : 0);
          m_pcs.lradius = m_args.lradius * (m_args.lradius < 0 ? -1 : 1);

          dispatch(m_pcs);
        }

        void
        consume(const IMC::IdleManeuver* idle)
        {
          (void)idle;

          loiterHere();
        }

        void
        consume(const IMC::SetServoPosition* servo)
        {
          sendCommandPacket(MAV_CMD_DO_SET_SERVO,
                            servo->id, // Servo number
                            servo->value, // PWM (microseconds, 1000 to 2000 typical)
                            0, // Empty
                            0); //Empty
          spew("SetServo packet sent to Ardupilot");
        }

        void
        consume(const IMC::PowerChannelControl* pcc)
        {
          trace("Trigger Request Received");

          if(pcc->op & IMC::PowerChannelControl::PCC_OP_TURN_ON)
            sendCommandPacket(MAV_CMD_DO_SET_RELAY, 1);
          else
            sendCommandPacket(MAV_CMD_DO_SET_RELAY, 0);
        }

        void
        sendCommandPacket(uint16_t cmd, float arg1=0, float arg2=0, float arg3=0, float arg4=0, float arg5=0, float arg6=0, float arg7=0)
        {
          uint8_t buf[512];

          mavlink_message_t msg;

          trace("%0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f", arg1, arg2, arg3, arg4, arg5, arg6, arg7);

          mavlink_msg_command_long_pack(255, 0, &msg, m_sysid, 0, cmd, 0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            // Handle data
            if(m_TCP_sock)
            {
              handleArdupilotData();
            }
            else
            {
              Time::Delay::wait(0.5);
              openConnection();
            }

            if(m_external || m_critical)
            {
              if(getEntityState() != IMC::EntityState::ESTA_ERROR && !m_error_ext)
              {
                setEntityState(IMC::EntityState::ESTA_ERROR, "External Control");
                m_error_ext = true;
              }
            }
            else if(getEntityState() != IMC::EntityState::ESTA_NORMAL)
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              m_error_ext = false;
            }

            // Handle IMC messages from bus
            consumeMessages();
          }
        }

        bool
        poll(double timeout)
        {
          if (m_TCP_sock != NULL)
            return Poll::poll(*m_TCP_sock, timeout);

          return false;
        }

        int
        sendData(uint8_t* bfr, int size)
        {
          if(m_TCP_sock)
          {
            trace("Sending something");
            return m_TCP_sock->write((char*)bfr, size);
          }
          return 0;
        }

        int
        receiveData(uint8_t* buf, size_t blen)
        {
          if(m_TCP_sock)
          {
            try
            {
              return m_TCP_sock->read(buf, blen);
            }
            catch (std::runtime_error& e)
            {
              err("%s", e.what());
              war(DTR("Connection lost, retrying..."));
              Memory::clear(m_TCP_sock);

              m_TCP_sock = new Network::TCPSocket;
              m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
              return 0;
            }
          }
          return 0;
        }

        void
        handleArdupilotData(void)
        {
          mavlink_status_t status;

          double now = Clock::get();

          while (poll(0.01))
          {
            int n = receiveData(m_buf, sizeof(m_buf));

            if (n < 0)
            {
              debug("Receive error");
              break;
            }


            for (int i = 0; i < n; i++)
            {
              int rv = mavlink_parse_char(MAVLINK_COMM_0, m_buf[i], &m_msg, &status);
              if (status.packet_rx_drop_count)
              {
                switch(status.parse_state)
                {
                  case MAVLINK_PARSE_STATE_IDLE:
                    spew("failed at state IDLE");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_STX:
                    spew("failed at state GOT_STX");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_LENGTH:
                    spew("failed at state GOT_LENGTH");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_SYSID:
                    spew("failed at state GOT_SYSID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_COMPID:
                    spew("failed at state GOT_COMPID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_MSGID:
                    spew("failed at state GOT_MSGID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_PAYLOAD:
                    spew("failed at state GOT_PAYLOAD");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_CRC1:
                    spew("failed at state GOT_CRC1");
                    break;
                  default:
                    spew("failed OTHER");
                }
              }
              if (rv)
              {
                switch ((int)m_msg.msgid)
                {
                  default:
                    debug("UNDEF: %u", m_msg.msgid);
                    break;
                  case MAVLINK_MSG_ID_HEARTBEAT:
                    trace("HEARTBEAT");
                    break;
                  case MAVLINK_MSG_ID_SYS_STATUS:
                    trace("SYS_STATUS");
                    break;
                  case 22:
                    trace("PARAM_VALUE");
                    break;
                  case MAVLINK_MSG_ID_GPS_RAW_INT:
                    spew("GPS_RAW");
                    break;
                  case 27:
                    trace("IMU_RAW");
                    break;
                  case MAVLINK_MSG_ID_SCALED_PRESSURE:
                    spew("SCALED_PRESSURE");
                    break;
                  case MAVLINK_MSG_ID_ATTITUDE:
                    spew("ATTITUDE");
                    break;
                  case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
                    spew("GLOBAL_POSITION_INT");
                    break;
                  case 34:
                    trace("RC_CHANNELS_SCALED");
                    break;
                  case 35:
                    trace("RC_CHANNELS_RAW");
                    break;
                  case MAVLINK_MSG_ID_MISSION_ITEM:
                    trace("MISSION_ITEM");
                    break;
                  case MAVLINK_MSG_ID_MISSION_CURRENT:
                    trace("MISSION_CURRENT");
                    break;
                  case 44:
                    trace("MISSION_COUNT");
                    break;
                  case MAVLINK_MSG_ID_MISSION_ACK:
                    spew("MISSION_ACK");
                    break;
                  case MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT:
                    trace("NAV_CONTROLLER_OUTPUT");
                    break;
                  case MAVLINK_MSG_ID_VFR_HUD:
                    trace("VFR_HUD");
                    break;
                  case MAVLINK_MSG_ID_COMMAND_ACK:
                    spew("CMD_ACK");
                    break;
                  case MAVLINK_MSG_ID_BATTERY_STATUS:
                    spew("BATTERY_STAT");
                    break;
                  case 150:
                    trace("SENSOR_OFFSETS");
                    break;
                  case 152:
                    trace("MEMINFO");
                    break;
                  case 162:
                    trace("FENCE_STATUS");
                    break;
                  case 163:
                    trace("AHRS");
                    break;
                  case 164:
                    trace("SIM_STATE");
                    break;
                  case MAVLINK_MSG_ID_HWSTATUS:
                    spew("HW_STATUS");
                    break;
                  case MAVLINK_MSG_ID_WIND:
                    spew("WIND");
                    break;
                  case MAVLINK_MSG_ID_STATUSTEXT:
                    trace("STATUSTEXT");
                    break;
                }

                PktHandler h = m_mlh[m_msg.msgid];

                if (!h)
                  continue;  // Ignore this packet (no handler for it)

                // Call handler
                (this->*h)(&m_msg);
                m_sysid = m_msg.sysid;

                m_last_pkt_time = now;
              }
            }
          }

          m_critical = false;

          if ((now - m_last_pkt_time >= m_args.comm_timeout) && !m_error_missing)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
            m_critical = true;
            m_error_missing = true;
          }
          else
            m_error_missing = false;
        }

        void
        handleAttitudePacket(const mavlink_message_t* msg)
        {
          mavlink_attitude_t att;

          mavlink_msg_attitude_decode(msg, &att);
          m_estate.phi = att.roll;
          m_estate.theta = att.pitch;
          m_estate.psi = att.yaw;
          m_estate.p = att.rollspeed;
          m_estate.q = att.pitchspeed;
          m_estate.r = att.yawspeed;
        }

        void
        handlePositionPacket(const mavlink_message_t* msg)
        {
          mavlink_global_position_int_t gp;
          mavlink_msg_global_position_int_decode(msg, &gp);

          double lat = Angles::radians((double)gp.lat * 1e-07);
          double lon = Angles::radians((double)gp.lon * 1e-07);
          float hei = (float)gp.alt * 1e-03;

          m_lat = (double)gp.lat * 1e-07;
          m_lon = (double)gp.lon * 1e-07;
          m_alt = (float)gp.alt * 1e-03;

          double distance_to_ref = WGS84::distance(ref_lat,ref_lon,ref_hei,
                                                   lat,lon,hei);

          if(distance_to_ref>1000)
          {
            m_estate.lat = lat;
            m_estate.lon = lon;
            m_estate.height = hei;

            m_estate.x = 0;
            m_estate.y = 0;
            m_estate.z = 0;

            ref_lat = lat;
            ref_lon = lon;
            ref_hei = hei;
          }
          else
          {
            WGS84::displacement(ref_lat, ref_lon, ref_hei,
                                lat, lon, hei,
                                &m_estate.x, &m_estate.y, &m_estate.z);

            m_estate.lat = ref_lat;
            m_estate.lon = ref_lon;
            m_estate.height = ref_hei;
          }

          m_estate.vx = 1e-02 * gp.vx;
          m_estate.vy = 1e-02 * gp.vy;
          m_estate.vz = -1e-02 * gp.vz;

          // Note: the following will yield body-fixed *ground* velocity
          // Maybe this can be fixed w/IAS readings (anyway not too important)
          BodyFixedFrame::toBodyFrame(m_estate.phi, m_estate.theta, m_estate.psi,
                                      m_estate.vx, m_estate.vy, m_estate.vz,
                                      &m_estate.u, &m_estate.v, &m_estate.w);

          m_estate.depth = -1;
          m_estate.alt = -1;

          dispatch(m_estate);
        }

        void
        handleHWStatusPacket(const mavlink_message_t* msg)
        {
          if(m_args.pwrm)
          {
            (void) msg;
            return;
          }

          mavlink_hwstatus_t hw_status;

          mavlink_msg_hwstatus_decode(msg, &hw_status);

          m_volt.value = 0.001 * hw_status.Vcc;

          dispatch(m_volt);
        }

        void
        handleSystemStatusPacket(const mavlink_message_t* msg)
        {
          if(!m_args.pwrm)
          {
            (void) msg;
            return;
          }
          mavlink_sys_status_t sys_status;

          mavlink_msg_sys_status_decode(msg, &sys_status);

          m_volt.value = 0.001 * (float)sys_status.voltage_battery;
          m_curr.value = 0.01 * (float)sys_status.current_battery;
          m_fuel.value = (float)sys_status.battery_remaining;

          dispatch(m_volt);
          dispatch(m_curr);
          dispatch(m_fuel);
        }

        void
        handleScaledPressurePacket(const mavlink_message_t* msg)
        {
          mavlink_scaled_pressure_t sc_press;

          mavlink_msg_scaled_pressure_decode(msg, &sc_press);

          m_pressure.value = sc_press.press_abs;
          m_temp.value = 0.1 * sc_press.temperature;

          dispatch(m_pressure);
          dispatch(m_temp);
        }

        void
        handleRawGPSPacket(const mavlink_message_t* msg)
        {
          mavlink_gps_raw_int_t gps_raw;

          mavlink_msg_gps_raw_int_decode(msg, &gps_raw);

          m_fix.cog = Angles::radians((double)gps_raw.cog * 0.01);
          m_fix.sog = (float)gps_raw.vel * 0.01;
          m_fix.hdop = (float)gps_raw.eph * 0.01;
          m_fix.vdop = (float)gps_raw.epv * 0.01;
          m_fix.lat = Angles::radians((double)gps_raw.lat * 1e-07);
          m_fix.lon = Angles::radians((double)gps_raw.lon * 1e-07);
          m_fix.height = (double)gps_raw.alt * 0.001;
          m_fix.satellites = gps_raw.satellites_visible;


          long time_fix = gps_raw.time_usec % 1000000000;
          unsigned int date = (unsigned int)(gps_raw.time_usec / 1e9);


          if(m_args.ublox)
          {
            m_fix.utc_time = (float)(time_fix % (3600 * 24 * 1000)) / 1000;

            long gps_sec_since_1970 = GPS_EPOCH + 7 * 24 * 60 * 60 * date + time_fix / 1000;
            time_t t = gps_sec_since_1970;
            struct tm* utc;
            utc = gmtime(&t);

            m_fix.utc_year = utc->tm_year + 1900;
            m_fix.utc_month = utc->tm_mon +1;
            m_fix.utc_day = utc->tm_mday;
          }
          else
          {
            m_fix.utc_time = (float)time_fix / 1000;

            m_fix.utc_year = date % 100;
            m_fix.utc_month = ((date % 10000) - m_fix.utc_year) / 100;
            m_fix.utc_day = date / 10000;
            m_fix.utc_year += 2000;
          }

          m_fix.validity = 0;
          if(gps_raw.fix_type>1)
            m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
          if(m_fix.utc_year>2012)
            m_fix.validity |= (IMC::GpsFix::GFV_VALID_TIME | IMC::GpsFix::GFV_VALID_DATE);

          dispatch(m_fix);
        }

        void
        handleWindPacket(const mavlink_message_t* msg)
        {
          mavlink_wind_t wind;

          mavlink_msg_wind_decode(msg, &wind);

          double wind_dir_rad = wind.direction * Math::c_pi / 180;

          m_stream.x = std::cos(wind_dir_rad) * wind.speed;
          m_stream.y = std::sin(wind_dir_rad) * wind.speed;
          m_stream.z = wind.speed_z;

          dispatch(m_stream);
        }

        void
        handleCmdAckPacket(const mavlink_message_t* msg)
        {
          mavlink_command_ack_t cmd_ack;

          mavlink_msg_command_ack_decode(msg, &cmd_ack);
          debug("Command %d was received, result is %d", cmd_ack.command, cmd_ack.result);
          m_changing_wp = false;
        }

        void
        handleMissionAckPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_ack_t miss_ack;

          mavlink_msg_mission_ack_decode(msg, &miss_ack);
          debug("Mission was received, result is %d", miss_ack.type);
          m_changing_wp = false;
        }

        void
        handleMissionCurrentPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_current_t miss_curr;

          mavlink_msg_mission_current_decode(msg, &miss_curr);
          m_current_wp = miss_curr.seq;
          trace("Current mission item: %d", miss_curr.seq);

          uint8_t buf[512];

          mavlink_message_t* msg_out = new mavlink_message_t;

          mavlink_msg_mission_request_pack(255, 0, msg_out,
                                           m_sysid, //! target_system System ID
                                           0, //! target_component Component ID
                                           m_current_wp); //! Mission item to request

          uint16_t n = mavlink_msg_to_send_buffer(buf, msg_out);
          sendData(buf, n);
        }

        void
        handleStatusTextPacket(const mavlink_message_t* msg)
        {
          mavlink_statustext_t stat_tex;
          mavlink_msg_statustext_decode(msg, &stat_tex);
          debug("Status: %s", stat_tex.text);
        }

        void
        handleHeartbeatPacket(const mavlink_message_t* msg)
        {
          mavlink_heartbeat_t hbt;

          mavlink_msg_heartbeat_decode(msg, &hbt);

          m_mode = hbt.custom_mode;

          switch(m_mode)
          {
            default:
              m_external = true;
              break;
            case 10:
              trace("AUTO");
              m_external = false;
              break;
            case 12:
              trace("LOITER");
              m_external = false;
              break;
            case 13:
              trace("DUNE");
              m_external = false;
              break;
            case 15:
              trace("GUIDED");
              m_external = false;
              break;
          }
        }

        void
        handleNavControllerPacket(const mavlink_message_t* msg)
        {
          if(!m_args.ardu_tracker)
            return;

          mavlink_nav_controller_output_t nav_out;
          mavlink_msg_nav_controller_output_decode(msg, &nav_out);
          debug("WP Dist: %d", nav_out.wp_dist);
          IMC::DesiredRoll d_roll;
          IMC::DesiredPitch d_pitch;
          IMC::DesiredHeading d_head;

          d_roll.value = Angles::radians(nav_out.nav_roll);
          d_pitch.value = Angles::radians(nav_out.nav_pitch);
          d_head.value = Angles::radians(nav_out.nav_bearing);

          if((nav_out.wp_dist <= m_desired_radius + m_args.ltolerance)
             && (nav_out.wp_dist >= m_desired_radius - m_args.ltolerance)
             && (m_mode == 15))
          {
            m_pcs.flags |= PathControlState::FL_LOITERING;
          }

          if(!m_changing_wp
             && (nav_out.wp_dist <= m_desired_radius + m_args.secs * m_gnd_speed)
             && (nav_out.wp_dist >= m_desired_radius - m_args.secs * m_gnd_speed)
             && (m_mode == 15))
          {
            m_pcs.flags |= PathControlState::FL_NEAR;
          }

          dispatch(m_pcs);
          dispatch(d_roll);
          dispatch(d_pitch);
          dispatch(d_head);
        }

        void
        handleMissionItemPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_item_t miss_item;
          mavlink_msg_mission_item_decode(msg, &miss_item);
          trace("Mission type: %d", miss_item.command);

          switch(miss_item.command)
          {
            default:
              m_critical = false;
              break;
            case MAV_CMD_NAV_TAKEOFF:
              m_critical = true;
              break;
            case MAV_CMD_NAV_LAND:
              m_critical = true;
              break;
          }
        }

        void
        handleHUDPacket(const mavlink_message_t* msg)
        {
          mavlink_vfr_hud_t vfr_hud;
          mavlink_msg_vfr_hud_decode(msg, &vfr_hud);

          IMC::IndicatedSpeed ias;
          IMC::TrueSpeed gs;


          ias.value = (fp64_t)vfr_hud.airspeed;
          gs.value = (fp64_t)vfr_hud.groundspeed;
          m_gnd_speed = (int)vfr_hud.groundspeed;

          dispatch(ias);
          dispatch(gs);
        }
      };
    }
  }
}

DUNE_TASK
