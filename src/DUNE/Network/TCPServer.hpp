//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Pinto                                                       *
//***************************************************************************

#include <DUNE/DUNE.hpp>
#include <functional>

namespace DUNE
{
  namespace Network
  {

    //! TCP Server implementation
    //! This class implements a TCP server that can be used to listen for incoming connections
    //! and read data from them. It is possible to assign callbacks to be called when a client
    //! connects, disconnects or sends data.

    // Export DLL Symbol.
    class DUNE_DLL_SYM TCPServer;

    class TCPServer : public Concurrency::Thread
    {

    public:
      //! Constructor.
      TCPServer(uint16_t port) : m_port(port), m_running(false) {}

      ~TCPServer(void)
      {
        m_running = false;
        for (TCPSocket* client : m_clients)
          delete client;

        m_clients.clear();
      }

      //! Assign a callback to be called when a client connects
      void
      setOnClientConnected(std::function<bool(Address addr, int port)> onClientConnected)
      {
        m_onClientConnected = onClientConnected;
      }

      //! Assign a callback to be called when a client sends data
      void
      setOnRead(std::function<void(TCPSocket* client, const char* data, size_t len)> onRead)
      {
        m_onRead = onRead;
      }

      //! Assign a callback to be called when a client disconnects
      void
      setOnDisconnect(std::function<void(TCPSocket* client)> onDisconnect)
      {
        m_onDisconnect = onDisconnect;
      }

      //! Write a message to all clients, except the one specified
      void
      write(const IMC::Message* message, TCPSocket* clientToSkip = nullptr)
      {
        if (!m_running || m_clients.empty())
          return;

        Utils::ByteBuffer buf;
        IMC::Packet::serialize(message, buf);
        write(buf.getBuffer(), buf.getSize(), clientToSkip);
      }

      //! Write data to all clients, except the one specified
      void
      write(uint8_t* buffer, int length, TCPSocket* clientToSkip = nullptr)
      {
        if (!m_running || m_clients.empty())
          return;

        for (TCPSocket* client : m_clients)
        {
          if (client == clientToSkip)
            continue;

          m_mutex.lock();
          try
          {
            client->write(buffer, length);
          }
          catch (ConnectionClosed& e)
          {
            if (m_onDisconnect)
            {
              m_onDisconnect(client);
            }
            m_poll.remove(*client);
            m_clients.erase(std::remove(m_clients.begin(), m_clients.end(), client), m_clients.end());
            delete client;
          }
          catch (std::runtime_error& e)
          {
            std::cerr << "Error writing to client: " << e.what() << std::endl;
          }
          m_mutex.unlock();
        }
      }

      //! Start server
      void
      connect()
      {
        m_running = true;
        try
        {
          m_server_socket.setKeepAlive(true);
          m_server_socket.setNoDelay(true);
          m_server_socket.setSendTimeout(1.0);

          m_server_socket.bind(m_port);
          m_server_socket.listen(4);
          m_poll.add(m_server_socket);
        }
        catch (std::runtime_error& e)
        {
          std::cerr << "Error binding to port " << m_port << ": " << e.what() << std::endl;
          m_running = false;
          return;
        }
      }

      //! Stop server
      void
      disconnect()
      {
        m_running = false;
        for (TCPSocket* client : m_clients)
          delete client;
        m_clients.clear();
        m_poll.remove(m_server_socket);
      }

      void
      run() override
      {
        Address addr;
        uint16_t port;
        char buffer[65535];

        connect();

        while (m_running)
        {
          int poll_num = m_poll.poll(0.01);
          if (poll_num)
          {
            if (m_poll.wasTriggered(m_server_socket))
            {
              try
              {
                // new client
                TCPSocket* client = m_server_socket.accept(&addr, &port);
                if (client != nullptr)
                {
                  m_poll.add(*client);
                  m_clients.push_back(client);

                  bool accept = true;
                  if (m_onClientConnected)
                    accept = m_onClientConnected(addr, port);
                  if (!accept)
                    m_clients.erase(std::remove(m_clients.begin(), m_clients.end(), client), m_clients.end());
                }
                 client->setNoDelay(true);
              }
              catch (std::runtime_error& e)
              {
                std::cerr << "Error accepting client: " << e.what() << std::endl;
                disconnect();
              }
            }

            // read from client
            for (TCPSocket* client : m_clients)
            {
              if (m_poll.wasTriggered(*client))
              {
                try
                {
                  int len;
                  if ((len = client->read(buffer, sizeof(buffer))) > 0)
                  {
                    if (m_onRead)
                    {
                      m_onRead(client, buffer, len);
                    }
                  }
                }
                catch (ConnectionClosed& e)
                {
                  m_poll.remove(*client);

                  m_clients.erase(std::remove(m_clients.begin(), m_clients.end(), client), m_clients.end());

                  if (m_onDisconnect)
                  {
                    m_onDisconnect(client);
                  }
                  // delete client;
                }
                catch (std::runtime_error& e)
                {
                  std::cerr << "Error reading from client: " << e.what() << std::endl;
                  disconnect();
                }
              }
            }
          }          
        }
      }

    private:
      TCPSocket m_server_socket;
      int m_port;
      volatile bool m_running;
      IO::Poll m_poll;
      std::vector<TCPSocket*> m_clients;
      std::function<bool(Address addr, int port)> m_onClientConnected;
      std::function<void(TCPSocket* client, const char* data, size_t len)> m_onRead;
      std::function<void(TCPSocket* client)> m_onDisconnect;
      Concurrency::Mutex m_mutex;
    };
  }
}