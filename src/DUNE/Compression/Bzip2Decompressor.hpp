//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_COMPRESSION_BZIP2_DECOMPRESSOR_HPP_INCLUDED_
#define DUNE_COMPRESSION_BZIP2_DECOMPRESSOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Compression/Decompressor.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Bzip2Decompressor;

    class Bzip2Decompressor: public Decompressor
    {
    public:
      Bzip2Decompressor(void);

      ~Bzip2Decompressor(void);

    protected:
      virtual unsigned long
      decompressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len, unsigned long& unprocessed_len);

    private:
      // Forward declaration of private data.
      struct PrivateData;
      //! Private data, used to store bzip2 specific structures.
      PrivateData* m_private;
      //! True if the compressor's state must be cleared.
      bool m_clear;

      void
      clear(void);
    };
  }
}

#endif
