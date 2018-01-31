//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Compression/FilterInput.hpp>
#include <DUNE/Compression/FilterOutput.hpp>

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
  std::istringstream iss;
  std::ostringstream oss;

  delete new FilterInput(iss, METHOD_GZIP);
  delete new FilterOutput(oss, METHOD_GZIP);
}

TEST_CASE("seekInput")
{
  std::istringstream ss;
  FilterInput fi(ss, METHOD_GZIP);
  fi.seekg(0);
  REQUIRE(fi.fail());
}

TEST_CASE("seekOutput")
{
  std::ostringstream ss;
  FilterOutput fo(ss, METHOD_GZIP);
  fo.seekp(0);
  REQUIRE(fo.fail());
}

TEST_CASE("compressByteDecompressByte")
{
  std::vector<char> data = createData(256 * 1024);

  // Compress.
  std::ostringstream oss;
  FilterOutput fo(oss, METHOD_GZIP);
  for (size_t i = 0; i < data.size(); ++i)
    fo.put(data[i]);

  // Single byte retrieval not supported.
  std::istringstream iss(oss.str());
  FilterInput fi(iss, METHOD_GZIP);
  REQUIRE(fi.get() == std::char_traits<char>::eof());
}

TEST_CASE("compressSingleChar")
{
  std::vector<char> data = createData(256 * 1024);

  // Compress.
  std::ostringstream oss;
  FilterOutput fo(oss, METHOD_GZIP);
  for (size_t i = 0; i < data.size(); ++i)
    fo.put(data[i]);

  // Decompress vector.
  std::vector<char> datad(data.size(), 0);
  std::istringstream iss(oss.str());
  FilterInput fi(iss, METHOD_GZIP);
  fi.read(&datad[0], datad.size());
  REQUIRE(data == datad);

  // Try to read past the end of file.
  fi.read(&datad[0], datad.size());
  REQUIRE(fi.eof());
}

TEST_CASE("compressDecompressBlock")
{
  std::vector<char> data = createData(256 * 1024);

  // Compress.
  std::ostringstream oss;
  FilterOutput fo(oss, METHOD_GZIP);
  fo.write(&data[0], data.size());

  // Decompress.
  std::vector<char> datad(data.size(), 0);
  {
    std::istringstream iss(oss.str());
    FilterInput fi(iss, METHOD_GZIP);
    fi.read(&datad[0], datad.size());
    REQUIRE(data == datad);
  }
}

TEST_CASE("resetCompressDecompressBlock")
{
  std::vector<char> data = createData(256 * 1024);

  // Compress.
  std::ostringstream oss;
  FilterOutput fo(oss, METHOD_GZIP);
  fo.setStream(oss, METHOD_GZIP);
  fo.write(&data[0], data.size());

  // Decompress.
  std::vector<char> datad(data.size(), 0);
  std::istringstream iss(oss.str());
  FilterInput fi(iss, METHOD_GZIP);
  fi.setStream(iss, METHOD_GZIP);
  fi.read(&datad[0], datad.size());
  REQUIRE(data == datad);
}
