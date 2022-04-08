//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef DUNE_NETWORK_UPSTREAM_TCP_SERVER_HPP_INCLUDED_
#define DUNE_NETWORK_UPSTREAM_TCP_SERVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IO/Poll.hpp>
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Network/TCPSocket.hpp>

namespace DUNE
{
  namespace Network
  {
    class UpstreamTCPServer: public Concurrency::Thread
    {
    public:
      UpstreamTCPServer(Tasks::Task* parent, int port):
        m_parent(parent),
        m_port(port),
        m_sock(nullptr),
        m_client(nullptr)
      {
        m_sock = new Network::TCPSocket();
        m_sock->bind(m_port);
        m_sock->listen(4);
        m_sock->setKeepAlive(true);
        m_sock->setNoDelay(true);
        m_sock->setSendTimeout(1.0);
      }

      ~UpstreamTCPServer() override
      {
        Memory::clear(m_client);
        Memory::clear(m_sock);
      }

      void
      sendToClient(const uint8_t* bfr, size_t bfr_size)
      {
        if (m_client == nullptr)
          return;

        try
        {
          m_client->write(bfr, bfr_size);
        }
        catch (...)
        {
          Memory::clear(m_client);
        }
      }

      void
      run() override
      {
        while (!isStopping())
        {
          if (!IO::Poll::poll(*m_sock, 1.0))
            continue;

          try
          {
            Network::TCPSocket* client = m_sock->accept();
            Memory::clear(m_client);
            m_client = client;
          }
          catch (...)
          { }
        }
      }

    private:
      //! Parent task.
      Tasks::Task* m_parent;
      //! Listening port.
      int m_port;
      //! Socket handle.
      Network::TCPSocket* m_sock;
      //! Client.
      Network::TCPSocket* m_client;
    };
  }
}

#endif
