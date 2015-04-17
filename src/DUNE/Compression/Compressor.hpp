//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
