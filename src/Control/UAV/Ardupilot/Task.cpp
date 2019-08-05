//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Joel Cardoso                                                     *
// Author: Eduardo Marques                                                  *
// Author: Ricardo Martins                                                  *
// Author: Joao Fortuna                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cmath>
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

// Not yet included in MAVLINK :(
#define MAVLINK_MSG_ID_SET_ATTITUDE_R (1<<1)
#define MAVLINK_MSG_ID_SET_ATTITUDE_P (1<<2)
#define MAVLINK_MSG_ID_SET_ATTITUDE_Y (1<<3)
#define MAVLINK_MSG_ID_SET_ATTITUDE_THR (1<<7)
#define MAVLINK_MSG_ID_SET_ATTITUDE_ATT (1<<8)

namespace Control
{
  namespace UAV
  {
    namespace Ardupilot
    {
      using DUNE_NAMESPACES;

      //! APM Type specifier.
      enum APM_Vehicle
      {
        //! Unset or unknown vehicle type
        VEHICLE_UNKNOWN,
        //! Fixed wing types
        VEHICLE_FIXEDWING,
        //! Copter types (quad, hexa, etc)
        VEHICLE_COPTER
      };

      //! List of Arducopter Modes.
      enum APM_copterModes
      {
        CP_MODE_STABILIZE = 0,                     // hold level position
        CP_MODE_ACRO = 1,                          // rate control
        CP_MODE_ALT_HOLD = 2,                      // AUTO control
        CP_MODE_AUTO = 3,                          // AUTO control
        CP_MODE_GUIDED = 4,                        // AUTO control
        CP_MODE_LOITER = 5,                        // Hold a single location
        CP_MODE_RTL = 6,                           // AUTO control
        CP_MODE_CIRCLE = 7,                        // AUTO control
        CP_MODE_POSITION = 8,                      // AUTO control
        CP_MODE_LAND = 9,                          // AUTO control
        CP_MODE_OF_LOITER = 10,                    // Hold a single location using optical flow sensor
        CP_MODE_DRIFT = 11,                        // DRIFT mode (Note: 12 is no longer used)
        CP_MODE_DUNE = 12,
        CP_MODE_SPORT = 13                         // earth frame rate control
      };

      //! List of ArduPlane modes.
      //! From ArduPlane/defines.h in diydrones git repo.
      enum APM_planeModes
      {
        PL_MODE_MANUAL       = 0,
        PL_MODE_CIRCLE       = 1,
        PL_MODE_STABILIZE    = 2,
        PL_MODE_TRAINING     = 3,
        PL_MODE_ACRO         = 4,
        PL_MODE_FBWA         = 5,
        PL_MODE_FBWB         = 6,
        PL_MODE_CRUISE       = 7,
        PL_MODE_AUTOTUNE     = 8,
        PL_MODE_AUTO         = 10,
        PL_MODE_RTL          = 11,
        PL_MODE_LOITER       = 12,
        PL_MODE_GUIDED       = 15,
        PL_MODE_INITIALISING = 16
      };

      //! Radio Channel structure.
      struct RadioChannel
      {
        //! PWM range
        int pwm_min;
        int pwm_max;
        //! Value range
        float val_max;
        float val_min;
        //! Channel reverse
        bool reverse;
      };

      enum CLTrig
      {
        T_TIMEOUT = 0,
        T_ACTIVATE_PITCH = 1,   // Activate Pitch
        T_DEACTIVATE_PITCH = 2, // Deactivate Pitch
        T_ACTIVATE_ROLL = 3,   // Activate Roll
        T_DEACTIVATE_ROLL = 4  // Deactivate Roll
      };

      std::string CLTrigString[5] = {"T_TIMEOUT", "T_ACTIVATE_PITCH", "T_DEACTIVATE_PITCH", "T_ACTIVATE_ROLL", "T_DEACTIVATE_ROLL"};

      enum CLState
      {
        ST_INIT = 0,
        ST_FBWB = 1,
        ST_GUIDED = 2
      };

      std::string CLStateString[3] = {"INIT", "FBWB", "GUIDED"};
      
      //! CL state machine
      struct StateMachine_CL
      {
        StateMachine_CL(CLState initState = ST_INIT): time_of_FBWB_request(0.0), currState(initState) {};

