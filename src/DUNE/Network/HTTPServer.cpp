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

// ISO C++ 98 headers.
#include <sstream>
#include <fstream>
#include <queue>
#include <iostream>

// DUNE headers.
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/System/IOMultiplexing.hpp>
#include <DUNE/Concurrency/Condition.hpp>
#include <DUNE/Concurrency/Mutex.hpp>
#include <DUNE/Network.hpp>

namespace DUNE
{
  namespace Network
  {
    class Handler: public Concurrency::Thread
    {
    public:
      Handler(HTTPRequestHandler& hdler, Concurrency::TSQueue<TCPSocket*>& queue):
        m_handler(hdler),
        m_queue(queue)
      { }

    private:
      HTTPRequestHandler& m_handler;
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
          catch (std::runtime_error& e)
          {
            DUNE_ERR("HTTPHandler", e.what());
          }

          delete sock;
        }
      }
    };

    HTTPServer::HTTPServer(int port, unsigned threads, HTTPRequestHandler& handler):
      m_handler(handler)
    {
      m_sock.bind(port);
      m_sock.listen(1024);
      m_sock.addToPoll(m_iom);

      for (unsigned int i = 0; i < threads; ++i)
      {
        Concurrency::Thread* t = new Handler(handler, m_queue);
        m_pool.push_back(t);
        t->start();
      }
    }

    HTTPServer::~HTTPServer(void)
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
    HTTPServer::poll(double timeout)
    {
      if (m_iom.poll(timeout))
      {
        if (m_sock.wasTriggered(m_iom))
        {
          try
          {
            TCPSocket* nc = m_sock.accept();
            m_queue.push(nc);
          }
          catch (std::runtime_error& e)
          {
            DUNE_ERR("HTTPServer", e.what());
          }
        }
      }
    }
  }
}
