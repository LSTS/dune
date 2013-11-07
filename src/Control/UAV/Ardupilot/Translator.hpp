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
// Author: Joao Fortuna                                                     *
//***************************************************************************

#ifndef CONTROL_UAV_ARDUPILOT_TRANSLATOR_HPP_INCLUDED_
#define CONTROL_UAV_ARDUPILOT_TRANSLATOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>

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

      struct APMStatus
      {
        //! External control
        bool external;
        //! Critical Maneuver
        bool critical;
        //! Used to update Task EntityState
        IMC::EntityState::StateEnum entity_state;
        Status::Code entity_code;
      };

      struct APMArgs
      {
        //! Communications timeout
        uint8_t comm_timeout;
        //! Use Ardupilot's waypoint tracker
        bool ardu_tracker;
        //! GPS is uBlox
        bool ublox;
        //! Loitering tolerance
        int ltolerance;
        //! Has Power Module
        bool pwrm;
        //! WP seconds before reach
        int secs;
      };

      class Translator: public DUNE::Concurrency::Thread
      {
      public:
        Translator(Task* t, DUNE::Network::TCPSocket* sock, APMArgs args):
          m_task(t),
          m_sock(sock),
          m_args(args),
          ref_lat(0.0),
          ref_lon(0.0),
          ref_hei(0.0)
      {
          // Setup packet handlers
          // IMPORTANT: set up function to handle each type of MAVLINK packet here
          m_mlh[MAVLINK_MSG_ID_ATTITUDE] = &Translator::handleAttitudePacket;
          m_mlh[MAVLINK_MSG_ID_GLOBAL_POSITION_INT] = &Translator::handlePositionPacket;
          m_mlh[MAVLINK_MSG_ID_HWSTATUS] = &Translator::handleHWStatusPacket;
          m_mlh[MAVLINK_MSG_ID_SCALED_PRESSURE] = &Translator::handleScaledPressurePacket;
          m_mlh[MAVLINK_MSG_ID_GPS_RAW_INT] = &Translator::handleRawGPSPacket;
          m_mlh[MAVLINK_MSG_ID_WIND] = &Translator::handleWindPacket;
          m_mlh[MAVLINK_MSG_ID_COMMAND_ACK] = &Translator::handleCmdAckPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_ACK] = &Translator::handleMissionAckPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_CURRENT] = &Translator::handleMissionCurrentPacket;
          m_mlh[MAVLINK_MSG_ID_STATUSTEXT] = &Translator::handleStatusTextPacket;
          m_mlh[MAVLINK_MSG_ID_HEARTBEAT] = &Translator::handleHeartbeatPacket;
          m_mlh[MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT] = &Translator::handleNavControllerPacket;
          m_mlh[MAVLINK_MSG_ID_MISSION_ITEM] = &Translator::handleMissionItemPacket;
          m_mlh[MAVLINK_MSG_ID_SYS_STATUS] = &Translator::handleSystemStatusPacket;
          m_mlh[MAVLINK_MSG_ID_VFR_HUD] = &Translator::handleHUDPacket;

          m_last_pkt_time = 0; // time of last packet from Ardupilot

          m_entity_state = IMC::EntityState::ESTA_BOOT;
          m_entity_code = Status::CODE_MISSING_DATA;
      }

        ~Translator(void)
        { }

        APMStatus
        getStatus(void)
        {
          return m_status;
        }

        void
        setDesiredRadius(int radius)
        {
          m_desired_radius = radius;
        }

      private:
        //! Arduino packet handling
        typedef void (Translator::* PktHandler)(const mavlink_message_t* msg);
        typedef std::map<int, PktHandler> PktHandlerMap;
        PktHandlerMap m_mlh;
        Task* m_task;
        //! TCP socket
        TCPSocket* m_sock;
        //! Ardupilot params
        APMArgs m_args;
        //! Parser Variables
        mavlink_message_t m_msg;
        //! Time of last packet
        double m_last_pkt_time;
        Poll m_poll;
        uint8_t m_buf[512];
        int m_desired_radius;
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
        //! Ardupilot status variables to be reported to the task
        APMStatus m_status;
        int m_gnd_speed;
        //! APM mode
        int m_mode;
        //! Temporary holders
        IMC::EntityState::StateEnum m_entity_state;
        Status::Code m_entity_code;

        int
        receiveData(uint8_t* buf, size_t blen)
        {
          if(m_sock)
          {
            try
            {
              return m_sock->read(buf, blen);
            }
            catch (std::runtime_error& e)
            {
              Memory::clear(m_sock);
              throw(e);
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

          while (m_poll.poll(0.01))
          {
            int n = receiveData(m_buf, sizeof(m_buf));

            if (n < 0)
            {
              m_task->debug("Receive error");
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
                    m_task->spew("failed at state IDLE");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_STX:
                    m_task->spew("failed at state GOT_STX");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_LENGTH:
                    m_task->spew("failed at state GOT_LENGTH");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_SYSID:
                    m_task->spew("failed at state GOT_SYSID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_COMPID:
                    m_task->spew("failed at state GOT_COMPID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_MSGID:
                    m_task->spew("failed at state GOT_MSGID");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_PAYLOAD:
                    m_task->spew("failed at state GOT_PAYLOAD");
                    break;
                  case MAVLINK_PARSE_STATE_GOT_CRC1:
                    m_task->spew("failed at state GOT_CRC1");
                    break;
                  default:
                    m_task->spew("failed OTHER");
                }
              }
              if (rv)
              {
                switch ((int)m_msg.msgid)
                {
                  default:
                    m_task->debug("UNDEF: %u", m_msg.msgid);
                    break;
                  case MAVLINK_MSG_ID_HEARTBEAT:
                    m_task->trace("HEARTBEAT");
                    break;
                  case MAVLINK_MSG_ID_SYS_STATUS:
                    m_task->trace("SYS_STATUS");
                    break;
                  case 22:
                    m_task->trace("PARAM_VALUE");
                    break;
                  case MAVLINK_MSG_ID_GPS_RAW_INT:
                    m_task->spew("GPS_RAW");
                    break;
                  case 27:
                    m_task->trace("IMU_RAW");
                    break;
                  case MAVLINK_MSG_ID_SCALED_PRESSURE:
                    m_task->spew("SCALED_PRESSURE");
                    break;
                  case MAVLINK_MSG_ID_ATTITUDE:
                    m_task->spew("ATTITUDE");
                    break;
                  case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
                    m_task->spew("GLOBAL_POSITION_INT");
                    break;
                  case 34:
                    m_task->trace("RC_CHANNELS_SCALED");
                    break;
                  case 35:
                    m_task->trace("RC_CHANNELS_RAW");
                    break;
                  case MAVLINK_MSG_ID_MISSION_ITEM:
                    m_task->trace("MISSION_ITEM");
                    break;
                  case MAVLINK_MSG_ID_MISSION_CURRENT:
                    m_task->trace("MISSION_CURRENT");
                    break;
                  case 44:
                    m_task->trace("MISSION_COUNT");
                    break;
                  case MAVLINK_MSG_ID_MISSION_ACK:
                    m_task->spew("MISSION_ACK");
                    break;
                  case MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT:
                    m_task->trace("NAV_CONTROLLER_OUTPUT");
                    break;
                  case MAVLINK_MSG_ID_VFR_HUD:
                    m_task->trace("VFR_HUD");
                    break;
                  case MAVLINK_MSG_ID_COMMAND_ACK:
                    m_task->spew("CMD_ACK");
                    break;
                  case MAVLINK_MSG_ID_BATTERY_STATUS:
                    m_task->spew("BATTERY_STAT");
                    break;
                  case 150:
                    m_task->trace("SENSOR_OFFSETS");
                    break;
                  case 152:
                    m_task->trace("MEMINFO");
                    break;
                  case 162:
                    m_task->trace("FENCE_STATUS");
                    break;
                  case 163:
                    m_task->trace("AHRS");
                    break;
                  case 164:
                    m_task->trace("SIM_STATE");
                    break;
                  case MAVLINK_MSG_ID_HWSTATUS:
                    m_task->spew("HW_STATUS");
                    break;
                  case MAVLINK_MSG_ID_WIND:
                    m_task->spew("WIND");
                    break;
                  case MAVLINK_MSG_ID_STATUSTEXT:
                    m_task->trace("STATUSTEXT");
                    break;
                }

                PktHandler h = m_mlh[m_msg.msgid];

                if (!h)
                  continue;  // Ignore this packet (no handler for it)

                // Call handler
                (this->*h)(&m_msg);

                m_last_pkt_time = now;
              }
            }
          }

          m_status.critical = false;

          if ((now - m_last_pkt_time >= m_args.comm_timeout))
          {
            m_entity_state = IMC::EntityState::ESTA_ERROR;
            m_entity_code = Status::CODE_COM_ERROR;
            m_status.critical = true;
          }
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

          m_task->dispatch(m_estate, Tasks::DF_LOOP_BACK);
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

          m_task->dispatch(m_volt);
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

          m_task->dispatch(m_volt);
          m_task->dispatch(m_curr);
          m_task->dispatch(m_fuel);
        }

        void
        handleScaledPressurePacket(const mavlink_message_t* msg)
        {
          mavlink_scaled_pressure_t sc_press;

          mavlink_msg_scaled_pressure_decode(msg, &sc_press);

          m_pressure.value = sc_press.press_abs;
          m_temp.value = 0.1 * sc_press.temperature;

          m_task->dispatch(m_pressure);
          m_task->dispatch(m_temp);
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

          m_task->dispatch(m_fix, Tasks::DF_LOOP_BACK);
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

          m_task->dispatch(m_stream);
        }

        void
        handleCmdAckPacket(const mavlink_message_t* msg)
        {
          mavlink_command_ack_t cmd_ack;

          mavlink_msg_command_ack_decode(msg, &cmd_ack);
          m_task->debug("Command %d was received, result is %d", cmd_ack.command, cmd_ack.result);
        }

        void
        handleMissionAckPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_ack_t miss_ack;

          mavlink_msg_mission_ack_decode(msg, &miss_ack);
          m_task->debug("Mission was received, result is %d", miss_ack.type);
        }

        void
        handleMissionCurrentPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_current_t miss_curr;

          mavlink_msg_mission_current_decode(msg, &miss_curr);
          m_task->trace("Current mission item: %d", miss_curr.seq);
        }

        void
        handleStatusTextPacket(const mavlink_message_t* msg)
        {
          mavlink_statustext_t stat_tex;
          mavlink_msg_statustext_decode(msg, &stat_tex);
          m_task->debug("Status: %s", stat_tex.text);
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
              m_status.external = true;
              break;
            case 10:
              m_task->trace("AUTO");
              m_status.external = false;
              break;
            case 12:
              m_task->trace("LOITER");
              m_status.external = false;
              break;
            case 13:
              m_task->trace("DUNE");
              m_status.external = false;
              break;
            case 15:
              m_task->trace("GUIDED");
              m_status.external = false;
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
          m_task->debug("WP Dist: %d", nav_out.wp_dist);
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

          if((nav_out.wp_dist <= m_desired_radius + m_args.secs * m_gnd_speed)
             && (nav_out.wp_dist >= m_desired_radius - m_args.secs * m_gnd_speed)
             && (m_mode == 15))
          {
            m_pcs.flags |= PathControlState::FL_NEAR;
          }

          m_task->receive(&m_pcs);
          m_pcs.flags &= !PathControlState::FL_NEAR;
          m_task->dispatch(d_roll);
          m_task->dispatch(d_pitch);
          m_task->dispatch(d_head);
        }

        void
        handleMissionItemPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_item_t miss_item;
          mavlink_msg_mission_item_decode(msg, &miss_item);
          m_task->trace("Mission type: %d", miss_item.command);

          switch(miss_item.command)
          {
            default:
              m_status.critical = false;
              break;
            case MAV_CMD_NAV_TAKEOFF:
              m_status.critical = true;
              break;
            case MAV_CMD_NAV_LAND:
              m_status.critical = true;
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

          m_task->dispatch(ias);
          m_task->dispatch(gs);
        }

        void
        run(void)
        {
          m_poll.add(*m_sock);

          while(!isStopping())
          {
            m_entity_state = IMC::EntityState::ESTA_NORMAL;
            m_entity_code = Status::CODE_ACTIVE;

            handleArdupilotData();

            if(m_status.external && (m_entity_state != IMC::EntityState::ESTA_ERROR))
            {
              m_entity_state = IMC::EntityState::ESTA_FAILURE;
              m_entity_code = Status::CODE_NOT_SYNCHED;
            }

            m_status.entity_state = m_entity_state;
            m_status.entity_code = m_entity_code;
          }
        }
      };
    }
  }
}

#endif
