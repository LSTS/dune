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

#ifndef SUPERVISORS_REPORTER_CLIENT_HPP_INCLUDED_
#define SUPERVISORS_REPORTER_CLIENT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Ticket.hpp"

namespace Supervisors
{
  namespace Reporter
  {
    using namespace DUNE;

    //! This class is a client-side API to use reporter supervisor.
    //!
    //! @author José Braga
    class Client
    {
    public:
      //! Constructor.
      Client(Tasks::Task* task, CommInterface interface, float time = 0.0, bool wait_ack = false):
        m_task(task)
      {
        m_interface = interface;
        m_wait_ack = wait_ack;
        m_timer.setTop(time);
      }

      //! Consume report messages.
      //! @param[in] msg ReportControl message.
      void
      consume(const IMC::ReportControl* msg)
      {
        if (msg->op != IMC::ReportControl::OP_REQUEST_REPORT)
          return;

        if (!(msg->comm_interface & m_interface))
          return;

        // Iterate through list and add if necessary.
        std::vector<IMC::ReportControl>::iterator itr = m_list.begin();
        for (; itr != m_list.end(); ++itr)
        {
          // Same ticket.
          if (itr->sys_dst == msg->sys_dst)
            return;
        }

        // Copy message to vector.
        IMC::ReportControl rc = *msg;
        rc.op = IMC::ReportControl::OP_REPORT_SENT;
        m_list.push_back(rc);
      }

      //! Call this function to see if there are reports to be sent.
      //! @param[out] destination destination system.
      //! @return true if there are reports to be sent, false otherwise.
      bool
      trigger(std::string* destination = NULL)
      {
        if (!m_timer.overflow())
          return false;

        if (m_list.size() > 0)
        {
          if (destination != NULL)
            *destination = m_list.front().sys_dst;

          if (m_wait_ack)
            m_list_acks.push_back(m_list.front());
          else
            m_task->dispatch(m_list.front());

          m_list.erase(m_list.begin(), m_list.begin() + 1);
          m_timer.reset();

          return true;
        }

        return false;
      }

      //! Call this function to acknowledge that report was sent.
      //! @param[in] destination destination system.
      //! @return true if there acknowledge was sent, false otherwise.
      bool
      ack(const std::string destination = "")
      {
        if (m_wait_ack && m_list_acks.size() > 0)
        {
          if (!destination.size())
          {
            m_task->dispatch(m_list_acks.front());
            m_list_acks.erase(m_list_acks.begin(), m_list_acks.begin() + 1);
            return true;
          }
          else
          {
            // Iterate through list, dispatch and erase.
            std::vector<IMC::ReportControl>::iterator itr = m_list_acks.begin();
            for (; itr != m_list_acks.end(); ++itr)
            {
              // Same ticket.
              if (itr->sys_dst == destination)
              {
                m_task->dispatch(*itr);
                m_list_acks.erase(itr, itr + 1);
                return true;
              }
            }
          }
        }

        return false;
      }

    private:
      //! List of current ReportControl requests.
      std::vector<IMC::ReportControl> m_list;
      //! ReportControl acknowledgment waiting list.
      std::vector<IMC::ReportControl> m_list_acks;
      //! Pointer to task.
      Tasks::Task* m_task;
      //! Wait for acknowledgement from task.
      bool m_wait_ack;
      //! Local task interface;
      CommInterface m_interface;
      //! Time to wait between triggers.
      Time::Counter<float> m_timer;
    };
  }
}
#endif
