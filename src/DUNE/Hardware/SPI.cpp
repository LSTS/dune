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
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

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
    SPI::SPI(const std::string& bus_dev, const uint8_t mode, const uint8_t bits_per_word, const uint32_t speed_hz):
      m_mode(mode),
      m_bits_per_word(bits_per_word),
      m_speed_hz(speed_hz)
    {
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
      if ((m_fd = open(bus_dev.c_str(), O_RDWR)) < 0)
        throw Error("opening device", System::Error::getLastMessage());

      if (ioctl(m_fd, SPI_IOC_WR_MODE, &m_mode) < 0)
        throw Error("setting SPIMode (WR)", System::Error::getLastMessage());
      if (ioctl(m_fd, SPI_IOC_RD_MODE, &m_mode) < 0)
        throw Error("setting SPIMode (RD)", System::Error::getLastMessage());
      if (ioctl(m_fd, SPI_IOC_WR_BITS_PER_WORD, &m_bits_per_word) < 0)
        throw Error("setting SPI bitsPerWord (WR)", System::Error::getLastMessage());
      if (ioctl(m_fd, SPI_IOC_RD_BITS_PER_WORD, &m_bits_per_word) < 0)
        throw Error("setting SPI bitsPerWord (RD)", System::Error::getLastMessage());
      if (ioctl(m_fd, SPI_IOC_WR_MAX_SPEED_HZ, &m_speed_hz) < 0)
        throw Error("setting SPI speed (WR)", System::Error::getLastMessage());
      if (ioctl(m_fd, SPI_IOC_RD_MAX_SPEED_HZ, &m_speed_hz) < 0)
        throw Error("setting SPI speed (RD)", System::Error::getLastMessage());

#else
      (void)bus_dev;
      (void)mode;
      (void)bits_per_word;
      (void)speed_hz;
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
    SPI::transfer(uint8_t *tx_data, uint8_t *rx_data, unsigned length, bool leave_cs_low)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_SPI_SPIDEV_H)
      struct spi_ioc_transfer spi[1] = {0};	//transfer structure
      int retVal = -1;

      spi[0].tx_buf = reinterpret_cast<__u64>(tx_data);		//transmit from "data"
      spi[0].rx_buf = reinterpret_cast<__u64>(rx_data);		//receive into "data"
      spi[0].len = length;
      // spi.delay_usecs = 0;
      // spi.speed_hz = m_speed_hz;
      // spi.bits_per_word = m_bits_per_word;
      // spi.cs_change = leave_cs_low;						//0=Set CS high after a transfer, 1=leave CS set low

      retVal = ioctl(m_fd, SPI_IOC_MESSAGE(1), spi);
      if(retVal < 1)
        throw Error("Problem transmitting SPI data..ioctl", System::Error::getLastMessage());

      return retVal;

#else
      (void)tx_data;
      (void)rx_data;
      (void)length;
      (void)leave_cs_low;
      throw NotImplemented("SPI::transfer");

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
