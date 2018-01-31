//***************************************************************************
// Copyright 2016 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_ALGORITHMS_RADIX64_NMEA_HPP_INCLUDED_
#define DUNE_ALGORITHMS_RADIX64_NMEA_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Algorithms/Radix64.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    class AlphabetNMEA
    {
    public:
      static const char* c_enc;
      static const uint8_t c_dec[256];
    };

    typedef Radix64<AlphabetNMEA> Radix64NMEA;
  }
}

#endif
