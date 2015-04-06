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

#ifndef SENSORS_KLEIN3500_PACKET_HPP_INCLUDED_
#define SENSORS_KLEIN3500_PACKET_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Constants.hpp"

namespace Sensors
{
  namespace Klein3500
  {
    using DUNE_NAMESPACES;

    class Packet
    {
    public:
      Packet(size_t size = c_max_packet_size):
        m_time_stamp(0)
      {
        m_data.resize(size, 0);
      }

      //! Set command type.
      //! @param[in] type command type.
      void
      setCommand(uint32_t command)
      {
        m_command = command;
      }

      //! Retrieve command type.
      //! @return command type.
      uint32_t
      getCommand(void) const
      {
        return m_command;
      }

      //! Set packet size.
      //! @param[in] size message size.
      void
      setSize(uint32_t size)
      {
        ByteCopy::toLE(size, getData() + c_offs_size);
      }

      //! Retrieve message size.
      //! @return message size.
      uint32_t
      getSize(void) const
      {
        uint32_t size = 0;
        ByteCopy::fromLE(size, getData() + c_offs_size);
        return size;
      }

      inline void
      setByte(size_t index, uint8_t byte)
      {
        m_data[index] = byte;
      }

      template <typename T>
      void
      set(size_t index, const T& value)
      {
        ByteCopy::toBE(value, getData() + index + c_data_offs);
      }

      template <typename T>
      void
      get(unsigned index, T& value) const
      {
        ByteCopy::fromLE(value, getData() + index + c_data_offs);
      }

      template <typename T>
      void
      getNoHandle(unsigned index, T& value) const
      {
        ByteCopy::fromLE(value, getData() + index + c_handle_offs);
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
      //! Command offset.
      static const size_t c_command_offs = 0;
      //! Size offset.
      static const size_t c_size_offs = 4;
      //! Handle offset.
      static const size_t c_handle_offs = 8;
      //! Data offset.
      static const size_t c_data_offs = 12;
      //! Message data.
      std::vector<uint8_t> m_data;
      //! Command type.
      uint32_t m_command;
      //! Reception timestamp.
      uint64_t m_time_stamp;
    };
  }
}

#endif
