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
  namespace Doris
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
    //! Collector's motor moving actuation.
    static constexpr float c_collector_motor_actuation = 1.0f;
    //! Storage's max rows.
    static constexpr size_t c_storage_max_rows = 2;

    //! Task arguments.
    struct Arguments
    {
      //! Operation mode.
      std::string mode;
      //! Collector's minimum water level GPIO label.
      std::string col_min_water_level_gpio;
      //! Collector's maximum water level GPIO label.
      std::string col_max_water_level_gpio;
      //! Collector's disks motor entity label.
      std::string col_motor_elabel;
      //! Collector's disks motor id.
      uint8_t col_motor_id;
      //! Collector's water flow source entity label.
      std::string col_water_flow_elabel;
      //! Collector's pumps power channel labels.
      std::vector<std::string> col_pumps_pwr_ch_labels;
      //! Storage's pumps power channel labels.
      std::vector<std::string> sto_pumps_pwr_ch_labels;
      //! Storage's water flow source entity label.
      std::string sto_water_flow_elabel;
      //! Storage's step motor id.
      uint8_t sto_step_id;
      //! Storage's bottle selector row start endpoint GPIO label.
      std::string sto_start_ep_gpio;
      //! Storage's bottle selector row end endpoint GPIO label.
      std::string sto_end_ep_gpio;
      //! Storage's purge valve power channel label.
      std::string sto_purge_pwr_ch_label;
      //! Storage's rows valve power channel labels.
      std::vector<std::string> sto_rows_pwr_ch_labels;
      //! Manual motor control.
      float manual_motor;
      //! Manual step control.
      int manual_step;
      //! Manual collector pumps control.
      bool manual_col_pumps;
      //! Manual storage pumps control.
      bool manual_sto_pumps;
      //! Manual storage purge valve control.
      bool manual_sto_purge;
      //! Manual storage row 1 valve control.
      bool manual_sto_row1;
      //! Manual storage row 2 valve control.
      bool manual_sto_row2;
      //! Restarting is allowed.
      bool restart_allowed;
      //! Pausing is allowed.
      bool pausing_allowed;
      //! Force state transition.
      bool force_state_transition;
      //! Collecotor's timeout.
      double col_timeout;
      //! Storage's timeout.
      double sto_timeout;
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
        STATE_COLLECT,
        STATE_SELECT,
        STATE_STORE,
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
      //! QueryPowerChannelState message.
      IMC::QueryPowerChannelState m_qry_pwr_ch_state;
      //! Get GPIOState message.
      IMC::GpioStateGet m_get_gpio_state;
      //! SetThrusterActuation message.
      IMC::SetThrusterActuation m_sta;
      //! PowerChannelControl message.
      IMC::PowerChannelControl m_pcc;
      //! Collector's motor entity id.
      unsigned m_col_motor_eid;
      //! Collector's water flow source entity id.
      unsigned m_col_water_flow_eid;
      //! Storage's water flow source entity id.
      unsigned m_sto_water_flow_eid;
      //! Map of GPIO states.
      std::unordered_map<std::string, bool> m_gpio_states;
      //! Map of Water Flows.
      std::unordered_map<unsigned, fp32_t> m_water_flows;
      //! Map of Power Channel states.
      std::map<std::string, bool> m_pwr_ch_states;
      //! Sampling state report message.
      IMC::SamplingAction m_sa_report;
      //! Current state of the system.
      State m_curr_state;
      //! Last received request.
      Request m_recv_req;
      //! Paused state.
      State m_paused_state;
      //! Timer for reporting state
      Counter<double> m_report_state_timer;
      //! Current selected bottle.
      int m_curr_bottle;
      //! Collector's timer.
      Counter<double> m_collector_timer;
      //! Storage's timer.
      Counter<double> m_storage_timer;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_mode(MODE_INVALID),
        m_col_motor_eid(UINT_MAX),
        m_col_water_flow_eid(UINT_MAX),
        m_sto_water_flow_eid(UINT_MAX),
        m_curr_state(STATE_IDLE),
        m_recv_req(REQ_NONE),
        m_paused_state(STATE_UNKNOWN),
        m_report_state_timer(c_state_report_tout),
        m_curr_bottle(-1)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER,
                    true);

        param("Mode", m_args.mode)
        .defaultValue("Automatic")
        .values("Automatic, Manual")
        .description("Operation mode.");

        param("Collector -- Minimum Water Level - GPIO Label", m_args.col_min_water_level_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the collector's minimum water level.");

        param("Collector -- Maximum Water Level - GPIO Label", m_args.col_max_water_level_gpio)
        .editable(false)
        .description("Name of the GPIO that indicates the collector's maximum water level.");

        param("Collector -- Water Flow - Entity Label", m_args.col_water_flow_elabel)
        .editable(false)
        .description("Entity label of the source of the collector's water flow.");

        param("Collector -- Motor - Entity Label", m_args.col_motor_elabel)
        .editable(false)
        .description("Entity label of the motor to control the collector's disks.");

        param("Collector -- Motor - Id", m_args.col_motor_id)
        .editable(false)
        .description("Id of the motor to control the collector's disks.");

        param("Collector -- Pumps - Power Channel Names", m_args.col_pumps_pwr_ch_labels)
        .editable(false)
        .description("Names of the power channel that control the collector's pumps.");

        param("Collector -- Timeout", m_args.col_timeout)
        .minimumValue("0.0")
        .defaultValue("0.0")
        .units(Units::Second)
        .description("Timeout for the collector. "
                     "If 0, the collector will not timeout.");

        param("Storage -- Pumps - Power Channel Names", m_args.sto_pumps_pwr_ch_labels)
        .editable(false)
        .description("Names of the power channel that control the storage's pumps.");

        param("Storage -- Purge Valve - Power Channel Name", m_args.sto_purge_pwr_ch_label)
        .editable(false)
        .description("Name of the power channel that controls storage purge valve.");

        param("Storage -- Water Flow - Entity Label", m_args.sto_water_flow_elabel)
        .editable(false)
        .description("Entity label of the source of the storage's water flow.");

        param("Storage -- Rows Valves - Power Channel Names", m_args.sto_rows_pwr_ch_labels)
        .size(2)
        .editable(false)
        .description("Names of the power channel that controls storage's rows valves.");

        param("Storage -- Step Motor - Id", m_args.sto_step_id)
        .editable(false)
        .description("ID of the step motor to control the storage's bottle selector.");

        param("Storage -- Row Start - GPIO Label", m_args.sto_start_ep_gpio)
        .editable(false)
        .description("Name of the GPIO that corresponds to the row start.");

        param("Storage -- Row End - GPIO Label", m_args.sto_end_ep_gpio)
        .editable(false)
        .description("Name of the GPIO that corresponds to the row end.");

        param("Storage -- Timeout", m_args.sto_timeout)
        .minimumValue("0.0")
        .defaultValue("0.0")
        .units(Units::Second)
        .description("Timeout for the storage. "
                     "If 0, the storage will not timeout.");

        param("Restart Allowed", m_args.restart_allowed)
        .defaultValue("false")
        .description("Allow restarting the sampling process.");

        param("Pause Allowed", m_args.pausing_allowed)
        .defaultValue("false")
        .description("Allow pausing the sampling process.");

        param("Force State Transition", m_args.force_state_transition)
        .defaultValue("false")
        .description("Manually force state transition.");

        param("Manual - Motor", m_args.manual_motor)
        .defaultValue("0.0")
        .minimumValue("-1.0")
        .maximumValue("1.0")
        .description("Manual control for the collector's disks motor.");

        param("Manual - Step", m_args.manual_step)
        .defaultValue("0")
        .values("-1, 0, 1")
        .description("Manual control for the storage's step motor.");

        param("Manual - Collector Pumps", m_args.manual_col_pumps)
        .defaultValue("false")
        .description("Manual control for the collector's pumps.");

        param("Manual - Storage Pumps", m_args.manual_sto_pumps)
        .defaultValue("false")
        .description("Manual control for the storage's pumps.");

        param("Manual - Storage Purge Valve", m_args.manual_sto_purge)
        .defaultValue("false")
        .description("Manual control for the storage's purge.");

        param("Manual - Storage Row 1 Valve", m_args.manual_sto_row1)
        .defaultValue("false")
        .description("Manual control for the storage's row 1 valve.");

        param("Manual - Storage Row 2 Valve", m_args.manual_sto_row2)
        .defaultValue("false")
        .description("Manual control for the storage's row 2 valve.");

        m_sta.setDestination(getSystemId());
        m_sa_report.action = IMC::SamplingAction::SA_REPORT;

        bind<IMC::GpioState>(this);
        bind<IMC::WaterFlow>(this);
        bind<IMC::PowerChannelState>(this);
        bind<IMC::RemoteActions>(this);
        bind<IMC::SamplingAction>(this);
      }

      void
      onUpdateParameters(void) override
      {
        if (paramChanged(m_args.mode))
        {
          auto it = c_mode_map.find(m_args.mode);
          if (it != c_mode_map.end())
          {
            m_mode = it->second;
            inf("Operation mode set to: %s", c_mode_str_map.at(m_mode).c_str());
          }
          else
          {
            err("Invalid operation mode: %s", m_args.mode.c_str());
            m_mode = MODE_INVALID;
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
          if (paramChanged(m_args.manual_motor))
            setMotor(m_args.manual_motor);

          if (paramChanged(m_args.manual_step))
            setStep(m_args.manual_step);

          if (paramChanged(m_args.manual_col_pumps))
            setCollectorPumps(m_args.manual_col_pumps);

          if (paramChanged(m_args.manual_sto_pumps))
            setStoragePumps(m_args.manual_sto_pumps);
          
          if (paramChanged(m_args.manual_sto_purge))
            setStoragePurgeValve(m_args.manual_sto_purge);

          if (paramChanged(m_args.manual_sto_row1))
            setStorageRowValve(0, m_args.manual_sto_row1);

          if (paramChanged(m_args.manual_sto_row2))
            setStorageRowValve(1, m_args.manual_sto_row2);
        }
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
      resolveWaterFlowEntity(unsigned& eid, const std::string& elabel)
      {
        tryResolveEntity(eid, elabel);
        if (eid != UINT_MAX)
          m_water_flows[eid] = 0.0f;
      }

      void
      onEntityResolution(void)
      {
        tryResolveEntity(m_col_motor_eid, m_args.col_motor_elabel);
        resolveWaterFlowEntity(m_col_water_flow_eid, m_args.col_water_flow_elabel);
        resolveWaterFlowEntity(m_sto_water_flow_eid, m_args.sto_water_flow_elabel);
      }

      void
      setupRemoteActions(void)
      {
        IMC::RemoteActionsRequest ar;
        ar.op = IMC::RemoteActionsRequest::OP_REGISTER;
        ar.actions = "Motor=Slider;Step=Slider";
        dispatch(ar);
      }

      void
      onResourceInitialization(void) override
      {
        m_gpio_states.clear();
        m_gpio_states[m_args.col_min_water_level_gpio] = false;
        m_gpio_states[m_args.col_max_water_level_gpio] = false;
        m_gpio_states[m_args.sto_start_ep_gpio] = false;
        m_gpio_states[m_args.sto_end_ep_gpio] = false;

        m_pwr_ch_states.clear();
        for (const auto& label : m_args.col_pumps_pwr_ch_labels)
          m_pwr_ch_states[label] = false;
        m_pwr_ch_states[m_args.sto_purge_pwr_ch_label] = false;
        m_pwr_ch_states[m_args.sto_rows_pwr_ch_labels[0]] = false;
        m_pwr_ch_states[m_args.sto_rows_pwr_ch_labels[1]] = false;

        setupRemoteActions();
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
      consume(const IMC::GpioState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto gpio = m_gpio_states.find(msg->name);
        if (gpio == m_gpio_states.end())
          return;

        gpio->second = msg->value != 0;
        spew("GPIO %s state: %s", msg->name.c_str(), gpio->second ? "true" : "false");
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto pwr_ch = m_pwr_ch_states.find(msg->name);
        if (pwr_ch == m_pwr_ch_states.end())
          return;

        pwr_ch->second = msg->state == IMC::PowerChannelState::PCS_ON;
        spew("Power Channel %s state: %s", msg->name.c_str(), pwr_ch->second ? "ON" : "OFF");
      }

      void
      consume(const IMC::WaterFlow* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        auto flow = m_water_flows.find(msg->getSourceEntity());
        if (flow == m_water_flows.end())
          return;

        flow->second = msg->value;
        spew("Water Flow from entity %u: %.2f m*m*m/s", flow->first, msg->value);
      }

      void
      consume(const IMC::RemoteActions* msg)
      {
        if (m_mode != MODE_MANUAL)
          return;

        TupleList tuples(msg->actions);

        auto motor_value = tuples.get("Motor", 0);
        setMotor(motor_value / 127.0f);

        auto step_value = tuples.get("Step", 0);
        setStep(step_value / 127);
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
            if(m_args.pausing_allowed)
            {
              m_recv_req = REQ_PAUSE_SAMPLING;
              inf("received command to pause sampling action");
            }
            else
              inf("received command to pause sampling action, but pausing is not allowed");

            break;

          case IMC::SamplingAction::TypeEnum::SAT_CMD_RESUME:
            if(m_args.pausing_allowed)
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
      queryPowerChannels(void)
      {
        dispatch(m_qry_pwr_ch_state);
      }

      void
      queryGpios(void)
      {
        for (const auto& gpio : m_gpio_states)
        {
          m_get_gpio_state.name = gpio.first;
          dispatch(m_get_gpio_state);
        }
      }

      void
      setThrusterActuation(uint8_t id, float step, uint8_t destination = UINT8_MAX)
      {
        trace("setting thruster %u to %f", id, step);
        m_sta.setDestinationEntity(destination);
        m_sta.id = id;
        m_sta.value = std::clamp(step, -1.0f, 1.0f);
        dispatch(m_sta);
      }

      void
      setStep(int step)
      {
        setThrusterActuation(m_args.sto_step_id, static_cast<float>(step));
      }

      void
      setMotor(float step)
      {
        setThrusterActuation(m_args.col_motor_id, step, static_cast<uint8_t>(m_col_motor_eid));
      }

      void
      setPowerChannel(const std::string& name, bool state)
      {
        trace("setting power channel %s to %s", name.c_str(), state ? "ON" : "OFF");
        m_pcc.name = name;
        m_pcc.op = state ? IMC::PowerChannelControl::PCC_OP_TURN_ON : IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(m_pcc);
      }

      void
      setPump(const std::string& name, bool state)
      {
        setPowerChannel(name, state);
      }

      void
      setValve(const std::string& name, bool state)
      {
        setPowerChannel(name, state);
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
        setState(STATE_INITIAL);
        trace("start sampling");
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

        setState(STATE_IDLE);
        trace("stop sampling");
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
        setState(STATE_PAUSED);
        trace("pause sampling");
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
        setState((m_paused_state != STATE_UNKNOWN) ? m_paused_state : STATE_IDLE);
        trace("resume sampling");
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
      setCollectorMotor(bool on)
      {
        setMotor(on ? c_collector_motor_actuation : 0.0f);
      }

      void
      setCollectorPumps(bool state)
      {
        for (const auto& label : m_args.col_pumps_pwr_ch_labels)
          setPump(label, state);
      }

      void
      setCollection(bool state)
      {
        setCollectorMotor(state);
        setCollectorPumps(state);
      }

      void
      setStorageStep(bool on, bool forward = true)
      {
        setStep(on ? (forward ? 1 : -1) : 0);
      }

      void
      setStoragePumps(bool state)
      {
        for (const auto& label : m_args.sto_pumps_pwr_ch_labels)
          setPump(label, state);
      }

      void
      setStoragePurgeValve(bool state)
      {
        setValve(m_args.sto_purge_pwr_ch_label, state);
      }

      void
      setStorageRowValve(size_t row, bool state)
      {
        if (row > c_storage_max_rows)
        {
          err("invalid row number: %ld", row);
          return;
        }

        setValve(m_args.sto_rows_pwr_ch_labels[row], state);
      }

      void
      selectBottle(void)
      {
        if (m_curr_bottle < 0)
          m_curr_bottle = 0;
        else
          m_curr_bottle = (m_curr_bottle + 1) % c_storage_max_rows;
      }

      int
      bottleRow(int bottle)
      {
        return bottle % 2;
      }

      void
      setStoreSample(int bottle, bool state)
      {
        int row = bottleRow(bottle);
        setStoragePumps(state);
        setStorageRowValve(row, state);
      }

      void
      setPurge(bool state)
      {
        setStoragePurgeValve(state);
        setStoragePumps(state);
      }

      void
      reset(void)
      {
        //!TODO: Implement actuators reset logic here.
      }

      bool
      isResetOver(void)
      {
        if (1)
        {
          debug("reset over");
          return true;
        }

        return false;
      }

      void
      collect(void)
      {
        setCollection(true);
        m_collector_timer.setTop(m_args.col_timeout);
      }

      bool
      isCollectorFull(void) const
      {
        return !m_args.col_max_water_level_gpio.empty() &&
                m_gpio_states.at(m_args.col_max_water_level_gpio);
      }

      bool
      isCollectOver(void)
      {
        if (isCollectorFull() || m_collector_timer.overflow())
        {
          setCollection(false);
          debug("collect over");
          return true;
        }

        return false;
      }

      void
      select(void)
      {
        selectBottle();
        setStorageStep(true);
      }

      bool
      isSelectOver(void)
      {
        if (1)
        {
          debug("select over");
          setStorageStep(false);
          return true;
        }

        return false;
      }

      void
      store(void)
      {
        setStoreSample(m_curr_bottle, true);
        m_storage_timer.setTop(m_args.sto_timeout);
      }

      bool
      isStoreOver(void)
      {
        if (m_storage_timer.overflow())
        {
          debug("store over");
          setStoreSample(m_curr_bottle, false);
          return true;
        }

        return false;
      }

      void
      setState(State state)
      {
        m_curr_state = state;

        switch (m_curr_state)
        {
          case STATE_IDLE:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_IDLE, "ready for sampling");
            break;

          case STATE_INITIAL:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_STARTING, "initializing sampling action");
            reset();
            break;

          case STATE_COLLECT:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "collecting sample");
            collect();
            break;

          case STATE_SELECT:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "selecting bottle");
            select();
            break;

          case STATE_STORE:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "storing sample");
            store();
            break;

          case STATE_COMPLETED:
            updateSamplingState(IMC::SamplingAction::SAT_STATE_STOPPING, "sampling action completed");
            reset();
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
            if (startRequested() || stopRequested() || pauseRequested())
              break;

            if (forceStateTransition() || isResetOver())
              setState(STATE_COLLECT);

            break;

          case STATE_COLLECT:
            if (startRequested() || stopRequested() || pauseRequested())
              break;
            
            if (forceStateTransition() || isCollectOver())
              setState(STATE_SELECT);

            break;

          case STATE_SELECT:
            if (startRequested() || stopRequested() || pauseRequested())
              break;

            if (forceStateTransition() || isSelectOver())
              setState(STATE_STORE);

            break;

          case STATE_STORE:
            if (startRequested() || stopRequested() || pauseRequested())
              break;

            if (forceStateTransition() || isStoreOver())
              setState(STATE_COMPLETED);

            break;

          case STATE_COMPLETED:
            if (startRequested() || stopRequested() || pauseRequested())
              break;

            if (forceStateTransition() || isResetOver())
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
      updateEntityState(void)
      {
        std::ostringstream ss;
        ss << (isActive() ? "active" : "idle");
        ss << " | m: " << c_mode_str_map.at(m_mode).front();

        ss << " | collector: ";

        ss << " wl=" << static_cast<int>(m_gpio_states[m_args.col_min_water_level_gpio])
                     << static_cast<int>(m_gpio_states[m_args.col_max_water_level_gpio]);

        ss << " wf=" << m_water_flows[m_col_water_flow_eid];

        ss << " p=";
        for (const auto& pwr_ch : m_args.col_pumps_pwr_ch_labels)
          ss << static_cast<int>(m_pwr_ch_states[pwr_ch]);
        
        ss << " | storage: ";
        
        ss << " wf=" << m_water_flows[m_sto_water_flow_eid];

        ss << " p=";
        for (const auto& pwr_ch : m_args.col_pumps_pwr_ch_labels)
          ss << static_cast<int>(m_pwr_ch_states[pwr_ch]);

        ss << " e=" << static_cast<int>(m_gpio_states[m_args.sto_start_ep_gpio])
                    << static_cast<int>(m_gpio_states[m_args.sto_end_ep_gpio]);

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
            updateEntityState();
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
