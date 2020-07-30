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
// Author: Miguel Aguiar                                                    *
//***************************************************************************

// C++ standard library headers.
#include <algorithm>

// Local headers.
#include "TimedActionSchedule.hpp"
#include "ActionSchedule.hpp"

namespace Plan
{
  namespace Engine
  {
    template <typename Collection>
    static void
    sort(Collection&& collection) noexcept
    {
      std::sort(std::begin(collection), std::end(collection));
    }

    template <typename Collection, typename Callback>
    static void
    for_each(Collection&& collection, Callback callback) noexcept
    {
      std::for_each(std::begin(collection), std::end(collection), callback);
    }

    static std::size_t
    dispatchPlanActions(float time_left, std::size_t cursor,
                        std::vector<Action> const& actions,
                        DUNE::Tasks::Task* task,
                        std::map<std::string, Action>* requests)
    {
      for (; cursor < actions.size()
             && actions[cursor].scheduled_time >= time_left;
           ++cursor)
      {
        DUNE::IMC::SetEntityParameters* action = actions[cursor].action;

        if (actions[cursor].ignore)
        {
          task->debug(
          "TimedActionSchedule: Ignoring plan action (%s@%.2f/%.2f)",
          action->name.c_str(), actions[cursor].scheduled_time, time_left);
          continue;
        }

        task->debug(
        "TimedActionSchedule: Dispatching plan action (%s@%.2f/%.2f)",
        action->name.c_str(), actions[cursor].scheduled_time, time_left);

        task->dispatch(action);

        if (requests)
          requests->emplace(action->name, actions[cursor]);
      }

      return cursor;
    }

    template <typename Condition>
    static std::size_t
    dispatchManeuverActions(float time_left, std::size_t cursor,
                            std::vector<ManeuverAction> const& actions,
                            DUNE::Tasks::Task* task,
                            Condition dispatch_condition,
                            std::map<std::string, Action>* requests)
    {
      for (; cursor < actions.size()
             && actions[cursor].action.scheduled_time >= time_left;
           ++cursor)
      {
        DUNE::IMC::SetEntityParameters* action = actions[cursor].action.action;

        std::string msg = DUNE::Utils::String::str(
        "action for maneuver %s -- %s %s at sched_time=%.2f sec, "
        "time_left=%.2f",
        actions[cursor].id.c_str(),
        actions[cursor].action.activation ? "activate" : "deactivate",
        action->name.c_str(), actions[cursor].action.scheduled_time, time_left);

        if (!dispatch_condition(actions[cursor]))
        {
          task->debug("TimedActionSchedule: Ignoring %s", msg.c_str());
          continue;
        }

        task->debug("TimedActionSchedule: Dispatching %s", msg.c_str());

        task->dispatch(action);

        if (requests)
          requests->emplace(action->name, actions[cursor].action);
      }

      return cursor;
    }

    TimedActionSchedule::TimedActionSchedule(
    float duration, std::map<std::string, TimedStack> actions)
    : m_duration(duration), m_cursor({ 0, 0, 0, 0 })
    {
      for (auto& entity : actions)
      {
        auto& stack = entity.second;

        while (!stack.empty())
        {
          TimedAction action = stack.back();
          stack.pop_back();

          Action action_;
          action_.action = action.list;
          action_.activation = action.activation;
          action_.ignore = action.ignore;
          action_.prescheduled = action.prescheduled;
          action_.scheduled_time = action.sched_time;

          if (action.id.empty())
          {
            // plan action
            action.start ? m_plan_start_actions.emplace_back(action_)
                         : m_plan_end_actions.emplace_back(action_);
            continue;
          }

          auto maneuver_action = ManeuverAction{ action_, action.id, false };

          action.start ? m_maneuver_start_actions.emplace_back(maneuver_action)
                       : m_maneuver_end_actions.emplace_back(maneuver_action);
        }
      }

      sort(m_plan_start_actions);
      sort(m_plan_end_actions);
      sort(m_maneuver_start_actions);
      sort(m_maneuver_end_actions);
    }

