//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// Task headers.
#include <Power/PCTLv2/LeakStateMachine.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using Power::PCTLv2::LeakStateMachine;

TEST_CASE("noLeak")
{
  LeakStateMachine sm;
  sm.setMinimumLeakDuration(10.0);
  sm.update(0.0, false);
  REQUIRE_FALSE(sm.update(0.1, false));
}

TEST_CASE("leak")
{
  LeakStateMachine sm;
  sm.setMinimumLeakDuration(10.0);
  sm.update(0.0, false);
  sm.update(1.0, true);
  REQUIRE(sm.update(12.0, true));
}

TEST_CASE("leakAndThenNoLeak")
{
  LeakStateMachine sm;
  sm.setMinimumLeakDuration(10.0);
  sm.update(0.0, true);
  REQUIRE(sm.update(12.0, true));
  REQUIRE_FALSE(sm.update(24.0, false));
}
