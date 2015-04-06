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

#ifndef DUNE_PLANS_PROGRESS_HPP_INCLUDED_
#define DUNE_PLANS_PROGRESS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstdlib>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Maneuvers.hpp>
#include <DUNE/Utils.hpp>
#include <DUNE/Math/General.hpp>

namespace DUNE
{
  namespace Plans
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Progress;

    //! Maximum estimated time of arrival
    static const int c_max_eta = 65535;

    //! Utility class to estimate a plan's progress.
    class Progress
    {
    private:
      //! Get waypoint number out of info message
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[out] number waypoint number
      //! @return true if able to get number, false otherwise
      static bool
      getPoint(const IMC::ManeuverControlState* mcs, unsigned& number);

      //! Compute progress for multiple waypoint maneuver
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[in] durations reference to durations vector
      //! @param[in] total_duration full duration of the plan
      //! @return time left in seconds
      static float
      compute(const IMC::ManeuverControlState* mcs, const std::vector<float>& durations,
              float total_duration);

      //! Compute progress of FollowPath maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[in] durations reference to durations vector
      //! @param[in] total_duration full duration of the plan
      //! @return time left in seconds
      static float
      compute(const IMC::FollowPath* maneuver, const IMC::ManeuverControlState* mcs,
              const std::vector<float>& durations, float total_duration);

      //! Compute progress of Rows maneuver
      //! @param[in] maneuver pointer to maneuver message
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[in] durations reference to durations vector
      //! @param[in] total_duration full duration of the plan
      //! @return time left in seconds
      static float
      compute(const IMC::Rows* maneuver, const IMC::ManeuverControlState* mcs,
              const std::vector<float>& durations, float total_duration);

    public:
      //! Compute a plan's progress from maneuver and ManeuverControlState
      //! @param[in] man pointer to maneuver message
      //! @param[in] mcs pointer to ManeuverControlState message
      //! @param[in] durations pointer to vector of maneuver duration(s)
      //! @param[in] total_duration full duration of the plan
      //! @return progress of the whole plan
      static float
      compute(const IMC::Message* man, const IMC::ManeuverControlState* mcs,
              const std::vector<float>& durations, float total_duration);
    };
  }
}

#endif
