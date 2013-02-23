//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Parser.hpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

#ifndef SENSORS_XR620CTD_PARSER_HPP_INCLUDED_
#define SENSORS_XR620CTD_PARSER_HPP_INCLUDED_

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

        throw std::runtime_error(String::str("character value '%d' is not a valid nibble", c));
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
