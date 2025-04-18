//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_AIM104_MULTI_IO_DRIVER_HPP_INCLUDED_
#define SENSORS_AIM104_MULTI_IO_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Hardware/IOPort.hpp>

namespace Sensors
{
  namespace AIM104MultiIO
  {
    class Driver
    {
    public:
      Driver(uint32_t address, fp32_t input_range, bool mode_dif);

      ~Driver(void);

      bool
      setChannel(uint8_t channel);

      void
      setInputRange(fp64_t input_range);

      bool
      sample(fp64_t& value);

    private:
      //! Direct hardware I/O.
      DUNE::Hardware::IOPort* m_io;
      // Full-Scale input range.
      fp64_t m_input_range;
      //! A/D channels.
      uint8_t m_channels;
      //! Current A/D channel.
      uint8_t m_channel;
      //! Channel select table.
      const uint8_t* m_chan_table;
    };
  }
}

#endif
