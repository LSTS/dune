//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Trent Lukaczyk                                                   *
// Author: Maria Costa                                                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cmath>
#include <queue>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>


namespace Control
{
  namespace UAV
  {
    namespace PX4
    {
      using DUNE_NAMESPACES;

      //! List of PX4 Modes
      //! From px4_custom_mode.h in PX4/Firmware git repository.
      enum PX4_Modes
      {
        PX4_CUSTOM_MAIN_MODE_MANUAL=1,
        PX4_CUSTOM_MAIN_MODE_ALTCTL,
        PX4_CUSTOM_MAIN_MODE_POSCTL,
        PX4_CUSTOM_MAIN_MODE_AUTO,
        PX4_CUSTOM_MAIN_MODE_ACRO,
        PX4_CUSTOM_MAIN_MODE_OFFBOARD,
        PX4_CUSTOM_MAIN_MODE_STABILIZED,
        PX4_CUSTOM_MAIN_MODE_RATTITUDE
      };

      //! List of PX4 Auto Sub-Modes
      enum PX4_subModes
      {
        PX4_CUSTOM_SUB_MODE_AUTO_READY = 1,
        PX4_CUSTOM_SUB_MODE_AUTO_TAKEOFF,
        PX4_CUSTOM_SUB_MODE_AUTO_LOITER,
        PX4_CUSTOM_SUB_MODE_AUTO_MISSION,
        PX4_CUSTOM_SUB_MODE_AUTO_RTL,
        PX4_CUSTOM_SUB_MODE_AUTO_LAND,
        PX4_CUSTOM_SUB_MODE_AUTO_RTGS,
        PX4_CUSTOM_SUB_MODE_AUTO_FOLLOW_TARGET
      };

      //! VTOL States
      enum VTOL_State
      {
        MAV_VTOL_STATE_UNDEFINED,         // MAV is not configured as VTOL
        MAV_VTOL_STATE_TRANSITION_TO_FW,  // VTOL is in transition from multicopter to fixed-wing
        MAV_VTOL_STATE_TRANSITION_TO_MC,  // VTOL is in transition from fixed-wing to multicopter
        MAV_VTOL_STATE_MC,                // VTOL is in multicopter state
        MAV_VTOL_STATE_FW                 // VTOL is in fixed-wing state
      };

      //! %Task arguments.
      struct Arguments
      {
        //! Communications timeout
        uint8_t comm_timeout;
        //! TCP Port
        uint16_t TCP_port;
        //! TCP Address
        Address TCP_addr;
        //! Use UDP Port
        uint16_t UDP_listen_port;
        //! UDP Port
        uint16_t UDP_port;
        //! Use TCP or UDP
        bool tcp_or_udp;
        //! UDP Address
        Address UDP_addr;
        //! Time to wait for MC to FW transition
        float transition_time;
        //! Telemetry Rate
        //uint8_t trate;  NEED TO CHECK IF PX4 CAN DO THIS
      };


      struct Task: public DUNE::Tasks::Task
      {
        //! Task arguments.
        Arguments m_args;
        //! Type definition for PX4 packet handler.
        typedef void (Task::* PktHandler)(const mavlink_message_t* msg);
        typedef std::map<int, PktHandler> PktHandlerMap;
        //! PX4 packet handling
        PktHandlerMap m_mlh;
        //! Flag of WP changing
        bool m_changing_wp;
        //! Flag of mission mode
        bool m_mission;

        //! TCP socket
        Network::TCPSocket* m_TCP_sock;
        //! UDP socket
        Network::UDPSocket* m_UDP_sock;

        //! System ID
        uint8_t m_sysid;
        //! Parser Variables
        mavlink_message_t m_msg;
        uint8_t m_buf[512];
        //! VTOL State
        VTOL_State m_vtol_state;

        //! Mavlink Timeouts
        bool m_error_missing;
        double m_last_pkt_time;
        double m_last_wp;

