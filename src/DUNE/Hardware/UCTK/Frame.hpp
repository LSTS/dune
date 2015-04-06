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

#ifndef DUNE_HARDWARE_UCTK_FRAME_HPP_INCLUDED_
#define DUNE_HARDWARE_UCTK_FRAME_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Utils/ByteCopy.hpp>
#include <DUNE/Algorithms/XORChecksum.hpp>
#include <DUNE/Hardware/UCTK/Constants.hpp>

namespace DUNE
{
  namespace Hardware
  {
    namespace UCTK
    {
      class Frame
      {
      public:
        Frame(void)
        {
          m_data[0] = c_sync;
          m_data[1] = 0;
          m_data[2] = 0;
        }

        void
        setId(uint8_t id)
        {
          m_data[2] = id;
        }

        uint8_t
        getId(void) const
        {
          return m_data[2];
        }

        const uint8_t*
        getData(void) const
        {
          return m_data;
        }

        uint8_t
        getSize(void) const
        {
          return c_header_size + c_footer_size + getPayloadSize();
        }

        void
        setPayloadSize(uint8_t size)
        {
          m_data[1] = size;
        }

        uint8_t
        getPayloadSize(void) const
        {
          return m_data[1];
        }

        uint8_t*
        getPayload(void)
        {
          return m_data + c_header_size;
        }

        const uint8_t*
        getPayload(void) const
        {
          return m_data + c_header_size;
        }

        void
        setPayload(uint8_t byte, unsigned index)
        {
          m_data[c_header_size + index] = byte;
        }

        template <typename T>
        void
        set(const T& value, unsigned index)
        {
          Utils::ByteCopy::toLE(value, m_data + c_header_size + index);
        }

        template <typename T>
        void
        get(T& value, unsigned index) const
        {
          Utils::ByteCopy::fromLE(value, m_data + c_header_size + index);
        }

        void
        computeCRC(void)
        {
          uint8_t size = c_header_size + getPayloadSize();
          m_data[size] = Algorithms::XORChecksum::compute(m_data, size) | c_csum_mask;
        }

      private:
        uint8_t m_data[c_header_size + c_max_payload + c_footer_size];
      };
    }
  }
}

#endif
