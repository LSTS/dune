//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <list>
#include <memory>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace SerialOverTCP
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // Serial port device.
      std::string uart_dev;
      // Serial port baud rate.
      unsigned uart_baud;
      // TCP listening port.
      unsigned tcp_port;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Socket handle.
      TCPSocket* m_sock;
      // Serial port handle.
      SerialPort* m_uart;
      // Task arguments.
      Arguments m_args;
      // I/O Multiplexer.
      Poll m_poll;
      // Clients.
      std::list<TCPSocket*> m_clients;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sock(NULL),
        m_uart(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("TCP - Port", m_args.tcp_port)
        .defaultValue("9999")
        .description("TCP port to listen on");
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_sock = new TCPSocket;
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      }

      void
      onResourceRelease(void)
      {
        if (m_sock != NULL)
        {
          m_poll.remove(*m_sock);
          delete m_sock;
          m_sock = NULL;
        }

        if (m_uart != NULL)
        {
          m_poll.remove(*m_uart);
          delete m_uart;
          m_uart = NULL;
        }

        std::list<TCPSocket*>::iterator itr = m_clients.begin();
        for (; itr != m_clients.end(); ++itr)
        {
          m_poll.remove(*(*itr));
          delete *itr;
        }

        m_clients.clear();
      }

      void
      onResourceInitialization(void)
      {
        m_sock->bind(m_args.tcp_port);
        m_sock->listen(1024);
        m_poll.add(*m_sock);
        m_poll.add(*m_uart);
      }

      void
      dispatchToClients(const char* bfr, unsigned bfr_len)
      {
        std::list<TCPSocket*>::iterator itr = m_clients.begin();
        while (itr != m_clients.end())
        {
          try
          {
            (*itr)->write(bfr, bfr_len);
            ++itr;
          }
          catch (std::runtime_error& e)
          {
            err("%s", e.what());
            m_poll.remove(*(*itr));
            delete *itr;
            itr = m_clients.erase(itr);
          }
        }
      }

      void
      checkMainSocket(void)
      {
        if (m_poll.wasTriggered(*m_sock))
        {
          inf(DTR("accepting connection request"));
          try
          {
            TCPSocket* nc = m_sock->accept();
            m_clients.push_back(nc);
            m_poll.add(*nc);
          }
          catch (std::runtime_error& e)
          {
            err("%s", e.what());
          }
        }
      }

      void
      checkClientSockets(void)
      {
        char bfr[1024];

        std::list<TCPSocket*>::iterator itr = m_clients.begin();
        while (itr != m_clients.end())
        {
          if (m_poll.wasTriggered(*(*itr)))
          {
            try
            {
              int rv = (*itr)->read(bfr, sizeof(bfr));
              m_uart->write(bfr, rv);
            }
            catch (Network::ConnectionClosed& e)
            {
              (void)e;
              m_poll.remove(*(*itr));
              delete *itr;
              itr = m_clients.erase(itr);
              continue;
            }
            catch (std::runtime_error& e)
            {
              err("%s", e.what());
            }
          }

          ++itr;
        }
      }

      void
      checkSerialPort(void)
      {
        if (m_poll.wasTriggered(*m_uart))
        {
          char bfr[1024];
          int rv = m_uart->read(bfr, sizeof(bfr));
          dispatchToClients(bfr, rv);
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          if (m_poll.poll(1.0))
          {
            checkSerialPort();
            checkMainSocket();
            checkClientSockets();
          }
        }
      }
    };
  }
}

DUNE_TASK
