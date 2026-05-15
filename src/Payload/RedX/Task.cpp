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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdio>
#include <cstring>
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Payload
{
  namespace RedX
  {
    using DUNE_NAMESPACES;

    //! Maximum number of filters supported by the system.
    static constexpr uint8_t c_max_filters = 9;
    //! Sampling state report timeout.
    static constexpr float c_state_report_tout = 1;

    //! Task arguments.
    struct Arguments
    {
      //! ID of motor to control pump descending/asceding.
      int motor_id;
      //! Motor actuation value.
      int motor_actuation;
      //! Motor actuation timeout.
      float motor_timeout;
      //! ID of water pump.
      int wp_id;
      //! Water pump actuation value.
      int wp_actuation;
      //! Water pump depth.
      double wp_depth;
      //! Water pump depth entity label.
      std::string wp_elabel;
      //! Name of pump in tank.
      std::string press_pump_name;
      //! Full/empty tank timeout.
      float tank_timeout;
      //! Maximum water level gpio name.
      std::string max_wl_name;
      //! Minimum water level gpio name.
      std::string min_wl_name;
      //! Purge valve name.
      std::string purge_valve_name;
      //! Maximum time for purge operation.
      float purge_timeout;
      //! Name of filters valves.
      std::string filters_names[c_max_filters];
      //! Filter water flow entity label.
      std::string filters_water_flow_elabel;
      //! Number of filters to use in the system.
      unsigned int number_of_filters;
      //! Last filter that was used in the system.
      int last_filter_used;
      //! Maximum time to wait for a filter to fill up.
      int filter_fill_up_timeout;
      //! Restarting is allowed.
      bool restart_allowed;
      //! Pausing is allowed.
      bool pausing_allowed;
      //! Water flow threshold to consider a filter as clogged.
      double filter_clogged_wf_tld;
      //! Water flow timeout.
      float water_flow_timeout;
      //! Extra press pump label.
      std::string extra_press_pump_name;
    };

    //! Task to control RedX payload. 
    //!
    //! @author Pedro Gonçalves
    struct Task: public Tasks::Task
    {
      enum State
      {
        STATE_UNKNOWN,
        STATE_IDLE,
        STATE_INITIAL,
        STATE_DESCENDING_PUMP,
        STATE_SAMPLING,
        STATE_PURGING,
        STATE_FILTERING,
        STATE_DRAINING,
        STATE_NEXT_FILTER,
        STATE_COMPLETED,
        STATE_PAUSED
      };

      enum Request
      {
        REQ_NONE,
        REQ_START_SAMPLING,
        REQ_STOP_SAMPLING,
        REQ_PAUSE_SAMPLING,
        REQ_RESUME_SAMPLING
      };

      //! Task arguments.
      Arguments m_args;
      //! Timer for reporting state
      Counter<double> m_report_state_timer;
      //! Water pump depth source entity id.
      unsigned int m_wp_depth_source_eid;
      //! Water pump depth.
      double m_curr_wp_depth;
      //! Motor timer.
      Counter<double> m_motor_timer;
      //! Maximum water level sensor state.
      bool m_max_wl;
      //! Minimum water level sensor state.
      bool m_min_wl;
      //! Tank timer.
      Counter<double> m_tank_timer;
      //! Filters water flow source entity id.
      unsigned int m_filters_wf_source_eid;
      //! Filter timeout timer.
      Counter<double> m_filter_tout_timer;
      //! Available filters state map typedef <id, available>.
      typedef std::map<int, bool> AvailableFiltersStates;
      //! Available filters state map.
      AvailableFiltersStates m_available_filters;
      //! Total number of filters available.
      unsigned int m_total_available;
      //! Current filter being used.
      AvailableFiltersStates::iterator m_curr_filter;
      //! Water flow timer.
      Counter<double> m_water_flow_timer;
      //! Filters used counter.
      unsigned int m_filters_used;
      //! Purge timer.
      Counter<double> m_purge_timer;
      //! Sampling state report message.
      IMC::SamplingAction m_sa_report;
      //! Description of the entity state.
      std::string m_es_desc;
      //! Current state of the system.
      State m_curr_state;
      //! Last received request.
      Request m_recv_req;
      //! Paused state.
      State m_paused_state;
      //! Set of remote actions
      IMC::RemoteActionsRequest m_actions;
      //! Remote actions map.
      std::map<std::string, std::function<void(float value)>> m_remote_actions_map;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_report_state_timer(c_state_report_tout),
        m_curr_wp_depth(0.0),
        m_max_wl(false),
        m_min_wl(false),
        m_total_available(0),
        m_filters_used(0),
        m_curr_state(STATE_IDLE),
        m_recv_req(REQ_NONE),
        m_paused_state(STATE_UNKNOWN)
      {
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Motor - Id", m_args.motor_id)
        .defaultValue("-1")
        .minimumValue("0")
        .editable(false)
        .description("Id of motor that controls the pump descending/asceding.");

        param("Motor - Actuation", m_args.motor_actuation)
        .defaultValue("100")
        .minimumValue("0")
        .maximumValue("100")
        .units(Units::Types::Percentage)
        .description("Motor actuation value.");

        param("Motor - Timeout", m_args.motor_timeout)
        .defaultValue("10")
        .minimumValue("0")
        .units(Units::Types::Second)
        .description("Motor actuation timeout.");

        param("Water Pump - Id", m_args.wp_id)
        .defaultValue("-1")
        .minimumValue("0")
        .editable(false)
        .description("Id of water pump.");

        param("Water Pump - Actuation", m_args.wp_actuation)
        .defaultValue("100")
        .minimumValue("0")
        .maximumValue("100")
        .units(Units::Types::Percentage)
        .description("Water pump actuation value.");

        param("Water Pump - Depth", m_args.wp_depth)
        .defaultValue("0.0")
        .minimumValue("0.0")
        .units(Units::Types::Meter)
        .description("Water pump depth in meters.");

        param("Water Pump - Entity Label", m_args.wp_elabel)
        .defaultValue("")
        .editable(false)
        .description("Water pump entity label.");

        param("Press Pump - Power Channel Name", m_args.press_pump_name)
        .defaultValue("")
        .editable(false)
        .description("Power channel name for press pump.");

        param("Maximum Water Level - GPIO Name", m_args.max_wl_name)
        .defaultValue("")
        .editable(false)
        .description("Maximum water level gpio name.");

        param("Minimum Water Level - GPIO Name", m_args.min_wl_name)
        .defaultValue("")
        .editable(false)
        .description("Minimum water level gpio name.");

        param("Tank - Timeout", m_args.tank_timeout)
        .defaultValue("60")
        .minimumValue("0")
        .units(Units::Types::Second)
        .description("Tank operation timeout.");

        param("Purge Valve - Power Channel Name", m_args.purge_valve_name)
        .defaultValue("")
        .editable(false)
        .description("Power channel name for purge valve.");

        param("Purge Valve - Timeout", m_args.purge_timeout)
        .defaultValue("10")
        .minimumValue("1")
        .units(Units::Types::Second)
        .description("Purge valve operation timeout.");

        for (uint8_t i = 0; i < c_max_filters; ++i)
        {
          std::string option = String::str("Filter %u - Power Channel Name", i);
          param(option, m_args.filters_names[i])
          .defaultValue("")
          .description("Power channel name for filter valve");
        }

        param("Water Flow - Entity Label", m_args.filters_water_flow_elabel)
        .defaultValue("")
        .editable(false)
        .description("Entity label for filters water flow sensor.");

        param("Water Flow - Timeout", m_args.water_flow_timeout)
        .defaultValue("60")
        .minimumValue("0")
        .units(Units::Types::Second)
        .description("Timeout for water flow detection.");

        param("Water Flow - Clogged Filter Threshold", m_args.filter_clogged_wf_tld)
        .defaultValue("0.1")
        .minimumValue("0")
        .description("Water flow threshold to consider a filter as clogged.");

        param("Number of Filters to Use", m_args.number_of_filters)
        .defaultValue("1")
        .minimumValue("1")
        .maximumValue(std::to_string(c_max_filters))
        .description("Number of filters to use.");

        param("Last Filter Used", m_args.last_filter_used)
        .defaultValue("-1")
        .minimumValue("-1")
        .maximumValue(std::to_string(c_max_filters - 1))
        .description("Last filter that was used in the system.");

        param("Filter Fill Up Timeout", m_args.filter_fill_up_timeout)
        .defaultValue("60")
        .minimumValue("0")
        .units(Units::Types::Second)
        .description("Maximum time to wait for a filter to fill up in seconds.");

        param("Restart Allowed", m_args.restart_allowed)
        .defaultValue("false")
        .editable(false)
        .description("Indicates if restarting is allowed.");

        param("Pause Allowed", m_args.pausing_allowed)
        .defaultValue("false")
        .editable(false)
        .description("Indicates if pausing is allowed.");

        param("Extra Press Pump - Power Channel Name", m_args.extra_press_pump_name)
        .defaultValue("")
        .editable(false)
        .description("Power channel name for extra pressure pump.");

        m_sa_report.action = IMC::SamplingAction::SA_REPORT;

        bind<IMC::Depth>(this);
        bind<IMC::GpioState>(this);
        bind<IMC::WaterFlow>(this);
        bind<IMC::SamplingAction>(this);
      }

      void
      onActivation(void) override
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void) override
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onUpdateParameters(void) override
      {
        if (paramChanged(m_args.wp_depth))
          spew("payload settings : water pump depth set to : %.2f meters", m_args.wp_depth);

        if (paramChanged(m_args.filter_fill_up_timeout))
          spew("payload settings : filter fill up timeout set to : %d seconds", m_args.filter_fill_up_timeout);
        
        if(paramChanged(m_args.purge_timeout))
          spew("payload settings : purge timeout set to : %.1f seconds", m_args.purge_timeout);

        if (paramChanged(m_args.number_of_filters))
          spew("payload settings : number of filters set to : %d", m_args.number_of_filters);

        if (paramChanged(m_args.motor_actuation))
          spew("payload settings : motor actuation set to : %d%%", m_args.motor_actuation);

        if (paramChanged(m_args.wp_actuation))
          spew("payload settings : water pump actuation set to : %d%%", m_args.wp_actuation);
      }

      void
      onEntityResolution(void) override
      {
        getEid(m_wp_depth_source_eid, m_args.wp_elabel);
        getEid(m_filters_wf_source_eid, m_args.filters_water_flow_elabel);
      }

      void
      getEid(unsigned int& entity_id, const std::string& label)
      {
        try
        {
          entity_id = resolveEntity(label);
        }
        catch (const Entities::EntityDataBase::NonexistentLabel& e)
        {
          war("%s", e.what());
          entity_id = DUNE_IMC_CONST_UNK_EID;
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void) override
      {
        for (int i = 0; i < c_max_filters; ++i)
        {
          m_available_filters[i] = (m_args.last_filter_used < i) && !m_args.filters_names[i].empty();
          if (m_available_filters[i])
            m_total_available++;
        }
      }

      void
      consume(const IMC::Depth* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_wp_depth_source_eid)
          return;

        m_curr_wp_depth = msg->value;
        spew("received water pump depth update: %.2f.", msg->value);
      }

      void
      consume(const IMC::GpioState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->name == m_args.max_wl_name)
        {
          m_max_wl = msg->value > 0;
          spew("received maximum water level update: %s.", m_max_wl ? "HIGH" : "LOW");
        }

        if (msg->name == m_args.min_wl_name)
        {
          m_min_wl = msg->value > 0;
          spew("received minimum water level update: %s.", m_min_wl ? "HIGH" : "LOW");
        }
      }

      void
      consume(const IMC::WaterFlow* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_filters_wf_source_eid)
          return;

        spew("received filters water flow update: %.2f.", msg->value);
        if (msg->value > m_args.filter_clogged_wf_tld)
          m_water_flow_timer.reset();
      }

      void
      consume(const IMC::SamplingAction* msg)
      {
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
      setPowerChannel(const std::string& channel_name, bool operation, fp64_t sched_time = 0.0)
      {
        IMC::PowerChannelControl msg;
        msg.name = channel_name;
        msg.op = operation ? PowerChannelControl::PCC_OP_TURN_ON : PowerChannelControl::PCC_OP_TURN_OFF;
        msg.sched_time = sched_time;
        dispatch(msg);
        trace("set power channel '%s': %s", channel_name.c_str(), operation ? "on" : "off");
      }

      void
      setActuation(uint8_t id, float value)
      {
        IMC::SetThrusterActuation msg;
        msg.id = id;
        msg.value = value;
        dispatch(msg);
        trace("set actuation for id '%d': %.2f", id, value);
      }

      void
      startMotor(bool reverse = false)
      {
        setActuation(m_args.motor_id, reverse ? -m_args.motor_actuation / 100.0f : m_args.motor_actuation / 100.0f);
      }

      void
      stopMotor(void)
      {
        setActuation(m_args.motor_id, 0.0f);
      }

      void
      startWaterPump(void)
      {
        setActuation(m_args.wp_id, m_args.wp_actuation / 100.0f);
      }

      void
      stopWaterPump(void)
      {
        setActuation(m_args.wp_id, 0.0f);
      }

      void
      startPressPump(void)
      {
        setPowerChannel(m_args.press_pump_name, true);
        if (!m_args.extra_press_pump_name.empty())
          setPowerChannel(m_args.extra_press_pump_name, true);
      }

      void
      stopPressPump(void)
      {
        setPowerChannel(m_args.press_pump_name, false);
        if (!m_args.extra_press_pump_name.empty())
          setPowerChannel(m_args.extra_press_pump_name, false);
      }

      void
      openPurge(void)
      {
        setPowerChannel(m_args.purge_valve_name, true);
      }

      void
      closePurge(void)
      {
        setPowerChannel(m_args.purge_valve_name, false);
      }

      void
      openValve(unsigned int filter_id)
      {
        setPowerChannel(m_args.filters_names[filter_id], true);
      }

      void
      closeValve(unsigned int filter_id)
      {
        setPowerChannel(m_args.filters_names[filter_id], false);
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
        trace("received request to start sampling");
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
        trace("received request to stop sampling");
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

        setState(STATE_PAUSED);
        trace("received request to pause sampling");
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

        setState((m_paused_state != STATE_UNKNOWN) ? m_paused_state : STATE_IDLE);
        trace("received request to resume sampling action");
        return true;
      }

      void
      setState(State state)
      {
        m_curr_state = state;

        switch (m_curr_state)
        {
        case STATE_INITIAL:
          updateSamplingState(IMC::SamplingAction::SAT_STATE_STARTING, "initializing sampling action");
          m_filters_used = 0;
          break;

        case STATE_DESCENDING_PUMP:
          updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "descending pump to target depth");
          startMotor();
          m_motor_timer.setTop(m_args.motor_timeout);
          break;

        case STATE_SAMPLING:
          updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "sampling at target depth");
          startWaterPump();
          m_tank_timer.setTop(m_args.tank_timeout);
          break;

        case STATE_PURGING:
          updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "purging filters");
          startPressPump();
          openPurge();
          m_purge_timer.setTop(m_args.purge_timeout);
          break;

        case STATE_FILTERING:
          updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "filtering water");
          openValve(m_curr_filter->first);
          m_filter_tout_timer.setTop(m_args.filter_fill_up_timeout);
          m_water_flow_timer.setTop(m_args.water_flow_timeout);
          break;

        case STATE_DRAINING:
          updateSamplingState(IMC::SamplingAction::SAT_STATE_SAMPLING, "draining water");
          openPurge();
          m_tank_timer.setTop(m_args.tank_timeout);
          m_water_flow_timer.setTop(m_args.water_flow_timeout);
          break;

        case STATE_COMPLETED:
          updateSamplingState(IMC::SamplingAction::SAT_STATE_STOPPING, "sampling completed");
          startMotor(true);
          m_motor_timer.setTop(m_args.motor_timeout);
          break;

        case STATE_IDLE:
          updateSamplingState(IMC::SamplingAction::SAT_STATE_IDLE, "ready for sampling");
          break;

        default:
          break;
        }
      }

      bool
      filtering(void)
      {
        return (!m_filter_tout_timer.overflow() &&
                m_min_wl &&
                !m_water_flow_timer.overflow());
      }

      bool
      draining(void)
      {
        return (m_min_wl &&
                !m_tank_timer.overflow() &&
                !m_water_flow_timer.overflow());
      }

      bool
      nextFilter(void)
      {
        if (m_filters_used >= m_args.number_of_filters)
          return false;

        if (m_filters_used == 0)
          m_curr_filter = (m_args.last_filter_used >= 0) ? std::next(m_available_filters.find(m_args.last_filter_used)) : m_available_filters.begin();

        while (m_curr_filter != m_available_filters.end() && !m_curr_filter->second)
          ++m_curr_filter;

        return m_curr_filter != m_available_filters.end();
      }

      void
      updateMachineState(void)
      {
        switch (m_curr_state)
        {
        case STATE_IDLE:
          startRequested(false);
          break;

        case STATE_INITIAL:
          if (startRequested() || stopRequested() || pauseRequested())
            break;

          if (m_args.number_of_filters > m_total_available && m_total_available > 0)
          {
            inf("number of filters to use (%u) is higher than total available filters (%u), adjusting to use all available filters", m_args.number_of_filters, m_total_available);
            applyEntityParameter(&m_args.number_of_filters, m_total_available);
          }

          if (nextFilter())
          {
            setState(STATE_DESCENDING_PUMP);
            trace("transitioning to DESCENDING_PUMP state.");
          }
          else
          {
            setState(STATE_COMPLETED);
            trace("no available filters: transitioning to COMPLETED state.");
          }

          break;

        case STATE_DESCENDING_PUMP:
          if (startRequested() || stopRequested() || pauseRequested())
            break;

          if (m_curr_wp_depth >= m_args.wp_depth)
          {
            stopMotor();
            setState(STATE_SAMPLING);
            trace("reached target depth of %.2f meters: transitioning to SAMPLING state and starting water pump", m_args.wp_depth);
          }
          else if (m_motor_timer.overflow())
          {
            stopMotor();
            setState(STATE_SAMPLING);
            trace("motor actuation timeout reached: transitioning to SAMPLING state and starting water pump");
          }

          break;

        case STATE_SAMPLING:
          if (startRequested() || stopRequested() || pauseRequested())
            break;

          if (m_max_wl)
          {
            stopWaterPump();
            setState(STATE_PURGING);
            trace("maximum water level reached: stopping water pump, transitioning to PURGING state and starting purge valve: timeout for purge operation: %.1f seconds", m_args.purge_timeout);
          }
          else if (m_tank_timer.overflow())
          {
            stopWaterPump();
            setState(STATE_PURGING);
            trace("tank operation timeout reached: stopping water pump, transitioning to PURGING state and starting purge valve: timeout for purge operation: %.1f seconds", m_args.purge_timeout);
          }

          break;

        case STATE_PURGING:
          if (startRequested() || stopRequested() || pauseRequested())
            break;

          if (m_purge_timer.overflow())
          {
            closePurge();
            setState(STATE_FILTERING);
            trace("stopping purge valve, transitioning to FILTERING state and starting filter valve");
          }

          break;

        case STATE_FILTERING:
          if (startRequested() || stopRequested() || pauseRequested())
            break;

          if (!filtering())
          {
            const auto id = m_curr_filter->first;
            closeValve(id);
            m_filters_used++;
            m_curr_filter->second = false;
            m_total_available--;
            applyEntityParameter(&m_args.filters_names[id], "");
            applyEntityParameter(&m_args.last_filter_used, id);
            setState(STATE_DRAINING);
            trace("stopping filter valve, transitioning to DRAINING state and starting purge valve: timeout for draining operation: %.1f seconds", m_args.purge_timeout);
          }

          break;

        case STATE_DRAINING:
          if (startRequested() || stopRequested() || pauseRequested())
            break;

          if (!draining())
          {
            stopPressPump();
            closePurge();
            setState(STATE_NEXT_FILTER);
            trace("stopping purge valve, transitioning to NEXT_FILTER state");
          }

          break;

        case STATE_NEXT_FILTER:
          if (startRequested() || stopRequested() || pauseRequested())
            break;

          if (nextFilter())
          {
            setState(STATE_SAMPLING);
            trace("next filter: transitioning to SAMPLING state");
          }
          else
          {
            setState(STATE_COMPLETED);
            trace("transitioning to COMPLETED state");
          }

          break;

        case STATE_COMPLETED:
          if (m_curr_wp_depth <= 0.0f)
          {
            stopMotor();
            setState(STATE_IDLE);
            trace("water pump recovery complete: transitioning to IDLE state");
          }
          else if (m_motor_timer.overflow())
          {
            stopMotor();
            setState(STATE_IDLE);
            trace("motor actuation timeout reached: transitioning to IDLE state");
          }
          
          break;

        case STATE_PAUSED:
          resumeRequested();
          break;
          
        default:
          setState(STATE_IDLE);
          break;
        }

        if (m_report_state_timer.overflow())
        {
          updateEntityState();
          dispatch(m_sa_report);
          m_report_state_timer.reset();
        }
      }
      
      void
      produceEntityStateDescription(std::string& description)
      {
        std::ostringstream ss;
        ss << "active";

        switch (m_curr_state)
        {
        case STATE_INITIAL:
          ss << " | initializing sampling action";
          break;

        case STATE_DESCENDING_PUMP:
          ss << " | descending water pump";
          break;

        case STATE_SAMPLING:
          ss << " | sampling at depth " << m_args.wp_depth << " meters";
          break;

        case STATE_PURGING:
          ss << " | purging filters";
          break;

        case STATE_FILTERING:
          ss << " | filtering | using filter " << m_curr_filter->first;
          break;

        case STATE_DRAINING:
          ss << " | draining";
          break;

        case STATE_NEXT_FILTER:
          ss << " | next filter";
          break;

        case STATE_COMPLETED:
          ss << " | completed | ascending water pump";
          break;

        case STATE_IDLE:
        default:
          description = "idle";
          return;
        }

        description = ss.str();
      }

      void
      updateEntityState(void)
      {
        produceEntityStateDescription(m_es_desc);
        setEntityState(IMC::EntityState::ESTA_NORMAL, m_es_desc.c_str());
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
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (isActive())
            updateMachineState();
        }
      }
    };
  }
}

DUNE_TASK
