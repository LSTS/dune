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

#ifndef LCB_FILTERS_MTX_HPP_INCLUDED_
#define LCB_FILTERS_MTX_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
using DUNE_NAMESPACES;

// Local headers.
#include "Filter.hpp"

namespace LCB
{
  namespace Filters
  {
    class MTx: public Filter
    {
    public:
      MTx(sqlite3* db):
        Filter(db),
        m_msec(-1),
        m_state(PS_NONE)
      {
        dbCreate("CREATE TABLE IF NOT EXISTS mtx ("
                 "  time   UNSIGNED BIG INT NOT NULL,"
                 "  temp   REAL NOT NULL,"
                 "  accl_x REAL NOT NULL,"
                 "  accl_y REAL NOT NULL,"
                 "  accl_z REAL NOT NULL,"
                 "  avel_x REAL NOT NULL,"
                 "  avel_y REAL NOT NULL,"
                 "  avel_z REAL NOT NULL,"
                 "  phi    REAL NOT NULL,"
                 "  theta  REAL NOT NULL,"
                 "  psi    REAL NOT NULL,"
                 "  PRIMARY KEY(time)"
                 " )"
                 );

        dbPrepare("INSERT INTO mtx VALUES(?,?,?,?,?,?,?,?,?,?,?)");
      }

      bool
      doFilter(int64_t msec, uint8_t byte)
      {
        switch (m_state)
        {
          // Parse preamble.
          case PS_NONE:
            //std::fprintf(stderr, "PS_NONE %02X\n", byte);
            if (byte == c_preamble)
            {
              m_state = PS_BID;
              m_msec = msec;
              m_csum = 0;
              m_data_len = 0;
              m_data_idx = 0;
            }
            break;

            // Parse bus identifier.
          case PS_BID:
            //std::fprintf(stderr, "PS_BID %02X\n", byte);
            if (byte == 0xFF)
            {
              m_csum += byte;
              m_state = PS_MID;
            }
            break;

            // Parse message identifier.
          case PS_MID:
            //std::fprintf(stderr, "PS_MID %02X\n", byte);
            m_csum += byte;
            m_state = PS_LEN;
            m_mid = byte;
            break;

            // Parse data length.
          case PS_LEN:
            //std::fprintf(stderr, "PS_LEN %02X\n", byte);
            m_csum += byte;
            m_state = byte ? PS_DATA : PS_CS;
            m_data_len = byte;
            break;

            // Parse data.
          case PS_DATA:
            //std::fprintf(stderr, "PS_DATA %02X\n", byte);
            m_csum += byte;
            m_data[m_data_idx++] = byte;
            if (m_data_idx == m_data_len)
              m_state = PS_CS;
            break;

            // Parse checksum.
          case PS_CS:
            //std::fprintf(stderr, "PS_CS %02X\n", byte);
            m_csum += byte;
            m_state = PS_NONE;
            if (m_csum & 0xFF)
            {
              std::fprintf(stderr, "ERROR: MTx: invalid checksum (%02X).\n", m_csum & 0xff);
              return -1;
            }
            else
            {
              //std::fprintf(stderr, "MTx: % 3u: % 3u\n", m_pulse, m_data_len);
              interpret();
              return true;
            }
            break;

            // Should never get here.
          default:
            m_state = PS_NONE;
            break;
        }
      }

      void
      interpret(void)
      {
        if (m_mid != 0x32)
        {
          std::fprintf(stderr, "ERROR: MTx: unknown message id %02X\n", m_mid);
          return;
        }

        const uint8_t* ptr = m_data;

        // Temperature.
        ByteCopy::fromBE(m_fields.temp, ptr);

        // Acceleration X.
        ByteCopy::fromBE(m_fields.accl_x, ptr + 4);
        // Acceleration Y.
        ByteCopy::fromBE(m_fields.accl_y, ptr + 8);
        // Acceleration Z.
        ByteCopy::fromBE(m_fields.accl_z, ptr + 12);

        // Angular Velocity X.
        ByteCopy::fromBE(m_fields.avel_x, ptr + 16);
        // Angular Velocity Y.
        ByteCopy::fromBE(m_fields.avel_y, ptr + 20);
        // Angular Velocity Z.
        ByteCopy::fromBE(m_fields.avel_z, ptr + 24);

        // Roll.
        ByteCopy::fromBE(m_fields.phi, ptr + 28);
        // Pitch.
        ByteCopy::fromBE(m_fields.theta, ptr + 32);
        // Yaw.
        float tmp = 0;
        ByteCopy::fromBE(tmp, ptr + 36);
        m_fields.psi = Angles::degrees(Angles::normalizeRadian(Angles::radians(tmp)));

        if (dbIsActive())
        {
          dbBindInt64(1, m_msec);
          dbBindDouble(2, m_fields.temp);
          dbBindDouble(3, m_fields.accl_x);
          dbBindDouble(4, m_fields.accl_y);
          dbBindDouble(5, m_fields.accl_z);
          dbBindDouble(6, m_fields.avel_x);
          dbBindDouble(7, m_fields.avel_y);
          dbBindDouble(8, m_fields.avel_z);
          dbBindDouble(9, m_fields.phi);
          dbBindDouble(10, m_fields.theta);
          dbBindDouble(11, m_fields.psi);
          dbStep();
        }
      }

    private:
      //! States of the internal SM.
      enum ParserStates
      {
        // No message is being parsed.
        PS_NONE,
        // Preamble.
        PS_PRE,
        // Bus identifier.
        PS_BID,
        // Message identifier.
        PS_MID,
        // Data size.
        PS_LEN,
        // Data bytes.
        PS_DATA,
        // Message checksum.
        PS_CS
      };

      struct Fields
      {
        float temp;
        float accl_x;
        float accl_y;
        float accl_z;
        float avel_x;
        float avel_y;
        float avel_z;
        float magn_x;
        float magn_y;
        float magn_z;
        float phi;
        float theta;
        float psi;
      };

      // Message preamble.
      static const uint8_t c_preamble = 0xFA;
      // Maximum data length.
      static const int c_max_data_len = 255;
      // Scratch buffer capacity.
      static const int c_max_bfr_len = 4096;
      // Current SM state.
      ParserStates m_state;
      // Message identifier.
      uint8_t m_mid;
      // Message data length.
      uint8_t m_data_len;
      // Message data index.
      uint8_t m_data_idx;
      // Message data.
      uint8_t m_data[c_max_data_len];
      // Message checksum.
      unsigned int m_csum;
      int64_t m_msec;
      //! Data fields.
      Fields m_fields;
    };
  }
}

#endif
