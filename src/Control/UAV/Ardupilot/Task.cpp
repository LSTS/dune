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

// Local headers.
#include "Translator.hpp"

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

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
        //! GPS Fix message
        IMC::GpsFix m_fix;
        //! Path Control State
        IMC::PathControlState m_pcs;
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
        //! Critical WP
        bool m_critical;
        //! Bitfield of enabled control loops.
        uint32_t m_cloops;
        //! Parser Variables
        mavlink_message_t m_msg;
        //! Parser
        Translator* m_transl;
        APMArgs m_transl_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_sysid(1),
          m_lat(0.0),
          m_lon(0.0),
          m_alt(0.0),
          m_external(true),
          m_critical(false),
          m_cloops(0)
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

          // Setup processing of IMC messages
          bind<DesiredPath>(this);
          bind<DesiredRoll>(this);
          bind<DesiredZ>(this);
          bind<SetServoPosition>(this);
          bind<IdleManeuver>(this);
          bind<ControlLoops>(this);
          bind<PowerChannelControl>(this);
          bind<GpsFix>(this);
          bind<PathControlState>(this);
          bind<EstimatedState>(this);

          // Misc. initialization
          m_last_pkt_time = 0; // time of last packet from Ardupilot
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
        onUpdateParameters(void)
        {
          m_transl_args.ardu_tracker = m_args.ardu_tracker;
          m_transl_args.comm_timeout = m_args.comm_timeout;
          m_transl_args.ltolerance = m_args.ltolerance;
          m_transl_args.pwrm = m_args.pwrm;
          m_transl_args.secs = m_args.secs;
          m_transl_args.ublox = m_args.ublox;
        }

        void
        openConnection(void)
        {
          try
          {
            m_TCP_sock = new TCPSocket;
            m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
            setupRate(m_args.trate);

            m_transl = new Translator(this, m_TCP_sock, m_transl_args);
            m_transl->start();

            inf(DTR("Ardupilot interface initialized"));
          }
          catch (...)
          {
            m_TCP_sock = 0;
            war(DTR("Connection failed, retrying..."));
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
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
        consume(const IMC::GpsFix* fix)
        {
          m_fix = *fix;
        }

        void
        consume(const IMC::PathControlState* pcs)
        {
          m_pcs.flags |= pcs->flags;
          (void) pcs;
          dispatch(m_pcs);
        }

        void
        consume(const IMC::EstimatedState* e_state)
        {
          Coordinates::toWGS84(*e_state, m_lat, m_lon, m_alt);
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

          m_transl->setDesiredRadius((uint16_t) path->lradius);

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
          if(m_critical)
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

        void
        onMain(void)
        {
          m_transl = new Translator(this, m_TCP_sock, m_transl_args);

          while (!stopping())
          {
            // Handle data
            if(m_transl->isRunning())
            {
              try
              {
                APMStatus status = m_transl->getStatus();
                m_critical = status.critical;
                m_external = status.external;

                if(status.entity_code == Status::CODE_NOT_SYNCHED)
                  setEntityState(status.entity_state, "External Control");
                else
                  setEntityState(status.entity_state, status.entity_code);
              }
              catch (std::runtime_error& e)
              {
                err("%s", e.what());
                m_transl->stop();
                Time::Delay::wait(1.0);
                openConnection();
              }
            }
            else
            {
              Time::Delay::wait(1.0);
              openConnection();
            }

            // Handle IMC messages from bus
            waitForMessages(0.5);
          }

          if(m_transl->isRunning())
            m_transl->stop();
        }
      };
    }
  }
}

DUNE_TASK
