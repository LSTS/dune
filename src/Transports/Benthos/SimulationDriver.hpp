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

#ifndef TRANSPORTS_UNDERWATER_BENTHOS_SIMULATION_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_UNDERWATER_BENTHOS_SIMULATION_DRIVER_HPP_INCLUDED_

// Local headers.
#include "AbstractDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE;

    class SimulationDriver: public AbstractDriver
    {
    public:
      SimulationDriver(const Configuration& conf, IMC::Bus& mbus);

      bool
      send(const char* data, uint16_t length);

      bool
      receive(char* data, uint16_t* length, double timeout);

      bool
      range(uint8_t address, float* value);

      void
      onNotification(const DUNE::IMC::UASimulation* op);

    private:
      DUNE::IMC::Bus& m_bus;
      DUNE::IMC::UASimulation m_in;
      DUNE::IMC::UASimulation m_out;
    };
  }
}

#endif
