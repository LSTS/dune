//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_COMPRESSION_FILE_OUTPUT_HPP_INCLUDED_
#define DUNE_COMPRESSION_FILE_OUTPUT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <fstream>

// DUNE headers.
#include <DUNE/Compression/StreamBuffer.hpp>
#include <DUNE/Compression/Methods.hpp>

namespace DUNE
{
  namespace Compression
  {
    class FileOutput: public std::ostream
    {
    public:
      FileOutput(const char* filename, Methods method):
        std::ostream(0),
        m_method(method),
        m_stream(filename, std::ios::binary | std::ios::out),
        m_buffer(0)
      {
        attach(m_stream);
      }

      ~FileOutput(void)
      {
        delete m_buffer;
      }

      void
      attach(std::ostream& stream)
      {
        if (m_buffer)
          delete m_buffer;

        m_buffer = new StreamBuffer(&stream, m_method);
        rdbuf(m_buffer);
      }

    protected:
      Methods m_method;
      std::ofstream m_stream;
      StreamBuffer* m_buffer;
    };
  }
}

#endif
