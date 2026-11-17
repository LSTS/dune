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
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Cascade.hpp"

using DUNE_NAMESPACES;

namespace Control
{
  namespace AUV
  {
    namespace Depth
    {
      //! Depth controller: cascade from depth error to depth rate reference
      //! to pitch reference, with online estimation of the trim (buoyancy).
      //! With "Trim Estimator" set to "Disturbance Observer", the trim is
      //! estimated by a disturbance observer on the heave model.
      //!
      //! The task turns the depth reference into a pitch reference; the
      //! autopilot (Control.AUV.Attitude with "External Depth Controller"
      //! enabled) tracks it with its pitch loop. It commands pitch only while
      //! it is active ("Active", e.g. from the start actions of a plan) and
      //! the depth loop is enabled with a depth reference. Activate only one
      //! depth controller of this kind at a time.
      //!
      //! @author João Bogas
      namespace Cascade
      {
        //! %Task arguments.
        struct Arguments
        {
          //! Controller parameters.
          Cascade::Arguments ctl;
          //! Trim estimator.
          std::string estimator;
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
          Cascade m_ctl;
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

            param("Trim Estimator", m_args.estimator)
            .values("Integrator, Disturbance Observer")
            .defaultValue("Integrator")
            .scope(Tasks::Parameter::SCOPE_PLAN)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .description("Estimate the trim with an integrator of the error of the model depth "
                         "rate or with a disturbance observer on the heave model");

            param("Heave Gain", m_args.ctl.heave_gain)
            .defaultValue("1.0")
            .minimumValue("0.3")
            .maximumValue("2.0")
            .description("Depth rate per unit of forward speed times sin(pitch)");

            param("Heave Lag", m_args.ctl.heave_lag)
            .defaultValue("0.5")
            .minimumValue("0.05")
            .units(Units::Second)
            .description("Lag from pitch to depth rate");

            param("Heave Moving Average Samples", m_args.ctl.heave_samples)
            .defaultValue("40")
            .description("Samples of the depth rate moving average of the navigation. "
                         "Use 0 when the depth rate is not averaged (e.g. from an INS)");

            param("Depth Gain", m_args.ctl.depth_gain)
            .defaultValue("0.2")
            .minimumValue("0.0")
            .description("Depth rate demanded per meter of depth error");

            param("Trim Estimator Gain", m_args.ctl.trim_gain)
            .defaultValue("0.3")
            .minimumValue("0.0")
            .description("Bandwidth of the trim (buoyancy) estimator, in rad/s");

            param("Pitch Lead Gain", m_args.ctl.lead_gain)
            .defaultValue("1.0")
            .minimumValue("0.0")
            .maximumValue("3.0")
            .description("Gain on the error between desired and measured pitch");

            param("Pitch Lead Filter", m_args.ctl.lead_filter)
            .defaultValue("0.0")
            .minimumValue("0.0")
            .maximumValue("5.0")
            .units(Units::Second)
            .description("Time constant of the low-pass filter of the lead term. Use it when "
                         "the pitch loop differentiates the pitch reference, 0 to disable");

            param("Pitch Trim Gain", m_args.ctl.pitch_trim_gain)
            .defaultValue("0.04")
            .minimumValue("0.0")
            .description("Integral gain on the error between desired and measured pitch, in rad/s");

            param("Pitch Trim Limit", m_args.ctl.pitch_trim_limit)
            .defaultValue("8.0")
            .minimumValue("0.0")
            .units(Units::Degree)
            .description("Limit of the pitch tracking trim");

            param("Pitch Trim Freeze Error", m_args.ctl.pitch_trim_freeze)
            .defaultValue("4.0")
            .minimumValue("0.0")
            .units(Units::Degree)
            .description("Pitch error above which the pitch tracking trim is frozen");

            param("Maximum Pitch Reference", m_args.ctl.max_pitch)
            .defaultValue("15.0")
            .minimumValue("1.0")
            .maximumValue("30.0")
            .units(Units::Degree)
            .description("Maximum pitch reference");

