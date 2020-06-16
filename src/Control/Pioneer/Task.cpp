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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Pioneer headers.
#include "PioneerAppProtocolMessages.hpp"

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
      //! TCP socket
      Network::TCPSocket* m_TCP_sock;
      //! UDP socket
      Network::UDPSocket* m_UDP_sock;

      uint8_t m_buf_tcp[2048];
      uint8_t m_buf_tcp_cur_free_index;
      uint8_t m_buf_udp[2048];

      //! Moving Home timer
      Time::Counter<float> m_timer;

      //! Mavlink Timeouts
      bool m_error_missing;
      double m_last_pkt_time;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_TCP_sock(NULL),
        m_UDP_sock(NULL),
        m_buf_tcp_cur_free_index(0),
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

          m_last_pkt_time = 0; //! time of last packet from Pioneer
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
          openConnectionTCP();
          openConnectionUDP();
      }

      void
      openConnectionTCP(void)
      {
        try
        {
          m_TCP_sock = new TCPSocket;
          m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
          m_TCP_sock->setNoDelay(true);
          
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
          m_buf_tcp_cur_free_index = 0;
          Memory::clear(m_TCP_sock);

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
          m_UDP_sock = new UDPSocket;
          m_UDP_sock->bind(m_args.UDP_listen_port, Address::Any, false);
          
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
          Memory::clear(m_UDP_sock);

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
        Memory::clear(m_TCP_sock);
        Memory::clear(m_UDP_sock);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(paramChanged(m_args.TCP_addr) || paramChanged(m_args.TCP_port))
        {
            closeConnectionTCP();
            Time::Delay::wait(0.2);
            openConnectionTCP();
        }

        if(paramChanged(m_args.UDP_listen_port))
        {
            closeConnectionUDP();
            Time::Delay::wait(0.2);
            openConnectionUDP();
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

      //! This will parse the receiving Pionner messages
      int
      pioneerMessagesParse(uint8_t buf[], int startIndex, int length)
      {
        int rb = 0;
        try
        {
          switch ((buf[startIndex] << 8) + buf[startIndex + 1])
          {
          case PioneerAppProtocolMessages::PIONEER_MSG_VERSION_1_TELEMETRY_CODE:
            rb = handlePioneerV1Telemetry(buf, startIndex, length);
            break;
          case PioneerAppProtocolMessages::PIONEER_MSG_VERSION_2_TELEMETRY_CODE:
            rb = handlePioneerV2Telemetry(buf, startIndex, length);
            break;
          case PioneerAppProtocolMessages::PIONEER_MSG_VERSION_2_COMPASS_CALIBRATION_CODE:
            rb = handlePioneerV2CompassCalibration(buf, startIndex, length);
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
          // case PioneerAppProtocolMessages::PIONEER_MSG_VERSION_1_TELEMETRY_CODE:
          //   rb = handlePioneerV1Telemetry(buf, startIndex, length);
          //   break;
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

      //! This will handle parsing Pionner V1 Telemetry message
      int
      handlePioneerV1Telemetry(uint8_t buf[], int startIndex, int length)
      {
        int rb = 0;
        try
        {
          const int sizeMsg = sizeof(struct PioneerAppProtocolMessages::P2AppProtocolDataVersion1Telemetry);
          if (length < startIndex + sizeMsg) {
            war("Message PioneerV2Telemetry too short to decode %d < %d", length, startIndex + sizeMsg);
            return -(startIndex + sizeMsg - length); // return the missing bytes for decoding
          }

          PioneerAppProtocolMessages::P2AppProtocolDataVersion1Telemetry msg;
          std::memcpy(&msg, &buf[startIndex], sizeMsg);
          rb = sizeMsg;
          spew("RECEIVED MSG: V1Telemetry");
          
          // TODO something with msg
          debug("Voltage %u", msg.battery_voltage);
        }
        catch(const std::exception& e)
        {
          err("%s", e.what());
          return 0;
        }

        return rb;
      }

      //! This will handle parsing Pionner V2 Telemetry message
      int
      handlePioneerV2Telemetry(uint8_t buf[], int startIndex, int length)
      {
        int rb = 0;
        try
        {
          const int sizeMsg = sizeof(struct PioneerAppProtocolMessages::P2AppProtocolDataVersion2Telemetry);
          if (length < startIndex + sizeMsg) {
            war("Message PioneerV2Telemetry too short to decode %d < %d", length, startIndex + sizeMsg);
            return -(startIndex + sizeMsg - length); // return the missing bytes for decoding
          }

          PioneerAppProtocolMessages::P2AppProtocolDataVersion2Telemetry msg;
          std::memcpy(&msg, &buf[startIndex], sizeMsg);
          rb = sizeMsg;
          spew("RECEIVED MSG: V2Telemetry");

          // TODO something with msg
          debug("Depth %d",msg.depth);
        }
        catch(const std::exception& e)
        {
          err("%s", e.what());
          return 0;
        }

        return rb;
      }

      //! This will handle parsing Pionner V2 Compass Calibration message
      int
      handlePioneerV2CompassCalibration(uint8_t buf[], int startIndex, int length)
      {
        int rb = 0;
        try
        {
          const int sizeMsg = sizeof(struct PioneerAppProtocolMessages::P2AppProtocolDataVersion2Compasscalibration);
          if (length < startIndex + sizeMsg) {
            war("Message PioneerV2Telemetry too short to decode %d < %d", length, startIndex + sizeMsg);
            return -(startIndex + sizeMsg - length); // return the missing bytes for decoding
          }

          PioneerAppProtocolMessages::P2AppProtocolDataVersion2Compasscalibration msg;
          std::memcpy(&msg, &buf[startIndex], sizeMsg);
          rb = sizeMsg;
          spew("RECEIVED MSG: V2CompassCalibration");

          // TODO something with msg
          debug("progress_thruster %u",msg.progress_thruster);
        }
        catch(const std::exception& e)
        {
          err("%s", e.what());
          return 0;
        }

        return rb;
      }

      //! This will check TCP and UDP ports for data do parse
      void
      handlePioneerData(bool tcpOrUdp)
      {
        double now = Clock::get();
        int counter = 0;

        while ((tcpOrUdp ? pollTCP(0.01) : pollUDP(0.01)) && counter < 100)
        {
          counter++;

          int n = tcpOrUdp ? receiveDataTCP(m_buf_tcp, sizeof(m_buf_tcp))
              : receiveDataUDP(m_buf_udp, sizeof(m_buf_udp));
          if (n < 0)
          {
            debug("Receive error from %s", tcpOrUdp ? "TCP": "UDP");
            break;
          }

          uint8_t* buf;
          buf = tcpOrUdp ? m_buf_tcp : m_buf_udp;

          // time stamp!
          now = Clock::get();

          // for each packet
          int i;
          for (i = 0; i < n; i++)
          {
            int rv = tcpOrUdp ? pioneerCommandRepliesParse(buf, i, n)
                : pioneerMessagesParse(buf, i, n);

            // handle the parsed packet
            if (rv > 0)
            {
              i += rv;
               m_last_pkt_time = now;
            }
            else if (rv < 0) // the buffer has the start of a valid msg but is too short
            {
              if (!tcpOrUdp) // if UDP the package os not recoverable
                i = n;
              break;
            }
            else
            {
              i++;
            } // end: handle the parsed packet
          } // end: for each packet

          if (tcpOrUdp)
          {
            if (i < n)
            {
              int data_length_to_translate = n - i;
              std::memcpy(&m_buf_tcp, &m_buf_tcp[i], data_length_to_translate);
              m_buf_tcp_cur_free_index = data_length_to_translate;
              debug("%s Waiting more data to decode msg (buffer too short) free_index:%d=%d-%d  msg_code:0x%02X%02X",
                  tcpOrUdp ? "TCP": "UDP", m_buf_tcp_cur_free_index, n, i, m_buf_tcp[0], m_buf_tcp[1]);
            }
            else
            {
              m_buf_tcp_cur_free_index = 0;
            }
          }
          debug("end: %s cicle poll for packets %d", tcpOrUdp ? "TCP": "UDP", counter);
        } // end: poll for packets

        // check for timeout
        if (now - m_last_pkt_time >= m_args.comm_timeout)
        {
          if (!m_error_missing)
          {
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
            m_error_missing = true;
          }
        }
        else
          m_error_missing = false;
      }
      
      bool
      pollTCP(double timeout)
      {
        if (m_TCP_sock != NULL)
          return Poll::poll(*m_TCP_sock, timeout);

        return false;
      }

      bool
      pollUDP(double timeout)
      {
        if (m_UDP_sock != NULL)
          return Poll::poll(*m_UDP_sock, timeout);

        return false;
      }

      int
      sendDataTCP(uint8_t* bfr, int size)
      {
        if (m_TCP_sock)
        {
          trace("Sending something through TCP");
          return m_TCP_sock->write((char*)bfr, size);
        }
        return 0;
      }

      int
      sendDataUDP(uint8_t* bfr, int size)
      {
        if (m_UDP_sock)
        {
          trace("Sending something through UDP");
          return m_UDP_sock->write(bfr, size, m_args.UDP_addr, m_args.UDP_port);
        }
        return 0;
      }

      int
      receiveDataTCP(uint8_t* buf, size_t blen)
      {
        if (m_TCP_sock)
        {
          try
          {
            if (m_TCP_sock)
              return m_TCP_sock->read(buf, blen);
          }
          catch (std::runtime_error& e)
          {
            err("%s", e.what());
            war(DTR("Connection TCP lost, retrying..."));
            closeConnectionTCP();
            openConnectionTCP();

            return 0;
          }
        }
        return 0;
      }

      int
      receiveDataUDP(uint8_t* buf, size_t blen)
      {
        if (m_UDP_sock)
        {
          try
          {
            if (m_UDP_sock)
              return m_UDP_sock->read(buf, blen, &m_args.UDP_addr, &m_args.UDP_listen_port);
          }
          catch (std::runtime_error& e)
          {
            err("%s", e.what());
            war(DTR("Connection UDP lost, retrying..."));
            closeConnectionUDP();
            openConnectionUDP();

            return 0;
          }
        }
        return 0;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          // Handle Pioneer data TCP
          if (m_TCP_sock)
          {
            handlePioneerData(true);
          }
          else
          {
            Time::Delay::wait(0.5);
            openConnectionTCP();
          }

          // Handle Pioneer data UDP
          if (m_UDP_sock)
          {
            handlePioneerData(false);
          }
          else
          {
            Time::Delay::wait(0.5);
            openConnectionUDP();
          }

          if (!m_error_missing)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          // Handle IMC messages from bus
          consumeMessages();        }
      }
    };
  }
}

DUNE_TASK
