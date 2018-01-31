//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Time/Delta.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Time::Delta;

// Derived class that allows us to fake time.
class FakeTimeDelta: public Delta
{
public:
  double
  getCurrentTime(void) const
  {
    return m_time;
  }

  void
  setCurrentTime(double time)
  {
    m_time = time;
  }

private:
  double m_time;
};

// Call destructor on dynamic object.
TEST_CASE("heapDestructor")
{
  delete new Delta();
}

TEST_CASE("getDelta")
{
  // Invalid delta using real time.
  Delta rdelta;
  REQUIRE(rdelta.getDelta() == Approx(-1));

  // Invalid delta with fake time.
  FakeTimeDelta fdelta;
  fdelta.setCurrentTime(10);
  REQUIRE(fdelta.getDelta() == Approx(-1));

  // Valid delta with fake time.
  fdelta.setCurrentTime(20);
  REQUIRE(fdelta.getDelta() == Approx(10));

  // Valid delta with fake time.
  fdelta.setCurrentTime(40);
  REQUIRE(fdelta.getDelta() == Approx(20));
}

TEST_CASE("check")
{
  // Invalid delta with fake time.
  FakeTimeDelta fdelta;
  fdelta.setCurrentTime(10);
  REQUIRE(fdelta.check() == Approx(-1));

  // Valid delta with fake time.
  fdelta.setCurrentTime(20);
  REQUIRE(fdelta.check() == Approx(10));

  // Valid delta with fake time.
  fdelta.setCurrentTime(40);
  REQUIRE(fdelta.check() == Approx(30));
}
