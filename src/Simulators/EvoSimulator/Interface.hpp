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
// Author: Luis Venâncio                                                    *
//***************************************************************************

#ifndef SIMULATORS_EVOSIMULATOR_SAFETCP_HPP_INCLUDED_
#define SIMULATORS_EVOSIMULATOR_SAFETCP_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  namespace EvoSimulator
  {
    //! Interface to facilitate setup, sending and receiving from
    //! TCPSocket.
    struct Interface
    {
      //! Handle to task using the wraper
      Tasks::Task* m_task;
      //! TCP socket
      TCPSocket* m_sock;
      //! Name of socket
      std::string m_name;

      //! Port used in case of connection
      uint16_t m_port;
      //! Address used in case of connection
      Address m_address;

      //! Constructor for new interface
      Interface(Tasks::Task* task, std::string name, Address add, uint16_t port):
      m_task(task),
      m_sock(new TCPSocket),
      m_name(name),
      m_port(port),
      m_address(add)
      {}

      //! Constructor w/ socket
      Interface(Tasks::Task* task, std::string name, TCPSocket* sock):
      m_task(task),
      m_sock(sock),
      m_name(name),
      m_port(0),
      m_address("0.0.0.0")
      {}

      //! Clears socket pointer
      ~Interface()
      {
        Memory::clear(m_sock);
      }

      //! Socket starts listening for connection requests
      //! @param[in] reuse flag to allow reuse of address
      //! @param[in] backlog number of connections allowed
      void
      startListen(bool reuse, int backlog)
      {
        try
        {
          m_sock->bind(m_port, m_address, reuse);
          m_sock->listen(backlog);

          m_task->inf(DTR("%s socket listening: %s:%d"),
                      m_name.c_str(),
                      m_address.c_str(),
                      m_port);
        }
        catch (std::exception& e)
        {
          std::string str = "Unable to start listener socket: ";
          str += e.what();
          throw RestartNeeded(DTR(str.c_str()), 2, false);
        }
      }

      //! Connect socket to remote port
      //! @param[in] address address of remote socket
      //! @param[in] port port of remote socket
      void
      connect()
      {
        try
        {
          Memory::clear(m_sock);
          m_sock = new TCPSocket;
          m_sock->connect(m_address, m_port);

          m_task->inf(DTR("%s socket connected: %s:%d"),
                      m_name.c_str(),
                      m_address.c_str(),
                      m_port);
        }
        catch (std::exception& e)
        {
          std::string str = "Unable to start " + m_name
                            + " socket: " + std::string(e.what());
          throw RestartNeeded(DTR(str.c_str()), 2, false);
        }
      }

      //! Attempt reconnection to saved socket address
      void
      reconnect()
      {
        if (m_port == 0 && m_address.str() == "0.0.0.0")
          return;

        connect();
      }

      //! Accept connection from outside socket
      //! @param[in] name name of new Interface
      //! @returns Pointer to connected interface
      Interface*
      accept(std::string name)
      {
        return new Interface(m_task, name, m_sock->accept());
      }

      //! Poll socket for reading
      //! @param[in] timeout time it waits for socket in seconds
      //! @return true if there is something to read, false otherwise
      bool
      poll(double timeout)
      {
        try
        {
          return Poll::poll(*m_sock, timeout);
        }
        catch(const std::exception& e)
        {
          m_task->err("error polling %s socket: %s", m_name.c_str(), e.what());
          return false;
        }
      }

      //! Send multiple, space separated, values to interface
      //! @param[in] values Values to send to interface
      template<typename T>
      void
      sendMultiple(std::vector<T> values)
      {
        std::string str = "";
        for (auto itr = values.begin(); itr != values.end(); ++itr)
          str += " " + std::to_string(*itr);
        str += "\n";

        std::vector<uint8_t> bfr(str.begin(), str.end());
        send(&bfr, bfr.size());
      }

      //! Send multiple, space separated, strings to interface
      //! @param[in] values Strings to send to interface
      void
      sendMultiple(std::vector<std::string> values)
      {
        auto itr = values.begin();
        std::string str = *itr;
        for (itr = values.begin() + 1; itr != values.end(); ++itr)
          str += " " + *itr;
        str += "\n";

        std::vector<uint8_t> bfr(str.begin(), str.end());
        send(&bfr, bfr.size());
      }

      // TODO: Wait for reply method.

      //! Poll and read from socket.
      //! @param[out] bfr pointer to data buffer
      //! @return Number of bytes read. In case bfr 
      //!         is NULL return 1 but do not read.
      size_t
      read(std::vector<uint8_t>* bfr = nullptr)
      {
        if (!m_sock)
        {
          std::string msg = String::str("error in socket %s, restarting", 
                                        m_name.c_str());
          throw RestartNeeded(DTR(msg.c_str()), 1);
        }

        if (!poll(1.0))
          return 0;

        if (bfr == nullptr)
          return 1;
        
        try
        {
          size_t rv = m_sock->read(&bfr->front(), bfr->size());

          if (rv)
            m_task->spew("recv (%s): %s", m_name.c_str(), 
                         sanitize(std::string(bfr->begin(), bfr->begin()+rv)).c_str());

          return rv;
        }
        catch(const ConnectionClosed& e)
        {
          m_task->war("%s socket not connected, attepting to reconnect", m_name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string str = m_name + "socket network error: " + std::string(e.what());
          str += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }

      //! Send to socket.
      //! @param[in] bfr pointer to data buffer
      //! @param[in] lenght data lenght
      //! @return Number of bytes written.
      size_t
      send(std::vector<uint8_t>* bfr, size_t length)
      {
        if (!m_sock)
        {
          std::string msg = String::str("error in socket %s, restarting", 
                                        m_name.c_str());
          throw RestartNeeded(DTR(msg.c_str()), 1);
        }

        try
        {
          size_t rv = m_sock->write(&bfr->front(), length);

          if (rv)
            m_task->spew("sent (%s): %s", m_name.c_str(), 
                         sanitize(std::string(bfr->begin(), bfr->begin()+length)).c_str());

          return rv;
        }
        catch(const ConnectionClosed& e)
        {
          m_task->war("%s socket not connected, attepting to reconnect", m_name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string str = m_name + "socket network error: " + std::string(e.what());
          str += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }
    };
  }
}

#endif
