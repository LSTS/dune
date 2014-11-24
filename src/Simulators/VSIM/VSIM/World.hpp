//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_VSIM_WORLD_HPP_INCLUDED_
#define SIMULATORS_VSIM_VSIM_WORLD_HPP_INCLUDED_

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
