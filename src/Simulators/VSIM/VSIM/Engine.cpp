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
#include <VSIM/Engine.hpp>

namespace Simulators
{
  namespace VSIM
  {
    Engine::Engine(unsigned int engid, double aforce[3], double pos[3], double orient[3], float force)
    {
      setEngine(engid, aforce, pos, orient, force);
    }

    void
    Engine::setEngine(unsigned int engid, double force[3], double pos[3], double orient[3], float max_force)
    {
      m_act = 0;
      m_id = encodeId(engid);
      setForce(force[0], force[1], force[2], false, false);
      setPosition(pos[0], pos[1], pos[2], false);
      m_act_orientation[0] = orient[0];
      m_act_orientation[1] = orient[1];
      m_act_orientation[2] = orient[2];
      m_engine_max_force = max_force;
    }

    void
    Engine::getEngineProducedForce(double speed, double f[6])
    {
      // Rotation per second.
      double rps = m_act * m_max_force[2] / 60.0;
      // Expected thruster force.
      double thruster_force = (m_max_force[0] * rps - m_max_force[1] * speed) * std::fabs(rps);

      // Force orientation vectors in all axes.
      f[0] = std::cos(m_act_orientation[0]) - std::sin(m_act_orientation[1]);
      f[1] = std::sin(m_act_orientation[0]);
      f[2] = std::sin(m_act_orientation[1]);
      f[3] = 0;
      f[4] = (std::sqrt(m_act_position[0] * m_act_position[0] +
                        m_act_position[2] * m_act_position[2]) *
              std::sin(m_act_orientation[1] -
                       std::atan2(m_act_position[2], m_act_position[0])));
      f[5] = (std::sqrt(m_act_position[0] * m_act_position[0] +
                        m_act_position[1] * m_act_position[1]) *
              std::sin(m_act_orientation[0] -
                       std::atan2(m_act_position[1], m_act_position[0])));

      for (unsigned i = 0; i < 3; i++)
      {
        // Forces.
        f[i] = f[i] * thruster_force;
        if (std::fabs(f[i]) > m_engine_max_force)
          f[i] = m_engine_max_force * (f[i] / std::fabs(f[i]));

        // Torques.
        f[i + 3] = f[i + 3] * thruster_force;
        if (std::fabs(f[i + 3]) > c_max_prop_torque)
          f[i + 3] = c_max_prop_torque * (f[i + 3] / std::fabs(f[i + 3]));
      }
    }

    void
    Engine::applyForce(double speed, double forces[6])
    {
      double calc_force[6];

      getEngineProducedForce(speed, calc_force);

      // Define control forces to be added to vehicle.
      forces[0] = calc_force[0];
      forces[1] = calc_force[1];
      forces[2] = calc_force[2];
      forces[5] = calc_force[5];
    }

    double
    Engine::getActuation(void)
    {
      return m_act;
    }

    void
    Engine::updateAct(double value)
    {
      m_act = value;
    }

    bool
    Engine::checkId(unsigned int testid)
    {
      return (testid == m_id);
    }
  }
}
