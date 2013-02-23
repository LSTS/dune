//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Parser.hpp 12924 2013-02-14 18:43:47Z rasm                       $:*
//***************************************************************************

#ifndef SENSORS_EDGETECH_2205_PARSER_HPP_INCLUDED_
#define SENSORS_EDGETECH_2205_PARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Packet.hpp"
#include "Constants.hpp"

namespace Sensors
{
  namespace Edgetech2205
  {
    using DUNE_NAMESPACES;

    //! EdgeTech's JSF format parser.
    class Parser
    {
    public:
      //! Constructor.
      Parser(void):
        m_state(ST_MARKER0)
      { }

      Packet*
      getPacket(void)
      {
        return &m_pkt;
      }

      //! Parse one byte of data.
      //! @param[in] byte data byte.
      //! @return true if a message was parsed, falsed otherwise.
      bool
      parse(uint8_t byte)
      {
        switch (m_state)
        {
          case ST_MARKER0:
            if (byte == c_marker0)
            {
              m_state = ST_MARKER1;
              m_index = 0;
            }
            break;

          case ST_MARKER1:
            m_state = (byte == c_marker1) ? ST_VERSION : ST_MARKER0;
            break;

          case ST_VERSION:
            m_state = (byte <= c_version) ? ST_SESSION : ST_MARKER0;
            break;

          case ST_SESSION:
            m_state = ST_MSG_TYPE;
            break;

          case ST_MSG_TYPE:
            m_pkt.setHeaderByte(Packet::HDR_IDX_MSG_TYPE + m_index, byte);
            if (++m_index == 2)
            {
              m_index = 0;
              m_state = ST_CMD_TYPE;
            }
            break;

          case ST_CMD_TYPE:
            m_pkt.setCommandType(byte);
            m_state = ST_SSYS_NR;
            break;

          case ST_SSYS_NR:
            m_pkt.setSubsystemNumber(byte);
            m_state = ST_CHANNEL;
            break;

          case ST_CHANNEL:
            m_pkt.setChannel(byte);
            m_state = ST_SEQUENCE;
            break;

          case ST_SEQUENCE:
            m_state = ST_RESERVED;
            break;

          case ST_RESERVED:
            if (++m_index == 2)
            {
              m_index = 0;
              m_state = ST_MSG_SIZE;
            }
            break;

          case ST_MSG_SIZE:
            m_pkt.setHeaderByte(Packet::HDR_IDX_MSG_SIZE + m_index, byte);
            if (++m_index == 4)
            {
              m_index = 0;
              m_msg_size = m_pkt.getMessageSize();
              if (m_msg_size == 0)
              {
                m_state = ST_MARKER0;
                return true;
              }

              m_state = (m_msg_size <= m_pkt.getMaximumMessageSize()) ? ST_MSG_DATA : ST_MARKER0;
            }
            break;

          case ST_MSG_DATA:
            m_pkt.setDataByte(m_index, byte);
            if (++m_index == m_msg_size)
            {
              m_state = ST_MARKER0;
              return true;
            }
            break;
        }

        return false;
      }

    private:
      //! Parser states.
      enum State
      {
        //! First byte of start of header marker.
        ST_MARKER0,
        //! Second byte of the start of header marker.
        ST_MARKER1,
        //! Version number of protocol.
        ST_VERSION,
        //! Session identifier (unused).
        ST_SESSION,
        //! Message type.
        ST_MSG_TYPE,
        //! Command type.
        ST_CMD_TYPE,
        //! Subsystem number.
        ST_SSYS_NR,
        //! Channel of multi-channel subsystem.
        ST_CHANNEL,
        //! Sequence number (unused).
        ST_SEQUENCE,
        //! Reserved bytes.
        ST_RESERVED,
        //! Message size.
        ST_MSG_SIZE,
        //! Message.
        ST_MSG_DATA
      };

      //! Current parser state.
      State m_state;
      //! Multi-byte state index.
      uint32_t m_index;
      //! Packet.
      Packet m_pkt;
      //! Message size.
      uint32_t m_msg_size;
    };
  }
}

#endif
