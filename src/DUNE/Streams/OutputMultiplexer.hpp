//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_STREAMS_OUTPUT_MULTIPLEXER_HPP_INCLUDED_
#define DUNE_STREAMS_OUTPUT_MULTIPLEXER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <iomanip>

// DUNE headers.
#include <DUNE/Streams/OutputMultiplexerBuffer.hpp>

namespace DUNE
{
  namespace Streams
  {
    class OutputMultiplexer: public std::ostream
    {
    public:
      OutputMultiplexer(void)
      {
        rdbuf(&m_buffer);
      }

      void
      add(std::ostream& stream)
      {
        m_buffer.add(&stream);
      }

    protected:
      OutputMultiplexerBuffer m_buffer;
    };
  }
}

#endif
