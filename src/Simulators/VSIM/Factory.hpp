//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Factory.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
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
