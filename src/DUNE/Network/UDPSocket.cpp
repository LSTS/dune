//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cerrno>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Network/Address.hpp>
#include <DUNE/Network/UDPSocket.hpp>
#include <DUNE/Network/Exceptions.hpp>
#include <DUNE/Utils/ByteCopy.hpp>

// Win32 headers.
#if defined(DUNE_SYS_HAS_WINSOCK2_H)
#  include <winsock2.h>
#  define DUNE_SOCKET_ERROR System::Error::getLastMessage()
#endif

#if defined(DUNE_SYS_HAS_WS2TCPIP_H)
#  include <ws2tcpip.h>
#endif

// POSIX headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_NETINET_IN_H)
#  include <netinet/in.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SOCKET_H)
#  include <sys/socket.h>
#  define DUNE_SOCKET_ERROR System::Error::getLastMessage()
#  define INVALID_SOCKET -1
#endif

#if defined(DUNE_SYS_HAS_ARPA_INET_H)
#  include <arpa/inet.h>
#endif

#if defined(DUNE_SYS_HAS_NETDB_H)
#  include <netdb.h>
#endif

#if defined(DUNE_OS_WINDOWS) && defined(DUNE_SYS_HAS_WSA_IOCTL)
// To avoid cumbersome Windows connection reset error 10054 (WSACONNRESET)
// Reference: http://support.microsoft.com/kb/263823
#  ifndef IOC_VENDOR
#    define IOC_VENDOR 0x18000000
#  endif
#  ifndef SIO_UDP_CONNRESET
#    define SIO_UDP_CONNRESET _WSAIOW(IOC_VENDOR, 12)
#  endif
#endif

#if !defined(EHOSTUNREACH) && defined(WSAEHOSTUNREACH)
#  define EHOSTUNREACH WSAEHOSTUNREACH
#endif

#if !defined(ENETUNREACH) && defined(WSAENETUNREACH)
#  define ENETUNREACH WSAENETUNREACH
#endif

namespace DUNE
{
  namespace Network
  {
    UDPSocket::UDPSocket(void):
      m_con_port(0)
    {
      //  POSIX / Win32
#if defined(DUNE_SYS_HAS_SOCKET)
      m_handle = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
      if (m_handle == INVALID_SOCKET)
        throw NetworkError(DTR("unable to create socket"), DUNE_SOCKET_ERROR);

#  if defined(DUNE_OS_WINDOWS) && defined(DUNE_SYS_HAS_WSA_IOCTL)
      // To avoid cumbersome Windows connection reset error 10054 (WSACONNRESET)
      // Reference: http://support.microsoft.com/kb/263823
      DWORD dummy = 0;
      BOOL behavior = FALSE;

      if (WSAIoctl(m_handle, SIO_UDP_CONNRESET, &behavior, sizeof(behavior),
                   0, 0, &dummy, 0, 0) == SOCKET_ERROR)
      {
        if (GetLastError() != WSAEOPNOTSUPP)
        {
          throw NetworkError(DTR("setting up socket"), DUNE_SOCKET_ERROR);
        }
      }
#  endif
#else
      throw NotImplemented("UDPSocket");
#endif

      createEventHandle();
    }

    UDPSocket::~UDPSocket(void)
    {
      // POSIX
#if defined(DUNE_SYS_HAS_CLOSE)
      close(m_handle);

      // Win32
#elif defined(DUNE_SYS_HAS_CLOSESOCKET)
      closesocket(m_handle);
#endif
    }

    void
    UDPSocket::enableBroadcast(bool value)
    {
      int on = value ? 1 : 0;
      setsockopt(m_handle, SOL_SOCKET, SO_BROADCAST, (char*)&on, sizeof(int));
    }

    void
    UDPSocket::setMulticastTTL(uint8_t value)
    {
      setsockopt(m_handle, IPPROTO_IP, IP_MULTICAST_TTL, (char*)&value, sizeof(value));
    }

    void
    UDPSocket::setMulticastLoop(bool value)
    {
      char loop = value ? 1 : 0;
      setsockopt(m_handle, IPPROTO_IP, IP_MULTICAST_LOOP, &loop, sizeof(loop));
    }

    void
    UDPSocket::joinMulticastGroup(Address group, Address itf)
    {
      ip_mreq mreq;

      mreq.imr_multiaddr.s_addr = group.toInteger();
      mreq.imr_interface.s_addr = itf.toInteger();

      setsockopt(m_handle, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mreq, sizeof(mreq));
    }

    void
    UDPSocket::bind(uint16_t port, Address add, bool reuse)
    {
      if (reuse)
      {
        int on = 1;
        setsockopt(m_handle, SOL_SOCKET, SO_REUSEADDR, (char*)&on, sizeof(int));
      }

      sockaddr_in self;

      self.sin_family = AF_INET;
      self.sin_port = Utils::ByteCopy::toBE(port);
      self.sin_addr.s_addr = add.toInteger();

      if (::bind(m_handle, (::sockaddr*)&self, sizeof(self)) < 0)
        throw NetworkError(DTR("unable to bind to socket"), DUNE_SOCKET_ERROR);
    }

    size_t
    UDPSocket::read(uint8_t* buffer, size_t size, Address* addr)
    {
      sockaddr_in host;
      socklen_t sock_len = sizeof(host);
      std::memset((char*)&host, 0, sock_len);

      int rv = recvfrom(m_handle, (char*)buffer, size, 0, (::sockaddr*)&host, (::socklen_t*)&sock_len);

      if (rv <= 0)
        throw NetworkError(DTR("error receiving data"), DUNE_SOCKET_ERROR);

      if (addr != NULL)
        *addr = (::sockaddr*)&host;

      return rv;
    }

    size_t
    UDPSocket::write(const uint8_t* buffer, size_t size, const Address& host, uint16_t port)
    {
      sockaddr_in host_sai;
      socklen_t sock_len = sizeof(host_sai);

      host_sai.sin_family = AF_INET;
      host_sai.sin_port = Utils::ByteCopy::toBE(port);
      host_sai.sin_addr.s_addr = host.toInteger();

      int rv = sendto(m_handle, (const char*)buffer, size, 0, (::sockaddr*)&host_sai, (::socklen_t)sock_len);

      if (rv == -1)
      {
        if (errno == EHOSTUNREACH)
          throw HostUnreachable(host.str());
        else if (errno == ENETUNREACH)
          throw NetworkUnreachable(host.str());
        else
          throw NetworkError(DTR("error sending data"), DUNE_SOCKET_ERROR);
      }

      return rv;
    }

    void
    UDPSocket::createEventHandle(void)
    {
#if defined(DUNE_OS_WINDOWS)
      m_event_handle = CreateEvent(NULL, FALSE, FALSE, NULL);
      WSAEventSelect(m_handle, m_event_handle, FD_READ);
#endif
    }
  }
}
