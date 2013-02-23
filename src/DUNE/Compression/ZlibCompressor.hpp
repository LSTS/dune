//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: ZlibCompressor.hpp 12667 2013-01-22 02:44:42Z rasm               $:*
//***************************************************************************

#ifndef DUNE_COMPRESSION_ZLIB_COMPRESSOR_HPP_INCLUDED_
#define DUNE_COMPRESSION_ZLIB_COMPRESSOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Compression/Compressor.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM ZlibCompressor;

    class ZlibCompressor: public Compressor
    {
    public:
      ZlibCompressor(int a_level = -1):
        Compressor(a_level)
      { }

    protected:
      virtual unsigned long
      compressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len);

      virtual unsigned long
      compressBound(unsigned long length) const;
    };
  }
}

#endif
