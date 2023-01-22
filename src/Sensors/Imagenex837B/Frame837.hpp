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

#ifndef SENSORS_IMAGENEX_837B_FRAME_837_HPP_INCLUDED_
#define SENSORS_IMAGENEX_837B_FRAME_837_HPP_INCLUDED_

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

    //! Size of IVX body.
    static const unsigned c_ivx_body_size = 16000;
    //! Size of IUX body.
    static const unsigned c_iux_body_size = 8000;
    //! Size of IVX frame.
    static const unsigned c_ivx_frame_size = 272;
    //! Size of IUX body.
    static const unsigned c_iux_frame_size = 80;

    //! Data logger to Imagenex .837 format.
    class Frame837: public Frame
    {
    public:
      //! 837 Header Indices.
      enum HeaderIndices
      {
        HDR_IDX_N_TO_READ = 3,
        HDR_IDX_BYTES_TO_READ_HI = 6,
        HDR_IDX_BYTES_TO_READ_LO = 7,
        HDR_IDX_VIDEO_FRAME = 33,
        HDR_IDX_DISPLAY_MODE = 37,
        HDR_IDX_START_GAIN = 38,
        HDR_IDX_TILT_ANGLE = 39,
        HDR_IDX_PINGS_AVG = 43,
        HDR_IDX_PULSE_LENGTH = 44,
        HDR_IDX_SOUND_SPEED = 46,
        HDR_IDX_LATITUDE = 48,
        HDR_IDX_LONGITUDE = 62,
        HDR_IDX_SPEED = 76,
        HDR_IDX_COURSE = 77,
        HDR_IDX_FREQUENCY = 80,
        HDR_IDX_PITCH = 82,
        HDR_IDX_ROLL = 84,
        HDR_IDX_HEADING = 86,
        HDR_IDX_REP_RATE = 88,
        HDR_IDX_DISPLAY_GAIN = 90,
        HDR_IDX_MILLI = 93,
        HDR_IDX_MODE_I = 100,
        HDR_IDX_MODE_UV = 101,
        HDR_IDX_MODE_X = 102,
        HDR_IDX_HEAD_ID = 103,
        HDR_IDX_SERIAL_STATUS = 104,
        HDR_IDX_PACKET_NUM = 105,
        HDR_IDX_VERSION = 106,
        HDR_IDX_RANGE = 107,
        HDR_IDX_DATA_BYTES_HI = 110,
        HDR_IDX_DATA_BYTES_LO = 111
      };

      //! Constructor.
      Frame837(void)
      {
        m_data.resize(c_ivx_size, 0);
        m_data[0] = '8';
        m_data[1] = '3';
        m_data[2] = '7';
        setHeader();
      }

      //! Destructor
      ~Frame837(void)
      { }

      //! Get data start address.
      //! @return pointer to address.
      uint8_t*
      getMessageData(void)
      {
        return &m_data[c_start_data];
      }

      //! Get footer start address.
      //! @return pointer to address.
      uint8_t*
      getFooterData(void)
      {
        return &m_data[c_hdr_size + c_rhdr_size + getMessageSize()];
      }

      //! Retrieve the size of the frame.
      //! @return frame size.
      size_t
      getSize(void) const
      {
        return c_hdr_size + c_rhdr_size + getMessageSize() + getFooterSize();
      }

      //! Retrieve message size.
      //! @return message size.
      size_t
      getMessageSize(void) const
      {
        return m_ivx_mode ? c_ivx_body_size : c_iux_body_size;
      }

      //! Retrieve footer size.
      //! @return footer size.
      size_t
      getFooterSize(void) const
      {
        return m_ivx_mode ? c_ivx_frame_size : c_iux_frame_size;
      }

      //! Define total bytes in header.
      void
      setTotalBytes(void)
      {
        // Total bytes.
        if (m_ivx_mode)
        {
          m_data[HDR_IDX_TBYTES_HI] = (uint8_t)(c_ivx_size >> 8);
          m_data[HDR_IDX_TBYTES_LO] = (uint8_t)c_ivx_size;
        }
        else
        {
          m_data[HDR_IDX_TBYTES_HI] = (uint8_t)(c_iux_size >> 8);
          m_data[HDR_IDX_TBYTES_LO] = (uint8_t)c_iux_size;
        }
      }

      //! Define number of bytes to read in header.
      void
      setBytesToRead(void)
      {
        // Total bytes.
        if (m_ivx_mode)
        {
          m_data[HDR_IDX_BYTES_TO_READ_HI] = (uint8_t)(c_ivx_bytes >> 8);
          m_data[HDR_IDX_BYTES_TO_READ_LO] = (uint8_t)c_ivx_bytes;
        }
        else
        {
          m_data[HDR_IDX_BYTES_TO_READ_HI] = (uint8_t)(c_iux_bytes >> 8);
          m_data[HDR_IDX_BYTES_TO_READ_LO] = (uint8_t)c_iux_bytes;
        }
      }

      //! Change mode according with data points.
      void
      setExtendedDataPoints(bool mode)
      {
        m_ivx_mode = mode;
        setTotalBytes();
        setBytesToRead();
        setMode();
        setNumberOfBytesToRead();
        setPacketNumber();
        setFooter();
      }

      //! Set start gain.
      //! @param[in] gain start gain.
      void
      setStartGain(uint8_t gain)
      {
        m_data[HDR_IDX_START_GAIN] = gain;
      }

      //! Set pulse length.
      //! @param[in] length pulse length.
      void
      setPulseLength(uint8_t length)
      {
        m_data[HDR_IDX_PULSE_LENGTH] = length;
      }

      //! Set display mode.
      //! @param[in] xdcr display mode.
      void
      setDisplayMode(bool xdcr)
      {
        m_data[HDR_IDX_DISPLAY_MODE] |= 0x80;

        if (!xdcr)
          m_data[HDR_IDX_DISPLAY_MODE] |= 0x40;
        else
          m_data[HDR_IDX_DISPLAY_MODE] &= 0xbf;

        // Profile mode.
        m_data[HDR_IDX_DISPLAY_MODE] |= 0x03;
      }

      //! Set display gain.
      //! @param[in] gain display gain.
      void
      setDisplayGain(uint8_t gain)
      {
        m_data[HDR_IDX_DISPLAY_GAIN] = gain;
      }

      //! Set serial status.
      void
      setSerialStatus(uint8_t status)
      {
        m_data[HDR_IDX_SERIAL_STATUS] = status;
      }

      //! Set Firmware version.
      void
      setFirmwareVersion(uint8_t version)
      {
        m_data[HDR_IDX_VERSION] = version;
      }

      //! Set repetition rate using local Delta class.
      void
      setRepRate(void)
      {
        // Compute time delta.
        double tstep = trimValue(m_delta.getDelta(), 0.0, 2.0);
        Frame::setRepRate((uint16_t)(tstep * 1000));
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
      //! Define frame constant header.
      void
      setHeader(void)
      {
        // Video Frame Length (unavailable).
        for (unsigned i = 0; i < 4; ++i)
          m_data[HDR_IDX_VIDEO_FRAME + i] = 0x00;

        // Number of pings averaged.
        m_data[HDR_IDX_PINGS_AVG] = 0x00;

        // Display gain.
        m_data[HDR_IDX_DISPLAY_GAIN] = c_display_gain;

        setFrequency();
        setSonarReturnHeader();
      }

      //! Define frame constant sonar return header data.
      void
      setSonarReturnHeader(void)
      {
        // IUX or IVX.
        m_data[HDR_IDX_MODE_I] = 'I';
        m_data[HDR_IDX_MODE_X] = 'X';

        // Head ID and default packet number.
        m_data[HDR_IDX_HEAD_ID] = 0x10;

        // Data bytes (1k data bytes).
        m_data[HDR_IDX_DATA_BYTES_HI] = (uint8_t)(c_ping_size >> 8);
        m_data[HDR_IDX_DATA_BYTES_LO] = (uint8_t)c_ping_size;
      }

      //! Set number of bytes to read.
      void
      setNumberOfBytesToRead(void)
      {
        if (m_ivx_mode)
          m_data[HDR_IDX_N_TO_READ] = (uint8_t) 0x0b;
        else
          m_data[HDR_IDX_N_TO_READ] = (uint8_t) 0x0a;
      }

      //! Set packet number
      void
      setPacketNumber(void)
      {
        if (m_ivx_mode)
          m_data[HDR_IDX_PACKET_NUM] = (uint8_t) 0x0f;
        else
          m_data[HDR_IDX_PACKET_NUM] = (uint8_t) 0x07;
      }

      //! Define frame footer.
      void
      setFooter(void)
      {
        uint32_t addr = c_hdr_size + c_rhdr_size + getMessageSize();
        m_data[addr] = (uint8_t) 0xfc;

        unsigned size = getFooterSize();

        for (unsigned i = 0; i < size; ++i)
          m_data[(addr + 1) + i] = (uint8_t) 0x00;

        m_data[addr + FTR_IDX_TYPE] = 0x01;
        m_data[addr + FTR_IDX_AZIMUTH_UP] = 0x01;
      }

      //! Set sonar return header mode.
      void
      setMode(void)
      {
        if (m_ivx_mode)
          m_data[HDR_IDX_MODE_UV] = 'V';
        else
          m_data[HDR_IDX_MODE_UV] = 'U';
      }

      //! IVX mode active.
      bool m_ivx_mode;
      //! Repetition time delta.
      Time::Delta m_delta;
      //! Size of the header.
      static const unsigned c_hdr_size = 100;
      //! Size of the sonar return data header.
      static const unsigned c_rhdr_size = 12;
      //! Start of echo data.
      static const unsigned c_start_data = 112;
      //! Size of IVX frame.
      static const unsigned c_ivx_size = 16384;
      //! Size of IUX frame.
      static const unsigned c_iux_size = 8192;
      //! Number of bytes to read in IVX frame.
      static const unsigned c_ivx_bytes = 16013;
      //! Number of bytes to read in IUX frame.
      static const unsigned c_iux_bytes = 8013;
      //! Size of ping response.
      static const unsigned c_ping_size = 1000;
      //! Default display gain.
      static const uint8_t c_display_gain = 50;
    };
  }
}

#endif
