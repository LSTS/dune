//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef PLAN_ENGINE_TIMELINE_HPP_INCLUDED_
#define PLAN_ENGINE_TIMELINE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace Plan
{
  namespace Engine
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Timeline;

    //! Class to gather each maneuver's ETA
    class Timeline
    {
    public:
      //! Start and End ETA
      struct ETA
      {
        //! Start ETA
        float start;
        //! End ETA
        float end;
      };

      //! Pair of maneuver id to it's ETA
      typedef std::pair<const std::string, ETA> ETAPair;
      //! Map of maneuver ids to their ETAs
      typedef std::map<std::string, ETA> ETAMap;

      //! Constructor
      Timeline(void)
      {
        m_plan.end = 0.0;
        m_execution_duration = -1.0;
      }

      //! Destructor
      ~Timeline(void)
      { }

      //! Set the complete plan end ETA
      //! @param[in] value plan's end ETA
      void
      setPlanETA(float value)
      {
        m_plan.start = value;
      }

      //! Get the complete plan ETA
      //! @return the plan's ETA
      inline float
      getPlanETA(void) const
      {
        return m_plan.start;
      }

      //! Set maneuver's ETA
      //! @param[in] id maneuver id
      //! @param[in] start_eta estimated time of arrival of the start of the maneuver
      //! @param[in] end_eta estimated time of arrival of the end of the maneuver
      void
      setManeuverETA(const std::string& id, float start_eta, float end_eta)
      {
        ETA eta;
        eta.start = start_eta;
        eta.end = end_eta;

        if (m_execution_duration < 0.0)
          m_execution_duration = eta.start;
        else
          m_execution_duration = std::max(m_execution_duration, eta.start);

        m_list.insert(ETAPair(id, eta));
      }

      //! Get maneuver's start ETA
      //! @param[in] id maneuver id
      //! @return maneuver's ETA, returns -1.0 if cannot find maneuver
      float
      getManeuverStartETA(const std::string& id) const
      {
        ETAMap::const_iterator itr;
        itr = m_list.find(id);

        if (itr == m_list.end())
          return -1.0;
        else
          return itr->second.start;
      }

      //! Get maneuver's end ETA
      //! @param[in] id maneuver id
      //! @return maneuver's ETA, returns -1.0 if cannot find maneuver
      float
      getManeuverEndETA(const std::string& id) const
      {
        ETAMap::const_iterator itr;
        itr = m_list.find(id);

        if (itr == m_list.end())
          return -1.0;
        else
          return itr->second.end;
      }

      //! Get execution duration
      //! @return execution duration in seconds
      inline float
      getExecutionDuration(void) const
      {
        return m_execution_duration;
      }

    private:
      //! Map maneuvers and their ETAs
      ETAMap m_list;
      //! Plan's ETA
      ETA m_plan;
      //! Execution duration
      float m_execution_duration;
    };
  }
}

#endif
