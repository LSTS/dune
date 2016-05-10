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
// Author: Trent Lukaczyk                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cmath>
#include <queue>

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

      //! %Task arguments.
      struct Arguments
      {
        //! Communications timeout
        uint8_t comm_timeout;
        //! TCP Port
        uint16_t TCP_port;
        //! TCP Address
        Address TCP_addr;
        //! Telemetry Rate
        //uint8_t trate;  NEED TO CHECK IF PX4 CAN DO THIS
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

        //! TCP socket
        Network::TCPSocket* m_TCP_sock;
        //! System ID
        uint8_t m_sysid;
        //! Parser Variables
        mavlink_message_t m_msg;

        // Mavlink Timeouts
        bool m_error_missing, m_esta_ext;

        //! GPS Fix message
        IMC::GpsFix m_fix;

        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_TCP_sock(NULL),
          m_sysid(1),
          m_error_missing(false),
          m_esta_ext(false)
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

          //! Misc. initialization
          m_last_pkt_time = 0; //! time of last packet from Ardupilot

        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
        }

        //! Reserve entity identifiers.
        void
        onEntityReservation(void)
        {
        }

        //! Resolve entity names.
        void
        onEntityResolution(void)
        {
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
            m_TCP_sock = new TCPSocket;
            m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
            m_TCP_sock->setNoDelay(true);
            inf(DTR("Ardupilot interface initialized"));
          }
          catch (...)
          {
            Memory::clear(m_TCP_sock);
            war(DTR("Connection failed, retrying..."));
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          }
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
          Memory::clear(m_TCP_sock);
        }

        //! Main loop.
        void
        onMain(void)
        {
          while (!stopping())
          {
            // Handle Autopilot data
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
//              if (m_external)
//              {
//                if (!m_esta_ext)
//                {
//                  setEntityState(IMC::EntityState::ESTA_NORMAL, "External Control");
//                  m_esta_ext = true;
//                }
//              }
//              else// if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
              {
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
                m_esta_ext = false;
              }
            }


            // Handle IMC messages from bus
            //consumeMessages();
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
                //spew("RECEIVED: %u", m_msg.msgid);

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
              m_esta_ext = false;
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


        // PACKET HANDLERS
        void
        handleAttitudePacket(const mavlink_message_t* msg)
        {
          spew("ATTITUDE");

          mavlink_attitude_t att;
          IMC::EstimatedState estate;

          mavlink_msg_attitude_decode(msg, &att);
          estate.phi = att.roll;
          estate.theta = att.pitch;
          estate.psi = att.yaw;
          estate.p = att.rollspeed;
          estate.q = att.pitchspeed;
          estate.r = att.yawspeed;

          dispatch(estate);
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

//          mavlink_global_position_int_t gp;
//          mavlink_msg_global_position_int_decode(msg, &gp);
//
//          double lat = Angles::radians((double)gp.lat * 1e-07);
//          double lon = Angles::radians((double)gp.lon * 1e-07);
//          double hgt = (double) gp.relative_alt * 1.0e-3;

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
          inf("AP Status: %.*s", 50, stat_tex.text);
        }

        void
        handleHeartbeatPacket(const mavlink_message_t* msg)
        {
          spew("HEARTBEAT");

          mavlink_heartbeat_t hbt;
          mavlink_msg_heartbeat_decode(msg, &hbt);
          IMC::AutopilotMode mode;

          // since GCS heartbeat are actually also sent, ignore if type is a GCS (6)
          if (static_cast<MAV_TYPE>(hbt.type) == MAV_TYPE_GCS)
            return;

          if (hbt.system_status == MAV_STATE_CRITICAL)
            war("APM failsafe active");

          switch(hbt.base_mode)
          {
            default:
              mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
              mode.mode = "MANUAL";
              break;
            case MAV_MODE_FLAG_AUTO_ENABLED:
              mode.autonomy = IMC::AutopilotMode::AL_AUTO;
              mode.mode = "AUTO";
              trace("AUTO");
              break;
            case MAV_MODE_FLAG_GUIDED_ENABLED:
              mode.autonomy = IMC::AutopilotMode::AL_AUTO;
              mode.mode = "GUIDED";
              trace("GUIDED");
              break;
            case MAV_MODE_FLAG_STABILIZE_ENABLED:
              mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
              mode.mode = "STABILIZE";
              trace("STABILIZE");
              break;
            case MAV_MODE_FLAG_MANUAL_INPUT_ENABLED:
              mode.autonomy = IMC::AutopilotMode::AL_MANUAL;
              mode.mode = "MANUAL";
              trace("MANUAL");
              break;
          }

          dispatch(mode);
        }

        void
        handleHUDPacket(const mavlink_message_t* msg)
        {
          spew("HUD");

          mavlink_vfr_hud_t vfr_hud;
          mavlink_msg_vfr_hud_decode(msg, &vfr_hud);

          IMC::IndicatedSpeed ias;
          IMC::TrueSpeed gs;

          ias.value = (fp64_t)vfr_hud.airspeed;
          gs.value = (fp64_t)vfr_hud.groundspeed;

          dispatch(ias);
          dispatch(gs);
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


      };
    }
  }
}

DUNE_TASK
