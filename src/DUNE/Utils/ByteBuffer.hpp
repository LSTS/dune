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

#ifndef DUNE_UTILS_BYTE_BUFFER_HPP_INCLUDED_
#define DUNE_UTILS_BYTE_BUFFER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdlib>
#include <ostream>
#include <cstring>

// DUNE headers.
#include <DUNE/Math/General.hpp>

namespace DUNE
{
  namespace Utils
  {
    class ByteBuffer
    {
    friend std::ostream&
    operator<<(std::ostream& os, ByteBuffer& buffer);

    public:
      ByteBuffer(uint32_t capacity = 128):
        m_buffer(NULL),
        m_capacity(Math::computeNextPowerOfTwo(capacity)),
        m_size(0)
      {
        m_buffer = (uint8_t*)std::malloc(m_capacity);
      }

      inline
      ~ByteBuffer(void)
      {
        std::free(m_buffer);
      }

      inline void
      grow(uint32_t size)
      {
        if (size > m_capacity)
        {
          m_capacity = Math::computeNextPowerOfTwo(size);
          m_buffer = (uint8_t*)std::realloc(m_buffer, m_capacity);
        }
      }

      void
      write(const uint8_t* data, uint32_t size)
      {
        grow(size);
        std::memcpy(m_buffer, data, size);
        m_size = size;
      }

      void
      resetBuffer(void)
      {
        std::memset(m_buffer, 0, m_capacity);
        m_size = 0;
      }

      void
      append(const uint8_t* data, uint32_t size)
      {
        grow(m_size + size);
        std::memcpy(m_buffer + m_size, data, size);
        m_size += size;
      }

      void
      appendSigned(const char* data, uint32_t size)
      {
        append((uint8_t*)data, size);
      }

      void
      setSize(uint32_t size)
      {
        grow(size);
        m_size = size;
      }

      inline uint8_t*
      getBuffer(void)
      {
        return m_buffer;
      }

      inline char*
      getBufferSigned(void)
      {
        return (char*)m_buffer;
      }

      inline uint32_t
      getCapacity(void)
      {
        return m_capacity;
      }

      inline uint32_t
      getSize(void)
      {
        return m_size;
      }

      inline uint32_t
      getRemaining(void)
      {
        return m_capacity - m_size;
      }

    private:
      //! Internal buffer.
      uint8_t* m_buffer;
      //! Internal buffer's capacity.
      uint32_t m_capacity;
      //! Internal buffer's used space.
      uint32_t m_size;
    };

    inline std::ostream&
    operator<<(std::ostream& os, ByteBuffer& buffer)
    {
      os.write((char*)buffer.m_buffer, buffer.m_size);
      return os;
    }
  }
}

#endif
