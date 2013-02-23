//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Exceptions.hpp>
#include <DUNE/Hardware/I2C.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_STAT_H)
#  include <sys/stat.h>
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

// Linux
#if defined(DUNE_SYS_HAS_LINUX_I2C_H)
#  include <linux/i2c.h>
#endif

#if defined(DUNE_SYS_HAS_LINUX_I2C_DEV_H)
#  include <linux/i2c-dev.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    I2C::I2C(const std::string& dev)
    {
#if defined(DUNE_SYS_HAS_LINUX_I2C_H)
      if ((m_fd = open(dev.c_str(), O_RDWR)) == -1)
        throw Error("opening device", System::Error::getLastMessage());
#else
      (void)dev;
      throw NotImplemented("I2C");
#endif
    }

    I2C::~I2C(void)
    {
#if defined(DUNE_SYS_HAS_LINUX_I2C_H)
      close(m_fd);
#endif
    }

    int
    I2C::transfer(uint8_t adr, uint8_t cmd, const uint8_t* wdata, uint8_t wlen, uint8_t* rdata, uint8_t rlen, uint8_t* bytes_read)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_I2C_H)
      i2c_rdwr_ioctl_data rdwr;
      i2c_msg msg[2];
      uint8_t wbuf[c_max_data_len + 2];  // +1 for cmd, +1 for len
      uint8_t rbuf[c_max_data_len + 1];  // +1 for len
      uint8_t wblock = ((wlen & 0x80) != 0);
      uint8_t rblock = ((rlen & 0x80) != 0);
      int rv = 0;

      rlen &= 0x7f;
      wlen &= 0x7f;

      if (bytes_read)
        *bytes_read = 0;

      if (wlen > c_max_data_len)
      {
        printf("i2c_transfer: wlen too big: %d, max is %d\n", wlen, c_max_data_len);
        return -1;
      }

      if (rlen > c_max_data_len)
      {
        printf("i2c_transfer: rlen too big: %d, max is %d\n", rlen, c_max_data_len);
        return -1;
      }

      // Whether we're doing a read or a write, we always send
      // the command.
      msg[0].addr = adr;
      msg[0].flags = 0;
      msg[0].len = wlen + 1 + wblock;    // +1 for cmd
      msg[0].buf = (uint8_t*)&wbuf[0];

      wbuf[0] = cmd;

      // We have some data to send down to the device
      if (wlen > 0)
      {
        if (wblock)
        {
          wbuf[1] = wlen;
          std::memcpy(&wbuf[2], wdata, wlen);
          wlen++;     // Add in cmd to the length
        }
        else
        {
          std::memcpy(&wbuf[1], wdata, wlen);
        }
      }

      rdwr.msgs = msg;
      rdwr.nmsgs = 1;

      // We're expecting some data to come back
      if (rlen > 0)
      {
        msg[1].addr = adr;
        msg[1].flags = I2C_M_RD;
        msg[1].len = rlen + rblock;
        msg[1].buf = (uint8_t*)&rbuf[0];

        rdwr.nmsgs = 2;
      }

      if (ioctl(m_fd, I2C_RDWR, &rdwr) < 0)
      {
        throw Error("I2C write error", strerror(errno));
        return -1;
      }

      if (rlen > 0)
      {
        if (rblock)
        {
          if (rbuf[0] > rlen)
          {
            printf("i2c_transfer: length is too big: %d max: %d\n", rbuf[0], rlen);
          }
          else
          {
            rlen = rbuf[0];
          }
        }

        std::memcpy(rdata, &rbuf[rblock], rlen);

        if (bytes_read)
          *bytes_read = rlen;
      }

      return rv;
#else
      (void)adr;
      (void)cmd;
      (void)wdata;
      (void)wlen;
      (void)rdata;
      (void)rlen;
      (void)bytes_read;

      return 0;
#endif
    }

    unsigned
    I2C::read(uint8_t adr, uint8_t* bfr, unsigned bfr_len)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_I2C_H)
      i2c_msg msg;
      msg.addr = adr;
      msg.flags = I2C_M_RD;
      msg.len = bfr_len;
      msg.buf = bfr;

      i2c_rdwr_ioctl_data rdwr;
      rdwr.msgs = &msg;
      rdwr.nmsgs = 1;

      if (ioctl(m_fd, I2C_RDWR, &rdwr) < 0)
      {
        throw Error("I2C read error", strerror(errno));
      }

      return bfr_len;

#else
      (void)adr;
      (void)bfr;
      (void)bfr_len;

      return 0;
#endif
    }

    void
    I2C::connect(uint8_t addr)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_I2C_H)
      int a = (int)addr;

      if (ioctl(m_fd, I2C_SLAVE, a) < 0)
        throw Error("setting slave address", System::Error::getLastMessage());
#else
      (void)addr;
#endif
    }

    unsigned
    I2C::read(uint8_t* bfr, unsigned bfr_len)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_I2C_H)
      int rv = ::read(m_fd, bfr, bfr_len);
      if (rv == -1)
        throw Error("read", System::Error::getLastMessage());

      return rv;
#else
      (void)bfr;
      (void)bfr_len;

      return 0;
#endif
    }

    unsigned
    I2C::write(const uint8_t* bfr, unsigned bfr_len)
    {
      // Linux implementation.
#if defined(DUNE_SYS_HAS_LINUX_I2C_H)
      int rv = ::write(m_fd, bfr, bfr_len);
      if (rv == -1)
        throw Error("read", System::Error::getLastMessage());

      return rv;
#else
      (void)bfr;
      (void)bfr_len;

      return 0;
#endif
    }
  }
}
