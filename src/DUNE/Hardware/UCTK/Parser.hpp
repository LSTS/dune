//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Parser.hpp 12703 2013-01-24 02:54:34Z rasm                       $:*
//***************************************************************************

#ifndef DUNE_HARDWARE_UCTK_PARSER_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM Parser;

      class Parser
      {
      public:
        Parser(void):
          m_state(STA_SYNC)
        { }

        ~Parser(void)
        { }

        bool
        parse(uint8_t byte)
        {
          switch (m_state)
          {
            case STA_SYNC:
              if (byte == c_sync)
              {
                m_msg_id = 0;
                m_frame_csum = byte;
                m_payload_size = 0;
                m_payload_idx = 0;
                m_state = STA_SIZE;
              }
              break;

            case STA_SIZE:
              if (byte <= c_max_payload)
              {
                m_frame_csum ^= byte;
                m_payload_size = byte;
                m_state = STA_ID;
              }
              else
              {
                m_state = STA_SYNC;
              }
              break;

            case STA_ID:
              m_msg_id = byte;
              m_frame_csum ^= byte;
              m_state = (m_payload_size == 0) ? STA_CSUM : STA_PAYLOAD;
              break;

            case STA_PAYLOAD:
              m_payload[m_payload_idx++] = byte;
              m_frame_csum ^= byte;
              if (m_payload_idx == m_payload_size)
                m_state = STA_CSUM;
              break;

            case STA_CSUM:
              m_state = STA_SYNC;
              if ((m_frame_csum | 0x80) == byte)
                return true;
              break;
          }

          return false;
        }

        uint8_t
        getId(void) const
        {
          return m_msg_id;
        }

        uint8_t
        getPayloadSize(void) const
        {
          return m_payload_size;
        }

        const uint8_t*
        getPayload(void) const
        {
          return m_payload;
        }

      private:
        //! States of the state machine.
        enum States
        {
          //! Command start.
          STA_SYNC,
          //! Command size.
          STA_SIZE,
          //! Command type.
          STA_ID,
          //! Command arguments.
          STA_PAYLOAD,
          //! Command arguments.
          STA_CSUM
        };

        //! Current parser state.
        States m_state;
        //! Current payload identifier.
        uint8_t m_msg_id;
        //! Checksum of the current frame.
        uint8_t m_frame_csum;
        //! Payload size of current message.
        uint8_t m_payload_size;
        //! Current payload.
        uint8_t m_payload[c_max_payload];
        //! Current payload index.
        uint8_t m_payload_idx;
      };
    }
  }
}

#endif