        double time_of_FBWB_request;
        CLState currState;
      };

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
        //! IPv4 Address
        Address ip;
        //! Telemetry Rate
        uint8_t trate;
        //! Default Altitude
        float alt;
        //! LoiterHere (default) radius
        float lradius;
        //! Loitering tolerance
        int ltolerance;
        //! Has Power Module
        bool pwrm;
        //! WP seconds before reach
        int secs;
        //! WP Copter: Minimum wp switch radius
        float cp_wp_radius;
        //! RC setup
        RadioChannel rc1;
        RadioChannel rc2;
        RadioChannel rc3;
        //! HITL
        bool hitl;
        //! Formation Flight
        bool form_fl;
        std::string form_fl_ent;
        //! Convert MSL to WGS84 height
        bool convert_msl;
        //! Enter loiter mode when in idle
        bool loiter_idle;
        //! Dispatch ExternalNavData rather than EstimatedState
        bool use_external_nav;
        //! Temperature of ESC failure (degrees)
        float esc_temp;
        // How many milliseconds should we wait for other ControlLoops before going into FBWB?
        double CLtimeout;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Task arguments.
        Arguments m_args;
        //! Type definition for Arduino packet handler.
        typedef void (Task::* PktHandler)(const mavlink_message_t* msg);
        typedef std::map<int, PktHandler> PktHandlerMap;
        //! Arduino packet handling
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
        //! Path Control State
        IMC::PathControlState m_pcs;
        //! DesiredPath message
        IMC::DesiredPath m_dpath;
        //! DesiredPath message
        IMC::ControlLoops m_controllps;
        //! TCP socket
        Network::TCPSocket* m_TCP_sock;
        //! System ID
        uint8_t m_sysid;
        //! Last received position
        double m_lat, m_lon;
        //! Height received from the Ardupilot (Geoid/MSL).
        float m_hae_msl;
        //! Height offset to convert to WGS-84 ellipsoid.
        float m_hae_offset;
        //! Flag indicating task is booting.
        bool m_reboot;
        //! Flag indicating MSL-WGS84 offset has already been calculated.
        bool m_offset_st;
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
        bool m_error_missing, m_esta_ext;
        //! Setup rate hack
        bool m_has_setup_rate;
        //! Vehicle is on ground
        bool m_ground;
        //! Desired control
        float m_droll, m_dclimb, m_dspeed, m_dthrottle,m_dpitch;
        //! Type of system to be controlled
        APM_Vehicle m_vehicle_type;
        //! Check if is in service
        bool m_service;
        //! Time since last waypoint was sent
        float m_last_wp;
        //! Mission items queue
        std::queue<mavlink_message_t> m_mission_items;
        //! Desired gimbal angles
        float m_gb_pan, m_gb_tilt, m_gb_retract;
        //! State of the ControlLoops state mechanism
        StateMachine_CL m_stateMachineCL;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_TCP_sock(NULL),
          m_sysid(1),
          m_lat(0.0),
          m_lon(0.0),
          m_hae_msl(0.0),
          m_hae_offset(0.0),
          m_reboot(true),
          m_offset_st(false),
          m_external(true),
          m_current_wp(0),
          m_critical(false),
          m_cloops(0),
          m_desired_radius(0),
          m_gnd_speed(0),
          m_mode(0),
          m_changing_wp(false),
          m_error_missing(false),
          m_esta_ext(false),
          m_has_setup_rate(false),
          m_ground(true),
          m_droll(0),
          m_dclimb(0),
          m_dspeed(20),
          m_dthrottle(60),
          m_dpitch(0.0),
          m_vehicle_type(VEHICLE_UNKNOWN),
          m_service(false),
          m_last_wp(0)
        {
          param("Communications Timeout", m_args.comm_timeout)
          .minimumValue("1")
          .maximumValue("60")
          .defaultValue("10")
          .units(Units::Second)
          .description("Ardupilot communications timeout");

          param("Ardupilot Tracker", m_args.ardu_tracker)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .defaultValue("false")
          .description("Use Ardupilot's waypoint tracker");

          param("TCP - Port", m_args.TCP_port)
          .defaultValue("5760")
          .description("Port for connection to Ardupilot");

          param("TCP - Address", m_args.TCP_addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to Ardupilot");

          param("IPv4 - Address", m_args.ip)
          .defaultValue("0.0.0.0")
          .description("Address for neptus connection to Ardupilot");

          param("Telemetry Rate", m_args.trate)
          .defaultValue("10")
          .units(Units::Hertz)
          .description("Telemetry output rate from Ardupilot");

          param("Default altitude", m_args.alt)
          .defaultValue("200.0")
          .units(Units::Meter)
          .description("Altitude to be used if desired Z has no units");

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

          param("Copter - Minimum WP switch radius", m_args.cp_wp_radius)
          .defaultValue("0.5")
          .units(Units::Meter)
          .description("Used for waypointswitching at copters. Copters uses the seconds before reaching wp, but will also switch if this distance is met.");

          param("RC 1 PWM MIN", m_args.rc1.pwm_min)
          .defaultValue("1000")
          .units(Units::Microsecond)
          .description("Min PWM value for Roll channel");

          param("RC 1 PWM MAX", m_args.rc1.pwm_max)
          .defaultValue("2000")
          .units(Units::Microsecond)
          .description("Max PWM value for Roll channel");

          param("RC 1 MAX", m_args.rc1.val_max)
          .defaultValue("30.0")
          .units(Units::Degree)
          .description("Max Roll");

          param("RC 1 REV", m_args.rc1.reverse)
          .defaultValue("False")
          .description("Reverse Roll Channel");

          param("RC 2 PWM MIN", m_args.rc2.pwm_min)
          .defaultValue("1000")
          .units(Units::Microsecond)
          .description("Min PWM value for Climb Rate channel");

          param("RC 2 PWM MAX", m_args.rc2.pwm_max)
          .defaultValue("2000")
          .units(Units::Microsecond)
          .description("Max PWM value for Climb Rate channel");

          param("RC 2 MAX", m_args.rc2.val_max)
          .defaultValue("2.0")
          .units(Units::MeterPerSecond)
          .description("Max Climb Rate");

          param("RC 2 REV", m_args.rc2.reverse)
          .defaultValue("False")
          .description("Reverse Pitch Channel");

          param("RC 3 PWM MIN", m_args.rc3.pwm_min)
          .defaultValue("1000")
          .units(Units::Microsecond)
          .description("Min PWM value for Air Speed channel");

          param("RC 3 PWM MAX", m_args.rc3.pwm_max)
          .defaultValue("2000")
          .units(Units::Microsecond)
          .description("Max PWM value for Air Speed channel");

          param("RC 3 MIN", m_args.rc3.val_min)
          .defaultValue("10.0")
          .units(Units::MeterPerSecond)
          .description("Min Air Speed");

          param("RC 3 MAX", m_args.rc3.val_max)
          .defaultValue("30.0")
          .units(Units::MeterPerSecond)
          .description("Max Air Speed");

          param("RC 3 REV", m_args.rc3.reverse)
          .defaultValue("False")
          .description("Reverse Speed Channel");

          param("HITL", m_args.hitl)
          .defaultValue("false")
          .description("Hardware in the loop");

          param("Formation Flight", m_args.form_fl)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .defaultValue("false")
          .description("Receive control references from Formation Flight controller");

          param("Formation Flight Entity", m_args.form_fl_ent)
          .defaultValue("Formation Control")
          .description("Entity that sends Formation Flight control references");

          param("Convert MSL to WGS84 height", m_args.convert_msl)
          .defaultValue("false")
          .description("Convert altitude extracted from the Ardupilot to WGS84 height");

          param("Loiter in Idle", m_args.loiter_idle)
          .defaultValue("true")
          .description("Loiter when in idle.");

          param("Use External Nav Data", m_args.use_external_nav)
          .defaultValue("false")
          .description("Dispatch ExternalNavData instead of EstimatedState");

          param("Temperature of ESC failure (degrees)", m_args.esc_temp)
          .defaultValue("70.0")
          .description("Temperature of ESC failure (degrees).");

          param("Control Loops timeout", m_args.CLtimeout)
          .defaultValue("50.0")
          .units(Units::Millisecond)
          .description("How many milliseconds should we wait for other ControlLoops before going into FBWB?");
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
          m_mlh[MAVLINK_MSG_ID_SYSTEM_TIME] = &Task::handleSystemTimePacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_REQUEST] = &Task::handleMissionRequestPacket;
          m_mlh[MAVLINK_MSG_ID_RAW_IMU] = &Task::handleImuRaw;

          // Setup processing of IMC messages
          bind<DesiredPath>(this);
          bind<DesiredRoll>(this);
          bind<DesiredPitch>(this);
          bind<DesiredThrottle>(this);
          bind<DesiredZ>(this);
          bind<DesiredVerticalRate>(this);
          bind<DesiredSpeed>(this);
          bind<DesiredControl>(this);
          bind<IdleManeuver>(this);
          bind<ControlLoops>(this);
          bind<VehicleMedium>(this);
          bind<VehicleState>(this);
          bind<SimulatedState>(this);
          bind<DevCalibrationControl>(this);
          bind<AutopilotMode>(this);

          //! Misc. initialization
          m_last_pkt_time = 0; //! time of last packet from Ardupilot
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
          openConnection();

          std::stringstream os;
          os << "mavlink+tcp://" << m_args.ip << ":" << m_args.TCP_port << "/";

          IMC::AnnounceService announce;
          announce.service = os.str();
          announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;
          dispatch(announce);
        }

        void
        onUpdateParameters(void)
        {
          //! Minimum value for bank (RC1) and vertical rate (R2)
          //! are simetrical to maximum values, no need to input them manually
          m_args.rc1.val_min = -m_args.rc1.val_max;
          m_args.rc2.val_min = -m_args.rc2.val_max;
        }

        void
        openConnection(void)
        {
          try
          {
            m_TCP_sock = new TCPSocket;
            m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
            m_TCP_sock->setNoDelay(true);
            setupRate(m_args.trate);
            inf(DTR("Ardupilot interface initialized"));
          }
          catch (...)
          {
            Memory::clear(m_TCP_sock);
            war(DTR("Connection failed, retrying..."));
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          }
        }

        void
        setupRate(uint8_t rate)
        {
          uint8_t buf[512];
          mavlink_message_t msg;

          //! ATTITUDE and SIMSTATE messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA1,
                                               rate,
                                               1);

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("ATTITUDE Stream setup to %d Hertz", rate);

          //! VFR_HUD message
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA2,
                                               rate,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("VFR Stream setup to %d Hertz", rate);

          //! GLOBAL_POSITION_INT message
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_POSITION,
                                               rate,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("POSITION Stream setup to %d Hertz", rate);

          //! SYS_STATUS, POWER_STATUS, MEMINFO, MISSION_CURRENT,
          //! GPS_RAW_INT, NAV_CONTROLLER_OUTPUT and FENCE_STATUS messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTENDED_STATUS,
                                               (int)(rate/5),
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("STATUS Stream setup to %d Hertz", (int)(rate/5));

          //! AHRS, HWSTATUS, WIND, RANGEFINDER and SYSTEM_TIME messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_EXTRA3,
                                               1,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("AHRS-HWSTATUS-WIND Stream setup to 1 Hertz");

          //! RAW_IMU, SCALED_PRESSURE and SENSOR_OFFSETS messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_RAW_SENSORS,
                                               rate,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("SENSORS Stream setup to 1 Hertz");

          //! RC_CHANNELS_RAW and SERVO_OUTPUT_RAW messages
          mavlink_msg_request_data_stream_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               MAV_DATA_STREAM_RC_CHANNELS,
                                               1,
                                               0);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
          spew("RC Stream disabled");
        }

