//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
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

      bool
      parse(uint8_t byte)
      {
        return parse(byte, &m_pkt);
      }

      //! Parse one byte of data.
      //! @param[in] byte data byte.
      //! @param[in] pkt destination packet.
      //! @return true if a message was parsed, falsed otherwise.
      bool
      parse(uint8_t byte, Packet* pkt)
      {
        switch (m_state)
        {
          case ST_MARKER0:
            if (byte == c_marker0)
            {
              m_state = ST_MARKER1;
              m_index = 0;
              pkt->setTimeStamp(Clock::getSinceEpochMsec());
            }
            break;

          case ST_MARKER1:
            m_state = (byte == c_marker1) ? ST_VERSION : ST_MARKER0;
            break;

          case ST_VERSION:
            pkt->setProtocolVersion(byte);
            m_state = ST_SESSION;
            break;

          case ST_SESSION:
            m_state = ST_MSG_TYPE;
            break;

          case ST_MSG_TYPE:
            pkt->setHeaderByte(Packet::HDR_IDX_MSG_TYPE + m_index, byte);
            if (++m_index == 2)
            {
              m_index = 0;
              m_state = ST_CMD_TYPE;
            }
            break;

          case ST_CMD_TYPE:
            pkt->setCommandType(byte);
            m_state = ST_SSYS_NR;
            break;

          case ST_SSYS_NR:
            pkt->setSubsystemNumber(byte);
            m_state = ST_CHANNEL;
            break;

          case ST_CHANNEL:
            pkt->setChannel(byte);
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
            pkt->setHeaderByte(Packet::HDR_IDX_MSG_SIZE + m_index, byte);
            if (++m_index == 4)
            {
              m_index = 0;
              m_msg_size = pkt->getMessageSize();
              if (m_msg_size == 0)
              {
                m_state = ST_MARKER0;
                return true;
              }

              m_state = (m_msg_size <= pkt->getMaximumMessageSize()) ? ST_MSG_DATA : ST_MARKER0;
            }
            break;

          case ST_MSG_DATA:
            pkt->setDataByte(m_index, byte);
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
