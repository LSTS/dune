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

// ISO C++ 98 headers.
#include <cmath>
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Nonlinear.hpp"
#include "NMPC.hpp"

using DUNE_NAMESPACES;

namespace Control
{
  namespace AUV
  {
    namespace Depth
    {
      //! Nonlinear depth controllers, selected by "Control Law": backstepping,
      //! sliding mode with a boundary layer, super-twisting sliding mode and
      //! nonlinear model predictive control. All use the nominal heave and
      //! pitch model with observers of the trim (buoyancy) and of a pitch
      //! offset. Backstepping and both sliding mode laws add a predictor over
      //! the delay of the pitch loop and an inversion of the pitch loop; the
      //! model predictive controller predicts through the pitch loop and its
      //! delay and optimises the pitch reference (Gauss-Newton SQP).
      //!
      //! The task turns the depth reference into a pitch reference; the
      //! autopilot (Control.AUV.Attitude with "External Depth Controller"
      //! enabled) tracks it with its pitch loop. It commands pitch only while
      //! it is active ("Active", e.g. from the start actions of a plan) and
      //! the depth loop is enabled with a depth reference. Activate only one
      //! depth controller of this kind at a time.
      //!
      //! The model parameters are those of the identified vehicle model and
      //! the gains of the pitch loop are those deployed in the autopilot.
      //!
      //! @author João Bogas
      namespace Nonlinear
      {
        //! %Task arguments.
        struct Arguments
        {
          //! Controller parameters.
          Nonlinear::Arguments ctl;
          //! Parameters of the model predictive controller.
          NMPC::Arguments mpc;
          //! Control law.
          std::string law;
          //! Log controller parcels.
          bool log_parcels;
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
          //! Pitch reference.
          IMC::DesiredPitch m_pitch;
          //! Controller (backstepping and sliding mode laws).
          Nonlinear m_ctl;
          //! Model predictive controller.
          NMPC m_mpc;
          //! Model predictive control law selected.
          bool m_use_mpc;
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
            m_use_mpc(false),
            m_first(true)
          {
            paramActive(Tasks::Parameter::SCOPE_MANEUVER, Tasks::Parameter::VISIBILITY_USER, false);

            param("Control Law", m_args.law)
            .values("Backstepping, Sliding Mode, Super-Twisting, Model Predictive")
            .defaultValue("Backstepping")
            .scope(Tasks::Parameter::SCOPE_PLAN)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .description("Backstepping, first-order sliding mode with a boundary layer, "
                         "super-twisting sliding mode or nonlinear model predictive control");

            param("Heave Gain", m_args.ctl.obs.heave_gain)
            .defaultValue("1.0018")
            .minimumValue("0.3")
            .maximumValue("2.0")
            .description("Model: depth rate per unit of forward speed times sin(pitch) (g)");

            param("Heave Lag", m_args.ctl.obs.heave_lag)
            .defaultValue("0.25")
            .minimumValue("0.05")
            .units(Units::Second)
            .description("Model: lag from pitch to depth rate (Tz)");

            param("Pitch Damping", m_args.ctl.obs.pitch_damping)
            .defaultValue("2.0747")
            .minimumValue("0.0")
            .description("Model: pitch rate damping per unit of forward speed (a), in 1/m");

            param("Pitch Fin Gain", m_args.ctl.obs.pitch_fin_gain)
            .defaultValue("0.8666")
            .minimumValue("0.01")
            .description("Model: pitch acceleration per radian of fin command and "
                         "squared forward speed (b), in rad/m^2");

            param("Pitch Restoring Stiffness", m_args.ctl.obs.pitch_stiffness)
            .defaultValue("0.1157")
            .minimumValue("0.0")
            .description("Model: pitch restoring acceleration per sin(pitch) (c), in rad/s^2");

            param("Pitch Loop Delay", m_args.ctl.obs.pitch_delay)
            .defaultValue("0.3")
            .minimumValue("0.0")
            .maximumValue("2.0")
            .units(Units::Second)
            .description("Model: delay from fin command to fin (tau)");

            param("Pitch Controller -- Proportional Gain", m_args.ctl.obs.pitch_kp)
            .defaultValue("1.5")
            .minimumValue("0.01")
            .description("Proportional gain of the pitch controller deployed in the autopilot");

            param("Pitch Controller -- Derivative Gain", m_args.ctl.obs.pitch_kd)
            .defaultValue("0.5")
            .minimumValue("0.0")
            .description("Derivative gain of the pitch controller deployed in the autopilot");

            param("Pitch Controller -- Reference Derivative", m_args.ctl.obs.pitch_ref_rate)
            .defaultValue("true")
            .description("True when the pitch controller of the autopilot differentiates the pitch "
                         "reference (Control.AUV.Attitude with 'Altitude Control -- Enabled')");

            param("Control Period", m_args.ctl.obs.timestep)
            .defaultValue("0.05")
            .minimumValue("0.01")
            .maximumValue("1.0")
            .units(Units::Second)
            .description("Period of the estimated state, at which the model is discretised");

            param("Minimum Scheduled Speed", m_args.ctl.obs.speed_min)
            .defaultValue("0.3")
            .minimumValue("0.1")
            .units(Units::MeterPerSecond)
            .description("Lowest forward speed with a model. Slower speeds use this model");

            param("Maximum Scheduled Speed", m_args.ctl.obs.speed_max)
            .defaultValue("2.0")
            .minimumValue("0.1")
            .units(Units::MeterPerSecond)
            .description("Highest forward speed with a model. Faster speeds use this model");

            param("Speed Schedule Step", m_args.ctl.obs.speed_step)
            .defaultValue("0.02")
            .minimumValue("0.005")
            .units(Units::MeterPerSecond)
            .description("One model is computed per step of forward speed. The model of the "
                         "nearest speed to the measured one is used");

            param("Observer -- Depth Bandwidth", m_args.ctl.obs.depth_pole)
            .defaultValue("1.9181")
            .minimumValue("0.01")
            .description("Double pole of the depth and depth rate of the heave observer, in rad/s");

            param("Observer -- Trim Bandwidth", m_args.ctl.obs.trim_pole)
            .defaultValue("0.3357")
            .minimumValue("0.001")
            .description("Pole of the trim (buoyancy) of the heave observer, in rad/s");

            param("Observer -- Pitch Bandwidth", m_args.ctl.obs.pitch_pole)
            .defaultValue("2.3920")
            .minimumValue("0.01")
            .description("Double pole of the pitch and pitch rate of the pitch observer, in rad/s");

            param("Observer -- Pitch Offset Bandwidth", m_args.ctl.obs.offset_pole)
            .defaultValue("0.1790")
            .minimumValue("0.001")
            .description("Pole of the pitch offset of the pitch observer, in rad/s");

            param("Pitch Interface -- Natural Frequency", m_args.ctl.obs.pitch_stiffness_target)
            .defaultValue("1.5779")
            .minimumValue("0.01")
            .description("Natural frequency of the pitch error with the inversion of the "
                         "pitch loop, in rad/s");

            param("Command Filter -- Bandwidth", m_args.ctl.filter_bandwidth)
            .defaultValue("2.3668")
            .minimumValue("0.01")
            .description("Bandwidth of the command filter of the desired pitch, in rad/s");

            param("Command Filter -- Maximum Rate", m_args.ctl.filter_rate)
            .defaultValue("10.0")
            .minimumValue("0.1")
            .units(Units::DegreePerSecond)
            .description("Rate limit of the command filter of the desired pitch");

            param("Backstepping -- Depth Gain", m_args.ctl.bs_k1)
            .defaultValue("0.3836")
            .minimumValue("0.0")
            .description("Gain k1 of the depth error (inside the rate limits), in 1/s");

            param("Backstepping -- Rate Gain", m_args.ctl.bs_k2)
            .defaultValue("1.2788")
            .minimumValue("0.0")
            .description("Gain k2 of the depth rate error, in 1/s");

            param("Sliding Mode -- Depth Gain", m_args.ctl.sm_lambda)
            .defaultValue("0.2877")
            .minimumValue("0.0")
            .description("Depth rate reference per meter of depth error (lambda) of both "
                         "sliding mode laws, in 1/s");

            param("Sliding Mode -- Switching Gain", m_args.ctl.sm_gain)
            .defaultValue("0.35123")
            .minimumValue("0.0")
            .description("Switching gain K of the boundary layer law, in m/s^2");

            param("Sliding Mode -- Boundary Layer", m_args.ctl.sm_layer)
            .defaultValue("0.18311")
            .minimumValue("0.0001")
            .units(Units::MeterPerSecond)
            .description("Boundary layer Phi of the boundary layer law");

            param("Super-Twisting -- Proportional Gain", m_args.ctl.st_k1)
            .defaultValue("0.36537")
            .minimumValue("0.0")
            .description("Gain k1 of the square root term, in m^1/2/s^3/2");

            param("Super-Twisting -- Integral Gain", m_args.ctl.st_k2)
            .defaultValue("1.022e-3")
            .minimumValue("0.0")
            .description("Gain k2 of the integral term, in m/s^3");

            param("Super-Twisting -- Boundary Layer", m_args.ctl.st_layer)
            .defaultValue("0.03628")
            .minimumValue("0.0001")
            .units(Units::MeterPerSecond)
            .description("Sliding variable below which the super-twisting law is linear");

            param("Model Predictive -- Horizon", m_args.mpc.horizon)
            .defaultValue("20.0")
            .minimumValue("2.0")
            .maximumValue("60.0")
            .units(Units::Second)
            .description("Prediction horizon of the model predictive controller");

            param("Model Predictive -- Solve Period", m_args.mpc.solve_period)
            .defaultValue("0.5")
            .minimumValue("0.05")
            .maximumValue("5.0")
            .units(Units::Second)
            .description("Period of the optimisation. The pitch reference ramps to the new "
                         "value during this period");

            param("Model Predictive -- Move Steps", m_args.mpc.moves)
            .defaultValue("0, 1, 2, 3, 4, 5, 6, 8, 10, 13, 17, 22, 28")
            .description("Solve periods of the horizon at which the pitch reference may change "
                         "(move blocking). The first must be 0");

            param("Model Predictive -- Depth Weight", m_args.mpc.depth_weight)
            .defaultValue("1.0")
            .minimumValue("0.001")
            .description("Weight of the depth error (qz), in 1/m^2");

            param("Model Predictive -- Depth Rate Weight", m_args.mpc.rate_weight)
            .defaultValue("61.15")
            .minimumValue("0.0")
            .description("Weight of the depth rate (qv), in 1/(m/s)^2");

            param("Model Predictive -- Move Weight", m_args.mpc.move_weight)
            .defaultValue("24.83")
            .minimumValue("0.001")
            .description("Weight of the changes of the pitch reference (rd), in 1/rad^2");

            param("Model Predictive -- Maximum Pitch Reference Rate", m_args.mpc.move_limit)
            .defaultValue("5.0")
            .minimumValue("0.1")
            .units(Units::DegreePerSecond)
            .description("Maximum rate of the pitch reference");

            param("Model Predictive -- Depth Limit", m_args.mpc.depth_limit)
            .defaultValue("1000.0")
            .minimumValue("1.0")
            .units(Units::Meter)
            .description("Depth the predicted trajectory should not pass (soft constraint). "
                         "The default leaves it without effect");

            param("Model Predictive -- Constraint Weight", m_args.mpc.slack_weight)
            .defaultValue("20.0")
            .minimumValue("0.1")
            .description("Weight of the violation of the depth constraints, relative to the "
                         "depth weight times the number of solve periods of the horizon");

            param("Model Predictive -- Maximum Solver Iterations", m_args.mpc.max_iterations)
            .defaultValue("500")
            .minimumValue("5")
            .maximumValue("5000")
            .description("Iteration budget of one QP. When it is not enough, its last iterate "
                         "is used");

            param("Model Predictive -- Maximum SQP Iterations", m_args.mpc.sqp_iterations)
            .defaultValue("3")
            .minimumValue("1")
            .maximumValue("20")
            .description("Maximum number of Gauss-Newton iterations (QPs) of one optimisation");

            param("Depth Rate Margin", m_args.ctl.rate_margin)
            .defaultValue("0.8")
            .minimumValue("0.1")
            .maximumValue("1.0")
            .description("Fraction of the reachable depth rate used");

            param("Maximum Pitch Reference", m_args.ctl.obs.max_pitch)
            .defaultValue("15.0")
            .minimumValue("1.0")
            .maximumValue("30.0")
            .units(Units::Degree)
            .description("Maximum pitch reference");

            param("Surface Depth", m_args.ctl.obs.surface_depth)
            .defaultValue("0.5")
            .units(Units::Meter)
            .description("Depth below which the trim, pitch offset and super-twisting "
                         "integral estimates are frozen");

            param("Initial Trim", m_args.ctl.initial_trim)
            .defaultValue("-0.103")
            .description("Initial trim estimate H, in m^2/s^2 (depth rate at zero pitch times speed)");

            param("Log PID Parcels", m_args.log_parcels)
            .defaultValue("true")
            .description("Log the commanded pitch (p), the pitch offset estimate (i), the "
                         "rate error of backstepping or the sliding variable (d) and the trim "
                         "estimate (a). Model predictive control: the pitch reference target of "
                         "the last optimisation (p), the pitch offset estimate (i), the solver "
                         "iterations (d, all QPs of the optimisation, negative when the iteration "
                         "budget was not enough) and the trim estimate (a)");

            bind<IMC::ControlLoops>(this);
            bind<IMC::DesiredZ>(this);
            bind<IMC::EstimatedState>(this);
          }

