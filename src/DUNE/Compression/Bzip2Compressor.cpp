//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/Bzip2Compressor.hpp>

// Bzip2 headers.
#include <bzip2/bzlib.h>

namespace DUNE
{
  namespace Compression
  {
    unsigned long
    Bzip2Compressor::compressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len)
    {
      // Get proper compression level.
      int plevel = level();
      if (plevel < 1)
        plevel = 1;

      unsigned compressed_length = dst_len;
      int rv = BZ2_bzBuffToBuffCompress(dst, &compressed_length, src, src_len, plevel, 0, 0);

      if (rv == BZ_OK)
        return compressed_length;

      if (rv == BZ_MEM_ERROR)
        throw OutOfMemory();

      if (rv == BZ_OUTBUFF_FULL)
        throw BufferTooShort(dst_len);

      return 0;
    }
  }
}
