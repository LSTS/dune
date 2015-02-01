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
#include <vector>
#include <list>
#include <set>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Session.hpp"

namespace Transports
{
  namespace FTP
  {
    using DUNE_NAMESPACES;

    //! Task arguments
    struct Arguments
    {
      //! Data port.
      uint16_t data_port;
      //! Control port.
      uint16_t control_port;
      //! Session timeout.
      double session_tout;
    };

    struct Task: public Tasks::Task
    {
      //! Arguments
      Arguments m_args;
      //! Port bind retries.
      static const int c_port_retries = 5;
      //! Control sockets.
      std::list<TCPSocket*> m_sockets;
      //! I/O selector.
      Poll m_poll;
      //! List of busy sessions.
      std::list<Session*> m_busy_list;
      //! Concurrency lock for list of busy sessions.
      Mutex m_busy_list_lock;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        param("Data Port", m_args.data_port)
        .defaultValue("30020")
        .description("Data Port");

        param("Control Port", m_args.control_port)
        .defaultValue("30021")
        .description("Control Port");

        param("Session Timeout", m_args.session_tout)
        .units(Units::Second)
        .defaultValue("120")
        .description("Timeout period of a session");
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      TCPSocket*
      createSocket(Address addr, uint16_t& port)
      {
        TCPSocket* sock = new TCPSocket;
        while (true)
        {
          try
          {
            sock->bind(port, addr);
            sock->listen(5);
            inf(DTR("listening on %s:%u"), addr.c_str(), port);
            break;
          }
          catch (...)
          {
            ++port;
          }
        }

        return sock;
      }

      void
      onResourceAcquisition(void)
      {
        // Initialize and dispatch AnnounceService.
        std::vector<Interface> itfs = Interface::get();
        std::set<Address> addrs;
        uint16_t port = 0;
        for (unsigned i = 0; i < itfs.size(); ++i)
        {
          Address addr = itfs[i].address();
          if (addrs.find(addr) != addrs.end())
            continue;

          addrs.insert(addr);

          port = m_args.control_port;
          TCPSocket* sock = createSocket(itfs[i].address(), port);
          m_poll.add(*sock);
          m_sockets.push_back(sock);

          std::stringstream os;
          os << "ftp://" << addr.str() << ":" << port << "/";

          IMC::AnnounceService announce;
          announce.service = os.str();

          if (itfs[i].address().isLoopback())
            announce.service_type = IMC::AnnounceService::SRV_TYPE_LOCAL;
          else
            announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

          dispatch(announce);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      {
        while (!m_busy_list.empty())
        {
          Session* session = m_busy_list.front();
          m_busy_list.pop_front();
          session->stopAndJoin();
          delete session;
        }

        while (!m_sockets.empty())
        {
          TCPSocket* socket = m_sockets.front();
          m_sockets.pop_front();
          delete socket;
        }
      }

      void
      acceptNewClient(TCPSocket* sock, const Address& local_addr)
      {
        try
        {
          Address addr;
          TCPSocket* client = sock->accept(&addr);

          debug("accepted connection from '%s'", addr.c_str());
          Session* handler = new Session(this, m_ctx.dir_log, client, local_addr,
                                         m_args.session_tout);
          handler->start();
          m_busy_list.push_back(handler);
        }
        catch (std::runtime_error& e)
        {
          err(DTR("error accepting new client connection: %s"), e.what());
        }
      }

      void
      cleanBusyList(void)
      {
        std::list<Session*>::iterator itr = m_busy_list.begin();
        while (itr != m_busy_list.end())
        {
          if ((*itr)->isDead())
          {
            debug("cleaning client");
            (*itr)->stopAndJoin();
            delete *itr;
            itr = m_busy_list.erase(itr);
          }
          else
          {
            ++itr;
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          cleanBusyList();

          if (!m_poll.poll(1.0))
            continue;

          std::list<TCPSocket*>::iterator itr = m_sockets.begin();
          for (; itr != m_sockets.end(); ++itr)
          {
            if (m_poll.wasTriggered(*(*itr)))
              acceptNewClient(*itr, (*itr)->getBoundAddress());
          }

        }
      }
    };
  }
}

DUNE_TASK
