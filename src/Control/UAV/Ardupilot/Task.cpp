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
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

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
        //! Serial port device.
        std::string uart_dev;
        //! Serial port baud rate.
        unsigned uart_baud;
        //! Communications timeout
        uint8_t comm_timeout;
        //! Use Ardupilot's waypoint tracker
        bool ardu_tracker;
        //! UDP Port for Mission Planner connection
        uint16_t port;
        //! Address for Mission Planner connection
        Address addr;
        //! Port for SITL simulations
        uint16_t TCP_port;
        //! Address for SITL simulations
        Address TCP_addr;
        //! Connection mode Serial/TCP
        bool tcp;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Serial port device.
        SerialPort* m_uart;
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
        //! Voltage message
        IMC::Voltage m_volt;
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
        //! Reference Lat and Lon and Hei to measure displacement
        fp64_t ref_lat, ref_lon;
        fp32_t ref_hei;
        //! Simulated acceleration
        fp64_t m_acc_x, m_acc_y, m_acc_z;
        //! UDP socket for APM planner
        UDPSocket m_UDP_sock;
        Address m_UDP_addr;
        //! TCP socket for SITL simulation
        TCPSocket* m_TCP_sock;
        Address m_TCP_addr;
        uint16_t m_TCP_port;
        System::IOMultiplexing m_iom;
        //! System ID
        uint8_t m_sysid;
        //! Last received position
        float m_lat, m_lon, m_alt;
        //! External control
        bool m_external;
        //! Current waypoint
        int m_current_wp;
        //! Critical WP
        bool m_critical;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_uart(NULL),
          ref_lat(0.0),
          ref_lon(0.0),
          ref_hei(0.0),
          m_acc_x(0.0),
          m_acc_y(0.0),
          m_acc_z(0.0),
          m_sysid(1),
          m_lat(0.0),
          m_lon(0.0),
          m_alt(0.0),
          m_external(true),
          m_current_wp(0),
          m_critical(true)
        {
          param("Serial Port - Device", m_args.uart_dev)
          .defaultValue("")
          .description("Serial port used to connect to Ardupilot");

          param("Serial Port - Baud Rate", m_args.uart_baud)
          .defaultValue("57600")
          .description("Serial port baud rate");

          param("Communications Timeout", m_args.comm_timeout)
          .minimumValue("1")
          .maximumValue("60")
          .defaultValue("10")
          .units(Units::Second)
          .description("Ardupilot communications timeout");

          param("Ardupilot Tracker", m_args.ardu_tracker)
          .defaultValue("false")
          .description("Use Ardupilot's waypoint tracker");

          param("UDP Port", m_args.port)
          .defaultValue("14550")
          .description("Port for connection to APM Mission Planner");

          param("UDP Address", m_args.addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to APM Mission Planner");

          param("SITL Port", m_args.TCP_port)
          .defaultValue("5760")
          .description("Port for connection to SITL Simulation");

          param("SITL Address", m_args.TCP_addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to SITL Simulation");

          param("Enable SITL", m_args.tcp)
          .defaultValue("false")
          .description("Use TCP instead of Serial for SITL");

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

          // Setup processing of IMC messages
          bind<DesiredPath>(this);
          bind<DesiredRoll>(this);
          bind<SetServoPosition>(this);
          bind<SimulatedState>(this);
          bind<Acceleration>(this);
          bind<IdleManeuver>(this);

          // Misc. initialization
          m_last_pkt_time = 0; // time of last packet from Ardupilot
          m_estate.clear();
        }

        ~Task(void)
        {
          Task::onResourceRelease();
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_uart);
        }

        void
        onResourceAcquisition(void)
        {
          if(m_args.tcp)
          {
            m_uart = 0;
            m_TCP_addr = m_args.TCP_addr;
            m_TCP_port = m_args.TCP_port;
            m_TCP_sock = new TCPSocket;

            try
            {
              m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
              m_TCP_sock->addToPoll(m_iom);
            }
            catch(std::exception& e)
            {
              delete m_TCP_sock;
              m_TCP_sock = 0;
              throw;
            }
          }
          else
          {
            m_TCP_sock = 0;
            m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          }
        }

        void
        consume(const IMC::Acceleration* accel)
        {
          m_acc_x = accel->x;
          m_acc_y = accel->y;
          m_acc_z = accel->z;
        }

        void
        consume(const IMC::SimulatedState* simstate)
        {
          uint8_t buf[512];

          fp64_t rcv_lat = simstate->lat;
          fp64_t rcv_lon = simstate->lon;
          fp64_t rcv_hei = simstate->height;

          WGS84::displace(simstate->x, simstate->y, simstate->z,
              &rcv_lat, &rcv_lon, &rcv_hei);

          int32_t lat = (int32_t)(Angles::degrees(rcv_lat) * 1e07); //! Latitude, expressed as * 1E7
          int32_t lon = (int32_t)(Angles::degrees(rcv_lon) * 1e07); //! Longitude, expressed as * 1E7
          int32_t alt = (int32_t)(rcv_hei * 1000); //! Altitude in milimeters

          fp32_t vx, vy, vz;

          BodyFixedFrame::toInertialFrame(simstate->phi, simstate->theta, simstate->psi,
              simstate->u, simstate->v, simstate->w,
              &vx, &vy, &vz);

          mavlink_message_t* msg = new mavlink_message_t;

          mavlink_msg_hil_state_pack(255, 0, msg,
              Time::Clock::getSinceEpochNsec(),
              (float)simstate->phi,
              (float)simstate->theta,
              (float)simstate->psi,
              (float)simstate->p,
              (float)simstate->q,
              (float)simstate->r,
              lat,
              lon,
              alt,
              (int16_t)(vx * 100),
              (int16_t)(vy * 100),
              (int16_t)(vz * 100),
              (int16_t)(1000 * m_acc_x / DUNE::Math::c_gravity),
              (int16_t)(1000 * m_acc_y / DUNE::Math::c_gravity),
              (int16_t)(1000 * m_acc_z / DUNE::Math::c_gravity));
          uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          spew(DTR("Simulation packet sent to Ardupilot"));
        }

        void
        consume(const IMC::DesiredRoll* roll)
        {
          uint8_t buf[512];

          mavlink_message_t* msg = new mavlink_message_t;
          mavlink_msg_set_roll_pitch_yaw_thrust_pack(255, 0, msg, 1, 1, (float)roll->value, 4.0, 4.0, 0); // 8.0 radians is more than 2pi (is ignored by ardupilot)
          uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);
          debug(DTR("DesiredRoll packet sent to Ardupilot"));
        }

        void
        consume(const IMC::DesiredZ* desired_z)
        {
          sendCommandPacket(MAV_CMD_CONDITION_CHANGE_ALT, // Ascend/descend at rate.  Delay mission state machine until desired altitude reached.
                            2, // Descent / Ascend rate (m/s)
                            0, // Empty
                            0, // Empty
                            0, // Empty
                            0, // Empty
                            0, // Empty
                            desired_z->value); // Finish Altitude
          debug(DTR("DesiredZ packet sent to Ardupilot"));
        }

        void
        consume(const IMC::DesiredPath* path)
        {
          if(!m_args.ardu_tracker)
            return;
          sendCommandPacket(MAV_CMD_DO_SET_MODE, MAV_MODE_AUTO_DISARMED);

          uint8_t buf[512];
          int seq = 1;

          mavlink_message_t* msg = new mavlink_message_t;

          mavlink_msg_mission_count_pack(255, 0, msg,
              m_sysid, //! target_system System ID
              0, //! target_component Component ID
              4); //! size of Mission

          uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          mavlink_msg_mission_write_partial_list_pack(255, 0, msg,
              m_sysid, //! target_system System ID
              0, //! target_component Component ID
              seq, //! start_index Start index, 0 by default and smaller / equal to the largest index of the current onboard list
              seq+2); //! end_index End index, equal or greater than start index

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          //! Current position
          mavlink_msg_mission_item_pack(255, 0, msg,
              m_sysid, //! target_system System ID
              0, //! target_component Component ID
              seq++, //! seq Sequence
              MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
              MAV_CMD_NAV_WAYPOINT, //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
              1, //! current false:0, true:1
              1, //! autocontinue autocontinue to next wp
              0, //! Not used
              0, //! Not used
              0, //! Not used
              0, //! Not used
              m_lat, //! x PARAM5 / local: x position, global: latitude
              m_lon, //! y PARAM6 / y position: global: longitude
              m_alt);//! z PARAM7 / z position: global: altitude

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          //! Desired speed
          mavlink_msg_mission_item_pack(255, 0, msg,
              m_sysid, //! target_system System ID
              0, //! target_component Component ID
              seq++, //! seq Sequence
              MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
              MAV_CMD_DO_CHANGE_SPEED, //! command The scheduled action for the MISSION. see MAV_CMD in common.xml MAVLink specs
              0, //! current false:0, true:1
              1, //! autocontinue autocontinue to next wp
              0, //! Speed type (0=Airspeed, 1=Ground Speed)
              (float)(path->speed_units == IMC::SUNITS_METERS_PS ? path->speed : -1), //! Speed  (m/s, -1 indicates no change)
              (float)(path->speed_units == IMC::SUNITS_PERCENTAGE ? path->speed : -1), //! Throttle  ( Percent, -1 indicates no change)
              0, //! Not used
              0, //! Not used
              0, //! Not used
              0);//! Not used

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          //! Destination
          mavlink_msg_mission_item_pack(255, 0, msg,
              m_sysid, //! target_system System ID
              0, //! target_component Component ID
              seq++, //! seq Sequence
              MAV_FRAME_GLOBAL, //! frame The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h
              (path->lradius ? MAV_CMD_NAV_LOITER_UNLIM : MAV_CMD_NAV_WAYPOINT), //! command The scheduled action for the MISSION. see MAV_CMD in ardupilotmega.h
              0, //! current false:0, true:1
              0, //! autocontinue autocontinue to next wp
              0, //! Not used
              0, //! Not used
              0, //! Not used
              0, //! Not used
              (float)Angles::degrees(path->end_lat), //! x PARAM5 / local: x position, global: latitude
              (float)Angles::degrees(path->end_lon), //! y PARAM6 / y position: global: longitude
              (float)(path->end_z));//! z PARAM7 / z position: global: altitude

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          mavlink_msg_mission_set_current_pack(255, 0, msg,
              m_sysid,
              0,
              1);

          n = mavlink_msg_to_send_buffer(buf, msg);
          sendData(buf, n);

          debug(DTR("Waypoint packet sent to Ardupilot"));
        }

        void
        loiterHere(void)
        {
          sendCommandPacket(MAV_CMD_NAV_LOITER_UNLIM);
        }

        void
        consume(const IMC::IdleManeuver* idle)
        {
          (void)idle;

          if(getEntityState() == IMC::EntityState::ESTA_NORMAL)
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
          debug(DTR("SetServo packet sent to Ardupilot"));
        }

        void
        sendCommandPacket(uint8_t cmd, float arg1=0, float arg2=0, float arg3=0, float arg4=0, float arg5=0, float arg6=0, float arg7=0)
        {
          uint8_t buf[512];

          mavlink_message_t msg;

          debug("%0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f", arg1, arg2, arg3, arg4, arg5, arg6, arg7);

          mavlink_msg_command_long_pack(255, 0, &msg, m_sysid, 0, cmd, 0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          sendData(buf, n);
        }

        void
        onMain(void)
        {
          //! I/O multiplexer.
          IOMultiplexing iom;
          m_UDP_sock.addToPoll(iom);

          while (!stopping())
          {
            // Handle data
            handleArdupilotData();


            if(m_external || m_critical)
            {
              if(getEntityState() != IMC::EntityState::ESTA_ERROR)
                setEntityState(IMC::EntityState::ESTA_ERROR, "External Control");
            }
            else if(getEntityState() != IMC::EntityState::ESTA_NORMAL)
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            // Handle IMC messages from bus
            consumeMessages();

            // Check for UDP messages
            try
            {
              if (iom.poll(1.0))
              {
                if (m_UDP_sock.wasTriggered(iom))
                  handleUDP(m_UDP_sock);
              }
            }
            catch (...)
            { }
          }
        }

        bool
        poll(double timeout)
        {
          if(m_uart)
          {
            return m_uart->hasNewData(timeout) == System::IOMultiplexing::PRES_OK;
          }
          if(m_TCP_sock)
          {
            if (m_iom.poll(timeout))
              return m_TCP_sock->wasTriggered(m_iom);
            else
              return false;
          }
          return false;
        }

        int
        sendData(uint8_t* bfr, int size)
        {
          if(m_uart)
          {
            return m_uart->write((char*)bfr);
          }
          if(m_TCP_sock)
          {
            return m_TCP_sock->write((char*)bfr, size);
          }
          return 0;
        }

        int
        receiveData(uint8_t* buf)
        {
          if(m_uart)
          {
            return m_uart->read(buf, sizeof(buf));
          }
          if(m_TCP_sock)
          {
            try
            {
              return m_TCP_sock->read((char*) buf, sizeof(buf));
            }
            catch (std::exception& e) {
              DUNE_DBG("Ardupilot", "connection lost, retrying");
              m_TCP_sock->delFromPoll(m_iom);
              delete m_TCP_sock;

              m_TCP_sock = new Network::TCPSocket;
              m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
              m_TCP_sock->addToPoll(m_iom);
              return 0;
            }
          }
          return 0;
        }

        void
        handleArdupilotData(void)
        {
          mavlink_message_t msg;
          mavlink_status_t status;

          double now = Clock::get();

          while (poll(0.01))
          {
            int n = receiveData(m_buf);

            if (n < 0)
            {
              err(DTR("receive error"));
              break;
            }

            //! Send to UDP client
            m_UDP_sock.write((char*)m_buf, n, m_args.addr, m_args.port);

            for (int i = 0; i < n; i++)
            {

              if (mavlink_parse_char(MAVLINK_COMM_0, m_buf[i], &msg, &status))
              {

                switch ((int)msg.msgid)
                {
                  default:
                    debug("UNDEF: %u", msg.msgid);
                    break;
                  case MAVLINK_MSG_ID_HEARTBEAT:
                    trace("HEARTBEAT");
                    break;
                  case 1:
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
                  case MAVLINK_MSG_ID_MISSION_ACK:
                    spew("MISSION_ACK");
                    break;
                  case MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT:
                    trace("NAV_CONTROLLER_OUTPUT");
                    break;
                  case 74:
                    trace("VFR_HUD");
                    break;
                  case MAVLINK_MSG_ID_COMMAND_ACK:
                    spew("CMD_ACK");
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

                PktHandler h = m_mlh[msg.msgid];

                if (!h)
                  continue;  // Ignore this packet (no handler for it)

                // Call handler
                (this->*h)(&msg);
                m_sysid = msg.sysid;

                m_last_pkt_time = now;
              }
            }
          }

          if (now - m_last_pkt_time >= m_args.comm_timeout)
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
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
          dispatch(m_estate);
        }

        void
        handlePositionPacket(const mavlink_message_t* msg)
        {
          mavlink_global_position_int_t gp;
          mavlink_msg_global_position_int_decode(msg, &gp);

          fp64_t lat = Angles::radians((fp64_t)gp.lat * 1e-07);
          fp64_t lon = Angles::radians((fp64_t)gp.lon * 1e-07);
          fp32_t hei = gp.alt * 1e-03;

          m_lat = (float)(gp.lat * 1e-07);
          m_lon = (float)(gp.lon * 1e-07);
          m_alt = (float)(gp.alt * 1e-03);


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

          m_estate.vx = 1e-03 * gp.vx;
          m_estate.vy = 1e-03 * gp.vy;
          m_estate.vz = 1e-03 * gp.vz;

          // Note: the following will yield body-fixed *ground* velocity
          // Maybe this can be fixed w/IAS readings (anyway not too important)
          BodyFixedFrame::toBodyFrame(m_estate.phi, m_estate.theta, m_estate.psi,
              m_estate.vx, m_estate.vy, m_estate.vz,
              &m_estate.u, &m_estate.v, &m_estate.w);

          dispatch(m_estate);
        }

        void
        handleHWStatusPacket(const mavlink_message_t* msg)
        {
          mavlink_hwstatus_t hw_status;

          mavlink_msg_hwstatus_decode(msg, &hw_status);

          m_volt.value = 0.001 * hw_status.Vcc;

          dispatch(m_volt);
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

          m_fix.cog = gps_raw.cog;
          m_fix.sog = 100 * gps_raw.vel;
          m_fix.hdop = gps_raw.eph;
          m_fix.vdop = gps_raw.epv;
          m_fix.lat = gps_raw.lat;
          m_fix.lon = gps_raw.lon;
          m_fix.height = gps_raw.alt;
          m_fix.satellites = gps_raw.satellites_visible;

          m_fix.validity = 0;
          if(gps_raw.fix_type>1)
            m_fix.validity |= IMC::GpsFix::GFV_VALID_POS;

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
        }

        void
        handleMissionAckPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_ack_t miss_ack;

          mavlink_msg_mission_ack_decode(msg, &miss_ack);
          debug("Mission was received, result is %d", miss_ack.type);
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
          if((!strcmp("out of commands!", stat_tex.text)) && (m_current_wp == 3))
          {
            IMC::PathControlState path_cs;
            path_cs.flags |= PathControlState::FL_NEAR;
            dispatch(path_cs);
          }
          debug("Status: %s", stat_tex.text);
        }

        void
        handleHeartbeatPacket(const mavlink_message_t* msg)
        {
          mavlink_heartbeat_t hbt;

          mavlink_msg_heartbeat_decode(msg, &hbt);

          switch(hbt.custom_mode)
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
            case 15:
              trace("GUIDED");
              m_external = false;
              break;
          }
        }

        void
        handleNavControllerPacket(const mavlink_message_t* msg)
        {
          mavlink_nav_controller_output_t nav_out;
          mavlink_msg_nav_controller_output_decode(msg, &nav_out);
          debug("WP Dist: %d", nav_out.wp_dist);
        }

        void
        handleMissionItemPacket(const mavlink_message_t* msg)
        {
          mavlink_mission_item_t miss_item;
          mavlink_msg_mission_item_decode(msg, &miss_item);
          debug("Mission type: %d", miss_item.command);

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
        handleUDP(UDPSocket& sock)
        {
          uint8_t buf[512];
          int n = sock.read((char*)buf, sizeof(buf), &m_UDP_addr);

          if (n < 0)
          {
            err(DTR("receive error over UDP port"));
            return;
          }

          sendData(buf,n);
        }
      };
    }
  }
}

DUNE_TASK
