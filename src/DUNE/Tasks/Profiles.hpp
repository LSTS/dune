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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_PROFILES_HPP_INCLUDED_
#define DUNE_TASKS_PROFILES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <string>
#include <set>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Mutex.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Profiles;

    class Profiles
    {
    public:
      //! Destructor.
      ~Profiles(void)
      {
        clear();
      }

      //! Add a profile to the list of available profiles.
      //! @param name profile name.
      //! @param description profile description.
      void
      add(const std::string& name, const std::string& description);

      //! Clear all profiles.
      void
      clear(void);

      //! Select a given profile or comma separated list of profiles.
      //! @param name profile name or comma separated list of profile names.
      void
      select(const std::string& name);

      //! Unselect a given profile or profile list.
      //! @param name profile name or comma separated list of profile names.
      void
      unselect(const std::string& name);

      //! Test if a given profile (or any profile in a profile list) is selected.
      //! @param name profile name or comma separated list of profile names.
      bool
      isSelected(const std::string& name);

      //! Retrieve the comma separated list of currently selected
      //! profiles.
      //! @return comma separated list of currently selected profiles.
      std::string
      getSelected(void);

    private:
      // Forward declarations.
      struct Details;
      //! Map of all registered profiles.
      std::map<std::string, Details*> m_profiles;
      //! Set of selected profiles.
      std::set<std::string> m_selected;
      //! Concurrency mutex.
      Concurrency::Mutex m_mutex;
    };
  }
}

#endif
