//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: RawFifo.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
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
