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

// ISO C++ 98 headers.
#include <cstring>
#include <sstream>
#include <iostream>
#include <fstream>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/Utils/ByteCopy.hpp>
#include <DUNE/Network/TCPSocket.hpp>
#include <DUNE/Network/Exceptions.hpp>
#include <DUNE/Time/Utils.hpp>
#include <DUNE/Concurrency/Scheduler.hpp>
#include <DUNE/IO/Poll.hpp>

#if defined(DUNE_SYS_HAS_WINSOCK2_H)
#  include <winsock2.h>
#endif

#if defined(DUNE_SYS_HAS_WS2TCPIP_H)
#  include <ws2tcpip.h>
#endif

#if defined(DUNE_SYS_HAS_ARPA_INET_H)
#  include <arpa/inet.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_NETDB_H)
#  include <netdb.h>
#endif

#if defined(DUNE_SYS_HAS_NETINET_IN_H)
#  include <netinet/in.h>
#endif

#if defined(DUNE_SYS_HAS_NETINET_TCP_H)
#  include <netinet/tcp.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SOCKET_H)
#  include <sys/socket.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SIGNAL_H)
#  include <sys/signal.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_SENDFILE_H)
#  include <sys/sendfile.h>
#endif

#if !defined(INVALID_SOCKET)
#  define INVALID_SOCKET  (-1)
#endif

#if !defined(ECONNRESET) && defined(WSAECONNRESET)
#  define ECONNRESET WSAECONNRESET
#endif

static const unsigned c_block_size = 128 * 1024;

static inline std::string
getLastErrorMessage(void)
{
#if defined(DUNE_OS_WINDOWS)
  std::stringstream s;
  s << WSAGetLastError();
  return s.str();
#else
  return DUNE::System::Error::getLastMessage();
#endif
}

namespace DUNE
{
  namespace Network
  {
    TCPSocket::TCPSocket(bool create):
      m_handle(INVALID_SOCKET)
    {
      if (create)
      {
        m_handle = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

        if (m_handle == INVALID_SOCKET)
          throw NetworkError(DTR("unable to create socket"), getLastErrorMessage());

        disableSIGPIPE();
        createEventHandle();
      }
    }

    TCPSocket::~TCPSocket(void)
    {
#if defined(DUNE_OS_POSIX)
      shutdown(m_handle, SHUT_RDWR);
      close(m_handle);
#elif defined(DUNE_OS_WINDOWS)
      closesocket(m_handle);
#endif
    }

    void
    TCPSocket::bind(uint16_t port, Address addr, bool reuse)
    {
      if (reuse)
      {
        int on = 1;
#if defined(DUNE_OS_WINDOWS)

        setsockopt(m_handle, SOL_SOCKET, SO_EXCLUSIVEADDRUSE,
                   (char*)&on, sizeof(int));
        on = 1;
#endif
        setsockopt(m_handle, SOL_SOCKET, SO_REUSEADDR,
                   (char*)&on, sizeof(int));
      }

      sockaddr_in self;
      self.sin_family = AF_INET;
      self.sin_port = Utils::ByteCopy::toBE(port);
      self.sin_addr.s_addr = addr.toInteger();

      if (::bind(m_handle, (::sockaddr*)&self, sizeof(self)) < 0)
        throw NetworkError(DTR("unable to bind to socket"), getLastErrorMessage());
    }

    void
    TCPSocket::connect(const Address& addr, uint16_t port)
    {
      sockaddr_in ad;
      ad.sin_family = AF_INET;
      ad.sin_port = Utils::ByteCopy::toBE(port);
      ad.sin_addr.s_addr = addr.toInteger();

      if (::connect(m_handle, (struct sockaddr*)&ad, sizeof(ad)) < 0)
        throw NetworkError(DTR("unable to connect"), getLastErrorMessage());
    }

    void
    TCPSocket::listen(int backlog)
    {
      if (::listen(m_handle, backlog) < 0)
        throw NetworkError(DTR("unable to listen"), getLastErrorMessage());
    }

    TCPSocket*
    TCPSocket::accept(Address* a, uint16_t* port)
    {
      sockaddr_in addr;
      socklen_t size = sizeof(addr);
      int rv = ::accept(m_handle, (sockaddr*)&addr, &size);

      if (rv == 0)
        throw NetworkError(DTR("failed to accept connection"), getLastErrorMessage());

      if (a)
        *a = (sockaddr*)&addr;

      if (port)
        *port = Utils::ByteCopy::fromBE(addr.sin_port);

      TCPSocket* ns = new TCPSocket(false);
      ns->m_handle = rv;
      ns->disableSIGPIPE();
      ns->createEventHandle();
      return ns;
    }

    size_t
    TCPSocket::doRead(uint8_t* bfr, size_t size)
    {
      ssize_t rv = ::recv(m_handle, (char*)bfr, size, 0);
      if (rv == 0)
      {
        throw ConnectionClosed();
      }
      else if (rv < 0)
      {
        if (errno == ECONNRESET)
          throw ConnectionClosed();
        throw NetworkError(DTR("error receiving data"), getLastErrorMessage());
      }

      return static_cast<size_t>(rv);
    }

