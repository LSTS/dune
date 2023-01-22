//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
        PX4_CUSTOM_MAIN_MODE_MANUAL = 1,
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
        //! IPv4 Address
        Address ip;
        //! Transition to FW
        bool transition_fw;
        //! Transition to MC
        bool transition_mc;
        //! WP Threshold for FW
        float threshold_fw;
        //! WP Threshold for MC
        float threshold_mc;
        //! Mavlink phototrigger
        bool mavlink_phototrigger;
        //! Debug GCS Heartbeat
        bool heartbeat;
        //! Moving Home
        bool moving_home;
        //! Basestation (Moving Home)
        std::string basestation;
        //! Home Position Update (Moving Home)
        uint8_t home_update;
        //! Send full plan option
        bool full_plan;
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
        //! Flag of mission mode
        bool m_mission;
        //! Height offset between MSL and WGS84
        float m_hae_offset;
        //! Flag to signal if MSL-WGS84 offset has already been calculated.
        bool m_offset;
        //! Loiter maneuver duration
        int m_duration;
        //! Vehicle State is "Maneuver"
        bool m_maneuver;
        //! Signals if a plan was started
        bool m_start;
        //! Signals if maneuver is a takeoff or landing
        bool m_tkoff_land;

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
        //! Moving Home timer
        Time::Counter<float> m_timer;

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
        //! PlanSpecification message
        IMC::PlanSpecification m_pspec;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_mission(false),
          m_hae_offset(0.0),
          m_offset(false),
          m_duration(0),
          m_maneuver(false),
          m_start(false),
          m_tkoff_land(false),
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

          param("IPv4 - Address", m_args.ip)
          .defaultValue("10.0.20.160")
          .description("Address for neptus connection to PX4.");

          param("Transition to FW", m_args.transition_fw)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .defaultValue("false")
          .description("Transition from multi-copter to fixed-wing.");

          param("Transition to MC", m_args.transition_mc)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .defaultValue("false")
         .description("Transition from fixed-wing to multi-copter.");

          param("WP Threshold for FW", m_args.threshold_fw)
          .units(Units::Meter)
          .defaultValue("100")
          .description("Distance (in meters) from the waypoint at which it's considered reached, for fixed-wing mode.");

          param("WP Threshold for MC", m_args.threshold_mc)
          .units(Units::Meter)
          .defaultValue("10")
          .description("Distance (in meters) from the waypoint at which it's considered reached, for multi-copter mode.");

          param("FLIR Duo R", m_args.mavlink_phototrigger)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .defaultValue("false")
          .description("Mavlink phototrigger enable/disbale.");

          param("GCS Heartbeat", m_args.heartbeat)
          .defaultValue("true")
          .description("Produce GCS heartbeat (for debugging purposes).");

          param("Moving Home", m_args.moving_home)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .defaultValue("false")
		  .description("Enable/Disable moving basestation feature.");

          param("Basestation", m_args.basestation)
          .defaultValue("manta-3")
		  .description("System to consider as the basestation for moving home feature.");

          param("Home Position Update", m_args.home_update)
          .defaultValue("60")
		  .description("Period of home position update (if moving home enabled), in seconds");

          param("Send Full Plan to Autopilot", m_args.full_plan)
          .defaultValue("false")
          .description("If true the full plan will be sent to the autopilot, instead of only the next waypoint.");


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
          m_mlh[MAVLINK_MSG_ID_MISSION_ITEM_REACHED]  = &Task::handleMissionItemReachedPacket;
          m_mlh[MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT] = &Task::handleNavControllerPacket;

          // Setup processing of IMC messages
          bind<AutopilotMode>(this);
          bind<DesiredPath>(this);
          bind<DevCalibrationControl>(this);
          bind<ControlLoops>(this);
          bind<PlanControl>(this);
          bind<Loiter>(this);
          bind<Takeoff>(this);
          bind<Land>(this);
          bind<VehicleState>(this);
          bind<Announce>(this);
          bind<PlanSpecification>(this);

          //! Misc. initialization
          m_last_pkt_time = 0; //! time of last packet from Ardupilot
          m_estate.clear();
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          openConnection();

          // Announce IPv4 address to allow neptus to load/write PX4 parameters
          std::stringstream os;
          os << "mavlink+tcp://" << m_args.ip << ":" << m_args.TCP_port << "/";

          IMC::AnnounceService announce;
          announce.service = os.str();
          announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;
          dispatch(announce);
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

            // Clear previous mission on PX4
            clearMission();
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
        onUpdateParameters(void)
        {
          // Mavlink Phototrigger
          if(paramChanged(m_args.mavlink_phototrigger))
          {
            if(m_args.mavlink_phototrigger)
            {
              // Issue command to start phototrigger
              mavlink_msg_command_long_pack(m_sysid, 0, &m_msg, m_sysid, MAV_COMP_ID_CAMERA, MAV_CMD_IMAGE_START_CAPTURE, 0, 1, 0, 2, 0, 0, 0, 0);
              inf("Sent IMAGE_START_CAPTURE command.");
            }
            else
            {
              // Issue command to stop phototrigger
              mavlink_msg_command_long_pack(m_sysid, 0, &m_msg, m_sysid, MAV_COMP_ID_CAMERA, MAV_CMD_IMAGE_STOP_CAPTURE, 0, 0, 0, 0, 0, 0, 0, 0);
              inf("Sent IMAGE_STOP_CAPTURE command.");
            }

            uint16_t n = mavlink_msg_to_send_buffer(m_buf, &m_msg);
            sendData(m_buf, n);
          }

          // Moving Home
          if(paramChanged(m_args.moving_home) && m_args.moving_home)
            m_timer.setTop(m_args.home_update);
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
        clearMission(void)
        {
          // Clear previous mission on PX4
          mavlink_msg_mission_clear_all_pack(255, 0, &m_msg, m_sysid, 0);
          uint16_t n = mavlink_msg_to_send_buffer(m_buf, &m_msg);
          sendData(m_buf, n);
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
        consume(const IMC::DevCalibrationControl* msg)
        {
          // Set ground pressure (used for Planes)
          if (msg->op == IMC::DevCalibrationControl::DCAL_START)
            sendCommandPacket(MAV_CMD_PREFLIGHT_CALIBRATION, 0, 0, 0, 0, 0, 2, 0);

          (void)msg;
        }

        void
        consume(const IMC::ControlLoops* cloops)
        {
          m_cloops = *cloops;

          // Set LOITER mode if in AUTO and no plan.
          if(!cloops->enable && m_mode.autonomy == IMC::AutopilotMode::AL_AUTO && !m_mission
              && !m_maneuver && std::strcmp(m_mode.mode.c_str(), "LAND"))
          {
            if(std::strcmp(m_mode.mode.c_str(), "LOITER"))
            {
              inf("Setting LOITER mode.");
              clearMission();
              m_pcs.clear();
              dispatch(m_pcs);
              sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO,PX4_CUSTOM_SUB_MODE_AUTO_LOITER);
              m_mission = false;
              m_start = false;
              m_tkoff_land = false;
            }
          }
        }

        void
        consume(const IMC::PlanControl* msg)
        {
          switch (msg->op)
          {
            case IMC::PlanControl::PC_STOP:
              spew("PC_STOP");
              m_mission = false;
              m_start = false;
              m_tkoff_land = false;
              if(std::strcmp(m_mode.mode.c_str(), "LOITER"))
              {
                clearMission();
                sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO,PX4_CUSTOM_SUB_MODE_AUTO_LOITER);
                inf("Setting LOITER mode.");
              }
              break;
            case IMC::PlanControl::PC_START:
              spew("PC_START");
              m_mission = false;
              m_start = true;
              break;
            default:
              break;
          }
        }

        void
        consume(const IMC::PlanSpecification* msg)
        {
          m_pspec = *msg;
        }

        void
        consume(const IMC::Loiter* msg)
        {
          m_duration = msg->duration;
        }

        void
        consume(const IMC::VehicleState* msg)
        {
          m_maneuver = (msg->op_mode == IMC::VehicleState::VS_MANEUVER);
        }

        void
        consume(const IMC::Announce* msg)
        {
          if(std::strcmp(m_args.basestation.c_str(), msg->sys_name.c_str()))
            return;

          if(m_timer.overflow() && m_args.moving_home)
          {
            sendCommandPacket(MAV_CMD_DO_SET_HOME, 0, 0, 0, 0, (float)Angles::degrees(msg->lat), (float)Angles::degrees(msg->lon), msg->height);
            m_timer.reset();
            inf("Basestation Update: %f, %f, %f", (float)Angles::degrees(msg->lat), (float)Angles::degrees(msg->lon), msg->height);
          }
        }

        void
        consume(const IMC::Takeoff* tkoff)
        {
          // Local Variables
          uint8_t buf[512];
          uint16_t n;
          mavlink_message_t msg;

          // Clear previous mission
          clearMission();

          // Check if in AUTO mode
          if(m_mode.autonomy != IMC::AutopilotMode::AL_AUTO)
          {
            inf(DTR("PX4 is in a Manual mode, saving desired path."));
            return;
          }

          m_tkoff_land = true;

          // Setting Desired Airspeed
          sendCommandPacket(MAV_CMD_DO_CHANGE_SPEED, 0, tkoff->speed, 0, 0, 0, 0, 0);

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
                                        MAV_CMD_NAV_TAKEOFF, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                        1, //! current false:0, true:1, guided mode:2
                                        1, //! autocontinue to next wp
                                        0, //! Used only in MAV_CMD_NAV_LOITER_TIME
                                        0, //! Not used
                                        0, //! If <0, then CCW loiter
                                        0, //! Not used
                                        (float)Angles::degrees(tkoff->lat), //! x PARAM5 / local: x position, global: latitude
                                        (float)Angles::degrees(tkoff->lon), //! y PARAM6 / y position: global: longitude
                                        tkoff->z);//! z PARAM7 / z position: global: altitude

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          // Set AUTO mode and TAKEOFF submode
          sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO, PX4_CUSTOM_SUB_MODE_AUTO_TAKEOFF);
          inf("Setting TAKEOFF mode.");

          // Update PathControlState
          m_pcs.start_lat = m_estate.lat;
          m_pcs.start_lon = m_estate.lon;
          m_pcs.start_z = m_estate.alt;
          m_pcs.start_z_units = IMC::Z_ALTITUDE;

          m_pcs.end_lat = m_estate.lat;
          m_pcs.end_lon = m_estate.lon;
          m_pcs.end_z = m_estate.alt;
          m_pcs.end_z_units = IMC::Z_ALTITUDE;

          m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
          dispatch(m_pcs);
        }

        void
        consume(const IMC::Land* land)
        {
          // Local variables
          uint8_t buf[512];
          uint16_t n;
          mavlink_message_t msg;

          // Check if in AUTO mode
          if(m_mode.autonomy != IMC::AutopilotMode::AL_AUTO)
          {
            inf(DTR("PX4 is in a Manual mode, saving desired path."));
            return;
          }

          // Clear previous mission
          clearMission();
          m_tkoff_land = true;

          // Check if it has order to send to PX4 LAND command
          if(!(m_dpath.flags & IMC::DesiredPath::FL_LAND))
          {
            debug("\n\r Land consume: doesn't have order to issue command yet!");
            return;
          }

          // Setting Desired Airspeed
          sendCommandPacket(MAV_CMD_DO_CHANGE_SPEED, 0, land->speed, 0, 0, 0, 0, 0);

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
                                        MAV_CMD_NAV_LAND, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                        1, //! current false:0, true:1, guided mode:2
                                        1, //! autocontinue to next wp
                                        land->abort_z, //! Used only in MAV_CMD_NAV_LOITER_TIME
                                        0, //! Not used
                                        0, //! If <0, then CCW loiter
                                        0, //! Not used
                                        (float)Angles::degrees(land->lat), //! x PARAM5 / local: x position, global: latitude
                                        (float)Angles::degrees(land->lon), //! y PARAM6 / y position: global: longitude
                                        0);//! z PARAM7 / z position: global: altitude

           n = mavlink_msg_to_send_buffer(buf, &msg);
           sendData(buf, n);

           // Set AUTO mode and LAND submode
           sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO, PX4_CUSTOM_SUB_MODE_AUTO_LAND);
           inf("Setting LAND mode.");

           m_tkoff_land = false;
        }

        //! Message for AUTO(MISSION) control (using PX4's controllers)
        void
        consume(const IMC::DesiredPath* path)
        {
          // Check if in AUTO mode
          if(m_mode.autonomy != IMC::AutopilotMode::AL_AUTO)
          {
            m_dpath = *path;
            inf(DTR("PX4 is in a Manual mode, saving desired path."));
            return;
          }

          uint8_t buf[512];
          mavlink_message_t msg;
          uint16_t n;

          if(!m_mission)
          {
            m_mission = true;

            // Check if transition was required
            if(m_args.transition_fw && (m_vtol_state == MAV_VTOL_STATE_MC))
            {
              // Command transition to plane
              sendCommandPacket(MAV_CMD_DO_VTOL_TRANSITION, MAV_VTOL_STATE_FW);
              war("Transition to Fixed-Wing.");
            }
            if(m_args.transition_mc && (m_vtol_state == MAV_VTOL_STATE_FW))
            {
              // Command transition to copter
              sendCommandPacket(MAV_CMD_DO_VTOL_TRANSITION, MAV_VTOL_STATE_MC);
              war("Transition to Multi-Copter.");
            }

            // Check if waypoint is a loiter
            uint16_t command; float param_radius = 0; bool altitude;
            if(!path->lradius){
              command = MAV_CMD_NAV_WAYPOINT; param_radius = 0;}
            else
            {
              if (!m_duration)
                command = MAV_CMD_NAV_LOITER_UNLIM;
              else
                command = MAV_CMD_NAV_LOITER_TIME;
              param_radius = path->flags & DesiredPath::FL_CCLOCKW ? (-1 * path->lradius) : (path->lradius);
            }

            // Check if plan is in Altitude or Height
            altitude = (path->end_z_units == IMC::Z_ALTITUDE) ? true : false;

            // Setting Desired Airspeed
            sendCommandPacket(MAV_CMD_DO_CHANGE_SPEED, 0, path->speed, 0, 0, 0, 0, 0);

            if(!m_args.full_plan || m_tkoff_land)
            {
              // Send Mission Count
              mavlink_msg_mission_count_pack(255, 0, &msg, m_sysid, 0, 1);
              n = mavlink_msg_to_send_buffer(buf, &msg);
              sendData(buf, n);

              // Send Mission Item
              mavlink_msg_mission_item_pack(255, 0, &msg,
                                            m_sysid, //! target_system System ID
                                            0, //! target_component Component ID
                                            0, //! seq Sequence
                                            altitude ? MAV_FRAME_GLOBAL_RELATIVE_ALT : MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                            command, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                            1, //! current false:0, true:1, guided mode:2
                                            1, //! autocontinue to next wp
                                            m_duration, //! Used only in MAV_CMD_NAV_LOITER_TIME
                                            0, //! Not used
                                            param_radius, //! If <0, then CCW loiter
                                            0, //! Not used
                                            (float) Angles::degrees(path->end_lat), //! x PARAM5 / local: x position, global: latitude
                                            (float) Angles::degrees(path->end_lon), //! y PARAM6 / y position: global: longitude
                                            altitude ? path->end_z : path->end_z - m_hae_offset);//! z PARAM7 / z position: global: altitude

               n = mavlink_msg_to_send_buffer(buf, &msg);
               sendData(buf, n);
            }
            else if(m_start) // Send Full Plan to Autopilot
            {
              // Clear previous mission
              //clearMission();
              m_start = false;

              // Send Mission Count
              mavlink_msg_mission_count_pack(255, 0, &msg, m_sysid, 0, (uint16_t)m_pspec.maneuvers.size());
              n = mavlink_msg_to_send_buffer(buf, &msg);
              sendData(buf, n);

              // Retrieve and send mission items
              std::vector<IMC::PlanManeuver*>::const_iterator itr;
              unsigned i=0;
              for (itr = m_pspec.maneuvers.begin(); itr != m_pspec.maneuvers.end(); itr++, i++)
              {
                switch ((*itr)->data.get()->getId())
                {
                  case DUNE_IMC_GOTO:
                  {
                    debug("GOTO");
                    const IMC::Goto *man_goto = static_cast<const IMC::Goto *>((*itr)->data.get());

                    // Send Mission Item
                    mavlink_msg_mission_item_pack(255, 0, &msg,
                                                  m_sysid, //! target_system System ID
                                                  0, //! target_component Component ID
                                                  i, //! seq Sequence
                                                  (man_goto->z_units == IMC::Z_ALTITUDE) ? MAV_FRAME_GLOBAL_RELATIVE_ALT : MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                                  MAV_CMD_NAV_WAYPOINT, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                                  0, //! current false:0, true:1, guided mode:2
                                                  1, //! autocontinue to next wp
                                                  0, //! Used only in MAV_CMD_NAV_LOITER_TIME
                                                  0, //! Not used
                                                  (m_vtol_state == MAV_VTOL_STATE_FW) ? param_radius : 0, //! If <0, then CCW loiter
                                                  0, //! Not used
                                                  (float) Angles::degrees(man_goto->lat), //! x PARAM5 / local: x position, global: latitude
                                                  (float) Angles::degrees(man_goto->lon), //! y PARAM6 / y position: global: longitude
                                                  (man_goto->z_units == IMC::Z_ALTITUDE) ? man_goto->z : man_goto->z - m_hae_offset);//! z PARAM7 / z position: global: altitude

                    n = mavlink_msg_to_send_buffer(buf, &msg);
                    sendData(buf, n);

                    //delete man_goto;
                    break;
                  }
                  case DUNE_IMC_LOITER:
                  {
                    debug("LOITER");
                    const IMC::Loiter *man_loiter = static_cast<const IMC::Loiter *>((*itr)->data.get());

                    // Send Mission Item
                    mavlink_msg_mission_item_pack(255, 0, &msg,
                                                  m_sysid, //! target_system System ID
                                                  0, //! target_component Component ID
                                                  i, //! seq Sequence
                                                  (man_loiter->z_units == IMC::Z_ALTITUDE) ? MAV_FRAME_GLOBAL_RELATIVE_ALT : MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                                  m_duration ?  MAV_CMD_NAV_LOITER_TIME : MAV_CMD_NAV_LOITER_UNLIM, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                                  0, //! current false:0, true:1, guided mode:2
                                                  1, //! autocontinue to next wp
                                                  m_duration ? man_loiter->duration : 0, //! Used only in MAV_CMD_NAV_LOITER_TIME
                                                  0, //! Not used
                                                  path->flags & DesiredPath::FL_CCLOCKW ? (-1 * man_loiter->radius) : (man_loiter->radius), //! If <0, then CCW loiter
                                                  0, //! Not used
                                                  (float) Angles::degrees(man_loiter->lat), //! x PARAM5 / local: x position, global: latitude
                                                  (float) Angles::degrees(man_loiter->lon), //! y PARAM6 / y position: global: longitude
                                                  (man_loiter->z_units == IMC::Z_ALTITUDE) ? man_loiter->z : man_loiter->z - m_hae_offset);//! z PARAM7 / z position: global: altitude

                    n = mavlink_msg_to_send_buffer(buf, &msg);
                    sendData(buf, n);

                    //delete man_loiter;
                    break;
                  }
                  default:
                    err("Full Plan option only has support for GoTo and Loiter maneuvers currently.");
                    sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO, PX4_CUSTOM_SUB_MODE_AUTO_LOITER);
                    inf("Setting LOITER mode.");
                    //m_tkoff_land = false;
                    return;
                    //break;
                }
              }

              inf("Full plan loaded to autopilot!");
              //TODO: Check if plan is cyclic (add support for plan transitions)
              //TODO: Add support for other maneuvers: Takeoff, Land, Rows, ...
            }

            // Set AUTO mode and MISSION submode
            if(std::strcmp(m_mode.mode.c_str(), "MISSION"))
            {
              sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO, PX4_CUSTOM_SUB_MODE_AUTO_MISSION);
              inf("Setting MISSION mode.");
            }

            //! Dispatch PathControlState
            m_pcs.start_lat = m_estate.lat;
            m_pcs.start_lon = m_estate.lon;
            m_pcs.start_z = altitude ? m_estate.alt : m_estate.height;
            m_pcs.start_z_units = altitude ? IMC::Z_ALTITUDE : IMC::Z_HEIGHT;
            m_pcs.end_lat = path->end_lat;
            m_pcs.end_lon = path->end_lon;
            m_pcs.end_z = path->end_z_units;
            m_pcs.end_z_units = altitude ? IMC::Z_ALTITUDE : IMC::Z_HEIGHT;
            m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
            m_pcs.flags &= path->flags;
            m_pcs.lradius = path->lradius;
            m_pcs.path_ref = path->path_ref;

            dispatch(m_pcs);

            // Update WP info
            m_last_wp = Clock::get();
            m_duration = 0;
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
                  spew("UNDEF: %u", m_msg.msgid);
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

          // Calculate WGS84 height
          if(!m_offset && m_fix.type == IMC::GpsFix::GFT_STANDALONE)
          {
            Coordinates::WMM wmm(m_ctx.dir_cfg);
            m_hae_offset = wmm.height(m_estate.lat, m_estate.lon);
            m_offset = true;
          }
          m_estate.height = (double) gp.alt * 1e-3 + m_hae_offset; // WGS84

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
          IMC::ApmStatus px4_status;

          mavlink_msg_statustext_decode(msg, &stat_tex);
          px4_status.severity = stat_tex.severity;
          px4_status.text = stat_tex.text;

          inf("PX4 Status: %.*s", 50, stat_tex.text);
          dispatch(px4_status);
        }

        void
        handleHeartbeatPacket(const mavlink_message_t* msg)
        {
          spew("HEARTBEAT");

          uint16_t n;
          mavlink_heartbeat_t hbt;
          mavlink_msg_heartbeat_decode(msg, &hbt);
          IMC::ArmingState arming;

          // Check if it's a CAMERA heartbeat (Autopilot Heartbeat: #21 - HW || #22 - SITL)
          if ((static_cast<MAV_TYPE>(hbt.type) != 21) && (static_cast<MAV_TYPE>(hbt.type) != 22))
          {
        	trace("Camera Heartbeat #%d", hbt.type);
        	return;
          }

          // Send GCS heartbeat (debug purposes)
          if(m_args.heartbeat)
          {
            mavlink_msg_heartbeat_pack(255, 0, &m_msg, MAV_TYPE_GCS, 0, 0, 0, 0);
            n = mavlink_msg_to_send_buffer(m_buf, &m_msg);
            sendData(m_buf, n);
            spew("GCS Heartbeat");
          }

          if (hbt.system_status == MAV_STATE_CRITICAL)
            war("PX4 failsafe active");

          // Update motors current ArmingState
          if (hbt.base_mode & MAV_MODE_FLAG_SAFETY_ARMED)
            arming.state = IMC::ArmingState::MOTORS_ARMED;
          else
            arming.state = IMC::ArmingState::MOTORS_DISARMED;
          dispatch(arming);

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

          IMC::VtolState vtol;
          mavlink_extended_sys_state_t extended_state;
          mavlink_msg_extended_sys_state_decode(msg, &extended_state);

          // Update vtol state
          m_vtol_state = (VTOL_State)extended_state.vtol_state;

          // Dispatch vtol state
          vtol.state = m_vtol_state;
          dispatch(vtol);
        }

        void
        handleMissionAckPacket(const mavlink_message_t* msg)
        {
          spew("MISSION_ACK");
          mavlink_mission_ack_t ack;

          mavlink_msg_mission_ack_decode(msg, &ack);
          debug("Mission received, result is %d", ack.type);

          m_last_wp = 0;
        }

        void
        handleMissionItemReachedPacket(const mavlink_message_t* msg)
        {
          spew("MISSION_ITEM_REACHED");
          mavlink_mission_item_reached_t reached;

          mavlink_msg_mission_item_reached_decode(msg, &reached);
          debug("Mission item %d reached.", reached.seq);

          // Check if timed loiter finished
          if(m_mission && m_dpath.lradius)
          {
            sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_FLAG_CUSTOM_MODE_ENABLED, PX4_CUSTOM_MAIN_MODE_AUTO, PX4_CUSTOM_SUB_MODE_AUTO_LOITER);
            clearMission();
            m_mission = false;
            m_start = false;
            debug("Timed loiter ended.");
          }
        }

        void
        handleNavControllerPacket(const mavlink_message_t* msg)
        {
          //TODO review and simplify.
          spew("NAV_CONTROLLER");

          mavlink_nav_controller_output_t nav_out;
          mavlink_msg_nav_controller_output_decode(msg, &nav_out);
          spew("WP Dist: %d", nav_out.wp_dist);  //NOT WORKING PROPERLY IN COPTER

          float distance = 0;
          Matrix destination = Matrix(3, 1, 0.0);
          Matrix current_pos = Matrix(3, 1, 0.0);
          current_pos(0) = m_estate.x;
          current_pos(1) = m_estate.y;
          current_pos(2) = m_estate.z;

          float alt = (m_dpath.end_z_units == IMC::Z_ALTITUDE) ? m_estate.alt : m_estate.height;

          WGS84::displacement(m_estate.lat, m_estate.lon, alt,
                              m_dpath.end_lat, m_dpath.end_lon, m_dpath.end_z,
                              &destination(0), &destination(1), &destination(2));

          distance = (destination - current_pos).norm_2();
          nav_out.wp_dist = (uint16_t)distance;

          float since_last_wp = Clock::get() - m_last_wp;
          int threshold;

          if(m_vtol_state == MAV_VTOL_STATE_FW)
            threshold = m_args.threshold_fw;
          else
            threshold = m_args.threshold_mc;

          if(nav_out.wp_dist < threshold)
          {
            if(m_dpath.lradius > 0)
              return;

            trace("FL_NEAR!");
            m_pcs.flags |= PathControlState::FL_NEAR;
            m_mission = false;
          }

          if (m_last_wp && since_last_wp > 1.5)
            receive(&m_dpath);

          if (m_groundspeed.value)
            m_pcs.eta = nav_out.wp_dist / m_groundspeed.value;

          if (std::strcmp(m_mode.mode.c_str(), "LOITER") && m_mode.autonomy == 2)
            dispatch(m_pcs);
        }
      };
    }
  }
}

DUNE_TASK
