//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace PLOS
    {
      struct Arguments
      {
        //! Pure Pursuit gain.
        double pp_gain;
        //! LOS gain.
        double los_gain;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("PLOS -- Pure Persuit Gain", m_args.pp_gain)
          .defaultValue("10.0")
          .description("PLOS Pure Persuit Gain (k1)");

          param("PLOS -- LOS Gain", m_args.los_gain)
          .defaultValue("10.0")
          .description("PLOS LOS Gain (k2)");
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();
        }

        void
        onEntityReservation(void)
        {
          PathController::onEntityReservation();
        }

        void
        onPathActivation(void)
        {
          // Activate heading cotroller.
          enableControlLoops(IMC::CL_YAW);
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Heading error relative to path
          const double e_psi = Angles::normalizeRadian(state.psi - ts.los_angle);

          // PLOS guidance law
          const double psi_d = ts.los_angle
                               - m_args.pp_gain * e_psi
                               - m_args.los_gain * ts.track_pos.y;

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(psi_d);
          dispatch(m_heading);
        }

        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Vector from center to vehicle
          const double dx = state.x - ts.loiter.center.x;
          const double dy = state.y - ts.loiter.center.y;

          // Compute cross-track error
          const double d = Math::norm(dx, dy) - ts.loiter.radius;

          // Compute current loiter angle
          const double phi = std::atan2(dy, dx);

          // Desired tangential heading
          const double lambda = ts.loiter.clockwise ? 1.0 : -1.0;
          const double psi_p = phi + lambda * Math::c_half_pi;

          // Heading error relative to tangent
          const double e_psi = Angles::normalizeRadian(state.psi - psi_p);

          // PLOS guidance law (Algorithm 6)
          const double psi_d = psi_p - m_args.pp_gain * e_psi + m_args.los_gain * d;

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(psi_d);
          dispatch(m_heading);
        }
      };
    }
  }
}

DUNE_TASK