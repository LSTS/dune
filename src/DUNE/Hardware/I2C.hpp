//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: I2C.hpp 12667 2013-01-22 02:44:42Z rasm                          $:*
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
