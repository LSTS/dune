//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Exceptions.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
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

    class ConnectionClosed: public Exception
    {
    public:
      ConnectionClosed(void):
        Exception(DTR("connection closed"))
      { }
    };
  }
}

#endif
