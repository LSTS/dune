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
    //! TCPSocket wraper for the specific usecase
    struct SafeTCPSocket
    {
      //! Handle to task using the wraper
      Tasks::Task* task;
      //! TCP socket
      TCPSocket* sock;
      //! Name of socket
      std::string name;

      //! Port used in case of connection
      uint16_t port;
      //! Address used in case of connection
      Address address;

      //! Constructor for new socket
      SafeTCPSocket(Tasks::Task* a_task, std::string a_name):
      task(a_task),
      sock(new TCPSocket),
      name(a_name),
      port(0),
      address("0.0.0.0")
      {}

      //! Constructor for existing socket
      SafeTCPSocket(Tasks::Task* a_task, std::string a_name, TCPSocket* a_sock):
      task(a_task),
      sock(a_sock),
      name(a_name),
      port(0),
      address("0.0.0.0")
      {}

      //! Destructor
      ~SafeTCPSocket()
      {
        delete sock;
      }

      //! Socket starts listening for connection requests
      //! @param[in] a_port port to bind socket
      //! @param[in] a_address address to bind socket
      //! @param[in] reuse flag to allow reuse of address
      //! @param[in] backlog number of connections allowed
      void
      startListen(uint16_t a_port, Address a_address, bool reuse, int backlog)
      {
        try
        {
          sock->bind(a_port, a_address, reuse);
          sock->listen(backlog);
        }
        catch (std::exception& e)
        {
          std::string str = "Unable to start listener socket: ";
          str += e.what();
          throw RestartNeeded(DTR(str.c_str()), 2, false);
        }
      }

      //! Connect socket to remote port
      //! @param[in] a_address address of remote socket
      //! @param[in] a_port port of remote socket
      void
      connect(Address a_address, uint16_t a_port)
      {
        if (port == 0 && address.str() == "0.0.0.0")
        {
          port = a_port;
          address = a_address;
        }

        try
        {
          Memory::clear(sock);
          sock = new TCPSocket;
          sock->connect(a_address, a_port);

          task->debug(DTR("%s socket connected: %s:%d"),
                      name.c_str(),
                      address.c_str(),
                      port);
        }
        catch (std::exception& e)
        {
          std::string str = "Unable to start " + name
                            + " socket: " + std::string(e.what());
          throw RestartNeeded(DTR(str.c_str()), 2, false);
        }
      }

      //! Attempt reconnection to saved socket address
      void
      reconnect()
      {
        if (port == 0 && address.str() == "0.0.0.0")
          return;

        connect(address, port);
      }

      //! Accept connection from outside socket
      //! @param[in] a_name name of new SafeTCPSocket
      //! @returns Safe
      SafeTCPSocket*
      accept(std::string a_name)
      {
        return new SafeTCPSocket(task, a_name, sock->accept());
      }

      //! Poll socket for reading
      //! @param[in] timeout time it waits for socket in seconds
      //! @return true if there is something to read, false otherwise
      bool
      poll(double timeout)
      {
        try
        {
          return Poll::poll(*sock, timeout);
        }
        catch(const std::exception& e)
        {
          task->err("error polling %s socket: %s", name.c_str(), e.what());
          return false;
        }
      }

      //! Read from socket to buffer
      //! @param[in] data buffer
      //! @param[in] length number of bytes to read
      //! @return number of bytes read
      size_t
      read(uint8_t *data, size_t length)
      {
        try
        {
          return sock->read(data, length);
        }
        catch(const ConnectionClosed& e)
        {
          task->war("%s socket not connected, attepting to reconnect", name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string str = name + "socket network error: " + std::string(e.what());
          str += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }

      //! Write to socket
      //! @param[in] data data buffer
      //! @param[in] lenght number of bytes to write
      //! @return number of bytes written
      size_t
      write(const char *data, size_t length)
      {
        try
        {
          return sock->write(data, length);
        }
        catch(const ConnectionClosed& e)
        {
          task->war("%s socket not connected, attepting to reconnect", name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string str = name + "socket network error: " + std::string(e.what());
          str += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }

      //! Write to socket
      //! @param[in] data data buffer
      //! @param[in] lenght number of bytes to write
      //! @return number of bytes written
      size_t
      write(const uint8_t *data, size_t length)
      {
        try
        {
          return sock->write(data, length);
        }
        catch(const ConnectionClosed& e)
        {
          task->war("%s socket not connected, attepting to reconnect", name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string str = name + "socket network error: " + std::string(e.what());
          str += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }

      //! Write string to socket
      //! @param[in] str string to write
      //! @return number of bytes written
      size_t
      writeString(const std::string str)
      {
        try
        {
          return sock->writeString(str.c_str());
        }
        catch(const ConnectionClosed& e)
        {
          task->war("%s socket not connected, attepting to reconnect", name.c_str());
          reconnect();
        }
        catch(const NetworkError& e)
        {
          std::string msg = name + "socket network error: " + std::string(e.what());
          msg += " -> restarting";
          throw RestartNeeded(DTR(str.c_str()), 1);
        }

        return 0;
      }
    };
  }
}

#endif
