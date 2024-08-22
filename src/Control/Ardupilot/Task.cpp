//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"

#define MAV_(X) MAVLINK_MSG_ID_##X

namespace Control
{
  //! Ardupilot interface using MAVLink v2.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace Ardupilot
  {
    using DUNE_NAMESPACES;

    //! Seconds before reaching waypoint to consider reached.
    static const float s_pre_wp_time = 1.0;
    //! Minimum distance to consider waypoint reached.
    static const float s_min_wp_dist = 1.0;

    //! List of Arducopter Modes.
    enum APM_copterModes
    {
      CP_MODE_STABILIZE,  // hold level position
      CP_MODE_ACRO,       // rate control
      CP_MODE_ALT_HOLD,   // AUTO control
      CP_MODE_AUTO,       // AUTO control
      CP_MODE_GUIDED,     // AUTO control
      CP_MODE_LOITER,     // Hold a single location
      CP_MODE_RTL,        // AUTO control
      CP_MODE_CIRCLE,     // AUTO control
      CP_MODE_POSITION,   // AUTO control
      CP_MODE_LAND,       // AUTO control
      CP_MODE_OF_LOITER,  // Hold a single location using optical flow sensor
      CP_MODE_DRIFT,      // DRIFT mode (Note: 12 is no longer used)
      CP_MODE_DUNE,       // DUNE mode
      CP_MODE_SPORT       // earth frame rate control
    };

    //! APM Type specifier.
    enum APM_Vehicle
    {
      //! Unkown vehicle type
      VEHICLE_UNKNOWN,
      //! Fixed wing types
      VEHICLE_FIXEDWING,
      //! Copter types (quad, hexa, etc)
      VEHICLE_COPTER
    };

    struct Arguments
    {
      //! TCP Port
      uint16_t port;
      //! TCP Address
      Address addr;
      //! Use External Navigation Data
      bool nav_external;
      //! Telemetry Rates
      std::vector<uint8_t> rates;
      //! Loiter tolerance
      float ltol;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! External control
      bool m_external;
      //! Vehicle type.
      uint8_t m_vehicle_type;
      //! Check if is in service
      bool m_service;
      //! Time since last waypoint was sent
      float m_last_wp;
      //! Operation Mode.
      uint32_t m_mode;
      //! Ground speed.
      float m_gnd_speed;
      //! Changing waypoint.
      bool m_changing_wp;
      //! Ground reference.
      bool m_ground;
      //! Home reference.
      float m_href;
      //! Mavlink parser.
      MavParser<Task>* m_parser;
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! GpsFix message.
      IMC::GpsFix m_fix;
      //! DesiredPath message.
      IMC::DesiredPath m_dpath;
      //! PathControlState message.
      IMC::PathControlState m_pcs;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_external(false),
        m_vehicle_type(VEHICLE_UNKNOWN),
        m_service(false),
        m_last_wp(0),
        m_mode(0),
        m_ground(true),
        m_parser(nullptr)
      {
        param("TCP - Port", m_args.port)
          .defaultValue("5760")
          .description("Port for connection to Ardupilot");

        param("TCP - Address", m_args.addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to Ardupilot");

        param("Use External Nav Data", m_args.nav_external)
          .defaultValue("false")
          .description("Dispatch ExternalNavData instead of EstimatedState");

        param("Telemetry Rate", m_args.rates)
          .units(Units::Hertz)
          .description("Telemetry output rate from Ardupilot");

        param("Loiter Tolerance", m_args.ltol)
          .defaultValue("10")
          .units(Units::Meter)
          .description("Distance to consider loitering (radius + tolerance)");

        bind<IMC::Takeoff>(this);
        // bind<IMC::Land>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        try
        {
          m_parser = new MavParser<Task>(*this, m_args.addr, m_args.port);
          spew("Ardupiloit interface initialized");
        }
        catch (const std::exception& e)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          err("Ardupilot interface initialization failed");
          throw RestartNeeded(e.what(), 30);
        }

        std::stringstream ss;
        ss << "mavlink+tcp://" << m_args.addr << ":" << m_args.port << "/";

        IMC::AnnounceService announce;
        announce.service = ss.str();
        announce.service_type = AnnounceService::SRV_TYPE_EXTERNAL;
        dispatch(announce);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_parser->bind(MAV_(HEARTBEAT), &Task::onHeartBeat);
        m_parser->bind(MAV_(SYSTEM_TIME), &Task::handleSystemTime);
        m_parser->bind(MAV_(GPS_RAW_INT), &Task::handleRawGps);
        m_parser->bind(MAV_(ATTITUDE), &Task::onAttitude);
        m_parser->bind(MAV_(GLOBAL_POSITION_INT), &Task::onGlobalPositionInt);
        m_parser->bind(MAV_(NAV_CONTROLLER_OUTPUT), &Task::onNavControllerOutput);

        // m_parser->waitHeartbeat();
        // inf("Received first heartbeat message");
        // m_parser->sendHeartBeat();
        // !m_parser->waitHeartbeat();

        // Request parameters
        // https://ardupilot.org/dev/docs/mavlink-get-set-params.html

        // Enable Data Streams
        setupStreamData(m_args.rates);
        war("Resource initialization complete");
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_parser);
      }

      void
      setupStreamData(const std::vector<uint8_t>& rate)
      {
        static std::vector<uint8_t> steps = {
          { MAV_DATA_STREAM_POSITION },
          { MAV_DATA_STREAM_EXTRA1 },
          { MAV_DATA_STREAM_EXTRA2 },
          { MAV_DATA_STREAM_EXTRA3 },
        };

        for (unsigned idx = 0; idx < rate.size(); ++idx)
          m_parser->setStreamData(steps[idx], rate[idx], true);
      }

      void
      onHeartBeat(const mavlink_message_t& msg)
      {
        mavlink_heartbeat_t hb;
        mavlink_msg_heartbeat_decode(&msg, &hb);

        if (hb.type == MAV_TYPE_GCS)
          return;

        if (hb.system_status == MAV_STATE_CRITICAL)
          war("APM failsafe activated");

        if (m_vehicle_type == VEHICLE_UNKNOWN)
        {
          m_vehicle_type = hb.type;
          switch (hb.type)
          {
            case MAV_TYPE_FIXED_WING:
              m_vehicle_type = VEHICLE_FIXEDWING;
              inf(DTR("Controlling a fixed-wing vehicle."));
              break;

            case MAV_TYPE_QUADROTOR:
            case MAV_TYPE_TRICOPTER:
            case MAV_TYPE_HEXAROTOR:
            case MAV_TYPE_OCTOROTOR:
              m_vehicle_type = VEHICLE_COPTER;
              inf(DTR("Controlling a multirotor."));
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            default:
              break;
          }
        }

        if (m_mode != hb.custom_mode)
          debug("Mode changed from %d to %d", m_mode, hb.custom_mode);

        if (m_vehicle_type == VEHICLE_COPTER)
          onCopterHB(hb.custom_mode);

        spew("Received heartbeat message");
        spew("type: %d", hb.type);
        spew("autopilot: %d", hb.autopilot);
        spew("base mode: %d", hb.base_mode);
        spew("custom mode: %d", hb.custom_mode);
        spew("system status: %d", hb.system_status);
      }

      void
      handleSystemTime(const mavlink_message_t& msg)
      {
        mavlink_system_time_t time;
        mavlink_msg_system_time_decode(&msg, &time);

        time_t t = time.time_unix_usec / 1000000;
        struct tm* tm = gmtime(&t);

        m_fix.utc_time = tm->tm_hour * 3600 + tm->tm_min * 60 + tm->tm_sec;
        m_fix.utc_year = tm->tm_year + 1900;
        m_fix.utc_month = tm->tm_mon + 1;
        m_fix.utc_day = tm->tm_mday;

        m_fix.validity |= IMC::GpsFix::GFV_VALID_TIME | IMC::GpsFix::GFV_VALID_DATE;

        dispatch(m_fix);
      }

      void
      handleRawGps(const mavlink_message_t& msg)
      {
        mavlink_gps_raw_int_t gps;
        mavlink_msg_gps_raw_int_decode(&msg, &gps);

        m_fix.lat = Angles::radians(gps.lat * 1e-7);
        m_fix.lon = Angles::radians(gps.lon * 1e-7);
        m_fix.height = gps.alt * 1e-3;

        m_fix.cog = Angles::radians(gps.cog * 1e-2);
        m_fix.sog = gps.vel * 1e-2;

        m_fix.satellites = gps.satellites_visible;
        m_fix.hdop = gps.eph * 1e-2;
        m_fix.vdop = gps.epv * 1e-2;

        m_fix.validity = 0;

        if (gps.fix_type <= GPS_FIX_TYPE_NO_FIX)
        {
          m_fix.type = IMC::GpsFix::GFT_DEAD_RECKONING;
          return;
        }

        m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;
        m_fix.validity |= IMC::GpsFix::GFV_VALID_HDOP;

        if (gps.fix_type > GPS_FIX_TYPE_3D_FIX)
          m_fix.validity |= IMC::GpsFix::GFV_VALID_VDOP;
      }

      void
      onNavControllerOutput(const mavlink_message_t& msg)
      {
        mavlink_nav_controller_output_t nav;
        mavlink_msg_nav_controller_output_decode(&msg, &nav);

        double ts = m_parser->getMessageTs();

        trace("WP dist: %d", nav.wp_dist);

        IMC::DesiredRoll dr;
        IMC::DesiredPitch dp;
        IMC::DesiredHeading dh;
        IMC::DesiredZ dz;

        dr.setTimeStamp(ts);
        dp.setTimeStamp(ts);
        dh.setTimeStamp(ts);
        dz.setTimeStamp(ts);

        float wp_dist = 0;

        // on Copter
        Matrix dst = Matrix(3, 1, 0.0);
        Matrix pos = Matrix(3, 1, 0.0);

        pos(0) = m_estate.x;
        pos(1) = m_estate.y;

        float alt = (m_dpath.end_z_units & IMC::Z_NONE) ? 0 : m_dpath.end_z;

        WGS84::displacement(m_estate.lat, m_estate.lon, m_estate.height, m_dpath.end_lat,
                            m_dpath.end_lon, alt, &dst(0), &dst(1), &dst(2));

        wp_dist = (dst - pos).norm_2();

        dr.value = Angles::radians(nav.nav_roll);
        dp.value = Angles::radians(nav.nav_pitch);
        dh.value = Angles::radians(nav.nav_bearing);
        dz.value = m_estate.alt + nav.alt_error;

        dispatch(dr);
        dispatch(dp);
        dispatch(dh);
        dispatch(dz);

        bool valid_mode = false;
        bool is_near = false;
        float since_last_wp = Clock::get() - m_last_wp;

        if (m_vehicle_type != VEHICLE_COPTER)
          return;
        // TODO: Validate for remaining vehicle types

        valid_mode = (m_mode == CP_MODE_AUTO || m_mode == CP_MODE_GUIDED);
        if (valid_mode && wp_dist <= m_args.ltol)
          m_pcs.flags |= IMC::PathControlState::FL_LOITERING;

        is_near = !m_changing_wp
                  && (wp_dist <= s_pre_wp_time * m_gnd_speed || wp_dist <= s_min_wp_dist)
                  && valid_mode && since_last_wp > 1.0;

        if (is_near)
        {
          trace("Near waypoint");
          m_pcs.flags |= IMC::PathControlState::FL_NEAR;
        }

        if (m_gnd_speed)
          m_pcs.x = nav.wp_dist / m_gnd_speed;
        else
          m_pcs.x = -1;

        m_pcs.y = nav.xtrack_error;
        dispatch(m_pcs);
      }

      void
      onGlobalPositionInt(const mavlink_message_t& msg)
      {
        mavlink_global_position_int_t pos;
        mavlink_msg_global_position_int_decode(&msg, &pos);

        if (m_vehicle_type == VEHICLE_UNKNOWN)
          return;

        m_estate.lat = Angles::radians(pos.lat * 1e-7);
        m_estate.lon = Angles::radians(pos.lon * 1e-7);

        // TODO: Check if this is the correct height
        Coordinates::WMM wmm(m_ctx.dir_cfg);
        m_estate.height = (pos.alt * 1e-3) - wmm.height(m_fix.lat, m_fix.lon);

        m_estate.x = 0;
        m_estate.y = 0;
        m_estate.z = 0;

        m_estate.vx = pos.vx * 1e-2;
        m_estate.vy = pos.vy * 1e-2;
        m_estate.vz = pos.vz * 1e-2;

        BodyFixedFrame::toBodyFrame(m_estate.phi, m_estate.theta, m_estate.psi, m_estate.vx,
                                    m_estate.vy, m_estate.vz, &m_estate.u, &m_estate.v,
                                    &m_estate.w);

        m_estate.alt = pos.relative_alt * 1e-3;
        m_estate.depth = -1;

        if (m_ground)
          m_href = m_estate.height;
      }

      void
      onAttitude(const mavlink_message_t& msg)
      {
        mavlink_attitude_t att;
        mavlink_msg_attitude_decode(&msg, &att);

        double ts = m_parser->getMessageTs();

        m_estate.setTimeStamp(ts);
        m_estate.phi = att.roll;
        m_estate.theta = att.pitch;
        m_estate.psi = att.yaw;
        m_estate.p = att.rollspeed;
        m_estate.q = att.pitchspeed;
        m_estate.r = att.yawspeed;

        if (m_args.nav_external)
        {
          IMC::ExternalNavData ext_nav;
          ext_nav.state.set(m_estate);
          ext_nav.setTimeStamp(ts);
          dispatch(ext_nav, DF_KEEP_TIME);
          return;
        }

        dispatch(m_estate, DF_KEEP_TIME);

        std::stringstream ss;
        m_estate.toText(ss);

        spew("Estimated state: %s", ss.str().c_str());
      }

      void
      onCopterHB(int32_t op)
      {
        IMC::AutopilotMode mode;

        switch (op)
        {
          case CP_MODE_STABILIZE:
            mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
            mode.mode = "STABILIZE";
            m_external = true;
            break;
          case CP_MODE_AUTO:
            mode.autonomy = IMC::AutopilotMode::AL_AUTO;
            mode.mode = "AUTO";
            trace("Operation Mode: AUTO");
            m_external = false;
            break;
          case CP_MODE_LOITER:
            mode.autonomy = IMC::AutopilotMode::AL_AUTO;
            mode.mode = "LOITER";
            trace("Operation Mode: LOITER");
            m_external = false;
            break;
          case CP_MODE_DUNE:
            mode.autonomy = IMC::AutopilotMode::AL_AUTO;
            mode.mode = "DUNE";
            trace("Operation Mode: DUNE");
            m_external = false;
            break;
          case CP_MODE_GUIDED:
            mode.autonomy = IMC::AutopilotMode::AL_AUTO;
            mode.mode = "GUIDED";
            trace("Operation Mode: GUIDED");
            m_external = false;
            break;
          case CP_MODE_LAND:
            mode.autonomy = IMC::AutopilotMode::AL_AUTO;
            mode.mode = "LAND";
            trace("Operation Mode: LAND");
            m_external = false;
            break;
          default:
            mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
            mode.mode = "MANUAL";
            m_external = true;
            break;
        }

        m_mode = op;
        dispatch(mode);
      }

      void
      consume(const IMC::Takeoff* msg)
      {
        IMC::DesiredPath dpath;

        dpath.start_lat = m_estate.lat;
        dpath.start_lon = m_estate.lon;
        dpath.start_z = m_estate.height;
        dpath.start_z_units = IMC::Z_HEIGHT;

        dpath.end_lat = msg->lat;
        dpath.end_lon = msg->lon;
        dpath.end_z = msg->z;
        dpath.end_z_units = msg->z_units;

        onTakeOff(dpath, msg->takeoff_pitch);
      }

      void
      onTakeOff(const IMC::DesiredPath& dpath, float pitch)
      {
        mavlink_timesync_t ts;
        mavlink_msg_timesync_decode(&msg, &ts);

        spew("Received sync message");
        spew("tc1: %ld", ts.tc1);
        spew("ts1: %ld", ts.ts1);
        spew("sys - component: %d - %d", ts.target_system, ts.target_component);

        // Reply
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();
          m_parser->poll(1.0);
        }
      }
    };
  }
}

DUNE_TASK
