//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: OutputMultiplexerBuffer.cpp 12667 2013-01-22 02:44:42Z rasm      $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <streambuf>
#include <ostream>
#include <cstdlib>
#include <cerrno>
#include <cstring>
#include <iostream>

// DUNE headers.
#include <DUNE/Streams/OutputMultiplexerBuffer.hpp>

namespace DUNE
{
  namespace Streams
  {
    OutputMultiplexerBuffer::OutputMultiplexerBuffer(void)
    { }

    OutputMultiplexerBuffer::OutputMultiplexerBuffer(std::ostream* stream)
    {
      m_streams.push_back(stream);
    }

    OutputMultiplexerBuffer::~OutputMultiplexerBuffer(void)
    {
      sync();
    }

    void
    OutputMultiplexerBuffer::add(std::ostream* stream)
    {
      m_streams.push_back(stream);
    }

    int
    OutputMultiplexerBuffer::sync(void)
    {
      for (unsigned int i = 0; i < m_streams.size(); ++i)
      {
        m_streams[i]->flush();
      }

      return 1;
    }

    OutputMultiplexerBuffer::int_type
    OutputMultiplexerBuffer::overflow(int_type c)
    {
      for (unsigned int i = 0; i < m_streams.size(); ++i)
      {
        m_streams[i]->put(c);
      }

      return c;
    }

    std::streamsize
    OutputMultiplexerBuffer::xsputn(const char* bfr, std::streamsize length)
    {
      for (unsigned int i = 0; i < m_streams.size(); ++i)
      {
        m_streams[i]->write(bfr, length);
      }

      return length;
    }
  }
}
