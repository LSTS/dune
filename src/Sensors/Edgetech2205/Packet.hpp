//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Packet.hpp 12940 2013-02-15 20:03:45Z rasm                       $:*
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

      Packet(void)
      {
        m_data.resize(c_max_size, 0);
        m_data[HDR_IDX_MARKER] = c_marker0;
        m_data[HDR_IDX_MARKER + 1] = c_marker1;
        m_data[HDR_IDX_VERSION] = c_version;
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
      //! @param[in] command type.
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
      //! @param[in] channel.
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
        {
          std::cerr << "too much: " << c_header_size + index << std::endl;
        }

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
      get(T& value, unsigned index)
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

    private:
      //! Size of the header.
      static const unsigned c_header_size = 16;
      //! Maximum packet size.
      static const unsigned c_max_size = 256 * 1024;
      //! Message data.
      std::vector<uint8_t> m_data;
    };
  }
}

#endif
