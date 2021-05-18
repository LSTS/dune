//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Paulo Dias                                                       *
//***************************************************************************

#include <cxxabi.h>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Pioneer headers.
#include "Comm.hpp"
#include "Logger.hpp"
#include "ProtocolCommands.hpp"
#include "ProtocolMessages.hpp"
#include "ProtocolPack.hpp"

// requests.get(f"http://{self._ip}/diagnostics/drone_info", timeout=3).json()
// expects:
//   self.software_version = response["sw_version"]
//   self.software_version_short = self.software_version.split("-")[0]
//   self.serial_number = response["serial_number"]
//    self.uuid = response["hardware_id"]
//
// __init__(self, ip="192.168.1.101", tcpPort=2011, autoConnect=True, slaveModeEnabled=False):
// def __init__(self, port=2010, protocol_description=None):
//
namespace Control
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Paulo Dias
  namespace Pioneer
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Communications timeout
      uint8_t comm_timeout;
      //! Listen mode only
      bool listen_mode;
      //! Filter out Telemetry not matching TCP Address
      bool filter_udp_to_tcp_address;
      //! Generate EstimatedState from telemetry
      bool generate_estimate_state_from_telemetry;
      //! TCP Port for commands and replies
      uint16_t TCP_port;
      //! TCP Address
      Address TCP_addr;
      //! Use UDP Port for telemetry
      uint16_t UDP_listen_port;
      //! Log or not Pioneer raw messages
      bool log_pioneer_raw;
      //! Log raw Pioneer data as IMC DevDataBinary
      bool log_pioneer_imc;
      //! Set time in Pioneer
      bool set_time_of_vehicle;
      //! Initial position (degrees)
      std::vector<double> position;
      //! Depth Hold
      bool depth_hold;
      //! Heading Hold
      bool heading_hold;
      //! Send Motion Command
      std::vector<float> motion_input;
      //! Ping Replay timeout in seconds.
      float ping_tout;
      //! Run routine
      std::string routine;
    };

    enum LoggerEnum
    {
      LOGGER_TELEMETRY,
      LOGGER_COMMANDS,
      LOGGER_REPLIES,
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Initial position.
      IMC::GpsFix m_position;
      //! Last motor actuation.
      IMC::SetThrusterActuation m_last_act[4];
      //! Motion input command.
      float m_motion[4];

      Comm::TCPComm* m_TCP_comm;
      Comm::UDPComm* m_UDP_comm;
      uint8_t m_buf_send[1024];

      typedef std::map<int, Logger::Logger*> LoggerMap;
      LoggerMap m_loggers;

      //! Ping reply watchdog.
      Time::Counter<float> m_wdog;

      //! Moving Home timer
      Time::Counter<float> m_timer;
      //! Start time for Watchdog send
      double m_start_time;

      bool m_error_missing;
      //! Control how often set time
      double m_last_set_time;

      //! Pioneer command watchdog message
      ProtocolCommands::CmdVersion2Watchdog m_watchdog_msg;
      //! Pioneer command ping message
      ProtocolCommands::CmdVersion2Ping m_ping_msg;
      //! Pioneer command depth hold ON message;
      ProtocolCommands::CmdVersion2AutoDepthOn m_depth_on;
      //! Pioneer command depth hold OFF message;
      ProtocolCommands::CmdVersion2AutoDepthOff m_depth_off;
      //! Pioneer command heading hold ON message;
      ProtocolCommands::CmdVersion2AutoHeadingOn m_heading_on;
      //! Pioneer command heading hold OFF message;
      ProtocolCommands::CmdVersion2AutoHeadingOff m_heading_off;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_TCP_comm(NULL),
        m_UDP_comm(NULL),
        m_start_time(Time::Clock::getSinceEpoch()),
        m_error_missing(false),
        m_last_set_time(0.0)
      {
        param("Communications Timeout", m_args.comm_timeout)
        .minimumValue("1")
        .maximumValue("60")
        .defaultValue("10")
        .units(Units::Second)
        .description("Pioneer communications timeout");

        param("Listen Mode", m_args.listen_mode)
        .defaultValue("false")
        .description("To not send any commands, just listen UDP data");

        param("Filter Out UDP not from Address for TCP", m_args.filter_udp_to_tcp_address)
        .defaultValue("false")
        .description("Filter out Telemetry not matching TCP Address");

        param("Generate EstimatedState from Telemetry", m_args.generate_estimate_state_from_telemetry)
        .defaultValue("false")
        .description("Generate EstmatedState from telemetry");

        param("TCP - Port", m_args.TCP_port)
        .defaultValue("2011")
        .description("Port for connection to Pioneer");

        param("TCP - Address", m_args.TCP_addr)
        .defaultValue("127.0.0.1")
        .description("Address for connection to Pioneer");

        param("UDP - Listen Port", m_args.UDP_listen_port)
        .defaultValue("2010")
        .description("Port for connection from Pioneer");

        param("Log Pioneer Raw Messages", m_args.log_pioneer_raw)
        .defaultValue("true")
        .description("Log Pioneer raw messages to file");

        param("Log Pioneer Raw Messages as IMC", m_args.log_pioneer_imc)
        .defaultValue("false")
        .description("Log Pioneer raw messages as IMC DevDataBinary");

        param("Set Time of Vehicle", m_args.set_time_of_vehicle)
        .defaultValue("true")
        .description("Set time of vehicle");

        param("Initial Position", m_args.position)
        .units(Units::Degree)
        .size(2)
        .description("Initial position of the vehicle");

        param("Depth Hold", m_args.depth_hold)
        .defaultValue("false")
        .description("Enable/Disable depth hold mode.");

        param("Heading Hold", m_args.heading_hold)
        .defaultValue("false")
        .description("Enable/Disable heading hold mode.");

        param("Send Motion Command", m_args.motion_input)
        .size(4)
        .defaultValue("0.0, 0.0, 0.0, 0.0")
        .description("Send motion input V2 command to Pioneer [surge, sway, heave, yaw]");

        param("Ping Replay Timeout", m_args.ping_tout)
        .units(Units::Second)
        .defaultValue("5.0")
        .minimumValue("0.0")
        .description("Ping reply timeout. Use value 0.0 (any value less or equal than 1.0 will have the same effect) to ignore timeout");

        param("Run Routine", m_args.routine)
        .values("Right, Left, Down, Up, None")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_MANEUVER)
        .defaultValue("None")
        .description("Run pre-programmed routine");

        // Setup processing of IMC messages
        bind<IMC::Abort>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::LoggingControl>(this);
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::StopManeuver>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(m_TCP_comm && (paramChanged(m_args.TCP_addr) || paramChanged(m_args.TCP_port)
          || paramChanged(m_args.listen_mode)))
        {
          m_TCP_comm->setTCPAddr(m_args.TCP_addr);
          m_TCP_comm->setTCPPort(m_args.TCP_port);
          m_args.listen_mode ? m_TCP_comm->disconnect() : m_TCP_comm->reconnect();
        }

        if (paramChanged(m_args.ping_tout))
        {
          m_wdog.setTop(m_args.ping_tout);
          m_wdog.reset();
        }

        if(paramChanged(m_args.listen_mode))
        {
          m_wdog.reset();
        }

        if(m_UDP_comm && paramChanged(m_args.UDP_listen_port))
        {
          m_UDP_comm->setUDPPort(m_args.UDP_listen_port);
          m_UDP_comm->reconnect();
        }

        if(paramChanged(m_args.position))
          sendGpsFix();

        m_args.depth_hold ? sendCommand(&m_depth_on) : sendCommand(&m_depth_off);

        m_args.heading_hold ? sendCommand(&m_heading_on) : sendCommand(&m_heading_off);

        if(m_TCP_comm && paramChanged(m_args.motion_input))
        {
          ProtocolCommands::CmdVersion2MotionInput cmd;
          cmd.surge_motion_input = m_args.motion_input[0];
          cmd.sway_motion_input = m_args.motion_input[1];
          cmd.heave_motion_input = m_args.motion_input[2];
          cmd.yaw_motion_input = m_args.motion_input[3];
          sendCommand(&cmd);
          debug("(!) Sent Motion Input Cmd: surge = %f | sway = %f | heave = %f | yaw = %f",
                cmd.surge_motion_input, cmd.sway_motion_input, cmd.heave_motion_input, cmd.yaw_motion_input);
        }

        if(m_TCP_comm && paramChanged(m_args.routine))
        {
          ProtocolCommands::CmdVersion2MotionInput cmd;
          if(m_args.routine == "Right")
            cmd.sway_motion_input = 0.5;
          else if(m_args.routine == "Left")
            cmd.sway_motion_input = -0.5;
          else if(m_args.routine == "Down")
            cmd.heave_motion_input = 0.3;
          else if(m_args.routine == "Up")
            cmd.heave_motion_input = -0.3;
          sendCommand(&cmd);
        }
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

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_TCP_comm != NULL)
        {
          m_TCP_comm->stop();
          try { m_TCP_comm->join(); } catch(...) {}
          Memory::clear(m_TCP_comm);
        }
        if (m_UDP_comm != NULL)
        {
          try
          {
            m_UDP_comm->stop();
            try { m_UDP_comm->join(); } catch(...) {}
          }
          catch(const std::exception& e)
          {
            err("%s", e.what());
          }
          Memory::clear(m_UDP_comm);
        }

        for (auto const& elm : m_loggers)
        {
          try
          {
            elm.second->stop();
            try { elm.second->join(); } catch(...) {}
          }
          catch(const std::exception& e)
          {
            err("%s", e.what());
          }
          delete elm.second;
        }
        m_loggers.clear();
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        // Initialize loggers
        m_loggers[LOGGER_TELEMETRY] = new Logger::Logger(this, "PioneerTelemetry");
        m_loggers[LOGGER_COMMANDS] = new Logger::Logger(this, "PioneerCommands");
        m_loggers[LOGGER_REPLIES] = new Logger::Logger(this, "PioneerReplies");

        // Initialize comms
        auto tcp_dataprocessor = [this](uint8_t buf[], int startIndex, int length) -> int
          {
            return this->pioneerCommandRepliesParse(buf, startIndex, length);
            // return this->pioneerMessagesParse(buf, startIndex, length);
          };
        auto udp_dataprocessor = [this](uint8_t buf[], int startIndex, int length) -> int
          {
            return this->pioneerMessagesParse(buf, startIndex, length);
          };
        auto tcp_logger = [this](uint8_t buf[], int startIndex, int length) -> void
          {
            return this->m_loggers[LOGGER_REPLIES]->write(buf, startIndex, length);
          };
        auto udp_logger = [this](uint8_t buf[], int startIndex, int length) -> void
          {
            return this->m_loggers[LOGGER_TELEMETRY]->write(buf, startIndex, length);
          };
        auto set_entity_state = [this](IMC::EntityState::StateEnum state, Status::Code code) -> void
          {
            this->warnEntityState(state, code);
          };
        auto udp_package_acceptance = [this](Network::Address* address, uint16_t port) -> bool
          {
            return !m_args.filter_udp_to_tcp_address || m_args.TCP_addr == *address ? true : false;
          };
        m_TCP_comm = new Comm::TCPComm(this, tcp_dataprocessor, set_entity_state, tcp_logger);
        m_UDP_comm = new Comm::UDPComm(this, udp_dataprocessor, set_entity_state, udp_logger,
            udp_package_acceptance, true);

        openConnectionTCP();
        openConnectionUDP();
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        sendGpsFix();

        // Setup ping reply
        m_wdog.setTop(m_args.ping_tout);

        for(int i=0; i<3; i++)
        {
          m_motion[i] = 0;
          m_last_act[i].value = 0;
        }
      }

      void
      warnEntityState(IMC::EntityState::StateEnum state, Status::Code code)
      {
        setEntityState(state, code);
      }

      void
      openConnectionTCP(void)
      {
        try
        {
          m_TCP_comm->stop();
          if (!m_args.listen_mode)
          {
            m_TCP_comm->disconnect();
            m_TCP_comm->setTCPAddr(m_args.TCP_addr);
            m_TCP_comm->setTCPPort(m_args.TCP_port);
            m_TCP_comm->connect();
            m_TCP_comm->start();

            inf(DTR("Pioneer TCP interface initialized"));
          }
        }
        catch (...)
        {
          closeConnectionTCP();
          war(DTR("Connection TCP failed, retrying..."));
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
        }
      }

      void
      closeConnectionTCP(void)
      {
        try
        {
          if (m_TCP_comm)
          {
            m_TCP_comm->disconnect();
          }

          inf(DTR("Pioneer TCP interface disconnected"));
        }
        catch (...)
        {
          war(DTR("Disconnection TCP failed"));
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
        }
      }

      void
      openConnectionUDP(void)
      {
        try
        {
          m_UDP_comm->stop();
          m_UDP_comm->disconnect();
          m_UDP_comm->setUDPPort(m_args.UDP_listen_port);
          m_UDP_comm->connect();
          m_UDP_comm->start();

          inf(DTR("Pioneer UDP interface initialized"));
        }
        catch (...)
        {
          closeConnectionUDP();
          war(DTR("Connection UDP failed, retrying..."));
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
        }
      }

      void
      closeConnectionUDP(void)
      {
        try
        {
          if (m_UDP_comm)
          {
            m_UDP_comm->disconnect();
          }

          inf(DTR("Pioneer UDP interface disconnected"));
        }
        catch (...)
        {
          war(DTR("Disconnection UDP failed"));
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
        }
      }

      bool
      hasSomeError()
      {
        return m_error_missing && m_TCP_comm->hasSomeError() &&
               m_UDP_comm->hasSomeError();
      }

      void
      requestDroneInfo(void)
      {
      }

      void
      setPioneerTime(ProtocolMessages::DataVersion1Telemetry *msg)
      {
        setPioneerTime(msg->time);
      }

      void
      setPioneerTime(ProtocolMessages::DataVersion2Telemetry *msg)
      {
        setPioneerTime(msg->time);
      }

      //! Set Pioneer time
      void
      setPioneerTime(uint32_t timeFromVehicleMsec)
      {
        if (!m_args.set_time_of_vehicle || m_args.listen_mode
            || Time::Clock::getSinceEpoch() - m_last_set_time < 5.0)
          return;

        double time_sec = Time::Clock::getSinceEpoch();
        if (std::abs(time_sec * 1E3 - timeFromVehicleMsec) > 1100)
        {
          ProtocolCommands::CmdVersion2SetSystemTime set_system_time;
          set_system_time.unix_timestamp = (int32_t)Time::Clock::getSinceEpoch();
          inf(DTR("Setting time for vehicle"));
          if (sendCommand(&set_system_time) > 0)
            m_last_set_time = Time::Clock::getSinceEpoch();
        }
      }

      //! This will parse the receiving Pioneer messages
      int
      pioneerMessagesParse(uint8_t buf[], int startIndex, int length)
      {
        int rb = 0;
        try
        {
          switch ((buf[startIndex] << 8) + buf[startIndex + 1])
          {
          case ProtocolMessages::PIONEER_MSG_VERSION_1_TELEMETRY_CODE:
            ProtocolMessages::DataVersion1Telemetry* msgV1Telm;
            msgV1Telm = new ProtocolMessages::DataVersion1Telemetry();
            rb = ProtocolPack::Pack::unpack<ProtocolMessages::DataVersion1Telemetry>(
                this, buf, startIndex, length, msgV1Telm);
            if (rb > 0)
            {
              setPioneerTime(msgV1Telm);
              // Store received data.
              dispatchAsDevDataBinary(&buf[startIndex], rb);
              handlePioneerV1Telemetry(*msgV1Telm);
            }
            Memory::clear(msgV1Telm);
            break;
          case ProtocolMessages::PIONEER_MSG_VERSION_2_TELEMETRY_CODE:
            ProtocolMessages::DataVersion2Telemetry* msgV2Telm;
            msgV2Telm = new ProtocolMessages::DataVersion2Telemetry();
            rb = ProtocolPack::Pack::unpack<ProtocolMessages::DataVersion2Telemetry>(
                this, buf, startIndex, length, msgV2Telm);
            if (rb > 0)
            {
              setPioneerTime(msgV2Telm);
              // Store received data.
              dispatchAsDevDataBinary(&buf[startIndex], rb);
              handlePioneerV2Telemetry(*msgV2Telm);
            }
            Memory::clear(msgV2Telm);
            break;
          case ProtocolMessages::PIONEER_MSG_VERSION_2_COMPASS_CALIBRATION_CODE:
            ProtocolMessages::DataVersion2Compasscalibration* msgV2CompassCal;
            msgV2CompassCal = new ProtocolMessages::DataVersion2Compasscalibration();
            rb = ProtocolPack::Pack::unpack<ProtocolMessages::DataVersion2Compasscalibration>(
                this, buf, startIndex, length, msgV2CompassCal);
            if (rb > 0)
            {
              // Store received data.
              dispatchAsDevDataBinary(&buf[startIndex], rb);
              handlePioneerV2CompassCalibration(*msgV2CompassCal);
            }
            Memory::clear(msgV2CompassCal);
            break;
          case ProtocolMessages::PIONEER_MSG_VERSION_2_CUSTOM_IMU_CODE:
            ProtocolMessages::DataVersion2CustomImu* msgV2CustomImu;
            msgV2CustomImu = new ProtocolMessages::DataVersion2CustomImu();
            rb = ProtocolPack::Pack::unpack<ProtocolMessages::DataVersion2CustomImu>(
                this, buf, startIndex, length, msgV2CustomImu);
            if (rb > 0)
            {
              // Store received data.
              dispatchAsDevDataBinary(&buf[startIndex], rb);
              handlePioneerV2CustomImu(*msgV2CustomImu);
            }
            Memory::clear(msgV2CustomImu);
            break;
          default:
            // war("skip msg");
            break;
          }

          return rb;
        }
        catch(const std::exception& e)
        {
          err("%s", e.what());
          return 0;
        }
      }

      //! This will parse the receiving Pioneer messages
      int
      pioneerCommandRepliesParse(uint8_t buf[], int startIndex, int length)
      {
        int rb = 0;
        try
        {
          switch (buf[startIndex])
          {
          //case ProtocolCommands::PIONEER_REPLY_VERSION_1_ACK:
          case ProtocolCommands::PIONEER_REPLY_VERSION_2_ACK:
            ProtocolCommands::ReplyVersion2Ack* msgAck;
            msgAck = new ProtocolCommands::ReplyVersion2Ack();
            rb = ProtocolPack::Pack::unpack<ProtocolCommands::ReplyVersion2Ack>(
                this, buf, startIndex, length, msgAck);
            if (rb > 0)
            {
              // Store received data.
              dispatchAsDevDataBinary(&buf[startIndex], rb);
              handlePioneerV2ReplyAck(*msgAck);
            }
            Memory::clear(msgAck);
            break;
          //case ProtocolCommands::PIONEER_REPLY_VERSION_1_PING:
          case ProtocolCommands::PIONEER_REPLY_VERSION_2_PING:
            ProtocolCommands::ReplyVersion2Ping* msgPing;
            msgPing = new ProtocolCommands::ReplyVersion2Ping();
            rb = ProtocolPack::Pack::unpack<ProtocolCommands::ReplyVersion2Ping>(
                this, buf, startIndex, length, msgPing);
            if (rb > 0)
            {
              // Store received data.
              dispatchAsDevDataBinary(&buf[startIndex], rb);
              handlePioneerV2ReplyPing(*msgPing);
            }
            Memory::clear(msgPing);
            break;
          //case ProtocolCommands::PIONEER_REPLY_VERSION_1_GET_CAMERA:
          case ProtocolCommands::PIONEER_REPLY_VERSION_2_GET_CAMERA:
            ProtocolCommands::ReplyVersion2GetCameraParameters* msgGetCamParams;
            msgGetCamParams = new ProtocolCommands::ReplyVersion2GetCameraParameters();
            // For now is just one msg
            rb = ProtocolPack::Pack::unpack<ProtocolCommands::ReplyVersion2GetCameraParameters>(
                this, buf, startIndex, length, msgGetCamParams);
            if (rb > 0)
            {
              // Store received data.
              dispatchAsDevDataBinary(&buf[startIndex], rb);
              handlePioneerV2ReplyGetCamera(*msgGetCamParams);
            }
            Memory::clear(msgGetCamParams);
            break;
          default:
            // war("skip msg");
            break;
          }

          m_wdog.reset();
          return rb;
        }
        catch(const std::exception& e)
        {
          err("%s", e.what());
          return 0;
        }
      }

      void
      dispatchAsDevDataBinary(uint8_t* buf, uint16_t length)
      {
        if (!m_args.log_pioneer_imc)
          return;
        IMC::DevDataBinary data;
        data.value.assign((const uint8_t*)buf,
                          (const uint8_t*)buf + length);
        dispatch(data);
      }

      //! To send Pioneer commands to the vehicle
      template <class MsgStruct>
      int
      sendCommand(MsgStruct* msg)
      {
        if (m_args.listen_mode || !m_TCP_comm || !m_TCP_comm->isConnected())
          return 0;

        int sd = 0;
        int st;
        char *type_name = abi::__cxa_demangle(typeid(MsgStruct).name(), 0, 0, &st);
        try
        {
          int dataLength = ProtocolPack::Pack::pack(this, msg, m_buf_send);
          sd = m_TCP_comm->sendData(m_buf_send, dataLength);
          if (sd > 0)
          {
            spew("Send %d bytes for msg %s", sd, type_name);
            m_loggers[LOGGER_COMMANDS]->write(m_buf_send, 0, dataLength);
            // Store sent command.
            dispatchAsDevDataBinary(m_buf_send, dataLength);
          }
        }
        catch(const std::exception& e)
        {
          err("%s", e.what());
        }
        free(type_name);
        return sd;
      }

      void
      handlePioneerV2ReplyAck(ProtocolCommands::ReplyVersion2Ack msg)
      {
        // TODO something with msg
      }

      void
      handlePioneerV2ReplyPing(ProtocolCommands::ReplyVersion2Ping msg)
      {
        m_wdog.reset();
      }

      void
      handlePioneerV2ReplyGetCamera(ProtocolCommands::ReplyVersion2GetCameraParameters msg)
      {
        // TODO something with msg
        trace("camera_bitrate %d", msg.camera_bitrate);
      }


      //! This will handle parsing Pioneer V1 Telemetry message
      void
      handlePioneerV1Telemetry(ProtocolMessages::DataVersion1Telemetry msg)
      {
        // TODO something with msg
        debug("Voltage %u", msg.battery_voltage);
      }

      //! This will handle parsing Pioneer V2 Telemetry message
      void
      handlePioneerV2Telemetry(ProtocolMessages::DataVersion2Telemetry msg)
      {
        // TODO something with msg
        inf("Battery = %d min", msg.battery_run_time_to_empty);

        // TEMPORARY - ACTUATION TESTING
        war("Surge = %f (ref) | %f (control)", msg.reference_surge, msg.control_force_surge);
        war("Sway = %f (ref) | %f (control)", msg.reference_sway, msg.control_force_sway);
        war("Heave = %f (ref) | %f (control)", msg.reference_heave, msg.control_force_heave);
        war("Yaw = %f (ref) | %f (control)", msg.reference_yaw, msg.control_force_yaw);
        inf("Ref Heading = %f | Ref Depth = %d", msg.reference_heading, msg.reference_depth);

        // Dispatching messages to bus
        IMC::Depth depth;
        depth.value = (fp32_t) msg.depth / 1000;
        dispatch(depth);

        IMC::EulerAngles euler;
        euler.time = (fp64_t) msg.rt_clock; // device time (s)
        euler.phi = Angles::radians((fp64_t) msg.roll);
        euler.theta = Angles::radians((fp64_t) msg.pitch);
        euler.psi = Angles::radians((fp64_t) msg.yaw);
        euler.psi_magnetic = Angles::radians((fp64_t) msg.yaw); //TBC if magnetic heading is not available
        dispatch(euler);

        IMC::Temperature temp;
        temp.value = (fp64_t) msg.temp_water / 10; // 0.1 ºC
        dispatch(temp);

        IMC::DesiredControl dcontrol;
        dcontrol.x = msg.control_force_surge;
        dcontrol.y = msg.control_force_sway;
        dcontrol.z = msg.control_force_heave;
        dcontrol.n = msg.control_force_yaw;
        dcontrol.flags = IMC::DesiredControl::FL_X | IMC::DesiredControl::FL_Y |
                         IMC::DesiredControl::FL_Z | IMC::DesiredControl::FL_N;
        dispatch(dcontrol);

        if (m_args.generate_estimate_state_from_telemetry)
        {
          IMC::EstimatedState estate;
          estate.lat = Angles::radians(41.18478174);
          estate.lon = Angles::radians(-8.70657964);
          estate.phi = Angles::radians((fp64_t) msg.roll);
          estate.theta = Angles::radians((fp64_t) msg.pitch);
          estate.psi = Angles::radians((fp64_t) msg.yaw);
          estate.depth = (fp64_t) msg.depth / 1000;
          dispatch(estate);
        }
      }

      //! This will handle parsing Pioneer V2 Compass Calibration message
      void
      handlePioneerV2CompassCalibration(ProtocolMessages::DataVersion2Compasscalibration msg)
      {
        // TODO something with msg
        trace("progress_thruster %u",msg.progress_thruster);
      }

      //! This will handle parsing Pioneer V2 Custom IMU message
      void
      handlePioneerV2CustomImu(ProtocolMessages::DataVersion2CustomImu msg)
      {
        // TODO something with msg
        if(msg.id != 1)
          return;

        // Dispatching IMU data to IMC bus
        IMC::AngularVelocity angvel;
        angvel.time = (fp64_t) msg.rt_clock; // device time
        angvel.x = msg.gyro_x; // rad/s
        angvel.y = msg.gyro_y; // rad/s
        angvel.z = msg.gyro_z; // rad/s
        dispatch(angvel);

        IMC::Acceleration accel;
        accel.time = (fp64_t) msg.rt_clock;
        accel.x = msg.accelerometer_x * Math::c_gravity; // convert from G to m/s^2
        accel.y = msg.accelerometer_y * Math::c_gravity; // convert from G to m/s^2
        accel.z = msg.accelerometer_z * Math::c_gravity; // convert from G to m/s^2
        dispatch(accel);

        IMC::MagneticField mag;
        mag.time = (fp64_t) msg.rt_clock;
        mag.x = msg.compass_x * 0.000001; // convert to G
        mag.y = msg.compass_y * 0.000001; // convert to G
        mag.z = msg.compass_z * 0.000001; // convert to G
        dispatch(mag);
      }

      void
      consume(const IMC::Abort* msg)
      {
        (void)msg;
        ProtocolCommands::CmdVersion2MotionInput cmd;

        if(!m_args.listen_mode)
        {
          sendCommand(&cmd);
          sendCommand(&m_depth_off);
          sendCommand(&m_heading_off);
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        // To set the lat/lon on the Pioneer
        if (m_args.generate_estimate_state_from_telemetry)
          return;

        double latRad = msg->lat;
        double lonRad = msg->lon;
        WGS84::displace(msg->x, msg->y, &latRad, &lonRad);
        ProtocolCommands::CmdVersion2UserGeoLocation geo;
        geo.latitude = Angles::degrees(Angles::normalizeRadian(latRad));
        geo.longitude = Angles::degrees(Angles::normalizeRadian(lonRad));
        sendCommand(&geo);
      }

      void
      consume(const IMC::Heartbeat* msg)
      { // Using own Heartbeat to send watchdog message
        if (m_TCP_comm->isConnected() && msg->getSource() == getSystemId())
        {
          m_watchdog_msg.connection_duration = (int16_t) (Time::Clock::getSinceEpoch() - m_start_time);
          sendCommand(&m_watchdog_msg);
          // sending ping
          sendCommand(&m_ping_msg);
        }
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
            try
            {
              if (m_args.log_pioneer_raw)
              {
                Path folder = m_ctx.dir_log / msg->name;
                for (auto const& elm : m_loggers)
                {
                  (elm.second->start(folder.c_str()));
                }
              }
            }
            catch (std::exception& e)
            {
              err("%s", e.what());
            }
            break;
          case IMC::LoggingControl::COP_STOPPED:
            for (auto const& elm : m_loggers)
            {
              (elm.second->stop());
            }
            break;
        }
      }

      void
      consume(const IMC::StopManeuver* msg)
      {
        (void)msg;
        ProtocolCommands::CmdVersion2MotionInput cmd;
        sendCommand(&cmd);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if(m_args.routine != "None")
          return;

        ProtocolCommands::CmdVersion2MotionInput cmd;
        cmd.boost_input = 0;
        cmd.slow_input = 0;
        cmd.surge_motion_input = m_motion[0];
        cmd.sway_motion_input = m_motion[1];
        cmd.heave_motion_input = m_motion[2];
        cmd.yaw_motion_input = m_motion[3];

        // Send actuation commands to pioneer
        switch(msg->id)
        {
          case 0:
            if(msg->value == m_last_act[1].value)
            {
              cmd.surge_motion_input = msg->value;
              cmd.yaw_motion_input = 0;
            }
            else if(msg->value == (-1)*m_last_act[1].value)
            {
              cmd.yaw_motion_input = msg->value;
              cmd.surge_motion_input = 0;
            }
            else
            {
              if(std::fabs(msg->value) > std::fabs(m_last_act[1].value))
              {
                cmd.surge_motion_input = msg->value;
                cmd.yaw_motion_input = 1 - m_last_act[1].value;
              }
              else
              {
                cmd.surge_motion_input = m_last_act[1].value;
                cmd.yaw_motion_input = (-1)-msg->value;
              }
            }
            m_motion[0] = cmd.surge_motion_input;
            m_motion[3] = cmd.yaw_motion_input;
            trace("Received SetThrusterActuation for motor 0");
            break;
          case 1:
            if(msg->value == m_last_act[0].value)
            {
              cmd.surge_motion_input = msg->value;
              cmd.yaw_motion_input = 0;
            }
            else if(msg->value == (-1)*m_last_act[0].value)
            {
              cmd.yaw_motion_input = (-1)*msg->value;
              cmd.surge_motion_input = 0;
            }
            else
            {
              if (std::fabs(msg->value) > std::fabs(m_last_act[0].value))
              {
                cmd.surge_motion_input = msg->value;
                cmd.yaw_motion_input = 1 - m_last_act[0].value;
              }
              else
              {
                cmd.surge_motion_input = m_last_act[0].value;
                cmd.yaw_motion_input = (-1) - msg->value;
              }
            }
            m_motion[0] = cmd.surge_motion_input;
            m_motion[3] = cmd.yaw_motion_input;
            trace("Received SetThrusterActuation for motor 1");
            break;
          case 2:
            cmd.sway_motion_input = msg->value;
            sendCommand(&cmd);
            debug("(!) Sent Motion Input Cmd: surge = %f | sway = %f | heave = %f | yaw = %f",
                  cmd.surge_motion_input, cmd.sway_motion_input, cmd.heave_motion_input, cmd.yaw_motion_input);
            m_motion[1] = cmd.sway_motion_input;
            trace("Received SetThrusterActuation for motor 2");
            break;
          case 3:
            cmd.heave_motion_input = msg->value;
            m_motion[2] = cmd.heave_motion_input;
            trace("Received SetThrusterActuation for motor 3");
            break;
          default:
            war("Motor ID on SetThrusterActuation msg doesn't match!");
            break;
        }

        m_last_act[msg->id].value = msg->value;
        m_last_act[msg->id].id = msg->id;
        debug("m_last_act = %f, %f, %f, %f", m_last_act[0].value, m_last_act[1].value,
                                                    m_last_act[2].value, m_last_act[3].value);
      }

      //! Sends GpsFix defined in configurations
      void
      sendGpsFix(void)
      {
        m_position.lat = Math::Angles::radians(m_args.position[0]);
        m_position.lon = Math::Angles::radians(m_args.position[1]);
        m_position.type = IMC::GpsFix::GFT_STANDALONE;
        m_position.validity = 0xffff;
        dispatch(m_position);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (!hasSomeError())
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          // Handle IMC messages from bus
          consumeMessages();

          if (m_wdog.overflow() && m_args.ping_tout > 1.0)
          {
            if (!m_args.listen_mode) {
              if (!m_error_missing)
                setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_COM_ERROR);
              m_error_missing = true;
              if (m_TCP_comm)
                m_TCP_comm->reconnect();
              m_error_missing = false;
            }
          }

          Time::Delay::waitMsec(500);
        }
      }
    };
  }
}

DUNE_TASK
