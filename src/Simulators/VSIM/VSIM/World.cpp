//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