        //! Prints to terminal and log when control loops are activated and deactivated
        void
        info(uint32_t was, uint32_t is, uint32_t loop, const char* desc)
        {
          was &= loop;
          is &= loop;

          if (was && !is)
            inf("%s - deactivating", desc);
          else if (!was && is)
            inf("%s - activating", desc);
        }

        void
        consume(const IMC::ControlLoops* cloops)
        {
          if (m_external && cloops->enable)
          {
            m_controllps = *cloops;
            inf(DTR("ArduPilot is in Manual mode, saving control loops."));
            //! Control loops will be enabled when AUTO mode is activated
            return;
          }

          uint32_t prev = m_cloops;

          if (cloops->enable)
          {
            trace("CLoops enabled, %#010x, m_cloops is %#010x",cloops->mask, m_cloops);

            if (!m_args.ardu_tracker)
            {
              inf("Ardupilot tracker is NOT enabled");
              m_cloops |= cloops->mask;
              if(cloops->mask & IMC::CL_PITCH)
                StateMachineCLTrigger(T_ACTIVATE_PITCH);
              if (cloops->mask & IMC::CL_ROLL)
                StateMachineCLTrigger(T_ACTIVATE_ROLL);
            }
            else
            {
              m_cloops |= cloops->mask;
            }
          }
          else
          {
            m_cloops &= ~cloops->mask;
            trace("CLoops disabled, %#010x, m_cloops is %#010x",cloops->mask, m_cloops);

            if(!m_ground && m_vehicle_type == VEHICLE_FIXEDWING)
            {
              if(cloops->mask & IMC::CL_PITCH)
                StateMachineCLTrigger(T_DEACTIVATE_PITCH);
              if(cloops->mask & IMC::CL_ROLL)
                StateMachineCLTrigger(T_DEACTIVATE_ROLL);
            }
          }

          info(prev, m_cloops, IMC::CL_SPEED, "speed control");
          info(prev, m_cloops, IMC::CL_THROTTLE, "throttle control");
          info(prev, m_cloops, IMC::CL_ALTITUDE, "altitude control");
          info(prev, m_cloops, IMC::CL_VERTICAL_RATE, "vertical rate control");
          info(prev, m_cloops, IMC::CL_ROLL, "bank control");
          info(prev, m_cloops, IMC::CL_YAW, "heading control");
          info(prev, m_cloops, IMC::CL_PATH, "path control");
          info(prev, m_cloops, IMC::CL_PITCH, "pitch control");
        }

        void
        StateMachineCLTrigger(CLTrig trigger)
        {
          CLState was = m_stateMachineCL.currState;
          m_stateMachineCL.time_of_FBWB_request = 0.0;

          switch (trigger) {
            case T_TIMEOUT:
              activateFBWB();
              m_stateMachineCL.currState = ST_FBWB;
              break;
            case T_ACTIVATE_PITCH:
              switch (m_stateMachineCL.currState) {
                case ST_INIT:
                    activateGuided();
                    m_stateMachineCL.currState = ST_GUIDED;
                  break;
                case ST_FBWB:
                    deactivateFBWB();
                    activateGuided();
                    m_stateMachineCL.currState = ST_GUIDED;
                  break;
                case ST_GUIDED:
                    debug("Got activate CL PITCH while in GUIDED");
                  break;
                default:
                  m_stateMachineCL.currState = ST_INIT;
              }
              break;
            case T_ACTIVATE_ROLL:
              switch (m_stateMachineCL.currState) {
                case ST_INIT:
                    m_stateMachineCL.time_of_FBWB_request = Clock::getMsec();
                    // wait for timeout to (potentially) change state
                  break;
                case ST_FBWB:
                    debug("Got activate CL ROLL while in FBWB");
                  break;
                case ST_GUIDED:
                    debug("Got activate CL ROLL while in GUIDED");
                  break;
                default:
                  m_stateMachineCL.currState = ST_INIT;
              }
              break;
            case T_DEACTIVATE_PITCH: // deactivation of Pitch
              switch (m_stateMachineCL.currState) {
                case ST_INIT:
                    debug("Got deactivate CL PITCH while in INIT");
                  break;
                case ST_FBWB:
                    debug("Got deactivate CL PITCH while in FBWB");
                  break;
                case ST_GUIDED:
                    m_stateMachineCL.time_of_FBWB_request = Clock::getMsec();
                    // wait for timeout to (potentially) change state
                  break;
                default:
                  m_stateMachineCL.currState = ST_INIT;
              }
            case T_DEACTIVATE_ROLL: // deactivation of Roll
              switch (m_stateMachineCL.currState) {
                case ST_INIT:
                    debug("Got deactivate CL ROLL while in INIT");
                  break;
                case ST_FBWB:
                    deactivateFBWB();
                    m_stateMachineCL.currState = ST_INIT;
                  break;
                case ST_GUIDED:
                    m_stateMachineCL.currState = ST_INIT;
                    //TODO: Pitch should also be inactive
                  break;
                default:
                  m_stateMachineCL.currState = ST_INIT;
              }
              break;
            default:
              m_stateMachineCL.currState = ST_INIT;
              
          }
          inf("ControlLoops FSM: Switched from %s to %s, due to %s", CLStateString[was].c_str(), CLStateString[m_stateMachineCL.currState].c_str(), CLTrigString[trigger].c_str());
        }

        //! Messages for FBWB control (using DUNE's controllers)
        void
        activateFBWB(void)
        {
          if (m_vehicle_type == VEHICLE_FIXEDWING)
          {
            uint8_t buf[512];
            mavlink_message_t msg;

            mavlink_msg_set_mode_pack(255, 0, &msg,
                                      m_sysid,
                                      1,
                                      PL_MODE_FBWB);

            uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
            trace("Activating FBWB");
          }
          else
          {
            debug("Tried to set FBWB on a non-supported vehicle!");
          }
        }
        
        //! Messages for FBWB control (using DUNE's controllers)
        void
        deactivateFBWB(void)
        {
          if (m_vehicle_type == VEHICLE_FIXEDWING)
          {
            inf("Deactivating RC override (FBWB)");
            mavlink_message_t msg;
            uint8_t buf[512];

            //! Sending value 0 disables RC override for that channel
            mavlink_msg_rc_channels_override_pack(255, 0, &msg,
                                                  1,
                                                  1,
                                                  0, //! RC Channel 1 (roll)
                                                  0, //! RC Channel 2 (vertical rate/pitch)
                                                  0, //! RC Channel 3 (speed)
                                                  0, //! RC Channel 4 (rudder)
                                                  0, //! RC Channel 5 (not used)
                                                  0, //! RC Channel 6 (not used)
                                                  0, //! RC Channel 7 (not used)
                                                  0);//! RC Channel 8 (mode)
            uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
          }
          else
          {
            debug("Tried to disable FBWB on a non-supported vehicle!");
          }
        }

        //! Messages for GUIDED control (using DUNE's controllers)
        void
        activateGuided(void)
        {
          if (m_vehicle_type == VEHICLE_FIXEDWING)
          {
            uint8_t buf[512];
            mavlink_message_t msg;

            mavlink_msg_set_mode_pack(255, 0, &msg,
                                      m_sysid,
                                      1,
                                      PL_MODE_GUIDED);

            uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
            trace("Activating GUIDED");
          }
          else
          {
            debug("Tried to set GUIDED on a non-supported vehicle!");
          }
        }

