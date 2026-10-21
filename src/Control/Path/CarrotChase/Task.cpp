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
#include <DUNE/Control/PathController.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace CarrotChase
    {
      struct Arguments
      {
        // Lookahead distance.
        double lookahead_distance;
        // Lookahead angle for loiter.
        double lookahead_angle_loiter;
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
          param("Lookahead Distance", m_args.lookahead_distance)
          .minimumValue("1.0")
          .defaultValue("3.0")
          .units(Units::Meter)
          .description("Lookahead distance.");

          param("Lookahead Angle for Loiter", m_args.lookahead_angle_loiter)
          .defaultValue("10.0")
          .units(Units::Degree)
          .description("Lookahead angle for loiter.");
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
          // Path direction
          const double chi = ts.track_bearing;
          const double cchi = std::cos(chi);
          const double schi = std::sin(chi);

          // Projection point on the path (q)
          const double qx = ts.start.x + ts.track_pos.x * cchi;
          const double qy = ts.start.y + ts.track_pos.x * schi;

          // Virtual target point (carrot)
          const double sx = qx + m_args.lookahead_distance * cchi;
          const double sy = qy + m_args.lookahead_distance * schi;

          // Desired heading toward carrot
          const double psi_d = std::atan2(sy - state.y, sx - state.x);

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

          // Compute current loiter angle
          const double phi = std::atan2(dy, dx);

          // Compute virtual point
          const double lambda = ts.loiter.clockwise ? 1.0 : -1.0;
          const double phi_s = phi + lambda * Angles::radians(m_args.lookahead_angle_loiter);
          const double sx = ts.loiter.center.x + ts.loiter.radius * std::cos(phi_s);
          const double sy = ts.loiter.center.y + ts.loiter.radius * std::sin(phi_s);

          // Desired heading
          const double psi_d = std::atan2(sy - state.y, sx - state.x);

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(psi_d);
          dispatch(m_heading);
        }
      };
    }
  }
}

DUNE_TASK