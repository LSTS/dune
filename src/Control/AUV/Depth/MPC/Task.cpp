//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "MPC.hpp"

using DUNE_NAMESPACES;

namespace Control
{
  namespace AUV
  {
    namespace Depth
    {
      //! Depth controller: linear model predictive control at pitch
      //! reference level, with a Kalman filter that estimates the trim
      //! (buoyancy) and a pitch offset. The depth reference is held along
      //! the horizon (no preview).
      //!
      //! The task turns the depth reference into a pitch reference; the
      //! autopilot (Control.AUV.Attitude with "External Depth Controller"
      //! enabled) tracks it with its pitch loop. It commands pitch only while
      //! it is active ("Active", e.g. from the start actions of a plan) and
      //! the depth loop is enabled with a depth reference. Activate only one
      //! depth controller of this kind at a time.
      //!
      //! The model parameters are those of the identified vehicle model
      //! and the gains of the pitch loop are those deployed in the
      //! autopilot: the controller predicts with them, it does not set them.
      //!
      //! The models of the speed schedule are computed when the
      //! parameters change, which takes a few milliseconds per speed on a
      //! desktop computer.
      //!
      //! @author João Bogas
      namespace MPC
      {
        //! %Task arguments.
        struct Arguments
        {
          //! Controller parameters.
          MPC::Arguments ctl;
          //! Log controller parcels.
          bool log_parcels;
          //! Nominal time step.
          double nominal_step;
        };

        struct Task: public Tasks::Task
        {
          //! Depth loop enabled.
          bool m_loop;
          //! Vertical reference is a depth.
          bool m_depth_mode;
          //! Depth reference.
          double m_zref;
          //! Commanding pitch.
          bool m_running;
          //! Control loops scope.
          uint32_t m_scope_ref;
          //! Time between estimated states.
          Time::Delta m_delta;
          //! Pitch reference.
          IMC::DesiredPitch m_pitch;
          //! Controller.
          MPC m_ctl;
          //! Controller parcels.
          IMC::ControlParcel m_parcel;
          //! True until the first parameter update.
          bool m_first;
          //! Task arguments.
          Arguments m_args;

