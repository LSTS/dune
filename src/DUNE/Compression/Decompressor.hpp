//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_COMPRESSION_DECOMPRESSOR_HPP_INCLUDED_
#define DUNE_COMPRESSION_DECOMPRESSOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/ByteBuffer.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Decompressor;

    class Decompressor
    {
    public:
      Decompressor(void):
        m_decompressed(0),
        m_decompressed_total(0),
        m_processed(0),
        m_processed_total(0),
        m_unprocessed(0)
      { }

      virtual
      ~Decompressor(void)
      { }

      void
      decompress(char* dst, unsigned long dst_len, char* src, unsigned long src_len);

      Utils::ByteBuffer
      decompress(char* src, unsigned long src_len);

      void
      decompress(Utils::ByteBuffer& dst, Utils::ByteBuffer& src);

      unsigned long
      decompressed(void)
      {
        return m_decompressed;
      }

      unsigned long
      decompressedTotal(void)
      {
        return m_decompressed_total;
      }

      unsigned long
      processed(void)
      {
        return m_processed;
      }

      unsigned long
      processedTotal(void)
      {
        return m_processed_total;
      }

      unsigned long
      unprocessed(void)
      {
        return m_unprocessed;
      }

    protected:
      virtual unsigned long
      decompressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len, unsigned long& unprocessed_len) = 0;

    private:
      unsigned long m_decompressed;
      unsigned long m_decompressed_total;
      unsigned long m_processed;
      unsigned long m_processed_total;
      unsigned long m_unprocessed;
    };
  }
}

#endif