    float
    TimedActionSchedule::calibrationTime(
    float maneuver_start_eta) const noexcept
    {
      float earliest_plan_action = -1.0f;

      if (planStartActionsPending())
        earliest_plan_action
        = std::max(earliest_plan_action, getPlanStartAction().scheduled_time);

      if (planEndActionsPending())
        earliest_plan_action
        = std::max(earliest_plan_action, getPlanEndAction().scheduled_time);

      earliest_plan_action -= m_duration;

      float earliest_maneuver_action = -1.0f;

      if (maneuverStartActionsPending())
        earliest_maneuver_action
        = std::max(earliest_maneuver_action,
                   getManeuverStartAction().scheduled_time);

      if (maneuverEndActionsPending())
        earliest_maneuver_action
        = std::max(earliest_maneuver_action,
                   getManeuverEndAction().scheduled_time);

      earliest_maneuver_action -= maneuver_start_eta;

      return std::max(earliest_plan_action, earliest_maneuver_action);
    }

    void
    TimedActionSchedule::onProgress(float time_left, DUNE::Tasks::Task* task,
                                    std::map<std::string, Action>* requests)
    {
      // Dispatch plan start actions scheduled to earlier than time_left
      m_cursor.plan_start
      = dispatchPlanActions(time_left, m_cursor.plan_start,
                            m_plan_start_actions, task, requests);

      // Dispatch plan end actions scheduled to earlier than time_left
      m_cursor.plan_end
      = dispatchPlanActions(time_left, m_cursor.plan_end, m_plan_end_actions,
                            task, requests);

      // Dispatch maneuver actions scheduled to earlier than time_left
      m_cursor.maneuver_start = dispatchManeuverActions(
      time_left, m_cursor.maneuver_start, m_maneuver_start_actions, task,
      [](ManeuverAction const& a) {
        return !a.action.ignore && !a.maneuver_done;
      },
      requests);

      // Dispatch maneuver end actions scheduled to earlier than time_left
      m_cursor.maneuver_end = dispatchManeuverActions(
      time_left, m_cursor.maneuver_end, m_maneuver_end_actions, task,
      [](ManeuverAction const& a) { return !a.action.ignore; }, requests);
    }

    void
    TimedActionSchedule::maneuverDone(std::string const& id) noexcept
    {
      auto const mark_action = [id](ManeuverAction& a) {
        if (id == a.id)
          a.maneuver_done = true;
      };

      for_each(m_maneuver_start_actions, mark_action);
      for_each(m_maneuver_end_actions, mark_action);
    }

    void
    TimedActionSchedule::planPaused(std::string const& maneuver_id,
                                    DUNE::Tasks::Task* task)
    {
      // Dispatch all of the current maneuver's end actions
      for_each(m_maneuver_end_actions,
               [task, maneuver_id](ManeuverAction const& a) {
                 if (maneuver_id == a.id)
                   task->dispatch(a.action.action);
               });

      // Dispatch the plan end actions
      for_each(m_plan_end_actions,
               [task](Action const& a) { task->dispatch(a.action); });

      // Find the earliest start action of the maneuvers which haven't
      // finished yet
      auto const earliest_start_action
      = std::find_if(std::begin(m_maneuver_start_actions),
                     std::end(m_maneuver_start_actions),
                     [](ManeuverAction const& a) { return !a.maneuver_done; });

      // Roll back the cursor
      if (earliest_start_action != m_maneuver_start_actions.end())
        m_cursor.maneuver_start
        = std::distance(std::begin(m_maneuver_start_actions),
                        earliest_start_action);
      else
        m_cursor.maneuver_start = m_maneuver_start_actions.size();

      // Similarly for end actions
      auto const earliest_end_action
      = std::find_if(std::begin(m_maneuver_end_actions),
                     std::end(m_maneuver_end_actions),
                     [](ManeuverAction const& a) { return !a.maneuver_done; });

      if (earliest_end_action != m_maneuver_end_actions.end())
        m_cursor.maneuver_end
        = std::distance(std::begin(m_maneuver_end_actions),
                        earliest_end_action);
      else
        m_cursor.maneuver_end = m_maneuver_end_actions.size();
    }

    bool
    TimedActionSchedule::waiting(float time_left) const noexcept
    {
      if (planStartActionsPending()
          && getPlanStartAction().scheduled_time >= time_left)
        return true;

      if (planEndActionsPending()
          && getPlanEndAction().scheduled_time >= time_left)
        return true;

      if (maneuverStartActionsPending()
          && getManeuverStartAction().scheduled_time >= time_left)
        return true;

      if (maneuverEndActionsPending()
          && getManeuverEndAction().scheduled_time >= time_left)
        return true;

      return false;
    }
  } // namespace Engine
} // namespace Plan
