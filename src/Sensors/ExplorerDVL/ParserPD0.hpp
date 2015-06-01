//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda         *
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

#ifndef SENSORS_EXPLORER_DVL_PARSER_PD0_HPP_INCLUDED_
#define SENSORS_EXPLORER_DVL_PARSER_PD0_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace ExplorerDVL
  {
    using DUNE_NAMESPACES;

    class ParserPD0
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      ParserPD0(void):
        m_state(ST_HEADER_ID),
        m_data_index(0),
        m_timestamp(-1)
      {
      }

      //! Destructor.
      ~ParserPD0(void)
      {
      }

      void
      reset(void)
      {
        m_state = ST_HEADER_ID;
      }

      bool
      parse(uint8_t byte)
      {
        bool rv = false;

        switch (m_state)
        {
          case ST_HEADER_ID:
            if (byte == 0x7f)
            {
              m_timestamp = Clock::getSinceEpoch();
              m_computed_checksum = byte;
              m_data_index = 0;
              m_data[m_data_index++] = byte;
              m_state = ST_SOURCE_ID;
            }
            break;

          case ST_SOURCE_ID:
            if (byte == 0x7f)
            {
              m_computed_checksum += byte;
              m_data[m_data_index++] = byte;
              m_state = ST_BYTE_COUNT_LSB;
            }
            else
            {
              m_state = ST_HEADER_ID;
            }
            break;

          case ST_BYTE_COUNT_LSB:
            m_computed_checksum += byte;
            m_data[m_data_index++] = byte;
            m_data_size = byte;
            m_state = ST_BYTE_COUNT_MSB;
            break;

          case ST_BYTE_COUNT_MSB:
            m_computed_checksum += byte;
            m_data[m_data_index++] = byte;
            m_data_size |= byte << 8;
            if (m_data_size == 0)
            {
              m_state = ST_HEADER_ID;
              break;
            }
            m_state = ST_DATA;
            break;

          case ST_DATA:
            m_computed_checksum += byte;
            m_data[m_data_index++] = byte;
            if (m_data_index == m_data_size)
              m_state = ST_CHECKSUM_LSB;
            break;

          case ST_CHECKSUM_LSB:
            if ((m_computed_checksum & 0xff) == byte)
            {
              m_state = ST_CHECKSUM_MSB;
            }
            else
            {
              m_state = ST_HEADER_ID;
            }
            break;

          case ST_CHECKSUM_MSB:
            if ((m_computed_checksum >> 8) == byte)
            {
              interpret();
              rv = true;
            }
            m_state = ST_HEADER_ID;
            break;
        }

        return rv;
      }

      void
      interpret(void)
      {
        // Number of data types.
        unsigned data_type_count = m_data[5];

        for (unsigned i = 0; i < data_type_count; ++i)
        {
          unsigned offset = m_data[6 + i * 2 + 1] << 8 | m_data[6 + i * 2];
          unsigned id = m_data[offset + 1] << 8 | m_data[offset];

          if (id == 0x0080)
            interpretVariableLeader(offset);
          else if (id == 0x0600)
            interpretBottomTrack(offset);
        }
      }

      void
      interpretVariableLeader(size_t offset)
      {
        uint8_t* data = m_data + offset;
        m_sound_speed = data[15] << 8 | data[14];
      }

      void
      interpretBottomTrack(size_t offset)
      {
        uint8_t* data = m_data + offset;

        for (unsigned i = 0; i < 4; ++i)
        {
          m_bottom_range[i] = data[77 + i] << 16
          | data[16 + i * 2 + 1] << 8
          | data[16 + i * 2];
          m_bottom_velocity[i] = data[24 + i * 2 + 1] << 8 | data[24 + i * 2];
        }
      }

      void
      fillAltitude(IMC::Distance& altitude, unsigned beam_number, double sound_speed)
      {
        altitude.setTimeStamp(m_timestamp);
        altitude.value = (m_bottom_range[beam_number] / 100.0) * (sound_speed / m_sound_speed);

        if (m_bottom_range[beam_number] > 0)
          altitude.validity = IMC::Distance::DV_VALID;
        else
          altitude.validity = IMC::Distance::DV_INVALID;
      }

      void
      fillGroundVelocity(IMC::GroundVelocity& velocity, double sound_speed)
      {
        velocity.setTimeStamp(m_timestamp);
        velocity.validity = 0;

        velocity.x = (m_bottom_velocity[1] / 1000.0) * (sound_speed / m_sound_speed);
        if (m_bottom_velocity[1] != -32768)
          velocity.validity |= IMC::GroundVelocity::VAL_VEL_X;

        velocity.y = (m_bottom_velocity[0] / 1000.0) * (sound_speed / m_sound_speed);
        if (m_bottom_velocity[0] != -32768)
          velocity.validity |= IMC::GroundVelocity::VAL_VEL_Y;

        velocity.z = -(m_bottom_velocity[2] / 1000.0) * (sound_speed / m_sound_speed);
        if (m_bottom_velocity[2] != -32768)
          velocity.validity |= IMC::GroundVelocity::VAL_VEL_Z;
      }

    private:
      enum State
      {
        ST_HEADER_ID,
        ST_SOURCE_ID,
        ST_BYTE_COUNT_LSB,
        ST_BYTE_COUNT_MSB,
        ST_DATA,
        ST_CHECKSUM_LSB,
        ST_CHECKSUM_MSB
      };

      State m_state;
      size_t m_data_index;
      double m_timestamp;
      unsigned m_bottom_range[4];
      int16_t m_bottom_velocity[4];
      uint16_t m_computed_checksum;
      uint16_t m_data_size;
      unsigned m_sound_speed;
      uint8_t m_data[65536];
    };
  }
}

#endif
