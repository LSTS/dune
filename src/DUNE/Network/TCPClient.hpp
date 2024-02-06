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

    //! TCP Client implementation
    //! This class implements a TCP client that can be used to connect to a server and read data from it.
    //! It is possible to assign callbacks to be called when the client connects, disconnects or receives data.
    //! It is also possible to write data to the server.

    // Export DLL Symbol.
    class DUNE_DLL_SYM TCPClient;
    

    /**
     * @brief TCPClient class represents a TCP client that connects to a specified address and port.
     */
    class TCPClient : public Concurrency::Thread
    {

    public:
      //! Constructor.
      TCPClient(Network::Address& address, uint16_t port)
      {
        m_running = false;
        m_port = port;
        m_address = address;
        m_onConnect = nullptr;
        m_onRead = nullptr;
        m_onDisconnect = nullptr;        
      }

      ~TCPClient(void) { m_running = false; }

      //! Assign a callback to be called when a client connects
      void
      setOnConnect(std::function<void()> onConnect)
      {
        m_onConnect = onConnect;
      }

      //! Assign a callback to be called when a client sends data
      void
      setOnRead(std::function<void(const char* data, size_t len)> onRead)
      {
        m_onRead = onRead;
      }

      //! Assign a callback to be called when a client disconnects
      void
      setOnDisconnect(std::function<void()> onDisconnect)
      {
        m_onDisconnect = onDisconnect;
      }

      //! Write a message to server
      void
      write(const IMC::Message* message)
      {
        if (!m_running)
          return;

        Utils::ByteBuffer buf;
        IMC::Packet::serialize(message, buf);
        write(buf.getBuffer(), buf.getSize());
      }

      //! Write data to server
      void
      write(uint8_t* buffer, int length)
      {
        if (!m_running)
          return;
        m_mutex.lock();
        try
        {         
          int written = m_socket.write(buffer, length);
          if (written != length)
            std::cerr << "Error writing to server: " << std::endl;
          else
            m_socket.flush();
        }
        catch (ConnectionClosed& e)
        {
          m_poll.remove(m_socket);
          m_running = false;    
          if (m_onDisconnect)
          {
            m_onDisconnect();
          }          
        }
        catch (std::runtime_error& e)
        {
          std::cerr << "Error writing to server: " << e.what() << std::endl;
        }
        m_mutex.unlock();
      }

      //! Start server
      void
      connect()
      {
       
        try
        {
          m_socket.connect(m_address, m_port);
          m_poll.add(m_socket);
          if (m_onConnect)
            m_onConnect();
          m_running = true;
        }
        catch (std::runtime_error& e)
        {
          std::cerr << "Error connecting to server: " << e.what() << std::endl;
          m_running = false;
          return;
        }
      }

      //! Stop server
      void
      disconnect()
      {
        m_running = false;  
        m_poll.remove(m_socket);              
      }

      void
      run() override
      {
        char buffer[65535];

        connect();

        while (m_running)
        {
          if (m_poll.poll(0.01))
          {
            if (m_poll.wasTriggered(m_socket))
            {
              try
              {
                int len = m_socket.read(buffer, sizeof(buffer));
                if (len > 0)
                {
                  if (m_onRead)
                  {
                    m_onRead(buffer, len);
                  }
                }
                else {
                  throw ConnectionError("Connection closed with server");
                }
              }
              catch (ConnectionClosed& e)
              {
                disconnect();     
                
                if (m_onDisconnect)
                {
                  m_onDisconnect();
                }                
                 std::cerr << "Connection closed with server: " << e.what() << std::endl;                
              }
              catch (std::runtime_error& e)
              {
                disconnect();     
                
                if (m_onDisconnect)
                {
                  m_onDisconnect();
                }
                std::cerr << "Connection closed with server: " << e.what() << std::endl;                
              }
            }
          }
        }
      }

    private:
      TCPSocket m_socket;
      int m_port;
      Network::Address m_address;
      volatile bool m_running;
      IO::Poll m_poll;
      std::function<void()> m_onConnect;
      std::function<void()> m_onConnectionFailed;      
      std::function<void(const char* data, size_t len)> m_onRead;
      std::function<void()> m_onDisconnect;
      Concurrency::Mutex m_mutex;
    };
  }
}