        //! GPS Fix message
        IMC::GpsFix m_fix;
        //! Estimated state message.
        IMC::EstimatedState m_estate;
        //! DesiredPath message
        IMC::DesiredPath m_dpath;
        //! PathControlState message
        IMC::PathControlState m_pcs;
        //! AutopilotMode message
        IMC::AutopilotMode m_mode;
        //! TrueSpeed message
        IMC::TrueSpeed m_groundspeed;
        //! ControlLoops message
        IMC::ControlLoops m_cloops;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_changing_wp(false),
          m_mission(false),
          m_TCP_sock(NULL),
          m_UDP_sock(NULL),
          m_sysid(1),
          m_vtol_state(MAV_VTOL_STATE_UNDEFINED),
          m_error_missing(false),
          m_last_wp(0)
        {
          param("Communications Timeout", m_args.comm_timeout)
          .minimumValue("1")
          .maximumValue("60")
          .defaultValue("10")
          .units(Units::Second)
          .description("Ardupilot communications timeout");

          param("TCP - Port", m_args.TCP_port)
          .defaultValue("5760")
          .description("Port for connection to Ardupilot");

          param("TCP - Address", m_args.TCP_addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to Ardupilot");

          param("UDP - Listen Port", m_args.UDP_listen_port)
          .defaultValue("14557")
          .description("Port for connection from Ardupilot");

          param("UDP - Port", m_args.UDP_port)
          .defaultValue("14556")
          .description("Port for connection to Ardupilot");

          param("UDP - Address", m_args.UDP_addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to Ardupilot");

          param("Use TCP (or UDP)", m_args.tcp_or_udp)
          .defaultValue("true")
          .description("Ardupilot communications timeout");

          param("Transition Time", m_args.transition_time)
          .defaultValue("3.0")
          .description("Time to wait for transition to fixed-wing to complete (AUTO mode). If zero, it doesn't transition.");

          // Setup packet handlers
          // IMPORTANT: set up function to handle each type of MAVLINK packet here
          m_mlh[MAVLINK_MSG_ID_ATTITUDE]              = &Task::handleAttitudePacket;
          m_mlh[MAVLINK_MSG_ID_GLOBAL_POSITION_INT]   = &Task::handlePositionPacket;
          m_mlh[MAVLINK_MSG_ID_HWSTATUS]              = &Task::handleHWStatusPacket;
          m_mlh[MAVLINK_MSG_ID_SCALED_PRESSURE]       = &Task::handleScaledPressurePacket;
          m_mlh[MAVLINK_MSG_ID_GPS_RAW_INT]           = &Task::handleRawGPSPacket;
          m_mlh[MAVLINK_MSG_ID_WIND]                  = &Task::handleWindPacket;
          m_mlh[MAVLINK_MSG_ID_STATUSTEXT]            = &Task::handleStatusTextPacket;
          m_mlh[MAVLINK_MSG_ID_HEARTBEAT]             = &Task::handleHeartbeatPacket;
          m_mlh[MAVLINK_MSG_ID_SYS_STATUS]            = &Task::handleSystemStatusPacket;
          m_mlh[MAVLINK_MSG_ID_VFR_HUD]               = &Task::handleHUDPacket;
          m_mlh[MAVLINK_MSG_ID_SYSTEM_TIME]           = &Task::handleSystemTimePacket;
          m_mlh[MAVLINK_MSG_ID_RAW_IMU]               = &Task::handleImuRaw;
          m_mlh[MAVLINK_MSG_ID_EXTENDED_SYS_STATE]    = &Task::handleExtendedStatePacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_ACK]           = &Task::handleMissionAckPacket;
          m_mlh[MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT] = &Task::handleNavControllerPacket;

          // Setup processing of IMC messages
          bind<AutopilotMode>(this);
          bind<DesiredPath>(this);
          bind<ControlLoops>(this);

          //! Misc. initialization
          m_last_pkt_time = 0; //! time of last packet from Ardupilot
          m_estate.clear();
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          openConnection();
        }

        void
        openConnection(void)
        {
          try
          {
            if (m_args.tcp_or_udp)
            {
              m_TCP_sock = new TCPSocket;
              m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
              m_TCP_sock->setNoDelay(true);
            }
            else
            {
              m_UDP_sock = new UDPSocket;
              m_UDP_sock->bind(m_args.UDP_listen_port, Address::Any, false);
            }
            inf(DTR("PX4 interface initialized"));

            // Clear previous mission on PX4 (FUNCIONA)
            mavlink_msg_mission_clear_all_pack(255, 0, &m_msg, m_sysid, 0);
            uint16_t n = mavlink_msg_to_send_buffer(m_buf, &m_msg);
            sendData(m_buf, n);
          }
          catch (...)
          {
            Memory::clear(m_TCP_sock);
            Memory::clear(m_UDP_sock);
            war(DTR("Connection failed, retrying..."));
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          }
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
           Memory::clear(m_TCP_sock);
           Memory::clear(m_UDP_sock);
        }

        void
        consume(const IMC::AutopilotMode* msg)
        {
          // Arm/Disarm
          if (msg->mode.compare("ARM") == 0)
            sendCommandPacket(MAV_CMD_COMPONENT_ARM_DISARM, 1);

          if (msg->mode.compare("DISARM") == 0)
            sendCommandPacket(MAV_CMD_COMPONENT_ARM_DISARM, 0);

          (void)msg;
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
        consume(const IMC::ControlLoops* cloops)
        {
          m_cloops = *cloops;

          // Set LOITER mode if in AUTO and no plan.
          if(!cloops->enable && std::strcmp("AUTO", m_mode.mode.c_str()))
          {
            sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO, PX4_CUSTOM_SUB_MODE_AUTO_LOITER);
            m_mission = 0;
            //TODO Not show PCS! When and where do I need to do this also? In navcontroller if I'm not in auto ?!
            m_pcs.clear();
            dispatch(m_pcs);
          }
        }

        //! Message for OFFBOARD control (using PX4's controllers)
        void
        consume(const IMC::DesiredPath* path)
        {
          // Check if it's in plane modem
          if(m_args.transition_time > 0 &&  (m_vtol_state != MAV_VTOL_STATE_FW))
          {
            // Command transition to plane
            sendCommandPacket(MAV_CMD_DO_VTOL_TRANSITION, MAV_VTOL_STATE_FW);

            // Waits some time for transition to finish
            inf("Transition to Fixed-Wing.");
            Time::Delay::wait(m_args.transition_time);
          }

          uint8_t buf[512];
          mavlink_message_t msg;
          uint16_t n;

          if(!m_mission)
          {
            m_mission = true;

            // Set loiter radius
            mavlink_msg_param_set_pack(255, 0, &msg,
                                       m_sysid, //! target_system System ID
                                       0, //! target_component Component ID
                                       "NAV_LOITER_RAD", //! Parameter name
                                       path->flags & DesiredPath::FL_CCLOCKW ? (-1 * path->lradius) : (path->lradius), //! Parameter value
                                       MAV_PARAM_TYPE_INT16); //! Parameter type
            n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);

            //TODO: Check if waypoint is a loiter
            uint16_t command; float param_radius = 0;
            if(!path->lradius){
              command = MAV_CMD_NAV_WAYPOINT; param_radius = 0;}
            else{
              command = MAV_CMD_NAV_LOITER_UNLIM; param_radius = path->flags & DesiredPath::FL_CCLOCKW ? -1 : 0;}

            /* TODO Fix commanded airspeed setting - not working!
            // Setting Desired Airspeed
            const char *param_id;
            if(m_vtol_state == MAV_VTOL_STATE_FW)
              param_id = "FW_AIRSPD_TRIM";
            else if(m_vtol_state == MAV_VTOL_STATE_MC)
              param_id = "VT_MC_ARSPD_TRIM";
            else
              war("VTOL state neither FW or MC. Commanded airspeed not set!");

            mavlink_msg_param_set_pack(255, 0, &msg,
                                       m_sysid,                   //! target_system System ID
                                       0,                         //! target_component Component ID
                                       param_id,                  //! Parameter name
                                       (int)(path->speed * 100),  //! Parameter value
                                       MAV_PARAM_TYPE_INT16);     //! Parameter type
            n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);*/

            // Send Mission Count
            mavlink_msg_mission_count_pack(255, 0, &msg, m_sysid, 0, 1);
            n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);

            // Send Mission Item
            mavlink_msg_mission_item_pack(255, 0, &msg,
                                          m_sysid, //! target_system System ID
                                          0, //! target_component Component ID
                                          0, //! seq Sequence
                                          MAV_FRAME_GLOBAL_RELATIVE_ALT, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                          command, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                          1, //! current false:0, true:1, guided mode:2
                                          1, //! autocontinue to next wp
                                          0, //! Not used
                                          0, //! Not used
                                          param_radius, //! If <0, then CCW loiter
                                          0, //! Not used
                                          (float)Angles::degrees(path->end_lat), //! x PARAM5 / local: x position, global: latitude
                                          (float)Angles::degrees(path->end_lon), //! y PARAM6 / y position: global: longitude
                                          path->end_z);//! z PARAM7 / z position: global: altitude*/

            n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);

