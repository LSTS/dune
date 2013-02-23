//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: PlanProgress.hpp 12966 2013-02-19 16:11:41Z pdcalado             $:*
//***************************************************************************

#ifndef DUNE_PLAN_ENGINE_PLANPROGRESS_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_PLANPROGRESS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdlib>

// DUNE headers.
#include <DUNE/Coordinates.hpp>
#include <DUNE/Math/Angles.hpp>
#include <DUNE/IMC.hpp>
#include <DUNE/Utils.hpp>

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    // Export DLL Symbol.
    class DUNE_DLL_SYM PlanProgress;

    //! Maximum estimated time of arrival
    static const int c_max_duration = 65535;

    //! Utility class to estimate a plan's progress.
    class PlanProgress
    {
    public:
      //! Get waypoint number out of info message
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[out] number waypoint number
      //! @return true if able to get number, false otherwise
      static bool
      getPoint(const IMC::ManeuverControlState* mcs, unsigned& number)
      {
        std::vector<std::string> lst;
        Utils::String::split(mcs->info, "=", lst);

        if (!lst.size())
          return false;
        else if (lst.back() == "")
          return false;

        number = std::atoi(lst.back().c_str());

        return true;
      }

      //! Compute progress for multiple waypoint maneuver
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[in] durations reference to durations vector
      //! @param[in] total_duration full duration of the plan
      //! @return time left in seconds
      static float
      compute(const IMC::ManeuverControlState* mcs, const std::vector<float>& durations,
              float total_duration)
      {
        unsigned curr;

        if (!getPoint(mcs, curr))
          return -1.0;

        if (curr > durations.size())
          return -1.0;

        return total_duration - durations[curr] + (float)mcs->eta;
      }

#ifdef DUNE_IMC_FOLLOWPATH
      //! Compute progress of FollowPath maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[in] durations reference to durations vector
      //! @param[in] total_duration full duration of the plan
      //! @return time left in seconds
      static float
      compute(const IMC::FollowPath* maneuver, const IMC::ManeuverControlState* mcs,
              const std::vector<float>& durations, float total_duration)
      {
        (void)maneuver;

        return compute(mcs, durations, total_duration);
      };
#endif

#ifdef DUNE_IMC_ROWS
      //! Compute progress of Rows maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[in] durations reference to durations vector
      //! @param[in] total_duration full duration of the plan
      //! @return time left in seconds
      static float
      compute(const IMC::Rows* maneuver, const IMC::ManeuverControlState* mcs,
              const std::vector<float>& durations, float total_duration)
      {
        (void)maneuver;

        return compute(mcs, durations, total_duration);
      };
#endif

      //! Compute a plan's progress from maneuver and ManeuverControlState
      //! @param[in] man pointer to maneuver message
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[in] durations pointer to vector of maneuver duration(s)
      //! @param[in] total_duration full duration of the plan
      //! @return progress of the whole plan
      static float
      compute(const IMC::Message* man, const IMC::ManeuverControlState* mcs,
              const std::vector<float>& durations, float total_duration)
      {
        if (man == NULL)
          return -1.0;

        if (!durations.size() || mcs->eta == c_max_duration)
          return -1.0;

        float time_left = -1.0;

        switch (man->getId())
        {
          case DUNE_IMC_GOTO:
          case DUNE_IMC_STATIONKEEPING:
          case DUNE_IMC_LOITER:
          case DUNE_IMC_ELEVATOR:
          case DUNE_IMC_YOYO:
            time_left = total_duration - durations[0] + (float)mcs->eta;
            break;
          case DUNE_IMC_FOLLOWPATH:
            time_left = compute(dynamic_cast<const IMC::FollowPath*>(man), mcs,
                                durations, total_duration);
            break;
          case DUNE_IMC_ROWS:
            time_left = compute(dynamic_cast<const IMC::Rows*>(man), mcs,
                                durations, total_duration);
            break;
          default:
            return -1.0;
        }

        if (time_left < 0.0)
          return -1.0;

        time_left = trimValue(time_left, 0.0, total_duration);

        return 100.0 * trimValue((1.0 - time_left / total_duration), 0.0, 1.0);
      };
    };
  }
}

#endif
