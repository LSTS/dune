//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: Vehicle.cpp 12658 2013-01-21 11:43:00Z jbraga                    $:*
//***************************************************************************

// VSIM headers.
#include <VSIM/Vehicle.hpp>

namespace Simulators
{
  namespace VSIM
  {
    //! Depth at surface to signal rejection of lifting forces.
    static const float c_depth_at_surface = -0.5;

    Vehicle::Vehicle(void)
    { }

    Vehicle::~Vehicle(void)
    {
      while (!m_vehicle_forces.empty())
      {
        Force* f = m_vehicle_forces.front();
        m_vehicle_forces.pop_front();
        delete f;
      }
    }

    void
    Vehicle::addEngine(Engine* f)
    {
      addForce(f);
    }

    void
    Vehicle::addForce(Force* f)
    {
      m_vehicle_forces.push_back(f);
    }

    void
    Vehicle::applyControlForces(void)
    {
      double f[6];
      double speed = std::sqrt(std::pow(m_linear_velocity[0], 2) +
                               std::pow(m_linear_velocity[1], 2) +
                               std::pow(m_linear_velocity[2], 2));

      for (std::list<Force*>::iterator itr = m_vehicle_forces.begin(); itr != m_vehicle_forces.end(); ++itr)
      {
        for (unsigned i = 0; i < 6; i++)
          f[i] = 0.0;

        (*itr)->applyForce(speed, f);

        // The following avoids vertical forces when the vehicle's
        // center of gravity is above water (considered negative).
        // Applies for AUVs and ASVs only.
        if (m_position[2] < c_depth_at_surface)
          f[2] = 0;

        // Adding Control forces to m_forces vector.
        addForces(f[0], f[1], f[2], f[3], f[4], f[5]);
      }
    }

    void
    Vehicle::applyForces(void)
    {
      applyDragForces();
      applyControlForces();
    }

    void
    Vehicle::updateact(unsigned int id, double act)
    {
      std::list<Force*>::iterator itr = m_vehicle_forces.begin();

      while (itr != m_vehicle_forces.end() && !(*itr)->checkId(id))
        ++itr;

      if (itr != m_vehicle_forces.end())
        (*itr)->updateAct(act);
    }

    void
    Vehicle::updateEngine(unsigned int id, double act)
    {
      id = Engine::encodeId(id);
      updateact(id, act);
    }

    void
    Vehicle::setAddedMassCoef(double coefs[6])
    {
      // do nothing.
      (void)coefs;
    }

    void
    Vehicle::setBodyLiftCoef(double coefs[8])
    {
      // do nothing.
      (void)coefs;
    }
  }
}
