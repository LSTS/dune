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

#ifndef SIMULATORS_VSIM_FACTORY_HPP_INCLUDED_
#define SIMULATORS_VSIM_FACTORY_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// VSIM headers.
#include <VSIM/World.hpp>
#include <VSIM/Vehicle.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! %Factory to produce world and vehicle
    //! objects from configuration file parameters.
    class Factory
    {
    public:
      //! This task is responsible for creating the world.
      //! @param[in] cfg configuration file.
      //! @return pointer to a VSIM::World object.
      static Simulators::VSIM::World*
      produceWorld(DUNE::Parsers::Config& cfg);

      //! This task is responsible for creating the vehicle.
      //! @param[in] cfg configuration file.
      //! @return pointer to a VSIM::Vehicle object.
      static Simulators::VSIM::Vehicle*
      produceVehicle(DUNE::Parsers::Config& cfg);
    };
  }
}

#endif
