//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef SUPERVISORS_REPORTER_TICKET_HPP_INCLUDED_
#define SUPERVISORS_REPORTER_TICKET_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace Reporter
  {
    using namespace DUNE;

    //! Communication interfaces. The variables must match
    //! IMC::ReportControl communication interface field.
    enum CommInterface
    {
      //! Acoustic.
      IS_ACOUSTIC = 0x01,
      //! Satellite.
      IS_SATELLITE = 0x02,
      //! GSM.
      IS_GSM = 0x04,
      //! Mobile.
      IS_MOBILE = 0x08
    };

    //! Request structure.
    struct Request
    {
      //! Sequence Id.
      uint16_t id;
      //! IMC source address.
      uint8_t interface;
      //! Desired periodicity.
      uint16_t period;
      //! Destination system.
      std::string destination;
      //! Start/stop operation.
      bool start;
    };

    //! Ticket class.
    class Ticket
    {
    public:
      //! Constructor.
      Ticket(Tasks::Task* task, unsigned id, const IMC::ReportControl* msg):
        m_rc(NULL),
        m_task(task)
      {
        m_ticket.id = id;
        m_ticket.interface = msg->comm_interface;
        m_ticket.period = msg->period;
        m_ticket.destination = msg->sys_dst;

        // Initialize counter.
        if (msg->op == IMC::ReportControl::OP_REQUEST_START)
        {
          m_ticket.start = true;
          m_timer.setTop(m_ticket.period);
          Memory::replace(m_rc, new IMC::ReportControl(*msg));
          m_rc->op = IMC::ReportControl::OP_REQUEST_REPORT;
        }
        else
        {
          m_ticket.start = false;
        }
      }

      //! Trigger a report.
      //! @return true if report was requested, false otherwise.
      bool
      trigger(void)
      {
        // Positive request.
        if (m_ticket.start && m_rc != NULL)
        {
          // It is time to report.
          if (m_timer.overflow())
          {
            m_timer.reset();
            m_task->dispatch(*m_rc);
            return true;
          }
        }

        return false;
      }

      bool
      compare(const Ticket ticket)
      {
        if (m_ticket.interface == ticket.getInterface() &&
            m_ticket.destination == ticket.getDestination())
          return true;

        return false;
      }

      void
      reset(uint16_t period)
      {
        m_ticket.period = period;
        m_timer.setTop(period);
      }

      uint8_t
      getInterface(void) const
      {
        return m_ticket.interface;
      }

      std::string
      getDestination(void) const
      {
        return m_ticket.destination;
      }

      bool
      isOperationStart(void) const
      {
        return m_ticket.start;
      }

      uint16_t
      getPeriod(void) const
      {
        return m_ticket.period;
      }

    private:
      //! Ticket issued.
      Request m_ticket;
      //! Ticket timer.
      Time::Counter<double> m_timer;
      //! Pointer to ReportControl.
      IMC::ReportControl* m_rc;
      //! Pointer to task.
      Tasks::Task* m_task;
    };
  }
}
#endif
