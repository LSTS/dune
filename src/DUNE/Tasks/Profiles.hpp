//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
