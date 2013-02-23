//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: MCP23017.hpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

#ifndef ACTUATORS_MCBV2_MCP23017_HPP_INCLUDED_
#define ACTUATORS_MCBV2_MCP23017_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  namespace MCBv2
  {
    static const uint8_t c_mcp23017_r_gpioa = 0x12;

    class MCP23017
    {
    public:
      MCP23017(const std::string& dev, uint8_t adr):
        m_i2c(NULL),
        m_adr(adr)
      {
        m_i2c = new DUNE::Hardware::I2C(dev);
        m_i2c->connect(adr);

        m_gpios = getPortValue(0);
        m_gpios |= getPortValue(1) << 8;
      }

      ~MCP23017(void)
      {
        if (m_i2c)
          delete m_i2c;
      }

      uint16_t
      getGPIOs(void)
      {
        return m_gpios;
      }

      void
      setGPIOs(uint16_t gpios)
      {
        setPortValue(0, (uint8_t)gpios);
        setPortValue(1, (uint8_t)(gpios >> 8));
        m_gpios = gpios;
      }

    private:
      DUNE::Hardware::I2C* m_i2c;
      uint8_t m_adr;
      uint16_t m_gpios;

      uint8_t
      getPortValue(uint8_t port)
      {
        uint8_t value = 0;
        m_i2c->transfer(m_adr, c_mcp23017_r_gpioa + port, 0, 0, &value, 1, 0);
        return value;
      }

      void
      setPortValue(uint8_t port, uint8_t value)
      {
        uint8_t cmd[] = {(uint8_t)(c_mcp23017_r_gpioa + port), value};
        m_i2c->write(cmd, sizeof(cmd));
      }
    };
  }
}

#endif
