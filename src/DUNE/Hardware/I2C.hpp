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

#ifndef DUNE_HARDWARE_I2C_HPP_INCLUDED_
#define DUNE_HARDWARE_I2C_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/System/Error.hpp>

namespace DUNE
{
  namespace Hardware
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM I2C;

    class I2C
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(std::string op, std::string msg):
          std::runtime_error("I2C bus error (" + op + "): " + msg)
        { }
      };

      //! I2C constructor.
      I2C(const std::string& bus_dev);

      //! I2C destructor.
      ~I2C(void);

      //! Initialize an I2C transfer.
      //! @param adr slave address.
      //! @param cmd command to send.
      //! @param wdata data to write.
      //! @param wlen number of bytes to write (or in 0x80 for a block write).
      //! @param rdata place to store data read.
      //! @param rlen number of bytes to read  (or in 0x80 for a block read).
      //! @param bytes_read place to store number of bytes read.
      int
      transfer(uint8_t adr, uint8_t cmd, const uint8_t* wdata, uint8_t wlen, uint8_t* rdata, uint8_t rlen, uint8_t* bytes_read);

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
    };
  }
}

#endif
