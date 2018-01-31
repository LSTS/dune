//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Utils/String.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("filterDuplicatesEmptyString")
{
  REQUIRE(DUNE::Utils::String::filterDuplicates('/', "") == "");
}

TEST_CASE("filterDuplicates")
{
  REQUIRE(DUNE::Utils::String::filterDuplicates('/', "//ab////") == "/ab/");
}

TEST_CASE("trim")
{
  REQUIRE(DUNE::Utils::String::trim("   ") == "");
  REQUIRE(DUNE::Utils::String::trim(" string  ") == "string");
}

TEST_CASE("rightTrimInPlace")
{
  char str[16];
  strcpy(str, " string  ");
  DUNE::Utils::String::rightTrimInPlace(str);
  REQUIRE(std::string(" string") == str);
}

TEST_CASE("replace")
{
  REQUIRE(DUNE::Utils::String::replace("string", 'i', "on") == "stronng");
}

TEST_CASE("replaceWhiteSpace")
{
  std::string str = "a string";
  DUNE::Utils::String::replaceWhiteSpace(str, '_');
  REQUIRE(str == "a_string");
}

TEST_CASE("startsWith")
{
  REQUIRE(DUNE::Utils::String::startsWith("string", "str"));
  REQUIRE_FALSE(DUNE::Utils::String::startsWith("string", "not"));
  REQUIRE_FALSE(DUNE::Utils::String::startsWith("str", "string"));
}

TEST_CASE("endsWith")
{
  REQUIRE(DUNE::Utils::String::endsWith("string", "ing"));
  REQUIRE_FALSE(DUNE::Utils::String::endsWith("string", "not"));
  REQUIRE_FALSE(DUNE::Utils::String::endsWith("str", "string"));
}

TEST_CASE("escape")
{
  REQUIRE(DUNE::Utils::String::escape("\n\t\rx") == "\\n\\t\\rx");
}

TEST_CASE("unescape")
{
  REQUIRE(DUNE::Utils::String::unescape("\\\\\\n\\t\\r\\yx") == "\\\n\t\ryx");
  REQUIRE_THROWS_AS(DUNE::Utils::String::unescape("\\"), std::runtime_error);
}

TEST_CASE("splitList")
{
  std::vector<std::string> parts;
  DUNE::Utils::String::split("1, 2, 3, 4, 5", ",", parts);
  REQUIRE(parts.size() == 5);
  REQUIRE(parts[0] == "1");
}

TEST_CASE("splitListEmpty")
{
  std::vector<std::string> parts;
  DUNE::Utils::String::split("", ",", parts);
  REQUIRE(parts.size() == 0);
}

TEST_CASE("format")
{
  char bfr[64];
  DUNE::Utils::String::format(bfr, sizeof(bfr), "Number %d", 3);
  REQUIRE(std::string("Number 3") == bfr);
  REQUIRE(DUNE::Utils::String::str("Number %d", 2) == "Number 2");
}

TEST_CASE("simpleStr")
{
  REQUIRE(DUNE::Utils::String::str(1) == "1");
}

TEST_CASE("getRemaining")
{
  REQUIRE(DUNE::Utils::String::getRemaining("prefix", "suffix") == "suffix");
  REQUIRE(DUNE::Utils::String::getRemaining("prefix", "prefixsuffix") == "suffix");
}

TEST_CASE("toHex")
{
  std::string str = "\xaa\xbb\x02\xff";
  REQUIRE(DUNE::Utils::String::toHex(str) == "AABB02FF");

  std::vector<char> vec(str.begin(), str.end());
  REQUIRE(DUNE::Utils::String::toHex(vec) == "AABB02FF");
}

TEST_CASE("fromHex")
{
  REQUIRE(DUNE::Utils::String::fromHex("AABB02FF") == "\xaa\xbb\x02\xff");
  REQUIRE(DUNE::Utils::String::fromHex("AAC") == "");
}

TEST_CASE("toLowerCase")
{
  std::string upper = "AAbbCCdd";
  DUNE::Utils::String::toLowerCase(upper);
  REQUIRE(upper == "aabbccdd");
}

TEST_CASE("toUpperCase")
{
  std::string upper = "AAbbCCdd";
  DUNE::Utils::String::toUpperCase(upper);
  REQUIRE(upper == "AABBCCDD");
}

TEST_CASE("joinEmpty")
{
  std::vector<std::string> empty;
  REQUIRE(DUNE::Utils::String::join(empty.begin(), empty.end(), ",") == "");
}

TEST_CASE("join")
{
  std::vector<std::string> list;
  list.push_back("one");
  list.push_back("two");
  list.push_back("three");
  REQUIRE(DUNE::Utils::String::join(list.begin(), list.end(), ",") == "one,two,three");
}
