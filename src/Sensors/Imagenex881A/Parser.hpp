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
// Author: José Braga                                                      *
//***************************************************************************

#ifndef SENSORS_IMAGENEX_881A_PARSER_HPP_INCLUDED_
#define SENSORS_IMAGENEX_881A_PARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Imagenex881A
  {
    using DUNE_NAMESPACES;

    //! Parser for the Imagenex 881A response frame.
    class Parser
    {
    public:
      //! Constructor.
      Parser(std::vector<char>& data_point_buffer):
        m_data(data_point_buffer)
      {
        clear();
      }

      //! Parse header.
      //! @param[in] byte frame byte.
      //! @return true if complete return data is available, false otherwise.
      bool
      parse(uint8_t byte)
      {
        bool rv = false;

        switch (m_state)
        {
          case STA_HDR_0:
            clear();
            if (byte == 'I')
              m_state = STA_HDR_1;
            break;

          case STA_HDR_1:
            if ((byte == 'M') || (byte == 'G') || (byte == 'P'))
              m_state = STA_HDR_2;
            else
              clear();
            break;

          case STA_HDR_2:
            if (byte == 'X')
              m_state = STA_HEAD_ID;
            else
              m_state = STA_HDR_0;
            break;

          case STA_HEAD_ID:
            if (byte == 0x10)
              m_state = STA_SERIAL_STATUS;
            else
              m_state = STA_HDR_0;
            break;

          case STA_SERIAL_STATUS:
            m_state = STA_HEAD_POS_LO;
            break;

          case STA_HEAD_POS_LO:
            m_previous = byte;
            m_state = STA_HEAD_POS_HI;
            break;

          case STA_HEAD_POS_HI:
            interpretHeadPosition(byte, m_previous);
            m_state = STA_RANGE;
            break;

          case STA_RANGE:
            m_range = byte;
            m_state = STA_PROFILE_RANGE_LO;
            break;

          case STA_PROFILE_RANGE_LO:
            m_previous = byte;
            m_state = STA_PROFILE_RANGE_HI;
            break;

          case STA_PROFILE_RANGE_HI:
            interpretProfileRange(byte, m_previous);
            m_state = STA_DATA_BYTES_LO;
            break;

          case STA_DATA_BYTES_LO:
            m_previous = byte;
            m_state = STA_DATA_BYTES_HI;
            break;

          case STA_DATA_BYTES_HI:
            interpretDataBytes(byte, m_previous);
            m_data.resize(m_data_points);
            if (m_data_points > 0)
              m_state = STA_ECHO_DATA;
            else
              m_state = STA_TERM;
            break;

          case STA_ECHO_DATA:
            m_data[m_data_idx++] = byte;
            if (m_data_idx == m_data_points)
              m_state = STA_TERM;
            break;

          case STA_TERM:
            if (byte == 0xfc)
              rv = true;
            m_state = STA_HDR_0;
            break;
        }

        return rv;
      }

      //! Get profile range.
      //! @return profile range.
      float
      getProfileRange(void) const
      {
        return m_profile_range;
      }

      //! Get range.
      //! @return maximum range.
      uint8_t
      getRange(void) const
      {
        return m_range;
      }

      //! Get head position.
      //! @return head position.
      float
      getHeadPosition(void) const
      {
        return m_head_position;
      }

      //! Retrieve number of data points of the last shot.
      //! @return number of data points of the last shot.
      unsigned
      getDataPointsCount(void) const
      {
        return m_data_points;
      }

    private:
      enum State
      {
        //! First byte of the return data header ('I').
        STA_HDR_0,
        //! Second byte of the return data header ('M', 'G' or 'P').
        STA_HDR_1,
        //! Third byte of the return data header ('X').
        STA_HDR_2,
        //! Header ID (always 0x10).
        STA_HEAD_ID,
        //! Serial Status.
        STA_SERIAL_STATUS,
        //! Head position (LSB).
        STA_HEAD_POS_LO,
        //! Head position (MSB).
        STA_HEAD_POS_HI,
        //! Echo sounder range.
        STA_RANGE,
        //! First digitized range value above threshold (LSB).
        STA_PROFILE_RANGE_LO,
        //! First digitized range value above threshold (MSB).
        STA_PROFILE_RANGE_HI,
        //! Number of returned data points (LSB).
        STA_DATA_BYTES_LO,
        //! Number of returned data points (MSB).
        STA_DATA_BYTES_HI,
        //! Data points.
        STA_ECHO_DATA,
        //! Termination byte.
        STA_TERM
      };

      //! Interpret head position
      void
      interpretHeadPosition(uint8_t hbyte, uint8_t lbyte)
      {
        uint8_t hb = (hbyte & 0x3e) >> 1;
        uint8_t lb = (((hbyte & 0x01) << 7) | (lbyte & 0x7f));
        uint16_t p = (hb << 8) | lb;

        m_head_position = Angles::radians(0.3 * (p - 600));

        if ((hbyte & 0x40) >> 6 == 1)
          m_clockwise = true;
        else
          m_clockwise = false;
      }
      //! Interpret profile range.
      void
      interpretProfileRange(uint8_t hbyte, uint8_t lbyte)
      {
        uint8_t hb = (hbyte & 0x7e) >> 1;
        uint8_t lb = (((hbyte & 0x01) << 7) | (lbyte & 0x7f));
        uint16_t r = (hb << 8) | lb;

        if (m_range < 5)
          m_profile_range = (r * 2) / 1000;
        else
          m_profile_range = (r * 10) / 1000;
      }

      //! Interpret number of data bytes.
      void
      interpretDataBytes(uint8_t hbyte, uint8_t lbyte)
      {
        uint8_t hb = (hbyte & 0x7e) >> 1;
        uint8_t lb = (((hbyte & 0x01) << 7) | (lbyte & 0x7f));
        m_data_points = (hb << 8) | lb;
      }

      void
      clear(void)
      {
        m_state = STA_HDR_0;
        m_previous = 0;
        m_data_points = 0;
        m_data_idx = 0;
        m_range = 0;
        m_profile_range = 0.0;
        m_head_position = 0.0;
      }

      //! Current parser state.
      State m_state;
      //! Return data.
      std::vector<char>& m_data;
      //! Number of data points .
      uint16_t m_data_points;
      //! Number of data points seen so far.
      unsigned m_data_idx;
      //! Head position.
      float m_head_position;
      //! Range.
      uint8_t m_range;
      //! First digitized range value above threshold (m).
      float m_profile_range;
      //! Step direction.
      bool m_clockwise;
      //! Previous byte.
      uint8_t m_previous;
    };
  }
}

#endif
