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
        //! Time to activate or deactivate
        uint16_t boot_time;
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
      }

      //! The plan has started
      void
      planStarted(void)
      {
        dispatchActions(m_plan_actions.start_actions);
      }

      //! The plan has stopped/ended
      void
      planStopped(void)
      {
        dispatchActions(m_plan_actions.end_actions);
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
          dispatchActions(itr->second.start_actions);
      }

    private:
      //! Parse Start actions
      inline void
      parseStartActions(const IMC::MessageList<IMC::Message>& actions,
                        EventActions* event_actions, float eta)
      {
        parseActions(actions, event_actions, eta, true);
      }

      //! Parse End actions
      inline void
      parseEndActions(const IMC::MessageList<IMC::Message>& actions,
                      EventActions* event_actions, float eta)
      {
        parseActions(actions, event_actions, eta, false);
      }

      //! Parse actions
      void
      parseActions(const IMC::MessageList<IMC::Message>& actions,
                   EventActions* event_actions, float eta, bool start)
      {
        // if empty exit
        if (!actions.size())
          return;

        m_task->debug("schedule - actions: %lu", actions.size());

        IMC::MessageList<IMC::Message>::const_iterator itr = actions.begin();

        IMC::SetEntityParameters* sep;
        sep = dynamic_cast<IMC::SetEntityParameters*>(*itr);

        // if it's not SetEntityParameters we ignore
        if (!sep)
          return;

        for (; itr != actions.end(); ++itr)
        {
          sep = dynamic_cast<IMC::SetEntityParameters*>(*itr);

          // Check if entity label exists
          std::map<std::string, IMC::EntityInfo>::const_iterator test;
          test = m_cinfo->find(sep->name);
          if (test == m_cinfo->end())
          {
            m_task->debug("schedule - entity label %s not found", sep->name.c_str());
            continue;
          }

          // If no parameters then skip
          if (!sep->params.size())
            continue;

          m_task->debug("schedule - params: %lu", sep->params.size());

          // true if event based, false if time based
          bool event_based = true;
          // activation and deactivation times
          uint16_t act_time;
          uint16_t deact_time;
          // action type
          ActionType type;

          IMC::MessageList<IMC::EntityParameter>::const_iterator par;
          par = hasParameterActive(sep->params);

          // has entity parameter "Active", then get (de)activation time
          if (par != sep->params.end())
          {
            if ((*par)->value == "ON")
            {
              act_time = getActivationTime(sep->name);

              if (act_time > 0)
              {
                event_based = false;
                type = TYPE_ACT;
              }
            }
            else
            {
              deact_time = getDeactivationTime(sep->name);

              if (deact_time > 0)
              {
                event_based = false;
                type = TYPE_DEACT;
              }
            }
          }

          if (event_based)
          {
            m_task->debug("schedule - pushing event based \"%s\"", sep->name.c_str());

            if (start)
              event_actions->start_actions.push_back(sep);
            else
              event_actions->end_actions.push_back(sep);
          }
          else
          {
            m_task->debug("schedule - pushing time based \"%s\"", sep->name.c_str());
            scheduleTimed(sep, type, eta);
          }
        }
      }

      //! Get activation time of component
      inline uint16_t
      getActivationTime(const std::string& label)
      {
        std::map<std::string, IMC::EntityInfo>::const_iterator itr = m_cinfo->find(label);
        return itr->second.deact_time;
      }

      //! Get deactivation time of component
      inline uint16_t
      getDeactivationTime(const std::string& label)
      {
        std::map<std::string, IMC::EntityInfo>::const_iterator itr = m_cinfo->find(label);
        return itr->second.deact_time;
      }

      //! Check if it has parameter active
      IMC::MessageList<IMC::EntityParameter>::const_iterator
      hasParameterActive(const IMC::MessageList<IMC::EntityParameter>& params)
      {
        IMC::MessageList<IMC::EntityParameter>::const_iterator itr = params.begin();
        for (; itr != params.end(); ++itr)
          if ((*itr)->name == "Active")
            return itr;

        return itr;
      }

      //! Schedule timed actions
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
          action.boot_time = m_cinfo->find(sep->name)->second.act_time;
          action.sched_time = eta + action.boot_time;
        }
        else
        {
          action.boot_time = m_cinfo->find(sep->name)->second.deact_time;
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
      void
      dispatchActions(IMC::SetEntityParameters* msg)
      {
        m_task->dispatch(*msg);
      }

      //! Dispatch actions
      void
      dispatchActions(std::vector<IMC::SetEntityParameters*>& actions)
      {
        for (unsigned i = 0; i < actions.size(); ++i)
          m_task->dispatch(actions[i]);
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
    };
  }
}

#endif
