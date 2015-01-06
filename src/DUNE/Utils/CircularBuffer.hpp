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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_UTILS_CIRCULAR_BUFFER_HPP_INCLUDED_
#define DUNE_UTILS_CIRCULAR_BUFFER_HPP_INCLUDED_

// ISO C++ headers.
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Utils
  {
    //! Circular buffer with a maximum fixed-size capacity.
    //! Additions beyond the buffer capacity will result in eviction of the oldest datum.
    template <typename T>
    class CircularBuffer
    {
    public:
      //! Exception class for errors in circular buffer handling.
      class Error: public std::runtime_error
      {
      public:
        //! Constructor.
        inline
        Error(const std::string& msg):
          std::runtime_error(std::string("Circular buffer error: ") + msg)
        { }
      };

      //! Constructor.
      //! @param capacity maximum capacity
      CircularBuffer(uint32_t capacity = 1):
        m_capacity(capacity),
        m_size(0),
        m_head(0),
        m_tail(0)
      {
        if (!m_capacity)
          throw Error("zero capacity specified");
        m_buffer = new T[m_capacity];
      }

      // Copy constructor.
      //! @param other instance of CircularBuffer<T> to copy.
      inline
      CircularBuffer(const CircularBuffer<T>& other):
        m_capacity(other.m_capacity),
        m_size(other.m_size),
        m_head(0),
        m_tail(m_size - 1)
      {
        m_buffer = new T[m_capacity];
        for (uint32_t i = 0; i < m_size; ++i)
          m_buffer[i] = other(i);
      }

      //! Destructor.
      inline
      ~CircularBuffer(void)
      {
        delete [] m_buffer;
      }

      //! Clear the buffer.
      inline void
      clear(void)
      {
        m_head = 0;
        m_tail = 0;
        m_size = 0;
      }

      //! Reset the buffer capacity.
      //! Previous contents are saved in FIFO order up to the new capacity.
      //! @param n new capacity
      void
      setCapacity(uint32_t n)
      {
        if (!n)
          throw Error("zero capacity specified");

        if (n == m_capacity)
          return;

        T* b = new T[n];

        int newsize = std::min(m_size, n);

        for (int i = 1; i <= newsize; i++)
          b[newsize - i] = m_buffer[(m_head + m_size - i) % m_capacity];

        delete [] m_buffer;
        m_buffer = b;
        m_head = 0;
        m_tail = newsize - 1;
        m_size = newsize;
        m_capacity = n;
      }

      //! Add data to the buffer.
      //! If the buffer is using all its capacity, the oldest data
      //! will be overwritten.
      //! @param data data to add.
      inline void
      add(const T& data)
      {
        if (m_size && m_head == m_tail)
          m_head = (m_head + 1) % m_capacity;
        else
          ++m_size;

        m_buffer[m_tail] = data;
        m_tail = (m_tail + 1) % m_capacity;
      }

      //! Access buffer position.
      //! @param index position.
      //! @return data at index-th position.
      inline T&
      operator()(uint32_t index)
      {
        if (index >= m_size)
          throw Error("invalid access index");
        return m_buffer[(m_head + index) % m_capacity];
      }

      //! Access buffer position.
      //! @param index position.
      //! @return data at index-th position.
      inline const T&
      operator()(uint32_t index) const
      {
        if (index >= m_size)
          throw Error("invalid access index");
        return m_buffer[(m_head + index) % m_capacity];
      }

      //! Get buffer capacity.
      //! @return buffer capacity.
      inline uint32_t
      getCapacity(void) const
      {
        return m_capacity;
      }

      //! Get size of the buffer in use.
      //! @return buffer size in use.
      inline uint32_t
      getSize(void) const
      {
        return m_size;
      }

    private:
      //! Internal buffer.
      T* m_buffer;
      //! Internal buffer's capacity.
      uint32_t m_capacity;
      //! Internal buffer's used space.
      uint32_t m_size;
      //! Head position.
      uint32_t m_head;
      //! Tail position.
      uint32_t m_tail;
    };
  }
}

#endif
