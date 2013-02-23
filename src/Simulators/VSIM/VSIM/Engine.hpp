//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SIMULATORS_VSIM_ENGINE_HPP_INCLUDED_
#define SIMULATORS_VSIM_ENGINE_HPP_INCLUDED_

// VSIM headers.
#include <VSIM/Force.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! Maximum Torque Force.
    static const double c_max_prop_torque = 6;

    //! %Engine class responsible to model propellers.
    class Engine: public Force
    {
    public:
      //! Engine constructor.
      //! @param[in] id engine id.
      //! @param[in] aforce force distribution across three axes.
      //! @param[in] pos position of the engine relative to the center
      //! of the vehicle.
      //! @param[in] orientation orientation of the engine.
      //! @param[in] force maximum force of the engine.
      Engine(unsigned int id = 0, double aforce[3] = 0, double pos[3] = 0,
             double orientation[3] = 0, float force = 0);

      //! Update engine's actuation.
      //! @param[in] value actuation value.
      void
      updateAct(double value);

      //! Apply engine's force
      //! @param[in] speed speed reference of the vehicle.
      //! @param[out] forces control forces to be added to the vehicle.
      void
      applyForce(double speed, double forces[6]);

      //! Check engine's id.
      //! @param[in] testid engine id.
      //! @return true if id matches, false otherwise.
      bool
      checkId(unsigned int testid);

      //! Encode id function.
      inline static int
      encodeId(int id)
      {
        return id + 1000;
      }

      //! Return vehicle actuation.
      //! @return vehicle actuation.
      double
      getActuation(void);

    private:
      //! Sets engine's max force and position.
      //! @param[in] id engine id.
      //! @param[in] force force distribution across three axes.
      //! @param[in] position position of the engine relative to the center of the vehicle.
      //! @param[in] orientation orientation of the engine.
      //! @param[in] max_force maximum force of the engine.
      void
      setEngine(unsigned int id, double force[3], double position[3], double orientation[3], float max_force);

      //! Gets engine produced force.
      //! @param[in] speed speed reference of the vehicle.
      //! @param[out] f control forces to be added to the vehicle.
      void
      getEngineProducedForce(double speed, double f[6]);

      //! Engine's id.
      unsigned int m_id;
      //! Engine's actuation.
      double m_act;
      //! Engine's orientation.
      double m_act_orientation[3];
      //! Engine Maximum Force.
      float m_engine_max_force;
    };
  }
}

#endif
