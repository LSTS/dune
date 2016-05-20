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
      enum State
      {
        ST_CMD1,
        ST_CMD2,
        ST_SIZE_H,
        ST_SIZE_L,
        ST_TYPE,
        ST_SEQ,
        ST_SIDES,
        ST_TIME_H,
        ST_TIME_L,
        ST_DATA,
        ST_CSUM
      };

      //! Constructor.
      Parser(void):
        m_state(ST_CMD1),
        m_size(0),
        m_has_hdr(false)
      {
        m_frame = new Frame();
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
          case (ST_CMD1):
            if (byte == 0xfe)
              m_state = ST_CMD2;
            break;
          case (ST_CMD2):
            if (byte == 0x05)
              m_state = ST_SIZE_H;
            else
              m_state = ST_CMD1;
            break;
          case (ST_SIZE_H):
            m_state = ST_SIZE_L;
            m_size |= ((uint16_t)byte << 8);
            break;
          case (ST_SIZE_L):
            m_state = ST_TYPE;
            m_size |= byte;
            break;
          case (ST_TYPE):
            if (byte == 0x11)
              m_state = ST_SEQ;
            else
              m_state = ST_CMD1;
            break;
          case (ST_SEQ):
            m_state = ST_SIDES;
            break;
          case (ST_SIDES):
            m_state = ST_TIME_H;

            // setup header.
            if (!m_has_hdr)
            {
              bool left = byte & 0x01;
              bool right = byte & 0x02;
              m_frame->setup(m_resolution, m_rate, m_size, left, right);
            }

            break;
          case (ST_TIME_H):
            m_state = ST_TIME_L;
            break;
          case (ST_TIME_L):
            m_state = ST_DATA;

            // header is missing.
            if (!m_has_hdr)
            {
              m_has_hdr = true;
              m_log_file.write((const char*)m_frame->getHeader(),
                               m_frame->getHeaderSize());
            }

            m_log_file.write((const char*)m_frame->getPosition(),
                             m_frame->getPositionSize());
            break;
          case (ST_DATA):
            m_frame->add(byte);

            if (m_frame->getSize() >= m_size)
            {
              m_log_file.write((const char*)m_frame->getPortData(), m_frame->getPortSize());
              m_log_file.write((const char*)m_frame->getStarboardData(), m_frame->getStarboardSize());
              m_frame->clear();
              m_state = ST_CSUM;
            }
            break;
          case (ST_CSUM):
            m_state = ST_CMD1;
            return true;
        }

        return false;
      }

      //! Open new log file.
      //! @param[in] path file system path.
      void
      openLog(const FileSystem::Path& path)
      {
        if (path == m_log_path)
          return;

        closeLog();

        m_log_path = path;

        Time::BrokenDown bdt(Clock::getSinceEpoch());

        FileSystem::Path log = path / String::str("Data_%04u%02u%02u%02u%02u%02u.dvs",
                                                  bdt.year, bdt.month, bdt.day,
                                                  bdt.hour, bdt.minutes, bdt.seconds);

        m_log_file.open(m_log_path.c_str(), std::ofstream::app | std::ios::binary);
      }

      //! Close log file.
      void
      closeLog(void)
      {
        if (m_log_file.is_open())
        {
          m_log_file.close();

          if (m_log_path.size() == 0)
            m_log_path.remove();
        }

        m_has_hdr = false;
        m_log_path.clear();
      }

      //! Received estimated state.
      //! @param[in] msg estimated state message.
      void
      onState(const IMC::EstimatedState* msg)
      {
        m_frame->onState(msg);
      }

      //! Setup size and sides.
      //! @param[in] res sample resolution.
      //! @param[in] rate frequency of ping returns.
      void
      setup(float res, float rate)
      {
        m_resolution = res;
        m_rate = rate;
      }

    private:
      // Change log file while in the same directory.
      void
      changeLog(void)
      {
        if (!m_log_file.is_open())
          return;

        FileSystem::Path dir = m_log_path;
        closeLog();
        openLog(dir);
      }

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
      //! Log file.
      std::ofstream m_log_file;
      //! Header inserted.
      bool m_has_hdr;
      //! Log filename
      FileSystem::Path m_log_path;
    };
  }
}

#endif
