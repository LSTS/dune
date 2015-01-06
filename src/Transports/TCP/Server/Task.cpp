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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace TCP
  {
    namespace Server
    {
      using DUNE_NAMESPACES;

      //! Task arguments
      struct Arguments
      {
        //! Port to use.
        uint16_t port;
        //! True to announce service.
        bool announce;
      };

      struct Task: public Tasks::SimpleTransport
      {
        // Arguments
        Arguments m_args;
        // Port bind retries.
        static const int c_port_retries = 5;
        // Server socket handle.
        TCPSocket* m_sock;
        // I/O selector.
        Poll m_poll;

        // Client data.
        struct Client
        {
          TCPSocket* socket; // Socket handle.
          Address address; // Client address.
          uint16_t port; // Client port.
          IMC::Parser parser; // Parser handle
        };

        // Client list.
        typedef std::list<Client> ClientList;
        ClientList m_clients;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::SimpleTransport(name, ctx),
          m_sock(0)
        {
          param("Port", m_args.port)
          .defaultValue("7001")
          .description("TCP server port");

          param("Announce Service", m_args.announce)
          .defaultValue("true")
          .description("Set to true to announce the service");
        }

        ~Task(void)
        {
          onResourceRelease();
        }

        void
        onResourceAcquisition(void)
        {
          int port_limit = m_args.port + c_port_retries;

          m_sock = new TCPSocket;

          while (m_args.port != port_limit)
          {
            try
            {
              m_sock->bind(m_args.port);
              break;
            }
            catch (std::runtime_error& e)
            {
              war(DTR("failed to bind to port %u: %s"), m_args.port, e.what());
              ++m_args.port;
            }
          }

          if (m_args.port == port_limit)
          {
            std::string str = DTR("could not bind server socket");
            err("%s", str.c_str());
            throw std::runtime_error(str);
          }

          m_sock->listen(5);
          m_poll.add(*m_sock);
          inf(DTR("listening on %s:%u"), Address(Address::Any).c_str(), m_args.port);

          if (m_args.announce)
          {
            // Initialize and dispatch AnnounceService.
            std::vector<Interface> itfs = Interface::get();

            for (unsigned i = 0; i < itfs.size(); ++i)
            {
              std::stringstream os;
              os << "imc+tcp://" << itfs[i].address().str() << ":" << m_args.port << "/";

              IMC::AnnounceService announce;
              announce.service = os.str();

              if (itfs[i].address().isLoopback())
                announce.service_type = IMC::AnnounceService::SRV_TYPE_LOCAL;
              else
                announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

              dispatch(announce);
            }
          }

          updateEntityState(0);
        }

        void
        updateEntityState(unsigned client_count)
        {
          if (client_count > 0)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL,
                           String::str(DTR("connected to %u clients"),
                                       client_count));
          }
          else
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL,
                           Status::CODE_IDLE);
          }
        }

        void
        closeConnection(Client& c, std::exception& e)
        {
          long unsigned int client_count = m_clients.size() - 1;
          updateEntityState(client_count);

          debug("closing connection to %s:%u (%s), client count is %lu",
                c.address.c_str(), c.port, e.what(), client_count);

          m_poll.remove(*c.socket);
          delete c.socket;
        }

        void
        onResourceRelease(void)
        {
          for (ClientList::iterator itr = m_clients.begin(); itr != m_clients.end(); ++itr)
          {
            m_poll.remove(*itr->socket);
            delete itr->socket;
          }

          m_clients.clear();

          if (m_sock)
          {
            m_poll.remove(*m_sock);
            delete m_sock;
            m_sock = 0;
          }
        }

        void
        onDataTransmission(const uint8_t* p, unsigned int n)
        {
          ClientList::iterator itr = m_clients.begin();

          while (itr != m_clients.end())
          {
            try
            {
              itr->socket->write((char*)p, n);
            }
            catch (std::runtime_error& e)
            {
              closeConnection(*itr, e);
              itr = m_clients.erase(itr);
              continue;
            }
            ++itr;
          }
        }

        void
        onDataReception(uint8_t* buf, unsigned int cap, double timeout)
        {
          // Poll for connections and client data
          if (!m_poll.poll(timeout))
            return;

          // Check for new clients.
          if (m_poll.wasTriggered(*m_sock))
            acceptNewClient();

          // Check for client data
          handleClients(buf, cap);
        }

        void
        acceptNewClient(void)
        {
          Client c;
          c.socket = 0;
          try
          {
            c.socket = m_sock->accept(&c.address, &c.port);
            c.socket->setKeepAlive(true);
            c.socket->setNoDelay(true);
            c.socket->setReceiveTimeout(5);
            c.socket->setSendTimeout(5);
            m_poll.add(*c.socket);
            m_clients.push_back(c);
            updateEntityState(m_clients.size());

            debug("accepted connection from %s:%u, client count is %lu",
                  c.address.c_str(), c.port, (long unsigned int)m_clients.size());
          }
          catch (std::runtime_error& e)
          {
            if (c.socket)
              delete c.socket;
            err(DTR("error accepting new client connection: %s"), e.what());
          }
        }

        void
        handleClients(uint8_t* buf, unsigned int cap)
        {
          // Check for new data from clients.
          ClientList::iterator itr = m_clients.begin();

          while (itr != m_clients.end())
          {
            if (!m_poll.wasTriggered(*itr->socket))
            {
              ++itr;
              continue;
            }

            int n;

            try
            {
              n = itr->socket->read((char*)buf, cap);
            }
            catch (std::runtime_error& e)
            {
              closeConnection(*itr, e);
              itr = m_clients.erase(itr);
              continue;
            }

            if (n > 0)
              handleData(itr->parser, buf, n);

            ++itr;
          }
        }
      };
    }
  }
}

DUNE_TASK
