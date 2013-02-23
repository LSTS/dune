//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: StreamBuffer.cpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <streambuf>
#include <ostream>
#include <cstdlib>
#include <cerrno>
#include <cstring>
#include <cstdio>

// DUNE headers.
#include <DUNE/Compression/StreamBuffer.hpp>
#include <DUNE/Compression/Factory.hpp>
#include <DUNE/Compression/Compressor.hpp>
#include <DUNE/Compression/Decompressor.hpp>

static const unsigned c_put_bfr_size = 128 * 1024;
static const unsigned c_get_bfr_size = 256 * 1024;

namespace DUNE
{
  namespace Compression
  {
    StreamBuffer::StreamBuffer(std::ostream* stream, Methods method):
      m_method(method),
      m_ostream(stream),
      m_istream(0),
      m_dec(0)
    {
      m_com = Factory::compressor(method);
    }

    StreamBuffer::StreamBuffer(std::istream* stream, Methods method):
      m_method(method),
      m_ostream(0),
      m_istream(stream),
      m_com(0),
      m_get_bfr_idx(0),
      m_get_bfr_rem(0)
    {
      m_dec = Factory::decompressor(method);
      m_bfr.setSize(c_get_bfr_size);
    }

    StreamBuffer::~StreamBuffer(void)
    {
      sync();

      if (m_ostream)
        delete m_com;

      if (m_istream)
        delete m_dec;
    }

    int
    StreamBuffer::sync(void)
    {
      if (m_ostream)
      {
        m_com->compress(m_com_bfr, m_bfr);
        m_ostream->write(m_com_bfr.getBufferSigned(), m_com_bfr.getSize());
        m_ostream->flush();
        m_bfr.setSize(0);
        return 1;
      }

      return 0;
    }

    StreamBuffer::int_type
    StreamBuffer::overflow(int_type c)
    {
      return c;
    }

    StreamBuffer::int_type
    StreamBuffer::underflow(void)
    {
      return EOF;
    }

    std::streamsize
    StreamBuffer::xsputn(const char* bfr, std::streamsize length)
    {
      m_bfr.appendSigned(bfr, length);

      if (m_bfr.getSize() >= c_put_bfr_size)
        sync();

      return length;
    }

    std::streamsize
    StreamBuffer::xsgetn(char* bfr, std::streamsize bfr_len)
    {
      unsigned chunk_rem = bfr_len;
      unsigned chunk_idx = 0;

      while (chunk_rem > 0)
      {
        if (m_get_bfr_rem == 0)
        {
          if (m_istream->eof())
          {
            if (chunk_idx == 0)
              return EOF;
            else
              break;
          }

          m_istream->read(m_bfr.getBufferSigned(), m_bfr.getSize());
          m_get_bfr_idx = 0;
          m_get_bfr_rem = m_istream->gcount();
        }

        m_dec->decompress(bfr + chunk_idx, chunk_rem, m_bfr.getBufferSigned() + m_get_bfr_idx, m_get_bfr_rem);
        m_get_bfr_idx += m_dec->processed();
        m_get_bfr_rem -= m_dec->processed();

        chunk_rem -= m_dec->decompressed();
        chunk_idx += m_dec->decompressed();
      }

      return chunk_idx;
    }
  }
}
