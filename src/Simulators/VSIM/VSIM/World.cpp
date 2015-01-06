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
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

// VSIM headers.
#include <VSIM/World.hpp>

namespace Simulators
{
  namespace VSIM
  {
    World::World(int ident, double grv[3], double tstep):
      m_timestep(tstep)
    {
      m_world_id = ident;
      setGravity(grv[0], grv[1], grv[2]);
    }

    World::~World(void)
    {  }

    void
    World::setGravity(double x, double y, double z)
    {
      m_gravity[0] = x;
      m_gravity[1] = y;
      m_gravity[2] = z;
    }

    void
    World::addObject(Object* obj)
    {
      m_objects.push_back(obj);
      obj->insertInWorld();
    }

    void
    World::addVehicle(Vehicle* veh)
    {
      m_vehicles.push_back(veh);
      veh->insertInWorld();
    }

    void
    World::applyForces(void)
    {
      std::list<Object*>::iterator oitr = m_objects.begin();
      for (; oitr != m_objects.end(); ++oitr)
        (*oitr)->applyForces();

      std::list<Vehicle*>::iterator vitr = m_vehicles.begin();
      for (; vitr != m_vehicles.end(); ++vitr)
        (*vitr)->applyForces();
    }

    void
    World::update(void)
    {
      std::list<Object*>::iterator oitr = m_objects.begin();
      for (; oitr != m_objects.end(); ++oitr)
        (*oitr)->update(m_timestep);

      std::list<Vehicle*>::iterator vitr = m_vehicles.begin();
      for (; vitr != m_vehicles.end(); ++vitr)
        (*vitr)->update(m_timestep);
    }

    void
    World::takeStep(void)
    {
      // Apply forces to vehicle.
      applyForces();

      // Update vehicle state.
      update();
    }
  }
}
