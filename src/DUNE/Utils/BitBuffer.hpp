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
// Author: Carlos Oliveira                                                  *
//***************************************************************************

#ifndef DUNE_UTILS_BIT_BUFFER_HPP_INCLUDED_
#define DUNE_UTILS_BIT_BUFFER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdlib>
#include <ostream>
#include <cstring>
#include <iostream>

// DUNE headers.
#include <DUNE/Math/General.hpp>

#define m_bitpacketsize 8

namespace DUNE
{
  namespace Utils
  {
    class BitBuffer
    {
    friend std::ostream&
    operator<<(std::ostream& os, BitBuffer& buffer);

    public:
      BitBuffer(uint64_t capacity):
        m_capacity(capacity),
        m_size(0),
        m_lastbit(0)
      {
        m_buffer = (uint8_t*)std::malloc(m_capacity);
        std::memset(m_buffer, 0, m_capacity);
      }

      BitBuffer():
        m_capacity(1048576),
        m_size(0),
        m_lastbit(0)
      {
        m_buffer = (uint8_t*)std::malloc(m_capacity);
        std::memset(m_buffer, 0, m_capacity);
      }

      inline
      ~BitBuffer(void)
      {
        std::free(m_buffer);
      }

      inline void
      appendOnes(const uint64_t nrofbits)
      {
        for (uint64_t i = m_lastbit; i < m_lastbit + nrofbits; i++)
        {
          m_buffer[i / m_bitpacketsize] |= (1 << i % m_bitpacketsize);
        }

        m_lastbit += nrofbits;

        m_size = m_lastbit / m_bitpacketsize;
      }

      inline void
      appendZeros(uint64_t nrofbits)
      {
        m_lastbit += nrofbits;

        m_size = m_lastbit / m_bitpacketsize;
      }

      /*
       * Append zero stream terminated by bit set to true
       */
      inline void
      appendZeroStream(uint64_t nrofbits)
      {
        m_lastbit += nrofbits;

        m_buffer[m_lastbit / m_bitpacketsize] |= (1 << m_lastbit % m_bitpacketsize);

        m_lastbit += 1;

        m_size = m_lastbit / m_bitpacketsize;
      }

      inline bool
      getBit(uint64_t index)
      {
        if ((m_buffer[index / m_bitpacketsize] & (1 << index % m_bitpacketsize)) == (1 << index % m_bitpacketsize))
        {
          return true;
        }
        else
        {
          return false;
        }
      }

      inline uint8_t
      getData(uint64_t index, uint8_t nbits)
      {
        uint8_t data = 0;

        for (uint64_t i = 0; i < nbits; i++)
        {
          if (getBit(index + i))
          {
            data |= (1 << i);
          }
          else
          { }
        }

        return data;
      }

      inline void
      appendData(uint8_t bits, uint8_t sbits)
      {
        for (uint64_t i = 0; i < sbits; i++)
        {
          if ((bits & (1 << i)) == (1 << i))
          {
            m_buffer[m_lastbit / m_bitpacketsize] |= (1 << m_lastbit % m_bitpacketsize);
            m_lastbit++;
          }
          else
          {
            m_lastbit++;
          }
        }
        m_size = m_lastbit / m_bitpacketsize;
      }

      void
      setSize(uint32_t size)
      {
        m_size = size;
      }

      inline uint8_t*
      getBuffer(void)
      {
        return m_buffer;
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

      inline uint64_t
      getBitsize(void)
      {
        return m_lastbit;
      }

      inline bool
      resetBuffer(void)
      {
        std::memset(m_buffer, 0, m_capacity);
        m_lastbit = 0;
        m_size = 0;
        return true;
      }

      void
      write(const uint8_t* data, uint32_t size)
      {
        std::memcpy(m_buffer, data, size);
        m_size = size;
      }

    private:
      //! Internal buffer.
      uint8_t* m_buffer;
      //! Internal buffer's capacity.
      uint32_t m_capacity;
      //! Internal buffer's used space.
      uint32_t m_size;
      //! Last bit position.
      uint64_t m_lastbit;
    };

    inline std::ostream&
    operator<<(std::ostream& os, BitBuffer& buffer)
    {
      os.write((char*)buffer.m_buffer, buffer.m_size);
      return os;
    }
  }
}

#endif
