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

// Local headers.
#include "Calibration.hpp"
#include "Timeline.hpp"
#include "ComponentActiveTime.hpp"

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
      //! @param[in] plan_maneuvers vector of sequential PlanManeuvers that
      //!                           describe the plan
      //! @param[in] tline plan timeline with maneuvers' and plan's ETAs
      //! @param[in] cinfo map of components info
      ActionSchedule(
      DUNE::Tasks::Task* task, const DUNE::IMC::PlanSpecification* spec,
      const std::vector<DUNE::IMC::PlanManeuver const*>& plan_maneuvers,
      const Timeline& tline,
      const std::map<std::string, DUNE::IMC::EntityInfo>& cinfo);

      //! Alternative constructor for when plan is not sequential.
      //! There will be no pre-scheduling using this constructor.
      //! @param[in] task pointer to task
      //! @param[in] spec pointer to PlanSpecification message
      //! @param[in] plan_maneuvers vector of sequential PlanManeuvers that
      //!                           describe the plan
      //! @param[in] cinfo map of components info
      ActionSchedule(
      DUNE::Tasks::Task* task, const DUNE::IMC::PlanSpecification* spec,
      const std::vector<DUNE::IMC::PlanManeuver const*>& plan_maneuvers,
      const std::map<std::string, DUNE::IMC::EntityInfo>& cinfo);

      //! Update timed actions in schedule
      //! @param[in] task task which will dispatch the actions
      //! @param[in] time_left estimated time left to finish the plan
      void
      updateSchedule(DUNE::Tasks::Task* task, float time_left);

      //! Flush all remaining timed actions in the schedule
      //! @param[in] task task which will dispatch the actions
      void
      flushTimed(DUNE::Tasks::Task* task);

      //! The plan has started
      //! @param[in] task task which will dispatch the actions
      //! @param[out] affected vector of entities that will be (de)activated
      //!             during the plan
      void
      planStarted(DUNE::Tasks::Task* task, std::vector<std::string>& affected);

      //! The plan has stopped/ended
      //! @param[in] task task which will dispatch the actions
      //! @param[in] affected list of entities that were (de)activated during
      //!            the plan
      void
      planStopped(DUNE::Tasks::Task* task,
                  const std::vector<std::string>& affected);

      //! Maneuver has started
      //! @param[in] task task which will dispatch the actions
      //! @param[in] id name of the started maneuver
      void
      maneuverStarted(DUNE::Tasks::Task* task, const std::string& id);

      //! Maneuver has stopped
      //! @param[in] task task which will dispatch the actions
      //! @param[in] id name of the done maneuver
      void
      maneuverDone(DUNE::Tasks::Task* task, const std::string& id);

      //! Get the time of the earliest scheduled action
      //! @return time of the earliest scheduled action
      inline float
      getEarliestSchedule(void) const
      {
        return m_earliest;
      }

      //! Check if the activation and deactivation requests are being complied
      //! @param[in] task task to print information to the console
      //! @param[in] id entity label
      //! @param[in] msg pointer to EntityActivationState message
      //! @return false if something failed to be activated, true otherwise
      bool
      onEntityActivationState(DUNE::Tasks::Task* task, const std::string& id,
                              const DUNE::IMC::EntityActivationState* msg);

      //! Check if we are still waiting for a device in calibration process
      //! @return true if we are still waiting
      bool
      waitingForDevice(void);

      //! Compute a shorter time for calibration
      //! @return time left for calibration according to devices to activate
      float
      calibTimeLeft(void);

      //! Fill the object component active time
      //! @param[in] plan_maneuvers vector of sequenced plan maneuvers
      //! @param[in] timeline plan timeline with all ETAs
      //! @param[in] cat component active time object to fill
      void
      fillComponentActiveTime(
      const std::vector<DUNE::IMC::PlanManeuver const*>& plan_maneuvers,
      const Timeline& timeline, ComponentActiveTime& cat);

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
        DUNE::IMC::SetEntityParameters* list;
        //! Flag to signal that this action was pre-scheduled
        bool prescheduled;
      };

      //! Stack of timed actions
      typedef std::stack<TimedAction> TimedStack;

    private:
      //! Actions that should be fired on plan and maneuver start or end
      struct EventActions
      {
        //! Vector of pointers to start actions
        std::vector<DUNE::IMC::SetEntityParameters*> start_actions;
        //! Vector of pointers to end actions
        std::vector<DUNE::IMC::SetEntityParameters*> end_actions;
      };

      //! Map to address event based actions
      typedef std::map<std::string, EventActions> EventMap;

      //! Map of entity names to entity activation states
      typedef std::map<std::string, uint8_t> EASMap;

      //! Parse actions
      //! @param[in] task task to print information to the console
      //! @param[in] actions message list of actions to parse
      //! @param[in] eta estimated time of arrival for actions' dispatching
      //!            point
      //! @param[in] unscheduled_actions map where the unscheduled actions will
      //!            be stored
      //! @return list of parsed actions
      std::vector<DUNE::IMC::SetEntityParameters*>
      parseActions(DUNE::Tasks::Task* task,
                   const DUNE::IMC::MessageList<DUNE::IMC::Message>& actions,
                   float eta = -1.0,
                   std::map<std::string, TimedStack>* unscheduled_actions
                   = nullptr);

      //! Get activation time of component
      //! @param[in] label entity label of component to look for
      //! @return activation time of component
      std::uint16_t
      getActivationTime(const std::string& label) const
      {
        auto entity = m_cinfo->find(label);
        return entity->second.act_time;
      }

      //! Get deactivation time of component
      //! @param[in] label entity label of component to look for
      //! @return deactivation time of component
      std::uint16_t
      getDeactivationTime(const std::string& label) const
      {
        auto entity = m_cinfo->find(label);
        return entity->second.deact_time;
      }

      //! Update entity activation states
      //! @param[in] id name of the entity
      //! @param[in] eas pointer to entity activation state
      void
      updateEAS(const std::string& id,
                const DUNE::IMC::EntityActivationState* msg);

      //! Add action request
      //! @param[in] name entity name
      //! @param[in] action TimedAction to add to requests
      void
      processRequest(const std::string& id, const TimedAction& action);

      //! Schedule timed actions
      //! @param[in] unscheduled actions map mapping each entity's label to its
      //!            set of unscheduled actions
      std::map<std::string, TimedStack>
      scheduleTimedActions(
      std::map<std::string, TimedStack> unscheduled_actions) const;

      //! Dispatch actions
      //! @param[in] task task that will dispatch the actions
      //! @param[in] msg SetEntityParameters to dispatch
      static void
      dispatchActions(DUNE::Tasks::Task* task,
                      DUNE::IMC::SetEntityParameters* msg)
      {
        task->dispatch(*msg);
      }

      //! Dispatch actions
      //! @param[in] task task that will dispatch the actions
      //! @param[in] actions vector of SetEntityParameters to dispatch
      static void
      dispatchActions(
      DUNE::Tasks::Task* task,
      std::vector<DUNE::IMC::SetEntityParameters*> const& actions)
      {
        for (unsigned i = 0; i < actions.size(); ++i)
          task->dispatch(actions[i]);
      }

      //! Expected plan duration excluding calibration time
      float m_execution_duration;
      //! Map of entity labels to timed actions stacks
      std::map<std::string, TimedStack> m_timed_actions;
      //! Event based maneuver actions
      EventMap m_maneuver_actions;
      //! Event based plan actions
      EventActions m_plan_actions;
      //! Maps entity labels to their EntityInfo messages
      const std::map<std::string, DUNE::IMC::EntityInfo>* m_cinfo;
      //! Time of earliest scheduled action
      float m_earliest;
      //! Set of entities that will be changed during the plan and their
      //! activation state
      std::map<std::string, uint8_t> m_eas;
      //! Estimated time left to finish plan
      float m_time_left;
      //! Set of activation requests yet to be confirmed
      std::map<std::string, TimedAction> m_reqs;
    };
  } // namespace Engine
} // namespace Plan

#endif
