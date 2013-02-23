//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: BenthosModem.cpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

// Local headers.
#include "BenthosModem.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE::Time;
    using namespace DUNE::Hardware;

    // Standard ok reply from modem
    static const char* c_ok_reply = "OK\r\n>";

    // Range command timeout
    static const double c_range_command_timeout = 10.0;

    //! S4 register settings (acoustic baud rate).
    enum
    {
      c_abr_140 = 2, //!< 140 bps.
      c_abr_300,   //!< 300 bps.
      c_abr_600,   //!< 600 bps.
      c_abr_800,   //!< 800 bps.
      c_abr_1066,  //!< 1066 bps
      c_abr_1200,  //!< 1200 bps.
      c_abr_2400   //!< 2400 bps
    };

    static std::pair<uint16_t, uint8_t> c_abr_confs[] =
    {
      std::pair<uint16_t, uint8_t>(140, c_abr_140),
      std::pair<uint16_t, uint8_t>(300, c_abr_300),
      std::pair<uint16_t, uint8_t>(600, c_abr_600),
      std::pair<uint16_t, uint8_t>(800, c_abr_800),
      std::pair<uint16_t, uint8_t>(1066, c_abr_1066),
      std::pair<uint16_t, uint8_t>(1200, c_abr_1200),
      std::pair<uint16_t, uint8_t>(2400, c_abr_2400)
    };

    DUNE_DECLARE_STATIC_MAP(c_abr, uint16_t, uint8_t, c_abr_confs);

    // Note: 9600 fixed baud rate for RS232 to avoid confusion in register
    // settings. Note that this is the maximum allowed in any case.

    BenthosModem::BenthosModem(const Configuration& config):
      Modem(config.uart_device, config.uart_brate),
      m_mode(MM_UNKNOWN)
    {
      if (c_abr.find(config.acoustic_baud_rate) == c_abr.end())
        throw std::runtime_error("invalid settings");

      // Set register configurations
      m_regconf.push_back(RegisterValue(c_reg_TRANSMIT_POWER, config.transmit_power));
      m_regconf.push_back(RegisterValue(c_reg_MODEM_ADDRESS, config.address));
      m_regconf.push_back(RegisterValue(c_reg_REMOTE_ADDRESS, config.address));
      m_regconf.push_back(RegisterValue(c_reg_ACOUSTIC_BAUDRATE, c_abr[config.acoustic_baud_rate]));

      // Low power mode timeout: 180s (36x5) by default, set it to 0xFF
      // meaning modem will not go into low power mode
      m_regconf.push_back(RegisterValue(c_reg_IDLE_TIME, 0xFF));

      // Low power wakeup signal : enabled by default, disable it
      m_regconf.push_back(RegisterValue(c_reg_LOW_POWER_WAKEUP, 0));

      // Set forwarding delay (truncated to units of 50 ms)
      m_regconf.push_back(RegisterValue(c_reg_FORWARDING_DELAY, config.forwarding_delay / 50));

      // Other settings not configured -- AT&F within setup() sets as defaults
      // - Doppler Tracking: disabled by default.
      // - Packet retry: disabled by default.

      setup();
    }

    Modem::Result
    BenthosModem::setup(void)
    {
      // Put modem in command mode
      Result r = setMode(MM_COMMAND, true);

      if (r != MR_OK)
        return r;

      DUNE_DBG("Modem", "Setting up");

      // Note -- modem is setup with defaults by AT&F
      if ((r = command(2.0, c_ok_reply, "AT\r")) != Modem::MR_OK
          || (r = command(2.0, "Factory Reset\r\n>", "AT&F\r")) != Modem::MR_OK
          || (r = command(2.0, "AGC Test OFF\r\n>", "ATTN0\r")) != Modem::MR_OK)
        return r;

      for (unsigned int i = 0; i < m_regconf.size(); ++i)
      {
        r = set(m_regconf[i].first, m_regconf[i].second);

        if (r != Modem::MR_OK)
          break;
      }

      // Save configuration
      if (r == MR_OK)
      {
        // Save registers
        r = command(2.0, "Sregisters Stored\r\n>", "AT&W\r");
        if (r == MR_OK)
          r = setMode(Modem::MM_DATA);
      }
      return r;
    }

    int
    BenthosModem::getMode(void) const
    {
      return m_mode;
    }

    Modem::Result
    BenthosModem::setMode(int mode, bool force)
    {
      if (m_mode == mode && !force)
        return Modem::MR_OK;

      Modem::Result r = MR_OK;

      if (mode == MM_COMMAND)
      {
        for (int i = 0; i < 3; i++)
        {
          Delay::wait(1.1);
          m_io->write("+++", 3);
          Delay::wait(1.1);

          if ((r = expect(2.0, ">")) == Modem::MR_OK)
            break;

          // Maybe the modem is already in command mode
          m_io->write("\r", 1);

          if ((r = expect(2.0, ">")) == Modem::MR_OK)
            break;
        }
      }
      else
      {
        uint8_t trash;
        m_io->write("ATO\r", 4);
        r = expect(2.0, "CONNECT");
        while (m_io->read(&trash, 1) == 1 || poll(0.1) == Modem::MR_OK)
          ;
      }

      if (r == Modem::MR_OK)
      {
        m_mode = mode;

        DUNE_DBG("Modem", (m_mode == MM_COMMAND ? "Command" : "Data")
                 << " mode set");
      }

      return r;
    }

    Modem::Result
    BenthosModem::get(RegisterConfig& rconfig)
    {
      Modem::Result r = Modem::MR_OK;

      if (rconfig.size() == 0)
      {
        // Get values for all registers
        for (int reg = 0; reg < c_reg_NUMBER; reg++)
          rconfig.push_back(RegisterValue((Register)reg, 0));
      }

      for (uint16_t i = 0; i < rconfig.size(); i++)
      {
        r = get(rconfig[i].first, &rconfig[i].second);

        if (r != Modem::MR_OK)
          break;
      }
      return r;
    }

    Modem::Result
    BenthosModem::get(Register reg, uint8_t* value)
    {
      Modem::Result r = command(2.0, ">", "ATS%d?\r", reg);

      if (r == Modem::MR_OK)
      {
        char* aux = m_wbuf;

        while (*aux && !isdigit(*aux))
          aux++;

        if (*aux && isdigit(aux[1]) && isdigit(aux[2]))
          *value = (uint8_t)((aux[0] - '0') * 100 + (aux[1] - '0') * 10 + aux[2] - '0');
        else
          r = Modem::MR_IO_ERROR;
      }
      return r;
    }

    Modem::Result
    BenthosModem::set(Register reg, uint8_t value)
    {
      return command(2.0, c_ok_reply, "ATS%d=%d\r", (int)reg, (int)value);
    }

    Modem::Result
    BenthosModem::range(uint8_t address, float* distance)
    {
      DUNE_DBG("Modem", "Range command - remote modem: " << (int)address);

      if (setMode(MM_COMMAND) != Modem::MR_OK)
        return Modem::MR_IO_ERROR;

      if (command(c_range_command_timeout, ">", "ATR%d\r", address))
        return Modem::MR_IO_ERROR;

      char* p, * p2;

      p = std::strstr(m_wbuf, "Range=");

      if (!p)
        return std::strstr(m_wbuf, "Not Received") ?
        Modem::MR_TIMEOUT : Modem::MR_IO_ERROR;

      p += 6;
      p2 = std::strchr(p, ' ');

      if (!p2)
        return Modem::MR_IO_ERROR;

      *p2 = 0;
      p2++;

      if (std::sscanf(p, "%f", distance) != 1)
        return Modem::MR_IO_ERROR;

      if (*p2 != 'M')
        *distance = *distance * 1000.0;  // Distance in Km

      return Modem::MR_OK;
    }
  }
}
