//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Mauro Brandão                                                    *
// Author: José Braga                                                       *
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <iostream>

// DUNE headers.
#include <DUNE/Algorithms/Base64.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Algorithms::Base64;

TEST_CASE("encode/decode#1")
{
  std::string str = "f";
  REQUIRE(Base64::encode(str) == "Zg==");
  REQUIRE(Base64::decode(Base64::encode(str)) == "f");
}

TEST_CASE("encode/decode#2")
{
  std::string str = "fo";
  REQUIRE(Base64::encode(str) == "Zm8=");
  REQUIRE(Base64::decode(Base64::encode(str)) == "fo");
}

TEST_CASE("encode/decode#3")
{
  std::string str = "foo";
  REQUIRE(Base64::encode(str) == "Zm9v");
  REQUIRE(Base64::decode(Base64::encode(str)) == "foo");
}

TEST_CASE("encode/decode#4")
{
  std::string str = "foob";
  REQUIRE(Base64::encode(str) == "Zm9vYg==");
  REQUIRE(Base64::decode(Base64::encode(str)) == "foob");
}

TEST_CASE("encode/decode#5")
{
  std::string str = "fooba";
  REQUIRE(Base64::encode(str) == "Zm9vYmE=");
  REQUIRE(Base64::decode(Base64::encode(str)) == "fooba");
}

TEST_CASE("encode/decode#6")
{
  std::string str = "foobar";
  REQUIRE(Base64::encode(str) == "Zm9vYmFy");
  REQUIRE(Base64::decode(Base64::encode(str)) == "foobar");
}

TEST_CASE("encode/decode#7")
{
  std::string str = "*";
  REQUIRE(Base64::encode(str) == "Kg==");
  REQUIRE(Base64::decode(Base64::encode(str)) == "*");
}

TEST_CASE("encode/decode#8")
{
  std::string str = "Hello World!";
  REQUIRE(Base64::encode(str) == "SGVsbG8gV29ybGQh");
  REQUIRE(Base64::decode(Base64::encode(str)) == "Hello World!");
}

