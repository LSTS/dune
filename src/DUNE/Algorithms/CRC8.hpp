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
      //! @param[in] value current CRC8 value.
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
