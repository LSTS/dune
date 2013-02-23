//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: Fin.cpp 12658 2013-01-21 11:43:00Z jbraga                        $:*
//***************************************************************************

// VSIM headers.
#include <VSIM/Fin.hpp>

namespace Simulators
{
  namespace VSIM
  {
    Fin::Fin(unsigned int finid, double coef[3], double pos[3])
    {
      setFin(finid, coef, pos);
    }

    void
    Fin::updateAct(double value)
    {
      m_act = value;
    }

    void
    Fin::setFin(unsigned int finid, double coef[3], double pos[3])
    {
      m_act = 0;
      m_id = encodeId(finid);
      setForce(coef[0], coef[1], coef[2], false, false);
      setPosition(pos[0], pos[1], pos[2], false);
    }

    void
    Fin::getFinProducedForce(double f[3])
    {
      if (m_act >= c_max_act)
        m_act = c_max_act;

      if (m_act <= -c_max_act)
        m_act = -c_max_act;

      for (unsigned i = 0; i < 3; ++i)
        f[i] = m_max_force[i] / 2 * (m_act / c_max_act);
    }

    void
    Fin::getFinProducedTorque(double f[3])
    {
      if (m_act >= c_max_act)
        m_act = c_max_act;

      if (m_act <= -c_max_act)
        m_act = -c_max_act;

      f[0] = (std::sqrt(std::pow(m_act_position[1], 2) + std::pow(m_act_position[2], 2)) *
              std::fabs(m_max_force[0]) / 2 * (m_act / c_max_act));

      f[1] = m_act_position[0] * std::fabs(m_max_force[1]) / 2 * (m_act / c_max_act);
      f[2] = m_act_position[0] * std::fabs(m_max_force[2]) / 2 * (m_act / c_max_act);
    }

    void
    Fin::applyForce(double speed, double forces[6])
    {
      double calc_force[3];
      getFinProducedForce(calc_force);

      // The equation for the actuator is: (F = K * act * u * u).
      for (unsigned i = 0; i < 3; ++i)
        forces[i] = speed * speed * calc_force[i];

      getFinProducedTorque(calc_force);

      forces[3] = speed * speed * calc_force[0];
      // Stern actuation.
      forces[4] = speed * speed * calc_force[2];
      // Rudder actuation.
      forces[5] = speed * speed * calc_force[1];
    }

    bool
    Fin::checkId(unsigned int testid)
    {
      return (testid == m_id);
    }
  }
}
