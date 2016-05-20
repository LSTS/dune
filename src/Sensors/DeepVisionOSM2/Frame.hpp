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

#ifndef SENSORS_DEEPVISION_OSM2_FRAME_HPP_INCLUDED_
#define SENSORS_DEEPVISION_OSM2_FRAME_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace DeepVisionOSM2
  {
    using DUNE_NAMESPACES;

    //! Frame class to DeepVision's OEM Sonar Module OSM2.
    //!
    //! This class arranges the header, position and sonar
    //! data information to be written into DVS files.
    //!
    //! Current file format supported: DVS File Format 1.0
    class Frame
    {
    public:
      //! Constructor.
      Frame(void):
        m_token(false)
      {
        m_header.resize(c_hdr_size, 0);
        m_position.resize(c_pos_size, 0);
      }

      //! Destructor.
      ~Frame(void)
      { }

      //! Get frame header start address.
      //! @return pointer to address.
      const uint8_t*
      getHeader(void)
      {
        return &m_header[0];
      }

      //! Retrieve the size of the header.
      //! @return frame size.
      size_t
      getHeaderSize(void) const
      {
        return c_hdr_size;
      }

      //! Get frame position start address.
      //! @return pointer to address.
      const uint8_t*
      getPosition(void)
      {
        return &m_position[0];
      }

      //! Retrieve the size of the header.
      //! @return frame size.
      size_t
      getPositionSize(void) const
      {
        return c_pos_size;
      }

      //! Get port frame start address.
      //! @return pointer to address.
      const uint8_t*
      getPortData(void)
      {
        return &m_left_data[0];
      }

      //! Get starboard frame start address.
      //! @return pointer to address.
      const uint8_t*
      getStarboardData(void)
      {
        return &m_right_data[0];
      }

      //! Retrieve the size of the port frame.
      //! @return frame size.
      size_t
      getPortSize(void) const
      {
        return m_left_data.size();
      }

      //! Retrieve the size of the starboard frame.
      //! @return frame size.
      size_t
      getStarboardSize(void) const
      {
        return m_right_data.size();
      }

      //! Retrieve the size of the full sonar frame.
      //! @return frame size.
      size_t
      getSize(void) const
      {
        return m_left_data.size() + m_right_data.size();
      }

      //! Add byte to data frame.
      //! @param[in] byte data byte.
      void
      add(uint8_t byte)
      {
        if (m_left && !m_right)
        {
          m_left_data.push_back(byte);
        }
        else if (!m_left && m_right)
        {
          m_right_data.push_back(byte);
        }
        else if (m_left && m_right)
        {
          if (m_token)
            m_right_data.push_back(byte);
          else
            m_left_data.push_back(byte);

          m_token = !m_token;
        }
      }

      //! Clear data buffer.
      void
      clear(void)
      {
        m_left_data.clear();
        m_right_data.clear();
        m_token = false;
      }

      //! Received estimated state.
      //! @param[in msg estimated state message.
      void
      onState(const IMC::EstimatedState* msg)
      {
        double lat, lon;
        Coordinates::toWGS84(*msg, lat, lon);

        // Latitude, longitude, speed and heading.
        std::memcpy(&m_position[0], &lat, sizeof(double));
        std::memcpy(&m_position[8], &lon, sizeof(double));
        std::memcpy(&m_position[16], &msg->u, sizeof(float));
        std::memcpy(&m_position[20], &msg->psi, sizeof(float));
      }

      //! Setup size and sides.
      //! @param[in] res sample resolution.
      //! @param[in] rate frequency of ping returns.
      //! @param[in] size size of data return.
      //! @param[in] left true if left/port side active.
      //! @param[in] right true if right/starboard side active.
      void
      setup(float res, float rate, uint32_t size, bool left, bool right)
      {
        unsigned sides = 0;

        if (left)
          sides++;

        if (right)
          sides++;

        if (!sides)
          return;

        unsigned samples = size / sides;
        std::memcpy(&m_header[0], &c_version, sizeof(uint32_t));
        std::memcpy(&m_header[4], &res, sizeof(float));
        std::memcpy(&m_header[8], &rate, sizeof(float));
        std::memcpy(&m_header[12], &samples, sizeof(int));
        std::memcpy(&m_header[16], &left, sizeof(bool));
        std::memcpy(&m_header[17], &right, sizeof(bool));
      }

    private:
      //! File header.
      std::vector<uint8_t> m_header;
      //! Position data.
      std::vector<uint8_t> m_position;
      //! Port transducer enabled.
      bool m_left;
      //! Starboard transducer enabled.
      bool m_right;
      //! Transducer token.
      bool m_token;
      //! Port transducer sonar data.
      std::vector<uint8_t> m_left_data;
      //! Starboard transducer sonar data.
      std::vector<uint8_t> m_right_data;
      //! Maximum frame size.
      static const unsigned c_max_size = 1024;
      //! Frame header size.
      static const unsigned c_hdr_size = 18;
      //! Frame position size.
      static const unsigned c_pos_size = (sizeof(double) + sizeof(float)) * 2;
      //! File format version.
      static const uint32_t c_version = 0x00000001;
    };
  }
}

#endif
