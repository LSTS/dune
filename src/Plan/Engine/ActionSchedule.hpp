//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_PLAN_ENGINE_ACTIONSCHEDULE_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_ACTIONSCHEDULE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <utility>

// DUNE headers.
#include <DUNE/Plans.hpp>
#include <DUNE/IMC.hpp>
#include "Calibration.hpp"

using namespace DUNE::IMC;
using namespace DUNE::Plans;

namespace Plan
{
  namespace Engine
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM ActionSchedule;

    //! Scheduler for plan and maneuver actions
    class ActionSchedule
    {
    public:
      //! Enumeration for type of timed action
      enum ActionType
      {
        //! Deactivation
        TYPE_DEACT,
        //! Activation
        TYPE_ACT
      };

      //! Struct for actions set on a timed reference
      struct TimedAction
      {
        //! Type (true activation or deactivation)
        ActionType type;
        //! Time relative to Plan's eta to fire action
        float sched_time;
        //! Set Entity parameters to dispatch
        IMC::SetEntityParameters* list;
        //! Flag to signal that this action was pre-scheduled
        bool prescheduled;
      };

      //! Stack of timed actions
      typedef std::stack<TimedAction> TimedStack;

      //! Actions that should be fired on plan and maneuver start or end
      struct EventActions
      {
        //! Vector of pointers to start actions
        std::vector<IMC::SetEntityParameters*> start_actions;
        //! Vector of pointers to end actions
        std::vector<IMC::SetEntityParameters*> end_actions;
      };

      //! Map to address event based actions
      typedef std::map<std::string, EventActions> EventMap;

      //! Map of entity names to entity activation states
      typedef std::map<std::string, uint8_t> EASMap;
      //! Pair for EASMap
      typedef std::pair<std::string, uint8_t> EASPair;

