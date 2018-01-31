//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Algorithms/CRC8.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("putArray")
{
  uint8_t data[] = {0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39};
  DUNE::Algorithms::CRC8 crc(0x07);
  REQUIRE(crc.putArray(data, sizeof(data)) == 0xf4);
  REQUIRE(crc.get() == 0xf4);
}
