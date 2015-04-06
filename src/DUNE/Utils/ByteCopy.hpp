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

#ifndef DUNE_UTILS_BYTE_COPY_HPP_INCLUDED_
#define DUNE_UTILS_BYTE_COPY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iostream>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>

#if defined(DUNE_SYS_HAS_ARPA_INET_H)
#  include <arpa/inet.h>
#endif

#if defined(DUNE_SYS_HAS_WINSOCK2_H)
#  include <winsock2.h>
#endif

namespace DUNE
{
  namespace Utils
  {
    class ByteCopy
    {
    public:
      //! Convert the 16-bit unsigned integer to big endian byte
      //! order. If the host is big endian no conversion is performed.
      //! @param n integer to convert.
      //! @return 16-bit unsigned integer in big endian byte order.
      inline static uint16_t
      toBE(uint16_t n)
      {
#if defined(DUNE_SYS_HAS_HTONS)
        return htons(n);

#elif defined(DUNE_CPU_LITTLE_ENDIAN)
        return ((n & 0xff00) >> 8) | ((n & 0x00ff) << 8);

#else
        return n;
#endif
      }

      //! Convert the 16-bit signed integer to big endian byte
      //! order. If the host is big endian no conversion is performed.
      //! @param n integer to convert.
      //! @return 16-bit unsigned integer in big endian byte order.
      inline static int16_t
      toBE(int16_t n)
      {
        return toBE(static_cast<uint16_t>(n));
      }

      //! Convert the 32-bit unsigned integer to big endian byte
      //! order. If the host is big endian no conversion is performed.
      //! @param n integer to convert.
      //! @return 32-bit unsigned integer in big endian byte order.
      inline static uint32_t
      toBE(uint32_t n)
      {
#if defined(DUNE_SYS_HAS_HTONL)
        return htonl(n);

#elif defined(DUNE_CPU_LITTLE_ENDIAN)
        return ((n & 0xff000000) >> 24) | ((n & 0x00ff0000) >> 8)
               | ((n & 0x0000ff00) << 8) | ((n & 0x000000ff) << 24);

#else
        return n;
#endif
      }

      //! Convert the 32-bit signed integer to big endian byte
      //! order. If the host is big endian no conversion is performed.
      //! @param n integer to convert.
      //! @return 32-bit signed integer in big endian byte order.
      inline static int32_t
      toBE(int32_t n)
      {
        return toBE(static_cast<uint32_t>(n));
      }

      //! Convert the 32-bit unsigned integer from big endian byte
      //! order to host byte order. If the host is big endian no
      //! conversion is performed.
      //! @param n integer to convert.
      //! @return 32-bit unsigned integer in host byte order.
      inline static uint32_t
      fromBE(uint32_t n)
      {
#if defined(DUNE_SYS_HAS_NTOHL)
        return ntohl(n);

#elif defined(DUNE_CPU_LITTLE_ENDIAN)
        return ((n & 0xff000000) >> 24) | ((n & 0x00ff0000) >> 8)
               | ((n & 0x0000ff00) << 8) | ((n & 0x000000ff) << 24);

#else
        return n;
#endif
      }

      //! Convert the 32-bit signed integer from big endian byte order
      //! to host byte order. If the host is big endian no conversion
      //! is performed.
      //! @param n integer to convert.
      //! @return 32-bit signed integer in host byte order.
      inline static int32_t
      fromBE(int32_t n)
      {
        return fromBE(static_cast<uint32_t>(n));
      }

      //! Convert the 16-bit unsigned integer from big endian byte
      //! order to host byte order. If the host is big endian no
      //! conversion is performed.
      //! @param n integer to convert.
      //! @return 16-bit unsigned integer in host byte order.
      inline static uint16_t
      fromBE(uint16_t n)
      {
#if defined(DUNE_SYS_HAS_NTOHS)
        return ntohs(n);

#elif defined(DUNE_CPU_LITTLE_ENDIAN)
        return ((n & 0xff00) >> 8) | ((n & 0x00ff) << 8);

#else
        return n;
#endif
      }

      //! Convert the 16-bit signed integer from big endian byte
      //! order to host byte order. If the host is big endian no
      //! conversion is performed.
      //! @param n integer to convert.
      //! @return 16-bit signed integer in host byte order.
      inline static int16_t
      fromBE(int16_t n)
      {
        return fromBE(static_cast<uint16_t>(n));
      }

