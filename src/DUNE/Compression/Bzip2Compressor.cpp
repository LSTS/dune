//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Bzip2Compressor.cpp 12667 2013-01-22 02:44:42Z rasm              $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/Bzip2Compressor.hpp>

// Bzip2 headers.
#include <bzip2/bzlib.h>

namespace DUNE
{
  namespace Compression
  {
    unsigned long
    Bzip2Compressor::compressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len)
    {
      // Get proper compression level.
      int plevel = level();
      if (plevel < 1)
        plevel = 1;

      unsigned compressed_length = dst_len;
      int rv = BZ2_bzBuffToBuffCompress(dst, &compressed_length, src, src_len, plevel, 0, 0);

      if (rv == BZ_OK)
        return compressed_length;

      if (rv == BZ_MEM_ERROR)
        throw OutOfMemory();

      if (rv == BZ_OUTBUFF_FULL)
        throw BufferTooShort(dst_len);

      return 0;
    }
  }
}