        void
        consume(const IMC::DesiredRoll* d_roll)
        {
          //! If in Manual mode, Taking-off, Landing or on Ground do not send
          //! control references to ArduPilot
          if (m_external || m_critical || m_ground)
          {
            debug("external: %d, critical: %d, ground: %d", (int)m_external, (int)m_critical, (int)m_ground);
            return;
          }

          if (!(m_cloops & IMC::CL_ROLL))
          {
            debug("bank control is NOT active");
            return;
          }

          //! If in formation flight only keep bank references coming from Formation Control entity
          if (m_args.form_fl && resolveEntity(m_args.form_fl_ent) != d_roll->getSourceEntity())
            return;

          m_droll = Angles::degrees(d_roll->value);

          // Pitch control loop is active -> should be in GUIDED mode
          if (m_stateMachineCL.currState == ST_GUIDED)
          {
            debug("V1: %f, V2: %f, V3: %f", d_roll->value, Angles::radians(m_dpitch), m_dthrottle);

            uint8_t buf[512];

            mavlink_message_t msg;
            // Ignore everything but thr and attitude, interpret att as roll and pitch
            uint8_t type_mask = !(MAVLINK_MSG_ID_SET_ATTITUDE_THR & MAVLINK_MSG_ID_SET_ATTITUDE_ATT & MAVLINK_MSG_ID_SET_ATTITUDE_R & MAVLINK_MSG_ID_SET_ATTITUDE_P);
            debug("type mask: %d", type_mask);
            float d_quat[4];
            mavlink_euler_to_quaternion(d_roll->value, Angles::radians(m_dpitch), 0.0, d_quat);
            debug("d_quat = [%f, %f, %f, %f]", d_quat[0], d_quat[1], d_quat[2], d_quat[3]);
            float roll, pitch, yaw;
            mavlink_quaternion_to_euler(d_quat, &roll, &pitch, &yaw);
            debug("Back-calc rpy: %f, %f, %f",roll,pitch,yaw);


            mavlink_msg_set_attitude_target_pack(255, 0, &msg,
                                                  Clock::get(),
                                                  m_sysid, //@param target_system System ID
                                                  0, //@param target_component Component ID
                                                  type_mask,
                                                  d_quat,
                                                  0, 0, 0, // rpy rate
                                                  m_dthrottle*0.01);// percent to 0..1
              //sysid = 255? component_id = 0? target_system = target_component = 1?
              uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
          }
          else if (m_stateMachineCL.currState == ST_FBWB)
          { 
            // Sending RC override when in GUIDED will result in lock of pitch to LIM_PITCH_MIN/MAX
            //! Convert references to PWM and send all
            int pwm_roll = map2PWM(m_args.rc1.pwm_min, m_args.rc1.pwm_max,
                                   m_args.rc1.val_min, m_args.rc1.val_max,
                                   m_droll, m_args.rc1.reverse);

            int pwm_climb = map2PWM(m_args.rc2.pwm_min, m_args.rc2.pwm_max,
                                    m_args.rc2.val_min, m_args.rc2.val_max,
                                    m_dclimb, m_args.rc2.reverse);

            int pwm_speed = map2PWM(m_args.rc3.pwm_min, m_args.rc3.pwm_max,
                                    m_args.rc3.val_min, m_args.rc3.val_max,
                                    m_dspeed, m_args.rc3.reverse);

            debug("V1: %f, V2: %f, V3: %f", m_droll, m_dclimb, m_dspeed);
            debug("RC1: %d, RC2: %d, RC3: %d", pwm_roll, pwm_climb, pwm_speed);

            uint8_t buf[512];

            mavlink_message_t msg;
            mavlink_msg_rc_channels_override_pack(255, 0, &msg,
                                                  1,
                                                  1,
                                                  pwm_roll, //! RC Channel 1 (roll)
                                                  pwm_climb, //! RC Channel 2 (vertical rate)
                                                  pwm_speed, //! RC Channel 3 (speed)
                                                  1500, //! RC Channel 4 (rudder)
                                                  0, //! RC Channel 5 (not used)
                                                  0, //! RC Channel 6 (not used)
                                                  0, //! RC Channel 7 (not used)
                                                  0);//! RC Channel 8 (mode - do not override)
            uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
          }
          else
          {
            inf("Received DesiredRoll, but not in FBWB or GUIDED");
          }
        }

