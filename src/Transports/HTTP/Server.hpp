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

#ifndef TRANSPORTS_HTTP_SERVER_HPP_INCLUDED_
#define TRANSPORTS_HTTP_SERVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "RequestHandler.hpp"

namespace Transports
{
  namespace HTTP
  {
    class Server
    {
    public:
      //! Constructor.
      //! @param port listening port.
      //! @param threads number of worker threads.
      //! @param handler HTTP request handler.
      Server(int port, unsigned threads, RequestHandler& handler);

      //! Destructor.
      ~Server(void);

      void
      poll(double timeout);

    private:
      //! HTTP request handler.
      RequestHandler& m_handler;
      //! Server socket.
      TCPSocket m_sock;
      //! Worker threads pool.
      std::vector<Concurrency::Thread*> m_pool;
      //! Socket queue.
      Concurrency::TSQueue<TCPSocket*> m_queue;
      //! I/O multiplexing.
      IO::Poll m_poll;
    };
  }
}

#endif
