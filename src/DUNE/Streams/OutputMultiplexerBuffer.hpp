//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_STREAMS_OUTPUT_MULTIPLEXER_BUFFER_HPP_INCLUDED_
#define DUNE_STREAMS_OUTPUT_MULTIPLEXER_BUFFER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <streambuf>
#include <ostream>
#include <vector>
#include <iostream>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Streams
  {
    class OutputMultiplexerBuffer: public std::streambuf
    {
    public:
      OutputMultiplexerBuffer(void);

      OutputMultiplexerBuffer(std::ostream* stream);

      virtual
      ~OutputMultiplexerBuffer(void);

      void
      add(std::ostream* stream);

    protected:
      virtual int
      sync(void);

      virtual int_type
      overflow(int_type c);

      virtual int_type
      underflow(void)
      {
        std::cerr << "underflow" << std::endl;
        return 1;
      }

      virtual std::streamsize
      xsputn(const char* bfr, std::streamsize length);

    private:
      //! Associated output streams.
      std::vector<std::ostream*> m_streams;
    };
  }
}

#endif
