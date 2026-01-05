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
// Author: Luis Venâncio (Based on original VectorField)                    *
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
    namespace VectorFieldnMultiLoiter
    {
      struct Arguments
      {
        std::string loiter_algorithm;
        double corridor;
        double entry_angle;
        bool ext_control;
        double ext_gain;
        double ext_trgain;
        double cc_lookahead;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! Controller gain.
        double m_gain;
        //! Outgoing desired heading message.
        IMC::DesiredHeading m_heading;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx)
        {
          param("Corridor -- Width", m_args.corridor)
          .minimumValue("1.0")
          .maximumValue("50.0")
          .defaultValue("5.0")
          .units(Units::Meter)
          .description("Width of corridor for attack entry angle");

          param("Corridor -- Entry Angle", m_args.entry_angle)
          .minimumValue("2")
          .maximumValue("45")
          .defaultValue("15")
          .units(Units::Degree)
          .description("Attack angle when lateral track error equals corridor width");

          param("Extended Control -- Enabled", m_args.ext_control)
          .defaultValue("false")
          .description("Enable extended (refined) corridor control");

          param("Extended Control -- Controller Gain", m_args.ext_gain)
          .defaultValue("1.0")
          .description("Gain for extended control");

          param("Extended Control -- Turn Rate Gain", m_args.ext_trgain)
          .defaultValue("1.0")
          .description("Turn rate gain for extended control");

          param("Loiter Algorithm", m_args.loiter_algorithm)
          .values("VectorField, CarrotChasing")
          .defaultValue("CarrotChasing")
          .description("Algorithm used for loiter control.");

          param("Carrot Chasing -- Lookahead Angle", m_args.cc_lookahead)
          .defaultValue("10.0")
          .units(Units::Degree)
          .description("Lookahead angle for carrot chasing loiter");
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          if (paramChanged(m_args.entry_angle))
            m_args.entry_angle = Angles::radians(m_args.entry_angle);

          m_gain = std::tan(m_args.entry_angle) / m_args.corridor;
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

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Note:
          // cross-track position (lateral error) = ts.track_pos.y
          // and along-track position = ts.track_pos.x
          double kcorr = ts.track_pos.y / m_args.corridor;
          double akcorr = std::fabs(kcorr);

          double ref;

          if (ts.track_pos.x > ts.track_length)
          {
            // Past the track goal: this should never happen but ...
            ref = getBearing(state, ts.end);
          }
          else if (akcorr > 1 || !m_args.ext_control)
          {
            // Outside corridor
            ref = ts.track_bearing - std::atan(m_gain * ts.track_pos.y);
          }
          else if (akcorr > 0.05)
          {
            // Inside corridor
            ref = ts.track_bearing
            - std::pow(kcorr, m_args.ext_gain) * m_args.entry_angle
            * (1 +
               (m_gain * ts.speed * std::sin(ts.course - ts.track_bearing))
               / (m_args.ext_trgain * ts.track_pos.y));
          }
          else
          {
            // Over track (avoid singularities)
            ref = ts.track_bearing;
          }

          if (ts.cc)
            ref += state.psi - ts.course;  // course control rather than yaw control

          spew("lte=%0.1f cadj=%0.1f attack=%0.1f", std::fabs(ts.track_pos.y),
               Angles::degrees(Angles::normalizeRadian(std::fabs(state.psi - std::atan2(state.vy, state.vx)))),
               Angles::degrees(Angles::normalizeRadian(std::fabs(ts.track_bearing - ref))));

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(ref);
          dispatch(m_heading);
        }

        //! Execute a loiter control step
        //! From base class PathController
        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          if (m_args.loiter_algorithm == "VectorField")
            loiterVectorField(state, ts);
          else if (m_args.loiter_algorithm == "CarrotChasing")
            loiterCarrotChase(state, ts);
          else
          {
            err("Unknown loiter algorithm '%s'. Defaulting to CarrotChasing.",
                m_args.loiter_algorithm.c_str());
            loiterCarrotChase(state, ts);
          }
        }

        void
        loiterVectorField(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          double ref = DUNE::Math::c_half_pi + std::atan(2 * m_gain * (ts.range - ts.loiter.radius));

          if (!ts.loiter.clockwise)
            ref = -ref;

          ref += DUNE::Math::c_pi + ts.los_angle;

          if (ts.cc)
            ref += state.psi - ts.course;  // course control
          
          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(ref);
          dispatch(m_heading);
        }

        void
        loiterCarrotChase(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Vector from center to vehicle
          const double dx = state.x - ts.loiter.center.x;
          const double dy = state.y - ts.loiter.center.y;

          // Compute current loiter angle
          const double phi = std::atan2(dy, dx);

          // Compute virtual point
          const double lambda = ts.loiter.clockwise ? 1.0 : -1.0;
          const double phi_s = phi + lambda * Angles::radians(m_args.cc_lookahead);
          const double sx = ts.loiter.center.x + ts.loiter.radius * std::cos(phi_s);
          const double sy = ts.loiter.center.y + ts.loiter.radius * std::sin(phi_s);

          // Desired heading
          const double psi_d = std::atan2(sy - state.y, sx - state.x);

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(psi_d);
          dispatch(m_heading);
          war("This is running carrot chasing loiter control!");
        }
      };
    }
  }
}

DUNE_TASK