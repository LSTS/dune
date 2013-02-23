//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_COMPRESSION_COMPRESSOR_HPP_INCLUDED_
#define DUNE_COMPRESSION_COMPRESSOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/ByteBuffer.hpp>

namespace DUNE
{
  namespace Compression
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Compressor;

    class Compressor
    {
    public:
      Compressor(int a_level = -1):
        m_level(a_level),
        m_compressed(0),
        m_processed(0),
        m_compressed_total(0),
        m_processed_total(0)
      { }

      virtual
      ~Compressor(void)
      { }

      void
      compress(char* dst, unsigned long dst_len, char* src, unsigned long src_len);

      Utils::ByteBuffer
      compress(char* src, unsigned long src_len);

      void
      compress(Utils::ByteBuffer& dst, char* src, unsigned long src_len);

      Utils::ByteBuffer
      compress(Utils::ByteBuffer& src);

      void
      compress(Utils::ByteBuffer& dst, Utils::ByteBuffer& src);

      unsigned long
      compressed(void) const
      {
        return m_compressed;
      }

      unsigned long
      compressedTotal(void) const
      {
        return m_compressed_total;
      }

      unsigned long
      processed(void) const
      {
        return m_processed;
      }

      unsigned long
      processedTotal(void) const
      {
        return m_processed_total;
      }

      int
      level(void) const
      {
        return m_level;
      }

      void
      level(int a_level)
      {
        m_level = a_level;
      }

    protected:
      virtual unsigned long
      compressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len) = 0;

      virtual unsigned long
      compressBound(unsigned long length) const
      {
        return length + c_overhead;
      }

    private:
      //! Compression overhead.
      static const unsigned long c_overhead = 1024;
      int m_level;
      unsigned long m_compressed;
      unsigned long m_processed;
      unsigned long m_compressed_total;
      unsigned long m_processed_total;
    };
  }
}

#endif
