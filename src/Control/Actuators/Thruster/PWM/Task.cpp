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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Actuators
  {
    namespace Thruster
    {
      namespace PWM
      {
        using DUNE_NAMESPACES;

        //! %Task arguments.
        struct Arguments
        {
          //! PWM signal setting.
          std::vector<uint32_t> pwm_setting;
          //! Thruster PWM channel  .
          uint8_t thruster_pwm_ch;
          //! Thruster id.
          uint8_t thruster_id;
          //! Thruster control with closed loop.
          bool close_loop;
          //! Thruster closed loop control PID gains.
          std::vector<fp32_t> cl_pid_gains;
          //! Enable logging for closed loop control.
          bool cl_log;
          //! Thruster closed loop controller max update delta.
          double max_cl_update_delta;
          //! Thruster current limit.
          fp32_t thruster_curr_lim;
          //! Thruster current control PID gains.
          std::vector<fp32_t> curr_pid_gains;
          //! Enable logging for current control.
          bool curr_log;
          //! Thruster current source entity label.
          std::string thruster_curr_src_elabel;
          //! Thruster current controller max update delta.
          double max_curr_update_delta;
        };

        struct Task: public DUNE::Tasks::Task
        {
          //! Task arguments.
          Arguments m_args;
          //! Thruster reference set.
          bool m_ref_set;
          //! Thruster desired PWM signal.
          uint32_t m_desired_dc;
          //! Thruster desired PWM signal for current control.
          uint32_t m_desired_dc_curr;
          //! IMC::SetPWM message.
          IMC::SetPWM m_set_pwm;
          //! Thruster PWM signal period, in microseconds.
          uint32_t m_pwm_period;
          //! Thruster PWM minimum duty cycle, in microseconds, at reverse direction.
          uint32_t m_pwm_min_dc_rev;
          //! Thruster PWM duty cycle, in microseconds, at neutral position.
          uint32_t m_pwm_dc_neutral;
          //! Thruster PWM maximum duty cycle, in microseconds, at forward direction.
          uint32_t m_pwm_max_dc_fwd;
          //! Thruster PWM consumer.
          AbstractConsumer* m_pwm_consumer;
          //! Thruster PWM delta.
          Delta m_pwm_delta;
          //! Close loop PID controller.
          DiscretePID m_cl_pid;
          //! Close loop PID log.
          IMC::ControlParcel m_cl_log;
          //! Thruster current consumption reference.
          fp32_t m_curr_ctl_en_tol;
          //! Thruster current source entity id.
          uint8_t m_thruster_curr_src_eid;
          //! Thruster current consumer.
          AbstractConsumer* m_curr_consumer;
          //! Thruster Current delta.
          Delta m_curr_delta;
          //! Current PID controller.
          DiscretePID m_curr_pid;
          //! Current PID log.
          IMC::ControlParcel m_curr_log;

          Task(const std::string& name, Tasks::Context& ctx):
            DUNE::Tasks::Task(name, ctx),
            m_desired_dc(0),
            m_desired_dc_curr(0),
            m_pwm_min_dc_rev(UINT32_MAX),
            m_pwm_dc_neutral(UINT32_MAX),
            m_pwm_max_dc_fwd(UINT32_MAX),
            m_pwm_consumer(nullptr),
            m_thruster_curr_src_eid(UINT8_MAX),
            m_curr_consumer(nullptr)
          {
            param("PWM Setting", m_args.pwm_setting)
            .editable(false)
            .size(4)
            .units(Units::Microsecond)
            .description("PWM signal setting for the thruster. "
                         "The PWM signal settings are defined as follows: "
                         " - 1. PWM singal period, in microseconds. "
                         " - 2. Minimum PWM signal duty cycle, in microseconds, at reverse direction. "
                         " - 3. PWM signal duty cycle, in microseconds, at neutral position. "
                         " - 4. Maximum PWM signal duty cycle, in microseconds, at forward direction.");

            param("PWM Channel", m_args.thruster_pwm_ch)
            .editable(false)
            .minimumValue("0")
            .maximumValue("255")
            .size(1)
            .description("PWM channel for the thruster.");

            param("Thruster Id", m_args.thruster_id)
            .editable(false)
            .minimumValue("0")
            .maximumValue("255")
            .size(1)
            .description("Id of the thruster to control.");

            param("Close Loop Control - Enable", m_args.close_loop)
            .defaultValue("false")
            .description("Control the thruster with closed loop.");

            param("Close Loop Control - PID Gains", m_args.cl_pid_gains)
            .defaultValue("0, 0, 0")
            .size(3)
            .description("PID gains for the closed loop control.");

            param("Close Loop Control - Log", m_args.cl_log)
            .defaultValue("false")
            .description("Enable logging for the closed loop controller.");

            param("Close Loop Control - Max Update Delta", m_args.max_cl_update_delta)
            .units(Units::Second)
            .defaultValue("0.0")
            .minimumValue("0.0")
            .description("Maximum allowed update delta for the closed loop controller. "
                         "If 0, the controller will work on open loop.");

            param("Current Control - Limit", m_args.thruster_curr_lim)
            .defaultValue("0")
            .minimumValue("0")
            .description("Thruster current limit for current control. "
                         "If the value is set to zero, the current control will be disabled.");

            param("Current Control - PID Gains", m_args.curr_pid_gains)
            .defaultValue("0, 0, 0")
            .size(3)
            .description("PID gains for the current control loop.");

            param("Current Control - Log", m_args.curr_log)
            .defaultValue("false")
            .description("Enable logging for the current controller.");

            param("Current - Source Entity Label", m_args.thruster_curr_src_elabel)
            .editable(false)
            .description("Entity label of the source of the current consumption of the thruster.");

            param("Current Control - Max Update Delta", m_args.max_curr_update_delta)
            .units(Units::Second)
            .defaultValue("0.0")
            .minimumValue("0.0")
            .description("Maximum allowed update delta for the current controller. "
                         "If 0, the controller will work on open loop.");

            bind<IMC::SetThrusterActuation>(this);
          }

          void
          onUpdateParameters(void) override
          {
            if (paramChanged(m_args.close_loop))
            {
              if (m_args.close_loop)
                m_pwm_consumer = bind<IMC::PWM>(this);
              else
                unbind(IMC::PWM::getIdStatic(), m_pwm_consumer);
            }

            if (paramChanged(m_args.cl_pid_gains))
            {
              m_cl_pid.setGains(m_args.cl_pid_gains);
              m_cl_pid.reset();
            }

            if (paramChanged(m_args.cl_log))
            {
              if (m_args.cl_log)
                m_cl_pid.enableParcels(this, &m_cl_log);
              else
                m_cl_pid.disableParcels();
            }

            if (paramChanged(m_args.thruster_curr_lim))
            {
              if (m_args.thruster_curr_lim > 0)
                m_curr_consumer = bind<IMC::Current>(this);
              else
                unbind(IMC::Current::getIdStatic(), m_curr_consumer);
            }

            if (paramChanged(m_args.curr_pid_gains))
            {
              m_curr_pid.setGains(m_args.curr_pid_gains);
              m_curr_pid.reset();
            }

            if (paramChanged(m_args.curr_log))
            {
              if (m_args.curr_log)
                m_curr_pid.enableParcels(this, &m_curr_log);
              else
                m_curr_pid.disableParcels();
            }
          }

          void
          onEntityResolution(void) override
          {
            if (!m_args.thruster_curr_src_elabel.empty())
            {
              try
              {
                m_thruster_curr_src_eid = resolveEntity(m_args.thruster_curr_src_elabel);
              }
              catch(Entities::EntityDataBase::NonexistentLabel& e)
              {
                war("thruster current source entity label '%s' does not exist in the entity database.", e.what());
                unbind(IMC::Current::getIdStatic(), m_curr_consumer);
              }
            }
            else
            {
              m_thruster_curr_src_eid = UINT8_MAX;
              unbind(IMC::Current::getIdStatic(), m_curr_consumer);
            }
          }

          void
          onResourceInitialization(void) override
          {
            try
            {
              uint32_t pwm_period = m_args.pwm_setting[0];
              uint32_t pwm_min_dc_rev = m_args.pwm_setting[1];
              uint32_t pwm_dc_neutral = m_args.pwm_setting[2];
              uint32_t pwm_max_dc_fwd = m_args.pwm_setting[3];

              if (pwm_period == 0)
                throw std::invalid_argument("PWM signal period must be greater than zero.");

              if (pwm_dc_neutral > pwm_period || pwm_min_dc_rev > pwm_period || pwm_max_dc_fwd > pwm_period)
                throw std::invalid_argument("PWM signal duty cycle at neutral position must "
                                            "be less than or equal to the period.");

              if (pwm_min_dc_rev > pwm_dc_neutral)
                throw std::invalid_argument("PWM signal minimum duty cycle at reverse direction "
                                            "must be less than or equal to the duty cycle at neutral position.");

              if (pwm_max_dc_fwd < pwm_dc_neutral)
                throw std::invalid_argument("PWM signal maximum duty cycle at forward direction "
                                            "must be greater than or equal to the duty cycle at neutral position.");

              m_pwm_period = m_set_pwm.period = pwm_period;
              m_pwm_min_dc_rev = pwm_min_dc_rev;
              m_pwm_dc_neutral = pwm_dc_neutral;
              m_pwm_max_dc_fwd = pwm_max_dc_fwd;
              
              spew("thruster PWM setting updated to: "
                   "p=%u us min dc=%u us neutral dc=%u us max dc=%u us",
                   m_set_pwm.period,
                   m_pwm_min_dc_rev,
                   m_pwm_dc_neutral,
                   m_pwm_max_dc_fwd);

              m_set_pwm.id = m_args.thruster_pwm_ch;
              spew("thruster PWM Channel updated to %u", m_args.thruster_pwm_ch);

              double pwm_range = m_pwm_max_dc_fwd - m_pwm_min_dc_rev;
              m_cl_pid.setOutputLimits(-pwm_range, pwm_range);
              m_curr_pid.setOutputLimits(-pwm_range, pwm_range);

              requestActivation();

              std::ostringstream ss;
              ss << "active | ";
              ss << "p=" << m_set_pwm.period << " us ";
              ss << "min=" << m_pwm_min_dc_rev << " us ";
              ss << "neutral=" << m_pwm_dc_neutral << " us ";
              ss << "max=" << m_pwm_max_dc_fwd << " us";
              setEntityState(EntityState::ESTA_NORMAL, ss.str());
            }
            catch(const std::exception& e)
            {
              err("invalid PWM signal setting | %s", e.what());
              requestDeactivation();

              std::ostringstream ss;
              ss << "error | ";
              ss << "p=" << m_args.pwm_setting[0] << " ";
              ss << "min=" << m_args.pwm_setting[1] << " ";
              ss << "neutral=" << m_args.pwm_setting[2] << " ";
              ss << "max=" << m_args.pwm_setting[3];
              setEntityState(EntityState::ESTA_ERROR, ss.str());
            }
          }

          void
          consume(const IMC::SetThrusterActuation* msg)
          {
            if (!isActive())
              return;

            if (msg->getSource() != getSystemId())
              return;

            if (msg->id != m_args.thruster_id)
              return;

            setReference(msg->value);
          }

          void
          consume(const IMC::PWM* msg)
          {
            if (!m_ref_set)
              return;

            if (!m_args.close_loop)
              return;

            if (!isActive())
              return;

            if (msg->getSource() != getSystemId())
              return;

            if (msg->id != m_args.thruster_pwm_ch)
              return;

            if (msg->period != m_pwm_period)
            {
              war("received PWM signal with period %u us, expected %u us", msg->period, m_pwm_period);
              return;
            }

            double delta = m_pwm_delta.getDelta();

            uint32_t curr_dc = msg->duty_cycle;
            trace("received PWM signal: p=%u us dc=%u us)", msg->period, curr_dc);

            uint32_t desired_dc = (m_desired_dc_curr > 0) ? m_desired_dc_curr : m_desired_dc;
            int32_t error = static_cast<int32_t>(desired_dc) - static_cast<int32_t>(curr_dc);
            uint32_t dc = desired_dc + m_cl_pid.step(delta, error);
            
            dispatchPWM(dc);
          }

          void
          consume(const IMC::Current* msg)
          {
            if (!m_ref_set)
              return;

            if (m_args.thruster_curr_lim <= 0)
              return;

            if (!isActive())
              return;

            if (msg->getSource() != getSystemId())
              return;

            if (msg->getSourceEntity() != m_thruster_curr_src_eid)
              return;

            double delta = m_curr_delta.getDelta();

            fp32_t current = msg->value;
            trace("received current consumption for thruster: %.3f A", current);

            uint32_t dc = m_pwm_dc_neutral;
            fp32_t error = current - m_args.thruster_curr_lim;
            if (error <= 0.0f)
              dc = m_desired_dc;
            else if (m_desired_dc > m_pwm_dc_neutral)
              dc = trimValue(m_desired_dc - m_curr_pid.step(delta, error), m_pwm_dc_neutral, m_pwm_max_dc_fwd);
            else if (m_desired_dc < m_pwm_dc_neutral)
              dc = trimValue(m_desired_dc + m_curr_pid.step(delta, error), m_pwm_min_dc_rev, m_pwm_dc_neutral);

            if (!m_args.close_loop)
            {
              m_desired_dc_curr = 0;
              dispatchPWM(dc);
            }
            else
              setCurrentDutyCycle(dc);
          }

          void
          setCurrentDutyCycle(uint32_t dc)
          {
            m_desired_dc_curr = trimValue(dc, m_pwm_min_dc_rev, m_pwm_max_dc_fwd);
            trace("set current controller desired duty cycle: dc=%u us", m_desired_dc_curr);
          }

          void
          setReference(fp32_t ref)
          {
            ref = trimValue(ref, -1.0f, 1.0f);
            m_desired_dc = computeDutyCycle(ref);
            m_ref_set = true;
            trace("received actuation reference: %.2f | dc=%u us", ref, m_desired_dc);

            if ((m_args.close_loop && m_pwm_delta.check() < m_args.max_cl_update_delta) ||
                (m_args.thruster_curr_lim > 0 && m_curr_delta.check() < m_args.max_curr_update_delta && !m_args.close_loop))
              return;

            dispatchPWM(m_desired_dc);
          }

          void
          dispatchPWM(uint32_t dc)
          {
            m_set_pwm.duty_cycle = trimValue(dc, m_pwm_min_dc_rev, m_pwm_max_dc_fwd);
            dispatch(m_set_pwm);
            debug("dispatching PWM signal: p=%u us dc=%u us", m_set_pwm.period, m_set_pwm.duty_cycle);
          }

          uint32_t
          computeDutyCycle(fp32_t ref)
          {
            if (ref < 0.0f)
              return m_pwm_dc_neutral + static_cast<int32_t>(ref * (m_pwm_dc_neutral - m_pwm_min_dc_rev));
            else
              return m_pwm_dc_neutral + static_cast<int32_t>(ref * (m_pwm_max_dc_fwd - m_pwm_dc_neutral));
          }

          void
          onMain(void)
          {
            while (!stopping())
            {
              waitForMessages(1.0);
            }
          }
        };
      }
    }
  }
}

DUNE_TASK
