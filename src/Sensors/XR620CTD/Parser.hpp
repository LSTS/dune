//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_XR620_CTD_PARSER_HPP_INCLUDED_
#define SENSORS_XR620_CTD_PARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace XR620CTD
  {
    using DUNE_NAMESPACES;

    class Parser
    {
    public:
      Parser(void)
      {
        reset();
      }

      bool
      parse(uint8_t byte)
      {
        bool rv = false;

        switch (m_state)
        {
          case STATE_00:
            if (byte == 0)
              m_state = STATE_01;
            else
              reset();
            break;

          case STATE_01:
            if (byte == 0)
              m_state = STATE_02;
            else
              reset();
            break;

          case STATE_02:
            if (byte == 0)
              m_state = STATE_T;
            else
              reset();
            break;

          case STATE_T:
            if (byte == 'T')
            {
              m_csum += byte;
              m_state = STATE_I;
            }
            else
              reset();
            break;

          case STATE_I:
            if (byte == 'I')
            {
              m_csum += byte;
              m_state = STATE_M;
            }
            else
              reset();

            break;

          case STATE_M:
            if (byte == 'M')
            {
              m_csum += byte;
              m_state = STATE_DATA;
            }
            else
              reset();
            break;

          case STATE_DATA:
            m_csum += byte;
            m_data[m_data_len++] = byte;
            if (m_data_len == c_max_data_len)
              m_state = STATE_CSUM;
            break;

          case STATE_CSUM:
            if (m_csum == byte)
              rv = true;
            reset();
            if (rv == false)
              throw std::runtime_error(DTR(Status::getString(Status::CODE_INVALID_CHECKSUM)));
            break;
        }

        return rv;
      }

      uint32_t
      getDataField(unsigned nr)
      {
        unsigned idx = 6 + (nr * 3);
        return ((m_data[idx] << 16) | (m_data[idx + 1] << 8) | (m_data[idx + 2])) & 0x00ffffff;
      }

      void
      reset(void)
      {
        m_data_len = 0;
        m_state = STATE_00;
        m_csum = 0;
      }

      static double
      readDoubleFromASCII(const char* str)
      {
        RealNumber nr;

#if defined(DUNE_CPU_LITTLE_ENDIAN)
#  define IDX(i) i
#else
#  define IDX(i) 7 - i
#endif

        for (unsigned i = 0; i < 8; ++i)
          nr.bytes[IDX(i)] = readByteFromASCII(str + i * 2);

        return nr.real;
      }

    private:
      enum States
      {
        STATE_00,
        STATE_01,
        STATE_02,
        STATE_T,
        STATE_I,
        STATE_M,
        STATE_DATA,
        STATE_CSUM
      };

      // Convenient definition to parse IEEE floating-point numbers.
      union RealNumber
      {
        uint8_t bytes[8];
        double real;
      };

      // Maximum data length.
      static const unsigned c_max_data_len = 15;
      // Parser state.
      States m_state;
      // Current data length.
      unsigned m_data_len;
      // Data.
      uint8_t m_data[c_max_data_len];
      // Checksum.
      uint8_t m_csum;

      static uint8_t
      readNibbleFromASCII(char c)
      {
        if ((c >= 'A') && (c <= 'F'))
          return c - 'A' + 10;

        if ((c >= 'a') && (c <= 'f'))
          return c - 'a' + 10;

        if ((c >= '0') && (c <= '9'))
          return c - '0';

        throw std::runtime_error(String::str(DTR("character value '%d' is not a valid nibble"), c));
      }

      static uint8_t
      readByteFromASCII(const char* str)
      {
        return (readNibbleFromASCII(str[0]) << 4) | readNibbleFromASCII(str[1]);
      }
    };
  }
}

#endif
