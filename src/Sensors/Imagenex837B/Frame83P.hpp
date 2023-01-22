//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SENSORS_IMAGENEX_837B_FRAME_83P_HPP_INCLUDED_
#define SENSORS_IMAGENEX_837B_FRAME_83P_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <ctime>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Frame.hpp"

namespace Sensors
{
  namespace Imagenex837B
  {
    using DUNE_NAMESPACES;

    //! Data logger to Imagenex .83P format.
    class Frame83P: public Frame
    {
    public:
      //! 83P Header Indices.
      enum HeaderIndices
      {
        HDR_IDX_LATITUDE = 33,
        HDR_IDX_LONGITUDE = 47,
        HDR_IDX_SPEED = 61,
        HDR_IDX_COURSE = 62,
        HDR_IDX_PITCH = 64,
        HDR_IDX_ROLL = 66,
        HDR_IDX_HEADING = 68,
        HDR_IDX_BEAMS = 70,
        HDR_IDX_SAMPLES_PER_BEAM = 72,
        HDR_IDX_SECTOR_SIZE = 74,
        HDR_IDX_START_ANGLE = 76,
        HDR_IDX_ANGLE_INCR = 78,
        HDR_IDX_RANGE = 79,
        HDR_IDX_FREQUENCY = 81,
        HDR_IDX_SOUND_SPEED = 83,
        HDR_IDX_RANGE_RESOLUTION = 85,
        HDR_IDX_TILT_ANGLE = 89,
        HDR_IDX_REP_RATE = 91,
        HDR_IDX_PING_NUMBER = 93,
        HDR_IDX_X_OFFSET = 100,
        HDR_IDX_Y_OFFSET = 104,
        HDR_IDX_Z_OFFSET = 108,
        HDR_IDX_MILLI = 112,
        HDR_IDX_INTENSITY = 117,
        HDR_IDX_PING_LATENCY = 118,
        HDR_IDX_DATA_LATENCY = 120,
        HDR_IDX_SAMPLE_RATE = 122,
        HDR_IDX_FLAGS = 123,
        HDR_IDX_PINGS_AVG = 125,
        HDR_IDX_CENTER_PING_OFFSET = 126,
        HDR_IDX_HEAVE = 128,
        HDR_IDX_ALTITUDE = 133,
        HDR_IDX_EXTERNAL_FLAGS = 137,
        HDR_IDX_EXTERNAL_PITCH = 138,
        HDR_IDX_EXTERNAL_ROLL = 142,
        HDR_IDX_EXTERNAL_HEADING = 146,
        HDR_IDX_TRANSMIT_SCAN_FLAG = 150,
        HDR_IDX_TRANSMIT_SCAN_ANGLE = 151
      };

      //! 83P Footer Indices.
      enum FooterIndices
      {
        FTR_IDX_TYPE = 13,
        FTR_IDX_PITCH = 14,
        FTR_IDX_ROLL = 16,
        FTR_IDX_HEADING = 18,
        FTR_IDX_AZIMUTH_UP = 24
      };

      //! Constructor.
      Frame83P(void)
      {
        m_size = 4 * c_beams;
        m_data.resize(getMaxSize(), 0);
      }

      //! Destructor
      ~Frame83P(void)
      { }

      //! Get data start address.
      //! @return pointer to address.
      uint8_t*
      getMessageData(void)
      {
        return &m_data[c_hdr_size];
      }

      //! Retrieve the size of the frame.
      //! @return frame size.
      size_t
      getSize(void) const
      {
        return c_hdr_size + getMessageSize();
      }

      //! Retrieve maximum size of the frame.
      //! @return maximum frame size.
      size_t
      getMaxSize(void) const
      {
        return c_hdr_size + 4 * c_beams;
      }

      //! Retrieve message size.
      //! @return message size.
      size_t
      getMessageSize(void) const
      {
        return m_size;
      }

      //! Retrieve message header size.
      //! @return message header size.
      size_t
      getHeaderSize(void) const
      {
        return c_hdr_size;
      }

      //! Get current range.
      //! @return current multibeam range.
      uint16_t
      getRange(void)
      {
        uint16_t r;
        r = ((uint16_t)m_data[HDR_IDX_RANGE] << 8) + m_data[HDR_IDX_RANGE + 1];
        return r;
      }

      //! Verify sonar return.
      //! @param[in] rv return size.
      void
      verifyReturn(size_t size)
      {
        if (m_size != size - c_hdr_size)
          m_size = size - c_hdr_size;
      }

      //! Get range index.
      unsigned
      getIndexRange(void)
      {
        return HDR_IDX_RANGE;
      }

      //! Get tilt angle index.
      unsigned
      getIndexTiltAngle(void)
      {
        return HDR_IDX_TILT_ANGLE;
      }

      //! Get latitude index.
      unsigned
      getIndexLatitude(void)
      {
        return HDR_IDX_LATITUDE;
      }

      //! Get longitude index.
      unsigned
      getIndexLongitude(void)
      {
        return HDR_IDX_LONGITUDE;
      }

      //! Get speed index.
      unsigned
      getIndexSpeed(void)
      {
        return HDR_IDX_SPEED;
      }

      //! Get speed index.
      unsigned
      getIndexSoundSpeed(void)
      {
        return HDR_IDX_SOUND_SPEED;
      }

      //! Get course index.
      unsigned
      getIndexCourse(void)
      {
        return HDR_IDX_COURSE;
      }

      //! Get milliseconds index.
      unsigned
      getIndexMilli(void)
      {
        return HDR_IDX_MILLI;
      }

      //! Get roll index.
      unsigned
      getIndexRoll(void)
      {
        return HDR_IDX_ROLL;
      }

      //! Get pitch index.
      unsigned
      getIndexPitch(void)
      {
        return HDR_IDX_PITCH;
      }

      //! Get heading index.
      unsigned
      getIndexHeading(void)
      {
        return HDR_IDX_HEADING;
      }

      //! Get repetition rate index.
      unsigned
      getIndexRepRate(void)
      {
        return HDR_IDX_REP_RATE;
      }

      //! Get frequency index.
      unsigned
      getIndexFrequency(void)
      {
        return HDR_IDX_FREQUENCY;
      }

    private:
      size_t m_size;
      //! Size of the header.
      static const size_t c_hdr_size = 256;
      //! Number of beams.
      static const size_t c_beams = 480;
    };
  }
}

#endif
