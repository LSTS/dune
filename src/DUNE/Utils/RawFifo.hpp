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

#ifndef DUNE_UTILS_RAW_FIFO_HPP_INCLUDED_
#define DUNE_UTILS_RAW_FIFO_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Utils
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM RawFifo;

    //! Implementation of a First In First Out data structure, that can
    //! hold raw data (byte streams). Data is stored internally in a
    //! circular buffer. This structure can be accessed without locks when
    //! there is only one concurrent writer and one concurrent reader.
    class RawFifo
    {
    public:
      //! Creates a new FIFO, allocating necessary space.
      //! @param size size of the FIFO data (will be transformed to the
      //! nearest power of two).
      RawFifo(uint32_t size);

      //! Creates a FIFO from an existing array.
      //! @param data array of data.
      //! @param size size of the array (must be a power of two).
      RawFifo(uint8_t* data, uint32_t size);

      //! Class destructor.
      ~RawFifo(void)
      {
        delete[] m_data;
      }

      //! Resets the FIFO contents.
      void
      reset(void)
      {
        m_in = m_out = 0;
      }

      //! Computes the FIFO size.
      //! @return FIFO size in bytes.
      uint32_t
      size(void)
      {
        return m_in - m_out;
      }

      //! Inserts data into the FIFO.
      //! @param buffer data to be inserted.
      //! @param length length of the data to be inserted.
      //! @return amount of bytes inserted.
      uint32_t
      put(const uint8_t* buffer, uint32_t length);

      //! Retrieves data from the FIFO.
      //! @param buffer buffer that will hold the retrieved data.
      //! @param length amount of bytes to retrieve.
      //! @return amount of bytes retrieved.
      inline uint32_t
      get(uint8_t* buffer, uint32_t length)
      {
        uint32_t l = getHead(buffer, length);

        m_out += l;

        return l;
      }

      //! Retrieves the head of the FIFO.
      //! @param buffer buffer that will hold the retrieved data.
      //! @param length amount of bytes to retrieve.
      //! @return amount of bytes retrieved.
      uint32_t
      getHead(uint8_t* buffer, uint32_t length);

      //! Discards data from the FIFO.
      //! @param length amount of bytes to discard.
      //! @return amount of bytes discarded.
      uint32_t
      discard(uint32_t length);

    private:
      //! Internal buffer.
      uint8_t* m_data;
      //! Size of the internal buffer.
      uint32_t m_size;
      //! Data is inserted at offset (m_in % m_size).
      uint32_t m_in;
      //! Data is retrieved from offset (m_out % m_size).
      uint32_t m_out;
    };
  }
}

#endif
