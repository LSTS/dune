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

#ifndef PLAN_ENGINE_GROUP_SPEED_HPP_INCLUDED_
#define PLAN_ENGINE_GROUP_SPEED_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    // Export DLL Symbol.
    class DUNE_DLL_SYM GroupSpeed;

    class GroupSpeed
    {
    public:
      typedef std::pair<float, float> SpeedPair;
      typedef std::map<float, float> GroupMap;
      typedef GroupMap::iterator iterator;
      typedef GroupMap::const_iterator const_iterator;

      GroupSpeed(float tol):
        m_tolerance(tol)
      { }

      void
      add(float speed, float duration)
      {
        if (m_gmap.empty())
        {
          m_gmap.insert(SpeedPair(speed, duration));
          return;
        }

        iterator first = m_gmap.lower_bound(speed - m_tolerance);
        iterator last = m_gmap.upper_bound(speed + m_tolerance);

        // If they are equal, the sequence is empty, and thus no entry was found.
        // Return the end iterator to be consistent with std::find.
        if (first == last)
        {
          m_gmap.insert(SpeedPair(speed, duration));
          return;
        }

        iterator itr = first;
        iterator closest = first;
        float dist = std::fabs(first->first - speed);
        for (; itr != last; ++itr)
        {
          if (std::fabs(itr->first - speed) < dist)
          {
            dist = std::fabs(itr->first - speed);
            closest = itr;
          }
        }

        closest->second += duration;
      }

      const_iterator
      begin(void) const
      {
        return m_gmap.begin();
      }

      const_iterator
      end(void) const
      {
        return m_gmap.end();
      }

    private:
      //! Map of speed in rpms to duration
      GroupMap m_gmap;
      //! Tolerance
      float m_tolerance;
    };
  }
}

#endif
