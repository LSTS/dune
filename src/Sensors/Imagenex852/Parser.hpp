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

#ifndef SENSORS_IMAGENEX_852_PARSER_HPP_INCLUDED_
#define SENSORS_IMAGENEX_852_PARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace Imagenex852
  {
    using DUNE_NAMESPACES;

    //! Parser for Imagenex 852 High Frequency Echo Sounder Return Data.
    class Parser
    {
    public:
      //! Constructor.
      Parser(std::vector<char>& data_point_buffer):
        m_data_points(data_point_buffer)
      {
        clear();
      }

      //! Parse one byte.
      //! @param byte byte.
      //! @return true if complete return data is available, false otherwise.
      bool
      parse(uint8_t byte)
      {
        bool rv = false;
        unsigned tmp = 0;

        switch (m_state)
        {
          case STA_HDR0:
            clear();
            if (byte == 0x49)
              m_state = STA_HDR1;
            break;

          case STA_HDR1:
            m_state = STA_HDR2;
            if (byte == 0x4d)
              m_data_points_max = 252;
            else if (byte == 0x47)
              m_data_points_max = 500;
            else if (byte == 0x50)
              m_data_points_max = 0;
            else
              clear();
            m_data_points.resize(m_data_points_max);
            break;

          case STA_HDR2:
            if (byte == 0x58)
              m_state = STA_HEAD_ID;
            else
              m_state = STA_HDR0;
            break;

          case STA_HEAD_ID:
            if (byte == 0x11)
              m_state = STA_SERIAL_STATUS;
            else
              m_state = STA_HDR0;
            break;

          case STA_SERIAL_STATUS:
            m_state = STA_RESERVED0;
            break;

          case STA_RESERVED0:
            m_state = STA_RESERVED1;
            break;

          case STA_RESERVED1:
            m_state = STA_RANGE;
            break;

          case STA_RANGE:
            m_range = byte;
            m_state = STA_PROFILE_RANGE0;
            break;

          case STA_PROFILE_RANGE0:
            m_previous = byte;
            m_state = STA_PROFILE_RANGE1;
            break;

          case STA_PROFILE_RANGE1:
            tmp = (((byte & 0x7E) >> 1) << 8) | (((byte & 0x01) << 7) | (m_previous & 0x7F));
            m_profile_range = tmp / 100.0;
            m_state = STA_DATA_BYTES0;
            break;

          case STA_DATA_BYTES0:
            m_previous = byte;
            m_state = STA_DATA_BYTES1;
            break;

          case STA_DATA_BYTES1:
            tmp = (((byte & 0x7E) >> 1) << 8) | (((byte & 0x01) << 7) | (m_previous & 0x7F));
            if (tmp == m_data_points_max)
            {
              if (tmp == 0)
                m_state = STA_TERM;
              else
                m_state = STA_ECHO_DATA;
            }
            else
            {
              m_state = STA_HDR0;
            }
            break;

          case STA_ECHO_DATA:
            m_data_points[m_data_points_idx++] = byte;
            if (m_data_points_idx == m_data_points_max)
              m_state = STA_TERM;
            break;

          case STA_TERM:
            if (byte == 0xfc)
              rv = true;
            m_state = STA_HDR0;
            break;
        }

        return rv;
      }

      //! Retrieve the range of the last shot ([5, 50] meter).
      //! @return range of the last shot in meter.
      unsigned
      getRange(void) const
      {
        return m_range;
      }

      //! Retrieve the profile range of the last shot.
      //! @return range of the last shot in meter.
      double
      getProfileRange(void) const
      {
        return m_profile_range;
      }

      //! Retrieve number of data points of the last shot.
      //! @return number of data points of the last shot.
      unsigned
      getDataPointsCount(void) const
      {
        return m_data_points_max;
      }

    private:
      enum State
      {
        //! First byte of the return data header ('I').
        STA_HDR0,
        //! Second byte of the return data header ('M', 'G' or 'P').
        STA_HDR1,
        //! Third byte of the return data header ('X').
        STA_HDR2,
        //! Header ID (always 0x11).
        STA_HEAD_ID,
        //! Serial Status.
        STA_SERIAL_STATUS,
        //! Reserved byte.
        STA_RESERVED0,
        //! Reserved byte.
        STA_RESERVED1,
        //! Echo sounder range (5 to 50 meter).
        STA_RANGE,
        //! First digitized range value above threshold (LSB).
        STA_PROFILE_RANGE0,
        //! First digitized range value above threshold (MSB).
        STA_PROFILE_RANGE1,
        //! Number of returned data points (LSB).
        STA_DATA_BYTES0,
        //! Number of returned data points (MSB).
        STA_DATA_BYTES1,
        //! Data points.
        STA_ECHO_DATA,
        //! Termination byte.
        STA_TERM
      };

      //! Current parser state.
      State m_state;
      //! Return data.
      std::vector<char>& m_data_points;
      //! Number of data points .
      unsigned m_data_points_max;
      //! Number of data points seen so far.
      unsigned m_data_points_idx;
      //! First digitized range value above threshold (m).
      double m_profile_range;
      //! Echo sounder range (5 to 50 meters).
      unsigned m_range;
      //! Previous byte.
      uint8_t m_previous;

      void
      clear(void)
      {
        m_state = STA_HDR0;
        m_data_points_max = 0;
        m_data_points_idx = 0;
        m_range = 0;
        m_profile_range = 0;
        m_previous = 0;
      }
    };
  }
}

#endif
