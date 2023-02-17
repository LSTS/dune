//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
