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

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/Parsers/PD4.hpp>

namespace DUNE
{
  namespace Parsers
  {
    //! Invalid velocity.
    static const int16_t c_invalid_vel = -32768;

    PD4::PD4(bool use_checksum, bool use_size):
      m_use_checksum(use_checksum),
      m_use_size(use_size)
    {
      clear();
    }

    bool
    PD4::parse(uint8_t byte)
    {
      switch (m_state)
      {
        case ST_NONE:
          if (byte == 0x7d)
          {
            clear();
            m_ccsum += byte;
            m_state = ST_STRUCT;
          }
          return false;

        case ST_STRUCT:
          if (byte == 0x00)
          {
            m_ccsum += byte;
            m_state = ST_SIZE0;
          }
          else
          {
            clear();
          }
          return false;

        case ST_SIZE0:
          if (!m_use_size)
            byte = 46;
          m_size = byte;
          m_ccsum += byte;
          m_state = ST_SIZE1;
          return false;

        case ST_SIZE1:
          if (!m_use_size)
            byte = 0;
          m_size += byte * 256;
          m_size -= 4;
          m_ccsum += byte;
          m_state = ST_DATA;
          return false;

        case ST_DATA:
          m_ccsum += byte;
          m_raw_data[m_idx] = byte;
          ++m_idx;
          if (m_idx == m_size)
            m_state = ST_CSUM0;
          return false;

        case ST_CSUM0:
          m_rcsum = byte;
          m_state = ST_CSUM1;
          return false;

        case ST_CSUM1:
          m_rcsum += byte * 256;
          if (m_rcsum != m_ccsum && m_use_checksum)
          {
            clear();
            return false;
          }
          m_state = ST_NONE;
          break;
      }

      // Clear data.
      std::memset(&m_data, 0, sizeof(m_data));

      // Bottom velocity.
      int16_t stmp = m_raw_data[2] * 256 + m_raw_data[1];
      if (stmp != c_invalid_vel)
      {
        m_data.x_vel_btm = 0.001 * stmp;
        m_data.vel_btm_validity |= COMP_X;
      }

      stmp = m_raw_data[4] * 256 + m_raw_data[3];
      if (stmp != c_invalid_vel)
      {
        m_data.y_vel_btm = 0.001 * stmp;
        m_data.vel_btm_validity |= COMP_Y;
      }

      stmp = m_raw_data[6] * 256 + m_raw_data[5];
      if (stmp != c_invalid_vel)
      {
        m_data.z_vel_btm = 0.001 * stmp;
        m_data.vel_btm_validity |= COMP_Z;
      }

      stmp = m_raw_data[8] * 256 + m_raw_data[7];
      m_data.e_vel_btm = 0.001 * stmp;

      // Bottom ranges.
      uint16_t utmp = m_raw_data[10] * 256 + m_raw_data[9];
      m_data.bm1_rng_btm = 0.01 * utmp;

      utmp = m_raw_data[12] * 256 + m_raw_data[11];
      m_data.bm2_rng_btm = 0.01 * utmp;

      utmp = m_raw_data[14] * 256 + m_raw_data[13];
      m_data.bm3_rng_btm = 0.01 * utmp;

      utmp = m_raw_data[16] * 256 + m_raw_data[15];
      m_data.bm4_rng_btm = 0.01 * utmp;

      // Water velocity.
      stmp = m_raw_data[19] * 256 + m_raw_data[18];
      if (stmp != c_invalid_vel)
      {
        m_data.x_vel_wtr = 0.001 * stmp;
        m_data.vel_wtr_validity |= COMP_X;
      }

      stmp = m_raw_data[21] * 256 + m_raw_data[20];
      if (stmp != c_invalid_vel)
      {
        m_data.y_vel_wtr = 0.001 * stmp;
        m_data.vel_wtr_validity |= COMP_Y;
      }

      stmp = m_raw_data[23] * 256 + m_raw_data[22];
      if (stmp != c_invalid_vel)
      {
        m_data.z_vel_wtr = 0.001 * stmp;
        m_data.vel_wtr_validity |= COMP_Z;
      }

      return true;
    }

    void
    PD4::clear(void)
    {
      m_rcsum = 0;
      m_ccsum = 0;
      m_idx = 0;
      m_size = 0;
      m_state = ST_NONE;
    }
  }
}
