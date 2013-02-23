//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Joel Cardoso                                                     *
// Author: Eduardo Marques                                                  *
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Task.cpp 12976 2013-02-20 19:58:05Z jfortuna                     $:*
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
        bool ext_tracker;
        //! Use Piccolo simulator
        bool piccolo_sim;
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



        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx),
          m_uart(NULL),
          ref_lat(0.0),
          ref_lon(0.0),
          ref_hei(0.0),
          m_acc_x(0.0),
          m_acc_y(0.0),
          m_acc_z(0.0)
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

          param("Ardupilot Tracker", m_args.ext_tracker)
          .defaultValue("false")
          .description("Use Ardupilot's waypoint tracker");

          param("Piccolo Simulator", m_args.piccolo_sim)
          .defaultValue("false")
          .description("Use Piccolo simulator");

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
          m_mlh[MAVLINK_MSG_ID_SERVO_OUTPUT_RAW] = &Task::handleRawServoPacket;

          // Setup processing of IMC messages
          bind<DesiredPath>(this);
          bind<DesiredRoll>(this);
          bind<DesiredSpeed>(this);
          bind<SetServoPosition>(this);
          bind<SimulatedState>(this);
          bind<Acceleration>(this);

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

          if(!m_args.tcp)
          {
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
            send(buf, n);
          }

          spew(DTR("Simulation packet sent to Ardupilot"));
        }

        void
        consume(const IMC::DesiredSpeed* speed)
        {
          sendCommandPacket(MAV_CMD_DO_CHANGE_SPEED,
                            0, // (0=Airspeed, 1=Ground Speed)
                            speed->value, // (m/s, -1 indicates no change)
                            -1); // Throttle ( Percent, -1 indicates no change)
          debug(DTR("ChangeSpeed packet sent to Ardupilot"));
        }

        void
        consume(const IMC::DesiredRoll* roll)
        {
          uint8_t buf[512];

          mavlink_message_t* msg = new mavlink_message_t;
          mavlink_msg_set_roll_pitch_yaw_thrust_pack(255, 0, msg, 1, 1, (float)roll->value, 4.0, 4.0, 0); // 8.0 radians is more than 2pi (is ignored by ardupilot)
          uint16_t n = mavlink_msg_to_send_buffer(buf, msg);
          send(buf, n);
          debug(DTR("DesiredRoll packet sent to Ardupilot"));
        }

        void
        consume(const IMC::DesiredPath* path)
        {
          if(!m_args.ext_tracker)
            return;

          sendCommandPacket(MAV_CMD_NAV_WAYPOINT,
              0, // Hold time in decimal seconds. (ignored by fixed wing, time to stay at MISSION for rotary wing)
              -path->end_z, // Acceptance radius in meters (if the sphere with this radius is hit, the MISSION counts as reached)
              path->end_lat, // 0 to pass through the WP, if > 0 radius in meters to pass by WP. Positive value for clockwise orbit, negative value for counter-clockwise orbit.
              path->end_lon); // Desired yaw angle at MISSION (rotary wing)
          debug(DTR("WaypointNavigation packet sent to Ardupilot"));
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

          mavlink_msg_command_long_pack(0, 0, &msg, 0, 0, cmd, 0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

          uint16_t n = mavlink_msg_to_send_buffer(buf, &msg);
          send(buf, n);
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
        send(uint8_t* bfr, int size)
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
        receive(uint8_t* buf)
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
            int n = receive(m_buf);

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
                  case 0:
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
                    //                  case MAVLINK_MSG_ID_SERVO_OUTPUT_RAW:
                    //                    trace("SERVO_OUTPUT_RAW");
                    //                    break;
                  case 42:
                    trace("WAYPOINT_CURRENT");
                    break;
                  case 62:
                    trace("NAV_CONTROLLER_OUTPUT");
                    break;
                  case 74:
                    trace("VFR_HUD");
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
                  case 253:
                    trace("STATUSTEXT");
                    break;
                }

                PktHandler h = m_mlh[msg.msgid];

                if (!h)
                  continue;  // Ignore this packet (no handler for it)

                // Call handler
                (this->*h)(&msg);

                m_last_pkt_time = now;

                if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
                  setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
        handleRawServoPacket(const mavlink_message_t* msg)
        {
          mavlink_servo_output_raw_t servo_raw;
          mavlink_msg_servo_output_raw_decode(msg, &servo_raw);

          inf("Decoded SERVO_OUTPUT_RAW");

          m_servo.id = 1;
          m_servo.value = servo_raw.servo1_raw;
          dispatch(m_servo);

          m_servo.id = 2;
          m_servo.value = servo_raw.servo2_raw;
          dispatch(m_servo);

          m_servo.id = 3;
          m_servo.value = servo_raw.servo3_raw;
          dispatch(m_servo);

          m_servo.id = 4;
          m_servo.value = servo_raw.servo4_raw;
          dispatch(m_servo);
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

          send(buf,n);
        }
      };
    }
  }
}

DUNE_TASK
