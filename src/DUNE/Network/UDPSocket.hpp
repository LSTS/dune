//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: UDPSocket.hpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

#ifndef DUNE_NETWORK_UDP_SOCKET_HPP_INCLUDED_
#define DUNE_NETWORK_UDP_SOCKET_HPP_INCLUDED_

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
    class DUNE_DLL_SYM UDPSocket;

    //! UDP Socket.
    class UDPSocket
    {
    public:
      //! Create an unbound UDP socket.
      UDPSocket(void);

      //! Destroy an UDP socket.
      ~UDPSocket(void);

      void
      enableBroadcast(bool value);

      void
      setMulticastTTL(uint8_t ttl = 1);

      void
      setMulticastLoop(bool loopback = true);

      void
      joinMulticastGroup(Address group, Address itf = Address::Any);

      //! Assign a name to a socket.
      void
      bind(uint16_t port = 0, Address add = Address::Any, bool reuse = true);

      //! Send an UDP datagram to a host.
      //! @param addr system specific host address.
      //! @param port destination port.
      //! @param buffer buffer to send.
      //! @param len buffer length.
      int
      write(const char* buffer, int len, const Address& addr, uint16_t port);

      //! Receive an UDP datagram, retrieving the address
      //! of the source host.
      //! @param buffer destination buffer.
      //! @param len destination buffer length.
      //! @param add system specific host address.
      int
      read(char* buffer, int len, Address* add = 0);

      void
      addToPoll(System::IOMultiplexing& poller);

      void
      delFromPoll(System::IOMultiplexing& poller);

      bool
      wasTriggered(System::IOMultiplexing& poller);

    private:
      //! Platform specific handle.
#if defined(DUNE_OS_WINDOWS)
      SOCKET m_handle;
#else
      int m_handle;
#endif

      //! Non - copyable.
      UDPSocket(const UDPSocket&);

      //! Non - assignable
      UDPSocket&
      operator=(const UDPSocket&);
    };
  }
}

#endif
