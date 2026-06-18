//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef SUPERVISORS_VEHICLE_MANEUVER_SUPERVISOR_HPP_INCLUDED_
#define SUPERVISORS_VEHICLE_MANEUVER_SUPERVISOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Time.hpp>
#include <DUNE/Memory.hpp>
#include <DUNE/Tasks.hpp>

// Local headers
#include "Request.hpp"

namespace Supervisors
{
  namespace Vehicle
  {
    using DUNE_NAMESPACES;

    class ManeuverSupervisor
    {
    public:
      ManeuverSupervisor(Tasks::Task* task, double timeout):
        m_task(task),
        m_curr_req(NULL),
        m_timeout(timeout),
        m_valid_state(false),
        m_state(0)
      { }

      ~ManeuverSupervisor(void)
      {
        clearCurrent();

        while (!m_reqs.empty())
        {
          delete m_reqs.front();
          m_reqs.pop();
        }
      }

      //! Add a request for stopping a maneuver
      void
      addStop(void)
      {
        Request* req = new Request(RT_STOP);
        m_reqs.push(req);

        m_task->debug("added stop");
      }

      //! Add a request for starting a maneuver
      void
      addStart(const IMC::Message* msg)
      {
        Request* req = new Request(RT_START, msg);
        m_reqs.push(req);

        m_task->debug("added start %s", msg->getName());
      }

      //! Update current requests with ManeuverControlState message
      void
      update(const IMC::ManeuverControlState* msg)
      {
        m_state = msg->state;
        m_valid_state = true;

        if (m_curr_req == NULL)
          return;

        switch (msg->state)
        {
          case IMC::ManeuverControlState::MCS_EXECUTING:
            if (m_curr_req->isStart())
              m_task->debug("%s maneuver started", m_curr_req->getMessage()->getName());
            break;
          case IMC::ManeuverControlState::MCS_STOPPED:
            if (m_curr_req->isStop())
              m_task->debug("maneuver stopped");
            break;
          case IMC::ManeuverControlState::MCS_DONE:
          case IMC::ManeuverControlState::MCS_ERROR:
            m_task->debug("request dropped");
            break;
        }

        clearCurrent();
      }

      //! Update without using
      void
      update(void)
      {
        checkExpiration();
      }

      //! Check if current request hasn't expired
      void
      checkExpiration(void)
      {
        if (m_curr_req == NULL)
          return;

        if (Time::Clock::get() - m_curr_req->getIssueTime() > m_timeout)
        {
          m_task->err(DTR("reply to maneuver %s has timed out"), m_curr_req->isStop() ? DTR("stop") : DTR("start"));
          m_task->err(DTR("system may need maintenance"));

          // restart timer
          m_curr_req->issue();
        }
      }

      //! Clear current request
      void
      clearCurrent(void)
      {
        if (m_curr_req != NULL)
        {
          m_task->debug("cleared %s request", m_curr_req->isStop() ? "stop" : "start");
          Memory::clear(m_curr_req);
          m_curr_req = NULL;
        }
      }

      //! Pointer to task
      Tasks::Task* m_task;
      //! Pointer to current request being handled
      Request* m_curr_req;
      //! Timeout for a request
      double m_timeout;
      //! Queue of requests
      std::queue<Request*> m_reqs;
      //! True if maneuver control state has been set
      bool m_valid_state;
      //! Current maneuver control state
      unsigned m_state;
    };
  }
}

#endif