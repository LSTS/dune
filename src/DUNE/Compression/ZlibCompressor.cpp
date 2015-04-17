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

// DUNE headers.
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/ZlibCompressor.hpp>

// Zlib headers.
#include <zlib/zlib.h>

namespace DUNE
{
  namespace Compression
  {
    unsigned long
    ZlibCompressor::compressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len)
    {
      unsigned long compressed_length = dst_len;
      int rv = ::compress2((Bytef*)dst, &compressed_length, (const Bytef*)src, src_len, level());

      if (rv == Z_OK)
        return compressed_length;

      if (rv == Z_MEM_ERROR)
        throw OutOfMemory();

      if (rv == Z_BUF_ERROR)
        throw BufferTooShort(dst_len);

      return 0;
    }

    unsigned long
    ZlibCompressor::compressBound(unsigned long length) const
    {
      return ::compressBound(length);
    }
  }
}
