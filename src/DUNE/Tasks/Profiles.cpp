//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Profiles.cpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/Tasks/Profiles.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>

namespace DUNE
{
  namespace Tasks
  {
    struct Profiles::Details
    {
      std::string description;
    };

    void
    Profiles::add(const std::string& name, const std::string& description)
    {
      Profiles::Details* pro = new Profiles::Details;
      pro->description = description;

      Concurrency::ScopedMutex l(m_mutex);
      m_profiles[name] = pro;
    }

    void
    Profiles::clear(void)
    {
      Concurrency::ScopedMutex l(m_mutex);
      std::map<std::string, Profiles::Details*>::iterator itr = m_profiles.begin();
      for (; itr != m_profiles.end(); ++itr)
        delete itr->second;

      m_profiles.clear();
    }

    void
    Profiles::select(const std::string& name)
    {
      std::vector<std::string> names;
      Utils::String::split(name, ",", names);

      Concurrency::ScopedMutex l(m_mutex);
      for (unsigned i = 0; i < names.size(); ++i)
      {
        if (m_profiles.find(names[i]) == m_profiles.end())
          throw std::runtime_error(Utils::String::str("no such profile name '%s'", names[i].c_str()));

        m_selected.insert(names[i]);
      }
    }

    void
    Profiles::unselect(const std::string& name)
    {
      std::vector<std::string> names;
      Utils::String::split(name, ",", names);

      Concurrency::ScopedMutex l(m_mutex);
      for (unsigned i = 0; i < names.size(); ++i)
      {
        if (m_profiles.find(names[i]) == m_profiles.end())
          throw std::runtime_error(Utils::String::str("no such profile name '%s'", names[i].c_str()));

        m_selected.erase(names[i]);
      }
    }

    bool
    Profiles::isSelected(const std::string& name)
    {
      std::vector<std::string> names;
      Utils::String::split(name, ",", names);

      Concurrency::ScopedMutex l(m_mutex);
      for (unsigned i = 0; i < names.size(); ++i)
      {
        if (names[i] == "Always")
          return true;

        if (m_selected.find(names[i]) != m_selected.end())
          return true;
      }

      return false;
    }

    std::string
    Profiles::getSelected(void)
    {
      std::set<std::string>::iterator itr = m_selected.begin();

      if (itr == m_selected.end())
        return "";

      std::string str = *itr;
      ++itr;

      for (; itr != m_selected.end(); ++itr)
      {
        str.append(", ");
        str.append(*itr);
      }

      return str;
    }
  }
}
