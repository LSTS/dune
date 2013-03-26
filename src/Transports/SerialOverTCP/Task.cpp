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
      std::auto_ptr<TCPSocket> m_sock;
      // Serial port handle.
      std::auto_ptr<SerialPort> m_uart;
      // Task arguments.
      Arguments m_args;
      // I/O Multiplexer.
      IOMultiplexing m_iom;
      // Clients.
      std::list<TCPSocket*> m_clients;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
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
        m_sock = std::auto_ptr<TCPSocket>(new TCPSocket);
        m_uart = std::auto_ptr<SerialPort>(new SerialPort(m_args.uart_dev, m_args.uart_baud));
      }

      void
      onResourceInitialization(void)
      {
        m_sock->bind(m_args.tcp_port);
        m_sock->listen(1024);
        m_sock->addToPoll(m_iom);
        m_uart->addToPoll(m_iom);
      }

      void
      onResourceRelease(void)
      {
        std::list<TCPSocket*>::iterator itr = m_clients.begin();
        for (; itr != m_clients.end(); ++itr)
          delete *itr;
      }

      void
      dispatchToClients(const char* bfr, unsigned bfr_len)
      {
        std::list<TCPSocket*>::iterator itr = m_clients.begin();
        for (; itr != m_clients.end(); ++itr)
        {
          try
          {
            (*itr)->write(bfr, bfr_len);
            ++itr;
          }
          catch (std::runtime_error& e)
          {
            err("%s", e.what());
            (*itr)->delFromPoll(m_iom);
            delete *itr;
            itr = m_clients.erase(itr);
          }
        }
      }

      void
      checkMainSocket(void)
      {
        if (m_sock->wasTriggered(m_iom))
        {
          inf(DTR("accepting connection request"));
          try
          {
            TCPSocket* nc = m_sock->accept();
            m_clients.push_back(nc);
            nc->addToPoll(m_iom);
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
          if ((*itr)->wasTriggered(m_iom))
          {
            try
            {
              int rv = (*itr)->read(bfr, sizeof(bfr));
              m_uart->write(bfr, rv);
            }
            catch (Network::ConnectionClosed& e)
            {
              (void)e;
              (*itr)->delFromPoll(m_iom);
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
        if (m_uart->wasTriggered(m_iom))
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
          if (m_iom.poll(1.0))
          {
            checkSerialPort(),
            checkMainSocket();
            checkClientSockets();
          }
        }
      }
    };
  }
}

DUNE_TASK
