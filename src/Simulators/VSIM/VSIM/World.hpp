//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_WORLD_HPP_INCLUDED_
#define SIMULATORS_VSIM_WORLD_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <list>

// VSIM headers.
#include <VSIM/Object.hpp>
#include <VSIM/Vehicle.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! Virtual %World properties
    class World
    {
    public:
      //! Constructor.
      World(int ident, double grv[3], double tstep);

      //! Destructor.
      ~World();

      //! Define world's integration timestep.
      //! @param[in] ts integration timestep.
      void
      setTimeStep(double ts)
      {
        m_timestep = ts;
      }

      //! Returns world's integration timestep.
      //! @return world integration timestep.
      double
      getTimeStep(void)
      {
        return m_timestep;
      }

      //! Add object to world.
      //! @param[in] obj new object.
      void
      addObject(Object*);

      //! Add vehicle to world.
      //! @param[in] veh new vehicle.
      void
      addVehicle(Vehicle*);

      //! Simulation's tick.
      void
      takeStep(void);

    private:
      //! Applies forces to all objects/vehicles.
      void
      applyForces(void);

      //! Fetches all objects and vehicles data from simulator.
      void
      update(void);

      //! Set world's gravity.
      //! @param[in] x set world gravity in the x-axis.
      //! @param[in] y set world gravity in the y-axis.
      //! @param[in] z set world gravity in the z-axis.
      void
      setGravity(double, double, double);

      //! World's id
      int m_world_id;
      //! World's gravity.
      double m_gravity[3];
      //! World's vehicles.
      std::list<Object*> m_objects;
      //! World's objects.
      std::list<Vehicle*> m_vehicles;
      //! Integration timestep.
      double m_timestep;
    };
  }
}
#endif
