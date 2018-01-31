//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/IMC/AddressResolver.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("nameGetterAndSetter")
{
  DUNE::IMC::AddressResolver ar;
  const std::string name("test-name");
  ar.name(name);
  REQUIRE(name == ar.name());
}

TEST_CASE("idGetterAndSetter")
{
  DUNE::IMC::AddressResolver ar;
  unsigned id = 20;
  ar.id(id);
  REQUIRE(id == ar.id());
  REQUIRE(ar.isLocal(id));
}

TEST_CASE("insertRetrieve")
{
  DUNE::IMC::AddressResolver ar;
  const std::string tn("test-name");
  unsigned ti = 20;
  ar.insert(tn, ti);
  REQUIRE(tn == ar.resolve(ti));
  REQUIRE(ti == ar.resolve(tn));
}

TEST_CASE("unknowns")
{
  DUNE::IMC::AddressResolver ar;
  REQUIRE_FALSE(DUNE::IMC::AddressResolver::isValid(ar.resolve("no-name")));
  REQUIRE(ar.isUnknown(20));
  REQUIRE(std::string("unknown") == ar.resolve(20));
}

TEST_CASE("isCCU")
{
  REQUIRE(DUNE::IMC::AddressResolver::isCCU(0x4000));
}
