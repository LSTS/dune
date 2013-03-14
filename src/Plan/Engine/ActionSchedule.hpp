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
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

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
      };

      //! Queue of timed actions
      typedef std::queue<TimedAction> TimedQueue;

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

      //! Default constructor
      //! @param[in] task pointer to task
      //! @param[in] spec pointer to PlanSpecification message
      //! @param[in] nodes vector of sequential PlanManeuvers that describe the plan
      //! @param[in] durations information regarding each maneuvers duration
      //! @param[in] cinfo map of components info
      ActionSchedule(Tasks::Task* task, const IMC::PlanSpecification* spec,
                     const std::vector<IMC::PlanManeuver*>& nodes,
                     const PlanDuration::ManeuverDuration& durations,
                     const std::map<std::string, IMC::EntityInfo>& cinfo):
        m_task(task),
        m_cinfo(&cinfo)
      {
        float plan_duration;
        PlanDuration::ManeuverDuration::const_iterator dur;
        dur = durations.find(nodes.back()->maneuver_id);

        // If durations
        if (dur == durations.end())
        {
          plan_duration = -1.0;
          m_task->debug("schedule - plan duration is unavailable");
        }
        else
        {
          plan_duration = dur->second.back();
        }

        m_task->debug("schedule - plan start");

        // start by adding "start" plan actions
        parseStartActions(spec->start_actions, &m_plan_actions, plan_duration);

        std::vector<IMC::PlanManeuver*>::const_iterator itr;
        itr = nodes.begin();

        // Maneuver's start and end ETA
        float maneuver_start_eta = -1.0;
        float maneuver_end_eta = -1.0;

        // Iterate through plan maneuvers
        for (; itr != nodes.end(); ++itr)
        {
          if (itr == nodes.begin())
            maneuver_start_eta = plan_duration;
          else
            maneuver_start_eta = maneuver_end_eta;

          dur = durations.find((*itr)->maneuver_id);
          if (dur == durations.end())
            maneuver_end_eta = -1.0;
          else if (dur->second.size())
            maneuver_end_eta = plan_duration - dur->second.back();
          else
            maneuver_end_eta = -1.0;

          EventActions eact;

          m_task->debug("schedule - maneuver: %s", (*itr)->maneuver_id.c_str());
          
          parseStartActions((*itr)->start_actions, &eact, maneuver_start_eta);
          parseEndActions((*itr)->end_actions, &eact, maneuver_end_eta);

          m_onevent.insert(std::pair<std::string, EventActions>((*itr)->maneuver_id, eact));
        }

        m_task->debug("schedule - plan end");
        parseEndActions(spec->end_actions, &m_plan_actions, 0.0);

        std::map<std::string, TimedQueue>::const_iterator next;
        next = nextSchedule();

        if (next == m_timed.end())
          m_earliest = 0.0;
        else
          m_earliest = next->second.front().sched_time;

        // DEBUG
        // printTimed();
      }

      //! Update timed actions in schedule
      //! @param[in] time_left estimated time left to finish the plan
      void
      updateSchedule(float time_left)
      {
        if (time_left <= 0.0)
          return;

        while (1)
        {
          std::map<std::string, TimedQueue>::iterator next;
          next = nextSchedule();

          if (next == m_timed.end())
            break;

          TimedQueue* q = &next->second;

          // Check if the time is right
          if (q->front().sched_time <= time_left)
            break;

          // Test if it is a deactivation
          // If so, we should skip in case an activation comes in too soon
          if (q->front().type == TYPE_DEACT)
          {
            TimedQueue clone = *q;
            clone.pop();

            bool conflict = false;
            float min_gap;
            min_gap = getDeactivationTime(next->first) + getActivationTime(next->first);

            while (clone.size())
            {
              if (clone.front().sched_time + min_gap < time_left)
                break;

              // Device is ordered to reactivate to close in time to deactivation
              if (clone.front().type == TYPE_ACT)
              {
                conflict = true;
                break;
              }

              clone.pop();
            }

            if (!conflict)
              dispatchActions(q->front().list);
          }
          else
          {
            dispatchActions(q->front().list);
          }

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
        std::set<std::string>::const_iterator itr;
        itr = m_ents_changed.begin();
        for (; itr != m_ents_changed.end(); ++itr)
        {
          IMC::PushEntityParameters push;
          push.name = *itr;
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
        std::set<std::string>::const_iterator itr;
        itr = m_ents_changed.begin();
        for (; itr != m_ents_changed.end(); ++itr)
        {
          IMC::PopEntityParameters pop;
          pop.name = *itr;
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

        m_task->debug("schedule -\t actions: %lu", actions.size());

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
            m_task->debug("schedule -\t\t entity label %s not found", sep->name.c_str());
            continue;
          }

          // If no parameters then skip
          if (!sep->params.size())
            continue;

          // Fill entities set
          m_ents_changed.insert(sep->name);

          m_task->debug("schedule -\t\t params: %lu", sep->params.size());

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

            if (act_time > 0 || deact_time > 0)
            {
              event_based = false;

              if ((*par)->value == "true")
                type = TYPE_ACT;
              else
                type = TYPE_DEACT;
            }
          }
          else
          {
            m_task->debug("schedule -\t\t active not found");
          }

          if (event_based)
          {
            m_task->debug("schedule -\t\t pushing event based \"%s\"", sep->name.c_str());

            if (start)
              event_actions->start_actions.push_back(sep);
            else
              event_actions->end_actions.push_back(sep);
          }
          else
          {
            m_task->debug("schedule -\t\t pushing time based \"%s\"", sep->name.c_str());
            scheduleTimed(sep, type, eta);
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

      //! Schedule timed actions
      //! @param[in] sep pointer to SetEntityParameters to schedule
      //! @param[in] type action type to schedule
      //! @param[in] eta estimated time of arrival of action
      void
      scheduleTimed(IMC::SetEntityParameters* sep, ActionType type, float eta)
      {
        if (eta < 0)
          return;

        TimedAction action;
        action.type = type;
        action.list = sep;

        if (type == TYPE_ACT)
        {
          action.sched_time = eta + getActivationTime(sep->name);
        }
        else
        {
          // when deactivating do not schedule to an earlier time
          action.sched_time = eta;
        }

        std::map<std::string, TimedQueue>::iterator itr;
        itr = m_timed.find(sep->name);

        // Adding action to queue
        if (itr != m_timed.end())
        {
          itr->second.push(action);
        }
        else
        {
          TimedQueue q;
          q.push(action);
          m_timed.insert(std::pair<std::string, TimedQueue>(sep->name, q));
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

      //! Find the queue with the next scheduled action
      //! @return iterator to the queue with the next scheduled action
      std::map<std::string, TimedQueue>::iterator
      nextSchedule(void)
      {
        if (!m_timed.size())
          return m_timed.end();

        float earliest = 0.0;

        std::map<std::string, TimedQueue>::iterator itr, next;
        itr = m_timed.begin();
        next = m_timed.end();

        for (; itr != m_timed.end(); ++itr)
        {
          if (itr->second.front().sched_time > earliest)
          {
            earliest = itr->second.front().sched_time;
            next = itr;
          }
        }

        return next;
      }

      //! Printed timed actions
      void
      printTimed(void)
      {
        std::map<std::string, TimedQueue> clone = m_timed;

        std::map<std::string, TimedQueue>::iterator itr = clone.begin();
        for (; itr != clone.end(); ++itr)
        {
          m_task->war("--- %s ---", itr->first.c_str());
          while (!itr->second.empty())
          {
            m_task->inf("scheduled for: %.1f", itr->second.front().sched_time);
            itr->second.front().list->toText(std::cerr);
            itr->second.pop();
          }
          m_task->war("END %s ---", itr->first.c_str());
        }
      }

      //! Map of entity labels to TimedQueue's
      //! This means we'll have one queue per component
      std::map<std::string, TimedQueue> m_timed;
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
      //! Set of entities that will be changed during plan
      std::set<std::string> m_ents_changed;
    };
  }
}

#endif
