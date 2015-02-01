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

#ifndef SENSORS_EDGETECH_2205_ESTIMATED_STATE_LIST_HPP_INCLUDED_
#define SENSORS_EDGETECH_2205_ESTIMATED_STATE_LIST_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <list>
#include <iterator>
#include <limits>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Packet.hpp"
#include "EstimatedStateEntry.hpp"

namespace Sensors
{
  namespace Edgetech2205
  {
    using DUNE_NAMESPACES;

    //! This class maintains a list of estimated state messages and allows
    //! searching for the message that is closest to a given timestamp.
    class EstimatedStateList
    {
    public:
      //! Constructor.
      EstimatedStateList(void)
      { }

      //! Destructor.
      ~EstimatedStateList(void)
      {
        clear();
      }

      //! Clear list contents.
      void
      clear(void)
      {
        while (!m_list.empty())
        {
          delete m_list.front();
          m_list.pop_front();
        }
      }

      //! Add estimated state message to end of the list.
      //! @param[in] estate estimated state message.
      void
      push_back(const IMC::EstimatedState& estate)
      {
        m_list.push_back(new EstimatedStateEntry(estate));
      }

      //! Test if list is empty.
      //! @return true if list is empty, false otherwise.
      bool
      empty(void) const
      {
        return m_list.empty();
      }

      //! Find closest estimated state message to a given time.
      //! @param[in] time time in millisecond since Unix Epoch.
      //! @param[in] delta difference between requested time and message time.
      //! @return estimate state message or NULL if none is found.
      const IMC::EstimatedState*
      find(int64_t time, int64_t& delta)
      {
        std::list<EstimatedStateEntry*>::iterator itr_min = m_list.end();
        delta = std::numeric_limits<int>::max();

        // Find closest.
        EstimatedStateEntry* entry = NULL;
        for (std::list<EstimatedStateEntry*>::iterator itr = m_list.begin(); itr != m_list.end(); ++itr)
        {
          entry = *itr;

          int64_t diff = 0;
          if (entry->getTime() > time)
            diff = entry->getTime() - time;
          else
            diff = time - entry->getTime();

          if (diff < delta)
          {
            itr_min = itr;
            delta = diff;
          }
        }

        // Remove stale messages.
        size_t last = std::distance(m_list.begin(), itr_min);
        for (size_t i = 0; i < last; ++i)
        {
          delete m_list.front();
          m_list.pop_front();
        }

        if (entry == NULL)
          return NULL;

        return (*itr_min)->getEstimatedState();
      }

    private:
      //! List of estimated state messages.
      std::list<EstimatedStateEntry*> m_list;
    };
  }
}

#endif
