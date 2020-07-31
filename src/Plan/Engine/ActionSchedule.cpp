//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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

// C++ standard library headers.
#include <algorithm>

// Local headers
#include "ActionSchedule.hpp"

using namespace DUNE;

namespace Plan
{
  namespace Engine
  {
    ActionSchedule::ActionSchedule(
    Tasks::Task* task, const IMC::PlanSpecification* spec,
    const std::vector<IMC::PlanManeuver const*>& plan_maneuvers,
    std::unique_ptr<Timeline> tl,
    const std::map<std::string, IMC::EntityInfo>& cinfo,
    ComponentActiveTime* cat)
    : m_execution_duration(tl->getExecutionDuration()), m_cinfo(&cinfo),
      m_timed_action_schedule(nullptr), m_time_left(m_execution_duration),
      m_timeline(std::move(tl))
    {
      std::map<std::string, TimedStack> unscheduled_actions;

      m_plan_actions.start_actions
      = parseActions(task, spec->start_actions, m_execution_duration,
                     &unscheduled_actions, true);

      for (IMC::PlanManeuver const* maneuver : plan_maneuvers)
      {
        std::string const& id = maneuver->maneuver_id;

        auto start_actions = parseActions(task, maneuver->start_actions,
                                          m_timeline->getManeuverStartETA(id),
                                          &unscheduled_actions, true, id);

        auto end_actions = parseActions(task, maneuver->end_actions,
                                        m_timeline->getManeuverEndETA(id),
                                        &unscheduled_actions, false, id);

        m_maneuver_actions.emplace(id, EventActions{ std::move(start_actions),
                                                     std::move(end_actions) });
      }

      m_plan_actions.end_actions
      = parseActions(task, spec->end_actions, 0.0, &unscheduled_actions, false);

      // Create a proper schedule from the set of unscheduled actions
      if (!unscheduled_actions.empty())
        m_timed_action_schedule
        = scheduleTimedActions(std::move(unscheduled_actions), plan_maneuvers,
                               cat);

      // Update timeline with scheduled calibration time if any
      m_timeline->setPlanETA(getCalibrationTime() + m_execution_duration);
    }

    ActionSchedule::ActionSchedule(
    Tasks::Task* task, const IMC::PlanSpecification* spec,
    const std::vector<IMC::PlanManeuver const*>& plan_maneuvers,
    const std::map<std::string, IMC::EntityInfo>& cinfo)
    : m_execution_duration(-1.0f), m_cinfo(&cinfo),
      m_timed_action_schedule(nullptr), m_time_left(-1.0), m_timeline(nullptr)
    {
      m_plan_actions.start_actions = parseActions(task, spec->start_actions);

      for (IMC::PlanManeuver const* maneuver : plan_maneuvers)
      {
        auto start_actions = parseActions(task, maneuver->start_actions);

        auto end_actions = parseActions(task, maneuver->end_actions);

        m_maneuver_actions.emplace(maneuver->maneuver_id,
                                   EventActions{ std::move(start_actions),
                                                 std::move(end_actions) });
      }

      m_plan_actions.end_actions = parseActions(task, spec->end_actions, 0.0);
    }

    void
    ActionSchedule::updateSchedule(Tasks::Task* task, float time_left)
    {
      if (time_left < 0.0f)
        return;

      m_time_left = time_left;

      if (!m_timed_action_schedule)
        return;

      m_timed_action_schedule->onProgress(time_left, task, &m_reqs);
    }

    void
    ActionSchedule::flushTimed(Tasks::Task* task)
    {
      if (m_timed_action_schedule)
        m_timed_action_schedule->flush(task);
    }

    void
    ActionSchedule::planStarted(Tasks::Task* task,
                                std::vector<std::string>& affected)
    {
      // Order all entities to push their parameters
      for (auto const& entity : m_eas)
      {
        // save the set of entities in the list
        affected.push_back(entity.first);

        // push entity parameters, so later they'll be popped
        IMC::PushEntityParameters push;
        push.name = entity.first;
        task->dispatch(push);
      }

      dispatchActions(task, m_plan_actions.start_actions);
    }

    float
    ActionSchedule::planResumed(std::string const& maneuver_id,
                                Tasks::Task* task,
                                std::vector<std::string>& affected)
    {
      planStarted(task, affected);

      if (!m_timed_action_schedule)
        return -1.0;

      return m_timed_action_schedule->calibrationTime(
      m_timeline->getManeuverStartETA(maneuver_id));
    }

