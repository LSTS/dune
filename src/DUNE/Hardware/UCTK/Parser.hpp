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

#ifndef DUNE_HARDWARE_UCTK_PARSER_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_PARSER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>
#include <DUNE/Hardware/UCTK/Frame.hpp>

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
          m_state(STA_SYNC),
          m_frame_csum(0),
          m_payload_idx(0)
        { }

        ~Parser(void)
        { }

        //! Check if internal finite state machine is waiting for the
        //! synchronization byte.
        //! @return true if state machine is waiting for the
        //! synchronization byte, false otherwise.
        bool
        stateIsSync(void)
        {
          return m_state == STA_SYNC;
        }

        bool
        parse(uint8_t byte, Frame& frame)
        {
          switch (m_state)
          {
            case STA_SYNC:
              if (byte == c_sync)
              {
                m_payload_idx = 0;
                m_frame_csum = byte;
                m_state = STA_SIZE;
              }
              break;

            case STA_SIZE:
              if (byte > c_max_payload)
              {
                m_state = STA_ID;
              }
              else
              {
                m_frame_csum ^= byte;
                frame.setPayloadSize(byte);
                m_state = STA_ID;
              }
              break;

            case STA_ID:
              m_frame_csum ^= byte;
              frame.setId(byte);
              m_state = (frame.getPayloadSize() == 0) ? STA_CSUM : STA_PAYLOAD;
              break;

            case STA_PAYLOAD:
              m_frame_csum ^= byte;
              frame.setPayload(byte, m_payload_idx++);
              if (m_payload_idx == frame.getPayloadSize())
                m_state = STA_CSUM;
              break;

            case STA_CSUM:
              m_state = STA_SYNC;
              if ((m_frame_csum | c_csum_mask) == byte)
                return true;
              break;
          }

          return false;
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
        //! Checksum of the current frame.
        uint8_t m_frame_csum;
        //! Current payload index.
        uint8_t m_payload_idx;
      };
    }
  }
}

#endif