      //! Converts the first 2 bytes of an array from big endian byte
      //! order to host byte order.
      //! @param n array to convert.
      //! @return 16 bit unsigned integer in host byte order.
      inline static uint16_t
      fromBE(uint8_t* n)
      {
#if defined(DUNE_SYS_HAS_NTOHS)
        return ntohs(*reinterpret_cast<uint16_t*>(n));

#elif defined(DUNE_CPU_LITTLE_ENDIAN)
        return n[0] << 8 | n[1];

#else
        return n;
#endif
      }

      template <typename T>
      static inline uint16_t
      fromBE(T& var, const uint8_t* bfr)
      {
#if defined(DUNE_CPU_BIG_ENDIAN)
        return copy(var, bfr);
#else
        return rcopy(var, bfr);
#endif
      }

      template <typename T>
      static inline uint16_t
      fromLE(T& var, const uint8_t* bfr)
      {
#if defined(DUNE_CPU_BIG_ENDIAN)
        return rcopy(var, bfr);
#else
        return copy(var, bfr);
#endif
      }

      //! Copy one byte of a memory area.
      //! @param dest destination memory area.
      //! @param src source memory area.
      //! @return number of copied bytes.
      static inline uint16_t
      copy1b(uint8_t* dest, const uint8_t* src)
      {
        dest[0] = src[0];
        return 1;
      }

      //! Copy two bytes of a memory area.
      //! @param dest destination memory area.
      //! @param src source memory area.
      //! @return number of copied bytes.
      static inline uint16_t
      copy2b(uint8_t* dest, const uint8_t* src)
      {
        dest[0] = src[0];
        dest[1] = src[1];
        return 2;
      }

      //! Copy four bytes of a memory area.
      //! @param dest destination memory area.
      //! @param src source memory area.
      //! @return number of copied bytes.
      static inline uint16_t
      copy4b(uint8_t* dest, const uint8_t* src)
      {
        dest[0] = src[0];
        dest[1] = src[1];
        dest[2] = src[2];
        dest[3] = src[3];
        return 4;
      }

      //! Copy eight bytes of a memory area.
      //! @param dest destination memory area.
      //! @param src source memory area.
      //! @return number of copied bytes.
      static inline uint16_t
      copy8b(uint8_t* dest, const uint8_t* src)
      {
        dest[0] = src[0];
        dest[1] = src[1];
        dest[2] = src[2];
        dest[3] = src[3];
        dest[4] = src[4];
        dest[5] = src[5];
        dest[6] = src[6];
        dest[7] = src[7];
        return 8;
      }

      //! Copy one byte of a memory area.
      //! @param dest destination memory area.
      //! @param src source memory area.
      //! @return number of copied bytes.
      static inline uint16_t
      rcopy1b(uint8_t* dest, const uint8_t* src)
      {
        dest[0] = src[0];
        return 1;
      }

      //! Copy two bytes of a memory area while reversing the order of
      //! the bytes.
      //! @param dest destination memory area.
      //! @param src source memory area.
      //! @return number of copied bytes.
      static inline uint16_t
      rcopy2b(uint8_t* dest, const uint8_t* src)
      {
        dest[0] = src[1];
        dest[1] = src[0];
        return 2;
      }

      //! Copy four bytes of a memory area while reversing the order of
      //! the bytes.
      //! @param dest destination memory area.
      //! @param src source memory area.
      //! @return number of copied bytes.
      static inline uint16_t
      rcopy4b(uint8_t* dest, const uint8_t* src)
      {
        dest[0] = src[3];
        dest[1] = src[2];
        dest[2] = src[1];
        dest[3] = src[0];
        return 4;
      }

      //! Copy eight bytes of a memory area while reversing the order of
      //! the bytes.
      //! @param dest destination memory area.
      //! @param src source memory area.
      //! @return number of copied bytes.
      static inline uint16_t
      rcopy8b(uint8_t* dest, const uint8_t* src)
      {
        dest[0] = src[7];
        dest[1] = src[6];
        dest[2] = src[5];
        dest[3] = src[4];
        dest[4] = src[3];
        dest[5] = src[2];
        dest[6] = src[1];
        dest[7] = src[0];
        return 8;
      }

