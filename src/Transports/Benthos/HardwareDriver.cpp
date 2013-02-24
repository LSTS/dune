//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// Local headers.
#include "HardwareDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE;
    using namespace DUNE::Time;
    using namespace DUNE::Hardware;

    HardwareDriver::HardwareDriver(const Configuration& conf):
      AbstractDriver(conf)
    {
      m_modem = new BenthosModem(conf);
    }

    HardwareDriver::~HardwareDriver(void)
    {
      delete m_modem;
    }

    bool
    HardwareDriver::receive(char* data, uint16_t* len, double timeout)
    {
      return m_modem->receive(data, len, timeout) == Modem::MR_OK && *len > 0;
    }

    bool
    HardwareDriver::send(const char* data, uint16_t length)
    {
      Modem::Result r = m_modem->send(data, length);

      if (r != Modem::MR_OK)
        return false;

      double delay = AbstractDriver::txOverhead(length);

      // Wait for data to flow onto the water
      DUNE_DBG("Benthos", "Send delay: " << delay << " seconds ...");

      Delay::wait(delay);

      DUNE_DBG("Benthos", "Send delay over");
      return true;
    }

    bool
    HardwareDriver::range(uint8_t address, float* value)
    {
      (void)address;
      (void)value;
      return false;
    }
  }
}