            // Set AUTO mode and MISSION submode
            sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO, PX4_CUSTOM_SUB_MODE_AUTO_MISSION);


            //! Dispatch PathControlState
            m_pcs.start_lat = m_estate.lat;
            m_pcs.start_lon = m_estate.lon;
            m_pcs.start_z = m_estate.alt;
            m_pcs.start_z_units = IMC::Z_ALTITUDE;
            m_pcs.end_lat = path->end_lat;
            m_pcs.end_lon = path->end_lon;
            m_pcs.end_z = path->end_z_units;
            m_pcs.end_z_units = IMC::Z_HEIGHT;
            m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
            m_pcs.flags &= path->flags;
            m_pcs.lradius = path->lradius;
            m_pcs.path_ref = path->path_ref;

            dispatch(m_pcs);

            // Update WP info
            m_changing_wp = true;
            m_last_wp = Clock::get();
          }
          // Save DesiredPath
          m_dpath = *path;
        }

        //! Main loop.
        void
        onMain(void)
        {
          while (!stopping())
          {
            // Handle Autopilot data
            if (m_TCP_sock || m_UDP_sock)
            {
              handleArdupilotData();
            }
            else
            {
              Time::Delay::wait(0.5);
              openConnection();
            }

            if (!m_error_missing)
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            // Handle IMC messages from bus
            consumeMessages();
          }
        }


