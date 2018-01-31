//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/ZlibCompressor.hpp>
#include <DUNE/Compression/ZlibDecompressor.hpp>
#include <DUNE/Compression/GzipCompressor.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Compression::ZlibCompressor;
using DUNE::Compression::ZlibDecompressor;
using DUNE::Compression::GzipCompressor;
using DUNE::Compression::Error;
using DUNE::Compression::BufferTooShort;
using DUNE::Compression::OutOfMemory;

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
  delete new ZlibCompressor();
  delete new ZlibDecompressor();
}

class ZlibCompressorOom: public ZlibCompressor
{
public:
  int
  zlibCompress2(char* dst, unsigned long* dst_len, char* src, unsigned long src_len)
  {
    return -4;
  }
};

TEST_CASE("zlibCompressorOutOfMemory")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Fake out of memory error.
  std::vector<char> comp_vec(4096);
  ZlibCompressorOom comp;
  REQUIRE_THROWS_AS(comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size()), OutOfMemory);
}


class ZlibCompressorError: public ZlibCompressor
{
public:
  int
  zlibCompress2(char* dst, unsigned long* dst_len, char* src, unsigned long src_len)
  {
    return -1000;
  }
};

TEST_CASE("zlibCompressorError")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Fake out of memory error.
  std::vector<char> comp_vec(4096);
  ZlibCompressorError comp;
  REQUIRE_THROWS_AS(comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size()), Error);
}

TEST_CASE("zlibDecompressError")
{
  // Invalid zlib data.
  std::vector<char> comp_vec(12, 0);

  // Decompress.
  std::vector<char> dvec(128);
  ZlibDecompressor decomp;
  REQUIRE_THROWS_AS(decomp.decompress(&dvec[0], dvec.size(), &comp_vec[0], comp_vec.size()), Error);
}

TEST_CASE("zlibCompressShortBuffer")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Compress to buffer that is too small.
  std::vector<char> comp_vec(1);
  ZlibCompressor comp;
  REQUIRE_THROWS_AS(comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size()), BufferTooShort);
}

TEST_CASE("zlibCompressDecompress")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Compress.
  std::vector<char> comp_vec(4096);
  ZlibCompressor comp;
  comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size());
  REQUIRE(comp.processed() == src.size());
  comp_vec.resize(comp.compressed());

  // Decompress.
  std::vector<char> dvec(4096);
  ZlibDecompressor decomp;
  decomp.decompress(&dvec[0], dvec.size(), &comp_vec[0], comp_vec.size());
  REQUIRE(decomp.processed() == comp_vec.size());
  REQUIRE(decomp.decompressed() == src.size());
}

TEST_CASE("gzipCompressDecompress")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Compress.
  std::vector<char> comp_vec(4096);
  GzipCompressor comp;
  comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size());
  REQUIRE(comp.processed() == src.size());
  comp_vec.resize(comp.compressed());

  // Decompress.
  std::vector<char> dvec(4096);
  ZlibDecompressor decomp(true);
  decomp.decompress(&dvec[0], dvec.size(), &comp_vec[0], comp_vec.size());
  REQUIRE(decomp.processed() == comp_vec.size());
  REQUIRE(decomp.decompressed() == src.size());
}

class DecompressInitFail: public ZlibDecompressor
{
public:
  int
  zlibInflateInit(void)
  {
    return -90;
  }
};

TEST_CASE("zlibDecompressInitFail")
{
  DecompressInitFail decomp;
  REQUIRE_THROWS_AS(decomp.decompress(NULL, 0, NULL, 0), Error);
}
