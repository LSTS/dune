//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
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
