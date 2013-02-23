//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_ALGORITHMS_XOR_CHECKSUM_HPP_INCLUDED_
#define DUNE_ALGORITHMS_XOR_CHECKSUM_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    //! XOR Checksum Algorithm.
    class XORChecksum
    {
    public:
      //! Compute the XOR checksum of a byte buffer.
      //! @param buffer byte buffer.
      //! @param length byte buffer length.
      //! @param sum checksum value to update.
      //! @return computed checksum.
      inline static uint8_t
      compute(const uint8_t* buffer, uint16_t length, uint8_t sum = 0)
      {
        while (length--)
          sum ^= *buffer++;

        return sum;
      }
    };
  }
}

#endif
