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
      //! Struct for actions set on a timed reference
      struct TimedAction
      {
        //! Time relative to Plan's eta to fire action
        float time;
        //! Set Entity parameters to dispatch
        IMC::SetEntityParameters* list;
      };

      //! Actions that should be fired on plan and maneuver start or end
      struct onEventActions
      {
        //! Vector of pointers to start actions
        std::vector<IMC::SetEntityParameters*> start_actions;
        //! Vector of pointers to end actions
        std::vector<IMC::SetEntityParameters*> end_actions;
      };

      //! Map to address event based actions
      typedef std::map<std::string, onEventActions> EventMap;

      //! Fill timed actions queue
      void
      createSchedule(const std::vector<IMC::PlanManeuver*> nodes)
      {
        (void)nodes;
      }

    private:
      //! Queue of timed actions
      std::queue<TimedAction, std::vector<TimedAction> > m_timed;
      //! Map of event based actions
      EventMap m_onevent;
    };
  }
}

#endif
