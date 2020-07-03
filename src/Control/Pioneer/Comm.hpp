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

#ifndef CONTROL_PIONEER_COMM_HPP_INCLUDED_
#define CONTROL_PIONEER_COMM_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstddef>
#include <functional>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Config.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Control
{
  namespace Pioneer
  {
    namespace Comm
    {
      #define MAX_BUFFER 2048

      //! Function that expects a buffer with start index with length.
      typedef std::function<int(uint8_t[], int , int)> DataProcessorFunction;
      //! Function that expects a buffer with start index with length.
      typedef std::function<void(uint8_t[], int , int)> DataLoggerFunction;
      typedef std::function<void(DUNE::IMC::EntityState::StateEnum, DUNE::Status::Code)> SetEntityStateFunction;
      //! Function for acceptance of UDP package
      typedef std::function<bool(DUNE::Network::Address*, uint16_t)> PackageAcceptanceFunction;

          class Comm: public Concurrency::Thread
      {
      public:
        Comm(DUNE::Tasks::Task* task,
          DataProcessorFunction processData,
          SetEntityStateFunction setEntityState,
          DataLoggerFunction dataLogger = NULL,
          PackageAcceptanceFunction packageAcceptanceFunction = NULL,
          uint16_t bufferCapacity = MAX_BUFFER):
        m_task(task),
        m_process_data_function(processData),
        m_data_logger(dataLogger),
        m_set_entity_state_function(setEntityState),
        m_package_acceptance_function(packageAcceptanceFunction),
        m_sock(NULL),
        m_buf_capacity(bufferCapacity),
        m_buf(new uint8_t[bufferCapacity]),
        m_comm_timeout(0)
        {
        }

        //! Destructor.
        ~Comm(void)
        {
           delete [] m_buf;
        }

        //! Check if is connected.
        bool
        isConnected(void)
        {
          return m_sock ? true : false;
        }

        //! To connect.
        void
        connect(void)
        {
          try
          {
            m_task->debug("Connecting");
            m_buf_cur_free_index = 0;
            openConnection();
          }
          catch (...)
          {
            disconnect();
            m_task->war(DTR("Connection failed, retrying..."));
            if (m_set_entity_state_function)
              m_set_entity_state_function(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          }
        }

        //! To disconnect.
        void
        disconnect(void)
        {
          try
          {
            closeConnection();
          }
          catch (...)
          {
            m_task->war(DTR("Disconnection failed"));
            if (m_set_entity_state_function)
              m_set_entity_state_function(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          }
        }

        //! It will disconnect, wait a small delay and call connect.
        void reconnect()
        {
          disconnect();
          Time::Delay::wait(0.2);
          connect();
        }

        //! To get the comms timeout without any messages.
        //! Set it to "0" to disregard.
        //! @return the timeout.
        uint8_t
        getCommTimeout(void)
        {
          return m_comm_timeout;
        }

        //! To set the comms timeout without any messages.
        //! Set it to "0" to disregard.
        //! @param[in] the timeout in seconds.
        void
        setCommTimeout(uint8_t timeOutSecs)
        {
          m_comm_timeout = timeOutSecs;
        }

      protected:
        SetEntityStateFunction m_set_entity_state_function;
        PackageAcceptanceFunction m_package_acceptance_function;
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //! Communications timeout
        uint8_t m_comm_timeout;
        IO::Handle* m_sock;
        uint8_t* m_buf;
        uint16_t m_buf_capacity;
        uint8_t m_buf_cur_free_index;
        //! Moving Home timer
        Time::Counter<float> m_timer;

        //! Comm Timeouts
        bool m_error_missing;
        double m_last_pkt_time;

        virtual void
        openConnection(void)
        {
          m_task->err("openConnection empty implementation");
        }

        virtual void
        closeConnection(void)
        {
          m_task->err("closeConnection empty implementation");
        }

        bool
        recoverBufferIfPossible(void)
        {
          return true;
        }

      private:
        DataProcessorFunction m_process_data_function;
        DataLoggerFunction m_data_logger;

        bool
        poll(double timeout)
        {
          if (m_sock != NULL)
            return Poll::poll(*m_sock, timeout);
          return false;
        }

        int
        receiveData(uint8_t* buf, size_t blen)
        {
          if (m_sock)
          {
            try
            {
              if (m_package_acceptance_function)
              {
                UDPSocket* udp_socket = dynamic_cast<UDPSocket*>(m_sock);
                if (udp_socket)
                {
                  Network::Address m_con_addr;
                  uint16_t m_con_port;
                  int ret = udp_socket-> read(buf, blen, &m_con_addr, &m_con_port);
                  return m_package_acceptance_function(&m_con_addr, m_con_port) ? ret : 0;
                }
              }
              else
              {
                return m_sock->read(buf, blen);
              }
            }
            catch (std::runtime_error& e)
            {
              m_task->err("%s", e.what());
              m_task->war(DTR("Connection lost, retrying..."));
              disconnect();
              connect();
              return 0;
            }
          }
          return 0;
        }

        void
        run(void)
        {
          double now = Clock::get();

          while (!isStopping())
          {
            if (m_sock == NULL)
            {
              Time::Delay::wait(0.5);
              if (m_sock == NULL)
              {
                m_task->debug("Call reconnect");
                reconnect();
                continue;
              }
            }

            if (!poll(0.01))
            {
              // m_task->err("!poll");
              Delay::waitUsec(500);
              continue;
            }

            int n = receiveData(&m_buf[m_buf_cur_free_index],
              m_buf_capacity - m_buf_cur_free_index);
            m_task->spew("Read %d from buffer starting at %d length %d from total %d",
              n, m_buf_cur_free_index, m_buf_capacity - m_buf_cur_free_index, m_buf_capacity);
            if (n < 0)
            {
              m_task->debug("Receive error");
              break;
            }

            // time stamp!
            now = Clock::get();

            if (m_data_logger)
            {
              m_data_logger(m_buf, m_buf_cur_free_index, n);
            }

            n += m_buf_cur_free_index;
            // for each packet
            int i;
            for (i = 0; i < n; i++)
            {
              int rv = m_process_data_function(m_buf, i, n - i);

              // handle the parsed packet
              if (rv > 0)
              {
                i += rv - 1;
                m_last_pkt_time = now;
                m_task->spew("cycle poll rv packets rec msg rv=%d i=%d n=%d", rv, i, n);
              }
              else if (rv < 0) // the buffer has the start of a valid msg but is too short
              {
                if (!recoverBufferIfPossible())
                  i = n;
                m_task->spew("cycle poll buffer too short packets i=%d n=%d", i, n);
                break;
              } // end: handle the parsed packet
            } // end: for each packet

            if (recoverBufferIfPossible())
            {
              m_task->spew("cycle poll for packets i=%d n=%d", i, n);
              if (i < n)
              {
                int data_length_to_translate = n - i;
                std::memcpy(m_buf, &m_buf[i], data_length_to_translate);
                m_buf_cur_free_index = data_length_to_translate;
                m_task->spew("Waiting more data to decode msg (buffer too short) free_index:%d=%d-%d  msg_code:0x%02X%02X",
                    m_buf_cur_free_index, n, i, m_buf[0], m_buf[1]);
              }
              else
              {
                m_buf_cur_free_index = 0;
              }
            }
            m_task->spew("end: cycle poll for packets");
          } // end: poll for packets

          // check for timeout
          if (m_comm_timeout > 0 && now - m_last_pkt_time >= m_comm_timeout)
          {
            if (!m_error_missing)
            {
              if (m_set_entity_state_function)
                m_set_entity_state_function(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
              m_error_missing = true;
            }
          }
          else
            m_error_missing = false;
        }
      };

      class TCPComm: public Comm
      {
      public:
        TCPComm(DUNE::Tasks::Task* task,
          DataProcessorFunction processData,
          SetEntityStateFunction setEntityState,
          DataLoggerFunction dataLogger = NULL,
          uint16_t bufferCapacity = MAX_BUFFER):
        Comm(task, processData, setEntityState, dataLogger, NULL, bufferCapacity)
        {
        }

        //! Destructor.
        ~TCPComm(void)
        {
          Memory::clear(m_TCP_sock);
        }

        uint16_t
        getTCPPort(void)
        {
          return m_TCP_port;
        }

        void
        setTCPPort(uint16_t tcpPort)
        {
          m_TCP_port = tcpPort;
        }

        Address
        getTCPAddr(void)
        {
          return m_TCP_addr;
        }

        void
        setTCPAddr(Address tcpAddr)
        {
          m_TCP_addr = tcpAddr;
        }

        int
        sendData(uint8_t* bfr, int size)
        {
          if (m_TCP_sock)
          {
            m_task->trace("Sending something %d bytes through TCP", size);
            return m_TCP_sock->write((char*)bfr, size);
          }
          return 0;
        }

      protected:
        void
        openConnection(void)
        {
          m_TCP_sock = new TCPSocket;
          m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
          m_TCP_sock->setNoDelay(true);
          m_sock = m_TCP_sock;
          m_task->inf("Comm TCP interface initialized");
        }

        void
        closeConnection(void)
        {
          Memory::clear(m_TCP_sock);
          m_sock = NULL;
          m_task->inf(DTR("Comm TCP interface disconnected"));
        }

      private:
        //! TCP Port for commands and replies
        uint16_t m_TCP_port;
        //! TCP Address
        Address m_TCP_addr;
        //! TCP socket
        Network::TCPSocket* m_TCP_sock;
      };

      class UDPComm: public Comm
      {
      public:
        UDPComm(DUNE::Tasks::Task* task,
          DataProcessorFunction processData,
          SetEntityStateFunction setEntityState,
          DataLoggerFunction dataLogger = NULL,
          PackageAcceptanceFunction packageAcceptanceFunction = NULL,
          bool enableBroadcast = false,
          uint16_t bufferCapacity = MAX_BUFFER):
        Comm(task, processData, setEntityState, dataLogger, packageAcceptanceFunction, bufferCapacity)
        {
          m_enable_broadcast = enableBroadcast;
        }

        //! Destructor.
        ~UDPComm(void)
        {
          Memory::clear(m_UDP_sock);
        }
      
        uint16_t
        getUDPPort(void)
        {
          return m_UDP_port;
        }

        void
        setUDPPort(uint16_t udpPort)
        {
          m_UDP_port = udpPort;
        }

        bool
        getEnableBroadcast(void)
        {
          return m_enable_broadcast;
        }

        void
        setEnableBroadcast(bool enableBroadcast)
        {
          m_enable_broadcast = enableBroadcast;
        }

        int
        sendData(uint8_t* bfr, int size, Address udpAddress, uint16_t udpPort)
        {
          if (m_UDP_sock)
          {
            m_task->trace("Sending something %d bytes through UDP", size);
            return m_UDP_sock->write(bfr, size, udpAddress, udpPort);
          }
          return 0;
        }

      protected:
        void
        openConnection(void)
        {
          m_UDP_sock = new UDPSocket;
          m_UDP_sock->enableBroadcast(m_enable_broadcast);
          m_UDP_sock->bind(m_UDP_port, Address::Any, false);
          m_sock = m_UDP_sock;
          m_task->inf("Comm UDP interface initialized");
        }

        void
        closeConnection(void)
        {
          Memory::clear(m_UDP_sock);
          m_sock = NULL;
          m_task->inf(DTR("Comm UDP interface disconnected")); 
        }

      private:
        //! Use UDP Port for telemetry
        uint16_t m_UDP_port;
        //! UDP socket
        Network::UDPSocket* m_UDP_sock;
        //! Enable broadcast
        bool m_enable_broadcast;

        bool
        recoverBufferIfPossible(void)
        {
          return false;
        }
      };
    }
  }
}

#endif
