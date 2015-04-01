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
        HDR_IDX_PINGS_AVERAGED = 125,
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
        m_data.resize(getSize(), 0);
        m_data[0] = '8';
        m_data[1] = '3';
        m_data[2] = 'P';
        m_data[3] = 10;

        setHeader();
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
      unsigned
      getSize(void) const
      {
        return c_hdr_size + getMessageSize();
      }

      //! Retrieve message size.
      //! @return message size.
      uint32_t
      getMessageSize(void) const
      {
        // @todo verify.
        return 4 * c_beams;
      }

      //! Define total bytes in header.
      void
      setTotalBytes(void)
      {
        // Total bytes.
        m_data[HDR_IDX_TBYTES_HI] = (uint8_t)(getSize() >> 8);
        m_data[HDR_IDX_TBYTES_LO] = (uint8_t)getSize();
      }

      void
      setExtendedDataPoints(bool mode)
      {
        (void)mode;
        setTotalBytes();
      }

    private:
      //! Define frame constant header.
      void
      setHeader(void)
      {
        // Number of pings averaged.
        //m_data[HDR_IDX_PINGS_AVG] = 0x00;
        setFrequency();
      }

      //! Size of the header.
      static const unsigned c_hdr_size = 256;
      //! Number of beams.
      static const unsigned c_beams = 480;
    };
  }
}

#endif
