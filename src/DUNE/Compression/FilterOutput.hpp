//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_COMPRESSION_FILTER_OUTPUT_HPP_INCLUDED_
#define DUNE_COMPRESSION_FILTER_OUTPUT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>

// DUNE headers.
#include <DUNE/Compression/StreamBuffer.hpp>
#include <DUNE/Compression/Methods.hpp>

namespace DUNE
{
  namespace Compression
  {
    class FilterOutput: public std::ostream
    {
    public:
      FilterOutput(Methods method):
        std::ostream(0),
        m_method(method),
        m_buffer(0)
      { }

      FilterOutput(std::ostream& stream, Methods method):
        std::ostream(0),
        m_buffer(0)
      {
        setStream(stream, method);
      }

      ~FilterOutput(void)
      {
        delete m_buffer;
      }

      void
      setStream(std::ostream& stream, Methods method)
      {
        m_method = method;

        if (m_buffer)
          delete m_buffer;

        m_buffer = new StreamBuffer(&stream, m_method);
        rdbuf(m_buffer);
      }

    protected:
      Methods m_method;
      StreamBuffer* m_buffer;
    };
  }
}

#endif
