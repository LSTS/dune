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
    ActionSchedule::ActionSchedule(Tasks::Task* task, const IMC::PlanSpecification* spec,
                                   const std::vector<IMC::PlanManeuver const*>& plan_maneuvers,
                                   const Timeline& tline,
                                   const std::map<std::string, IMC::EntityInfo>& cinfo):
      m_execution_duration(tline.getExecutionDuration()),
      m_cinfo(&cinfo),
      m_earliest(0.0f)
    {
      m_plan_actions.start_actions
      = parseActions(task, spec->start_actions, m_execution_duration);

      for (IMC::PlanManeuver const* maneuver : plan_maneuvers)
      {
        auto start_actions
        = parseActions(task, maneuver->start_actions,
                       tline.getManeuverStartETA(maneuver->maneuver_id));

        auto end_actions
        = parseActions(task, maneuver->end_actions,
                       tline.getManeuverEndETA(maneuver->maneuver_id));

        m_maneuver_actions.emplace(maneuver->maneuver_id,
                                   EventActions{ std::move(start_actions),
                                                 std::move(end_actions) });
      }

      m_plan_actions.end_actions = parseActions(task, spec->end_actions, 0.0);

      // Create a proper schedule from the set of unscheduled actions
      scheduleTimedActions();

      std::map<std::string, TimedStack>::const_iterator next;
      next = nextSchedule();

      if (next != m_timed.end())
        m_earliest = next->second.top().sched_time;
    }

    ActionSchedule::ActionSchedule(Tasks::Task* task, const IMC::PlanSpecification* spec,
                                   const std::vector<IMC::PlanManeuver const*>& plan_maneuvers,
                                   const std::map<std::string, IMC::EntityInfo>& cinfo):
      m_execution_duration(-1.0f),
      m_cinfo(&cinfo),
      m_earliest(0.0f)
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
      if (time_left < 0.0)
        return;

      m_time_left = time_left;

      for (auto next = nextSchedule(); next != m_timed.end();
           next = nextSchedule())
      {
        TimedStack& action_stack = next->second;

        // Check if the time is right
        if (action_stack.top().sched_time < time_left)
          break;

        dispatchActions(task, action_stack.top().list);

        processRequest(next->first, action_stack.top());

        action_stack.pop();

        if (action_stack.empty())
          m_timed.erase(next);
      }
    }

    void
    ActionSchedule::flushTimed(Tasks::Task* task)
    {
      for(auto next = nextSchedule(); next != m_timed.end();
          next = nextSchedule())
      {
        TimedStack& action_stack = next->second;

        // do not check if the time is right

        dispatchActions(task, action_stack.top().list);

        processRequest(next->first, action_stack.top());

        action_stack.pop();

        if (action_stack.empty())
          m_timed.erase(next);
      }
    }

    void
    ActionSchedule::planStarted(Tasks::Task* task, std::vector<std::string>& affected)
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

    void
    ActionSchedule::planStopped(Tasks::Task* task, const std::vector<std::string>& affected)
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

      std::map<std::string, TimedAction>::const_iterator action_itr;
      action_itr = m_reqs.find(id);

      if (action_itr == m_reqs.end())
        return true;

      TimedAction const& action = action_itr->second;

      if (action.type == TYPE_ACT)
      {
        if (msg->state == IMC::EntityActivationState::EAS_ACT_DONE ||
            msg->state == IMC::EntityActivationState::EAS_ACTIVE)
        {
          float gap = m_time_left - (action.sched_time - getActivationTime(id));

          if (gap > 0)
            task->inf(DTR("schedule: %s active on time, +%.1f seconds"),
                        id.c_str(), gap);
          else
            task->war(DTR("schedule: %s activation missed deadline, %.1f seconds"),
                        id.c_str(), gap);

          m_reqs.erase(action_itr);
        }
        else if (msg->state == IMC::EntityActivationState::EAS_ACT_FAIL)
        {
          m_reqs.erase(action_itr);

          return false;
        }
      }
      else
      {
        if (msg->state == IMC::EntityActivationState::EAS_DEACT_DONE ||
            msg->state == IMC::EntityActivationState::EAS_INACTIVE)
          m_reqs.erase(action_itr);
      }

      return true;
    }

    bool
    ActionSchedule::waitingForDevice(void)
    {
      // if there are any requests hanging, then we're waiting
      if (!m_reqs.empty())
        return true;

      std::map<std::string, TimedStack>::const_iterator next;
      next = nextSchedule();

      if (next != m_timed.end())
      {
        if (next->second.top().sched_time >= m_execution_duration)
          return true;
      }

      return false;
    }

    float
    ActionSchedule::calibTimeLeft(void)
    {
      if (!m_reqs.empty())
        return -1.0;

      std::map<std::string, TimedStack>::const_iterator next;
      next = nextSchedule();

      if (next != m_timed.end())
        return next->second.top().sched_time - m_execution_duration;

      return -1.0;
    }

    void
    ActionSchedule::fillComponentActiveTime(const std::vector<IMC::PlanManeuver const*>& plan_maneuvers,
                                            const Timeline& timeline,
                                            ComponentActiveTime& cat)
    {
      cat.clear();
      std::set<std::string> active_entities;

      {
        for (IMC::SetEntityParameters const* action : m_plan_actions.start_actions)
        {
          // Iterator to parameter active
          IMC::MessageList<IMC::EntityParameter>::const_iterator act_itr;
          act_itr = getParameterActive(action->params);

          if (act_itr == action->params.end())
            continue;

          if ((*act_itr)->value == "true")
            active_entities.insert(action->name);
          else
            active_entities.erase(action->name);
        }
      }

      // Update ComponentActiveTime
      {
        std::set<std::string>::const_iterator cat_itr;
        cat_itr = active_entities.begin();
        for (; cat_itr != active_entities.end(); ++cat_itr)
          cat.addActiveTime(*cat_itr, timeline.getPlanETA());
      }

      // Get the maneuver start and end actions
      for (IMC::PlanManeuver const* maneuver : plan_maneuvers)
      {
        std::string maneuver_id = maneuver->maneuver_id;

        EventMap::const_iterator eitr;
        eitr = m_maneuver_actions.find(maneuver_id);

        if (eitr == m_maneuver_actions.end())
          continue;

        const std::vector<IMC::SetEntityParameters*>* actions[2];
        actions[0] = &eitr->second.start_actions;
        actions[1] = &eitr->second.end_actions;

        // Cycle through both sets of maneuver actions
        for (unsigned i = 0; i < 2; i++)
        {
          // Cycle through maneuver's start (i == 0) or end actions (i == 1)
          for (IMC::SetEntityParameters const* action : *actions[i])
          {
            std::string entity_id = action->name;

            // Iterator to parameter active
            IMC::MessageList<IMC::EntityParameter>::const_iterator act_itr;
            act_itr = getParameterActive(action->params);

            if (act_itr == action->params.end())
              continue; // cannot find parameter active

            // Check if it has already been activated
            std::set<std::string>::const_iterator ae_itr;
            ae_itr = active_entities.find(entity_id);
            bool is_active = (ae_itr != active_entities.end());

            // Get the eta for these actions we're parsing right now
            float eta;
            if (i == 0)
              eta = timeline.getManeuverStartETA(maneuver_id);
            else
              eta = timeline.getManeuverEndETA(maneuver_id);

            if ((*act_itr)->value == "true")
            {
              if (!is_active)
              {
                cat.addActiveTime(entity_id, eta);
                active_entities.insert(entity_id);
              }
            }
            else if (is_active)
            {
              cat.subtractActiveTime(entity_id, eta);
              active_entities.erase(entity_id);
            }
          }
        }
      }

      // Get timed actions into component active time
      std::map<std::string, TimedStack> clone = m_timed;
      for (auto& timed_actions : clone)
      {
        while (!timed_actions.second.empty())
        {
          TimedAction const* ta = &timed_actions.second.top();
          // Check if it has already been activated
          std::set<std::string>::const_iterator ae_itr;
          ae_itr = active_entities.find(timed_actions.first);
          bool is_active = (ae_itr != active_entities.end());

          if (ta->type == TYPE_DEACT)
          {
            if (is_active)
            {
              cat.subtractActiveTime(timed_actions.first, ta->sched_time);
              active_entities.erase(timed_actions.first);
            }
          }
          else
          {
            if (!is_active)
            {
              cat.addActiveTime(timed_actions.first, ta->sched_time);
              active_entities.insert(timed_actions.first);
            }
          }

          timed_actions.second.pop();
        }
      }
    }

    // Private

    std::vector<IMC::SetEntityParameters*>
    ActionSchedule::parseActions(Tasks::Task* task,
                                 const IMC::MessageList<IMC::Message>& actions,
                                 float eta)
    {
      // if empty exit
      if (!actions.size())
        return {};

      std::vector<IMC::SetEntityParameters*> event_actions;

      for (IMC::Message* action : actions)
      {
        if (action->getId() != DUNE_IMC_SETENTITYPARAMETERS)
          continue;

        auto sep = static_cast<IMC::SetEntityParameters*>(action);

        // Check if entity label exists
        std::map<std::string, IMC::EntityInfo>::const_iterator test;
        test = m_cinfo->find(sep->name);
        if (test == m_cinfo->end())
        {
          task->war(DTR("schedule: entity label %s not found"), sep->name.c_str());
          continue;
        }

        // If no parameters then skip
        if (!sep->params.size())
          continue;

        // Fill entities set
        m_eas.emplace(sep->name, IMC::EntityActivationState::EAS_INACTIVE);

        // true if event based, false if time based
        bool event_based = true;
        // action type
        ActionType type;

        IMC::MessageList<IMC::EntityParameter>::const_iterator par;
        par = getParameterActive(sep->params);

        // has entity parameter "Active", then get (de)activation time
        if (par != sep->params.end())
        {
          // activation and deactivation times
          uint16_t act_time = getActivationTime(sep->name);
          uint16_t deact_time = getDeactivationTime(sep->name);

          if ((act_time > 0 || deact_time > 0) && (m_execution_duration >= 0.0))
          {
            event_based = false;

            if ((*par)->value == "true")
              type = TYPE_ACT;
            else
              type = TYPE_DEACT;
          }
        }

        if (event_based)
          event_actions.push_back(sep);
        else
          // if the eta is not valid, schedule action to last valid duration (0.0 sec)
          gatherUnscheduled(sep, type, std::max(eta, 0.0f));
      }

      return event_actions;
    }

    IMC::MessageList<IMC::EntityParameter>::const_iterator
    ActionSchedule::getParameterActive(const IMC::MessageList<IMC::EntityParameter>& params) const
    {
      return std::find_if(std::begin(params), std::end(params),
                          [](IMC::EntityParameter const* params_) {
                            return params_->name == "Active";
                          });
    }

    void
    ActionSchedule::updateEAS(const std::string& id, const IMC::EntityActivationState* msg)
    {
      EASMap::iterator entity = m_eas.find(id);

      if (entity == m_eas.end())
        return;

      entity->second = msg->state;
    }

    static void
    addTimedAction(std::map<std::string, ActionSchedule::TimedStack>* action_map,
                   const std::string& name, ActionSchedule::TimedAction action,
                   int act_time = -1) noexcept
    {
      auto const action_stack = action_map->find(name);

      // If we need to preschedule, add activation time
      if (act_time > 0)
      {
        action.sched_time += act_time;
        action.prescheduled = true;
      }
      else
      {
        action.prescheduled = false;
      }

      // Adding action to stack
      if (action_stack != action_map->end())
      {
        action_stack->second.push(action);
      }
      else
      {
        ActionSchedule::TimedStack q;
        q.push(action);
        action_map->emplace(name, q);
      }
    }

    void
    ActionSchedule::processRequest(const std::string& id, const TimedAction& action)
    {
      uint8_t const state = m_eas.find(id)->second;

      bool add_req = false;

      if (action.type == TYPE_ACT)
      {
        bool active = (state == IMC::EntityActivationState::EAS_ACTIVE ||
                       state == IMC::EntityActivationState::EAS_ACT_DONE);

        // do not add request if device is already active
        add_req = !active && action.prescheduled;
      }
      else
      {
        bool inactive = (state == IMC::EntityActivationState::EAS_INACTIVE ||
                         state == IMC::EntityActivationState::EAS_DEACT_DONE);

        // do not add request if device is already inactive
        add_req = !inactive;
      }

      if (add_req)
      {
        auto request = m_reqs.find(id);

        if (request != m_reqs.end())
          m_reqs.erase(request);

        m_reqs.emplace(id, action);
      }
    }

    void
    ActionSchedule::gatherUnscheduled(IMC::SetEntityParameters* sep, ActionType type, float eta)
    {
      if (eta < 0)
        return;

      TimedAction action;
      action.type = type;
      action.list = sep;
      action.sched_time = eta;

      addTimedAction(&m_unsched, sep->name, action);
    }

    void
    ActionSchedule::scheduleTimedActions(void)
    {
      if (m_unsched.empty())
        return;

      for (auto& unscheduled_actions : m_unsched)
      {
        TimedStack& us = unscheduled_actions.second;

        while (!us.empty())
        {
          TimedAction action = us.top();

          us.pop();

          // If activation
          if (action.type == TYPE_ACT)
          {
            if (us.empty())
            {
              // pre-schedule
              addTimedAction(&m_timed, unscheduled_actions.first, action,
                             getActivationTime(unscheduled_actions.first));
            }
            else
            {
              while (!us.empty())
              {
                TimedAction prev_action = us.top();

                if (prev_action.type == TYPE_DEACT)
                {
                  // find least eta for a deactivation prior to the activation
                  float deact_time = getDeactivationTime(unscheduled_actions.first);
                  float act_time = getActivationTime(unscheduled_actions.first);
                  float act_eta = deact_time + act_time + action.sched_time;

                  // check if the gap between 'de' and activation is big enough
                  if (prev_action.sched_time > act_eta)
                  {
                    addTimedAction(&m_timed, unscheduled_actions.first, action,
                                   getActivationTime(
                                   unscheduled_actions.first));
                    break;
                  }
                  else // previous action deactivation is voided
                  {
                    us.pop();

                    // if stack becomes empty, then pre-schedule
                    if (us.empty())
                      addTimedAction(&m_timed, unscheduled_actions.first,
                                     action,
                                     getActivationTime(
                                     unscheduled_actions.first));

                    // proceed in inner loop to check previous action
                  }
                }
                else // previous action is activation
                {
                  // if previous action is activation, do not pre-schedule
                  addTimedAction(&m_timed, unscheduled_actions.first, action);
                  break;
                }
              }
            }
          }
          else // if deactivation never pre-schedule
          {
            addTimedAction(&m_timed, unscheduled_actions.first, action);
          }
        }
      }
    }

    std::map<std::string, ActionSchedule::TimedStack>::iterator
    ActionSchedule::nextSchedule(void)
    {
      // find the component whose next timed action has the greatest value of
      // sched_time (earliest scheduled time)
      return std::max_element(std::begin(m_timed), std::end(m_timed),
                              [](auto const& t1, auto const& t2) {
                                return t1.second.top().sched_time
                                       < t2.second.top().sched_time;
                              });
    }
  }
}
