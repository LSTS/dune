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
// The original implementation (shipped with the Linux kernel since         *
// version 2.6.10) is due to Stelian Pop <stelian@popies.net>.              *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>
#include <cstring>

// DUNE headers.
#include <DUNE/Math/General.hpp>
#include <DUNE/Utils/RawFifo.hpp>

namespace DUNE
{
  namespace Utils
  {
    RawFifo::RawFifo(uint32_t s):
      m_size(s)
    {
      if (s & (s - 1))
        m_size = Math::computeNextPowerOfTwo(s);

      m_data = new uint8_t[m_size];

      m_in = m_out = 0;
    }

    RawFifo::RawFifo(uint8_t* data, uint32_t s):
      m_data(data),
      m_size(s),
      m_in(0),
      m_out(0)
    {
      //  if (size & (size - 1))
      // FIXME: handle error
    }

    uint32_t
    RawFifo::put(const uint8_t* buffer, uint32_t len)
    {
      uint32_t l = 0;

      len = std::min(len, m_size - m_in + m_out);

      // Put the data into "m_data", starting from "m_in" to the end.
      l = std::min(len, m_size - (m_in & (m_size - 1)));
      std::memcpy(m_data + (m_in & (m_size - 1)), buffer, l);

      // Put the rest (if any) at the beginning of "m_data".
      std::memcpy(m_data, buffer + l, len - l);

      m_in += len;

      return len;
    }

    uint32_t
    RawFifo::getHead(uint8_t* buffer, uint32_t len)
    {
      uint32_t l = 0;

      len = std::min(len, m_in - m_out);

      // Get the data from "m_data", starting from "m_out" until the end.
      l = std::min(len, m_size - (m_out & (m_size - 1)));
      std::memcpy(buffer, m_data + (m_out & (m_size - 1)), l);

      // Get the rest (if any) from the beginning of "m_data"
      std::memcpy(buffer + l, m_data, len - l);

      return len;
    }

    uint32_t
    RawFifo::discard(uint32_t len)
    {
      len = std::min(len, m_in - m_out);
      m_out += len;

      return len;
    }
  }
}
