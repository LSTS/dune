//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

// Local headers
#include "ActionSchedule.hpp"

namespace Plan
{
  namespace Engine
  {
    ActionSchedule::ActionSchedule(Tasks::Task* task, const IMC::PlanSpecification* spec,
                                   const std::vector<IMC::PlanManeuver*>& nodes,
                                   const Timeline& tline,
                                   const std::map<std::string, IMC::EntityInfo>& cinfo):
      m_task(task),
      m_cinfo(&cinfo)
    {
      // Set execution duration
      m_execution_duration = tline.getExecutionDuration();

      // start by adding "start" plan actions
      parseStartActions(spec->start_actions, &m_plan_actions, m_execution_duration);

      std::vector<IMC::PlanManeuver*>::const_iterator itr;
      itr = nodes.begin();

      // Iterate through plan maneuvers
      for (; itr != nodes.end(); ++itr)
      {
        EventActions eact;

        parseStartActions((*itr)->start_actions, &eact,
                          tline.getManeuverStartETA((*itr)->maneuver_id));

        parseEndActions((*itr)->end_actions, &eact,
                        tline.getManeuverEndETA((*itr)->maneuver_id));

        m_onevent.insert(std::pair<std::string, EventActions>((*itr)->maneuver_id, eact));
      }

      parseEndActions(spec->end_actions, &m_plan_actions, 0.0);

      // Create a proper schedule from the unscheduled set of actions
      scheduleTimed();

      std::map<std::string, TimedStack>::const_iterator next;
      next = nextSchedule();

      if (next == m_timed.end())
        m_earliest = 0.0;
      else
        m_earliest = next->second.top().sched_time;
    }

    ActionSchedule::ActionSchedule(Tasks::Task* task, const IMC::PlanSpecification* spec,
                                   const std::vector<IMC::PlanManeuver*>& nodes,
                                   const std::map<std::string, IMC::EntityInfo>& cinfo):
      m_task(task),
      m_cinfo(&cinfo)
    {
      m_execution_duration = -1.0;

      // start by adding "start" plan actions
      parseStartActions(spec->start_actions, &m_plan_actions, m_execution_duration);

      std::vector<IMC::PlanManeuver*>::const_iterator itr;
      itr = nodes.begin();

      // Iterate through plan maneuvers
      for (; itr != nodes.end(); ++itr)
      {
        EventActions eact;

        parseStartActions((*itr)->start_actions, &eact, -1.0);
        parseEndActions((*itr)->end_actions, &eact, -1.0);

        m_onevent.insert(std::pair<std::string, EventActions>((*itr)->maneuver_id, eact));
      }

      parseEndActions(spec->end_actions, &m_plan_actions, 0.0);

      m_earliest = 0.0;
    }

    void
    ActionSchedule::updateSchedule(float time_left)
    {
      if (time_left < 0.0)
        return;

      m_time_left = time_left;

      while (1)
      {
        std::map<std::string, TimedStack>::iterator next;
        next = nextSchedule();

        if (next == m_timed.end())
          break;

        TimedStack* q = &next->second;

        // Check if the time is right
        if (q->top().sched_time < time_left)
          break;

        dispatchActions(q->top().list);

        processRequest(next->first, q->top());

        q->pop();

        if (q->empty())
          m_timed.erase(next);
      }
    }

    void
    ActionSchedule::flushTimed(void)
    {
      while (1)
      {
        std::map<std::string, TimedStack>::iterator next;
        next = nextSchedule();

        if (next == m_timed.end())
          break;

        TimedStack* q = &next->second;

        // do not check if the time is right

        dispatchActions(q->top().list);

        processRequest(next->first, q->top());

        q->pop();

        if (q->empty())
          m_timed.erase(next);
      }
    }

    void
    ActionSchedule::planStarted(std::vector<std::string>& affected)
    {
      // Order all entities to push their parameters
      EASMap::const_iterator itr;
      itr = m_eas.begin();
      for (; itr != m_eas.end(); ++itr)
      {
        // save the set of entities in the list
        affected.push_back(itr->first);

        // push entity parameters, so later they'll be popped
        IMC::PushEntityParameters push;
        push.name = itr->first;
        m_task->dispatch(push);
      }

      dispatchActions(m_plan_actions.start_actions);
    }

