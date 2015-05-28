//***************************************************************************
// Copyright 2007-2015 OceanScan - Marine Systems & Technology, Lda.        *
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

#ifndef SENSORS_MICROSTRAIN_MIP_PARSER_HPP_INCLUDED_
#define SENSORS_MICROSTRAIN_MIP_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>

// Local headers.
#include "Constants.hpp"

namespace Sensors
{
  namespace MicrostrainMIP
  {
    using DUNE_NAMESPACES;

    //! Commands to device.
    enum Commands
    {
      //! Acceleration, Angular Rates, Magnetometer Vector and the Orientation Matrix.
      CMD_DATA = 0xCC,
      //! Write Word to EEPROM
      CMD_WRITE_EEPROM = 0xE4,
      //! Read Word from EEPROM
      CMD_READ_EEPROM = 0xE5,
      //! Firmware version.
      CMD_FWARE_VERSION = 0xE9,
      //! Device reset.
      CMD_DEVICE_RESET = 0xFE
    };

    //! Response frame sizes.
    enum Sizes
    {
      //! Size of Acceleration, Angular Rates,
      //! Magnetometer Vector and Orientation Matrix frame.
      CMD_DATA_SIZE = 79,
      //! Size of Write Word to EEPROM frame.
      CMD_WRITE_EEPROM_SIZE = 5,
      //! Size of Read Word from EEPROM.
      CMD_READ_EEPROM_SIZE = 5,
      //! Size of Firmware version frame.
      CMD_FWARE_VERSION_SIZE = 7,
      //! Size of Device reset frame.
      CMD_DEVICE_RESET_SIZE = 0
    };

    class Parser
    {
    public:
      Parser(void):
        m_state(STA_SYNC0),
        m_invalid_checksum_count(0),
        m_checksum_msb(0),
        m_checksum_lsb(0),
        m_payload_size(0),
        m_payload_index(0),
        m_timestamp(0)
      { }

      bool
      parse(uint8_t byte)
      {
        switch (m_state)
        {
          case STA_SYNC0:
            //fprintf(stdout, "SYN0: %02X\n", byte);
            if (byte == c_sync0)
            {
              m_timestamp = Clock::getSinceEpoch();
              m_checksum_msb = byte;
              m_checksum_lsb = byte;
              m_payload_size = 0;
              m_payload_index = 0;
              m_state = STA_SYNC1;
            }
            break;

          case STA_SYNC1:
            //fprintf(stdout, "SYN1: %02X\n", byte);
            m_checksum_msb += byte;
            m_checksum_lsb += m_checksum_msb;
            if (byte == c_sync1)
              m_state = STA_DESC;
            else
              m_state = STA_SYNC1;
            break;

          case STA_DESC:
            //fprintf(stdout, "DESC: %02X\n", byte);
            m_checksum_msb += byte;
            m_checksum_lsb += m_checksum_msb;
            m_desc = byte;
            m_state = STA_PLEN;
            break;

          case STA_PLEN:
            //fprintf(stdout, "PLEN: %02X\n", byte);
            m_checksum_msb += byte;
            m_checksum_lsb += m_checksum_msb;
            m_payload_size = byte;
            m_state = STA_PLOAD;
            break;

          case STA_PLOAD:
            //fprintf(stdout, "PLOAD: %02X\n", byte);
            m_checksum_msb += byte;
            m_checksum_lsb += m_checksum_msb;
            m_payload[m_payload_index++] = byte;
            if (m_payload_index == m_payload_size)
              m_state = STA_CHECKSUM_MSB;
            break;

          case STA_CHECKSUM_MSB:
            //fprintf(stdout, "CMSB: %02X\n", byte);
            if (byte == m_checksum_msb)
            {
              m_state = STA_CHECKSUM_LSB;
            }
            else
            {
              m_state = STA_SYNC0;
              fprintf(stdout, "Invalid checksum MSB: %02X != %02X\n", byte, m_checksum_msb);
              ++m_invalid_checksum_count;
            }
            break;

          case STA_CHECKSUM_LSB:
            //fprintf(stdout, "CLSB: %02X\n", byte);
            m_state = STA_SYNC0;
            if (byte == m_checksum_lsb)
              return true;
            else
            {
              fprintf(stdout, "Invalid checksum LSB: %02X != %02X\n", byte, m_checksum_lsb);
              ++m_invalid_checksum_count;
            }
            break;
        }

        return false;
      }

      //! Get the number of invalid checksums detected thus far.
      //! @return number of invalid checksums.
      size_t
      getInvalidChecksumCount(void) const
      {
        return m_invalid_checksum_count;
      }

      //! Clear invalid checksum count.
      void
      clearInvalidChecksumCount(void)
      {
        m_invalid_checksum_count = 0;
      }

      uint8_t
      getDescriptorSet(void) const
      {
        return m_desc;
      }

      uint8_t
      getFieldDescriptor(void) const
      {
        return m_payload[1];
      }

      size_t
      getPayloadSize(void) const
      {
        return m_payload_size;
      }

      const uint8_t*
      getPayload(void) const
      {
        return m_payload;
      }

      double
      getTimeStamp(void) const
      {
        return m_timestamp;
      }

    private:
      //! Parser states.
      enum State
      {
        STA_SYNC0,
        STA_SYNC1,
        STA_DESC,
        STA_PLEN,
        STA_PLOAD,
        STA_CHECKSUM_MSB,
        STA_CHECKSUM_LSB
      };

      //! Synchronization byte #0.
      static const uint8_t c_sync0 = 0x75;
      //! Synchronization byte #1.
      static const uint8_t c_sync1 = 0x65;
      //! Current parser state.
      State m_state;
      //! Count of invalid checksums.
      size_t m_invalid_checksum_count;
      //! Computed checksum.
      uint8_t m_checksum_msb;
      //! Computed checksum.
      uint8_t m_checksum_lsb;
      //! Current descriptor set byte.
      uint8_t m_desc;
      //! Map of command sizes.
      int m_sizes[256];
      //! Payload.
      uint8_t m_payload[256];
      //! Payload size.
      size_t m_payload_size;
      //! Payload write index.
      size_t m_payload_index;
      //! Packet timestamp.
      double m_timestamp;
    };
  }
}

#endif
