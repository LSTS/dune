//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Time/BrokenDown.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Time::BrokenDown;

// Derived class that allows us to fake time.
class FakeBrokenDown: public BrokenDown
{
public:
  time_t
  getCurrentTime(void) const
  {
    return m_time;
  }

  void
  setCurrentTime(time_t time)
  {
    m_time = time;
  }

private:
  time_t m_time;
};

// Call destructor on dynamic object.
TEST_CASE("heapDestructor")
{
  delete new BrokenDown();
}

TEST_CASE("convert")
{
  FakeBrokenDown bdt;
  bdt.setCurrentTime(1491161349);
  bdt.convert();

  REQUIRE(bdt.year == 2017);
  REQUIRE(bdt.month == 4);
  REQUIRE(bdt.day == 2);
  REQUIRE(bdt.hour == 19);
  REQUIRE(bdt.minutes == 29);
  REQUIRE(bdt.seconds == 9);
  REQUIRE(bdt.week_day == 0);
  REQUIRE(bdt.day_year == 92);
}
