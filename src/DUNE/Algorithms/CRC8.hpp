//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_ALGORITHMS_CRC8_HPP_INCLUDED_
#define DUNE_ALGORITHMS_CRC8_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM CRC8;

    //! Generic computation of 8-bit CRCs.
    class CRC8
    {
    public:
      //! Constructor.
      //! @param[in] polynomial polynomial.
      //! @param[in] value initial CRC8 value.
      CRC8(uint8_t polynomial, uint8_t value = 0):
        m_polynomial(polynomial),
        m_value(value)
      { }

      //! Set the current CRC8 value.
      //! @param[in] current CRC8 value.
      void
      set(uint8_t value = 0)
      {
        m_value = value;
      }

      //! Retrieve the current CRC8 value.
      //! @return current CRC8 value.
      uint8_t
      get(void) const
      {
        return m_value;
      }

      //! Compute the CRC8 of one byte.
      //! @param[in] byte byte.
      //! @return current CRC8 value.
      uint8_t
      putByte(uint8_t byte)
      {
        m_value ^= byte;

        for (uint8_t i = 0; i < 8; ++i)
        {
          if ((m_value & 0x80) != 0)
          {
            m_value <<= 1;
            m_value ^= m_polynomial;
          }
          else
          {
            m_value <<= 1;
          }
        }

        return m_value;
      }

      //! Compute the CRC8 of an array of bytes.
      //! @param[in] data array of bytes.
      //! @param[in] data_size size of array.
      //! @return current CRC8 value.
      uint8_t
      putArray(const uint8_t* data, unsigned int data_size)
      {
        while (data_size > 0)
        {
          putByte(*data++);
          --data_size;
        }

        return m_value;
      }

    private:
      //! Polynomial.
      uint8_t m_polynomial;
      //! Current CRC8 value.
      uint8_t m_value;
    };
  }
}

#endif
