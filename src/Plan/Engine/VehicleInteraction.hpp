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

#ifndef DUNE_PLAN_ENGINE_VEHICLE_INTERACTION_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_VEHICLE_INTERACTION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// Local headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks.hpp>

namespace Plan
{
  namespace Engine
  {
    //! Class to handle vehicle interactions
    class VehicleInteraction
    {
    public:
      //! Constructor
      VehicleInteraction(DUNE::Tasks::Task* task,
                         double reply_timeout,
                         double state_timeout):
        m_task(task),
        m_reply_timeout(reply_timeout),
        m_reply_error(false),
        m_state_timeout(state_timeout)
      {
        m_req_id = 0;
        m_reply_deadline = -1;
        m_last_vstate = Clock::get();
      }

      ~VehicleInteraction(void)
      { }

      //! Parse vehicle command reply
      //! @param[in] vc pointer to VehicleCommand message
      //! @return false if reply was ignored
      bool
      parseReply(const IMC::VehicleCommand* vc)
      {
        if (vc->type == IMC::VehicleCommand::VC_REQUEST)
          return false;

        if (!pendingReply())
          return false;

        if ((vc->getDestination() != m_task->getSystemId()) ||
            (vc->getDestinationEntity() != m_task->getEntityId()))
          return false;

        if (m_req_id != vc->request_id)
          return false;

        m_reply_deadline = -1;
        m_reply_error = vc->type == IMC::VehicleCommand::VC_FAILURE;
        m_info = vc->info;

        return true;
      }

      //! Function to run on VehicleState message
      //! @param[in] vs pointer to VehicleState message
      void
      onVehicleState(const IMC::VehicleState* vs)
      {
        (void)vs;
        m_last_vstate = Clock::get();
      }

      //! Issue a vehicle request
      //! @param[in] command type of request to issue
      //! @param[in] arg pointer to message to attach
      void
      request(IMC::VehicleCommand::CommandEnum command,
              const IMC::Message* arg = NULL)
      {
        IMC::VehicleCommand vc;
        vc.type = IMC::VehicleCommand::VC_REQUEST;
        vc.request_id = ++m_req_id;
        vc.command = command;

        if (arg != NULL)
          vc.maneuver.set(*static_cast<const IMC::Maneuver*>(arg));

        m_task->dispatch(vc);

        m_reply_deadline = Clock::get() + m_reply_timeout;

        m_reply_error = false;
        m_info = "";
      }

      //! Clear reply
      void
      clearReply(void)
      {
        m_reply_deadline = -1.0;
        // Increment request id to prevent old replies from being processed
        ++m_req_id;
      }

      //! Check if we have a VehicleState timeout
      //! @return true if timed out
      inline bool
      stateTimeout(void)
      {
        return (Clock::get() - m_last_vstate >= m_state_timeout);
      }

      //! Information string from reply
      //! @return information string
      inline const std::string
      info(void) const
      {
        return m_info;
      }

      //! Check if we have a VehicleCommand reply timeout
      //! @return true if timed out
      inline bool
      replyTimeout(void)
      {
        return (Clock::get() > m_reply_deadline);
      }

      //! Check if there was an error in the reply
      //! @return true if there was an error
      inline bool
      replyError(void) const
      {
        return m_reply_error;
      }

      //! Check if there is a reply pending
      //! @return true if a reply is pending
      inline bool
      pendingReply(void) const
      {
        return m_reply_deadline >= 0;
      }

    private:
      //! Pointer to task
      DUNE::Tasks::Task* m_task;
      //! Vehicle request ticket
      uint16_t m_req_id;
      //! Deadline for vehicle reply
      double m_reply_deadline;
      //! Reply timeout
      double m_reply_timeout;
      //! True if there was an error in the reply
      bool m_reply_error;
      //! Info string
      std::string m_info;
      //! Time of last received Vehicle State
      double m_last_vstate;
      //! Vehicle state timeout
      double m_state_timeout;
    };
  }
}

#endif
