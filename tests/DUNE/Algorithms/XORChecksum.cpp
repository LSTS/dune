//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Algorithms/XORChecksum.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("compute")
{
  uint8_t data[] = {0x09, 0x01, 0x02};
  REQUIRE(DUNE::Algorithms::XORChecksum::compute(data, sizeof(data)) == 0x0a);
}
