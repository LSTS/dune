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
