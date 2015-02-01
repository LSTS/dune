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

#ifndef PLAN_ENGINE_ACTION_SCHEDULE_HPP_INCLUDED_
#define PLAN_ENGINE_ACTION_SCHEDULE_HPP_INCLUDED_

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
#include "Timeline.hpp"
#include "ComponentActiveTime.hpp"

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
      //! Default constructor
      //! @param[in] task pointer to task
      //! @param[in] spec pointer to PlanSpecification message
      //! @param[in] nodes vector of sequential PlanManeuvers that describe the plan
      //! @param[in] tline plan timeline with maneuvers' and plan's ETAs
      //! @param[in] cinfo map of components info
      ActionSchedule(Tasks::Task* task,
                     const IMC::PlanSpecification* spec,
                     const std::vector<IMC::PlanManeuver*>& nodes,
                     const Timeline& tline,
                     const std::map<std::string, IMC::EntityInfo>& cinfo);

      //! Alternative constructor for when plan is not sequential.
      //! There will be no pre-scheduling using this constructor.
      //! @param[in] task pointer to task
      //! @param[in] spec pointer to PlanSpecification message
      //! @param[in] nodes vector of sequential PlanManeuvers that describe the plan
      //! @param[in] cinfo map of components info
      ActionSchedule(Tasks::Task* task,
                     const IMC::PlanSpecification* spec,
                     const std::vector<IMC::PlanManeuver*>& nodes,
                     const std::map<std::string, IMC::EntityInfo>& cinfo);

      //! Update timed actions in schedule
      //! @param[in] time_left estimated time left to finish the plan
      void
      updateSchedule(float time_left);

      //! Flush all remaining timed actions in the schedule
      void
      flushTimed(void);

      //! The plan has started
      //! @param[out] affected vector of entities that will be (de)activated during the plan
      void
      planStarted(std::vector<std::string>& affected);

      //! The plan has stopped/ended
      //! @param[in] affected vector of entities that were (de)activated during last executed plan
      void
      planStopped(const std::vector<std::string>& affected);

      //! Maneuver has started
      //! @param[in] id name of the started maneuver
      void
      maneuverStarted(const std::string& id);

      //! Maneuver has stopped
      //! @param[in] id name of the done maneuver
      void
      maneuverDone(const std::string& id);

      //! Get the time of the earliest scheduled action
      //! @return time of the earliest scheduled action
      inline float
      getEarliestSchedule(void) const
      {
        return m_earliest;
      }

      //! Check if the activation and deactivation requests are being complied
      //! @param[in] id entity label
      //! @param[in] msg pointer to EntityActivationState message
      //! @return false if something failed to be activated, true otherwise
      bool
      onEntityActivationState(const std::string& id, const IMC::EntityActivationState* msg);

      //! Check if we are still waiting for a device in calibration process
      //! @return true if we are still waiting
      bool
      waitingForDevice(void);

      //! Compute a shorter time for calibration
      //! @return time left for calibration according to devices to activate
      float
      calibTimeLeft(void);

      //! Fill the object component active time
      //! @param[in] nodes vector of sequenced plan maneuvers
      //! @param[in] timeline plan timeline with all ETAs
      //! @param[in] cat component active time object to fill
      void
      fillComponentActiveTime(const std::vector<IMC::PlanManeuver*>& nodes,
                              const Timeline& timeline,
                              ComponentActiveTime& cat);

    private:
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
                   EventActions* event_actions, float eta, bool start);

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
      getParameterActive(const IMC::MessageList<IMC::EntityParameter>& params) const;

      //! Update entity activation states
      //! @param[in] id name of the entity
      //! @param[in] eas pointer to entity activation state
      void
      updateEAS(const std::string& id, const IMC::EntityActivationState* msg);

      //! Add action to map
      //! @param[in] action_map map of actions to which the action will be added
      //! @param[in] name name of the entity
      //! @param[in] action action that will be added
      //! @param[in] preschedule true if scheduled time should take activation into account
      void
      addTimedAction(std::map<std::string, TimedStack>& action_map,
                     const std::string& name, const TimedAction& action,
                     bool preschedule = false);

      //! Add action request
      //! @param[in] name entity name
      //! @param[in] action TimedAction to add to requests
      void
      processRequest(const std::string& id, const TimedAction& action);

      //! Simply gather untimed actions in untimed stacks
      //! @param[in] sep pointer to SetEntityParameters to schedule
      //! @param[in] type action type to schedule
      //! @param[in] eta estimated time of arrival of action
      void
      gatherUntimed(IMC::SetEntityParameters* sep, ActionType type, float eta);

      //! Schedule timed actions
      void
      scheduleTimed(void);

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
      nextSchedule(void);

      //! Printed timed actions
      void
      printTimed(void);

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
      float m_execution_duration;
    };
  }
}

#endif
