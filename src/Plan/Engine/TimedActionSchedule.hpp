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

#ifndef PLAN_ENGINE_TIMEDACTIONSCHEDULE_HPP_INCLUDED_
#define PLAN_ENGINE_TIMEDACTIONSCHEDULE_HPP_INCLUDED_

// C++ standard library headers.
#include <cstddef>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace Plan
{
  namespace Engine
  {
    struct Action
    {
      //! The action to be dispatched.
      DUNE::IMC::SetEntityParameters* action;
      //! Scheduled time backwards from the plan end time.
      float scheduled_time;
      //! Whether this action should be ignored in regular conditions.
      //! Sometimes the action will still be dispatched.
      bool ignore;
      //! True if this action activates an entity
      bool activation;
      //! True if the action accounts for the entity activation time
      bool prescheduled;
    };

    inline bool
    operator<(Action const& left, Action const& right)
    {
      return left.scheduled_time > right.scheduled_time;
    }

    struct ManeuverAction
    {
      Action action;
      //! Maneuver id.
      std::string id;
      //! Whether the maneuver corresponding to this action is done, so that it
      //! can be ignored.
      bool maneuver_done;
    };

    inline bool
    operator<(ManeuverAction const& left, ManeuverAction const& right)
    {
      return left.action.scheduled_time > right.action.scheduled_time;
    }

    struct TimedAction;

    class TimedActionSchedule
    {
    public:
      TimedActionSchedule(
      float duration, std::map<std::string, std::vector<TimedAction>> actions);

      float
      calibrationTime(float maneuver_start_eta) const noexcept;

      float
      calibrationTime(void) const noexcept
      {
        return calibrationTime(m_duration);
      }

      void
      onProgress(float time_left, DUNE::Tasks::Task* task,
                 std::map<std::string, Action>* requests);

      void
      flush(DUNE::Tasks::Task* task)
      {
        onProgress(-1.0, task, nullptr);
      }

      void
      maneuverDone(std::string const& id) noexcept;

      void
      planPaused(std::string const& maneuver_id, DUNE::Tasks::Task* task);

      bool
      waiting(float time_left) const noexcept;

      bool
      planStartActionsPending(void) const noexcept
      {
        return !m_plan_start_actions.empty()
               && m_cursor.plan_start < m_plan_start_actions.size();
      }

      bool
      planEndActionsPending(void) const noexcept
      {
        return !m_plan_end_actions.empty()
               && m_cursor.plan_end < m_plan_end_actions.size();
      }

      bool
      maneuverStartActionsPending(void) const noexcept
      {
        return !m_maneuver_start_actions.empty()
               && m_cursor.maneuver_start < m_maneuver_start_actions.size();
      }

      bool
      maneuverEndActionsPending(void) const noexcept
      {
        return !m_maneuver_end_actions.empty()
               && m_cursor.maneuver_end < m_maneuver_end_actions.size();
      }

      Action const&
      getPlanStartAction(void) const noexcept
      {
        return m_plan_start_actions[m_cursor.plan_start];
      }

      Action const&
      getPlanEndAction(void) const noexcept
      {
        return m_plan_end_actions[m_cursor.plan_end];
      }

      Action const&
      getManeuverStartAction(void) const noexcept
      {
        return m_maneuver_start_actions[m_cursor.maneuver_start].action;
      }

      Action const&
      getManeuverEndAction(void) const noexcept
      {
        return m_maneuver_end_actions[m_cursor.maneuver_end].action;
      }

    private:
      struct Cursor
      {
        std::size_t plan_start;
        std::size_t plan_end;
        std::size_t maneuver_start;
        std::size_t maneuver_end;
      };

      //! Total predicted duration of the plan.
      float m_duration;

      //! Index of the next action of each type
      Cursor m_cursor;

      //! Timeline of plan start actions
      std::vector<Action> m_plan_start_actions;
      //! Timeline of plan end actions
      std::vector<Action> m_plan_end_actions;
      //! Timeline of maneuver start actions
      std::vector<ManeuverAction> m_maneuver_start_actions;
      //! Timeline of maneuver end actions
      std::vector<ManeuverAction> m_maneuver_end_actions;
    };
  } // namespace Engine
} // namespace Plan

#endif