      static inline uint16_t
      copy(int8_t& dest, const uint8_t* src)
      {
        return copy1b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      copy(uint8_t& dest, const uint8_t* src)
      {
        return copy1b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      copy(int16_t& dest, const uint8_t* src)
      {
        return copy2b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      copy(uint16_t& dest, const uint8_t* src)
      {
        return copy2b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      copy(int32_t& dest, const uint8_t* src)
      {
        return copy4b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      copy(uint32_t& dest, const uint8_t* src)
      {
        return copy4b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      copy(fp32_t& dest, const uint8_t* src)
      {
        return copy4b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      copy(fp64_t& dest, const uint8_t* src)
      {
        return copy8b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      rcopy(int8_t& dest, const uint8_t* src)
      {
        return rcopy1b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      rcopy(uint8_t& dest, const uint8_t* src)
      {
        return rcopy1b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      rcopy(int16_t& dest, const uint8_t* src)
      {
        return rcopy2b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      rcopy(uint16_t& dest, const uint8_t* src)
      {
        return rcopy2b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      rcopy(int32_t& dest, const uint8_t* src)
      {
        return rcopy4b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      rcopy(uint32_t& dest, const uint8_t* src)
      {
        return rcopy4b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      rcopy(fp32_t& dest, const uint8_t* src)
      {
        return rcopy4b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline uint16_t
      rcopy(fp64_t& dest, const uint8_t* src)
      {
        return rcopy8b(reinterpret_cast<uint8_t*>(&dest), src);
      }

      static inline unsigned
      toLE(const uint8_t value, uint8_t* dst)
      {
        dst[0] = value;

        return 1;
      }

      static inline unsigned
      toLE(const int8_t value, uint8_t* dst)
      {
        dst[0] = static_cast<uint8_t>(value);

        return 1;
      }

      static inline unsigned
      toLE(const uint16_t value, uint8_t* dst)
      {
        dst[0] = value & 0xff;
        dst[1] = (value >> 8) & 0xff;

        return 2;
      }

      static inline unsigned
      toLE(const int16_t value, uint8_t* dst)
      {
        return toLE(static_cast<uint16_t>(value), dst);
      }

      static inline unsigned
      toLE(const uint32_t value, uint8_t* dst)
      {
        dst[0] = value & 0xff;
        dst[1] = (value >> 8) & 0xff;
        dst[2] = (value >> 16) & 0xff;
        dst[3] = (value >> 24) & 0xff;

        return 4;
      }

      static inline unsigned
      toLE(const int32_t value, uint8_t* dst)
      {
        return toLE(static_cast<uint32_t>(value), dst);
      }

      static inline unsigned
      toBE(const uint8_t value, uint8_t* dst)
      {
        dst[0] = value;

        return 1;
      }

      static inline unsigned
      toBE(const int8_t value, uint8_t* dst)
      {
        dst[0] = static_cast<uint8_t>(value);

        return 1;
      }

      static inline unsigned
      toBE(const uint16_t value, uint8_t* dst)
      {
        dst[0] = (value >> 8) & 0xff;
        dst[1] = value & 0xff;

        return 2;
      }

      static inline unsigned
      toBE(const int16_t value, uint8_t* dst)
      {
        return toBE(static_cast<uint16_t>(value), dst);
      }

      static inline unsigned
      toBE(const uint32_t value, uint8_t* dst)
      {
        dst[0] = (value >> 24) & 0xff;
        dst[1] = (value >> 16) & 0xff;
        dst[2] = (value >> 8) & 0xff;
        dst[3] = value & 0xff;

        return 4;
      }

      static inline unsigned
      toBE(const int32_t value, uint8_t* dst)
      {
        return toBE(static_cast<uint32_t>(value), dst);
      }
    };

    //! Copy two bytes of a memory area while reversing the order of
    //! the bytes.
    //! @param dest destination memory area.
    //! @param src source memory area.
    inline void
    reverseCopy2b(char* dest, const char* src)
    {
      dest[0] = src[1];
      dest[1] = src[0];
    }

    //! Copy four bytes of a memory area while reversing the order of
    //! the bytes.
    //! @param dest destination memory area.
    //! @param src source memory area.
    inline void
    reverseCopy4b(char* dest, const char* src)
    {
      dest[0] = src[3];
      dest[1] = src[2];
      dest[2] = src[1];
      dest[3] = src[0];
    }

    //! Copy eight bytes of a memory area while reversing the order of
    //! the bytes.
    //! @param dest destination memory area.
    //! @param src source memory area.
    inline void
    reverseCopy8b(char* dest, const char* src)
    {
      dest[0] = src[7];
      dest[1] = src[6];
      dest[2] = src[5];
      dest[3] = src[4];
      dest[4] = src[3];
      dest[5] = src[2];
      dest[6] = src[1];
      dest[7] = src[0];
    }

    //! Copy a 16 bit unsigned integer to a memory area while reversing
    //! the order of the bytes.
    //! @param dest destination memory area.
    //! @param src source 16 bit unsigned integer.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const uint16_t& src)
    {
      reverseCopy2b(dest, (char*)&src);
      return 2;
    }

    //! Copy a 16 bit signed integer to a memory area while reversing
    //! the order of the bytes.
    //! @param dest destination memory area.
    //! @param src source 16 bit unsigned integer.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const int16_t& src)
    {
      reverseCopy2b(dest, (char*)&src);
      return 2;
    }

    inline uint16_t
    reverseCopy(uint16_t& dest, const char* src)
    {
      reverseCopy2b((char*)&dest, src);
      return 2;
    }

    inline uint16_t
    reverseCopy(int16_t& dest, const char* src)
    {
      reverseCopy2b((char*)&dest, src);
      return 2;
    }

    //! Copy a 32 bit signed integer to a memory area while reversing
    //! the order of the bytes.
    //! @param dest destination memory area.
    //! @param src source 32 bit signed integer.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const int32_t& src)
    {
      reverseCopy4b(dest, (char*)&src);
      return 4;
    }

    //! Copy a 32 bit unsigned integer to a memory area while reversing
    //! the order of the bytes.
    //! @param dest destination memory area.
    //! @param src source 32 bit unsigned integer.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const uint32_t& src)
    {
      reverseCopy4b(dest, (char*)&src);
      return 4;
    }

    inline uint16_t
    reverseCopy(int32_t& dest, const char* src)
    {
      reverseCopy4b((char*)&dest, src);
      return 4;
    }

    inline uint16_t
    reverseCopy(uint32_t& dest, const char* src)
    {
      reverseCopy4b((char*)&dest, src);
      return 4;
    }

    //! Copy a 64 bit signed integer to a memory area while reversing
    //! the order of the bytes.
    //! @param dest destination memory area.
    //! @param src source 64 bit signed integer.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const int64_t& src)
    {
      reverseCopy8b(dest, (char*)&src);
      return 8;
    }

    //! Copy a 64 bit unsigned integer to a memory area while reversing
    //! the order of the bytes.
    //! @param dest destination memory area.
    //! @param src source 64 bit unsigned integer.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const uint64_t& src)
    {
      reverseCopy8b(dest, (char*)&src);
      return 8;
    }

    inline uint16_t
    reverseCopy(int64_t& dest, const char* src)
    {
      reverseCopy8b((char*)&dest, src);
      return 8;
    }

    inline uint16_t
    reverseCopy(uint64_t& dest, const char* src)
    {
      reverseCopy8b((char*)&dest, src);
      return 8;
    }

    //! Copy a single precision floating point variable to a memory
    //! area while reversing the order of the bytes.
    //! @param dest destination memory area.
    //! @param src source single precision floating point variable.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const fp32_t& src)
    {
      reverseCopy4b(dest, (char*)&src);
      return 4;
    }

    inline uint16_t
    reverseCopy(float& dest, const char* src)
    {
      reverseCopy4b((char*)&dest, src);
      return 4;
    }

    //! Copy a double precision floating point variable to a memory
    //! area while reversing the order of the bytes.
    //! @param dest destination memory area.
    //! @param src source double precision floating point variable.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const fp64_t& src)
    {
      reverseCopy8b(dest, (char*)&src);
      return 8;
    }

    inline uint16_t
    reverseCopy(double& dest, const char* src)
    {
      reverseCopy8b((char*)&dest, src);
      return 8;
    }

    //! Copy the bytes of a memory area while reversing the order of
    //! the bytes.
    //! @param dest destination memory area.
    //! @param src source memory area.
    //! @param n amount of bytes to copy.
    //! @return number of copied bytes.
    inline uint16_t
    reverseCopy(char* dest, const char* src, uint16_t n)
    {
      char* d = (char*)dest;
      char* s = (char*)src + n - 1;

      for (size_t i = 0; i < n; i++)
        *(d++) = *(s--);

      return n;
    }

    template <typename Type>
    inline uint16_t
    copy(char* dest, const Type& src, uint16_t size = sizeof(Type))
    {
      std::memcpy(dest, &src, size);
      return size;
    }

    inline uint16_t
    copy(uint32_t& dest, const char* src)
    {
      std::memcpy((char*)&dest, src, 4);
      return 4;
    }

    inline uint16_t
    copy(char* dest, const char* src, uint16_t size)
    {
      std::memcpy(dest, src, size);
      return size;
    }

    inline uint16_t
    copy(char* dest, const uint8_t* src, uint16_t size)
    {
      std::memcpy(dest, src, size);
      return size;
    }
  }
}

#endif