    void
    ActionSchedule::planStopped(const std::vector<std::string>& affected)
    {
      dispatchActions(m_plan_actions.end_actions);

      // Order all entities to pop their parameters
      std::vector<std::string>::const_iterator itr;
      itr = affected.begin();
      for (; itr != affected.end(); ++itr)
      {
        IMC::PopEntityParameters pop;
        pop.name = *itr;
        m_task->dispatch(pop);
      }
    }

    void
    ActionSchedule::maneuverStarted(const std::string& id)
    {
      EventMap::iterator itr = m_onevent.find(id);

      if (itr != m_onevent.end())
        dispatchActions(itr->second.start_actions);
    }

    void
    ActionSchedule::maneuverDone(const std::string& id)
    {
      EventMap::iterator itr = m_onevent.find(id);

      if (itr != m_onevent.end())
        dispatchActions(itr->second.end_actions);
    }

    bool
    ActionSchedule::onEntityActivationState(const std::string& id, const IMC::EntityActivationState* msg)
    {
      if (m_eas.empty())
        return true;

      updateEAS(id, msg);

      if (m_reqs.empty())
        return true;

      std::map<std::string, TimedAction>::const_iterator itr;
      itr = m_reqs.find(id);

      if (itr == m_reqs.end())
        return true;

      if (itr->second.type == TYPE_ACT)
      {
        if (msg->state == IMC::EntityActivationState::EAS_ACT_DONE ||
            msg->state == IMC::EntityActivationState::EAS_ACTIVE)
        {
          float gap = m_time_left - (itr->second.sched_time - getActivationTime(id));

          if (gap > 0)
            m_task->inf(DTR("schedule: %s active on time, +%.1f seconds"),
                        id.c_str(), gap);
          else
            m_task->war(DTR("schedule: %s activation missed deadline, %.1f seconds"),
                        id.c_str(), gap);

          m_reqs.erase(id);
        }
        else if (msg->state == IMC::EntityActivationState::EAS_ACT_FAIL)
        {
          m_reqs.erase(id);

          return false;
        }
      }
      else
      {
        if (msg->state == IMC::EntityActivationState::EAS_DEACT_DONE ||
            msg->state == IMC::EntityActivationState::EAS_INACTIVE)
          m_reqs.erase(id);
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
    ActionSchedule::fillComponentActiveTime(const std::vector<IMC::PlanManeuver*>& nodes,
                                            const Timeline& timeline,
                                            ComponentActiveTime& cat)
    {
      cat.clear();
      std::set<std::string> active_entities;

      {
        // Get the plan start actions first
        std::vector<IMC::SetEntityParameters*>::const_iterator itr;
        itr = m_plan_actions.start_actions.begin();
        for (; itr != m_plan_actions.start_actions.end(); ++itr)
        {
          // Iterator to parameter active
          IMC::MessageList<IMC::EntityParameter>::const_iterator act_itr;
          act_itr = getParameterActive((*itr)->params);

          if (act_itr == (*itr)->params.end())
            continue;

          if ((*act_itr)->value == "true")
            active_entities.insert((*itr)->name);
          else
            active_entities.erase((*itr)->name);
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
      // Cycle through the nodes
      std::vector<IMC::PlanManeuver*>::const_iterator pitr;
      pitr = nodes.begin();
      for (; pitr != nodes.end(); ++pitr)
      {
        std::string maneuver_id = (*pitr)->maneuver_id;

        EventMap::const_iterator eitr;
        eitr = m_onevent.find(maneuver_id);

        if (eitr == m_onevent.end())
          continue;

        // Create two pointers to EventActions.start_actions and .end_actions
        const std::vector<IMC::SetEntityParameters*>* actions[2];
        actions[0] = &eitr->second.start_actions;
        actions[1] = &eitr->second.end_actions;

        // Cycle through both sets of maneuver actions
        for (unsigned i = 0; i < 2; i++)
        {
          std::vector<IMC::SetEntityParameters*>::const_iterator itr;
          itr = actions[i]->begin();

          // Cycle through maneuver's start (i == 0) or end actions (i == 1)
          for (; itr != actions[i]->end(); ++itr)
          {
            std::string entity_id = (*itr)->name;

            // Iterator to parameter active
            IMC::MessageList<IMC::EntityParameter>::const_iterator act_itr;
            act_itr = getParameterActive((*itr)->params);

            if (act_itr == (*itr)->params.end())
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

      std::map<std::string, TimedStack>::iterator itr = clone.begin();
      for (; itr != clone.end(); ++itr)
      {
        while (!itr->second.empty())
        {
          TimedAction* ta = &itr->second.top();
          // Check if it has already been activated
          std::set<std::string>::const_iterator ae_itr;
          ae_itr = active_entities.find(itr->first);
          bool is_active = (ae_itr != active_entities.end());

          if (ta->type == TYPE_DEACT)
          {
            if (is_active)
            {
              cat.subtractActiveTime(itr->first, ta->sched_time);
              active_entities.erase(itr->first);
            }
          }
          else
          {
            if (!is_active)
            {
              cat.addActiveTime(itr->first, ta->sched_time);
              active_entities.insert(itr->first);
            }
          }

          itr->second.pop();
        }
      }
    }

    // Private

    void
    ActionSchedule::parseActions(const IMC::MessageList<IMC::Message>& actions,
                                 EventActions* event_actions, float eta, bool start)
    {
      // if empty exit
      if (!actions.size())
        return;

      IMC::MessageList<IMC::Message>::const_iterator itr = actions.begin();

      IMC::SetEntityParameters* sep;

      for (; itr != actions.end(); ++itr)
      {
        // if it's not SetEntityParameters we ignore
        if ((*itr)->getId() != DUNE_IMC_SETENTITYPARAMETERS)
          continue;

        sep = static_cast<IMC::SetEntityParameters*>(*itr);

        // Check if entity label exists
        std::map<std::string, IMC::EntityInfo>::const_iterator test;
        test = m_cinfo->find(sep->name);
        if (test == m_cinfo->end())
        {
          m_task->war(DTR("schedule: entity label %s not found"), sep->name.c_str());
          continue;
        }

        // If no parameters then skip
        if (!sep->params.size())
          continue;

        // Fill entities set
        m_eas.insert(EASPair(sep->name, IMC::EntityActivationState::EAS_INACTIVE));

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
        {
          if (start)
            event_actions->start_actions.push_back(sep);
          else
            event_actions->end_actions.push_back(sep);
        }
        else
        {
          // if the eta is not valid, schedule action to last valid duration (0.0 sec)
          if (eta >= 0.0)
            gatherUntimed(sep, type, eta);
          else
            gatherUntimed(sep, type, 0.0);
        }
      }
    }

    IMC::MessageList<IMC::EntityParameter>::const_iterator
    ActionSchedule::getParameterActive(const IMC::MessageList<IMC::EntityParameter>& params) const
    {
      IMC::MessageList<IMC::EntityParameter>::const_iterator itr = params.begin();
      for (; itr != params.end(); ++itr)
        if ((*itr)->name == "Active")
          return itr;

      return itr;
    }

    void
    ActionSchedule::updateEAS(const std::string& id, const IMC::EntityActivationState* msg)
    {
      EASMap::iterator itr = m_eas.find(id);

      if (itr == m_eas.end())
        return;

      itr->second = msg->state;
    }

    void
    ActionSchedule::addTimedAction(std::map<std::string, TimedStack>& action_map,
                                   const std::string& name, const TimedAction& action,
                                   bool preschedule)
    {
      std::map<std::string, TimedStack>::iterator itr;
      itr = action_map.find(name);

      TimedAction mod_action = action;

      // If we need to preschedule, add activation time
      if (preschedule)
      {
        mod_action.sched_time += getActivationTime(name);
        mod_action.prescheduled = true;
      }
      else
      {
        mod_action.prescheduled = false;
      }

      // Adding action to stack
      if (itr != action_map.end())
      {
        itr->second.push(mod_action);
      }
      else
      {
        TimedStack q;
        q.push(mod_action);
        action_map.insert(std::pair<std::string, TimedStack>(name, q));
      }
    }

    void
    ActionSchedule::processRequest(const std::string& id, const TimedAction& action)
    {
      EASMap::const_iterator itr = m_eas.find(id);

      bool add_req = false;

      if (action.type == TYPE_ACT)
      {
        bool active = (itr->second == IMC::EntityActivationState::EAS_ACTIVE ||
                       itr->second == IMC::EntityActivationState::EAS_ACT_DONE);

        // do not add request if device is already active
        if (!active && action.prescheduled)
          add_req = true;
      }
      else
      {
        bool inactive = (itr->second == IMC::EntityActivationState::EAS_INACTIVE ||
                         itr->second == IMC::EntityActivationState::EAS_DEACT_DONE);

        // do not add request if device is already inactive
        if (!inactive)
          add_req = true;
      }

      if (add_req)
      {
        if (m_reqs.find(id) != m_reqs.end())
          m_reqs.erase(id);

        m_reqs.insert(std::pair<std::string, TimedAction>(id, action));
      }
    }

    void
    ActionSchedule::gatherUntimed(IMC::SetEntityParameters* sep, ActionType type, float eta)
    {
      if (eta < 0)
        return;

      TimedAction action;
      action.type = type;
      action.list = sep;
      action.sched_time = eta;

      addTimedAction(m_unsched, sep->name, action);
    }

    void
    ActionSchedule::scheduleTimed(void)
    {
      if (m_unsched.empty())
        return;

      std::map<std::string, TimedStack>::iterator itr = m_unsched.begin();

      for (; itr != m_unsched.end(); ++itr)
      {
        TimedStack* us = &itr->second;

        while (!us->empty())
        {
          TimedAction action = us->top();

          us->pop();

          // If activation
          if (action.type == TYPE_ACT)
          {
            if (us->empty())
            {
              // pre-schedule
              addTimedAction(m_timed, itr->first, action, true);
            }
            else
            {
              while (!us->empty())
              {
                TimedAction prev_action = us->top();

                if (prev_action.type == TYPE_DEACT)
                {
                  // find least eta for a deactivation prior to the activation
                  float deact_time = getDeactivationTime(itr->first);
                  float act_time = getActivationTime(itr->first);
                  float act_eta = deact_time + act_time + action.sched_time;

                  // check if the gap between 'de' and activation is big enough
                  if (prev_action.sched_time > act_eta)
                  {
                    addTimedAction(m_timed, itr->first, action, true);
                    break;
                  }
                  else // previous action deactivation is voided
                  {
                    us->pop();

                    // if stack becomes empty, then pre-schedule
                    if (us->empty())
                      addTimedAction(m_timed, itr->first, action, true);

                    // proceed in inner loop to check previous action
                  }
                }
                else // previous action is activation
                {
                  // if previous action is activation, do not pre-schedule
                  addTimedAction(m_timed, itr->first, action);
                  break;
                }
              }
            }
          }
          else // if deactivation never pre-schedule
          {
            addTimedAction(m_timed, itr->first, action);
          }
        }
      }
    }

    std::map<std::string, ActionSchedule::TimedStack>::iterator
    ActionSchedule::nextSchedule(void)
    {
      if (!m_timed.size())
        return m_timed.end();

      float earliest = 0.0;

      std::map<std::string, TimedStack>::iterator itr, next;
      itr = m_timed.begin();
      next = m_timed.end();

      for (; itr != m_timed.end(); ++itr)
      {
        if (itr->second.top().sched_time >= earliest)
        {
          earliest = itr->second.top().sched_time;
          next = itr;
        }
      }

      return next;
    }

    void
    ActionSchedule::printTimed(void)
    {
      std::map<std::string, TimedStack> clone = m_timed;

      std::map<std::string, TimedStack>::iterator itr = clone.begin();
      for (; itr != clone.end(); ++itr)
      {
        m_task->war("--- %s ---", itr->first.c_str());
        while (!itr->second.empty())
        {
          m_task->war(DTR("scheduled for: %.1f"), itr->second.top().sched_time);
          itr->second.top().list->toText(std::cerr);
          itr->second.pop();
        }
        m_task->war(DTR("END %s ---"), itr->first.c_str());
      }
    }
  }
}
