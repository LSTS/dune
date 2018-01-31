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
#include <DUNE/Compression/Bzip2Compressor.hpp>
#include <DUNE/Compression/Bzip2Decompressor.hpp>
#include <DUNE/Compression/GzipCompressor.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using DUNE::Compression::Bzip2Compressor;
using DUNE::Compression::Bzip2Decompressor;
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
  delete new Bzip2Compressor();
  delete new Bzip2Decompressor();
}

TEST_CASE("setGetLevel")
{
  Bzip2Compressor comp;
  comp.level(9);
  REQUIRE(comp.level() == 9);
}

class FakeBzip2Compressor: public Bzip2Compressor
{
public:
  void
  setReturnValue(int value)
  {
    m_return_value = value;
  }

  int
  compressBufferToBuffer(char* dst, unsigned int* dst_len,
                         char* src, unsigned int src_len,
                         int block_size_100k, int verbosity, int work_factor) const
  {
    return m_return_value;
  }

private:
  int m_return_value;
};

TEST_CASE("bzip2CompressorUnknownError")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Fake out of memory error.
  std::vector<char> comp_vec(1);
  FakeBzip2Compressor comp;
  comp.setReturnValue(-1000);
  REQUIRE_THROWS_AS(comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size()), Error);
}

TEST_CASE("bzip2CompressorOutOfMemory")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Fake out of memory error.
  std::vector<char> comp_vec(1);
  FakeBzip2Compressor comp;
  comp.setReturnValue(-3);
  REQUIRE_THROWS_AS(comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size()), OutOfMemory);
}

TEST_CASE("bzip2DecompressError")
{
  // Invalid bzip2 data.
  std::vector<char> comp_vec(12, 0);

  // Decompress.
  std::vector<char> dvec(128);
  Bzip2Decompressor decomp;
  REQUIRE_THROWS_AS(decomp.decompress(&dvec[0], dvec.size(), &comp_vec[0], comp_vec.size()), Error);
}

TEST_CASE("bzip2CompressShortBuffer")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Compress to buffer that is too small.
  std::vector<char> comp_vec(1);
  Bzip2Compressor comp;
  REQUIRE_THROWS_AS(comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size()), BufferTooShort);
}

TEST_CASE("bzip2CompressDecompressTwice")
{
  // Test data.
  std::vector<char> src = createData(4096);

  // Compress.
  std::vector<char> comp_vec(4096);
  Bzip2Compressor comp;
  comp.compress(&comp_vec[0], comp_vec.size(), &src[0], src.size());
  REQUIRE(comp.processed() == src.size());
  REQUIRE(comp.processed() == comp.processedTotal());
  REQUIRE(comp.compressed() == comp.compressedTotal());
  comp_vec.resize(comp.compressed());

  // Decompress.
  std::vector<char> dvec(4096);
  Bzip2Decompressor decomp;
  decomp.decompress(&dvec[0], dvec.size(), &comp_vec[0], comp_vec.size());
  REQUIRE(decomp.processed() == comp_vec.size());
  REQUIRE(decomp.decompressed() == src.size());
  REQUIRE(dvec == src);

  // Decompress again.
  decomp.decompress(&dvec[0], dvec.size(), &comp_vec[0], comp_vec.size());
  REQUIRE(decomp.processed() == comp_vec.size());
  REQUIRE(decomp.decompressed() == src.size());
  REQUIRE(dvec == src);
}

class DecompressInitFail: public Bzip2Decompressor
{
public:
  int
  decompressInit(int verbosity, int small)
  {
    return -90;
  }
};

TEST_CASE("bzip2DecompressInitError")
{
  DecompressInitFail x;
  REQUIRE_THROWS_AS(x.decompress(NULL, 0, NULL, 0), Error);
}
