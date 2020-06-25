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

      Comm::TCPComm* m_TCP_comm;
      Comm::UDPComm* m_UDP_comm;
      uint8_t m_buf_send[1024];

      typedef std::map<int, Logger::Logger*> LoggerMap;
      LoggerMap m_loggers;

      //! Moving Home timer
      Time::Counter<float> m_timer;
      //! Start time for Watchdog send
      double m_start_time;

      bool m_error_missing;

      //! Pioneer command watchdog message
      ProtocolCommands::CmdVersion1Watchdog m_watchdog_msg;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_TCP_comm(NULL),
        m_UDP_comm(NULL),
        m_start_time(Time::Clock::getSinceEpoch()),
        m_error_missing(false)
      {
        param("Communications Timeout", m_args.comm_timeout)
        .minimumValue("1")
        .maximumValue("60")
        .defaultValue("10")
        .units(Units::Second)
        .description("Pioneer communications timeout");

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

        // Setup processing of IMC messages
        bind<IMC::EstimatedState>(this);
        bind<IMC::Heartbeat>(this);
        bind<IMC::LoggingControl>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(m_TCP_comm && (paramChanged(m_args.TCP_addr) || paramChanged(m_args.TCP_port)))
        {
          m_TCP_comm->setTCPAddr(m_args.TCP_addr);
          m_TCP_comm->setTCPPort(m_args.TCP_port);
          m_TCP_comm->reconnect();
        }

        if(m_UDP_comm && paramChanged(m_args.UDP_listen_port))
        {
          m_UDP_comm->setUDPPort(m_args.UDP_listen_port);
          m_UDP_comm->reconnect();
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
          m_TCP_comm->stopAndJoin();
          Memory::clear(m_TCP_comm);
        }
        if (m_UDP_comm != NULL)
        {
          m_UDP_comm->stopAndJoin();
          Memory::clear(m_UDP_comm);
        }

        for (auto const& elm : m_loggers)
        {
          try
          {
            if (elm.second->isRunning() || elm.second->isStarting()
                || elm.second->isStopping())
            {
              // err("JOIN");
              elm.second->stopAndJoin();
            }
            else
            {
              // err("STOP");
              elm.second->stop();
            }
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
        m_TCP_comm = new Comm::TCPComm(this, tcp_dataprocessor, set_entity_state, tcp_logger);
        m_UDP_comm = new Comm::UDPComm(this, udp_dataprocessor, set_entity_state, udp_logger, true);

        openConnectionTCP();
        openConnectionUDP();
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
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
          m_TCP_comm->disconnect();
          m_TCP_comm->setTCPAddr(m_args.TCP_addr);
          m_TCP_comm->setTCPPort(m_args.TCP_port);
          m_TCP_comm->connect();
          m_TCP_comm->start();

          inf(DTR("Pioneer TCP interface initialized"));
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
          war(DTR("Diconnection TCP failed"));
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
          war(DTR("Diconnection UDP failed"));
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
        }
      }

      void
      requestDroneInfo(void)
      {
      }

      //! This will parse the receiving Pionner messages
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

      //! This will parse the receiving Pionner messages
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

      //! To send Pioneer comands to the vehicle
      template <class MsgStruct>
      int
      sendCommand(MsgStruct* msg)
      {
        int sd = 0;
        int st;
        char *type_name = abi::__cxa_demangle(typeid(MsgStruct).name(), 0, 0, &st);
        try
        {
          int dataLength = ProtocolPack::Pack::pack(this, msg, m_buf_send);
          sd = m_TCP_comm->sendData(m_buf_send, dataLength);
          if (sd > 0)
          {
            debug("Send %d bytes for msg %s", sd, type_name);
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
        // TODO something with msg
      }

      void
      handlePioneerV2ReplyGetCamera(ProtocolCommands::ReplyVersion2GetCameraParameters msg)
      {
        // TODO something with msg
        debug("camera_bitrate %d", msg.camera_bitrate);
      }


      //! This will handle parsing Pionner V1 Telemetry message
      void
      handlePioneerV1Telemetry(ProtocolMessages::DataVersion1Telemetry msg)
      {
        // TODO something with msg
        debug("Voltage %u", msg.battery_voltage);
      }

      //! This will handle parsing Pionner V2 Telemetry message
      void
      handlePioneerV2Telemetry(ProtocolMessages::DataVersion2Telemetry msg)
      {
        // TODO something with msg
        debug("Depth = %d", msg.depth / 1000);

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
      }

      //! This will handle parsing Pionner V2 Compass Calibration message
      void
      handlePioneerV2CompassCalibration(ProtocolMessages::DataVersion2Compasscalibration msg)
      {
        // TODO something with msg
        debug("progress_thruster %u",msg.progress_thruster);
      }

      void
      consume(const IMC::EstimatedState* msg)
      { // To set the lat/lon on the Pioneer
        double latRad = msg->lat;
        double lonRad = msg->lon;
        WGS84::displace(msg->x, msg->y, &latRad, &lonRad);
        ProtocolCommands::CmdVersion1UserGeoLocation geo;
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

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          if (!m_error_missing)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          // Handle IMC messages from bus
          consumeMessages();

          Time::Delay::waitMsec(500);
        }
      }
    };
  }
}

DUNE_TASK
