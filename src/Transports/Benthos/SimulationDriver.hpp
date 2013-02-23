//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: SimulationDriver.hpp 12667 2013-01-22 02:44:42Z rasm             $:*
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
