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

#ifndef DUNE_ALGORITHMS_CRC16_HPP_INCLUDED_
#define DUNE_ALGORITHMS_CRC16_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM CRC16;

    extern const uint16_t c_crc16_ibm_table[256];

    //! CRC-16-IBM Algorithm.
    //! The polynomial used is x^16 + x^15 + x^2 + 1 (0x8005)
    class CRC16
    {
    public:
      //! Compute the CRC-16-IBM of a given data buffer.
      //! @param buffer data buffer.
      //! @param len data buffer length.
      //! @param crc CRC-16-IBM value to update.
      //! @return computed CRC-16-IBM.
      static inline uint16_t
      compute(const uint8_t* buffer, uint16_t len, uint16_t crc = 0)
      {
        while (len--)
          crc = (crc >> 8) ^ c_crc16_ibm_table[(crc ^ *buffer++) & 0xff];

        return crc;
      }

      //! Compute the CRC-16-IBM of a given byte.
      //! @param byte byte.
      //! @param crc CRC-16-IBM value to update.
      //! @return computed CRC-16-IBM.
      static inline uint16_t
      compute(uint8_t byte, uint16_t crc = 0)
      {
        return (crc >> 8) ^ c_crc16_ibm_table[(crc ^ byte) & 0xff];
      }
    };
  }
}

#endif
