//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Memory.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("clear")
{
  uint8_t* data = new uint8_t;
  REQUIRE(data != NULL);
  DUNE::Memory::clear(data);
  REQUIRE(data == NULL);
}

TEST_CASE("replace")
{
  uint8_t* a = new uint8_t;
  uint8_t* b = new uint8_t;
  DUNE::Memory::replace(a, b);
  REQUIRE(a == b);
}
