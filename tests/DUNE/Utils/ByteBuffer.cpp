//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Utils/ByteBuffer.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Utils::ByteBuffer;

template <typename T>
std::vector<T>
createData(size_t size)
{
  std::vector<T> data;

  for (size_t i = 0; i < size; ++i)
  {
    T b = (T)i;
    data.push_back(b);
  }

  return data;
}

TEST_CASE("clear")
{
  ByteBuffer bfr;

  // Insert.
  uint8_t byte = 0;
  bfr.write(&byte, sizeof(byte));
  REQUIRE(bfr.getSize() == 1);

  // Clear.
  bfr.clear();
  REQUIRE(bfr.getSize() == 0);
}

TEST_CASE("capacityAndRemaining")
{
  ByteBuffer bfr;

  // Insert.
  uint8_t byte = 0;
  bfr.write(&byte, sizeof(byte));
  REQUIRE(bfr.getSize() == 1);
  REQUIRE(bfr.getCapacity() - bfr.getSize() == bfr.getRemaining());
}

TEST_CASE("write")
{
  ByteBuffer bfr;

  // Insert.
  std::vector<uint8_t> in = createData<uint8_t>(1025);
  bfr.write(&in[0], in.size());
  REQUIRE(bfr.getSize() == 1025);

  // Retrieve and compare.
  std::vector<uint8_t> out(bfr.getBuffer(), bfr.getBuffer() + bfr.getSize());
  REQUIRE(in == out);
}

TEST_CASE("appendSigned")
{
  ByteBuffer bfr;

  // Insert.
  std::vector<char> in = createData<char>(1025);
  bfr.appendSigned(&in[0], 1000);
  bfr.appendSigned(&in[1000], 25);
  REQUIRE(bfr.getSize() == 1025);

  // Retrieve and compare.
  std::vector<char> out(bfr.getBufferSigned(), bfr.getBufferSigned() + bfr.getSize());
  REQUIRE(in == out);
}

TEST_CASE("outputStream")
{
  ByteBuffer bfr;

  // Insert.
  std::vector<char> in = createData<char>(1025);
  bfr.appendSigned(&in[0], in.size());
  REQUIRE(bfr.getSize() == 1025);

  // Retrieve and compare.
  std::ostringstream ss;
  ss << bfr;
  std::string out_str = ss.str();
  std::vector<char> out(out_str.begin(), out_str.end());
  REQUIRE(in == out);
}