      //! Default constructor
      //! @param[in] task pointer to task
      //! @param[in] spec pointer to PlanSpecification message
      //! @param[in] nodes vector of sequential PlanManeuvers that describe the plan
      //! @param[in] durations information regarding each maneuvers duration
      //! @param[in] last_dur iterator to last maneuver with a valid duration
      //! @param[in] cinfo map of components info
      ActionSchedule(Tasks::Task* task, const IMC::PlanSpecification* spec,
                     const std::vector<IMC::PlanManeuver*>& nodes,
                     const Duration::ManeuverDuration& durations,
                     const Duration::ManeuverDuration::const_iterator last_dur,
                     const std::map<std::string, IMC::EntityInfo>& cinfo):
        m_task(task),
        m_cinfo(&cinfo)
      {
        // Get plan duration
        if (last_dur == durations.end())
          m_plan_duration = -1.0;
        else
          m_plan_duration = last_dur->second.back();

        // start by adding "start" plan actions
        parseStartActions(spec->start_actions, &m_plan_actions, m_plan_duration);

        std::vector<IMC::PlanManeuver*>::const_iterator itr;
        itr = nodes.begin();

        // Maneuver's start and end ETA
        float maneuver_start_eta = -1.0;
        float maneuver_end_eta = -1.0;

        // Iterate through plan maneuvers
        for (; itr != nodes.end(); ++itr)
        {
          if (itr == nodes.begin())
            maneuver_start_eta = m_plan_duration;
          else
            maneuver_start_eta = maneuver_end_eta;

          Duration::ManeuverDuration::const_iterator dur;
          dur = durations.find((*itr)->maneuver_id);

          if (dur == durations.end())
            maneuver_end_eta = -1.0;
          else if (dur->second.size())
            maneuver_end_eta = m_plan_duration - dur->second.back();
          else
            maneuver_end_eta = -1.0;

          EventActions eact;

          parseStartActions((*itr)->start_actions, &eact, maneuver_start_eta);
          parseEndActions((*itr)->end_actions, &eact, maneuver_end_eta);

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

      //! Alternative constructor for when plan is not sequential.
      //! There will be no pre-scheduling using this constructor.
      //! @param[in] task pointer to task
      //! @param[in] spec pointer to PlanSpecification message
      //! @param[in] nodes vector of sequential PlanManeuvers that describe the plan
      //! @param[in] cinfo map of components info
      ActionSchedule(Tasks::Task* task, const IMC::PlanSpecification* spec,
                     const std::vector<IMC::PlanManeuver*>& nodes,
                     const std::map<std::string, IMC::EntityInfo>& cinfo):
        m_task(task),
        m_cinfo(&cinfo)
      {
        m_plan_duration = -1.0;

        // start by adding "start" plan actions
        parseStartActions(spec->start_actions, &m_plan_actions, m_plan_duration);

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

      //! Update timed actions in schedule
      //! @param[in] time_left estimated time left to finish the plan
      void
      updateSchedule(float time_left)
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

      //! Flush all remaining timed actions in the schedule
      void
      flushTimed(void)
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

      //! The plan has started
      void
      planStarted(void)
      {
        // Order all entities to push their parameters
        EASMap::const_iterator itr;
        itr = m_eas.begin();
        for (; itr != m_eas.end(); ++itr)
        {
          IMC::PushEntityParameters push;
          push.name = itr->first;
          m_task->dispatch(push);
        }

        dispatchActions(m_plan_actions.start_actions);
      }

      //! The plan has stopped/ended
      void
      planStopped(void)
      {
        dispatchActions(m_plan_actions.end_actions);

        // Order all entities to pop their parameters
        EASMap::const_iterator itr;
        itr = m_eas.begin();
        for (; itr != m_eas.end(); ++itr)
        {
          IMC::PopEntityParameters pop;
          pop.name = itr->first;
          m_task->dispatch(pop);
        }
      }

      //! Maneuver has started
      //! @param[in] id name of the started maneuver
      void
      maneuverStarted(const std::string& id)
      {
        EventMap::iterator itr = m_onevent.find(id);

        if (itr != m_onevent.end())
          dispatchActions(itr->second.start_actions);
      }

      //! Maneuver has stopped
      //! @param[in] id name of the done maneuver
      void
      maneuverDone(const std::string& id)
      {
        EventMap::iterator itr = m_onevent.find(id);

        if (itr != m_onevent.end())
          dispatchActions(itr->second.end_actions);
      }

      //! Get the time of the earliest scheduled action
      //! @return time of the earliest scheduled action
      float
      getEarliestSchedule(void) const
      {
        return m_earliest;
      }

      //! Check if the activation and deactivation requests are being complied
      //! @param[in] id entity label
      //! @param[in] msg pointer to EntityActivationState message
      void
      onEntityActivationState(const std::string& id, const IMC::EntityActivationState* msg)
      {
        if (m_eas.empty())
          return;

        updateEAS(id, msg);

        if (m_reqs.empty())
          return;

        std::map<std::string, TimedAction>::const_iterator itr;
        itr = m_reqs.find(id);

        if (itr == m_reqs.end())
          return;

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
            m_task->err("schedule: failed to activate %s", id.c_str());
            m_reqs.erase(id);
          }
        }
        else
        {
          if (msg->state == IMC::EntityActivationState::EAS_DEACT_DONE ||
              msg->state == IMC::EntityActivationState::EAS_INACTIVE)
            m_reqs.erase(id);
        }
      }

      //! Check if we are still waiting for a device in calibration process
      //! @return true if we are still waiting
      bool
      waitingForDevice(void)
      {
        // if there are any requests hanging, then we're waiting
        if (!m_reqs.empty())
          return true;

        std::map<std::string, TimedStack>::const_iterator next;
        next = nextSchedule();

        if (next != m_timed.end())
        {
          if (next->second.top().sched_time >= m_plan_duration)
            return true;
        }

        return false;
      }

      //! Compute a shorter time for calibration
      //! @return time left for calibration according to devices to activate
      float
      calibTimeLeft(void)
      {
        if (!m_reqs.empty())
          return -1.0;

        std::map<std::string, TimedStack>::const_iterator next;
        next = nextSchedule();

        if (next != m_timed.end())
          return next->second.top().sched_time - m_plan_duration;

        return -1.0;
      }

    private:
      //! Parse Start actions
      //! @param[in] actions message list of actions to parse
      //! @param[out] event_actions event based actions pointer
      //! @param[in] eta estimated time of arrival for actions' dispatching point
      inline void
      parseStartActions(const IMC::MessageList<IMC::Message>& actions,
                        EventActions* event_actions, float eta)
      {
        parseActions(actions, event_actions, eta, true);
      }

      //! Parse End actions
      //! @param[in] actions message list of actions to parse
      //! @param[out] event_actions event based actions pointer
      //! @param[in] eta estimated time of arrival for actions' dispatching point
      inline void
      parseEndActions(const IMC::MessageList<IMC::Message>& actions,
                      EventActions* event_actions, float eta)
      {
        parseActions(actions, event_actions, eta, false);
      }

      //! Parse actions
      //! @param[in] actions message list of actions to parse
      //! @param[out] event_actions event based actions pointer
      //! @param[in] eta estimated time of arrival for actions' dispatching point
      //! @param[in] start true if these are start actions
      void
      parseActions(const IMC::MessageList<IMC::Message>& actions,
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

            if ((act_time > 0 || deact_time > 0) && (m_plan_duration >= 0.0))
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

      //! Get activation time of component
      //! @param[in] label entity label of component to look for
      //! @return activation time of component
      inline uint16_t
      getActivationTime(const std::string& label) const
      {
        std::map<std::string, IMC::EntityInfo>::const_iterator itr = m_cinfo->find(label);
        return itr->second.act_time;
      }

      //! Get deactivation time of component
      //! @param[in] label entity label of component to look for
      //! @return deactivation time of component
      inline uint16_t
      getDeactivationTime(const std::string& label) const
      {
        std::map<std::string, IMC::EntityInfo>::const_iterator itr = m_cinfo->find(label);
        return itr->second.deact_time;
      }

      //! Check if it has parameter named "Active"
      //! @param[in] params message list of entity parameters to search in
      //! @return iterator to parameter named "Active"
      IMC::MessageList<IMC::EntityParameter>::const_iterator
      getParameterActive(const IMC::MessageList<IMC::EntityParameter>& params) const
      {
        IMC::MessageList<IMC::EntityParameter>::const_iterator itr = params.begin();
        for (; itr != params.end(); ++itr)
          if ((*itr)->name == "Active")
            return itr;

        return itr;
      }

      //! Update entity activation states
      //! @param[in] id name of the entity
      //! @param[in] eas pointer to entity activation state
      void
      updateEAS(const std::string& id, const IMC::EntityActivationState* msg)
      {
        EASMap::iterator itr = m_eas.find(id);

        if (itr == m_eas.end())
          return;

        itr->second = msg->state;
      }

      //! Add action to map
      //! @param[in] action_map map of actions to which the action will be added
      //! @param[in] name name of the entity
      //! @param[in] action action that will be added
      //! @param[in] preschedule true if scheduled time should take activation into account
      void
      addTimedAction(std::map<std::string, TimedStack>& action_map,
                     const std::string& name, const TimedAction& action,
                     bool preschedule = false)
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

      //! Add action request
      //! @param[in] name entity name
      //! @param[in] action TimedAction to add to requests
      void
      processRequest(const std::string& id, const TimedAction& action)
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

      //! Simply gather untimed actions in untimed stacks
      //! @param[in] sep pointer to SetEntityParameters to schedule
      //! @param[in] type action type to schedule
      //! @param[in] eta estimated time of arrival of action
      void
      gatherUntimed(IMC::SetEntityParameters* sep, ActionType type, float eta)
      {
        if (eta < 0)
          return;

        TimedAction action;
        action.type = type;
        action.list = sep;
        action.sched_time = eta;

        addTimedAction(m_unsched, sep->name, action);
      }

      //! Schedule timed actions
      void
      scheduleTimed(void)
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

      //! Dispatch actions
      //! @param[in] msg SetEntityParameters to dispatch
      void
      dispatchActions(IMC::SetEntityParameters* msg)
      {
        m_task->dispatch(*msg);
      }

      //! Dispatch actions
      //! @param[in] actions vector of SetEntityParameters to dispatch
      void
      dispatchActions(std::vector<IMC::SetEntityParameters*>& actions)
      {
        for (unsigned i = 0; i < actions.size(); ++i)
          m_task->dispatch(actions[i]);
      }

      //! Find the stack with the next scheduled action
      //! @return iterator to the stack with the next scheduled action
      std::map<std::string, TimedStack>::iterator
      nextSchedule(void)
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

      //! Printed timed actions
      void
      printTimed(void)
      {
        std::map<std::string, TimedStack> clone = m_timed;

        std::map<std::string, TimedStack>::iterator itr = clone.begin();
        for (; itr != clone.end(); ++itr)
        {
          m_task->war("--- %s ---", itr->first.c_str());
          while (!itr->second.empty())
          {
            m_task->war("scheduled for: %.1f", itr->second.top().sched_time);
            itr->second.top().list->toText(std::cerr);
            itr->second.pop();
          }
          m_task->war("END %s ---", itr->first.c_str());
        }
      }

      //! Map of entity labels to TimedStack's
      //! This means we'll have one stack per component
      std::map<std::string, TimedStack> m_timed;
      //! Map of entity labels to unscheduled stack
      std::map<std::string, TimedStack> m_unsched;
      //! Map of event based maneuver actions
      EventMap m_onevent;
      //! Event based plan actions
      EventActions m_plan_actions;
      //! Pointer to task for dispatching messages
      Tasks::Task* m_task;
      //! Pointer to map of component names to EntityInfo
      const std::map<std::string, IMC::EntityInfo>* m_cinfo;
      //! Time of earliest scheduled actions
      float m_earliest;
      //! Set of entities that will be changed during plan and its activation state
      EASMap m_eas;
      //! Estimated time left to finish plan
      float m_time_left;
      //! Set of activation requests yet to be confirmed
      std::map<std::string, TimedAction> m_reqs;
      //! Expected plan duration disregarding calibration time
      float m_plan_duration;
    };
  }
}

#endif
