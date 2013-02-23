//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/ZlibDecompressor.hpp>

// Zlib headers.
#include <zlib/zlib.h>

namespace DUNE
{
  namespace Compression
  {
    struct ZlibDecompressor::PrivateData
    {
      z_stream stream;
    };

    ZlibDecompressor::ZlibDecompressor(bool gzip):
      Decompressor()
    {
      m_private = new PrivateData;
      m_wbits = gzip ? (MAX_WBITS + 32) : MAX_WBITS;
      clear();
    }

    ZlibDecompressor::~ZlibDecompressor(void)
    {
      inflateEnd(&m_private->stream);
      delete m_private;
    }

    void
    ZlibDecompressor::clear(void)
    {
      m_clear = false;

      z_stream* stream = &m_private->stream;
      stream->next_in = 0;
      stream->avail_in = 0;
      stream->next_out = 0;
      stream->avail_out = 0;
      stream->zalloc = 0;
      stream->zfree = 0;
      stream->total_out = 0;
      stream->opaque = 0;

      int err = inflateInit2(stream, m_wbits);
      if (err != Z_OK)
        throw Error("decompressor initialization failed");
    }

    unsigned long
    ZlibDecompressor::decompressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len, unsigned long& unprocessed_len)
    {
      z_stream* stream = &m_private->stream;

      if (m_clear)
      {
        inflateEnd(stream);
        clear();
      }

      stream->next_in = (Bytef*)src;
      stream->avail_in = (uInt)src_len;
      stream->next_out = (Bytef*)dst;
      stream->avail_out = (uInt)dst_len;

      int err = inflate(stream, Z_NO_FLUSH);

      if (err != Z_OK)
      {
        if (err == Z_STREAM_END)
          m_clear = true;
        else
          throw Error(Utils::String::str("decompressor error %d", err));
      }

      dst_len = dst_len - stream->avail_out;
      unprocessed_len = stream->avail_in;

      return dst_len;
    }
  }
}
