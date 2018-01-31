//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Utils/TupleList.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Utils::TupleList;

TEST_CASE("parseEmpty")
{
  TupleList tl0("");
  REQUIRE(tl0.getSize() == 0);

  TupleList tl1(";");
  REQUIRE(tl1.getSize() == 0);

  TupleList tl2("label");
  REQUIRE(tl2.getSize() == 0);
}

TEST_CASE("noValue")
{
  TupleList tl0("label=");
  REQUIRE(tl0.get("label") == "");
}

TEST_CASE("oneEntry")
{
  TupleList tl("label=value");
  REQUIRE(tl.get("non") == "");
  REQUIRE(tl.get("label") == "value");
}

TEST_CASE("oneEntryIgnoreCase")
{
  TupleList tl("LabeL=value", "=", ";", true);
  REQUIRE(tl.get("label") == "value");
}

TEST_CASE("twoEntries")
{
  TupleList tl("label=value;label2=value2");
  REQUIRE(tl.get("label") == "value");
  REQUIRE(tl.get("label2") == "value2");
}

TEST_CASE("multipleEntries")
{
  TupleList tl("label=value;label2=value2;label3=;label4;");
  REQUIRE(tl.getSize() == 3);
  REQUIRE(tl.get("label") == "value");
  REQUIRE(tl.get("label2") == "value2");
  REQUIRE(tl.get("label3") == "");
}

TEST_CASE("getWithTypeConversion")
{
  TupleList tl("label=1;label2=x");
  REQUIRE(tl.get<int>("label", 0) == 1);
  REQUIRE(tl.get<int>("label2", 1) == 1);
}
