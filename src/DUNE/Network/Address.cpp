//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Address.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/ByteCopy.hpp>
#include <DUNE/Network/Address.hpp>
#include <DUNE/Network/Initializer.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SYS_SOCKET_H)
#  include <sys/socket.h>
#endif

#if defined(DUNE_SYS_HAS_NETINET_IN_H)
#  include <netinet/in.h>
#endif

#if defined(DUNE_SYS_HAS_ARPA_INET_H)
#  include <arpa/inet.h>
#endif

#if defined(DUNE_SYS_HAS_NETDB_H)
#  include <netdb.h>
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
    Address::Address(void):
      m_resolved(false)
    {
      std::memset(&m_ia, 0, sizeof(in_addr));
    }

    Address::Address(StaticAddress address):
      m_resolved(true)
    {
      switch (address)
      {
        case Broadcast:
          *this = "255.255.255.255";
          break;
        case Loopback:
          *this = "127.0.0.1";
          break;
        default:
          *this = "0.0.0.0";
          break;
      }
    }

    Address::Address(uint32_t ad)
    {
      *this = ad;
    }

    Address::Address(const ::sockaddr* ad)
    {
      *this = ad;
    }

    Address::Address(const char* ad)
    {
      *this = ad;
    }

    Address&
    Address::operator=(uint32_t ad)
    {
      m_resolved = true;
      m_ia.s_addr = Utils::ByteCopy::toBE(ad);
      m_host = str();
      return *this;
    }

    Address&
    Address::operator=(const ::sockaddr* ad)
    {
      m_resolved = true;
      m_ia.s_addr = ((sockaddr_in*)ad)->sin_addr.s_addr;
      m_host = str();
      return *this;
    }

    Address&
    Address::operator=(const char* address)
    {
      m_resolved = true;

#if defined(DUNE_SYS_HAS_INET_PTON)
      if (inet_pton(AF_INET, address, &m_ia.s_addr) > 0)
        return *this;

#elif defined(DUNE_SYS_HAS_INET_ATON)
      if (inet_aton(address, &m_ia.s_addr) == 1)
        return *this;

#elif defined(DUNE_SYS_HAS_WSA_STRING_TO_ADDRESS)
      SOCKADDR_IN sin;
      sin.sin_family = AF_INET;
      int len = sizeof(SOCKADDR_IN);
      if (WSAStringToAddress((char*)address, AF_INET, 0, (SOCKADDR*)&sin, &len) == 0)
      {
        m_ia.s_addr = sin.sin_addr.s_addr;
        return *this;
      }

#elif defined(DUNE_SYS_HAS_INET_ADDR)
      uint32_t rv = inet_addr(address);
      if (rv != INADDR_NONE)
      {
        m_ia.s_addr = rv;
        return *this;
      }
#endif
      m_resolved = false;
      m_host = address;
      std::memset(&m_ia, 0, sizeof(in_addr));
      return *this;
    }

    uint32_t
    Address::toInteger(void) const
    {
      return m_ia.s_addr;
    }

    uint32_t
    Address::toIntegerNative(void) const
    {
      return Utils::ByteCopy::fromBE((uint32_t)m_ia.s_addr);
    }

    std::string
    Address::str(void) const
    {
#if defined(DUNE_SYS_HAS_INET_NTOP)
      char bfr[INET_ADDRSTRLEN] = {0};
      inet_ntop(AF_INET, &m_ia, bfr, sizeof(bfr));
      return bfr;

#elif defined(DUNE_SYS_HAS_INET_NTOA)
      return inet_ntoa(m_ia);
#endif
    }

    const char*
    Address::c_str(void)
    {
#if defined(DUNE_SYS_HAS_INET_NTOP)
      inet_ntop(AF_INET, &m_ia, m_buffer, sizeof(m_buffer));

#elif defined(DUNE_SYS_HAS_INET_NTOA)
      const char* addr = inet_ntoa(m_ia);
      std::strcpy(m_buffer, addr);
#endif

      return m_buffer;
    }

    bool
    Address::operator==(const Address& other) const
    {
      return (m_ia.s_addr == other.m_ia.s_addr);
    }

    bool
    Address::operator!=(const Address& other) const
    {
      return (m_ia.s_addr != other.m_ia.s_addr);
    }

    bool
    Address::operator<(const Address& other) const
    {
      return (m_ia.s_addr < other.m_ia.s_addr);
    }

    bool
    Address::operator>(const Address& other) const
    {
      return (m_ia.s_addr > other.m_ia.s_addr);
    }

    bool
    Address::resolve(void)
    {
      if (m_resolved)
        return true;

#if defined(DUNE_SYS_HAS_GETADDRINFO)
      addrinfo* res = 0;
      addrinfo hints;

      std::memset(&hints, 0, sizeof(addrinfo));
      hints.ai_flags = AI_CANONNAME;
      hints.ai_family = AF_INET;

      int rv = getaddrinfo(m_host.c_str(), 0, &hints, &res);

      if (rv != 0)
        return false;

      for (addrinfo* ai = res; ai; ai = ai->ai_next)
      {
        sockaddr_in* in = (sockaddr_in*)ai->ai_addr;
        std::memcpy(&m_ia, &(in->sin_addr), sizeof(in_addr));
        freeaddrinfo(res);
        return true;
      }

#else
      struct hostent* he = gethostbyname(m_host.c_str());
      if (he == 0)
        return false;

      if (he->h_addr_list[0] == 0)
        return false;

      std::memcpy(&m_ia, he->h_addr_list[0], he->h_length);
      return true;

#endif

      return false;
    }

    bool
    Address::isLoopback(void) const
    {
      return (toIntegerNative() & 0xff000000) == 0x7f000000;
    }

    bool
    Address::isAny(void) const
    {
      return (toIntegerNative() & 0xffffff00) == 0x00000000;
    }
  }
}
