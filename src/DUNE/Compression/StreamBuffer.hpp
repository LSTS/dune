//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_COMPRESSION_STREAM_BUFFER_HPP_INCLUDED_
#define DUNE_COMPRESSION_STREAM_BUFFER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <streambuf>
#include <ostream>
#include <istream>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Compression/Methods.hpp>
#include <DUNE/Utils/ByteBuffer.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Forward declarations.
    class Compressor;
    class Decompressor;

    // Export DLL Symbol.
    class DUNE_DLL_SYM StreamBuffer;

    class StreamBuffer: public std::streambuf
    {
    public:
      StreamBuffer(std::ostream* stream, Methods method);

      StreamBuffer(std::istream* stream, Methods method);

      virtual
      ~StreamBuffer(void);

    protected:
      virtual int_type
      overflow(int_type c);

      virtual int_type
      underflow(void);

      virtual int
      sync(void);

      virtual std::streamsize
      xsputn(const char* bfr, std::streamsize bfr_len);

      virtual std::streamsize
      xsgetn(char* bfr, std::streamsize bfr_len);

    private:
      //! Stream format.
      Methods m_method;
      //! Associated output stream.
      std::ostream* m_ostream;
      //! Associated input stream.
      std::istream* m_istream;
      //! Compressor.
      Compressor* m_com;
      //! Decompressor.
      Decompressor* m_dec;
      //! Internal buffer.
      Utils::ByteBuffer m_bfr;
      //! Internal compression buffer.
      Utils::ByteBuffer m_com_bfr;
      //! Read index of the internal buffer.
      unsigned m_get_bfr_idx;
      //! Remaining bytes to read in the internal buffer.
      unsigned m_get_bfr_rem;
    };
  }
}

#endif
