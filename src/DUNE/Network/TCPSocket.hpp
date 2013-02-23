//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: TCPSocket.hpp 12896 2013-02-08 23:28:43Z rasm                    $:*
//***************************************************************************

#ifndef DUNE_NETWORK_TCP_SOCKET_HPP_INCLUDED_
#define DUNE_NETWORK_TCP_SOCKET_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Network/Address.hpp>
#include <DUNE/System/IOMultiplexing.hpp>

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINSOCK2_H)
#  include <winsock2.h>
#endif

namespace DUNE
{
  namespace Network
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM TCPSocket;

    //! TCP Socket.
    class TCPSocket
    {
    public:
      //! Create an unbound TCP socket.
      TCPSocket(bool create = true);

      //! Destroy an TCP socket.
      ~TCPSocket(void);

      //! Assign a name to a socket.
      void
      bind(uint16_t port = 0, Address add = Address::Any, bool reuse = true);

      void
      connect(Address add, uint16_t port);

      void
      listen(int backlog);

      TCPSocket*
      accept(Address* a = 0, uint16_t* port = 0);

      int
      write(const char* buffer, int len);

      int
      read(char* buffer, int len);

      bool
      writeFile(const char* filename, int64_t off_end, int64_t off_beg = -1);

      void
      addToPoll(System::IOMultiplexing& p);

      void
      delFromPoll(System::IOMultiplexing& p);

      bool
      wasTriggered(System::IOMultiplexing& p);

      //! Enable/disable keep-alive messages. When enabled connections
      //! are kept active by periodically transmitting messages.
      //! @param[in] enabled true to enable this feature, false to
      //! disable.
      void
      setKeepAlive(bool enabled);

      //! Disable/enable the Nagle algorithm.
      //! @param[in] enabled true to enable Nagle algorithm, false to
      //! disable.
      void
      setNoDelay(bool enabled);

      //! Set the timeout value that specifies the maximum amount of
      //! time an input function waits until it completes.
      //! @param[in] timeout timeout value in second.
      void
      setReceiveTimeout(double timeout);

      //! Set the timeout value specifying the amount of time that an
      //! output function blocks because flow control prevents data
      //! from being sent.
      //! @param[in] timeout timeout value in second.
      void
      setSendTimeout(double timeout);

      Address
      getBoundAddress(void);

      uint16_t
      getBoundPort(void);

    private:
      //! System specific socket handle.
#if defined(DUNE_OS_WINDOWS)
      SOCKET m_handle;
#else
      int m_handle;
#endif

      // Non - copyable.
      TCPSocket(TCPSocket const&);

      // Non - assignable
      TCPSocket&
      operator=(TCPSocket const&);

      //! Disable SIGPIPE generation.
      void
      disableSIGPIPE(void);
    };
  }
}

#endif
