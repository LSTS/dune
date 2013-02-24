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

// Local headers
#include "SimulationDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE;
    using namespace DUNE::Time;
    using namespace DUNE::IMC;

    SimulationDriver::SimulationDriver(const Configuration& conf, IMC::Bus& bus): AbstractDriver(conf), m_bus(bus)
    { }

    bool
    SimulationDriver::send(const char* data, uint16_t length)
    {
      Delay::wait(constantOverhead());

      m_out.type = IMC::UASimulation::UAS_DATA;
      m_out.data.resize(length);
      m_out.speed = m_conf.acoustic_baud_rate;
      std::memcpy(&m_out.data[0], data, length);
      m_out.setTimeStamp();
      m_bus.dispatch(&m_out);

      Delay::wait(dataOverhead(length));
      return true;
    }

    bool
    SimulationDriver::receive(char* data, uint16_t* length, double timeout)
    {
      uint16_t n = m_in.data.size();

      if (n)
      {
        n = std::min(*length, n);
        *length = n;
        std::memcpy(data, &m_in.data[0], n);
        m_in.data.clear();
        return true;
      }

      Delay::wait(timeout);
      return false;
    }

    bool
    SimulationDriver::range(uint8_t address, float* value)
    {
      // @todo: does this still make sense?
      (void)address;
      (void)value;
      return false;
    }

    void
    SimulationDriver::onNotification(const IMC::UASimulation* msg)
    {
      m_in = *msg;
    }
  }
}
