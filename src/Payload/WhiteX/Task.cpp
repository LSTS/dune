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

#include <unordered_map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Payload
{
  namespace WhiteX
  {
    using DUNE_NAMESPACES;

    enum ModeEnum
    {
      MODE_INVALID = 0,
      MODE_AUTOMATIC = 1,
      MODE_MANUAL = 2
    };

    const std::unordered_map<std::string, ModeEnum> c_mode_map = {{ "Invalid", MODE_INVALID },
                                                                  { "Automatic", MODE_AUTOMATIC },
                                                                  { "Manual", MODE_MANUAL }};

    const std::unordered_map<ModeEnum, std::string> c_mode_str_map = {{ MODE_INVALID, "Invalid" },
                                                                      { MODE_AUTOMATIC, "Automatic" },
                                                                      { MODE_MANUAL, "Manual" }};

    //! Sampling state report timeout.
    static constexpr float c_state_report_tout = 1;

    //! Task arguments.
    struct Arguments
    {
      //! Operation mode.
      std::string mode;
      //! Pumps power channel labels.
      std::vector<std::string> pumps_pwr_ch_labels;
      //! Water flow source entity label.
      std::string wf_elabel;
      //! Maximum water level GPIO label.
      std::string max_wl_gpio;
      //! Minimum water level GPIO label.
      std::string min_wl_gpio;
      //! Manual control of pumps.
      bool manual_pumps;
      //! Restarting is allowed.
      bool restart_allowed;
      //! Pausing is allowed.
      bool pausing_allowed;
      //! Force state transition.
      bool force_state_transition;
      //! Sampling timeout.
      double sampling_timeout;
    };

    //! Task to control WhiteX payload. 
    //!
    //! @author Bernardo Gabriel
    struct Task: public Tasks::Task
    {
      enum State
      {
        STATE_UNKNOWN,
        STATE_IDLE,
        STATE_INITIAL,
        STATE_SAMPLING,
        STATE_COMPLETED,
        STATE_PAUSED
      };

      enum Request
      {
        REQ_NONE,
        REQ_START_SAMPLING,
        REQ_STOP_SAMPLING,
        REQ_PAUSE_SAMPLING,
        REQ_RESUME_SAMPLING,
        REQ_FORCE_STATE_TRANSITION
      };

      //! Task arguments.
      Arguments m_args;
      //! Operation mode.
      ModeEnum m_mode;
      //! Water flow source entity id.
      unsigned m_wf_eid;
      //! Map of GPIO states.
      std::unordered_map<std::string, bool> m_gpio_states;
      //! Map of Power Channel states.
      std::map<std::string, bool> m_pwr_ch_states;
      //! PowerChannelControl message.
      IMC::PowerChannelControl m_pcc;
      //! QueryPowerChannelState message.
      IMC::QueryPowerChannelState m_qpcs;
      //! GpioStateGet message.
      IMC::GpioStateGet m_gsg;
      //! WaterFlow value.
      fp32_t m_wf;
      //! WaterFlow average.
      Math::MovingAverage<double> m_wf_avg;
      //! WaterFlow timer.
      Counter<double> m_wf_timer;
      //! Current state of the system.
      State m_curr_state;
      //! Last received request.
      Request m_recv_req;
      //! Paused state.
      State m_paused_state;
      //! Timer for reporting state.
      Counter<double> m_report_state_timer;
      //! Sampling state report message.
      IMC::SamplingAction m_sa_report;
      //! Timer for sampling.
      Counter<double> m_sampling_timer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_mode(MODE_INVALID),
        m_wf_eid(UINT_MAX),
        m_curr_state(STATE_IDLE),
        m_recv_req(REQ_NONE),
        m_paused_state(STATE_UNKNOWN),
        m_report_state_timer(c_state_report_tout)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER,
                    true);

        param("Mode", m_args.mode)
        .defaultValue("Automatic")
        .values("Automatic, Manual")
        .description("Operation mode.");

        param("Pumps - Power Channel Names", m_args.pumps_pwr_ch_labels)
        .editable(false)
        .description("Names of the power channels that control the pumps.");

        param("Water Flow - Entity Label", m_args.wf_elabel)
        .editable(false)
        .description("Entity label of the source of the water flow.");

        param("Maximum Water Level - GPIO Label", m_args.max_wl_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the maximum water level.");

        param("Minimum Water Level - GPIO Label", m_args.min_wl_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the minimum water level.");

        param("Manual - Pumps", m_args.manual_pumps)
        .defaultValue("false")
        .description("Manual control for the pumps.");

        param("Restart Allowed", m_args.restart_allowed)
        .defaultValue("false")
        .description("Allow restarting the sampling process.");

        param("Pause Allowed", m_args.pausing_allowed)
        .defaultValue("false")
        .description("Allow pausing the sampling process.");

        param("Force State Transition", m_args.force_state_transition)
        .defaultValue("false")
        .description("Manually force state transition.");

        param("Sampling Timeout", m_args.sampling_timeout)
        .defaultValue("0.0")
        .minimumValue("0.0")
        .units(Units::Second)
        .description("Timeout for the sampling process in seconds.");

        m_sa_report.action = IMC::SamplingAction::SA_REPORT;

        bind<IMC::WaterFlow>(this);
        bind<IMC::GpioState>(this);
        bind<IMC::PowerChannelState>(this);
        bind<IMC::SamplingAction>(this);
      }

      void
      onUpdateParameters(void) override
      {
        if (paramChanged(m_args.mode))
        {
          if (m_mode == ModeEnum::MODE_AUTOMATIC &&
              m_args.mode == "Manual" &&
              m_curr_state != STATE_IDLE)
          {
            war("switching from Automatic to Manual mode "
                "while sampling is in progress isn't allowed | "
                "reverting to Automatic mode.");
            applyEntityParameter(&m_args.mode, "Automatic");
          }
          else
          {
            auto it = c_mode_map.find(m_args.mode);
            if (it != c_mode_map.end())
            {
              m_mode = it->second;
              inf("operation mode set to: %s", c_mode_str_map.at(m_mode).c_str());
            }
            else
            {
              err("invalid operation mode: %s", m_args.mode.c_str());
              m_mode = MODE_INVALID;
            }

            stop();
          }
        }

        if (paramChanged(m_args.force_state_transition) && m_args.force_state_transition)
        {
          applyEntityParameter(&m_args.force_state_transition, false);
          if (isActive() && m_mode == MODE_AUTOMATIC)
          {
            m_recv_req = REQ_FORCE_STATE_TRANSITION;
            inf("force state transition request received");
          }
        }

        if (m_mode == MODE_MANUAL)
        {
          if (paramChanged(m_args.manual_pumps))
            setPumps(m_args.manual_pumps);
        }
      }

      void
      onActivation(void) override
      {
        queryPowerChannels();
        queryGpios();
      }

      void
      onDeactivation(void) override
      {
      }

      void
      tryResolveEntity(unsigned& eid, const std::string& elabel)
      {
        try
        {
          eid = resolveEntity(elabel);
        }
        catch (const std::exception& e)
        {
          err("Failed to resolve entity: %s", e.what());
          eid = UINT_MAX;
        }
      }

      void
      onEntityResolution(void)
      {
        tryResolveEntity(m_wf_eid, m_args.wf_elabel);
      }

      void
      onResourceInitialization(void) override
      {
        m_gpio_states.clear();
        m_gpio_states[m_args.min_wl_gpio] = false;
        m_gpio_states[m_args.max_wl_gpio] = false;

        m_pwr_ch_states.clear();
        for (const auto& label : m_args.pumps_pwr_ch_labels)
          m_pwr_ch_states[label] = false;
      }

      void
      setPowerChannel(const std::string& label, bool on)
      {
        m_pcc.name = label;
        m_pcc.op = on ? IMC::PowerChannelControl::PCC_OP_TURN_ON :
                        IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(m_pcc);
      }

      void
      setPumps(bool state)
      {
        for (const auto& label : m_args.pumps_pwr_ch_labels)
          setPowerChannel(label, state);

        if (state)
        {
          m_wf_avg.clear();
          m_wf_timer.reset();
        }
        else
        {
          double mean = m_wf_avg.mean() * 1e6;
          double duration = m_wf_timer.getElapsed();
          debug("mean: %.2f mL/s | duration: %.2f s | volume: %.2f mL", mean, duration, mean * duration);
        }
      }

      void
      queryPowerChannels(void)
      {
        dispatch(m_qpcs);
      }

      void
      queryGpios(void)
      {
        for (const auto& gpio : m_gpio_states)
        {
          m_gsg.name = gpio.first;
          dispatch(m_gsg);
        }
      }

      void
      consume(const IMC::GpioState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto it = m_gpio_states.find(msg->name);
        if (it == m_gpio_states.end())
          return;

        it->second = (msg->value != 0);
        spew("GPIO %s state: %s", msg->name.c_str(), it->second ? "ON" : "OFF");
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto it = m_pwr_ch_states.find(msg->name);
        if (it == m_pwr_ch_states.end())
          return;

        it->second = (msg->state != 0);
        spew("power channel %s state: %s", msg->name.c_str(), it->second ? "ON" : "OFF");
      }

      void
      consume(const IMC::WaterFlow* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_wf_eid)
          return;

        if (m_args.manual_pumps)
          m_wf_avg.update(msg->value);

        m_wf = msg->value;
        spew("water flow: %f m*m*m/s", m_wf);
      }

      void
      consume(const IMC::SamplingAction* msg)
      {
        if (m_mode != MODE_AUTOMATIC)
          return;

        if (msg->action != IMC::SamplingAction::ActionEnum::SA_COMMAND)
          return;

        if (!isActive())
        {
          inf("received SamplingAction command message with action %d, but the entity is not active", msg->action);
          return;
        }
        else
          spew("received SamplingAction command message with action %d", msg->action);

        switch (msg->type)
        {
          case IMC::SamplingAction::TypeEnum::SAT_CMD_START:
            inf("received command to start sampling");
            m_recv_req = REQ_START_SAMPLING;
            break;

          case IMC::SamplingAction::TypeEnum::SAT_CMD_STOP:
            inf("received command to stop sampling");
            m_recv_req = REQ_STOP_SAMPLING;
            break;

          case IMC::SamplingAction::TypeEnum::SAT_CMD_PAUSE:
            if (m_args.pausing_allowed)
            {
              m_recv_req = REQ_PAUSE_SAMPLING;
              inf("received command to pause sampling action");
            }
            else
              inf("received command to pause sampling action, but pausing is not allowed");

            break;

          case IMC::SamplingAction::TypeEnum::SAT_CMD_RESUME:
            if (m_args.pausing_allowed)
            {
              m_recv_req = REQ_RESUME_SAMPLING;
              inf("received command to resume sampling action");
            }
            else
              inf("received command to resume sampling action, but pausing is not allowed");

            break;

          case IMC::SamplingAction::TypeEnum::SAT_CMD_QUERY_STATE:
            dispatch(m_sa_report);
            break;

          default:
            break;
        }
      }

      void
      changeMode(ModeEnum mode)
      {
        if (mode == m_mode)
          return;

        auto it = c_mode_str_map.find(mode);
        if (it != c_mode_str_map.end())
        {
          m_mode = mode;
          inf("operation mode changed to: %s", it->second.c_str());
        }
        else
        {
          err("invalid operation mode: %d", static_cast<int>(mode));
        }
      }

      bool
      startRequested(bool sampling = true)
      {
        if (m_recv_req != REQ_START_SAMPLING)
          return false;

        m_recv_req = REQ_NONE;
        if (sampling && !m_args.restart_allowed)
        {
          inf("received request to restart sampling, but restarting is not allowed");
          return false;
        }

        m_recv_req = REQ_NONE;
        trace("start sampling");
        setState(STATE_INITIAL);
        return true;
      }

      bool
      stopRequested(bool sampling = true)
      {
        if (m_recv_req != REQ_STOP_SAMPLING)
          return false;

        m_recv_req = REQ_NONE;

        if (!sampling)
        {
          inf("received request to stop sampling, but not sampling");
          return false;
        }

        trace("stop sampling");
        setState(STATE_IDLE);
        return true;
      }

      bool
      pauseRequested(bool sampling = true)
      {
        if (!m_args.pausing_allowed || m_recv_req != REQ_PAUSE_SAMPLING)
          return false;

        m_recv_req = REQ_NONE;

        if (!m_args.pausing_allowed)
        {
          inf("received request to pause sampling, but pausing is not allowed");
          return false;
        }

        if (!sampling)
        {
          inf("received request to pause sampling, but not sampling");
          return false;
        }

        m_paused_state = m_curr_state;
        trace("pause sampling");
        setState(STATE_PAUSED);
        return true;
      }

      bool
      resumeRequested(void)
      {
        if (m_recv_req != REQ_RESUME_SAMPLING)
          return false;

        m_recv_req = REQ_NONE;

        if (!m_args.pausing_allowed)
        {
          inf("received request to resume sampling, but pausing is not allowed");
          return false;
        }

        m_paused_state = STATE_UNKNOWN;
        trace("resume sampling");
        setState((m_paused_state != STATE_UNKNOWN) ? m_paused_state : STATE_IDLE);
        return true;
      }

      bool
      forceStateTransition(void)
      {
        if (m_recv_req != REQ_FORCE_STATE_TRANSITION)
          return false;

        m_recv_req = REQ_NONE;
        trace("force state transition");
        return true;
      }

      void
      sample(bool start = true)
      {
        setPumps(start);

        if (start)
          m_sampling_timer.setTop(m_args.sampling_timeout);
      }

      bool
      isSamplingOver(void)
      {
        return m_sampling_timer.overflow();
      }

      void
      setState(State state)
      {
        m_curr_state = state;

        switch (m_curr_state)
        {
          case STATE_IDLE:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_IDLE, "ready for sampling");
            sample(false);
            break;

          case STATE_INITIAL:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_STARTING, "initializing sampling action");
            break;

          case STATE_SAMPLING:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "sampling");
            sample();
            break;

          case STATE_COMPLETED:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_STOPPING, "sampling action completed");
            break;

          default:
            break;
        }
      }

      void
      updateSamplingState(IMC::SamplingAction::TypeEnum type, const std::string& description = "")
      {
        debug("updating sampling state report: type %d, description: %s", type, description.c_str());
        m_sa_report.type = type;
        m_sa_report.description = description;
        dispatch(m_sa_report);
      }

      void
      updateMachineState(void)
      {
        if (!isActive() || m_mode != MODE_AUTOMATIC)
          return;

        switch (m_curr_state)
        {
          case STATE_IDLE:
            startRequested(false);
            break;

          case STATE_INITIAL:
            setState(STATE_SAMPLING);
            break;

          case STATE_SAMPLING:
            if (startRequested() || stopRequested() || pauseRequested())
              break;

            if (forceStateTransition() || isSamplingOver())
            {
              sample(false);
              setState(STATE_COMPLETED);
            }

            break;

          case STATE_COMPLETED:
            setState(STATE_IDLE);
            break;

          case STATE_PAUSED:
            resumeRequested();
            break;

          default:
            setState(STATE_IDLE);
            break;
        }        
      }

      void
      onReportEntityState(void) override
      {
        std::ostringstream ss;
        ss << (isActive() ? "active" : "idle");
        ss << " | m: " << c_mode_str_map.at(m_mode).front();

        ss << " | wl: " << static_cast<int>(m_gpio_states[m_args.min_wl_gpio])
                        << static_cast<int>(m_gpio_states[m_args.max_wl_gpio]);

        ss << " | wf: " << m_wf;

        ss << " | p: ";
        for (const auto& pwr_ch : m_pwr_ch_states)
          ss << static_cast<int>(pwr_ch.second);

        setEntityState(EntityState::ESTA_NORMAL, ss.str());
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          updateMachineState();

          if (m_report_state_timer.overflow())
          {
            if (isActive() && m_mode == MODE_AUTOMATIC)
              dispatch(m_sa_report);

            m_report_state_timer.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
