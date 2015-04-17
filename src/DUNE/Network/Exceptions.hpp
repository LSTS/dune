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

#ifndef DUNE_NETWORK_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_NETWORK_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/Exceptions.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/Network/Address.hpp>

namespace DUNE
{
  namespace Network
  {
    class NameLookupError: public Exception
    {
    public:
      NameLookupError(const std::string& msg):
        Exception(Utils::String::str(DTR("unable to resolve hostname '%s'"),
                                     msg.c_str()))
      { }
    };

    class InvalidAddress: public Exception
    {
    public:
      InvalidAddress(const std::string& addr):
        Exception(Utils::String::str(DTR("invalid network address '%s'"),
                                     addr.c_str()))
      { }
    };

    class NetworkError: public Exception
    {
    public:
      NetworkError(const std::string& message, const std::string& sys_message):
        Exception(message + ": " + sys_message)
      { }
    };

    class NetworkUnreachable: public Exception
    {
    public:
      NetworkUnreachable(const std::string& addr):
        Exception(Utils::String::str(DTR("network unreachable '%s'"),
                                     addr.c_str()))
      { }
    };

    class HostUnreachable: public Exception
    {
    public:
      HostUnreachable(const std::string& addr):
        Exception(Utils::String::str(DTR("host unreachable '%s'"),
                                     addr.c_str()))
      { }
    };

    class ConnectionError: public Exception
    {
    public:
      ConnectionError(const std::string& error):
        Exception(std::string(DTR("connection error")) + ": " + error)
      { }
    };

    class ConnectionClosed: public ConnectionError
    {
    public:
      ConnectionClosed(void):
        ConnectionError(DTR("connection closed"))
      { }
    };

    class ConnectionTimeout: public ConnectionError
    {
    public:
      ConnectionTimeout(void):
        ConnectionError(DTR("connection timeout"))
      { }
    };
  }
}

#endif