    void
    ActionSchedule::planStopped(Tasks::Task* task,
                                const std::vector<std::string>& affected)
    {
      dispatchActions(task, m_plan_actions.end_actions);

      for (std::string const& entity : affected)
      {
        IMC::PopEntityParameters pop;
        pop.name = entity;
        task->dispatch(pop);
      }
    }

    void
    ActionSchedule::planPaused(std::string const& maneuver_id,
                               Tasks::Task* task,
                               const std::vector<std::string>& affected)
    {
      planStopped(task, affected);

      if (m_timed_action_schedule)
        m_timed_action_schedule->planPaused(maneuver_id, task);
    }

    void
    ActionSchedule::maneuverStarted(Tasks::Task* task, const std::string& id)
    {
      EventMap::iterator actions = m_maneuver_actions.find(id);

      if (actions != m_maneuver_actions.end())
        dispatchActions(task, actions->second.start_actions);
    }

    void
    ActionSchedule::maneuverDone(Tasks::Task* task, const std::string& id)
    {
      EventMap::iterator actions = m_maneuver_actions.find(id);

      if (actions != m_maneuver_actions.end())
        dispatchActions(task, actions->second.end_actions);

      if (m_timed_action_schedule)
        m_timed_action_schedule->maneuverDone(id);
    }

    bool
    ActionSchedule::onEntityActivationState(
    Tasks::Task* task, const std::string& id,
    const IMC::EntityActivationState* msg)
    {
      if (m_eas.empty())
        return true;

      updateEAS(id, msg);

      if (m_reqs.empty())
        return true;

      auto action_itr = m_reqs.find(id);

      if (action_itr == m_reqs.end())
        return true;

      Action const& action = action_itr->second;

      if (!action.activation)
      {
        if (msg->state == IMC::EntityActivationState::EAS_DEACT_DONE
            || msg->state == IMC::EntityActivationState::EAS_INACTIVE)
          m_reqs.erase(action_itr);

        return true;
      }

      if (msg->state == IMC::EntityActivationState::EAS_ACT_FAIL)
      {
        m_reqs.erase(action_itr);
        return false;
      }

      if (msg->state != IMC::EntityActivationState::EAS_ACT_DONE
          && msg->state != IMC::EntityActivationState::EAS_ACTIVE)
        return true;

      float gap = m_time_left - (action.scheduled_time - getActivationTime(id));

      if (gap > 0)
        task->inf(DTR("schedule: %s active on time, +%.1f seconds"), id.c_str(),
                  gap);
      else
        task->war(DTR("schedule: %s activation missed deadline, %.1f seconds"),
                  id.c_str(), gap);

      m_reqs.erase(action_itr);

      return true;
    }

    bool
    ActionSchedule::waitingForDevice(void)
    {
      // if there are any requests hanging, then we're waiting
      if (!m_reqs.empty())
        return true;

      if (!m_timed_action_schedule)
        return false;

      return m_timed_action_schedule->waiting(m_time_left);
    }

    float
    ActionSchedule::calibTimeLeft(void)
    {
      if (!m_reqs.empty())
        return -1.0;

      if (!m_timed_action_schedule)
        return -1.0;

      return m_timed_action_schedule->calibrationTime();
    }

    //! Check if a list of parameters has parameter named "Active"
    static IMC::MessageList<IMC::EntityParameter>::const_iterator
    getParameterActive(
    const IMC::MessageList<IMC::EntityParameter>& params) noexcept
    {
      return std::find_if(std::begin(params), std::end(params),
                          [](IMC::EntityParameter const* params_) {
                            return params_->name == "Active";
                          });
    }

    static void
    getManeuverActionsActiveTime(
    std::vector<IMC::SetEntityParameters*> const& actions, float eta,
    ComponentActiveTime* cat, std::set<std::string>* active_entities)
    {
      for (IMC::SetEntityParameters const* action : actions)
      {
        std::string const& entity_id = action->name;

        auto param_active = getParameterActive(action->params);
        if (param_active == action->params.end())
          continue;

        // Check if the entity is active at this point.
        bool const is_active
        = (active_entities->find(entity_id) != active_entities->end());

        // Check if the entity will be activated at this point.
        // If the value is anything other than "true" assume it will be
        // deactivated.
        bool const will_activate = (*param_active)->value == "true";

        if (will_activate && !is_active)
        {
          cat->addActiveTime(entity_id, eta);
          active_entities->insert(entity_id);
        }

        if (!will_activate && is_active)
        {
          cat->subtractActiveTime(entity_id, eta);
          active_entities->erase(entity_id);
        }
      }
    }

