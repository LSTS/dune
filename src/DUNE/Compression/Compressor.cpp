//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Compressor.cpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Compression/Compressor.hpp>
#include <DUNE/Compression/Exceptions.hpp>

namespace DUNE
{
  namespace Compression
  {
    void
    Compressor::compress(char* dst, unsigned long dst_len, char* src, unsigned long src_len)
    {
      m_compressed = 0;
      m_processed = 0;

      unsigned long rv = compressBlock(dst, dst_len, src, src_len);
      m_compressed = rv;
      m_compressed_total += rv;
      m_processed = src_len;
      m_processed_total += src_len;
    }

    Utils::ByteBuffer
    Compressor::compress(char* src, unsigned long src_len)
    {
      Utils::ByteBuffer dst;
      compress(dst, src, src_len);
      return dst;
    }

    void
    Compressor::compress(Utils::ByteBuffer& dst, char* src, unsigned long src_len)
    {
      unsigned bfr_size = compressBound(src_len);

      bool done = false;
      while (!done)
      {
        dst.setSize(bfr_size);

        try
        {
          compress(dst.getBufferSigned(), dst.getSize(), src, src_len);
          done = true;
        }
        catch (BufferTooShort& e)
        {
          (void)e;
          bfr_size <<= 1;
        }
      }

      dst.setSize(m_compressed);
    }

    Utils::ByteBuffer
    Compressor::compress(Utils::ByteBuffer& src)
    {
      return compress(src.getBufferSigned(), src.getSize());
    }

    void
    Compressor::compress(Utils::ByteBuffer& dst, Utils::ByteBuffer& src)
    {
      return compress(dst, src.getBufferSigned(), src.getSize());
    }
  }
}
