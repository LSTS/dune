//***************************************************************************
// Copyright 2007-2016 OceanScan - Marine Systems & Technology, Lda         *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SENSORS_DEEPVISION_OSM2_PARSER_HPP_INCLUDED_
#define SENSORS_DEEPVISION_OSM2_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <fstream>
#include <string>

// Local headers.
#include "Frame.hpp"

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace DeepVisionOSM2
  {
    using DUNE_NAMESPACES;

    //! Parser class to DeepVision's OEM Sonar Module OSM2.
    //!
    //! This class parses the data packets arriving from the sonar
    //! module and save the data into a file.
    class Parser
    {
    public:
      //! Data register identifier.
      static const uint8_t c_data_id = 0xfe;
      //! Data register sub-identifier.
      static const uint8_t c_data_subid = 0x05;
      //! Command register identifier.
      static const uint8_t c_cmd_id = 0xa5;
      //! Dual channel sidescan sonar indicator.
      static const uint8_t c_cmd_type = 0x03;
      //! OEM version identifier.
      static const uint8_t c_cmd_oem = 0x81;
      //! Left channel mask.
      static const uint8_t c_chn_left = 0x01;
      //! Right channel mask.
      static const uint8_t c_chn_right = 0x02;
      //! Some header bytes are included in size return.
      static const unsigned c_extra_bytes = 4;

      enum State
      {
        ST_INI,
        ST_SONAR_CMD2,
        ST_SONAR_SIZE_H,
        ST_SONAR_SIZE_L,
        ST_SONAR_TYPE,
        ST_SONAR_SEQ,
        ST_SONAR_SIDES,
        ST_SONAR_TIME_H,
        ST_SONAR_TIME_L,
        ST_SONAR_DATA,
        ST_SONAR_CSUM,
        ST_CMD_TYPE,
        ST_CMD_VERSION,
        ST_CMD_CSUM
      };

      //! Constructor.
      //! @param[in] task parent task.
      Parser(Tasks::Task* task):
        m_task(task),
        m_state(ST_INI),
        m_size(0),
        m_csum(0),
        m_imc(false),
        m_has_hdr(false)
      {
        m_frame = new Frame();
        m_ping.type = DUNE::IMC::SonarData::ST_SIDESCAN;
        m_ping.bits_per_point = 8;
        m_ping.scale_factor = 1.0f;
      }

      //! Destructor.
      ~Parser(void)
      {
        Memory::clear(m_frame);
      }

      //! Parse one byte of data.
      //! @param[in] byte data byte.
      //! @return true if a message was parsed, false otherwise.
      bool
      parse(uint8_t byte)
      {
        switch (m_state)
        {
          case (ST_INI):
            if (byte == c_data_id)
            {
              m_csum = byte;
              m_state = ST_SONAR_CMD2;
            }

            if (byte == c_cmd_id)
            {
              m_csum = byte;
              m_state = ST_CMD_TYPE;
            }

            break;
          case (ST_SONAR_CMD2):
            if (byte == c_data_subid)
            {
              m_csum += byte;
              m_state = ST_SONAR_SIZE_H;
            }
            else
            {
              m_state = ST_INI;
            }
            break;
          case (ST_SONAR_SIZE_H):
            m_csum += byte;
            m_state = ST_SONAR_SIZE_L;
            m_size |= ((uint16_t)byte << 8);
            break;
          case (ST_SONAR_SIZE_L):
            m_csum += byte;
            m_state = ST_SONAR_TYPE;
            m_size |= byte;
            m_size -= c_extra_bytes;

            if (m_imc && m_size != m_ping.data.size())
              m_ping.data.resize(m_size);

            break;
          case (ST_SONAR_TYPE):
            if (byte == 0x11)
            {
              m_csum += byte;
              m_state = ST_SONAR_SEQ;
            }
            else
            {
              m_state = ST_INI;
            }
            break;
          case (ST_SONAR_SEQ):
            m_csum += byte;
            m_state = ST_SONAR_SIDES;
            break;
          case (ST_SONAR_SIDES):
            m_csum += byte;
            m_state = ST_SONAR_TIME_H;

            // setup header.
            if (!m_has_hdr)
            {
              bool left = byte & c_chn_left;
              bool right = byte & c_chn_right;
              m_frame->setup(m_resolution, m_rate, m_size, left, right);
            }

            break;
          case (ST_SONAR_TIME_H):
            m_csum += byte;
            m_state = ST_SONAR_TIME_L;
            break;
          case (ST_SONAR_TIME_L):
            m_csum += byte;
            m_state = ST_SONAR_DATA;
            break;
          case (ST_SONAR_DATA):
            m_csum += byte;
            m_frame->add(byte);

            if (m_frame->getSize() >= m_size)
              m_state = ST_SONAR_CSUM;
            break;
          case (ST_SONAR_CSUM):
            if (m_csum == byte)
            {
              if (!m_imc && !m_log_file.is_open())
                m_log_file.open(m_log_filename.c_str(), std::ofstream::app | std::ios::binary);

              // header is missing from file.
              if (!m_imc && !m_has_hdr)
              {
                m_has_hdr = true;
                m_log_file.write((const char*)m_frame->getHeader(), m_frame->getHeaderSize());
              }

              // write position and data.
              if (m_imc)
              {
                if (m_frame->getPortSize() > 0)
                  std::reverse_copy(m_frame->getPortData(), m_frame->getPortData() + m_frame->getPortSize(),
                                    &m_ping.data[0]);

                if (m_frame->getStarboardSize() > 0)
                  std::memcpy(&m_ping.data[m_frame->getPortSize()], m_frame->getStarboardData(),
                              m_frame->getStarboardSize());

                m_task->dispatch(m_ping);
              }
              else
              {
                m_log_file.write((const char*)m_frame->getPosition(), m_frame->getPositionSize());
                m_log_file.write((const char*)m_frame->getPortData(), m_frame->getPortSize());
                m_log_file.write((const char*)m_frame->getStarboardData(), m_frame->getStarboardSize());
              }
            }

            m_frame->clear();
            m_state = ST_INI;
            return true;
          case (ST_CMD_TYPE):
            if (byte == c_cmd_type)
            {
              m_csum += byte;
              m_state = ST_CMD_VERSION;
              break;
            }

            m_state = ST_INI;
            break;
          case (ST_CMD_VERSION):
            if (byte == c_cmd_oem)
            {
              m_csum += byte;
              m_state = ST_CMD_CSUM;
              break;
            }

            m_state = ST_INI;
            break;
          case (ST_CMD_CSUM):
            m_state = ST_INI;

            if (byte == m_csum)
            {
              m_csum = 0;
              return true;
            }
            break;
        }

        return false;
      }

      //! Open new log file.
      //! @param[in] path file system path.
      void
      openLog(const FileSystem::Path& path)
      {
        if (m_imc)
          return;

        if (path == m_log_path)
          return;

        closeLog();

        m_log_path = path;

        Time::BrokenDown bdt(Clock::getSinceEpoch());

        m_log_filename = path / String::str("Data_%04u%02u%02u%02u%02u%02u.dvs",
                                            bdt.year, bdt.month, bdt.day,
                                            bdt.hour, bdt.minutes, bdt.seconds);
      }

      //! Close log file.
      void
      closeLog(void)
      {
        if (m_imc)
          return;

        if (m_log_file.is_open())
        {
          m_log_file.close();

          if (m_log_filename.size() == 0)
            m_log_filename.remove();
        }

        // reset path and frame.
        m_has_hdr = false;
        m_state = ST_INI;
        m_frame->clear();
        m_log_path.clear();
        m_log_filename.clear();
      }

      //! Received estimated state.
      //! @param[in] msg estimated state message.
      void
      onState(const IMC::EstimatedState* msg)
      {
        m_frame->onState(msg);
      }

      //! Setup size and sides, and output format.
      //! @param[in] res sample resolution.
      //! @param[in] rate frequency of ping returns.
      //! @param[in] range sonar range.
      //! @param[in] frequency pulse frequency.
      //! @param[in] imc true to save data in IMC, false otherwise.
      void
      setup(float res, float rate, unsigned range, float frequency, bool imc)
      {
        m_resolution = res;
        m_rate = rate;
        m_ping.min_range = range;
        m_ping.max_range = range;
        m_ping.frequency = frequency;
        m_imc = imc;
        changeLog();
      }

    private:
      // Change log file while in the same directory.
      void
      changeLog(void)
      {
        if (m_imc)
          return;

        if (!m_log_file.is_open())
          return;

        FileSystem::Path dir = m_log_path;
        closeLog();
        openLog(dir);
      }

      //! Parent task.
      Tasks::Task* m_task;
      //! Pointer to frame object.
      Frame* m_frame;
      //! Parser machine state.
      State m_state;
      //! Sample resolution.
      float m_resolution;
      //! Line rate.
      float m_rate;
      //! Data size.
      uint16_t m_size;
      //! Command checksum;
      uint8_t m_csum;
      //! Use sonar data.
      bool m_imc;
      //! Sonar data file.
      IMC::SonarData m_ping;
      //! Log file.
      std::ofstream m_log_file;
      //! Header inserted.
      bool m_has_hdr;
      //! Log path.
      FileSystem::Path m_log_path;
      //! Log filename
      FileSystem::Path m_log_filename;
    };
  }
}

#endif