          Task(const std::string& name, Tasks::Context& ctx):
            Tasks::Task(name, ctx),
            m_loop(false),
            m_depth_mode(false),
            m_zref(0.0),
            m_running(false),
            m_scope_ref(0),
            m_first(true)
          {
            paramActive(Tasks::Parameter::SCOPE_MANEUVER, Tasks::Parameter::VISIBILITY_USER, false);

            param("Heave Gain", m_args.ctl.heave_gain)
            .defaultValue("1.0018")
            .minimumValue("0.3")
            .maximumValue("2.0")
            .description("Model: depth rate per unit of forward speed times sin(pitch) (g)");

            param("Heave Lag", m_args.ctl.heave_lag)
            .defaultValue("0.25")
            .minimumValue("0.05")
            .units(Units::Second)
            .description("Model: lag from pitch to depth rate (Tz)");

            param("Pitch Damping", m_args.ctl.pitch_damping)
            .defaultValue("2.0747")
            .minimumValue("0.0")
            .description("Model: pitch rate damping per unit of forward speed (a), in 1/m");

            param("Pitch Fin Gain", m_args.ctl.pitch_fin_gain)
            .defaultValue("0.8666")
            .minimumValue("0.01")
            .description("Model: pitch acceleration per radian of fin command and "
                         "squared forward speed (b), in rad/m^2");

            param("Pitch Restoring Stiffness", m_args.ctl.pitch_stiffness)
            .defaultValue("0.1157")
            .minimumValue("0.0")
            .description("Model: pitch restoring acceleration per sin(pitch) (c), in rad/s^2");

            param("Pitch Loop Delay", m_args.ctl.pitch_delay)
            .defaultValue("0.3")
            .minimumValue("0.0")
            .maximumValue("2.0")
            .units(Units::Second)
            .description("Model: delay from fin command to fin (tau)");

            param("Pitch Controller -- Proportional Gain", m_args.ctl.pitch_kp)
            .defaultValue("1.5")
            .minimumValue("0.01")
            .description("Proportional gain of the pitch controller deployed in the autopilot");

            param("Pitch Controller -- Derivative Gain", m_args.ctl.pitch_kd)
            .defaultValue("0.5")
            .minimumValue("0.0")
            .description("Derivative gain of the pitch controller deployed in the autopilot");

            param("Pitch Controller -- Reference Derivative", m_args.ctl.pitch_ref_rate)
            .defaultValue("true")
            .description("True when the pitch controller of the autopilot differentiates the pitch "
                         "reference (Control.AUV.Attitude with 'Altitude Control -- Enabled')");

            param("Control Period", m_args.ctl.timestep)
            .defaultValue("0.05")
            .minimumValue("0.01")
            .maximumValue("1.0")
            .units(Units::Second)
            .description("Period of the estimated state, at which the model is discretised");

            param("Minimum Scheduled Speed", m_args.ctl.speed_min)
            .defaultValue("0.3")
            .minimumValue("0.1")
            .units(Units::MeterPerSecond)
            .description("Lowest forward speed with a model. Slower speeds use this model");

            param("Maximum Scheduled Speed", m_args.ctl.speed_max)
            .defaultValue("2.0")
            .minimumValue("0.1")
            .units(Units::MeterPerSecond)
            .description("Highest forward speed with a model. Faster speeds use this model");

            param("Speed Schedule Step", m_args.ctl.speed_step)
            .defaultValue("0.02")
            .minimumValue("0.005")
            .units(Units::MeterPerSecond)
            .description("One model is computed per step of forward speed. The model of the "
                         "nearest speed to the measured one is used");

            param("Horizon", m_args.ctl.horizon)
            .defaultValue("20.0")
            .minimumValue("2.0")
            .maximumValue("60.0")
            .units(Units::Second)
            .description("Prediction horizon");

            param("Solve Period", m_args.ctl.solve_period)
            .defaultValue("0.5")
            .minimumValue("0.05")
            .maximumValue("5.0")
            .units(Units::Second)
            .description("Period of the optimisation. The pitch reference ramps to the new "
                         "value during this period");

            param("Move Steps", m_args.ctl.moves)
            .defaultValue("0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 17, 22, 28")
            .description("Solve periods of the horizon at which the pitch reference may change "
                         "(move blocking). The first must be 0");

            param("Depth Weight", m_args.ctl.depth_weight)
            .defaultValue("1.0")
            .minimumValue("0.001")
            .description("Weight of the depth error (qz), in 1/m^2");

            param("Depth Rate Weight", m_args.ctl.rate_weight)
            .defaultValue("61.15")
            .minimumValue("0.0")
            .description("Weight of the depth rate (qv), in 1/(m/s)^2");

            param("Move Weight", m_args.ctl.move_weight)
            .defaultValue("24.83")
            .minimumValue("0.001")
            .description("Weight of the changes of the pitch reference (rd), in 1/rad^2");

            param("Maximum Pitch Reference Rate", m_args.ctl.move_limit)
            .defaultValue("5.0")
            .minimumValue("0.1")
            .units(Units::DegreePerSecond)
            .description("Maximum rate of the pitch reference");

            param("Trim Estimator Time Constant", m_args.ctl.trim_time)
            .defaultValue("2.979")
            .minimumValue("0.2")
            .maximumValue("50.0")
            .units(Units::Second)
            .description("Time constant of the trim (buoyancy) estimate of the Kalman filter");

            param("Pitch Offset Estimator Time Constant", m_args.ctl.offset_time)
            .defaultValue("5.586")
            .minimumValue("0.2")
            .maximumValue("50.0")
            .units(Units::Second)
            .description("Time constant of the pitch offset estimate of the Kalman filter");

            param("Maximum Pitch Reference", m_args.ctl.max_pitch)
            .defaultValue("15.0")
            .minimumValue("1.0")
            .maximumValue("30.0")
            .units(Units::Degree)
            .description("Maximum pitch reference");

            param("Surface Depth", m_args.ctl.surface_depth)
            .defaultValue("0.5")
            .units(Units::Meter)
            .description("Depth below which the trim and pitch offset estimates are frozen");

            param("Initial Trim", m_args.ctl.initial_trim)
            .defaultValue("-0.103")
            .description("Initial trim estimate H, in m^2/s^2 (depth rate at zero pitch times speed)");

            param("Depth Limit", m_args.ctl.depth_limit)
            .defaultValue("1000.0")
            .minimumValue("1.0")
            .units(Units::Meter)
            .description("Depth the predicted trajectory should not pass (soft constraint). "
                         "The default leaves it without effect");

            param("Constraint Weight", m_args.ctl.slack_weight)
            .defaultValue("20.0")
            .minimumValue("0.1")
            .description("Weight of the violation of the depth constraints, relative to the "
                         "depth weight times the number of solve periods of the horizon");

            param("Maximum Solver Iterations", m_args.ctl.max_iterations)
            .defaultValue("500")
            .minimumValue("5")
            .maximumValue("5000")
            .description("Iteration budget of one optimisation. When it is not enough, the "
                         "previous plan is followed for one more solve period");

            param("Log PID Parcels", m_args.log_parcels)
            .defaultValue("true")
            .description("Log the pitch reference target of the last optimisation (p), the pitch "
                         "offset estimate (i), the solver iterations (d, negative when the "
                         "iteration budget was not enough) and the trim estimate (a)");

            param("Nominal Time Step", m_args.nominal_step)
            .defaultValue("0.05")
            .minimumValue("0.01")
            .maximumValue("1.0")
            .units(Units::Second)
            .description("Time step used when the time between estimated states is not valid");

            bind<IMC::ControlLoops>(this);
            bind<IMC::DesiredZ>(this);
            bind<IMC::EstimatedState>(this);
          }

