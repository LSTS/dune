//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_COMPRESSION_FILTER_INPUT_HPP_INCLUDED_
#define DUNE_COMPRESSION_FILTER_INPUT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <istream>

// DUNE headers.
#include <DUNE/Compression/StreamBuffer.hpp>
#include <DUNE/Compression/Methods.hpp>

namespace DUNE
{
  namespace Compression
  {
    class FilterInput: public std::istream
    {
    public:
      FilterInput(Methods method):
        std::istream(0),
        m_method(method),
        m_buffer(0)
      { }

      FilterInput(std::istream& stream, Methods method):
        std::istream(0),
        m_method(method),
        m_buffer(0)
      {
        setStream(stream, m_method);
      }

      ~FilterInput(void)
      {
        delete m_buffer;
      }

      void
      setStream(std::istream& stream, Methods method)
      {
        if (m_buffer)
          delete m_buffer;

        m_buffer = new StreamBuffer(&stream, method);
        rdbuf(m_buffer);
      }

    protected:
      Methods m_method;
      StreamBuffer* m_buffer;
    };
  }
}

#endif