            param("Extra Desired Pitch", m_args.ctl.extra_desired_pitch)
            .defaultValue("5.0")
            .minimumValue("0.0")
            .units(Units::Degree)
            .description("Desired pitch allowed beyond the maximum pitch reference, "
                         "so that pitch offsets do not reduce the reachable pitch");

            param("Reachable Pitch Down", m_args.ctl.reach_down)
            .defaultValue("15.0")
            .minimumValue("1.0")
            .units(Units::Degree)
            .description("Nose down pitch reached with the maximum pitch reference");

            param("Reachable Pitch Up", m_args.ctl.reach_up)
            .defaultValue("15.0")
            .minimumValue("1.0")
            .units(Units::Degree)
            .description("Nose up pitch reached with the maximum pitch reference");

            param("Depth Rate Margin", m_args.ctl.rate_margin)
            .defaultValue("0.8")
            .minimumValue("0.1")
            .maximumValue("1.0")
            .description("Fraction of the reachable depth rate used");

            param("Surface Depth", m_args.ctl.surface_depth)
            .defaultValue("0.5")
            .units(Units::Meter)
            .description("Depth below which the estimates are frozen");

            param("Minimum Speed", m_args.ctl.min_speed)
            .defaultValue("0.3")
            .minimumValue("0.1")
            .units(Units::MeterPerSecond)
            .description("Minimum forward speed used in the model");

            param("Initial Trim", m_args.ctl.initial_trim)
            .defaultValue("0.0")
            .description("Initial trim estimate H, in m^2/s^2 (depth rate at zero pitch times speed)");

            param("Disturbance Observer -- Filter Time", m_args.ctl.observer_filter)
            .defaultValue("0.78")
            .minimumValue("0.05")
            .maximumValue("10.0")
            .units(Units::Second)
            .description("Time constant of the third order filter of the disturbance observer");

            param("Log PID Parcels", m_args.log_parcels)
            .defaultValue("true")
            .description("Log desired pitch (p), pitch trim (i), lead term (d) and trim estimate (a), "
                         "with either trim estimator");

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
            if (paramChanged(m_args.ctl.pitch_trim_limit))
              m_args.ctl.pitch_trim_limit = Angles::radians(m_args.ctl.pitch_trim_limit);

            if (paramChanged(m_args.ctl.pitch_trim_freeze))
              m_args.ctl.pitch_trim_freeze = Angles::radians(m_args.ctl.pitch_trim_freeze);

            if (paramChanged(m_args.ctl.max_pitch))
              m_args.ctl.max_pitch = Angles::radians(m_args.ctl.max_pitch);

            if (paramChanged(m_args.ctl.extra_desired_pitch))
              m_args.ctl.extra_desired_pitch = Angles::radians(m_args.ctl.extra_desired_pitch);

            if (paramChanged(m_args.ctl.reach_down))
              m_args.ctl.reach_down = Angles::radians(m_args.ctl.reach_down);

            if (paramChanged(m_args.ctl.reach_up))
              m_args.ctl.reach_up = Angles::radians(m_args.ctl.reach_up);

            m_args.ctl.disturbance_observer = (m_args.estimator == "Disturbance Observer");

            m_ctl.setup(m_args.ctl, m_first || paramChanged(m_args.ctl.initial_trim));
            m_first = false;

            // A new trim estimator during depth control restarts it (the
            // estimates are kept).
            if (paramChanged(m_args.estimator) || paramChanged(m_args.ctl.observer_filter))
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
              m_ctl.activate(msg->depth, msg->u);
              m_running = true;
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }

            m_pitch.value = m_ctl.step(timestep, m_zref, msg->depth, rate, msg->theta, msg->u);
            dispatch(m_pitch);

            if (m_args.log_parcels)
            {
              m_parcel.p = m_ctl.getDebug().theta_des;
              m_parcel.i = m_ctl.getPitchTrim();
              m_parcel.d = m_ctl.getDebug().lead;
              m_parcel.a = m_ctl.getTrim();
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
