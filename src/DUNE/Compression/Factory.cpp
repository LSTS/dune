//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <fstream>

// DUNE headers.
#include <DUNE/Compression/Compressor.hpp>
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/ZlibCompressor.hpp>
#include <DUNE/Compression/GzipCompressor.hpp>
#include <DUNE/Compression/Bzip2Compressor.hpp>
#include <DUNE/Compression/ZlibDecompressor.hpp>
#include <DUNE/Compression/Bzip2Decompressor.hpp>
#include <DUNE/Compression/Factory.hpp>

namespace DUNE
{
  namespace Compression
  {
    Methods
    Factory::method(const std::string& name)
    {
      if (name == "zlib")
        return METHOD_ZLIB;

      if (name == "gzip")
        return METHOD_GZIP;

      if (name == "bzip2")
        return METHOD_BZIP2;

      return METHOD_UNKNOWN;
    }

    std::string
    Factory::method(Methods name)
    {
      switch (name)
      {
        case METHOD_ZLIB:
          return "zlib";
        case METHOD_GZIP:
          return "gzip";
        case METHOD_BZIP2:
          return "bzip2";
        case METHOD_UNKNOWN:
          break;
      }

      return "unknown";
    }

    std::string
    Factory::extension(Methods name)
    {
      switch (name)
      {
        case METHOD_ZLIB:
          return ".z";
        case METHOD_GZIP:
          return ".gz";
        case METHOD_BZIP2:
          return ".bz2";
        case METHOD_UNKNOWN:
          break;
      }

      return "";
    }

    std::string
    Factory::extension(const std::string& name)
    {
      return extension(method(name));
    }

    Methods
    Factory::detect(const char* fname)
    {
      std::ifstream ifs(fname, std::ios::binary);
      uint8_t bfr[2] = {0};

      ifs.read((char*)bfr, 2);

      if (std::memcmp("\x1f\x8b", bfr, 2) == 0)
        return METHOD_GZIP;

      if (std::memcmp("\x78\x9c", bfr, 2) == 0)
        return METHOD_ZLIB;

      if (std::memcmp("BZ", bfr, 2) == 0)
        return METHOD_BZIP2;

      return METHOD_UNKNOWN;
    }

    Compressor*
    Factory::compressor(Methods method)
    {
      switch (method)
      {
        case METHOD_ZLIB:
          return new ZlibCompressor;
        case METHOD_GZIP:
          return new GzipCompressor;
        case METHOD_BZIP2:
          return new Bzip2Compressor;
        default:
          break;
      }

      return 0;
    }

    Compressor*
    Factory::compressor(const std::string& cmp_method)
    {
      return compressor(method(cmp_method));
    }

    Decompressor*
    Factory::decompressor(Methods method)
    {
      switch (method)
      {
        case METHOD_ZLIB:
          return new ZlibDecompressor;
        case METHOD_GZIP:
          return new ZlibDecompressor(true);
        case METHOD_BZIP2:
          return new Bzip2Decompressor;
        default:
          break;
      }

      return 0;
    }

    Decompressor*
    Factory::decompressor(const std::string& dec_method)
    {
      return decompressor(method(dec_method));
    }
  }
}
