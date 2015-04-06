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

#ifndef SENSORS_KLEIN3500_PARSER_HPP_INCLUDED_
#define SENSORS_KLEIN3500_PARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Packet.hpp"
#include "Constants.hpp"

namespace Sensors
{
  namespace Klein3500
  {
    using DUNE_NAMESPACES;

    class Parser
    {
    public:
      enum State
      {
        ST_CMD,
        ST_SIZE,
        ST_DATA
      };

      Parser(void):
        m_state(ST_CMD),
        m_index(0)
      { }

      ~Parser(void)
      { }

      //! Parse one byte of data.
      //! @param[in] byte data byte.
      //! @param[in] pkt destination packet.
      //! @return true if a message was parsed, falsed otherwise.
      bool
      parse(uint8_t byte, Packet* pkt)
      {
        switch (m_state)
        {
          case ST_CMD:
            putByte(pkt, byte, m_index++);
            if (m_index == 4)
            {
              uint32_t command = 0;
              ByteCopy::fromLE(command, pkt->getData());
              pkt->setCommand(command);
              m_state = ST_SIZE;
            }
            break;

          case ST_SIZE:
            putByte(pkt, byte, m_index++);
            if (m_index == 8)
            {
              uint32_t size = 0;
              ByteCopy::fromLE(size, pkt->getData() + 4);
              pkt->setSize(size);

              if (size == 0)
              {
                m_index = 0,
                m_state = ST_CMD;
                return true;
              }

              m_state = ST_DATA;
            }
            break;

          case ST_DATA:
            putByte(pkt, byte, m_index++);
            if (m_index == pkt->getSize() + 8)
            {
              m_index = 0;
              m_state = ST_CMD;
              return true;
            }
            break;
        }

        return false;
      }

      State
      getState(void) const
      {
        return m_state;
      }

      Packet*
      getPacket(void)
      {
        return &m_pkt;
      }

    private:
      State m_state;
      size_t m_index;
      Packet m_pkt;

      inline void
      putByte(Packet* pkt, uint8_t byte, uint32_t idx)
      {
#if defined(DUNE_CPU_LITTLE_ENDIAN)
        pkt->setByte((idx & 0xfffffffc) - (idx % 4) + 3, byte);
#else
        pkt->setByte(idx, byte);
#endif
      }
    };
  }
}

#endif
