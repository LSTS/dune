//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Bruno Terra                                                      *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <iostream>
#include <cstdio>
#include <cmath>

// VSIM headers.
#include <VSIM/PROF.hpp>
#include <VSIM/UUV.hpp>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace VSIM
  {
    PROF::PROF(void):
        UUV::UUV()
    { }

    PROF::PROF(double p[3], double dimensions[3]):
        UUV::UUV(p, dimensions)
    { }

    void
    PROF::applyDragForces(void)
    {
      double xf = (m_linear_drag_coef[0] * m_linear_velocity[0] +
                   m_linear_drag_coef[6] * m_angular_velocity[1]);
      double yf = (m_linear_drag_coef[1] * m_linear_velocity[1] +
                   m_linear_drag_coef[7] * m_angular_velocity[0]);
      double zf = m_linear_drag_coef[2] * m_linear_velocity[2];

      double pf = (m_linear_drag_coef[3] * m_angular_velocity[0] +
                   m_linear_drag_coef[8] * m_linear_velocity[1]);
      double qf = (m_linear_drag_coef[4] * m_angular_velocity[1] +
                   m_linear_drag_coef[9] * m_linear_velocity[0]);
      double rf = m_linear_drag_coef[5] * m_angular_velocity[2];

      addForces(xf, yf, zf, pf, qf, rf);

      xf = (m_quad_drag_coef[0] * m_linear_velocity[0] * std::fabs(m_linear_velocity[0]) +
            m_quad_drag_coef[6] * m_angular_velocity[1] * std::fabs(m_angular_velocity[1]));
      yf = (m_quad_drag_coef[1] * m_linear_velocity[1] * std::fabs(m_linear_velocity[1]) +
            m_quad_drag_coef[7] * m_angular_velocity[0] * std::fabs(m_angular_velocity[0]));
      zf = m_quad_drag_coef[2] * m_linear_velocity[2] * std::fabs(m_linear_velocity[2]);

      pf = (m_quad_drag_coef[3] * m_angular_velocity[0] * std::fabs(m_angular_velocity[0]) +
            m_quad_drag_coef[8] * m_linear_velocity[1] * std::fabs(m_linear_velocity[1]));
      qf = (m_quad_drag_coef[4] * m_angular_velocity[1] * std::fabs(m_angular_velocity[1]) +
            m_quad_drag_coef[9] * m_linear_velocity[0] * std::fabs(m_linear_velocity[0]));
      rf = m_quad_drag_coef[5] * m_angular_velocity[2] * std::fabs(m_angular_velocity[2]);

      addForces(xf, yf, zf, pf, qf, rf);
    }

    void
    PROF::applyBodyLiftForce(void)
    {
      double xf = (m_body_lift_coef[0] * m_linear_velocity[0] +
                  m_body_lift_coef[1] * m_angular_velocity[1]) * m_linear_velocity[2];
      double yf = (m_body_lift_coef[2] * m_linear_velocity[1] +
                  m_body_lift_coef[3] * m_angular_velocity[0]) * m_linear_velocity[2];
      double zf = 0;

      double pf = (m_body_lift_coef[4] * m_linear_velocity[1] +
                  m_body_lift_coef[5] * m_angular_velocity[0]) * m_linear_velocity[2];
      double qf = (m_body_lift_coef[6] * m_linear_velocity[0] +
                  m_body_lift_coef[7] * m_angular_velocity[1]) * m_linear_velocity[2];
      double rf = 0;

      addForces(xf, yf, zf, pf, qf, rf);
    }
  }
}