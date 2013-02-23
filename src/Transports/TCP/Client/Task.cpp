//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace TCP
  {
    namespace Client
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        Address address; // Server address.
        int port; // Server port.
      };

      struct Task: public Tasks::SimpleTransport
      {
        // Task arguments.
        Arguments m_args;
        // Socket handle.
        TCPSocket* m_sock;
        // I/O multiplexer.
        IOMultiplexing* m_iom;
        // Parser handle.
        IMC::Parser m_parser;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::SimpleTransport(name, ctx),
          m_sock(NULL),
          m_iom(NULL)
        {
          param("Server - Address", m_args.address)
          .defaultValue("127.0.0.1")
          .description("Remote server address");

          param("Server - Port", m_args.port)
          .defaultValue("7001")
          .description("Remote server port");
        }

        ~Task(void)
        {
          onResourceRelease();
        }

        void
        onResourceAcquisition(void)
        {
          try
          {
            m_sock = new TCPSocket;
            m_sock->connect(m_args.address, m_args.port);
            m_sock->setKeepAlive(true);

            m_iom = new IOMultiplexing;
            m_sock->addToPoll(*m_iom);
            inf("connected to %s:%u", m_args.address.c_str(), m_args.port);
          }
          catch (std::runtime_error& e)
          {
            throw RestartNeeded(e.what(), 5);
          }
        }

        void
        onResourceRelease(void)
        {
          if (m_iom)
          {
            delete m_iom;
            m_iom = NULL;
          }

          if (m_sock)
          {
            delete m_sock;
            m_sock = NULL;
          }

          m_parser.reset();
        }

        void
        onDataTransmission(const uint8_t* p, unsigned int len)
        {
          try
          {
            m_sock->write((const char*)p, len);
          }
          catch (std::exception& e)
          {
            throw RestartNeeded(e.what(), 5);
          }
        }

        void
        onDataReception(uint8_t* p, unsigned int n, double timeout)
        {
          if (!m_iom->poll(timeout))
            return;

          int n_r;
          try
          {
            n_r = m_sock->read((char*)p, n);
          }
          catch (std::runtime_error& e)
          {
            err("receive error: %s", e.what());
            return;
          }

          if (n_r > 0)
            handleData(m_parser, p, n_r);
        }
      };
    }
  }
}

DUNE_TASK
