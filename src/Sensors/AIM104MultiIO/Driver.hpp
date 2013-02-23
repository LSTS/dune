//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_SENSORS_AIM104_MULTI_IO_HPP_INCLUDED_
#define DUNE_SENSORS_AIM104_MULTI_IO_HPP_INCLUDED_

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
