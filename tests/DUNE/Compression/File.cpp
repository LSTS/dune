//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Compression/FileInput.hpp>
#include <DUNE/Compression/FileOutput.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace DUNE::Compression;

std::vector<char>
createData(size_t size)
{
  std::vector<char> data;
  for (size_t i = 0; i < size; ++i)
    data.push_back((char)i);
  return data;
}

// Call destructor on dynamic object.
TEST_CASE("heapDestructor")
{
  std::string tmp_in = tmpnam(NULL);
  REQUIRE_NOTHROW(delete new FileInput(tmp_in.c_str(), METHOD_ZLIB));
  std::string tmp_out = tmpnam(NULL);
  REQUIRE_NOTHROW(delete new FileOutput(tmp_out.c_str(), METHOD_ZLIB));
}

TEST_CASE("fileCompressDecompress")
{
  std::string fname = tmpnam(NULL);

  std::vector<char> data = createData(256 * 1024);
  {
    FileOutput out(fname.c_str(), METHOD_ZLIB);
    out.write(&data[0], data.size());
  }

  std::vector<char> deco(data.size());
  {
    FileInput in(fname.c_str(), METHOD_ZLIB);
    in.read(&deco[0], deco.size());
  }

  REQUIRE(data == deco);
}
