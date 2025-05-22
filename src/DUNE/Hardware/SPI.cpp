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

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Exceptions.hpp>
#include <DUNE/Hardware/SPI.hpp>

// POSIX headers.
// #if defined(DUNE_SYS_HAS_SYS_TYPES_H)
// #  include <sys/types.h>
// #endif

#if defined(DUNE_SYS_HAS_SYS_IOCTL_H)
#  include <sys/ioctl.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

// // Linux headers.
// #if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
// #  include <linux/spi/spidev.h>
// #endif

namespace DUNE
{
  namespace Hardware
  {
    SPI::SPI(const std::string& bus_dev, const uint8_t mode, uint8_t bits_per_word, uint32_t speed_hz)
    {
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
      if ((m_fd = open(bus_dev.c_str(), O_RDWR)) == -1)
        throw Error("opening device", System::Error::getLastMessage());
#else
      (void)dev;
      throw NotImplemented("SPI");
#endif
    }

    SPI::~SPI(void)
    {
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
      close(m_fd);
#endif
    }

    int
    SPI::transfer(uint8_t adr, uint8_t cmd, const uint8_t* wdata, uint8_t wlen, uint8_t* rdata, uint8_t rlen, uint8_t* bytes_read)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)


      return 0;
#else
      (void)adr;

      return 0;
#endif
    }

    unsigned
    SPI::read(uint8_t adr, uint8_t* bfr, unsigned bfr_len)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)

      return bfr_len;

#else
      (void)bfr_len;

      return 0;
#endif
    }

    void
    SPI::connect(uint8_t addr)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
      // int a = (int)addr;

      // if (ioctl(m_fd, I2C_SLAVE, a) < 0)
      //   throw Error("setting slave address", System::Error::getLastMessage());
#else
      (void)addr;
#endif
    }

    unsigned
    SPI::read(uint8_t* bfr, unsigned bfr_len)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
      // int rv = ::read(m_fd, bfr, bfr_len);
      // if (rv == -1)
      //   throw Error("read", System::Error::getLastMessage());

      return 0;
#else
      (void)bfr;
      (void)bfr_len;

      return 0;
#endif
    }

    unsigned
    SPI::write(const uint8_t* bfr, unsigned bfr_len)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
      // int rv = ::write(m_fd, bfr, bfr_len);
      // if (rv == -1)
      //   throw Error("read", System::Error::getLastMessage());

      return 0;
#else
      (void)bfr;
      (void)bfr_len;

      return 0;
#endif
    }
  }
}
