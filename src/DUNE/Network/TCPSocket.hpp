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

#ifndef DUNE_NETWORK_TCP_SOCKET_HPP_INCLUDED_
#define DUNE_NETWORK_TCP_SOCKET_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <cstddef>

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
    class DUNE_DLL_SYM TCPSocket;

    //! TCP Socket.
    class TCPSocket: public IO::Handle
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
      connect(const Address& add, uint16_t port);

      void
      listen(int backlog);

      TCPSocket*
      accept(Address* a = 0, uint16_t* port = 0);

      bool
      writeFile(const char* filename, int64_t off_end, int64_t off_beg = -1);

      //! Enable/disable keep-alive messages. When enabled connections
      //! are kept active by periodically transmitting messages.
      //! @param[in] enabled true to enable this feature, false to
      //! disable.
      void
      setKeepAlive(bool enabled);

      //! Disable/enable the Nagle algorithm.
      //! @param[in] enabled true to disable Nagle algorithm, false to
      //! enable.
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
      HANDLE m_event_handle;
#else
      int m_handle;
#endif

      IO::NativeHandle
      doGetNative(void) const;

      size_t
      doRead(uint8_t* buffer, size_t size);

      size_t
      doWrite(const uint8_t* bfr, size_t size);

      void
      doFlushInput(void);

      // Non - copyable.
      TCPSocket(TCPSocket const&);

      // Non - assignable
      TCPSocket&
      operator=(TCPSocket const&);

      //! Disable SIGPIPE generation.
      void
      disableSIGPIPE(void);

      void
      createEventHandle(void);
    };
  }
}

#endif
