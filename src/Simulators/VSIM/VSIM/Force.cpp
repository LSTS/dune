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
#include <VSIM/Force.hpp>

namespace Simulators
{
  namespace VSIM
  {
    Force::Force(void)
    {
      for (unsigned i = 0; i < 3; ++i)
      {
        m_max_force[i] = 0.0;
        m_act_position[i] = 0.0;
      }

      m_fIsInertial = false;
      m_pIsInertial = false;
      m_fIsTorque = false;
    }

    void
    Force::setForce(double x, double y, double z, bool is_inertial, bool is_torque)
    {
      m_max_force[0] = x;
      m_max_force[1] = y;
      m_max_force[2] = z;

      m_fIsInertial = is_inertial;
      m_fIsTorque = is_torque;
    }

    void
    Force::setPosition(double x, double y, double z, bool is_inertial)
    {
      m_act_position[0] = x;
      m_act_position[1] = y;
      m_act_position[2] = z;

      m_pIsInertial = is_inertial;
    }

    bool
    Force::isInertial(void)
    {
      return m_fIsInertial;
    }

    bool
    Force::isTorque(void)
    {
      return m_fIsTorque;
    }

    bool
    Force::isPosInertial(void)
    {
      return m_pIsInertial;
    }

    void
    Force::applyForce(double speed, double forces[6])
    {
      // do nothing.
      (void)speed;
      (void)forces;
    }

    bool
    Force::checkId(unsigned int testid)
    {
      // do nothing.
      (void)testid;
      return false;
    }

    void
    Force::updateAct(double value)
    {
      // do nothing.
      (void)value;
    }

    // return ASV actuation
    double
    Force::getActuation(void)
    {
      // do nothing.
      return 0;
    }
  }
}
