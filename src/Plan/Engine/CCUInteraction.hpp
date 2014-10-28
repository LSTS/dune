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

#ifndef DUNE_PLAN_ENGINE_CCU_INTERACTION_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_CCU_INTERACTION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <queue>

// Local headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Tasks.hpp>

namespace Plan
{
  namespace Engine
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM CCUInteraction;

    //! Plan Command operation descriptions
    const char* c_op_desc[] = {DTR_RT("Start Plan"), DTR_RT("Stop Plan"),
                               DTR_RT("Load Plan"), DTR_RT("Get Plan")};

    //! Class to handle interactions with Command and Control Unit
    class CCUInteraction
    {
    public:
      //! Constructor
      CCUInteraction(DUNE::Tasks::Task* task):
        m_task(task)
      { }

      ~CCUInteraction(void)
      { }

      void
      onPlanControl(const IMC::PlanControl* pc)
      {
        if (pc->type != IMC::PlanControl::PC_REQUEST)
          return;

        pushRequest(pc);
      }

      const IMC::PlanControl*
      getRequest(void) const
      {
        if (!m_requests.size())
          return NULL;

        return &m_requests.front()->plan_control;
      }

      void
      processedRequest(void)
      {
        if (!m_requests.size())
        {
          m_task->war("no request was being processed");
          return;
        }

        // Check if there is a request that had no reply
        if ((m_toreply.state != RS_NONE) && (m_toreply.state != RS_REPLIED))
          m_task->war("did not reply to a request: %u", m_toreply.plan_control.request_id);

        // save reply to be processed
        m_toreply = *m_requests.front();
        m_toreply.state = RS_PROC;
        // pop from queue
        m_requests.pop();
      }

      //! Answer to the plan control request
      //! @param[in] type type of reply (same field as plan control message)
      //! @param[in] desc description for the answer
      //! @param[in] print true if output should be printed out
      void
      answer(uint8_t type, const std::string& desc, bool print = true)
      {
        const IMC::PlanControl* pc = &m_toreply.plan_control;
        
        IMC::PlanControl reply;
        reply.type = type;
        reply.info = desc;
        reply.setDestination(pc->getSource());
        reply.setDestinationEntity(pc->getSourceEntity());
        reply.request_id = pc->request_id;
        reply.op = pc->op;
        reply.plan_id = pc->plan_id;

        m_task->dispatch(m_reply);

        if (print)
        {
          std::string str = Utils::String::str(DTR("reply -- %s (%s) -- %s"),
                                               DTR(c_op_desc[m_reply.op]),
                                               m_reply.plan_id.c_str(),
                                               desc.c_str());

          if (type == IMC::PlanControl::PC_FAILURE)
            m_task->err("%s", str.c_str());
          else
            m_task->inf("%s", str.c_str());
        }

        m_toreply.state = RS_REPLIED;
      }

    private:
      enum RequestState
      {
        //! None or invalid state
        RS_NONE = 0,
        //! Unprocessed
        RS_UNPROC,
        //! Processed but not replied
        RS_PROC,
        //! Replied
        RS_REPLIED
      };

      struct Request
      {
        //! Request state
        RequestState state;
        //! PlanControl request
        IMC::PlanControl plan_control;
      };

      inline void
      pushRequest(const IMC::PlanControl* pc)
      {
        Request req;
        req.state = RS_UNPROC;
        req.plan_control = *pc;
        m_requests.push(req);
        m_task->debug("saved request %u", pc->request_id);
      }

      //! Pointer to task
      DUNE::Tasks::Task* m_task;
      //! Queue of PlanControl messages
      std::queue<Request> m_requests;
      //! Request to be replied
      Request m_toreply;
    };
  }
}

#endif
