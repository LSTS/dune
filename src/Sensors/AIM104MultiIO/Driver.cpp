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

// DUNE headers.
#include <DUNE/Hardware.hpp>

// Local headers.
#include "Driver.hpp"

namespace Sensors
{
  namespace AIM104MultiIO
  {
    enum Bits
    {
      //! Single-ended / Differential A/D input mode.
      STA_SD = 1 << 5,
      //! Unipolar / Bipolar A/D input mode setting.
      STA_UB = 1 << 6,
      //! A/D chip status (1 - A/D conversion in progress, 0 A/D idle).
      STA_STS = 1 << 7
    };

    enum Registers
    {
      //! Opto inputs.
      RG_INS = 0x00,
      //! A/D channel register.
      RG_ADC = 0x01,
      //! A/D status.
      RG_STA = 0x01,
      //! A/D LSB (R).
      RG_AD_LSB = 0x02,
      //! A/D MSB (R).
      RG_AD_MSB = 0x03
    };

    // ADC channel select bytes for differential operation.
    static const uint8_t c_channels_dif[] =
    {
      0x88, 0x99, 0xAA, 0xBB,
      0xCC, 0xDD, 0xEE, 0xFF
    };

    // ADC channel select bytes for single ended operation.
    static const uint8_t c_channels_sin[] =
    {
      0x08, 0x80, 0x09, 0x90,
      0x0A, 0xA0, 0x0B, 0xB0,
      0x0C, 0xC0, 0x0D, 0xD0,
      0x0E, 0xE0, 0x0F, 0xF0
    };

    Driver::Driver(uint32_t address, fp32_t input_range, bool mode_dif):
      m_channel(0)
    {
      // Open hardware port.
      m_io = new DUNE::Hardware::IOPort(address, 4);

      if (mode_dif)
      {
        m_channels = 8;
        m_chan_table = c_channels_dif;
      }
      else
      {
        m_channels = 16;
        m_chan_table = c_channels_sin;
      }

      setInputRange(input_range);
    }

    Driver::~Driver(void)
    {
      delete m_io;
    }

    void
    Driver::setInputRange(fp64_t range)
    {
      m_input_range = range;
    }

    bool
    Driver::setChannel(uint8_t channel)
    {
      if (channel >= m_channels)
        return false;

      m_channel = channel;
      m_io->write(m_chan_table[m_channel], RG_ADC);

      return true;
    }

    bool
    Driver::sample(fp64_t& value)
    {
      if (m_io->read(RG_STA) & 0x01)
      {
        uint16_t lsb = m_io->read(RG_AD_LSB) & 0x00FF;
        uint16_t msb = m_io->read(RG_AD_MSB) & 0x000F;
        uint16_t raw_value = msb << 8 | lsb;

        // Input voltage = (A/D value/2048) * Full-scale input range - Full-scale input range
        value = (raw_value / 2048.0) * m_input_range - m_input_range;

        return true;
      }

      return false;
    }
  }
}
