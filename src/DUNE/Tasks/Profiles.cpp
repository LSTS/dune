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
          throw std::runtime_error(Utils::String::str(DTR("no such profile name '%s'"), names[i].c_str()));

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
          throw std::runtime_error(Utils::String::str(DTR("no such profile name '%s'"), names[i].c_str()));

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