    static void
    getTimedActionsActiveTime(std::map<std::string, TimedStack> timed_actions,
                              ComponentActiveTime* cat,
                              std::set<std::string>* active_entities)
    {
      for (auto& actions : timed_actions)
      {
        while (!actions.second.empty())
        {
          TimedAction const* action = &actions.second.back();
          std::string const& entity = actions.first;

          // Check if the entity is active at this point.
          bool const is_active
          = (active_entities->find(entity) != active_entities->end());

          // Check whether action will activate or deactivate the entity.
          bool const will_activate = action->activation;

          if (will_activate && !is_active)
          {
            cat->addActiveTime(entity, action->sched_time);
            active_entities->insert(entity);
          }

          if (!will_activate && is_active)
          {
            cat->subtractActiveTime(entity, action->sched_time);
            active_entities->erase(entity);
          }

          actions.second.pop_back();
        }
      }
    }

    void
    ActionSchedule::fillComponentActiveTime(
    const std::vector<IMC::PlanManeuver const*>& plan_maneuvers,
    std::map<std::string, TimedStack> const& timed_actions,
    ComponentActiveTime* cat) const
    {
      cat->clear();
      std::set<std::string> active_entities;

      // Check which entities will be activated when plan execution begins.
      for (IMC::SetEntityParameters const* action :
           m_plan_actions.start_actions)
      {
        auto param_active = getParameterActive(action->params);

        if (param_active == action->params.end())
          continue;

        if ((*param_active)->value == "true")
          active_entities.insert(action->name);
        else
          active_entities.erase(action->name);
      }

      // Add the entities active when the plan begins.
      for (auto const& entity : active_entities)
        cat->addActiveTime(entity, m_timeline->getPlanETA());

      // Add activations/deactivations on maneuver start/end.
      for (IMC::PlanManeuver const* maneuver : plan_maneuvers)
      {
        std::string const& maneuver_id = maneuver->maneuver_id;
        auto actions = m_maneuver_actions.find(maneuver_id);

        if (actions == m_maneuver_actions.end())
          continue;

        getManeuverActionsActiveTime(actions->second.start_actions,
                                     m_timeline->getManeuverStartETA(
                                     maneuver_id),
                                     cat, &active_entities);

        getManeuverActionsActiveTime(actions->second.end_actions,
                                     m_timeline->getManeuverEndETA(maneuver_id),
                                     cat, &active_entities);
      }

      // Add timed activations/deactivations
      getTimedActionsActiveTime(std::move(timed_actions), cat,
                                &active_entities);
    }

    static void
    addTimedAction(std::map<std::string, TimedStack>* action_map,
                   const std::string& name, TimedAction action,
                   int act_time = -1) noexcept
    {
      auto const action_stack = action_map->find(name);

      if (act_time > 0)
      {
        action.sched_time += act_time;
        action.prescheduled = true;
      }
      else
      {
        action.prescheduled = false;
      }

      if (action_stack != action_map->end())
      {
        action_stack->second.push_back(action);
        return;
      }

      TimedStack q;
      q.push_back(action);
      action_map->emplace(name, q);
    }

    static void
    addUnscheduledAction(std::map<std::string, TimedStack>* action_map,
                         std::string const& id, bool start,
                         IMC::SetEntityParameters* sep, bool activation,
                         float eta)
    {
      TimedAction action;
      action.id = id;
      action.start = start;
      action.activation = activation;
      action.list = sep;
      action.sched_time = eta;
      action.ignore = false;
      action.prescheduled = false;

      addTimedAction(action_map, sep->name, action);
    }

