//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Kristoffer Gryte based on work by Ricardo Martins and            *
// Gary S. Brown http://c.snippets.org/snip_lister.php?fname=crc_32.c       *
//***************************************************************************

#ifndef DUNE_ALGORITHMS_CRC32_HPP_INCLUDED_
#define DUNE_ALGORITHMS_CRC32_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM CRC32;

    extern const uint32_t c_crc32_table[256];

    //! CRC-32 Algorithm.
    //! The polynomial used is x^32 + x^26 + x^23 + x^22 + x^16 + x^12 + x^11 + x^10 + x^8 + x^7 + x^5 + x^4 + x^2 + 1 (0x04C11DB7)
    class CRC32
    {
    public:

      // From https://barrgroup.com/Embedded-Systems/How-To/CRC-Calculation-C-Code
      // Reflect the data around the center bit
      static inline uint32_t
      reflect(uint32_t data, const uint8_t len)
      {
          uint32_t  reflection = 0;

          for (uint8_t bit = 0; bit < len; ++bit)
          {
              if (data & 0x01)
              {
                  reflection |= (1 << ((len - 1) - bit));
              }

              data = (data >> 1);
          }

          return reflection;
      }
      //! Compute the CRC-32 of a given data buffer.
      //! @param buffer data buffer.
      //! @param len data buffer length.
      //! @param do_reflect if true, the intermediate results are reflected
      //! @param crc CRC-32 value to update.
      //! @return computed CRC-32.
      static inline uint32_t 
      compute(const uint8_t *buf, const uint8_t len, bool do_reflect, uint32_t crc=0)
      {

        const uint8_t *end;
        uint8_t data;

        crc = ~crc;
        for (end = buf + len; buf < end; ++buf)
        {
          data = do_reflect? reflect(*buf,8) : *buf;
          crc = c_crc32_table[(crc ^ data) & 0xff] ^ (crc >> 8);
        }
        return ~crc;
      }
    };
  }
}

#endif
