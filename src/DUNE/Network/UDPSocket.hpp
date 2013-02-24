//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
