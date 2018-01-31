//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ headers.
#include <cstdio>
#include <typeinfo>

// DUNE headers.
#include <DUNE/Compression.hpp>

// Catch headers.
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace ::DUNE::Compression;
using DUNE::Utils::ByteBuffer;

static void
createData(ByteBuffer& bfr, size_t size)
{
  for (size_t i = 0; i < bfr.getCapacity(); ++i)
  {
    uint8_t b = (uint8_t) i;
    bfr.append(&b, sizeof(b));
  }
}

TEST_CASE("methods")
{
  REQUIRE(Factory::method(Factory::method(METHOD_ZLIB)) == METHOD_ZLIB);
  REQUIRE(Factory::method(Factory::method(METHOD_GZIP)) == METHOD_GZIP);
  REQUIRE(Factory::method(Factory::method(METHOD_BZIP2)) == METHOD_BZIP2);
  REQUIRE(Factory::method(Factory::method(METHOD_UNKNOWN)) == METHOD_UNKNOWN);
}

TEST_CASE("extension")
{
  REQUIRE(Factory::extension(METHOD_ZLIB) == ".z");
  REQUIRE(Factory::extension(METHOD_GZIP) == ".gz");
  REQUIRE(Factory::extension(METHOD_BZIP2) == ".bz2");
  REQUIRE(Factory::extension(METHOD_UNKNOWN) == "");

  REQUIRE(Factory::extension(Factory::method(METHOD_ZLIB)) == ".z");
  REQUIRE(Factory::extension(Factory::method(METHOD_GZIP)) == ".gz");
  REQUIRE(Factory::extension(Factory::method(METHOD_BZIP2)) == ".bz2");
}

TEST_CASE("compressor")
{
  {
    Compressor* a = Factory::compressor("zlib");
    REQUIRE(a != NULL);

    ZlibCompressor* b = new ZlibCompressor();
    REQUIRE(typeid(*a) == typeid(*b));

    delete a;
    delete b;
  }

  {
    Compressor* a = Factory::compressor("gzip");
    REQUIRE(a != NULL);

    GzipCompressor* b = new GzipCompressor();
    REQUIRE(typeid(*a) == typeid(*b));

    delete a;
    delete b;
  }

  {
    Compressor* a = Factory::compressor("bzip2");
    REQUIRE(a != NULL);

    Bzip2Compressor* b = new Bzip2Compressor();
    REQUIRE(typeid(*a) == typeid(*b));

    delete a;
    delete b;
  }

  {
    Compressor* a = Factory::compressor("unknown");
    REQUIRE(a == NULL);
  }
}

TEST_CASE("decompressor")
{
  {
    Decompressor* a = Factory::decompressor("zlib");
    REQUIRE(a != NULL);

    ZlibDecompressor* b = new ZlibDecompressor();
    REQUIRE(typeid(*a) == typeid(*b));

    delete a;
    delete b;
  }

  {
    Decompressor* a = Factory::decompressor("gzip");
    REQUIRE(a != NULL);

    ZlibDecompressor* b = new ZlibDecompressor();
    REQUIRE(typeid(*a) == typeid(*b));

    delete a;
    delete b;
  }

  {
    Decompressor* a = Factory::decompressor("bzip2");
    REQUIRE(a != NULL);

    Bzip2Decompressor* b = new Bzip2Decompressor();
    REQUIRE(typeid(*a) == typeid(*b));

    delete a;
    delete b;
  }

  {
    Decompressor* a = Factory::decompressor("unknown");
    REQUIRE(a == NULL);
  }
}

TEST_CASE("detectZlib")
{
  std::string fname = std::tmpnam(NULL);
  std::ofstream ofs(fname.c_str(), std::ios::binary);
  ZlibCompressor* cp = new ZlibCompressor();
  ByteBuffer in;
  createData(in, 128);
  ByteBuffer out;
  cp->compress(out, in);
  delete cp;

  ofs.write(out.getBufferSigned(), out.getSize());
  ofs.close();

  REQUIRE(Factory::detect(fname.c_str()) == METHOD_ZLIB);
}

TEST_CASE("detectGzip")
{
  std::string fname = std::tmpnam(NULL);
  std::ofstream ofs(fname.c_str(), std::ios::binary);
  GzipCompressor* cp = new GzipCompressor();
  ByteBuffer in;
  createData(in, 128);
  ByteBuffer out;
  cp->compress(out, in);
  delete cp;

  ofs.write(out.getBufferSigned(), out.getSize());
  ofs.close();

  REQUIRE(Factory::detect(fname.c_str()) == METHOD_GZIP);
}

TEST_CASE("detectBzip2")
{
  std::string fname = std::tmpnam(NULL);
  std::ofstream ofs(fname.c_str(), std::ios::binary);
  Bzip2Compressor* cp = new Bzip2Compressor();
  ByteBuffer in;
  createData(in, 128);
  ByteBuffer out;
  cp->compress(out, in);
  delete cp;

  ofs.write(out.getBufferSigned(), out.getSize());
  ofs.close();

  REQUIRE(Factory::detect(fname.c_str()) == METHOD_BZIP2);
}

TEST_CASE("detectUnknown")
{
  std::string fname = std::tmpnam(NULL);
  std::ofstream ofs(fname.c_str(), std::ios::binary);
  ofs.put('\0');
  ofs.close();

  REQUIRE(Factory::detect(fname.c_str()) == METHOD_UNKNOWN);
}

TEST_CASE("detectBytesGzip")
{
  uint8_t data[] = {0x1f, 0x8b, 0x00};
  REQUIRE(Factory::detect(data, sizeof(data)) == METHOD_GZIP);
}

TEST_CASE("detectBytesZlib")
{
  uint8_t data1[] = {0x78, 0x9c, 0x00};
  REQUIRE(Factory::detect(data1, sizeof(data1)) == METHOD_ZLIB);

  uint8_t data2[] = {0x78, 0xda, 0x00};
  REQUIRE(Factory::detect(data2, sizeof(data2)) == METHOD_ZLIB);
}

TEST_CASE("detectBytesBzip2")
{
  uint8_t data1[] = {0x42, 0x5a, 0x00};
  REQUIRE(Factory::detect(data1, sizeof(data1)) == METHOD_BZIP2);
}
