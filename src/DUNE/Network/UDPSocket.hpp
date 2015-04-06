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

#ifndef DUNE_NETWORK_UDP_SOCKET_HPP_INCLUDED_
#define DUNE_NETWORK_UDP_SOCKET_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IO/Handle.hpp>
#include <DUNE/Network/Address.hpp>

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
    class UDPSocket: public IO::Handle
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

      void
      connect(const Address& addr, uint16_t port)
      {
        m_con_addr = addr;
        m_con_port = port;
      }

      //! Send an UDP datagram to a host.
      //! @param buffer buffer to send.
      //! @param size buffer length.
      //! @param addr system specific host address.
      //! @param port destination port.
      size_t
      write(const uint8_t* buffer, size_t size, const Address& addr, uint16_t port);

      //! Receive an UDP datagram, retrieving the address
      //! of the source host.
      //! @param buffer destination buffer.
      //! @param size destination buffer length.
      //! @param addr system specific host address.
      size_t
      read(uint8_t* buffer, size_t size, Address* addr = NULL);

    private:
      //! Platform specific handle.
#if defined(DUNE_OS_WINDOWS)
      SOCKET m_handle;
      HANDLE m_event_handle;
#else
      int m_handle;
#endif

      //! Connected address.
      Address m_con_addr;
      //! Connected port.
      unsigned m_con_port;

      IO::NativeHandle
      doGetNative(void) const
      {
#if defined(DUNE_OS_WINDOWS)
        return m_event_handle;
#else
        return m_handle;
#endif
      }

      size_t
      doWrite(const uint8_t* data, size_t data_size)
      {
        return write(data, data_size, m_con_addr, m_con_port);
      }

      size_t
      doRead(uint8_t* data, size_t data_size)
      {
        return read(data, data_size, NULL);
      }

      void
      createEventHandle(void);

      //! Non - copyable.
      UDPSocket(const UDPSocket&);

      //! Non - assignable
      UDPSocket&
      operator=(const UDPSocket&);
    };
  }
}

#endif
