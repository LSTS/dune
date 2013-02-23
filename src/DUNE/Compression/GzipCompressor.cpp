//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: GzipCompressor.cpp 12667 2013-01-22 02:44:42Z rasm               $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Compression/Exceptions.hpp>
#include <DUNE/Compression/GzipCompressor.hpp>

// Gzip headers.
#include <zlib/zlib.h>

namespace DUNE
{
  namespace Compression
  {
    //! GZIP header.
    static const uint8_t c_header[] = {0x1f, 0x8b, 8, 0, 0, 0, 0, 0, 0, 255};
    static const unsigned c_header_size = sizeof(c_header);

    unsigned long
    GzipCompressor::compressBlock(char* dst, unsigned long dst_len, char* src, unsigned long src_len)
    {
      uint32_t length = src_len;
      unsigned long out_len = ZlibCompressor::compressBlock(dst + 8, dst_len - 8, src, src_len);
      unsigned long usable_len = out_len - 6;

      // Write GZIP header.
      std::memcpy(dst, c_header, c_header_size);

      // fixme: assert little endian.
      uint32_t crc = crc32(0, (Bytef*)src, src_len);
      std::memcpy(dst + c_header_size + usable_len, &crc, sizeof(crc));
      std::memcpy(dst + c_header_size + usable_len + sizeof(crc), &length, sizeof(length));

      return usable_len + c_header_size + sizeof(crc) + sizeof(length);
    }
  }
}
