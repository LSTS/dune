//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Address.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_NETWORK_ADDRESS_HPP_INCLUDED_
#define DUNE_NETWORK_ADDRESS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <istream>
#include <ostream>

// DUNE headers.
#include <DUNE/Config.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_NETINET_IN_H)
#  include <netinet/in.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SOCKET_H)
#  include <sys/socket.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINSOCK2_H)
#  include <winsock2.h>
#endif

#if defined(DUNE_SYS_HAS_WS2TCPIP_H)
#  include <ws2tcpip.h>
#endif

namespace DUNE
{
  namespace Network
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Address;

    //! IPv4 Address.
    class Address
    {
    public:
      enum StaticAddress
      {
        Any,
        Broadcast,
        Loopback
      };

      Address(void);

      Address(StaticAddress address);

      Address(uint32_t ad);

      Address(const ::sockaddr* ad);

      Address(const char* ad);

      bool
      operator==(const Address& other) const;

      bool
      operator!=(const Address& other) const;

      bool
      operator<(const Address& other) const;

      bool
      operator>(const Address& other) const;

      Address&
      operator=(const char* address);

      Address&
      operator=(const ::sockaddr* ad);

      Address&
      operator=(uint32_t ad);

      uint32_t
      toInteger(void) const;

      uint32_t
      toIntegerNative(void) const;

      std::string
      str(void) const;

      const char*
      c_str(void);

      bool
      resolve(void);

      //! Test if the address is a loopback address (127.0.0.0/8).
      //! @return true if the address is loopback, false otherwise.
      bool
      isLoopback(void) const;

      //! Test if the address is a current or any network address
      //! (0.0.0.0/8).
      //! @return true if the address is loopback, false otherwise.
      bool
      isAny(void) const;

    private:
      std::string m_host;
      in_addr m_ia;
      bool m_resolved;
      char m_buffer[32];
    };

    //! Input stream extractor.
    //! @param is input stream.
    //! @param addr target address.
    inline std::istream&
    operator>>(std::istream& is, Address& addr)
    {
      std::string str;
      is >> str;
      addr = str.c_str();
      return is;
    }

    //! Output stream inserter.
    //! @param os output stream.
    //! @param addr address.
    inline std::ostream&
    operator<<(std::ostream& os, const Address& addr)
    {
      os << addr.str();
      return os;
    }
  }
}

#endif
