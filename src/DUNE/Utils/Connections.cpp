//***************************************************************************
// Copyright 2013-2023 EvoLogics GmbH                                       *
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
// Author: Ievgenii Glushko                                                 *
//***************************************************************************

#include "Connections.hpp"

#include <cstdio>

#include <DUNE/Hardware/SerialPort.hpp>
#include <DUNE/Network/Address.hpp>
#include <DUNE/Network/TCPSocket.hpp>
#include <DUNE/Network/UDPSocket.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Utils/SmartPointers.hpp>

using DUNE::IO::Handle;
using DUNE::Hardware::SerialPort;
using DUNE::Network::Address;
using DUNE::Network::TCPSocket;
using DUNE::Network::UDPSocket;

namespace DUNE
{
  namespace Utils
  {
    namespace Connections
    {
      void
      parseURI(const std::string& uri, ConnectionType& type,
          std::string& scheme, std::string& path, unsigned& numeral, char& flag)
      {
        static const unsigned c_buf_size_scheme = 16;
        static const unsigned c_buf_size_path = 128;

        char s[c_buf_size_scheme] = { '\0' };
        char p[c_buf_size_path] = { '\0' };

        type = CONNECTION_UNKNOWN;
        numeral = 0;
        flag = '\0';

        // Form format string leaving one byte for the terminating NULL char.
        std::string fmt = String::str("%%%u[^:]://%%%u[^:]:%%u:%%c", c_buf_size_scheme - 1, c_buf_size_path - 1);

        int matches = std::sscanf(uri.c_str(), fmt.c_str(), s, p, &numeral, &flag);

        scheme = std::string(s);
        path = std::string(p);

        if (matches == 3)
        {
          if (scheme == "serial")
            type = CONNECTION_SERIAL;
          else if (scheme == "tcp")
            type = CONNECTION_TCP;
          else if (scheme == "udp")
            type = CONNECTION_UDP;
        }
        else if (matches == 4)
        {
          if (scheme == "tcp" && flag == 'l')
            type = CONNECTION_TCP_LISTEN;
          else if (scheme == "udp" && flag == 'l')
            type = CONNECTION_UDP_LISTEN;
        }
        else
          throw std::invalid_argument("malformed connection specification");
      }

      Handle*
      openConnection(const ConnectionType& type, const std::string& path, const unsigned& numeral)
      {
        static const double c_tcp_send_timeout = 1.0;
        static const double c_tcp_connect_timeout = 5.0;
        static const unsigned c_tcp_listen_backlog = 128;

        switch(type)
        {
        case CONNECTION_SERIAL:
        {
          const char* serial_device = path.c_str();
          unsigned baud_rate = numeral;
          return new SerialPort(serial_device, baud_rate);
        }
        case CONNECTION_TCP:
        {
          std::unique_ptr<TCPSocket> sock(new TCPSocket);
          unsigned port = numeral;
          const char* ip_address = path.c_str();

          sock->setSendTimeout(c_tcp_connect_timeout);
          sock->setReceiveTimeout(c_tcp_connect_timeout);

          sock->connect(ip_address, port);
          sock->setReceiveTimeout(0.0);
          sock->setSendTimeout(c_tcp_send_timeout);
          sock->setKeepAlive(true);
          sock->setNoDelay(true);
          return sock.release();
        }
        case CONNECTION_TCP_LISTEN:
        {
          std::unique_ptr<TCPSocket> sock(new TCPSocket);
          unsigned port = numeral;
          const char* ip_address = path.c_str();
          sock->bind(port, ip_address);
          sock->listen(c_tcp_listen_backlog);
          sock->setKeepAlive(true);
          sock->setNoDelay(true);
          sock->setSendTimeout(c_tcp_send_timeout);
          return sock.release();
        }
        case CONNECTION_UDP:
        {
          std::unique_ptr<UDPSocket> sock(new UDPSocket);
          unsigned port = numeral;
          const char* ip_address = path.c_str();
          sock->connect(ip_address, port);
          return sock.release();
        }
        case CONNECTION_UDP_LISTEN:
        {
          std::unique_ptr<UDPSocket> sock(new UDPSocket);
          unsigned port = numeral;
          const char* ip_address = path.c_str();
          sock->bind(port, ip_address, false);
          return sock.release();
        }
        default:
          throw std::invalid_argument("unknown connection type");
        }
      }

      Handle*
      openConnection(const std::string& spec, ConnectionType* type_ret)
      {
        ConnectionType type;
        std::string scheme;
        std::string path;
        unsigned numeral;
        char flag;

        parseURI(spec, type, scheme, path, numeral, flag);

        //! Return connection type if a pointer given
        if (type_ret != nullptr)
          *type_ret = type;
        //! If not, do not accept tcp:l where additional actions required
        else if (type == CONNECTION_TCP_LISTEN)
          throw std::invalid_argument("tcp:l connection is not supported in this scope");

        return openConnection(type, path, numeral);
      }
    }
  }
}

