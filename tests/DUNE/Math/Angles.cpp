//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Math/Angles.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Math::Angles;

TEST_CASE("normalizeRadian")
{
  REQUIRE(Angles::normalizeRadian(6.283185307179586) == Approx(0.0));
}

TEST_CASE("radians")
{
  REQUIRE(Angles::radians(0) == Approx(0.0));
  REQUIRE(Angles::radians(45.0) == Approx(0.7853981633974483));
  REQUIRE(Angles::radians(90.0) == Approx(1.5707963267948966));
  REQUIRE(Angles::radians(180.0) == Approx(3.141592653589793));
}

TEST_CASE("degrees")
{
  REQUIRE(Angles::degrees(0) == Approx(0.0));
  REQUIRE(Angles::degrees(0.7853981633974483) == Approx(45));
  REQUIRE(Angles::degrees(1.5707963267948966) == Approx(90));
  REQUIRE(Angles::degrees(3.141592653589793) == Approx(180));
}

TEST_CASE("convertDMSToDecimal")
{
  REQUIRE(Angles::convertDMSToDecimal(180, 2, 15) == Approx(180.0375));
  REQUIRE(Angles::convertDMSToDecimal(-180, 2, 15) == Approx(-180.0375));
  REQUIRE(Angles::convertDMSToDecimal(30, 20, 90) == Approx(30.35833));

  REQUIRE(Angles::convertDMSToDecimal(180, 2.6) == Approx(180.0433));
  REQUIRE(Angles::convertDMSToDecimal(-180, 2.6) == Approx(-180.0433));
}

TEST_CASE("convertDecimalToDMS")
{
  {
    int deg = 0;
    int min = 0;
    double sec = 0;
    Angles::convertDecimalToDMS(180.0375, deg, min, sec);
    REQUIRE(deg == 180);
    REQUIRE(min == 2);
    REQUIRE(sec == Approx(15));
  }

  {
    int deg = 0;
    int min = 0;
    double sec = 0;
    Angles::convertDecimalToDMS(-180.0375, deg, min, sec);
    REQUIRE(deg == -180);
    REQUIRE(min == 2);
    REQUIRE(sec == Approx(15));
  }
}

TEST_CASE("convertDecimalToDM")
{
  {
    int deg = 0;
    double min = 0;
    Angles::convertDecimalToDM(123.2, deg, min);
    REQUIRE(deg == 123);
    REQUIRE(min == Approx(12));
  }

  {
    int deg = 0;
    double min = 0;
    Angles::convertDecimalToDM(20.5, deg, min);
    REQUIRE(deg == 20);
    REQUIRE(min == Approx(30));
  }
}

TEST_CASE("rotate")
{
  // Clockwise.
  {
    double x = 3;
    double y = 4;
    double rad = 0.5235987755982988;
    Angles::rotate(rad, true, x, y);
    REQUIRE(x == Approx(4.5980762113533));
    REQUIRE(y == Approx(1.9641016151378));
  }

  // Counterclockwise.
  {
    double x = 3;
    double y = 4;
    double rad = 0.5235987755982988;
    Angles::rotate(rad, false, x, y);
    REQUIRE(x == Approx(0.59807621135332));
    REQUIRE(y == Approx(4.9641016151378));
  }
}