          void
          onUpdateParameters(void)
          {
            if (paramChanged(m_args.ctl.max_pitch))
              m_args.ctl.max_pitch = Angles::radians(m_args.ctl.max_pitch);

            if (paramChanged(m_args.ctl.move_limit))
              m_args.ctl.move_limit = Angles::radians(m_args.ctl.move_limit);

            const double start = Clock::get();
            const bool valid = m_ctl.setup(m_args.ctl, m_first || paramChanged(m_args.ctl.initial_trim));
            m_first = false;

            if (!valid)
              throw std::runtime_error(DTR("invalid model or controller parameters"));

            debug("%u models computed in %0.2f s", m_ctl.getModelCount(), Clock::get() - start);
          }

          void
          onResourceInitialization(void)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }

          void
          onDeactivation(void)
          {
            stop();
          }

          void
          consume(const IMC::ControlLoops* msg)
          {
            if (!(msg->mask & IMC::CL_DEPTH))
              return;

            if (msg->scope_ref < m_scope_ref)
              return;

            m_scope_ref = msg->scope_ref;
            m_loop = (msg->enable == IMC::ControlLoops::CL_ENABLE);

            if (!m_loop)
            {
              m_depth_mode = false;
              stop();
            }
          }

          void
          consume(const IMC::DesiredZ* msg)
          {
            if (msg->getSource() != getSystemId())
              return;

            m_depth_mode = (msg->z_units == IMC::Z_DEPTH);
            m_zref = msg->value;

            if (!m_depth_mode)
              stop();
          }

          //! Run the controller while the task is active, the depth loop is
          //! enabled and the vertical reference is a depth.
          void
          consume(const IMC::EstimatedState* msg)
          {
            if (msg->getSource() != getSystemId())
              return;

            double timestep = m_delta.getDelta();
            if (timestep <= 0.0 || timestep > 4.0 * m_args.nominal_step)
              timestep = m_args.nominal_step;

            if (!isActive() || !m_loop || !m_depth_mode)
              return;

            // Depth rate, as in the autopilot.
            const double rate = -std::sin(msg->theta) * msg->u
                                + std::cos(msg->theta) * (std::sin(msg->phi) * msg->v + std::cos(msg->phi) * msg->w);

            if (!m_running)
            {
              m_ctl.activate(msg->depth, rate, msg->theta);
              m_running = true;
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }

            m_pitch.value = m_ctl.step(m_zref, msg->depth, msg->theta, msg->u);
            dispatch(m_pitch);

            if (m_args.log_parcels)
            {
              const fp32_t iterations = static_cast<fp32_t>(m_ctl.getIterations());
              m_parcel.p = static_cast<fp32_t>(m_ctl.getTarget());
              m_parcel.i = static_cast<fp32_t>(m_ctl.getPitchOffset());
              m_parcel.d = m_ctl.isFallback() ? -iterations : iterations;
              m_parcel.a = static_cast<fp32_t>(m_ctl.getTrim());
              dispatch(m_parcel);
            }
          }

          //! Stop commanding pitch.
          void
          stop(void)
          {
            if (!m_running)
              return;

            m_running = false;
            debug("%u optimisations, %u iterative, %u over the iteration budget",
                  m_ctl.getSolves(), m_ctl.getIterativeSolves(), m_ctl.getBudgetHits());
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
          }

          void
          onMain(void)
          {
            while (!stopping())
              waitForMessages(1.0);
          }
        };
      }
    }
  }
}

DUNE_TASK
