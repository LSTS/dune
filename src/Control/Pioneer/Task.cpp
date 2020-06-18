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

#include <functional>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Pioneer headers.
#include "PioneerAppProtocolMessages.hpp"
#include "PioneerAppProtocolCommands.hpp"
#include "PioneerAppProtocolPack.hpp"
#include "PioneerComm.hpp"

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
      //! UDP Port
      uint16_t UDP_port;
      //! UDP Address
      Address UDP_addr;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;

      PioneerComm::TCPComm* m_TCP_comm;
      PioneerComm::UDPComm* m_UDP_comm;
      uint8_t m_buf_send[1024];

      //! Moving Home timer
      Time::Counter<float> m_timer;

      bool m_error_missing;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_TCP_comm(NULL),
        m_UDP_comm(NULL),
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

          param("UDP - Port", m_args.UDP_port)
          .defaultValue("2010")
          .description("Port for connection to Pioneer");

          param("UDP - Address", m_args.UDP_addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to Pioneer");
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
          auto tcpDp = [this](uint8_t buf[], int startIndex, int length) -> int{ return this->pioneerCommandRepliesParse(buf, startIndex, length); };
          auto udpDp = [this](uint8_t buf[], int startIndex, int length) -> int{ return this->pioneerMessagesParse(buf, startIndex, length); };
          auto stf = [this](IMC::EntityState::StateEnum state, Status::Code code) { this->warnEntityState(state, code); };
          m_TCP_comm = new PioneerComm::TCPComm(this, tcpDp, stf);
          m_UDP_comm = new PioneerComm::UDPComm(this, udpDp, stf);
          // m_UDP_comm = new PioneerComm::UDPComm(this,
          //     std::bind(&Task::pioneerMessagesParse, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3),
          //     std::bind(&Task::warnEntityState, this, std::placeholders::_1, std::placeholders::_2));

          openConnectionTCP();
          openConnectionUDP();
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

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_TCP_comm);
        Memory::clear(m_UDP_comm);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // if(paramChanged(m_args.TCP_addr) || paramChanged(m_args.TCP_port))
        // {
        //     m_TCP_comm->setTCPAddr(m_args.TCP_addr);
        //     m_TCP_comm->setTCPPort(m_args.TCP_port);
        //     m_TCP_comm->reconnect();
        // }

        // if(paramChanged(m_args.UDP_listen_port))
        // {
        //     m_UDP_comm->setUDPPort(m_args.UDP_listen_port);
        //     m_UDP_comm->reconnect();
        // }
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
          PioneerAppProtocolMessages::P2AppProtocolDataVersion1Telemetry msgV1Telm;
          PioneerAppProtocolMessages::P2AppProtocolDataVersion2Telemetry msgV2Telm;
          PioneerAppProtocolMessages::P2AppProtocolDataVersion2Compasscalibration msgV2CompassCal;

          switch ((buf[startIndex] << 8) + buf[startIndex + 1])
          {
          case PioneerAppProtocolMessages::PIONEER_MSG_VERSION_1_TELEMETRY_CODE:
            rb = PioneerAppProtocolPack::Pack::unpack<PioneerAppProtocolMessages::P2AppProtocolDataVersion1Telemetry>(
                this, buf, startIndex, length, &msgV1Telm);
            if (rb > 0)
              handlePioneerV1Telemetry(msgV1Telm);
            break;
          case PioneerAppProtocolMessages::PIONEER_MSG_VERSION_2_TELEMETRY_CODE:
            rb = PioneerAppProtocolPack::Pack::unpack<PioneerAppProtocolMessages::P2AppProtocolDataVersion2Telemetry>(
                this, buf, startIndex, length, &msgV2Telm);
            if (rb > 0)
              handlePioneerV2Telemetry(msgV2Telm);
            break;
          case PioneerAppProtocolMessages::PIONEER_MSG_VERSION_2_COMPASS_CALIBRATION_CODE:
            rb = PioneerAppProtocolPack::Pack::unpack<PioneerAppProtocolMessages::P2AppProtocolDataVersion2Compasscalibration>(
                this, buf, startIndex, length, &msgV2CompassCal);
            if (rb > 0)
              handlePioneerV2CompassCalibration(msgV2CompassCal);
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
          PioneerAppProtocolCommands::P2AppProtocolReplyVersion2Ack msgAck;
          PioneerAppProtocolCommands::P2AppProtocolReplyVersion2Ping msgPing;
          PioneerAppProtocolCommands::P2AppProtocolReplyVersion2GetCameraParameters msgGetCamParams;

          switch (buf[startIndex])
          {
          //case PioneerAppProtocolCommands::PIONEER_REPLY_VERSION_1_ACK:
          case PioneerAppProtocolCommands::PIONEER_REPLY_VERSION_2_ACK:
            rb = PioneerAppProtocolPack::Pack::unpack<PioneerAppProtocolCommands::P2AppProtocolReplyVersion2Ack>(
                this, buf, startIndex, length, &msgAck);
            if (rb > 0)
              handlePioneerV2ReplyAck(msgAck);
            break;
          //case PioneerAppProtocolCommands::PIONEER_REPLY_VERSION_1_PING:
          case PioneerAppProtocolCommands::PIONEER_REPLY_VERSION_2_PING:
            rb = PioneerAppProtocolPack::Pack::unpack<PioneerAppProtocolCommands::P2AppProtocolReplyVersion2Ping>(
                this, buf, startIndex, length, &msgPing);
            if (rb > 0)
              handlePioneerV2ReplyPing(msgPing);
            break;
          //case PioneerAppProtocolCommands::PIONEER_REPLY_VERSION_1_GET_CAMERA:
          case PioneerAppProtocolCommands::PIONEER_REPLY_VERSION_2_GET_CAMERA:
            // For now is just one msg
            rb = PioneerAppProtocolPack::Pack::unpack<PioneerAppProtocolCommands::P2AppProtocolReplyVersion2GetCameraParameters>(
                this, buf, startIndex, length, &msgGetCamParams);
            if (rb > 0)
              handlePioneerV2ReplyGetCamera(msgGetCamParams);
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
      handlePioneerV2ReplyAck(PioneerAppProtocolCommands::P2AppProtocolReplyVersion2Ack msg)
      {
        // TODO something with msg
      }

      void
      handlePioneerV2ReplyPing(PioneerAppProtocolCommands::P2AppProtocolReplyVersion2Ping msg)
      {
        // TODO something with msg
      }

      void
      handlePioneerV2ReplyGetCamera(PioneerAppProtocolCommands::P2AppProtocolReplyVersion2GetCameraParameters msg)
      {
        // TODO something with msg
        debug("camera_bitrate %d", msg.camera_bitrate);
      }


      //! This will handle parsing Pionner V1 Telemetry message
      void
      handlePioneerV1Telemetry(PioneerAppProtocolMessages::P2AppProtocolDataVersion1Telemetry msg)
      {
        // TODO something with msg
        debug("Voltage %u", msg.battery_voltage);
      }

      //! This will handle parsing Pionner V2 Telemetry message
      void
      handlePioneerV2Telemetry(PioneerAppProtocolMessages::P2AppProtocolDataVersion2Telemetry msg)
      {
        // TODO something with msg
        debug("Depth %d",msg.depth);

        PioneerAppProtocolCommands::P2AppProtocolCmdVersion1Watchdog wdMsg;
        wdMsg.connection_duration = (int16_t) Time::Clock::getSinceEpoch();
        int dataLength = PioneerAppProtocolPack::Pack::pack(this, &wdMsg, m_buf_send);
        int sd = m_TCP_comm->sendData(m_buf_send, dataLength);
        debug("Send %d", sd);
      }

      //! This will handle parsing Pionner V2 Compass Calibration message
      void
      handlePioneerV2CompassCalibration(PioneerAppProtocolMessages::P2AppProtocolDataVersion2Compasscalibration msg)
      {
        // TODO something with msg
        debug("progress_thruster %u",msg.progress_thruster);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // Handle Pioneer data TCP
          if (!m_TCP_comm)
          {
            openConnectionTCP();
          }

          // Handle Pioneer data UDP
          if (!m_UDP_comm)
          {
            openConnectionUDP();
          }

          if (!m_error_missing)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          // Handle IMC messages from bus
          consumeMessages();
        }
      }
    };
  }
}

DUNE_TASK
