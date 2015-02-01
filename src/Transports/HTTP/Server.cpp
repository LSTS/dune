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
#include <sstream>
#include <fstream>
#include <queue>
#include <iostream>

// DUNE headers.
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Concurrency/Condition.hpp>
#include <DUNE/Concurrency/Mutex.hpp>
#include <DUNE/Network.hpp>

// Local headers.
#include "Server.hpp"

namespace Transports
{
  namespace HTTP
  {
    class Handler: public Concurrency::Thread
    {
    public:
      Handler(RequestHandler& hdler, Concurrency::TSQueue<TCPSocket*>& queue):
        m_handler(hdler),
        m_queue(queue)
      { }

    private:
      RequestHandler& m_handler;
      Concurrency::TSQueue<TCPSocket*>& m_queue;

      void
      run(void)
      {
        while (!isStopping())
        {
          if (!m_queue.waitForItems(1.0))
            continue;

          if (m_queue.closed())
            break;

          TCPSocket* sock = m_queue.pop();
          if (!sock)
            continue;

          try
          {
            m_handler.handleRequest(sock);
          }
          catch (...)
          { }

          delete sock;
        }
      }
    };

    Server::Server(int port, unsigned threads, RequestHandler& handler):
      m_handler(handler)
    {
      m_sock.bind(port);
      m_sock.listen(1024);
      m_poll.add(m_sock);

      for (unsigned int i = 0; i < threads; ++i)
      {
        Concurrency::Thread* t = new Handler(handler, m_queue);
        m_pool.push_back(t);
        t->start();
      }
    }

    Server::~Server(void)
    {
      m_queue.close();

      for (unsigned i = 0; i < m_pool.size(); ++i)
      {
        try
        {
          m_pool[i]->stopAndJoin();
        }
        catch (...)
        { }

        delete m_pool[i];
      }

      while (!m_queue.empty())
      {
        TCPSocket* sock = m_queue.pop();
        if (sock)
          delete sock;
      }
    }

    void
    Server::poll(double timeout)
    {
      if (m_poll.poll(timeout))
      {
        if (m_poll.wasTriggered(m_sock))
        {
          try
          {
            TCPSocket* nc = m_sock.accept();
            m_queue.push(nc);
          }
          catch (std::runtime_error& e)
          {
            DUNE_ERR("Server", e.what());
          }
        }
      }
    }
  }
}
