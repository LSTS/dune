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

#ifndef SENSORS_EDGETECH_2205_PACKET_HPP_INCLUDED_
#define SENSORS_EDGETECH_2205_PACKET_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Constants.hpp"

namespace Sensors
{
  namespace Edgetech2205
  {
    using DUNE_NAMESPACES;

    class Packet
    {
    public:
      enum HeaderIndices
      {
        HDR_IDX_MARKER = 0,
        HDR_IDX_VERSION = 2,
        HDR_IDX_SESSION = 3,
        HDR_IDX_MSG_TYPE = 4,
        HDR_IDX_CMD_TYPE = 6,
        HDR_IDX_SUBSYS = 7,
        HDR_IDX_CHANNEL = 8,
        HDR_IDX_SEQUENCE = 9,
        HDR_IDX_MSG_SIZE = 12
      };

      Packet(void):
        m_time_stamp(0)
      {
        m_data.resize(c_max_size, 0);
        m_data[HDR_IDX_MARKER] = c_marker0;
        m_data[HDR_IDX_MARKER + 1] = c_marker1;
        m_data[HDR_IDX_VERSION] = c_version;
      }

      //! Set protocol version.
      //! @param[in] version protocol version.
      void
      setProtocolVersion(uint8_t version)
      {
        m_version = version;
      }

      //! Retrieve protocol version.
      //! @return protocol version.
      uint8_t
      getProtocolVersion(void) const
      {
        return m_version;
      }

      //! Set message type.
      //! @param[in] type message type.
      void
      setMessageType(uint16_t type)
      {
        ByteCopy::toLE(type, getData() + HDR_IDX_MSG_TYPE);
      }

      //! Retrieve message type.
      //! @return message type.
      uint16_t
      getMessageType(void) const
      {
        uint16_t type = 0;
        ByteCopy::fromLE(type, getData() + HDR_IDX_MSG_TYPE);
        return type;
      }

      //! Set message size.
      //! @param[in] size message size.
      void
      setMessageSize(uint32_t size)
      {
        ByteCopy::toLE(size, getData() + HDR_IDX_MSG_SIZE);
      }

      //! Retrieve message size.
      //! @return message size.
      uint32_t
      getMessageSize(void) const
      {
        uint32_t size = 0;
        ByteCopy::fromLE(size, getData() + HDR_IDX_MSG_SIZE);
        return size;
      }

      //! Retrieve message data.
      //! @return message data.
      uint8_t*
      getMessageData(void)
      {
        return getData() + c_header_size;
      }

      //! Retrieve message data.
      //! @return message data.
      const uint8_t*
      getMessageData(void) const
      {
        return getData() + c_header_size;
      }

      //! Set command type.
      //! @param[in] type command type.
      void
      setCommandType(uint8_t type)
      {
        m_data[HDR_IDX_CMD_TYPE] = type;
      }

      //! Retrieve command type.
      //! @return command type.
      uint8_t
      getCommandType(void) const
      {
        return m_data[HDR_IDX_CMD_TYPE];
      }

      //! Set channel.
      //! @param[in] channel channel.
      void
      setChannel(uint8_t channel)
      {
        m_data[HDR_IDX_CHANNEL] = channel;
      }

      //! Retrieve channel.
      //! @return channel.
      uint8_t
      getChannel(void) const
      {
        return m_data[HDR_IDX_CHANNEL];
      }

      //! Set subsystem number.
      //! @param[in] subsys subsystem number.
      void
      setSubsystemNumber(uint8_t subsys)
      {
        m_data[HDR_IDX_SUBSYS] = subsys;
      }

      //! Retrieve subsystem number.
      //! @return subsystem number.
      uint8_t
      getSubsystemNumber(void) const
      {
        return m_data[HDR_IDX_SUBSYS];
      }

      void
      setValue(uint32_t value)
      {
        ByteCopy::toLE(value, getData() + c_header_size);
        setMessageSize(4);
      }

      uint32_t
      getValue(void) const
      {
        uint32_t value = 0;
        ByteCopy::fromLE(value, getData() + c_header_size);
        return value;
      }

      void
      setDataByte(unsigned index, uint8_t byte)
      {
        if ((c_header_size + index) >= c_max_size)
          throw std::runtime_error("buffer overrun");

        m_data[c_header_size + index] = byte;
      }

      void
      setHeaderByte(unsigned index, uint8_t byte)
      {
        m_data[index] = byte;
      }

      //! Retrieve the size of the packet.
      //! @return packet size.
      unsigned
      getSize(void) const
      {
        return c_header_size + getMessageSize();
      }

      uint8_t*
      getData(void)
      {
        return &m_data[0];
      }

      const uint8_t*
      getData(void) const
      {
        return &m_data[0];
      }

      template <typename T>
      void
      set(const T& value, unsigned index)
      {
        ByteCopy::toLE(value, getMessageData() + index);
      }

      template <typename T>
      void
      get(T& value, unsigned index) const
      {
        ByteCopy::fromLE(value, getMessageData() + index);
      }

      unsigned
      getMaximumMessageSize(void) const
      {
        return c_max_size - c_header_size;
      }

      void
      dump(void) const
      {
        std::fprintf(stderr, "PACKET:");
        for (unsigned i = 0; i < getSize(); ++i)
        {
          std::fprintf(stderr, " %02X", m_data[i]);
        }
        std::fprintf(stderr, "\n");
      }

      //! Get packet's time of reception.
      //! @return milliseconds since Unix Epoch.
      uint64_t
      getTimeStamp(void) const
      {
        return m_time_stamp;
      }

      //! Set packet's time of reception.
      //! @param[in] time_stamp milliseconds since Unix Epoch.
      void
      setTimeStamp(uint64_t time_stamp)
      {
        m_time_stamp = time_stamp;
      }

    private:
      //! Size of the header.
      static const unsigned c_header_size = 16;
      //! Maximum packet size.
      static const unsigned c_max_size = 256 * 1024;
      //! Message data.
      std::vector<uint8_t> m_data;
      //! Protocol version.
      uint8_t m_version;
      //! Reception timestamp.
      uint64_t m_time_stamp;
    };
  }
}

#endif
