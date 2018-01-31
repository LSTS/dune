//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Units.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("meters")
{
  REQUIRE(std::string("m") == DUNE::Units::getAbbrev(DUNE::Units::Meter));
}
