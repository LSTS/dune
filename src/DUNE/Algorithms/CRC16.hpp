//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