    std::vector<IMC::SetEntityParameters*>
    ActionSchedule::parseActions(
    Tasks::Task* task, const IMC::MessageList<IMC::Message>& actions, float eta,
    std::map<std::string, TimedStack>* unscheduled_actions, bool start,
    std::string const& id)
    {
      if (actions.empty())
        return {};

      std::vector<IMC::SetEntityParameters*> event_actions;

      for (IMC::Message* action : actions)
      {
        if (action->getId() != DUNE_IMC_SETENTITYPARAMETERS)
          continue;

        auto sep = static_cast<IMC::SetEntityParameters*>(action);

        if (!sep->params.size())
          continue;

        // Check if we have an EntityInfo message for this entity
        auto entity = m_cinfo->find(sep->name);
        if (entity == m_cinfo->end())
        {
          task->war(DTR("schedule: entity label %s not found"),
                    sep->name.c_str());
          continue;
        }

        m_eas.emplace(sep->name, IMC::EntityActivationState::EAS_INACTIVE);

        auto param_active = getParameterActive(sep->params);

        std::uint16_t const act_time = entity->second.act_time;
        std::uint16_t const deact_time = entity->second.deact_time;

        if (m_execution_duration >= 0.0 && unscheduled_actions
            && param_active != sep->params.end()
            && (act_time > 0 || deact_time > 0))
        {
          // Schedule a time-based action (dispatched according to plan
          // progress) so that we can compensate for de/activation time.
          bool activation = ((*param_active)->value == "true");

          // if the eta is not valid, schedule action to the end of the plan
          addUnscheduledAction(unscheduled_actions, id, start, sep, activation,
                               std::max(eta, 0.0f));
          continue;
        }

        event_actions.push_back(sep);
      }

      return event_actions;
    }

    void
    ActionSchedule::updateEAS(const std::string& id,
                              const IMC::EntityActivationState* msg)
    {
      auto entity = m_eas.find(id);

      if (entity == m_eas.end())
        return;

      entity->second = msg->state;
    }

    void
    ActionSchedule::processRequest(const std::string& id, const Action& action)
    {
      uint8_t const state = m_eas.find(id)->second;

      bool add_req = false;

      if (action.activation)
      {
        bool active = (state == IMC::EntityActivationState::EAS_ACTIVE
                       || state == IMC::EntityActivationState::EAS_ACT_DONE);

        // do not add request if device is already active
        add_req = !active && action.prescheduled;
      }
      else
      {
        // do not add request if device is already inactive
        add_req = !(state == IMC::EntityActivationState::EAS_INACTIVE
                    || state == IMC::EntityActivationState::EAS_DEACT_DONE);
      }

      if (!add_req)
        return;

      auto request = m_reqs.find(id);

      if (request != m_reqs.end())
        m_reqs.erase(request);

      m_reqs.emplace(id, action);
    }

    std::unique_ptr<TimedActionSchedule>
    ActionSchedule::scheduleTimedActions(
    std::map<std::string, TimedStack> unscheduled_actions,
    std::vector<DUNE::IMC::PlanManeuver const*> const& plan_maneuvers,
    ComponentActiveTime* cat) const
    {
      std::map<std::string, TimedStack> timed_actions;

      for (auto& entity : unscheduled_actions)
      {
        std::string const& elabel = entity.first;
        TimedStack& actions = entity.second;

        float const act_time = getActivationTime(elabel);
        float const deact_time = getDeactivationTime(elabel);

        // Iterate through this entity's actions backwards in time, starting
        // from the action closest to the end of the plan
        while (!actions.empty())
        {
          TimedAction action = actions.back();
          actions.pop_back();

          if (!action.activation)
          {
            // deactivations are never pre-scheduled.
            addTimedAction(&timed_actions, elabel, action);
            continue;
          }

          if (actions.empty())
          {
            addTimedAction(&timed_actions, elabel, action, act_time);
            continue;
          }

          auto prev_action = actions.begin();

          // Check previous actions to remove deactivations that would occur too
          // close to the scheduled time for this action. Stop once the previous
          // action is an activation, a valid deactivation or when all previous
          // actions have been removed.
          for (; prev_action != actions.end(); ++prev_action)
          {
            if (prev_action->activation)
            {
              // if previous action is activation, do not pre-schedule
              addTimedAction(&timed_actions, elabel, action);
              break;
            }

            float const min_deactivation_eta
            = deact_time + act_time + action.sched_time;

            // check if the gap between deactivation and and activation is big
            // enough
            if (prev_action->sched_time > min_deactivation_eta)
            {
              addTimedAction(&timed_actions, elabel, action, act_time);
              break;
            }

            // the deactivation would happen too close to the activation
            prev_action->ignore = true;
          }

          // all previous actions were ignored
          if (prev_action == actions.end())
            addTimedAction(&timed_actions, elabel, action, act_time);
        }
      }

      fillComponentActiveTime(plan_maneuvers, timed_actions, cat);

      return std::make_unique<TimedActionSchedule>(m_execution_duration,
                                                   std::move(timed_actions));
    }
  } // namespace Engine
} // namespace Plan