          void
          onUpdateParameters(void)
          {
            if (paramChanged(m_args.ctl.obs.max_pitch))
              m_args.ctl.obs.max_pitch = Angles::radians(m_args.ctl.obs.max_pitch);

            if (paramChanged(m_args.ctl.filter_rate))
              m_args.ctl.filter_rate = Angles::radians(m_args.ctl.filter_rate);

            if (paramChanged(m_args.mpc.move_limit))
              m_args.mpc.move_limit = Angles::radians(m_args.mpc.move_limit);

            if (m_args.law == "Sliding Mode")
              m_args.ctl.law = Nonlinear::LAW_SLIDING_MODE;
            else if (m_args.law == "Super-Twisting")
              m_args.ctl.law = Nonlinear::LAW_SUPER_TWISTING;
            else
              m_args.ctl.law = Nonlinear::LAW_BACKSTEPPING;

            m_use_mpc = (m_args.law == "Model Predictive");

            // The model predictive controller shares the model, observer and
            // limits of the other laws.
            m_args.mpc.obs = m_args.ctl.obs;
            m_args.mpc.initial_trim = m_args.ctl.initial_trim;

            const bool reset_trim = m_first || paramChanged(m_args.ctl.initial_trim);
            const bool valid = m_ctl.setup(m_args.ctl, reset_trim);
            const bool valid_mpc = m_mpc.setup(m_args.mpc, reset_trim);
            m_first = false;

            if (!(m_use_mpc ? valid_mpc : valid))
              throw std::runtime_error(DTR("invalid model or controller parameters"));

            // New parameters during depth control restart it (the estimates
            // are kept).
            stop();
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

            if (!isActive() || !m_loop || !m_depth_mode)
              return;

            if (!m_running)
            {
              if (m_use_mpc)
                m_mpc.activate(msg->depth, msg->theta, msg->u);
              else
                m_ctl.activate(msg->depth, msg->theta, msg->u);

              m_running = true;
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }

            if (m_use_mpc)
            {
              m_pitch.value = m_mpc.step(m_zref, msg->depth, msg->theta, msg->u);
              dispatch(m_pitch);

              if (m_args.log_parcels)
              {
                const fp32_t iterations = static_cast<fp32_t>(m_mpc.getIterations());
                m_parcel.p = static_cast<fp32_t>(m_mpc.getTarget());
                m_parcel.i = static_cast<fp32_t>(m_mpc.getPitchOffset());
                m_parcel.d = m_mpc.isFallback() ? -iterations : iterations;
                m_parcel.a = static_cast<fp32_t>(m_mpc.getTrim());
                dispatch(m_parcel);
              }

              return;
            }

            m_pitch.value = m_ctl.step(m_zref, msg->depth, msg->theta, msg->u);
            dispatch(m_pitch);

            if (m_args.log_parcels)
            {
              const Nonlinear::Debug& dbg = m_ctl.getDebug();
              m_parcel.p = static_cast<fp32_t>(dbg.theta_c);
              m_parcel.i = static_cast<fp32_t>(m_ctl.getPitchOffset());
              m_parcel.d = static_cast<fp32_t>(dbg.error);
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

            if (m_use_mpc)
              debug("%u optimisations, %u iterative, %u over the iteration budget",
                    m_mpc.getSolves(), m_mpc.getIterativeSolves(), m_mpc.getBudgetHits());

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
