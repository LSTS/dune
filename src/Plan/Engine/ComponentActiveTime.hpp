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

#ifndef PLAN_ENGINE_COMPONENT_ACTIVE_TIME_HPP_INCLUDED_
#define PLAN_ENGINE_COMPONENT_ACTIVE_TIME_HPP_INCLUDED_

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
    class DUNE_DLL_SYM ComponentActiveTime;

    //! Class to handle each component's active time
    class ComponentActiveTime
    {
    public:
      //! Pair of string to float
      typedef std::pair<const std::string, float> ActiveTime;
      //! Map of strings to floats
      typedef std::map<std::string, float> ATMap;
      //! Const iterator
      typedef ATMap::const_iterator const_iterator;

      //! Constructor
      ComponentActiveTime(void)
      { }

      //! Destructor
      ~ComponentActiveTime(void)
      { }

      //! Add a component's active time to the list
      //! @param[in] id component name
      //! @param[in] value time active in seconds
      void
      addActiveTime(const std::string& id, float value)
      {
        ATMap::iterator itr;
        itr = m_list.find(id);

        if (itr == m_list.end())
          m_list.insert(ActiveTime(id, value));
        else
          itr->second += value;
      }

      //! Subtract active time from a component
      //! @param[in] id component name
      //! @param[in] value time active to subtract in seconds
      void
      subtractActiveTime(const std::string& id, float value)
      {
        ATMap::iterator itr;
        itr = m_list.find(id);

        if (itr == m_list.end())
          return;
        else
          itr->second = std::max(0.0f, itr->second - value);
      }

      //! Get component's active time
      //! @param[in] id component name
      //! @return active time, -1.0 if canont find id
      float
      getActiveTime(const std::string& id) const
      {
        ATMap::const_iterator itr;
        itr = m_list.find(id);

        if (itr == m_list.end())
          return -1.0;
        else
          return itr->second;
      }

      //! Clear the contents
      void
      clear(void)
      {
        m_list.clear();
      }

      //! First position of the vector
      //! @return const iterator to begin()
      inline const_iterator
      begin(void) const
      {
        return m_list.begin();
      }

      //! Last position of the vector
      //! @return const iterator to end()
      inline const_iterator
      end(void) const
      {
        return m_list.end();
      }

    private:
      //! Set of ActiveTime
      ATMap m_list;
    };
  }
}

#endif
