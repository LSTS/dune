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
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Factory.hpp"
#include <VSIM/VSIM.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  namespace VSIM
  {
    Simulators::VSIM::World*
    Factory::produceWorld(Parsers::Config& cfg)
    {
      // Build model's complete section name.
      std::string section = "VSIM/Model/world";

      // Retrieve vehicle's volume.
      double gravity[3];
      if (!cfg.getList(section, "Gravity", gravity, 3))
        return 0;

      return new Simulators::VSIM::World(0, gravity, 0);
    }

    Simulators::VSIM::Vehicle*
    Factory::produceVehicle(Parsers::Config& cfg)
    {
      Simulators::VSIM::Vehicle* vehicle = NULL;

      // To allow different types of vehicles.
      std::string model;
      cfg.get("General", "Vehicle Type", "lauv", model);

      // Build model's complete section name.
      std::string section = "VSIM/Model/" + model;

      // Retrieve vehicle's volume.
      double volume[3];
      if (!cfg.getList(section, "Volume", volume, 3))
        return 0;

      // Retrieve vehicle's buoyancy.
      double buoyancy[3];
      if (!cfg.getList(section, "Buoyancy", buoyancy, 3))
        return 0;

      // Get vehicle type and create vehicle's object.p
      std::string type;
      cfg.get(section, "Type", "UUV", type);
      if (type == "UUV" || type == "ROV")
      {
        vehicle = new Simulators::VSIM::UUV(buoyancy, volume);

        // Retrieve added mass coefficient.
        double addedmass[6];
        bool has_amass = cfg.getList(section, "Added Mass Coefficients", addedmass, 6);
        if (has_amass)
          vehicle->setAddedMassCoef(addedmass);
        else
          return 0;

        // Retrieve lift coefficient.
        double bodylift[8];
        bool has_lift = cfg.getList(section, "Body Lift Coefficients", bodylift, 8);
        if (has_lift)
          vehicle->setBodyLiftCoef(bodylift);
        else
          return 0;
      }
      else
      {
        if (type == "ASV")
          vehicle = new Simulators::VSIM::ASV(volume);
        else
          return 0;
      }

      // Retrieve mass.
      double mass = 0.0;
      cfg.get(section, "Mass", "0.0", mass);

      // Retrieve mass prop.
      double imatrix[6];
      bool has_imatrix = cfg.getList(section, "Inertial Matrix", imatrix, 6);
      if (!has_imatrix)
        return 0;
      vehicle->setMassProp(mass, imatrix);

      // Retrieve linear drag coefficient.
      double ldrag[10];
      bool has_ldrag = cfg.getList(section, "Linear Drag Coefficients", ldrag, 10);
      if (has_ldrag)
        vehicle->setLinearDragCoef(ldrag);
      else
        return 0;

      // Retrieve quadratic drag coefficient.
      double qdrag[10];
      bool has_qdrag = cfg.getList(section, "Quadratic Drag Coefficients", qdrag, 10);
      if (has_qdrag)
        vehicle->setQuadraticDragCoef(qdrag);
      else
        return 0;

      // Velocity integration method
      // true: uses regular method.
      // false: swordfish.
      bool intMethod;
      cfg.get(section, "Integration Method", "true", intMethod);
      vehicle->setIntegrationMethod(intMethod);

      double force[3];
      double position[3];
      double orientation[2];

      // Retrieve fins.
      unsigned fins;
      cfg.get(section, "Fin Count", "0", fins);

      for (unsigned i = 0; i < fins; ++i)
      {
        std::string idx = String::str(i);

        if (!cfg.getList(section, "Fin Force " + idx, force, 3)
            || !cfg.getList(section, "Fin Position " + idx, position, 3))
        {
          delete vehicle;
          return 0;
        }

        vehicle->addForce(new Simulators::VSIM::Fin(i, force, position));
      }

      // Retrieve engines.
      unsigned engines = 0;
      cfg.get(section, "Engine Count", "0", engines);

      // Retrieve engines maximum force.
      float eng_max_force;
      cfg.get(section, "Engine Max Force", "12", eng_max_force);

      for (unsigned i = 0; i < engines; ++i)
      {
        std::string idx = String::str(i);

        if (!cfg.getList(section, "Engine Parameters " + idx, force, 3)
            || !cfg.getList(section, "Engine Position " + idx, position, 3)
            || !cfg.getList(section, "Engine Orientation " + idx, orientation, 2))
        {
          delete vehicle;
          return 0;
        }

        vehicle->addForce(new Simulators::VSIM::Engine(i, force, position, orientation, eng_max_force));
      }

      // Setting all forces to zero
      vehicle->resetForces();

      return vehicle;
    }
  }
}

