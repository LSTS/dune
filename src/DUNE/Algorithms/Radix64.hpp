//***************************************************************************
// Copyright 2016 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_ALGORITHMS_RADIX64_HPP_INCLUDED_
#define DUNE_ALGORITHMS_RADIX64_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <cstddef>
#include <stdexcept>
#include <limits>
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    template <typename Alpha, int pad_byte = 256>
    class Radix64
    {
    public:
      inline static size_t
      computeCodedSizeWithoutPadding(size_t src_size)
      {
        return ceil(4.0 * src_size / 3.0);
      }

      inline static size_t
      computeCodedSizeWithPadding(size_t src_size)
      {
        return ((src_size - 1) / 3) * 4 + 4;
      }

      inline static std::string
      encode(const std::string& src)
      {
        std::string dst;
        encode((const uint8_t*)&src[0], src.size(), dst);
        return dst;
      }

      inline static std::string
      encode(const uint8_t* src, size_t src_size)
      {
        std::string dst;
        encode(src, src_size, dst);
        return dst;
      }

      inline static std::string
      encode(const char* src, size_t src_size)
      {
        return encode((const uint8_t*)src, src_size);
      }

      template<typename T>
      inline static void
      encode(const uint8_t* src, size_t src_size, T& dst)
      {
        int i = 0;
        uint8_t triple[3] = {0};
        uint8_t quad[4] = {0};

        for (size_t k = 0; k < src_size; ++k)
        {
          triple[i++] = *(src++);
          if (i == 3)
          {
            tripletToQuadruplet(triple, quad);

            for (i = 0; i < 4 ; ++i)
              dst.push_back(Alpha::c_enc[quad[i]]);
            i = 0;
          }
        }

        if (i != 0)
        {
          for (int j = i; j < 3; ++j)
            triple[j] = 0;

          tripletToQuadruplet(triple, quad);

          for (int j = 0; j < i + 1; ++j)
            dst.push_back(Alpha::c_enc[quad[j]]);

          if (hasPad())
          {
            while ((i++ < 3))
              dst.push_back((uint8_t)pad_byte);
          }
        }
      }

      inline static std::string
      decode(const std::string& src)
      {
        std::string dst;
        decode((const uint8_t*)&src[0], src.size(), dst);
        return dst;
      }

      inline static std::string
      decode(const uint8_t* src, size_t src_size)
      {
        std::string dst;
        decode(src, src_size, dst);
        return dst;
      }

      inline static std::string
      decode(const char* src, size_t src_size)
      {
        return decode((const uint8_t*)src, src_size);
      }

      template <typename T>
      inline static void
      decode(const uint8_t* src, size_t src_size, T& dst)
      {
        if (hasPad())
        {
          if (src[src_size - 1] == pad_byte)
            --src_size;
          if (src[src_size - 1] == pad_byte)
            --src_size;
        }

        size_t dec_len = (src_size * 3) / 4;
        uint32_t sextet_a = 0;
        uint32_t sextet_b = 0;
        uint32_t sextet_c = 0;
        uint32_t sextet_d = 0;
        uint32_t triple = 0;

        for (unsigned i = 0, j = 0; i < src_size;)
        {
          sextet_a = (i >= src_size) ? 0 & i++ : Alpha::c_dec[src[i++]];
          sextet_b = (i >= src_size) ? 0 & i++ : Alpha::c_dec[src[i++]];
          sextet_c = (i >= src_size) ? 0 & i++ : Alpha::c_dec[src[i++]];
          sextet_d = (i >= src_size) ? 0 & i++ : Alpha::c_dec[src[i++]];

          triple = (sextet_a << 3 * 6)
          + (sextet_b << 2 * 6)
          + (sextet_c << 1 * 6)
          + (sextet_d << 0 * 6);

          if (j++ < dec_len)
            dst.push_back((triple >> 2 * 8) & 0xFF);
          if (j++ < dec_len)
            dst.push_back((triple >> 1 * 8) & 0xFF);
          if (j++ < dec_len)
            dst.push_back((triple >> 0 * 8) & 0xFF);
        }
      }

    private:
      inline static bool
      hasPad(void)
      {
        return pad_byte != 256;
      }

      inline static size_t
      computeEncodedSize(size_t data_size)
      {
        if (hasPad())
          return computeCodedSizeWithPadding(data_size);
        else
          return computeCodedSizeWithoutPadding(data_size);
      }

      inline static void
      tripletToQuadruplet(const uint8_t* triple, uint8_t* quad)
      {
        quad[0] = (triple[0] & 0xfc) >> 2;
        quad[1] = ((triple[0] & 0x03) << 4) + ((triple[1] & 0xf0) >> 4);
        quad[2] = ((triple[1] & 0x0f) << 2) + ((triple[2] & 0xc0) >> 6);
        quad[3] = triple[2] & 0x3f;
      }
    };
  }
}

#endif
