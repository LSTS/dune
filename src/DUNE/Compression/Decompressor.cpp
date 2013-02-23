//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Decompressor.cpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

#include <DUNE/Compression/Decompressor.hpp>

namespace DUNE
{
  namespace Compression
  {
    void
    Decompressor::decompress(char* dst, unsigned long dst_len, char* src, unsigned long src_len)
    {
      m_decompressed = 0;
      m_processed = 0;
      m_unprocessed = 0;

      unsigned long rv = decompressBlock(dst, dst_len, src, src_len, m_unprocessed);

      m_decompressed = rv;
      m_decompressed_total += rv;
      m_processed = src_len - m_unprocessed;
      m_processed_total += m_processed;
    }

    Utils::ByteBuffer
    Decompressor::decompress(char* src, unsigned long src_len)
    {
      Utils::ByteBuffer dst;
      unsigned dst_len = 128 * 1024;
      dst.setSize(dst_len);
      decompress(dst.getBufferSigned(), dst.getSize(), src, src_len);
      dst.setSize(decompressed());
      return dst;
    }

    void
    Decompressor::decompress(Utils::ByteBuffer& dst, Utils::ByteBuffer& src)
    {
      decompress(dst.getBufferSigned(), dst.getSize(), src.getBufferSigned(), src.getSize());
      dst.setSize(decompressed());
    }
  }
}
