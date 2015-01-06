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