        void
        consume(const IMC::DesiredControl* d_acc)
        {
          if (getSystemId() != d_acc->getSource())
          {
            debug("Ignoring DesiredAcc from remote system '%s' and entity '%s'",
                  resolveSystemId(d_acc->getSource()),
                  resolveEntity(d_acc->getSourceEntity()).c_str());
            return;
          }

          if (m_external)
          {
            trace("ArduPilot is in Manual mode, ignoring acceleration setpoint.");
            return;
          }

          if (!((m_cloops & IMC::CL_FORCE)))
          {
            trace("Force (acc) control is NOT active");
            return;
          }

          if (m_vehicle_type == VEHICLE_COPTER &&
              m_mode != CP_MODE_GUIDED)
          {
            // Copters must first be set to guided as of AC 3.2
            uint8_t buf[512];
            mavlink_message_t* msg = new mavlink_message_t;

            mavlink_msg_set_mode_pack(255, 0, msg,
                                      m_sysid,
                                      1,
                                      CP_MODE_GUIDED);

            uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
            sendData(buf, n);
            debug("Guided MODE on ardupilot is set");
          }

          // Pack and send to arducopter
          // only if ardu_tracker is disabled.
          if (m_vehicle_type == VEHICLE_COPTER
              && !m_args.ardu_tracker)
          {
            uint32_t mask = 0x07FF; // Start, ignore all. (1s 12 first bits)
            mask &= ~(1 << 9); // Clear bit 10.
            float x=0, y=0, z=0;

            if (d_acc->flags & DesiredControl::FL_X)
            {
              x = d_acc->x;
              mask &= ~ ( 1 << (0 + 6));
            }
            if (d_acc->flags & DesiredControl::FL_Y)
            {
              y = d_acc->y;
              mask &= ~ (1 << (1 + 6));
            }
            if (d_acc->flags & DesiredControl::FL_Z)
            {
              z = d_acc->z;
              mask &= ~ (1 << (2 + 6));
            }

            mavlink_message_t msg;
            uint8_t buf[512];

            mavlink_msg_set_position_target_local_ned_pack(255, 0, &msg,
                                                      Clock::getMsec(),
                                                      m_sysid, //@param target_system System ID
                                                      0, //@param target_component Component ID
                                                      MAV_FRAME_LOCAL_NED,
                                                      mask,
                                                      0,0,0,
                                                      0,0,0,
                                                      x,y,z,
                                                      0, 0);

            int n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);

            spew("Sent accel data to apm.");
          }
        }

        void
        consume(const IMC::DesiredZ* d_z)
        {
          if (!(m_cloops & IMC::CL_ALTITUDE))
          {
            debug("altitude control is NOT active");
            return;
          }

          (void) d_z;
        }

        void
        consume(const IMC::DesiredVerticalRate* d_vr)
        {
          if (!(m_cloops & IMC::CL_VERTICAL_RATE))
          {
            debug("vertical rate control is NOT active");
            return;
          }

          //! Saving value
          m_dclimb = d_vr->value;
        }

        void
        consume(const IMC::DesiredSpeed* d_speed)
        {
          if (!(m_cloops & IMC::CL_SPEED))
          {
            inf(DTR("speed control is NOT active"));
            return;
          }

          //! Saving value
          m_dspeed = d_speed->value;
        }

        void
        consume(const IMC::DesiredPitch* d_pitch)
        {
          if(!(m_cloops & IMC::CL_PITCH))
          {
            inf(DTR("pitch control is NOT active"));
            return;
          }

          //! Saving value
          m_dpitch = Angles::degrees(d_pitch->value);
        }

        void
        consume(const IMC::DesiredThrottle* d_throttle)
        {
          if(!(m_cloops & IMC::CL_THROTTLE))
          {
            inf(DTR("throttle control is NOT active"));
            return;
          }

          //! Saving value
          m_dthrottle = d_throttle->value;
        }

        //! Converts value in range min_value:max_value to a value_pwm in range min_pwm:max_pwm
        int
        map2PWM(int min_pwm, int max_pwm, float min_value, float max_value, float value, bool reverse)
        {
          int value_pwm;

          if (reverse)
            value_pwm = (int) max_pwm - ((max_pwm - min_pwm) * (value - min_value) / (max_value - min_value));
          else
            value_pwm = (int) ((max_pwm - min_pwm) * (value - min_value) / (max_value - min_value)) + min_pwm;

          return trimValue(value_pwm, min_pwm, max_pwm);
        }

        //! Message for GUIDED/AUTO control (using Ardupilot's controllers)
        void
        consume(const IMC::DesiredPath* path)
        {
          if (m_external)
          {
            m_dpath = *path;
            inf(DTR("ArduPilot is in Manual mode, saving desired path."));
            return;
          }

          if (!m_args.ardu_tracker)
          {
            inf(DTR("path control is NOT active"));
            return;
          }

          //! In Auto mode but still in ground, performing takeoff first
          if (m_ground)
          {
            inf(DTR("ArduPilot in Auto mode but still in ground, performing takeoff first."));
            if (m_vehicle_type == VEHICLE_COPTER)
            {
              takeoff_copter(path);
            }
            else {
              takeoff_plane(path);
            }
            return;
          }

          uint8_t buf[512];
          mavlink_message_t msg;

          if(m_vehicle_type == VEHICLE_COPTER)
          {
            // Copters must first be set to guided as of AC 3.2
            // Disabled, as this is not

            mavlink_msg_set_mode_pack(255, 0, &msg,
                                      m_sysid,
                                      1,
                                      CP_MODE_GUIDED); //! DUNE mode on arducopter is 12

            uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
            debug("Guided MODE on ardupilot is set");
          }

          if(m_vehicle_type == VEHICLE_FIXEDWING)
          {
            // Planes must first be set to guided as of AP 3.3.0
            mavlink_msg_set_mode_pack(255, 0, &msg,
                                      m_sysid,
                                      1,
                                      PL_MODE_GUIDED);

            uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
            debug("Guided MODE on ardupilot is set");
          }

          //! Setting airspeed parameter
          if (m_vehicle_type == VEHICLE_COPTER)
          {
            mavlink_msg_param_set_pack(255, 0, &msg,
                                                 m_sysid, //! target_system System ID
                                                 0, //! target_component Component ID
                                                 "WPNAV_SPEED", //! Parameter name
                                                 (int)(path->speed * 100), //! Parameter value
                                                 MAV_PARAM_TYPE_INT16); //! Parameter type
          }
          else
          {
            mavlink_msg_param_set_pack(255, 0, &msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "TRIM_ARSPD_CM", //! Parameter name
                                     (int)(path->speed * 100), //! Parameter value
                                     MAV_PARAM_TYPE_INT16); //! Parameter type
          }
          int n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          //! Setting loiter radius parameter
          if (m_vehicle_type != VEHICLE_COPTER)
          {
            mavlink_msg_param_set_pack(255, 0, &msg,
                                       m_sysid, //! target_system System ID
                                       0, //! target_component Component ID
                                       "WP_LOITER_RAD", //! Parameter name
                                       path->lradius ? (path->flags & DesiredPath::FL_CCLOCKW ? (-1 * path->lradius) : (path->lradius)) : 10, //! Parameter value
                                       MAV_PARAM_TYPE_INT16); //! Parameter type

            n = mavlink_msg_to_send_buffer(buf, &msg);
            sendData(buf, n);
          }
          m_desired_radius = (uint16_t) path->lradius;

          float alt = (path->end_z_units & IMC::Z_NONE) ? m_args.alt : (float)path->end_z;

          //! Destination

          if (m_vehicle_type == VEHICLE_COPTER)
          {
            mavlink_msg_mission_item_pack(255, 0, &msg,
                                                    m_sysid, //! target_system System ID
                                                    0, //! target_component Component ID
                                                    1, //! seq Sequence
                                                    MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                                    MAV_CMD_NAV_WAYPOINT, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                                    2, //! current false:0, true:1, guided mode:2
                                                    0, //! autocontinue to next wp
                                                    0, //! p1 - Radius of acceptance? Think not used.
                                                    0, //! Not used
                                                    0, // direction does not matter for copter.
                                                    0, //! Not used
                                                    (float)Angles::degrees(path->end_lat), //! x PARAM5 / local: x position, global: latitude
                                                    (float)Angles::degrees(path->end_lon), //! y PARAM6 / y position: global: longitude
                                                    alt - m_hae_offset);//! z PARAM7 / z position: global: altitude
          }
          else
          {
          //! Because this is a GUIDED waypoint, MISSION_COUNT and WRITE_PARTIAL_LIST messages should not be sent
          mavlink_msg_mission_item_pack(255, 0, &msg,
                                        m_sysid, //! target_system System ID
                                        0, //! target_component Component ID
                                        0, //! seq Sequence
                                        MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                        (path->lradius ? MAV_CMD_NAV_LOITER_UNLIM : MAV_CMD_NAV_WAYPOINT), //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                        2, //! current false:0, true:1, guided mode:2
                                        1, //! autocontinue to next wp
                                        0, //! Not used
                                        0, //! Not used
                                        path->flags & DesiredPath::FL_CCLOCKW ? -1 : 0, //! If <0, then CCW loiter
                                        0, //! Not used
                                        (float)Angles::degrees(path->end_lat), //! x PARAM5 / local: x position, global: latitude
                                        (float)Angles::degrees(path->end_lon), //! y PARAM6 / y position: global: longitude
                                        alt - m_hae_offset);//! z PARAM7 / z position: global: altitude

          }
          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          m_changing_wp = true;

          m_pcs.start_lat = m_lat;
          m_pcs.start_lon = m_lon;
          m_pcs.start_z = getHeight();
          m_pcs.start_z_units = IMC::Z_HEIGHT;

          m_pcs.end_lat = path->end_lat;
          m_pcs.end_lon = path->end_lon;
          m_pcs.end_z = alt;
          m_pcs.end_z_units = IMC::Z_HEIGHT;
          m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
          m_pcs.flags &= path->flags;
          m_pcs.lradius = path->lradius;
          m_pcs.path_ref = path->path_ref;

          dispatch(m_pcs);
          m_dpath = *path;
          m_last_wp = Clock::get();

          debug("Waypoint packet sent to Ardupilot");
        }

        void
        takeoff_copter(const IMC::DesiredPath* dpath)
        {
          /* As of AC 3.1, we can now send takeoff as a guided command. */
          // We need to be in guided for this to work.

          // Altitude in WGS84
          float alt = (dpath->end_z_units & IMC::Z_NONE) ? m_args.alt : (float) dpath->end_z;

          // Convert altitude to geoid height (MSL).
          sendCommandPacket(MAV_CMD_NAV_TAKEOFF, 0, 0, 0, 0, 0, 0, alt - m_hae_offset);

          m_pcs.start_lat = m_lat;
          m_pcs.start_lon = m_lon;
          m_pcs.start_z = getHeight();
          m_pcs.start_z_units = IMC::Z_HEIGHT;

          m_pcs.end_lat = dpath->end_lat;
          m_pcs.end_lon = dpath->end_lon;

          m_pcs.end_z = alt;
          m_pcs.end_z_units = IMC::Z_HEIGHT;
          m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
          m_pcs.flags &= dpath->flags;
          m_pcs.lradius = dpath->lradius;
          m_pcs.path_ref = dpath->path_ref;

          dispatch(m_pcs);

          debug("Takeoff command sent to Ardupilot");
        }

        void
        takeoff_plane(const IMC::DesiredPath* dpath)
        {
          uint8_t buf[512];
          int seq = 1;

          mavlink_message_t msg;

          mavlink_msg_param_set_pack(255, 0, &msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "WP_LOITER_RAD", //! Parameter name
                                     dpath->flags & DesiredPath::FL_CCLOCKW ? (-1 * dpath->lradius) : (dpath->lradius), //! Parameter value
                                     MAV_PARAM_TYPE_INT16); //! Parameter type

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          mavlink_msg_param_set_pack(255, 0, &msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "TRIM_ARSPD_CM", //! Parameter name
                                     (int)(dpath->speed * 100), //! Parameter value
                                     MAV_PARAM_TYPE_INT16); //! Parameter type

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          mavlink_msg_mission_count_pack(255, 0, &msg,
                                         m_sysid, //! target_system System ID
                                         0, //! target_component Component ID
                                         4); //! size of Mission

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          mavlink_msg_mission_write_partial_list_pack(255, 0, &msg,
                                                      m_sysid, //! target_system System ID
                                                      0, //! target_component Component ID
                                                      seq, //! start_index Start index, 0 by default and smaller / equal to the largest index of the current onboard list
                                                      seq+2); //! end_index End index, equal or greater than start index

          m_mission_items.push(msg);

          sendMissionItem(false);

          //! Current position
          mavlink_msg_mission_item_pack(255, 0, &msg,
                                        m_sysid, //! target_system System ID
                                        0, //! target_component Component ID
                                        seq++, //! seq Sequence
                                        MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                        MAV_CMD_NAV_TAKEOFF, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                        1, //! current false:0, true:1
                                        1, //! autocontinue autocontinue to next wp
                                        5, //! Pitch
                                        0, //! Altitude
                                        0, //! Not used
                                        0, //! Not used
                                        0, //! x PARAM5 / local: x position, global: latitude
                                        0, //! y PARAM6 / y position: global: longitude
                                        m_hae_msl + 10);//! z PARAM7 / z position: global: altitude

          m_mission_items.push(msg);

//          //! Desired speed
//          mavlink_msg_mission_item_pack(255, 0, &msg,
//                                        m_sysid, //! target_system System ID
//                                        0, //! target_component Component ID
//                                        seq++, //! seq Sequence
//                                        MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
//                                        MAV_CMD_DO_CHANGE_SPEED, //! command The scheduled action for the MISSION. see MAV_CMD in common.xml MAVLink specs
//                                        0, //! current false:0, true:1
//                                        1, //! autocontinue autocontinue to next wp
//                                        0, //! Speed type (0=Airspeed, 1=Ground Speed)
//                                        (float)(dpath->speed_units == IMC::SUNITS_METERS_PS ? dpath->speed : -1), //! Speed  (m/s, -1 indicates no change)
//                                        (float)(dpath->speed_units == IMC::SUNITS_PERCENTAGE ? dpath->speed : -1), //! Throttle  ( Percent, -1 indicates no change)
//                                        0, //! Not used
//                                        0, //! Not used
//                                        0, //! Not used
//                                        0);//! Not used
//
//          m_mission_items.push(msg);

          //! Destination
          mavlink_msg_mission_item_pack(255, 0, &msg,
                                        m_sysid, //! target_system System ID
                                        0, //! target_component Component ID
                                        seq++, //! seq Sequence
                                        MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
                                        (dpath->lradius ? MAV_CMD_NAV_LOITER_UNLIM : MAV_CMD_NAV_WAYPOINT), //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
                                        0, //! current false:0, true:1
                                        0, //! autocontinue autocontinue to next wp
                                        0, //! Not used
                                        0, //! Not used
                                        0, //! Not used
                                        0, //! Not used
                                        (float)Angles::degrees(dpath->end_lat), //! x PARAM5 / local: x position, global: latitude
                                        (float)Angles::degrees(dpath->end_lon), //! y PARAM6 / y position: global: longitude
                                        (float)(dpath->end_z) - m_hae_offset);//! z PARAM7 / z position: global: altitude

          m_mission_items.push(msg);

          mavlink_msg_mission_set_current_pack(255, 0, &msg,
                                               m_sysid,
                                               0,
                                               1);

          n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          m_pcs.start_lat = m_lat;
          m_pcs.start_lon = m_lon;
          m_pcs.start_z = getHeight();
          m_pcs.start_z_units = IMC::Z_HEIGHT;

          m_pcs.end_lat = dpath->end_lat;
          m_pcs.end_lon = dpath->end_lon;

          float alt = (dpath->end_z_units & IMC::Z_NONE) ? m_args.alt : (float)dpath->end_z;

          m_pcs.end_z = alt;
          m_pcs.end_z_units = IMC::Z_HEIGHT;
          m_pcs.flags = PathControlState::FL_3DTRACK | PathControlState::FL_CCLOCKW;
          m_pcs.flags &= dpath->flags;
          m_pcs.lradius = dpath->lradius;
          m_pcs.path_ref = dpath->path_ref;

          dispatch(m_pcs);

          debug("Waypoint packet sent to Ardupilot");
        }

        void
        loiterHere(void)
        {

          if ((getEntityState() != IMC::EntityState::ESTA_NORMAL) || m_external || m_ground)
            return;

          mavlink_message_t msg;
          uint8_t buf[512];

          mavlink_msg_param_set_pack(255, 0, &msg,
                                     m_sysid, //! target_system System ID
                                     0, //! target_component Component ID
                                     "WP_LOITER_RAD", //! Parameter name
                                     m_args.lradius, //! Parameter value
                                     MAV_PARAM_TYPE_INT16); //! Parameter type

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);

          sendCommandPacket(MAV_CMD_NAV_LOITER_UNLIM);

          debug("Sent LOITER packet to Ardupilot");

          m_pcs.start_lat = m_fix.lat;
          m_pcs.start_lon = m_fix.lon;
          m_pcs.start_z = m_fix.height;

          m_pcs.end_lat = m_fix.lat;
          m_pcs.end_lon = m_fix.lon;
          m_pcs.end_z = m_fix.height;

          if( m_vehicle_type == VEHICLE_COPTER )
          {
            // Calculate the prev. absolute position
            double lat = m_estate.lat;
            double lon = m_estate.lon;
            WGS84::displace(m_estate.x, m_estate.y, &lat, &lon);
            m_pcs.end_lat = lat;
            m_pcs.end_lon = lon;
          }

          m_pcs.flags = PathControlState::FL_LOITERING | PathControlState::FL_NEAR | (m_args.lradius < 0 ? PathControlState::FL_CCLOCKW : 0);
          m_pcs.lradius = m_args.lradius * (m_args.lradius < 0 ? -1 : 1);

          dispatch(m_pcs);
        }

        void
        consume(const IMC::IdleManeuver* idle)
        {
          (void)idle;
          m_dpath.clear();

          if(m_args.loiter_idle)
            loiterHere();
        }

        void
        consume(const IMC::VehicleMedium* vm)
        {
          m_ground = (vm->medium == IMC::VehicleMedium::VM_GROUND);

          if (!m_ground)
            m_offset_st = false;
        }

        void
        consume(const IMC::VehicleState* msg)
        {
          m_service = (msg->op_mode == IMC::VehicleState::VS_SERVICE);
        }

        //! Used for HITL simulations
        void
        consume(const IMC::SimulatedState* sim_state)
        {
          if (!m_ctx.profiles.isSelected("HITL"))
            return;

          mavlink_message_t msg;
          uint8_t buf[512];

          double lat_ref = sim_state->lat;
          double lon_ref = sim_state->lon;
          float hei_ref = sim_state->height;

          int lat, lon, alt;

          WGS84::displace(sim_state->x, sim_state->y, sim_state->z,
              &lat_ref, &lon_ref, &hei_ref);

          lat = (int) (Angles::degrees(lat_ref) * 1E7);
          lon = (int) (Angles::degrees(lon_ref) * 1E7);
          alt = (int) (hei_ref * 1000);

          float vx, vy, vz;

          Coordinates::BodyFixedFrame::toInertialFrame(sim_state->phi, sim_state->theta, sim_state->psi,
              sim_state->u, sim_state->v, sim_state->w,
              &vx, &vy, &vz);

          mavlink_msg_hil_state_pack(255, 0, &msg,
                                     (unsigned long int) (Clock::getSinceEpochNsec() / 1000), //! Timestamp (microseconds since UNIX epoch or microseconds since system boot)
                                     sim_state->phi, //! Roll angle (rad)
                                     sim_state->theta, //! Pitch angle (rad)
                                     sim_state->psi, //! Yaw angle (rad)
                                     sim_state->p, //! Roll angular speed (rad/s)
                                     sim_state->q, //! Pitch angular speed (rad/s)
                                     sim_state->r, //! Yaw angular speed (rad/s)
                                     lat, //! Latitude, expressed as * 1E7
                                     lon, //! Longitude, expressed as * 1E7
                                     alt, //! Altitude in meters, expressed as * 1000 (millimeters)
                                     (short int) (vx * 100), //! Ground X Speed (Latitude), expressed as m/s * 100
                                     (short int) (vy * 100), //! Ground Y Speed (Longitude), expressed as m/s * 100
                                     (short int) (vz * 100), //! Ground Z Speed (Altitude), expressed as m/s * 100
                                     0, //! X acceleration (mg)
                                     0, //! Y acceleration (mg)
                                     0); //! Z acceleration (mg)

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
        }

        void
        consume(const IMC::DevCalibrationControl* msg)
        {
          // Set ground pressure (used for Planes)
          if (msg->op == IMC::DevCalibrationControl::DCAL_START)
            sendCommandPacket(MAV_CMD_PREFLIGHT_CALIBRATION, 0, 0, 1);

          (void)msg;
        }

        void
        consume(const IMC::AutopilotMode* msg)
        {
          // Arm/Disarm (used for Planes)
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
        sendMissionItem(bool next)
        {
          if (next && !m_mission_items.empty())
            m_mission_items.pop();

          if (m_mission_items.empty())
          {
            debug("Mission Item queue is empty.");
            return;
          }

          uint8_t buf[512];

          uint16_t n = mavlink_msg_to_send_buffer(buf, &m_mission_items.front());
          sendData(buf, n);
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            // Handle data
            if (m_TCP_sock)
            {
              handleArdupilotData();
            }
            else
            {
              Time::Delay::wait(0.5);
              openConnection();
            }

            if (!m_error_missing)
            {
              if (m_external)
              {
                if (!m_esta_ext)
                {
                  setEntityState(IMC::EntityState::ESTA_NORMAL, "External Control");
                  m_esta_ext = true;
                }
              }
              else// if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
              {
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
                m_esta_ext = false;
              }
            }
            
            // signal the state machine if the timer has timed out
            if(m_stateMachineCL.time_of_FBWB_request && Clock::getMsec() > m_stateMachineCL.time_of_FBWB_request + m_args.CLtimeout)
              StateMachineCLTrigger(T_TIMEOUT);


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
          if (m_TCP_sock)
          {
            trace("Sending something");
            return m_TCP_sock->write((char*)bfr, size);
          }
          return 0;
        }

        int
        receiveData(uint8_t* buf, size_t blen)
        {
          if (m_TCP_sock)
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
              m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
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

            now = Clock::get();

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
                  case MAVLINK_MSG_ID_SYSTEM_TIME:
                    trace("SYSTEM_TIME");
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
                  case MAVLINK_MSG_ID_MISSION_REQUEST:
                    trace("MISSION_REQUEST");
                    break;
                  case MAVLINK_MSG_ID_MISSION_CURRENT:
                    trace("MISSION_CURRENT");
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
                  case 116:
                    spew("SCALED_IMU_2");
                    break;
                  case 136:
                    spew("TERRAIN_REPORT");
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
                  case 178:
                    spew("AHRS2");
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

          if (now - m_last_pkt_time >= m_args.comm_timeout)
          {
            if (!m_error_missing)
            {
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
              m_error_missing = true;
              m_has_setup_rate = false;
              m_esta_ext = false;
            }
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

          if (m_args.use_external_nav)
          {
            IMC::ExternalNavData extdata;
            extdata.state.set(m_estate);
            dispatch(extdata);
          }
          else
          {
            dispatch(m_estate);
          }
        }

        void
        handleImuRaw(const mavlink_message_t* msg)
        {
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
          mavlink_global_position_int_t gp;
          mavlink_msg_global_position_int_decode(msg, &gp);

          // We need to wait until we know the vehicle type to handle this
          if (m_vehicle_type == VEHICLE_UNKNOWN)
            return;

          m_lat = Angles::radians((double)gp.lat * 1e-07);
          m_lon = Angles::radians((double)gp.lon * 1e-07);
          m_hae_msl = (double) gp.alt * 1e-3;   //MSL

          if (m_args.convert_msl && m_fix.type == IMC::GpsFix::GFT_STANDALONE)
          {
            if ((m_ground && !m_offset_st) || m_reboot)
            {
              Coordinates::WMM wmm(m_ctx.dir_cfg);
              m_hae_offset = wmm.height(m_lat, m_lon);
              m_reboot = false;
              m_offset_st = true;
            }
          }
          else
          {
            m_hae_offset = 0;
          }

          m_estate.lat = m_lat;
          m_estate.lon = m_lon;
          m_estate.height = getHeight();

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
        }

        float
        getHeight(void)
        {
          return m_hae_msl + m_hae_offset;
        }

        void
        handleHWStatusPacket(const mavlink_message_t* msg)
        {
          if (m_args.pwrm)
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
          if (!m_args.pwrm)
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
          m_temp.value = 0.01 * sc_press.temperature;

          if(m_temp.value >= (m_args.esc_temp - 5))
          {
            if(m_temp.value >= m_args.esc_temp)
              err("Autopilot temperature reached %fºC! ESC will shutdown!!!", m_temp.value);
            else
              war("Autopilot temperature at %fºC! ESC shuts down around %fºC.", m_temp.value, m_args.esc_temp);
          }

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
        handleWindPacket(const mavlink_message_t* msg)
        {
          mavlink_wind_t wind;

          mavlink_msg_wind_decode(msg, &wind);

          double wind_dir_rad = wind.direction * Math::c_pi / 180;

          m_stream.x = -std::cos(wind_dir_rad) * wind.speed;
          m_stream.y = -std::sin(wind_dir_rad) * wind.speed;
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
          m_last_wp = 0;
        }

        void
        handleMissionAckPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_ack_t miss_ack;

          mavlink_msg_mission_ack_decode(msg, &miss_ack);
          debug("Mission was received, result is %d", miss_ack.type);
          m_changing_wp = false;
          m_last_wp = 0;
        }

        void
        handleMissionCurrentPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_current_t miss_curr;

          mavlink_msg_mission_current_decode(msg, &miss_curr);
          m_current_wp = miss_curr.seq;
          trace("Current mission item: %d", miss_curr.seq);

          uint8_t buf[512];

          mavlink_message_t msg_out;

          mavlink_msg_mission_request_pack(255, 0, &msg_out,
                                           m_sysid, //! target_system System ID
                                           0, //! target_component Component ID
                                           m_current_wp); //! Mission item to request

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg_out);
          sendData(buf, n);
        }

        void
        handleStatusTextPacket(const mavlink_message_t* msg)
        {
          mavlink_statustext_t stat_tex;
          IMC::ApmStatus apm_status;

          mavlink_msg_statustext_decode(msg, &stat_tex);
          apm_status.severity = stat_tex.severity;
          apm_status.text = stat_tex.text;

          inf("APM Status: [%d] %s", apm_status.severity, apm_status.text.c_str());
          dispatch(apm_status);
        }

        void
        handleHeartbeatPacket(const mavlink_message_t* msg)
        {
          mavlink_heartbeat_t hbt;
          mavlink_msg_heartbeat_decode(msg, &hbt);

          // since GCS heartbeat are actually also sent, ignore if type is a GCS (6)
          if (static_cast<MAV_TYPE>(hbt.type) == MAV_TYPE_GCS)
            return;

          if (!m_has_setup_rate)
          {
            m_has_setup_rate = true;
            setupRate(m_args.trate);
            debug("Rates setup second time.");
          }

          if (hbt.system_status == MAV_STATE_CRITICAL)
            war("APM failsafe active");

          IMC::AutopilotMode mode;

          // Update vehicle type if applicable
          if (m_vehicle_type == VEHICLE_UNKNOWN)
          {
            MAV_TYPE mav_type = static_cast<MAV_TYPE>(hbt.type);
            switch (mav_type)
            {
            default:
              err(DTR("Controlling an unknown vehicle type."));
              return;
            case MAV_TYPE_FIXED_WING:
              m_vehicle_type = VEHICLE_FIXEDWING;
              inf(DTR("Controlling a fixed-wing vehicle."));
              break;
            case MAV_TYPE_QUADROTOR:
            case MAV_TYPE_HEXAROTOR:
            case MAV_TYPE_OCTOROTOR:
            case MAV_TYPE_TRICOPTER:
              m_vehicle_type = VEHICLE_COPTER;
              inf(DTR("Controlling a multirotor."));
              break;
            }
          }

          if (m_mode != (int)hbt.custom_mode)
            debug("Switched mode from %d to %d", m_mode, hbt.custom_mode);

          m_mode = hbt.custom_mode;
          if (m_vehicle_type == VEHICLE_COPTER)
          {
            switch(m_mode)
            {
              default:
                mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
                mode.mode = "MANUAL";
                m_external = true;
                break;
              case CP_MODE_STABILIZE:
                mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
                mode.mode = "STABILIZE";
                m_external = true;
                break;
              case CP_MODE_AUTO:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "AUTO";
                trace("AUTO");
                m_external = false;
                break;
              case CP_MODE_LOITER:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "LOITER";
                trace("LOITER");
                m_external = false;
                break;
              case CP_MODE_LAND:
                mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
                mode.mode = "LAND";
                trace("LAND");
                m_external = true;
                break;
              case CP_MODE_DUNE:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "DUNE";
                trace("DUNE");
                m_external = false;
                break;
              case CP_MODE_GUIDED:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "GUIDED";
                trace("GUIDED");
                m_external = false;
                break;
            }
          }
          else
          {
            switch(m_mode)
            {
              default:
                m_external = true;
                mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
                mode.mode = "MANUAL";
                m_critical = false;
                if (m_mode != PL_MODE_MANUAL)
                {
                  mode.autonomy = IMC::AutopilotMode::AL_ASSISTED;

                  if (m_mode == PL_MODE_STABILIZE)
                    mode.mode = "STABILIZE";
                  if (m_mode == PL_MODE_RTL)
                    mode.mode = "RTL";
                  if (m_mode == PL_MODE_CIRCLE)
                    mode.mode = "CIRCLE";
                  if (m_mode == PL_MODE_AUTOTUNE)
                    mode.mode = "AUTOTUNE";
                }
                {
                  IMC::ControlLoops cl;
                  cl.enable = IMC::ControlLoops::CL_DISABLE;
                  cl.mask = IMC::CL_ALL;
                  receive(&cl);
                }
                break;
              case PL_MODE_AUTO:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "AUTO";
                trace("AUTO");
                if (m_external)
                {
                  m_external = false;
                  if (m_dpath.end_lat)
                  {
                    receive(&m_controllps);
                    receive(&m_dpath);
                  }
                }
                if (m_service && m_args.loiter_idle)
                  loiterHere();
                break;
              case PL_MODE_LOITER:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "LOITER";
                trace("LOITER");
                m_external = false;
                m_critical = false;
                break;
              case PL_MODE_FBWB:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "FBWB";
                trace("FBWB");
                m_external = false;
                m_critical = false;
                break;
              case PL_MODE_GUIDED:
                mode.autonomy = IMC::AutopilotMode::AL_AUTO;
                mode.mode = "GUIDED";
                trace("GUIDED");
                m_external = false;
                m_critical = false;
                break;
            }
          }

          dispatch(mode);
        }

        void
        handleNavControllerPacket(const mavlink_message_t* msg)
        {
          mavlink_nav_controller_output_t nav_out;
          mavlink_msg_nav_controller_output_decode(msg, &nav_out);
          trace("WP Dist: %d", nav_out.wp_dist);
          IMC::DesiredRoll d_roll;
          IMC::DesiredPitch d_pitch;
          IMC::DesiredHeading d_head;
          IMC::DesiredZ d_z;

          // As wp_dist is an integer, we calculate distance manually.
          float copter_distance = 0;

          if (m_vehicle_type == VEHICLE_COPTER)
          {
            // As of AC 3.2, wp_dest is not updated in guided mode.
            // Calc distance between desired location and current location
            Matrix destination = Matrix(3, 1, 0.0);
            Matrix current_pos = Matrix(3, 1, 0.0);
            current_pos(0) = m_estate.x;
            current_pos(1) = m_estate.y;
            current_pos(2) = m_estate.z;

            float alt = (m_dpath.end_z_units & IMC::Z_NONE) ? m_args.alt : (float)m_dpath.end_z;

            WGS84::displacement(m_estate.lat, m_estate.lon, m_estate.height,
                                m_dpath.end_lat, m_dpath.end_lon, alt,
                                &destination(0), &destination(1), &destination(2));

            copter_distance = (destination - current_pos).norm_2();

            // Store mavlink distance.
            nav_out.wp_dist = (uint16_t) copter_distance;
            trace("Copter waypoint dist now: %0.2f", copter_distance);
          }

          d_roll.value = Angles::radians(nav_out.nav_roll);
          d_pitch.value = Angles::radians(nav_out.nav_pitch);
          d_head.value = Angles::radians(nav_out.nav_bearing);
          d_z.value = getHeight() + nav_out.alt_error;
          d_z.z_units = IMC::Z_HEIGHT;

          dispatch(d_roll);
          dispatch(d_pitch);

          if (m_args.ardu_tracker)
          {
            dispatch(d_head);
            dispatch(d_z);
          }

          if (!m_args.ardu_tracker)
            return;

          //! Check of guided mode
          bool is_valid_mode = false;

          if (m_vehicle_type == VEHICLE_COPTER)
            is_valid_mode = (m_mode == CP_MODE_GUIDED || (m_mode == CP_MODE_AUTO                     )) ? true : false;
          else
            is_valid_mode = (m_mode == PL_MODE_GUIDED || (m_mode == PL_MODE_AUTO && m_current_wp == 3)) ? true : false;

          // Check Loiter tolerance
          if (m_vehicle_type == VEHICLE_COPTER)
          {
            if ((copter_distance <= m_args.ltolerance)
               && is_valid_mode)
            {
              m_pcs.flags |= PathControlState::FL_LOITERING;
            }
          }
          else
          {
            if ((nav_out.wp_dist <= m_desired_radius + m_args.ltolerance)
               && (nav_out.wp_dist >= m_desired_radius - m_args.ltolerance)
               && is_valid_mode)
            {
              m_pcs.flags |= PathControlState::FL_LOITERING;
            }
          }

          float since_last_wp = Clock::get() - m_last_wp;

          bool is_near = false;
          if (m_vehicle_type == VEHICLE_COPTER)
          {
            is_near = (!m_changing_wp
                && (copter_distance <= m_args.secs * m_gnd_speed
                    || copter_distance <= m_args.cp_wp_radius)
                && is_valid_mode
                && since_last_wp > 1.0);
          }
          else
          {
            is_near = (!m_changing_wp
                && (nav_out.wp_dist <= m_desired_radius + m_args.secs * m_gnd_speed)
                && (nav_out.wp_dist >= m_desired_radius - m_args.secs * m_gnd_speed)
                && is_valid_mode
                && since_last_wp > 1.0);
          }

          if (is_near)
          {
            m_pcs.flags |= PathControlState::FL_NEAR;
          }

          if (m_last_wp && since_last_wp > 1.5)
            receive(&m_dpath);

          if (m_gnd_speed)
            m_pcs.eta = nav_out.wp_dist / m_gnd_speed;

          dispatch(m_pcs);
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
          IMC::Throttle thr;

          ias.value = (fp64_t)vfr_hud.airspeed;
          gs.value = (fp64_t)vfr_hud.groundspeed;
          m_gnd_speed = (int)vfr_hud.groundspeed;
          thr.value = (uint16_t)vfr_hud.throttle;

          dispatch(ias);
          dispatch(gs);
          dispatch(thr);
        }

        void
        handleSystemTimePacket(const mavlink_message_t* msg)
        {
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

          if (!m_args.hitl)
            dispatch(m_fix);
        }

        void
        handleMissionRequestPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_request_t mission_request;
          mavlink_msg_mission_request_decode(msg, &mission_request);

          debug("Requesting item #%d", mission_request.seq);

          sendMissionItem(true);
        }
      };
    }
  }
}

DUNE_TASK
