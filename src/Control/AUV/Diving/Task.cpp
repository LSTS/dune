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
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Control
{
  namespace AUV
  {
    constexpr unsigned c_depth_tracking_ma_size = 10;

    //! %Diving supervisor for AUVs.
    //! %Diving is responsible to make sure the vehicle is capable
    //! of submerging by demanding an increase in motor speed.
    //!
    //! @author Pedro Calado
    namespace Diving
    {
      //! State machine states.
      enum MachineStates
      {
        //! Idle doing nothing.
        SM_IDLE,
        //! Checking if vehicle can submerge.
        SM_CHECKING,
        //! Vehicle is submerged.
        SM_SUBMERGED,
        //! Forcing vehicle to submerge.
        SM_FORCING
      };

      //! %Task arguments.
      struct Arguments
      {
        //! Depth threshold to consider submerged.
        float depth_threshold;
        //! Speed tolerance to consider possibility of submergence.
        float speed_tol;
        //! Time after which diving controller kicks in to help submerge.
        double time_solo;
        //! Time step between each increase in speed by diving controller.
        double time_step;
        //! Speed step when helping to submerge.
        double speed_step;
        //! Maximum speed increase in percentage
        unsigned max_increase;
        //! Pitch supervisor entity label.
        std::string pitch_supervisor_elabel;
        //! Starting forced pitch when trying to submerge, in degrees.
        fp32_t start_forced_pitch;
        //! Maximum forced pitch when trying to submerge, in degrees.
        fp32_t max_forced_pitch;
        //! Depth tracking for pitch supervision.
        bool depth_tracking;
        //! Pitch step for forced pitch when trying to submerge.
        fp32_t pitch_step;
        //! Depth rate threshold for depth tracking in pitch supervision, in m/s.
        fp32_t depth_rate;
      };

      class PitchSupervisor: public Entities::StatefulEntity
      {
        //! Active flag.
        bool m_active;
        //! Starting forced pitch when trying to submerge, in degrees.
        float m_start_forced_pitch;
        //! Maximum forced pitch when trying to submerge, in degrees.
        float m_max_forced_pitch;
        //! Pitch ramp duration in seconds.
        float m_ramp_duration;
        //! Pitch ramp step percent.
        float m_ramp_step;
        //! Total time for pitch ramp.
        float m_total_time;
        //! Elapsed time since pitch supervision started.
        float m_elapsed_time;
        //! Desired Pitch message to dispatch.
        IMC::DesiredPitch m_forced_pitch;
        //! Depth tracking.
        bool m_depth_tracking;
        //! Depth.
        MovingAverage<float> m_depth;
        //! Depth rate.
        Derivative<float> m_depth_rate;
        //! Pitch.
        MovingAverage<float> m_pitch;
        //! Depth tracking depth rate threshold, m/s.
        float m_depth_rate_tol;
        //! Depth tracking pitch threshold, rad.
        float m_pitch_tol;

      public:
        PitchSupervisor(Tasks::Task* task, Tasks::Context& ctx):
          Entities::StatefulEntity(task, ctx),
          m_active(false),
          m_start_forced_pitch(0.0),
          m_max_forced_pitch(0.0),
          m_ramp_duration(0.0),
          m_ramp_step(0.0),
          m_depth_tracking(false),
          m_depth(c_depth_tracking_ma_size),
          m_pitch(c_depth_tracking_ma_size),
          m_depth_rate_tol(0.0),
          m_pitch_tol(0.0)
        {
          setState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        start(float start_forced_pitch, float max_forced_pitch,
              float ramp_duration, float ramp_step,
              bool depth_tracking, float depth_rate_tol)
        {
          m_active = (start_forced_pitch >= max_forced_pitch) &&
                     (ramp_duration > 0.0) &&
                     (ramp_step >= 0.0) && (ramp_step <= 1.0) &&
                     (depth_rate_tol >= 0.0);

          if (!m_active)
          {
            setState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            return;
          }

          m_elapsed_time = 0.0f;
          m_ramp_duration = ramp_duration;
          m_ramp_step = ramp_step;
          m_depth_tracking = depth_tracking;
          m_depth.clear();
          m_depth_rate.clear();
          m_pitch.clear();
          m_depth_rate_tol = depth_rate_tol;
          m_start_forced_pitch = ((m_ramp_step == 1.0) ||
                                  (m_ramp_step == 0.0 && m_depth_tracking)) ?
                                 max_forced_pitch : start_forced_pitch;
          m_max_forced_pitch = max_forced_pitch;
          m_pitch_tol = Angles::radians(std::fabs(m_max_forced_pitch - m_start_forced_pitch) * m_ramp_step);

          std::string msg = "active";
          if (m_depth_tracking && m_pitch_tol > 0.0f)
            msg += " | depth tracking";
          else if (m_ramp_step == 1.0f || (m_depth_tracking && m_pitch_tol == 0.0f))
            msg += " | immediate | " + String::str("%.2f", m_start_forced_pitch) + "deg forced pitch";
          else if (m_ramp_step == 0.0f)
            msg += " | progressive | " + String::str("%.2f", m_ramp_duration) + "s ramp";
          else
            msg += " | stepped | " + String::str("%.2f", m_ramp_step * 100.0f) + "% steps | " +
                   String::str("%.2f", m_ramp_duration) + "s ramp";

          setState(IMC::EntityState::ESTA_NORMAL, msg);

          m_owner->debug("starting pitch supervision: start_forced_pitch=%.2f, max_forced_pitch=%.2f, "
                         "ramp_duration=%.2f, ramp_step=%.2f, depth_tracking=%s",
                         m_start_forced_pitch, m_max_forced_pitch, m_ramp_duration,
                         m_ramp_step, m_depth_tracking ? "true" : "false");

          m_forced_pitch.value = Math::Angles::radians(m_start_forced_pitch);
          dispatch(m_forced_pitch);
        }

        void
        stop(void)
        {
          if (!m_active)
            return;

          m_owner->war("Stopping pitch supervision");
          m_active = false;
          setState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        onEstimatedState(const IMC::EstimatedState* msg)
        {
          m_depth_rate.update(m_depth.update(msg->depth));
          m_pitch.update(msg->theta);
        }

        void
        step(float elapsed_time)
        {
          if (!m_active)
            return;

          m_elapsed_time = elapsed_time;
          m_elapsed_time = trimValue(elapsed_time, 0.0f, m_ramp_duration);
          float progress = m_elapsed_time / m_ramp_duration;
          float effective_progress;
          if (m_ramp_step > 0.0f)
          {
            float step_size = m_ramp_step;
            effective_progress = std::floor(progress / step_size) * step_size;
          }
          else
            effective_progress = progress;

          std::string msg = "active";
          if (m_ramp_step == 1.0f)
            return;
          else if (m_ramp_step == 0.0f)
            msg += " | progressive";
          else
            msg += " | stepped";

          float pitch_ref_deg = 0.0f;

          if (m_depth_tracking)
          {
            if (m_pitch_tol == 0.0f)
              return;

            msg += " | depth tracking | depth: " + String::str("%.2f", m_depth) + "m";

            float pitch_error = m_pitch.mean() - m_forced_pitch.value;
            bool tracking_ok = std::fabs(pitch_error) < m_pitch_tol;
            bool diving_enough = m_depth_rate.check() >= m_depth_rate_tol;

            m_owner->spew("depth=%.2f m | pitch_error=%.2f deg | pitch_tol=%.2f deg | depth_rate=%.2f m/s | depth_rate_tol=%.2f m/s",
                          m_depth.mean(), Angles::degrees(pitch_error), Angles::degrees(m_pitch_tol),
                          m_depth_rate.check(), m_depth_rate_tol);

            if (tracking_ok && diving_enough)
            {
              pitch_ref_deg = m_start_forced_pitch +
                              (m_max_forced_pitch - m_start_forced_pitch) * effective_progress;
            }
          }
          else
          {
            pitch_ref_deg = m_start_forced_pitch +
                            (m_max_forced_pitch - m_start_forced_pitch) * effective_progress;
          }

          pitch_ref_deg = trimValue(pitch_ref_deg,
                                    m_max_forced_pitch,
                                    m_start_forced_pitch);

          msg +=  " | pitch reference: " + String::str("%.2f", pitch_ref_deg) + "deg";
          setState(IMC::EntityState::ESTA_NORMAL, msg);

          m_owner->spew("elapsed_time=%.2f | forced_pitch=%.2f",
                        m_elapsed_time, pitch_ref_deg);

          m_forced_pitch.value = Math::Angles::radians(pitch_ref_deg);
          dispatch(m_forced_pitch);
        }
      };


      //! %Motor simulator task
      struct Task: public Tasks::Periodic
      {
        //! Active loops.
        uint32_t m_aloops;
        //! State machine state.
        MachineStates m_mstate;
        //! Forced desired speed.
        IMC::DesiredSpeed m_forced_speed;
        //! Last received desired speed.
        IMC::DesiredSpeed m_dspeed;
        //! Pitch supervisor.
        PitchSupervisor* m_pitch_supervisor;
        //! Last received desired z.
        IMC::DesiredZ m_z_ref;
        //! Number of speed increases
        unsigned m_incs;
        //! Speed amount to increase
        float m_speed_inc;
        //! Timer counter for solo attempt
        Time::Counter<float>* m_counter_solo;
        //! Timer counter for each speed increase step
        Time::Counter<float>* m_counter_step;
        //! Motor's rpms.
        float m_rpm;
        //! Vehicle's depth
        float m_depth;
        //! Vehicle's altitude (if any)
        float m_alt;
        //! Got necessary data to proceed
        bool m_got_data;
        //! On last attempt
        bool m_last_try;
        //! Braking flag
        bool m_braking;
        //! Control loops last reference
        uint32_t m_scope_ref;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_aloops(0),
          m_pitch_supervisor(NULL),
          m_counter_solo(NULL),
          m_counter_step(NULL),
          m_braking(false),
          m_scope_ref(0)
        {
          m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.depth_threshold);
          // Make it double just to be safe for hysteresis purposes
          m_args.depth_threshold *= 2.0;

          param("Speed Tolerance", m_args.speed_tol)
          .defaultValue("200.0")
          .units(Units::RPM)
          .description("Speed tolerance to consider possibility of submergence");

          param("Failure Time", m_args.time_solo)
          .defaultValue("8.0")
          .units(Units::Second)
          .description("Time after which diving controller kicks in to help submerge");

          param("Time Step", m_args.time_step)
          .defaultValue("2.0")
          .units(Units::Second)
          .description("Time step between each increase in speed by diving controller");

          param("Speed Step", m_args.speed_step)
          .defaultValue("0.1")
          .minimumValue("0.0")
          .maximumValue("1.0")
          .description("Speed step when helping to submerge");

          param("Maximum Increase", m_args.max_increase)
          .defaultValue("50")
          .units(Units::Percentage)
          .description("Maximum speed increase in percentage");

          param("Pitch Supervisor - Entity Label", m_args.pitch_supervisor_elabel)
          .defaultValue("")
          .editable(false)
          .description("Entity label for the pitch supervisor. "
                       "This supervisor is responsible for forcing the vehicle's pitch to help submerge. "
                       "If not set, no pitch supervision will be done, during submergence aid.");

          param("Pitch Supervisor - Starting Pitch", m_args.start_forced_pitch)
          .maximumValue("0.0")
          .defaultValue("0.0")
          .units(Units::Degree)
          .description("Starting forced pitch when trying to submerge, in degrees. "
                       "If Maximum Forced Pitch is greater or equal to Starting Forced Pitch,"
                       "this value is not considered. "
                       "This value is ignored if pitch supervision is not enabled. "
                       "Changes to this parameter will only be applied on the next attempt to submerge.");

          param("Pitch Supervisor - Maximum Pitch", m_args.max_forced_pitch)
          .maximumValue("0.0")
          .defaultValue("-15.0")
          .units(Units::Degree)
          .description("Maximum forced pitch when trying to submerge, in degrees. "
                       "If Maximum Forced Pitch is greater or equal to Starting Forced Pitch,"
                       "this value is not considered. "
                       "This value is ignored if pitch supervision is not enabled. "
                       "Changes to this parameter will only be applied on the next attempt to submerge.");

          param("Pitch Supervisor - Depth Tracking", m_args.depth_tracking)
          .defaultValue("false")
          .description("Use depth tracking for pitch supervision. If enabled, the supervisor "
                       "will adjust the forced pitch based on the current depth, aiming to reach the depth threshold. "
                       "This value is ignored if pitch supervision is not enabled. "
                       "Changes to this parameter will only be applied on the next attempt to submerge.");

          param("Pitch Supervisor - Depth Rate", m_args.depth_rate)
          .minimumValue("0.0")
          .defaultValue("0.1")
          .units(Units::MeterPerSecond)
          .description("Depth rate threshold for depth tracking in pitch supervision, in m/s. "
                       "This value is ignored if pitch supervision is not enabled. "
                       "Changes to this parameter will only be applied on the next attempt to submerge.");

          param("Pitch Supervisor - Ramp Step", m_args.pitch_step)
          .minimumValue("0.0")
          .maximumValue("1.0")
          .defaultValue("0.1")
          .description("Ramp step for forced pitch when trying to submerge, in degrees. "
                       "this value is not considered. A value of 0.0 means a progressive ramp, "
                       "while a value of 1.0 means an immediate application of the maximum forced pitch. "
                       "Depth tracking takes precedence over ramping. "
                       "This value is ignored if pitch supervision is not enabled. "
                       "Changes to this parameter will only be applied on the next attempt to submerge.");

          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

          // Register consumers.
          bind<IMC::Brake>(this);
          bind<IMC::Rpm>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::DesiredZ>(this);
          bind<IMC::ControlLoops>(this);
        }

        void
        onEntityReservation(void) override
        {
          if (!m_args.pitch_supervisor_elabel.empty())
            m_pitch_supervisor = reserveEntity<PitchSupervisor>(m_args.pitch_supervisor_elabel);
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
          Memory::clear(m_counter_solo);
          Memory::clear(m_counter_step);
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          m_counter_solo = new Time::Counter<float>(m_args.time_solo);
          m_counter_step = new Time::Counter<float>(m_args.time_step);
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          requestDeactivation();
          reset();
        }

        //! On activation
        void
        onActivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        //! On deactivation
        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        //! Reset all variables
        void
        reset(void)
        {
          m_mstate = SM_IDLE;
          m_rpm = -1.0;
          m_dspeed.clear();
          m_alt = -1.0;
          m_depth = -1.0;
          m_z_ref.clear();

          m_last_try = false;
          m_got_data = false;
          m_incs = 0;
          m_speed_inc = 0.0;

          m_counter_solo->reset();
          m_counter_step->reset();
        }

        void
        consume(const IMC::Brake* msg)
        {
          if (!isActive())
            return;

          // if we are braking reset desired speed and depth references to original values
          if (msg->op == IMC::Brake::OP_START)
          {
            m_braking = true;

            if (m_mstate == SM_FORCING)
            {
              dispatch(m_dspeed);
              dispatch(m_z_ref);
              if (m_pitch_supervisor)
                m_pitch_supervisor->stop();
            }

            //partial reset
            m_last_try = false;

            m_counter_solo->reset();
            m_counter_step->reset();

            m_mstate = SM_IDLE;
          }
          else
          {
            m_braking = false;
          }
        }

        void
        consume(const IMC::Rpm* msg)
        {
          if (!isActive())
            return;

          m_rpm = msg->value;
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          if (!isActive())
            return;

          if (msg->getSource() != getSystemId())
            return;

          m_depth = msg->depth;
          m_alt = msg->alt;

          if (m_pitch_supervisor)
            m_pitch_supervisor->onEstimatedState(msg);
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          if (!isActive())
            return;

          m_dspeed = *msg;
          m_dspeed.setSourceEntity(getEntityId());
        }

        void
        consume(const IMC::DesiredZ* msg)
        {
          if (!isActive())
            return;

          m_z_ref = *msg;
        }

        void
        consume(const IMC::ControlLoops* msg)
        {
          uint32_t loops = msg->mask & (IMC::CL_DEPTH | IMC::CL_ALTITUDE | IMC::CL_SPEED);

          if (!loops)
            return;

          if (msg->scope_ref < m_scope_ref)
            return;

          m_scope_ref = msg->scope_ref;

          bool was_active = isActive();

          if (msg->enable)
          {
            if (!isActive())
            {
              requestActivation();
              m_aloops = 0;
            }
            m_aloops |= loops;
          }
          else
          {
            m_aloops &= ~loops;

            if (!m_aloops)
              requestDeactivation();
          }

          if (was_active != isActive())
          {
            debug("%s", isActive() ? "enabling" : "disabling");
            if (msg->enable)
              requestActivation();
            else
              requestDeactivation();

            reset();
          }
        }

        void
        task(void)
        {
          if (!isActive())
            return;

          if (!m_got_data)
          {
            // Check if we have depth or altitude commands/measurements.
            if (m_z_ref.z_units == IMC::Z_DEPTH)
            {
              if ((m_depth < 0.0) || (m_z_ref.value < 0.0))
                return;
            }
            else if (m_z_ref.z_units == IMC::Z_ALTITUDE)
            {
              if ((m_alt < 0.0) || (m_z_ref.value < 0.0))
                return;
            }
            else
            {
              return;
            }

            // Check if we have speed reference and measurement
            if ((m_dspeed.value < 0.0) || (m_rpm < 0.0))
              return;

            m_got_data = true;
          }

          // if we've given up on trying to submerge
          if ((getEntityState() == IMC::EntityState::ESTA_ERROR) || m_braking)
            return;

          // Run state machine
          switch (m_mstate)
          {
            case SM_IDLE:
              onIdle();
              break;
            case SM_CHECKING:
              onChecking();
              break;
            case SM_SUBMERGED:
              onSubmerged();
              break;
            case SM_FORCING:
              onForcing();
              break;
            default:
              break;
          }
        }

        //! Idle state machine routine
        void
        onIdle(void)
        {
          if ((m_depth < m_args.depth_threshold) && (m_z_ref.value > m_args.depth_threshold)
              && (m_dspeed.value > 0.0) && (m_rpm > m_args.speed_tol))
          {
            m_mstate = SM_CHECKING;
            m_counter_solo->reset();
            debug("checking diving attempt");
          }
        }

        //! Checking state machine routine
        void
        onChecking(void)
        {
          if (!hasZReference() || (m_dspeed.value == 0.0))
          {
            m_counter_solo->reset();
            m_mstate = SM_IDLE;
            debug("no longer attempting to submerge");
          }

          if (m_depth > m_args.depth_threshold)
          {
            m_mstate = SM_SUBMERGED;
            debug("vehicle submerged");
          }

          if (m_counter_solo->overflow())
          {
            m_counter_step->reset();
            m_mstate = SM_FORCING;
            increaseSpeed();
          }
        }

        //! Submerged state machine routine
        void
        onSubmerged(void)
        {
          if (!hasZReference())
          {
            m_mstate = SM_IDLE;
            debug("no longer attempting to submerge");
          }

          // divide by two as an hysteresis mechanism
          if (m_depth < m_args.depth_threshold / 2.0)
          {
            m_counter_solo->reset();
            m_mstate = SM_CHECKING;
            debug("no longer submerged, still attempting");
          }
        }

        //! Forcing state machine routine
        void
        onForcing(void)
        {
          if (!hasZReference() || (m_dspeed.value == 0.0))
          {
            m_mstate = SM_IDLE;

            m_incs = 0;
            m_last_try = false;
            debug("no longer attempting to submerge");
            return;
          }

          if (m_depth > m_args.depth_threshold)
          {
            m_mstate = SM_SUBMERGED;

            m_incs = 0;
            m_last_try = false;
            dispatch(m_dspeed);
            dispatch(m_z_ref);

            if (m_pitch_supervisor)
              m_pitch_supervisor->stop();

            debug("vehicle submerged, speed and depth set to original values");
            return;
          }

          if (!m_counter_step->overflow())
          {
            if (m_pitch_supervisor)
              m_pitch_supervisor->step(m_counter_step->getElapsed());

            return;
          }

          if (!increaseSpeed())
          {
            if (!m_last_try)
            {
              // give it a few more seconds before giving up
              m_counter_solo->reset();
              m_last_try = true;
            }
            else if (m_counter_solo->overflow())
            {
              std::string desc = DTR("failed to submerge");
              setEntityState(IMC::EntityState::ESTA_ERROR, desc);
              err("%s", desc.c_str());

              // reset to original speed and depth references
              dispatch(m_dspeed);
              dispatch(m_z_ref);

              if (m_pitch_supervisor)
                m_pitch_supervisor->stop();

              reset();
              return;
            }
          }
        }

        //! Increase desired speed
        //! @return true if was able to increase speed, false otherwise
        bool
        increaseSpeed(void)
        {
          if (m_incs == 0)
          {
            // use the values only once since they might change
            m_forced_speed.value = m_dspeed.value;
            m_forced_speed.speed_units = m_dspeed.speed_units;
            m_speed_inc = m_dspeed.value * m_args.speed_step;
          }

          ++m_incs;

          if (m_incs * 10  > m_args.max_increase)
            return false;

          m_forced_speed.value += m_speed_inc;
          dispatch(m_forced_speed);

          if (m_pitch_supervisor)
            m_pitch_supervisor->start(m_args.start_forced_pitch, m_args.max_forced_pitch,
                                      m_args.time_step, m_args.pitch_step,
                                      m_args.depth_tracking, m_args.depth_rate);

          debug("unable to submerge, increasing speed to %d%%",
                (unsigned)(100.0 + (float)m_incs * 10.0));

          m_counter_step->reset();

          return true;
        }

        //! Check if we have depth/altitude reference
        //! @return true if we do, false otherwise
        bool
        hasZReference(void)
        {
          if (m_z_ref.z_units == IMC::Z_DEPTH)
          {
            return (m_z_ref.value > m_args.depth_threshold);
          }
          else if (m_z_ref.z_units == IMC::Z_ALTITUDE)
          {
            if (m_depth > m_args.depth_threshold) // making sure dvl data is sane
              return (m_z_ref.value < m_alt - m_args.depth_threshold);
            else
              return true; // if dvl may not be sane yet, let it dive
          }
          else
          {
            return false;
          }
        }
      };
    }
  }
}
DUNE_TASK
