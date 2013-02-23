//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: FileInput.hpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

#ifndef DUNE_COMPRESSION_FILE_INPUT_HPP_INCLUDED_
#define DUNE_COMPRESSION_FILE_INPUT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <istream>
#include <fstream>

// DUNE headers.
#include <DUNE/Compression/StreamBuffer.hpp>
#include <DUNE/Compression/Methods.hpp>

namespace DUNE
{
  namespace Compression
  {
    class FileInput: public std::istream
    {
    public:
      FileInput(const char* filename, Methods method):
        std::istream(0),
        m_method(method),
        m_stream(filename, std::ios::binary | std::ios::in),
        m_buffer(0)
      {
        attach(m_stream);
      }

      ~FileInput(void)
      {
        delete m_buffer;
      }

      void
      attach(std::istream& stream)
      {
        if (m_buffer)
          delete m_buffer;

        m_buffer = new StreamBuffer(&stream, m_method);
        rdbuf(m_buffer);
      }

    protected:
      Methods m_method;
      std::ifstream m_stream;
      StreamBuffer* m_buffer;
    };
  }
}

#endif
