//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio                                                    *
//***************************************************************************

#ifndef DUNE_HARDWARE_SPI_HPP_INCLUDED_
#define DUNE_HARDWARE_SPI_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/System/Error.hpp>

// Linux headers.
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
#  include <linux/spi/spidev.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SPI;

    class SPI
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(std::string op, std::string msg):
          std::runtime_error("SPI bus error (" + op + "): " + msg)
        { }
      };

      //! SPI constructor.
      //! @param bus_dev device name (e.g. "/dev/spidev0.0").
      //! @param mode SPI mode:
      //!   SPI_MODE_0 (0,0) 	CPOL = 0, CPHA = 0, Clock idle low, data is clocked in on rising edge, output data (change) on falling edge
      //!   SPI_MODE_1 (0,1) 	CPOL = 0, CPHA = 1, Clock idle low, data is clocked in on falling edge, output data (change) on rising edge
      //!   SPI_MODE_2 (1,0) 	CPOL = 1, CPHA = 0, Clock idle high, data is clocked in on falling edge, output data (change) on rising edge
      //!   SPI_MODE_3 (1,1) 	CPOL = 1, CPHA = 1, Clock idle high, data is clocked in on rising, edge output data (change) on falling edge
      //! @param bits_per_word number of bits per word (default 8).
      //! @param speed_hz SPI bus speed (default 1MHz).
      //! @throw Error if the device cannot be opened.
      SPI(const std::string& bus_dev, const uint8_t mode = SPI_MODE_0, uint8_t bits_per_word = 8, uint32_t speed_hz = 1000000);

      //! SPI destructor.
      ~SPI(void);

      //! Transfer data to the SPI bus.
      //! @param tx_data data to be sent.
      //! @param rx_data data received.
      //! @param length number of bytes to be transferred.
      //! @param leave_cs_low if true, CS will be kept low after the transfer. CS will high when done otherwise.
      //! @return number of bytes transferred.
      int
      transfer(uint8_t *tx_data, uint8_t *rx_data, unsigned length, bool leave_cs_low = false);

      unsigned
      read(uint8_t adr, uint8_t* bfr, unsigned bfr_len);

      //! Connect to slave address.
      //! @param addr slave address.
      void
      connect(uint8_t addr);

      unsigned
      read(uint8_t* bfr, unsigned bfr_len);

      unsigned
      write(const uint8_t* bfr, unsigned bfr_len);

    private:
      //! Maximum size of an i2c frame.
      static const uint8_t c_max_data_len = 64;
      int m_fd;
      uint8_t m_mode;
      uint8_t m_bits_per_word;
      uint32_t m_speed_hz;
    };
  }
}

#endif
