//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Fortuna                                                     *
//***************************************************************************
// Paper submitted to MSC2015 and awaiting review:                          *
// "Cascaded Line-of-Sight Path-Following and                               *
// Sliding Mode Controllers for Fixed-Wing UAVs"                            *
// João Fortuna and Thor I. Fossen                                          *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace LOSnSMC
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Maximum bank angle - Defined by aircraft structural, navigation
        //! or control constraints
        double max_bank;
        //! Look ahead distance for line-of-sight
        double lookahead;
        //! Sliding surface gain
        double rho;
        //! Course error gain
        double lambda;
        //! K_d gain
        double k_d;
        //! Sliding surface bandwidth
        double bandwidth;
        //! Estimated aircraft roll time constant
        double roll_tc;
        //! Flag to enable controller
        bool use_controller;
      };

      struct Task: public DUNE::Control::PathController
      {
        Arguments m_args;
        IMC::DesiredRoll m_bank;
        double m_airspeed;
        double m_bank_lim;
        double m_lookahead, m_lookahead_sq;
        double m_W_x, m_W_y;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx),
          m_airspeed(0.0),
          m_bank_lim(0.0),
          m_lookahead(0.0),
          m_lookahead_sq(0.0),
          m_W_x(0.0),
          m_W_y(0.0)
        {
          param("Lookahead", m_args.lookahead)
          .defaultValue("50.0")
          .description("Lookahead distance");

          param("Rho", m_args.rho)
          .defaultValue("4.0")
          .description("Sliding surface gain");

          param("Lambda", m_args.lambda)
          .defaultValue("2.0")
          .description("Course error gain");

          param("Kd", m_args.k_d)
          .defaultValue("3.0")
          .description("Kd gain");

          param("Bandwidth", m_args.bandwidth)
          .defaultValue("5.0")
          .description("Sliding surface bandwidth");

          param("Roll Time Const", m_args.roll_tc)
          .defaultValue("0.1")
          .description("Estimated aircraft roll time constant");

          param("Maximum Bank", m_args.max_bank)
          .units(Units::Degree)
          .minimumValue("5")
          .maximumValue("45")
          .defaultValue("30")
          .description("Limit for absolute value of output bank angle reference");

          param("Use controller", m_args.use_controller)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .defaultValue("false")
          .description("Use this controller for maneuver");

          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::EstimatedStreamVelocity>(this);
       }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          m_bank_lim = Angles::radians(m_args.max_bank);
          m_lookahead = m_args.lookahead;
          m_lookahead_sq = m_lookahead * m_lookahead;
        }

        void
        onPathActivation(void)
        {
          if (!m_args.use_controller)
            return;
          // Activate bank (roll) controller.
          enableControlLoops(IMC::CL_ROLL);
        }

        void
        consume(const IMC::IndicatedSpeed* airspeed)
        {
          m_airspeed = airspeed->value;
        }

        void
        consume(const IMC::EstimatedStreamVelocity* wind)
        {
          m_W_x = wind->x;
          m_W_y = wind->y;
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          spew("Step start");

          if (!m_args.use_controller)
            return;

          // Check if airspeed is larger than zero
          if (m_airspeed <= 0)
          {
            war("No waypoint tracking control update: Airspeed <= 0!");
            return;
          }

          // Converting wind to path reference frame
          double w_x = m_W_x, w_y = m_W_y;
          Angles::rotate(ts.track_bearing, false, w_x, w_y);

          double speed_g = ts.speed;
          double g_speed_sq = speed_g * speed_g;

          double chi = ts.course_error;
          double phi = state.phi;

          // Converting heading to path reference frame
          double psi = Angles::normalizeRadian(state.psi - ts.track_bearing);
          double cos_phi = std::cos(phi);

          double tmp = m_airspeed + std::cos(psi) * w_x + std::sin(psi) * w_y;
          double chi_dot = Math::c_gravity * std::tan(phi) * tmp / g_speed_sq;

          double y = ts.track_pos.y;
          double y_sq = y * y;
          double y_dot = ts.track_vel.y;

          // LOS
          double chi_d = -std::atan(y/m_lookahead);
          double chi_d_dot = -(m_lookahead/(m_lookahead_sq + y_sq)) * y_dot;

          double chi_err = chi - chi_d;
          double chi_err_dot = chi_dot - chi_d_dot;

          // SMC
          double s = chi_err_dot + 2 * m_args.lambda * chi_err;
          double sat = std::tanh(s/m_args.bandwidth);

          double u = -m_args.lambda * chi_err_dot - m_args.rho * sat - m_args.k_d * s;

          m_bank.value = (u * g_speed_sq * cos_phi * cos_phi * m_args.roll_tc) / (Math::c_gravity * tmp);

          // Output - Bank angle command, constrained
          m_bank.value = trimValue(m_bank.value, -m_bank_lim, m_bank_lim);

          // Send to bus
          dispatch(m_bank);
          spew("DesiredBank = %3.2f deg", Math::Angles::degrees(m_bank.value));
        }
      };
    }
  }
}

DUNE_TASK