    size_t
    TCPSocket::doWrite(const uint8_t* bfr, size_t size)
    {
      int flags = 0;

#if defined(MSG_NOSIGNAL)
      flags = MSG_NOSIGNAL;
#endif

      ssize_t rv = ::send(m_handle, (char*)bfr, size, flags);

      if (rv < 0)
      {
        if (errno == EPIPE)
          throw ConnectionClosed();
        throw NetworkError(DTR("error sending data"), getLastErrorMessage());
      }

      return static_cast<size_t>(rv);
    }

    void
    TCPSocket::doFlushInput(void)
    {
      uint8_t bfr[4096];
      while (IO::Poll::poll(*this, 0))
      {
        read(bfr, sizeof(bfr));
      }
    }

    bool
    TCPSocket::writeFile(const char* filename, int64_t off_end, int64_t off_beg)
    {
#if defined(DUNE_OS_LINUX)
      int fd = open64(filename, O_RDONLY);
      if (fd == -1)
        return false;

      int64_t remaining = off_end;
      off64_t offset = 0;
      if (off_beg > 0)
      {
        offset = off_beg;
        remaining -= off_beg;
      }

      while (remaining >= 0)
      {
        ssize_t rv = sendfile64(m_handle, fd, &offset, c_block_size);

        if (rv == -1)
        {
          close(fd);
          return false;
        }

        remaining -= rv;
        Concurrency::Scheduler::yield();
      }

      close(fd);
      return true;

#else
      std::ifstream ifs(filename, std::ios::binary);

      int64_t remaining = off_end;
      if (off_beg > 0)
      {
        ifs.seekg(off_beg, std::ios::beg);
        if (ifs.fail())
          return false;

        remaining -= off_beg;
      }

      char bfr[c_block_size];
      int64_t rv = 0;

      while (remaining >= 0)
      {
        ifs.read(bfr, c_block_size);
        rv = write(bfr, ifs.gcount());

        if (rv == -1)
          return false;

        remaining -= rv;
      }

      return true;
#endif
    }

    void
    TCPSocket::setKeepAlive(bool enabled)
    {
      int set = enabled ? 1 : 0;
      setsockopt(m_handle, SOL_SOCKET, SO_KEEPALIVE, (char*)&set, sizeof(set));
    }

    void
    TCPSocket::setNoDelay(bool enabled)
    {
      int set = enabled ? 1 : 0;
      setsockopt(m_handle, IPPROTO_TCP, TCP_NODELAY, (char*)&set, sizeof(set));
    }

    void
    TCPSocket::setReceiveTimeout(double timeout)
    {
      timeval tv = DUNE_TIMEVAL_INIT_SEC_FP(timeout);
      if (setsockopt(m_handle, SOL_SOCKET, SO_RCVTIMEO, (char *)&tv, sizeof(tv)) < 0)
        throw NetworkError(DTR("unable to set receive timeout"), getLastErrorMessage());
    }

    void
    TCPSocket::setSendTimeout(double timeout)
    {
      timeval tv = DUNE_TIMEVAL_INIT_SEC_FP(timeout);
      if (setsockopt(m_handle, SOL_SOCKET, SO_SNDTIMEO, (char *)&tv, sizeof(tv)) < 0)
        throw NetworkError(DTR("unable to set send timeout"), getLastErrorMessage());
    }

    Address
    TCPSocket::getBoundAddress(void)
    {
      sockaddr_in name = {0};
      socklen_t size = sizeof(name);
      if (getsockname(m_handle, (sockaddr*)&name, &size) != 0)
        throw NetworkError(DTR("unable to get bound address"), getLastErrorMessage());

      return Address(Utils::ByteCopy::fromBE((uint32_t)name.sin_addr.s_addr));
    }

    uint16_t
    TCPSocket::getBoundPort(void)
    {
      sockaddr_in name = {0};
      socklen_t size = sizeof(name);
      if (getsockname(m_handle, (sockaddr*)&name, &size) != 0)
        throw NetworkError(DTR("unable to get bound port"), getLastErrorMessage());

      return Utils::ByteCopy::fromBE(name.sin_port);
    }

    IO::NativeHandle
    TCPSocket::doGetNative(void) const
    {
#if defined(DUNE_OS_WINDOWS)
      return m_event_handle;
#else
      return m_handle;
#endif
    }

    void
    TCPSocket::disableSIGPIPE(void)
    {
#if defined(SO_NOSIGPIPE)
      int set = 1;
      setsockopt(m_handle, SOL_SOCKET, SO_NOSIGPIPE, (void*)&set, sizeof(int));
#endif
    }

    void
    TCPSocket::createEventHandle(void)
    {
#if defined(DUNE_OS_WINDOWS)
      m_event_handle = CreateEvent(NULL, FALSE, FALSE, NULL);
      WSAEventSelect(m_handle, m_event_handle, FD_ACCEPT | FD_READ);
#endif
    }
  }
}
