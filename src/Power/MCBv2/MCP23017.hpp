//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef POWER_MCBV2_MCP23017_HPP_INCLUDED_
#define POWER_MCBV2_MCP23017_HPP_INCLUDED_

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
