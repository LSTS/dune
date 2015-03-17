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

    //! Reserved bytes.
    static const unsigned c_reserved_837[] = {19, 28, 41, 42, 79, 91, 92, 97, 98, 99, 108, 109};
    //! Count of reserved bytes.
    static const unsigned c_reserved_837_size = sizeof(c_reserved_837) / sizeof(c_reserved_837[0]);
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
        HDR_IDX_TBYTES_HI = 4,
        HDR_IDX_TBYTES_LO = 5,
        HDR_IDX_BYTES_TO_READ_HI = 6,
        HDR_IDX_BYTES_TO_READ_LO = 7,
        HDR_IDX_DATE = 8,
        HDR_IDX_TIME = 20,
        HDR_IDX_TIME_HSEC = 29,
        HDR_IDX_VIDEO_FRAME = 33,
        HDR_IDX_DISPLAY_MODE = 37,
        HDR_IDX_START_GAIN = 38,
        HDR_IDX_PROFILE = 39,
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

      //! 837 Footer Indices.
      enum FooterIndices
      {
        FTR_IDX_TYPE = 13,
        FTR_IDX_PITCH = 14,
        FTR_IDX_ROLL = 16,
        FTR_IDX_HEADING = 18,
        FTR_IDX_AZIMUTH_UP = 24
      };

      //! Constructor.
      Frame837(void)
      {
        m_data.resize(c_ivx_size, 0);
        m_data[0] = '8';
        m_data[1] = '3';
        m_data[2] = '7';

        for (unsigned i = 0; i < c_reserved_837_size; ++i)
          m_data[c_reserved_837[i]] = 0x00;

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
      unsigned
      getSize(void) const
      {
        return c_hdr_size + c_rhdr_size + getMessageSize() + getFooterSize();
      }

      //! Retrieve message size.
      //! @return message size.
      uint32_t
      getMessageSize(void) const
      {
        return m_ivx_mode ? c_ivx_body_size : c_iux_body_size;
      }

      //! Retrieve footer size.
      //! @return footer size.
      uint32_t
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

        // Operating Frequency 260 kHz.
        m_data[HDR_IDX_FREQUENCY] = (uint8_t)(c_frequency >> 8);
        m_data[HDR_IDX_FREQUENCY + 1] = (uint8_t)c_frequency;

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
      //! Operating frequency.
      static const unsigned c_frequency = 260;
      //! Default display gain.
      static const uint8_t c_display_gain = 50;
    };
  }
}

#endif
