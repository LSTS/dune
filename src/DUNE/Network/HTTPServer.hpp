//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_NETWORK_HTTP_SERVER_HPP_INCLUDED_
#define DUNE_NETWORK_HTTP_SERVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/Network/TCPSocket.hpp>
#include <DUNE/Network/HTTPRequestHandler.hpp>

namespace DUNE
{
  namespace Network
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM HTTPServer;

    class HTTPServer
    {
    public:
      //! Constructor.
      //! @param port listening port.
      //! @param threads number of worker threads.
      //! @param handler HTTP request handler.
      HTTPServer(int port, unsigned threads, HTTPRequestHandler& handler);

      //! Destructor.
      ~HTTPServer(void);

      void
      poll(double timeout);

    private:
      //! HTTP request handler.
      HTTPRequestHandler& m_handler;
      //! Server socket.
      TCPSocket m_sock;
      //! Worker threads pool.
      std::vector<Concurrency::Thread*> m_pool;
      //! Socket queue.
      Concurrency::TSQueue<TCPSocket*> m_queue;
      //! I/O multiplexing.
      System::IOMultiplexing m_iom;
    };
  }
}

#endif
