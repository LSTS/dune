//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: FletcherChecksum.hpp 12667 2013-01-22 02:44:42Z rasm             $:*
//***************************************************************************

#ifndef DUNE_ALGORITHMS_FLETCHER_CHECKSUM_HPP_INCLUDED_
#define DUNE_ALGORITHMS_FLETCHER_CHECKSUM_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    //! 8-bit Fletcher Checksum Algorithm.
    //! Implementation of the 8-bit Fletcher Checksum Algorithm as
    //! described in RFC 1146.
    class FletcherChecksum
    {
    public:
      //! Compute the 8-bit Fletcher Checksum of a byte buffer D. The
      //! result is returned in the accumulators A and B that should
      //! be initilized to 0 before calling this method.
      //! @param buffer byte buffer.
      //! @param length byte buffer length.
      //! @param a accumulator A (sum of all bytes).
      //! @param b accumulator B (sum of partial byte sums).
      static inline void
      compute(const uint8_t* buffer, int length, uint8_t& a, uint8_t& b)
      {
        for (int i = 0; i < length; i++)
        {
          a += buffer[i];
          b += a;
        }
      }
    };
  }
}

#endif
