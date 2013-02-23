//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: ZlibCompressor.cpp 12667 2013-01-22 02:44:42Z rasm               $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/ZlibCompressor.hpp>

// Zlib headers.
#include <zlib/zlib.h>

namespace DUNE
{
  namespace Compression
  {
    unsigned long
    ZlibCompressor::compressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len)
    {
      unsigned long compressed_length = dst_len;
      int rv = ::compress2((Bytef*)dst, &compressed_length, (const Bytef*)src, src_len, level());

      if (rv == Z_OK)
        return compressed_length;

      if (rv == Z_MEM_ERROR)
        throw OutOfMemory();

      if (rv == Z_BUF_ERROR)
        throw BufferTooShort(dst_len);

      return 0;
    }

    unsigned long
    ZlibCompressor::compressBound(unsigned long length) const
    {
      return ::compressBound(length);
    }
  }
}
