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
      //! @param[in] task pointer to task
      CCUInteraction(DUNE::Tasks::Task* task):
        m_task(task)
      {
        m_toreply.state = RS_NONE;
      }

      //! Function to run on PlanControl message
      //! @param[in] pc pointer to PlanControl message
      void
      onPlanControl(const IMC::PlanControl* pc)
      {
        if (pc->type != IMC::PlanControl::PC_REQUEST)
          return;

        pushRequest(pc);
      }

      //! Get most recent request
      //! @return pointer to PlanControl message
      const IMC::PlanControl*
      getRequest(void)
      {
        if (!m_requests.size())
          return NULL;

        m_requests.front().state = RS_PROC;

        return &m_requests.front().plan_control;
      }

      //! Void most recent request
      void
      voidRequest(void)
      {
        if (!m_requests.size())
        {
          m_task->debug("queue is empty");
          return;
        }

        m_requests.front().state = RS_NONE;
      }

      //! Hold request to answer later
      //! @return pointer to PlanControl message of held request
      const IMC::PlanControl*
      holdRequest(void)
      {
        bool failed = false;

        if (!m_requests.size())
          failed = true;
        else if (m_requests.front().state == RS_NONE)
          failed = true;

        if (failed)
        {
          m_task->war("no request was being processed");
          return NULL;
        }

        if (m_toreply.state == RS_PROC)
          m_task->err("request %u not replied", m_toreply.plan_control.request_id);

        m_toreply = m_requests.front();

        // pop from queue
        m_requests.pop();

        return &m_toreply.plan_control;
      }

      //! Current operation in progress
      //! @return plan control operation, or -1 if error
      int
      currentOperation(void) const
      {
        bool held_req = heldRequestActive();

        if (held_req && (m_toreply.state == RS_NONE))
          return -1;

        if (!held_req && !m_requests.size())
          return -1;

        if (held_req)
          return m_toreply.plan_control.op;
        else
          return m_requests.front().plan_control.op;
      }

      //! Answer to the plan control request
      //! @param[in] type type of reply (same field as plan control message)
      //! @param[in] desc description for the answer
      //! @param[in] print true if output should be printed out
      //! @param[in] arg pointer to argument IMC message
      void
      answer(uint8_t type, const std::string& desc, bool print,
             const IMC::Message* arg)
      {
        bool answer_held_req = heldRequestActive();

        if (answer_held_req && (m_toreply.state == RS_NONE))
        {
          m_task->err("no request to answer");
          return;
        }

        IMC::PlanControl* pc;
        if (answer_held_req)
          pc = &m_toreply.plan_control;
        else
          pc = &m_requests.front().plan_control;

        dispatchAnswer(type, desc, print, arg, pc);

        if (answer_held_req)
          m_toreply.state = RS_REPLIED;
        else
          m_requests.pop();
      }

      //! Pop all the requests in the queue
      void
      clear(void)
      {
        while (m_requests.size())
          m_requests.pop();

        m_toreply.state = RS_NONE;
      }

    private:
      enum RequestState
      {
        //! None or invalid state
        RS_NONE = 0,
        //! Being processed
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

      //! Check if the held request is the active one
      //! @return return true if active
      bool
      heldRequestActive(void) const
      {
        if (m_requests.size())
        {
          if (m_requests.front().state != RS_NONE)
            return false;
          else
            return true;
        }
        else
        {
          return true;
        }
      }

      //! Answer to the plan control request
      //! @param[in] type type of reply (same field as plan control message)
      //! @param[in] desc description for the answer
      //! @param[in] print true if output should be printed out
      //! @param[in] arg pointer to argument IMC message
      //! @param[in] pc pointer to PlanControl message
      void
      dispatchAnswer(uint8_t type, const std::string& desc, bool print,
                     const IMC::Message* arg, IMC::PlanControl* pc)
      {
        IMC::PlanControl reply;
        reply.type = type;
        reply.info = desc;
        reply.setDestination(pc->getSource());
        reply.setDestinationEntity(pc->getSourceEntity());
        reply.request_id = pc->request_id;
        reply.op = pc->op;
        reply.object_id = pc->object_id;

        if (arg != NULL)
          reply.arg.set(*arg);

        m_task->dispatch(reply);

        if (print)
        {
          std::string str = Utils::String::str(DTR("reply -- %s (%s) -- %s"),
                                               DTR(c_op_desc[reply.op]),
                                               reply.object_id.c_str(),
                                               desc.c_str());

          if (type == IMC::PlanControl::PC_FAILURE)
            m_task->err("%s", str.c_str());
          else
            m_task->inf("%s", str.c_str());
        }
      }

      //! Push a request into the queue
      //! @param[in] pc pointer to PlanControl message
      inline void
      pushRequest(const IMC::PlanControl* pc)
      {
        Request req;
        req.state = RS_NONE;
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