        void
        handleArdupilotData(void)
        {
          mavlink_status_t status;

          double now = Clock::get();
          int counter = 0;

          while (poll(0.01) && counter < 100)
          {
            counter++;

            int n = receiveData(m_buf, sizeof(m_buf));
            if (n < 0)
            {
              debug("Receive error");
              break;
            }

            // time stamp!
            now = Clock::get();

            // for each packet
            for (int i = 0; i < n; i++)
            {
              int rv = mavlink_parse_char(MAVLINK_COMM_0, m_buf[i], &m_msg, &status);

              // check if parsing failed
              checkParseState(status);

              // handle the parsed packet
              if (rv)
              {
                spew("RECEIVED: %u", m_msg.msgid);

                // pull the handler
                PktHandler h = m_mlh[m_msg.msgid];

                // no handler
                if (!h)
                {
                  //debug("UNDEF: %u", m_msg.msgid);
                  continue;  // Ignore this packet
                }

                // Call handler
                (this->*h)(&m_msg);
                m_sysid = m_msg.sysid;

                m_last_pkt_time = now;
              } // end: handle the parsed packet

            } // end: for each packet
          } // end: poll for packets


          // check for timeout
          if (now - m_last_pkt_time >= m_args.comm_timeout)
          {
            if (!m_error_missing)
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
              m_error_missing = true;
            }
          }
          else
            m_error_missing = false;
        }

        void
        checkParseState(mavlink_status_t& status)
        {
          // parsing failed
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
          } // if parsing failed
        }


        // Serial Over TCP Polling
        bool
        poll(double timeout)
        {
          if (m_TCP_sock != NULL)
            return Poll::poll(*m_TCP_sock, timeout);

          if (m_UDP_sock != NULL)
            return Poll::poll(*m_UDP_sock, timeout);

          return false;
        }

        int
        sendData(uint8_t* bfr, int size)
        {
          if (m_TCP_sock)
          {
            trace("Sending something");
            return m_TCP_sock->write((char*)bfr, size);
          }
          else if (m_UDP_sock)
          {
            trace("Sending something");
            return m_UDP_sock->write(bfr, size, m_args.UDP_addr, m_args.UDP_port);
          }
          return 0;
        }

        int
        receiveData(uint8_t* buf, size_t blen)
        {
          if (m_TCP_sock || m_UDP_sock)
          {
            try
            {
              if (m_TCP_sock)
                return m_TCP_sock->read(buf, blen);
              if (m_UDP_sock)
                return m_UDP_sock->read(buf, blen, &m_args.UDP_addr, &m_args.UDP_listen_port);
            }
            catch (std::runtime_error& e)
            {
              err("%s", e.what());
              war(DTR("Connection lost, retrying..."));
              Memory::clear(m_TCP_sock);
              Memory::clear(m_UDP_sock);

              if (m_args.tcp_or_udp)
              {
                m_TCP_sock = new Network::TCPSocket;
                m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
              }
              else
              {
                m_UDP_sock = new UDPSocket;
                m_UDP_sock->bind(m_args.UDP_listen_port, Address::Any, false);
              } 
              return 0;
            }
          }
          return 0;
        }


        // PACKET HANDLERS
        void
        handleAttitudePacket(const mavlink_message_t* msg)
        {
          spew("ATTITUDE");

          mavlink_attitude_t att;

          mavlink_msg_attitude_decode(msg, &att);
          m_estate.phi = att.roll;
          m_estate.theta = att.pitch;
          m_estate.psi = att.yaw;
          m_estate.p = att.rollspeed;
          m_estate.q = att.pitchspeed;
          m_estate.r = att.yawspeed;

          dispatch(m_estate);
        }

        void
        handleImuRaw(const mavlink_message_t* msg)
        {
          spew("IMU_RAW");

          mavlink_raw_imu_t raw;
          mavlink_msg_raw_imu_decode(msg, &raw);

          double tstamp = Clock::getSinceEpoch();

          IMC::Acceleration acce;
          acce.x = raw.xacc;
          acce.y = raw.yacc;
          acce.z = raw.zacc;
          acce.setTimeStamp(tstamp);
          dispatch(acce);

          IMC::AngularVelocity avel;
          avel.x = raw.xgyro;
          avel.y = raw.ygyro;
          avel.z = raw.zgyro;
          avel.setTimeStamp(tstamp);
          dispatch(avel);

          IMC::MagneticField magn;
          magn.x = raw.xmag;
          magn.y = raw.ymag;
          magn.z = raw.zmag;
          magn.setTimeStamp(tstamp);
          dispatch(magn);
        }

        void
        handlePositionPacket(const mavlink_message_t* msg)
        {
          spew("POSITION");

          mavlink_global_position_int_t gp;
          mavlink_msg_global_position_int_decode(msg, &gp);

          m_estate.lat = Angles::radians((double)gp.lat * 1e-07);
          m_estate.lon = Angles::radians((double)gp.lon * 1e-07);
          m_estate.height = (double) gp.alt * 1e-3; // MSL

          m_estate.x = 0;
          m_estate.y = 0;
          m_estate.z = 0;

          m_estate.vx = 1e-02 * gp.vx;
          m_estate.vy = 1e-02 * gp.vy;
          m_estate.vz = -1e-02 * gp.vz;

          // Note: the following will yield body-fixed *ground* velocity
          // Maybe this can be fixed w/IAS readings (anyway not too important)
          BodyFixedFrame::toBodyFrame(m_estate.phi, m_estate.theta, m_estate.psi,
                                      m_estate.vx, m_estate.vy, m_estate.vz,
                                      &m_estate.u, &m_estate.v, &m_estate.w);

          m_estate.alt = (double) gp.relative_alt * 1e-3;   //AGL (relative to home altitude)
          m_estate.depth = -1;

          dispatch(m_estate);
        }

        void
        handleHWStatusPacket(const mavlink_message_t* msg)
        {
          spew("HW_STATUS");

          mavlink_hwstatus_t hw_status;
          IMC::Voltage volt;

          mavlink_msg_hwstatus_decode(msg, &hw_status);

          volt.value = 0.001 * hw_status.Vcc;

          dispatch(volt);
        }

        void
        handleSystemStatusPacket(const mavlink_message_t* msg)
        {
          spew("SYSTEM_STATUS");

          mavlink_sys_status_t sys_status;
          IMC::Voltage volt;
          IMC::Current curr;
          IMC::FuelLevel fuel;

          mavlink_msg_sys_status_decode(msg, &sys_status);

          volt.value = 0.001 * (float)sys_status.voltage_battery;
          curr.value = 0.01 * (float)sys_status.current_battery;
          fuel.value = (float)sys_status.battery_remaining;

          dispatch(volt);
          dispatch(curr);
          dispatch(fuel);
        }

        void
        handleScaledPressurePacket(const mavlink_message_t* msg)
        {
          spew("PRESSURE");

          mavlink_scaled_pressure_t sc_press;
          IMC::Pressure pressure;
          IMC::Temperature temp;

          mavlink_msg_scaled_pressure_decode(msg, &sc_press);

          pressure.value = sc_press.press_abs;
          temp.value = 0.01 * sc_press.temperature;

          dispatch(pressure);
          dispatch(temp);
        }

        void
        handleWindPacket(const mavlink_message_t* msg)
        {
          spew("WIND");

          mavlink_wind_t wind;
          IMC::EstimatedStreamVelocity stream;

          mavlink_msg_wind_decode(msg, &wind);

          double wind_dir_rad = wind.direction * Math::c_pi / 180;

          stream.x = -std::cos(wind_dir_rad) * wind.speed;
          stream.y = -std::sin(wind_dir_rad) * wind.speed;
          stream.z = wind.speed_z;

          dispatch(stream);
        }

        void
        handleStatusTextPacket(const mavlink_message_t* msg)
        {
          spew("TEXT");

          mavlink_statustext_t stat_tex;
          mavlink_msg_statustext_decode(msg, &stat_tex);
          inf("PX4 Status: %.*s", 50, stat_tex.text);
        }

        void
        handleHeartbeatPacket(const mavlink_message_t* msg)
        {
          spew("HEARTBEAT");

          mavlink_heartbeat_t hbt;
          mavlink_msg_heartbeat_decode(msg, &hbt);

          // since GCS heartbeat are actually also sent, ignore if type is a GCS (6)
          if (static_cast<MAV_TYPE>(hbt.type) == MAV_TYPE_GCS)
            return;

          if (hbt.system_status == MAV_STATE_CRITICAL)
            war("PX4 failsafe active");

          uint8_t px4_mode = hbt.custom_mode >> 16;
          uint8_t px4_submode =  hbt.custom_mode >> 24;

          switch(px4_mode)
          {
            // Manual Modes
            case PX4_CUSTOM_MAIN_MODE_MANUAL:
              m_mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
              m_mode.mode = "MANUAL";
              trace("MANUAL");
            break;
            case PX4_CUSTOM_MAIN_MODE_STABILIZED:
              m_mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
              m_mode.mode = "STABILIZE";
              trace("STABILIZE");
              break;
            case PX4_CUSTOM_MAIN_MODE_ACRO:
              m_mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
              m_mode.mode = "ACRO";
              trace("ACRO");
              break;
            case PX4_CUSTOM_MAIN_MODE_RATTITUDE:
              m_mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
              m_mode.mode = "RATTITUDE";
              trace("RATTITUDE");
              break;

            // Assisted Modes
            case PX4_CUSTOM_MAIN_MODE_ALTCTL:
              m_mode.autonomy = IMC::AutopilotMode::AL_ASSISTED;
              m_mode.mode = "ALTCTL";
              trace("ALTCTL");
              break;
            case PX4_CUSTOM_MAIN_MODE_POSCTL:
              m_mode.autonomy = IMC::AutopilotMode::AL_ASSISTED;
              m_mode.mode = "POSCTL";
              trace("POSCTL");
              break;

            // Auto Modes
            case PX4_CUSTOM_MAIN_MODE_AUTO:
              m_mode.autonomy = IMC::AutopilotMode::AL_AUTO;
              // Check submode
              switch(px4_submode)
              {
                case PX4_CUSTOM_SUB_MODE_AUTO_LOITER:
                  m_mode.mode = "LOITER";
                  trace("LOITER");
                  break;
                case PX4_CUSTOM_SUB_MODE_AUTO_RTL:
                  m_mode.mode = "RTL";
                  trace("RTL");
                  //TODO if in RTL get home and update PCC ?
                  break;
                case PX4_CUSTOM_SUB_MODE_AUTO_MISSION:
                  if(m_dpath.end_lat)
                  {
                    receive(&m_cloops);
                    receive(&m_dpath);
                  }
                  m_mode.mode = "MISSION";
                  trace("MISSION");
                  break;
                case PX4_CUSTOM_SUB_MODE_AUTO_TAKEOFF:
                  m_mode.mode = "TAKEOFF";
                  trace("TAKEOFF");
                  break;
                case PX4_CUSTOM_SUB_MODE_AUTO_LAND:
                  m_mode.mode = "LAND";
                  trace("LAND");
                  break;
                case PX4_CUSTOM_SUB_MODE_AUTO_FOLLOW_TARGET:
                  m_mode.mode = "GUIDED";
                  trace("GUIDED");
                  break;
                default:
                  m_mode.mode = "AUTO";
                  trace("AUTO");
                  break;
              }
              break;
            case PX4_CUSTOM_MAIN_MODE_OFFBOARD:
              m_mode.autonomy = IMC::AutopilotMode::AL_AUTO;
              m_mode.mode = "OFFBOARD";
              trace("OFFBOARD");
              break;

            // Default
            default:
              m_mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
              m_mode.mode = "UNKNOWN";
              break;
          }

          dispatch(m_mode);

          //TODO Use hbt.base_mode (MAV_MODE_FLAG_SAFETY_ARMED) to send ARMED state upstream - will need to create an IMC message.
        }

        void
        handleHUDPacket(const mavlink_message_t* msg)
        {
          spew("HUD");

          IMC::IndicatedSpeed ias;
          mavlink_vfr_hud_t vfr_hud;
          mavlink_msg_vfr_hud_decode(msg, &vfr_hud);

          ias.value = (fp64_t)vfr_hud.airspeed;
          m_groundspeed.value = (fp64_t)vfr_hud.groundspeed;

          dispatch(ias);
          dispatch(m_groundspeed);
        }

        void
        handleRawGPSPacket(const mavlink_message_t* msg)
        {
          spew("GPS_RAW");

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

          m_fix.validity = 0;
          if (gps_raw.fix_type > 1)
          {
            m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
            m_fix.type = IMC::GpsFix::GFT_STANDALONE;
          }
          else
            m_fix.type = IMC::GpsFix::GFT_DEAD_RECKONING;

          if (gps_raw.fix_type == 3)
          {
            m_fix.validity |= IMC::GpsFix::GFV_VALID_VDOP;
            m_fix.vdop = 5;
          }
        }

        void
        handleSystemTimePacket(const mavlink_message_t* msg)
        {
          spew("SYSTEM_TIME");

          mavlink_system_time_t sys_time;
          mavlink_msg_system_time_decode(msg, &sys_time);

          time_t t = sys_time.time_unix_usec / 1000000;
          struct tm* utc;
          utc = gmtime(&t);

          m_fix.utc_time = utc->tm_hour * 3600 + utc->tm_min * 60 + utc->tm_sec + (sys_time.time_unix_usec % 1000000) * 1e-6;
          m_fix.utc_year = utc->tm_year + 1900;
          m_fix.utc_month = utc->tm_mon +1;
          m_fix.utc_day = utc->tm_mday;

          if (m_fix.utc_year>2014)
            m_fix.validity |= (IMC::GpsFix::GFV_VALID_TIME | IMC::GpsFix::GFV_VALID_DATE);

          dispatch(m_fix);
        }

        void
        handleExtendedStatePacket(const mavlink_message_t* msg)
        {
          spew("EXTENDED_SYSTEM_STATE");

          mavlink_extended_sys_state_t extended_state;
          mavlink_msg_extended_sys_state_decode(msg, &extended_state);

          // Update vtol state
          m_vtol_state = (VTOL_State)extended_state.vtol_state;

          //TODO Add VTOL_State to IMC so we can send it upstream.
        }

        void
        handleMissionAckPacket(const mavlink_message_t* msg)
        {
          spew("MISSION_ACK");
          m_last_wp = 0;
          m_changing_wp = false;
          (void)msg;
        }

        void
        handleNavControllerPacket(const mavlink_message_t* msg)
        {
          //TODO review and simplify!!!
          spew("NAV_CONTROLLER");

          mavlink_nav_controller_output_t nav_out;
          mavlink_msg_nav_controller_output_decode(msg, &nav_out);
          //inf("WP Dist: %d", nav_out.wp_dist);  //NOT WORKING PROPERLY IN COPTER

          if(!std::strcmp(m_mode.mode.c_str(), "AUTO"))
            if((nav_out.wp_dist <= m_dpath.lradius + 10) && (nav_out.wp_dist >= m_dpath.lradius - 10)){
              m_pcs.flags |= PathControlState::FL_LOITERING; inf("FL_LOITERING");}

          //TEST
          float distance = 0;
          Matrix destination = Matrix(3, 1, 0.0);
          Matrix current_pos = Matrix(3, 1, 0.0);
          current_pos(0) = m_estate.x;
          current_pos(1) = m_estate.y;
          current_pos(2) = m_estate.z;

          WGS84::displacement(m_estate.lat, m_estate.lon, m_estate.alt,
                                          m_dpath.end_lat, m_dpath.end_lon, m_dpath.end_z,
                                          &destination(0), &destination(1), &destination(2));

          distance = (destination - current_pos).norm_2();
          nav_out.wp_dist = (uint16_t)distance;

          float since_last_wp = Clock::get() - m_last_wp;
          int threshold;

          if(m_vtol_state == MAV_VTOL_STATE_FW)
            threshold = 80;
          else
            threshold = 10;

          if(nav_out.wp_dist < threshold)
          {
            if(m_dpath.lradius > 0)
              return;

            debug("FL_NEAR!");
            m_pcs.flags |= PathControlState::FL_NEAR;
            m_mission = 0;
          }

          if (m_last_wp && since_last_wp > 1.5)
            receive(&m_dpath);

          if (m_groundspeed.value)
            m_pcs.eta = nav_out.wp_dist / m_groundspeed.value;

          dispatch(m_pcs);
        }
      };
    }
  }
}

DUNE_TASK
