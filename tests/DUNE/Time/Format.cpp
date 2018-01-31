//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Time/Format.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Time::Format;

static const time_t c_time = 1491139312;

TEST_CASE("getTimeDate")
{
  REQUIRE(Format::getTimeDate(c_time) == "2017/04/02 13:21:52");
}

TEST_CASE("getTimeSafe")
{
  REQUIRE(Format::getTimeSafe(c_time) == "132152");
}

TEST_CASE("getDateSafe")
{
  REQUIRE(Format::getDateSafe(c_time) == "20170402");
}

TEST_CASE("getRFC1123")
{
  REQUIRE(Format::getRFC1123(c_time) == "Sun, 02 Apr 2017 13:21:52 GMT");
}

TEST_CASE("getTimeDateNow")
{
  REQUIRE_FALSE(Format::getTimeDate().empty());
}

TEST_CASE("getTimeSafeNow")
{
  REQUIRE_FALSE(Format::getTimeSafe().empty());
}

TEST_CASE("getDateSafeNow")
{
  REQUIRE_FALSE(Format::getDateSafe().empty());
}

TEST_CASE("getRFC1123Now")
{
  REQUIRE_FALSE(Format::getRFC1123().empty());
}
