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
