//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: ZlibDecompressor.hpp 12667 2013-01-22 02:44:42Z rasm             $:*
//***************************************************************************

#ifndef DUNE_COMPRESSION_ZLIB_DECOMPRESSOR_HPP_INCLUDED_
#define DUNE_COMPRESSION_ZLIB_DECOMPRESSOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Compression/Decompressor.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM ZlibDecompressor;

    class ZlibDecompressor: public Decompressor
    {
    public:
      ZlibDecompressor(bool gzip = false);

      virtual
      ~ZlibDecompressor(void);

    protected:
      virtual unsigned long
      decompressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len, unsigned long& unprocessed_len);

    private:
      // Forward declaration of private data.
      struct PrivateData;
      //! Private data, used to store zlib specific structures.
      PrivateData* m_private;
      //! True if the compressor's state must be cleared.
      bool m_clear;
      //! Window bits.
      int m_wbits;

      void
      clear(void);
    };
  }
}

#endif
