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

#ifndef DUNE_PLANS_PLANPROGRESS_HPP_INCLUDED_
#define DUNE_PLANS_PLANPROGRESS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdlib>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers.hpp>
#include <DUNE/Utils.hpp>

namespace DUNE
{
  namespace Plans
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM PlanProgress;

    //! Maximum estimated time of arrival
    static const int c_max_eta = 65535;

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

        if (!durations.size() || mcs->eta == c_max_eta)
          return -1.0;

        float time_left = -1.0;

        switch (man->getId())
        {
#ifdef DUNE_IMC_GOTO
          case DUNE_IMC_GOTO:
#endif
#ifdef DUNE_IMC_STATIONKEEPING
          case DUNE_IMC_STATIONKEEPING:
#endif
#ifdef DUNE_IMC_LOITER
          case DUNE_IMC_LOITER:
#endif
#ifdef DUNE_IMC_ELEVATOR
          case DUNE_IMC_ELEVATOR:
#endif
#ifdef DUNE_IMC_YOYO
          case DUNE_IMC_YOYO:
#endif
#ifdef DUNE_IMC_POPUP
          case DUNE_IMC_POPUP:
            time_left = total_duration - durations[0] + (float)mcs->eta;
            break;
#endif
#ifdef DUNE_IMC_FOLLOWPATH
          case DUNE_IMC_FOLLOWPATH:
            time_left = compute(dynamic_cast<const IMC::FollowPath*>(man), mcs,
                                durations, total_duration);
            break;
#endif
#ifdef DUNE_IMC_ROWS
          case DUNE_IMC_ROWS:
            time_left = compute(dynamic_cast<const IMC::Rows*>(man), mcs,
                                durations, total_duration);
            break;
#endif
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
