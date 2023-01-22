//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SUPERVISORS_REPORTER_DISPATCHER_HPP_INCLUDED_
#define SUPERVISORS_REPORTER_DISPATCHER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Ticket.hpp"

namespace Supervisors
{
  namespace Reporter
  {
    using namespace DUNE;

    //! Dispatcher class.
    //!
    //! This class handles a vector of tickets.
    //! These tickets hold report information to issue
    //! single requests
    //!
    //! @author José Braga
    class Dispatcher
    {
    public:
      //! Constructor.
      Dispatcher(void)
      { }

      //! Add tickets to dispatcher.
      //! @param[in] ticket ticket with report information.
      void
      add(const Ticket ticket)
      {
        if (!ticket.isOperationStart())
          return;

        // Iterate through list and add if necessary.
        std::vector<Ticket>::iterator itr = m_list.begin();
        for (; itr != m_list.end(); ++itr)
        {
          // Same ticket.
          if (itr->compare(ticket))
          {
            // Just update period.
            if (itr->getPeriod() != ticket.getPeriod())
              itr->reset(ticket.getPeriod());

            return;
          }
        }

        m_list.push_back(ticket);
      }

      //! Remove tickets from dispatcher.
      //! @param[in] ticket ticket with report information.
      void
      remove(const Ticket ticket)
      {
        if (ticket.isOperationStart())
          return;

        // Iterate through list and remove if necessary.
        std::vector<Ticket>::iterator itr = m_list.begin();
        for (; itr != m_list.end(); ++itr)
        {
          // Same ticket.
          if (itr->compare(ticket))
          {
            // Erase from list.
            m_list.erase(itr, itr + 1);
            return;
          }
        }
      }

      //! Trigger through all tickets.
      void
      run(void)
      {
        // Iterate and call triggers.
        std::vector<Ticket>::iterator itr = m_list.begin();
        for (; itr != m_list.end(); ++itr)
          itr->trigger();
      }

      //! Clear dispatcher list.
      void
      clear(void)
      {
        m_list.clear();
      }

      //! Check if dispatcher is empty.
      //! @return true if dispatcher is empty, false otherwise.
      bool
      isEmpty(void)
      {
        if (m_list.size() == 0)
          return true;

        return false;
      }

    private:
      //! List of active tickets.
      std::vector<Ticket> m_list;
    };
  }
}
#endif
