//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Concurrency/Thread.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace DUNE::Concurrency;

class ThreadA: public Thread
{
public:
  int m_counter;

  void
  run(void)
  {
    m_counter = 0;

    while (m_counter < 5)
    {
      DUNE::Time::Delay::wait(1.0);
      ++m_counter;
    }
  }
};

TEST_CASE("simpleDelay")
{
  ThreadA thread;
  thread.start();
  DUNE::Time::Delay::wait(4.0);
  REQUIRE_NOTHROW(thread.stopAndJoin());
  REQUIRE(thread.m_counter > 2);
}

