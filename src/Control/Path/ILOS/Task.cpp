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
// Author: Walter Caharija                                                  *
//***************************************************************************

//***************************************************************************
// Reference:
//  "Relative Velocity Control and Integral LOS
//   for Path Following of Underactuated Surface Vessels",
//  W. Caharija, M. Candeloro, K. Y. Pettersen and A. J. Sørensen,
//  Proc. of 9th IFAC Conference on Maneouvering and Control of Marine
//  Crafts, 2012 (MCMC'12)
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
    namespace ILOS
    {
      struct Arguments
      {
        double corridor;
        double entry_angle;
        double lookahead;
        double int_gain;
        double int_init;
        bool out_vec;
        bool out_los;
      };

      struct Task: public DUNE::Control::PathController
      {
        //! ILOS m_integrator
        double m_integrator;
        //! Time of last path controller step
        Delta m_last_step;
        //! Loiter controller gain.
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

          param("Corridor -- Out Vector Field", m_args.out_vec)
          .defaultValue("false")
          .description("Out of corridor guidance law: vector field");

          param("Corridor -- Out LOS", m_args.out_los)
          .defaultValue("false")
          .description("Out of corridor guidance law: LOS");

          param("ILOS Lookahead Distance", m_args.lookahead)
          .minimumValue("1.0")
          .maximumValue("50.0")
          .defaultValue("10.0")
          .units(Units::Meter)
          .description("Integral Line-of-Sight look ahead distance");

          param("ILOS Integrator Gain", m_args.int_gain)
          .minimumValue("0")
          .maximumValue("4")
          .defaultValue("0")
          .description("Integral Line-of-Sight integral gain");

          param("ILOS Integrator Initial Value", m_args.int_init)
          .minimumValue("0")
          .maximumValue("10")
          .defaultValue("0")
          .description("M_Integrator inital value");

          // Everything is ok so set task entity state at normal with 'Active' message.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        onUpdateParameters(void)
        {
          // Initialize ILOS m_integrator
          m_integrator = m_args.int_init;
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

        void
        reset(void)
        {
          m_integrator = 0.0;
        }

        inline double
        computeK(double l1, double l2, double ts_y, double factor)
        {
          return l1 / (std::pow(ts_y + m_args.int_gain * (m_integrator + factor), 2) + l2);
        }

        //! Execute a path control step
        //! From base class PathController
        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Note:
          // cross-track position (lateral error) = ts.track_pos.y
          // and along-track position = ts.track_pos.x
          double ref;
          double k1;
          double k2;
          double k3;
          double k4;
          double loc_1 = m_args.lookahead * ts.track_pos.y;
          double loc_2 = std::pow(m_args.lookahead, 2);
          double timestep = m_last_step.getDelta();
          double kcorr = ts.track_pos.y / m_args.corridor;
          double akcorr = std::fabs(kcorr);

          if (akcorr > 1)
          {
            // Outside corridor, m_integrator OFF
            m_integrator = 0.0;
          }
          else
          {
            // Inside corridor, m_integrator ON
            // RK4 integration
            k1 = computeK(loc_1, loc_2, ts.track_pos.y, 0.0);
            k2 = computeK(loc_1, loc_2, ts.track_pos.y, k1/2);
            k3 = computeK(loc_1, loc_2, ts.track_pos.y, k2/2);
            k4 = computeK(loc_1, loc_2, ts.track_pos.y, k3);

            m_integrator += timestep * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
          }

          // ILOS guidance
          if (ts.track_pos.x > ts.track_length)
          {
            // Past the track goal: this should never happen but ...
            ref = getBearing(state, ts.end);
          }
          else if (akcorr > 1 && m_args.out_vec && !m_args.out_los)
          {
            // Outside corridor, m_integrator OFF, vector field guidance
            ref = ts.track_bearing - std::atan(m_gain * ts.track_pos.y);
          }
          else if (akcorr > 1 && !m_args.out_vec && m_args.out_los)
          {
            // Outside corridor, m_integrator OFF, LOS guidance
            ref = ts.track_bearing - std::atan(ts.track_pos.y / m_args.lookahead);
          }
          else
          {
            // Inside corridor, m_integrator ON, ILOS guidance
            ref = ts.track_bearing - std::atan((ts.track_pos.y + m_args.int_gain * m_integrator) / m_args.lookahead);
          }

          // Dispatch heading reference
          m_heading.value = Angles::normalizeRadian(ref);
          dispatch(m_heading);
        }

        //! Execute a loiter control step
        //! From base class PathController & VectorField guidance law
        void
        loiter(const IMC::EstimatedState& state, const TrackingState& ts)
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
      };
    }
  }
}

DUNE_TASK
