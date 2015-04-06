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

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/GzipCompressor.hpp>

// Gzip headers.
#include <zlib/zlib.h>

namespace DUNE
{
  namespace Compression
  {
    //! GZIP header.
    static const uint8_t c_header[] = {0x1f, 0x8b, 8, 0, 0, 0, 0, 0, 0, 255};
    static const unsigned c_header_size = sizeof(c_header);

    unsigned long
    GzipCompressor::compressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len)
    {
      uint32_t length = src_len;
      unsigned long out_len = ZlibCompressor::compressBlock(dst + 8, dst_len - 8, src, src_len);
      unsigned long usable_len = out_len - 6;

      // Write GZIP header.
      std::memcpy(dst, c_header, c_header_size);

      // fixme: assert little endian.
      uint32_t crc = crc32(0, (Bytef*)src, src_len);
      std::memcpy(dst + c_header_size + usable_len, &crc, sizeof(crc));
      std::memcpy(dst + c_header_size + usable_len + sizeof(crc), &length, sizeof(length));

      return usable_len + c_header_size + sizeof(crc) + sizeof(length);
    }
  }
}
