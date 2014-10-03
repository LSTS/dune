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

#ifndef DUNE_PLAN_ENGINE_MEMENTO_HANDLER_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_MEMENTO_HANDLER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <queue>

// DUNE headers
#include <DUNE/IMC.hpp>
#include <DUNE/Time.hpp>

namespace Plan
{
  namespace Engine
  {
    //! Memento handler capacity for PlanSpecifications
    static const unsigned c_memento_size = 4;

    //! Struct with PlanSpecification and plan reference
    struct RefSpec
    {
      //! Plan reference
      uint32_t ref;
      //! Plan Specification
      IMC::PlanSpecification spec;

      RefSpec(uint32_t r, const IMC::PlanSpecification& s):
        ref(r),
        spec(s)
      { }
    };

    //! Class to handle incoming maneuver mementos
    class MementoHandler
    {
    public:
      //! Constructor
      MementoHandler(void):
        m_size(c_memento_size)
      { }

      //! Destructor
      ~MementoHandler(void)
      { }

      //! Add a Plan Specification
      void
      add(uint32_t ref, const IMC::PlanSpecification& spec)
      {
        m_queue.push(RefSpec(ref, spec));

        if (m_queue.size() > m_size)
          m_queue.pop();
      }

      //! Process memento message
      //! @param[in] msg memento message
      //! @param[out] pmem PlanMemento message to be dispatched
      //! @return true if there is a PlanMemento message to dispatch
      bool
      processMemento(const IMC::Memento* msg, IMC::PlanMemento& pmem)
      {
        if (!m_queue.size())
          return false;

        if (m_queue.front().ref > msg->plan_ref)
          return false;

        while (m_queue.front().ref < msg->plan_ref && m_queue.size())
          m_queue.pop();

        if (!m_queue.size())
          return false;

        if (m_queue.front().ref != msg->plan_ref)
        {
          m_queue.pop();
          return false;
        }

        // if resume maneuver is the first and memento field is empty
        // return right away
        if ((msg->id == m_queue.front().spec.start_man_id) &&
            msg->memento.empty())
          return false;

        pmem.plan_id = m_queue.front().spec.plan_id;
        pmem.id = Time::Format::getTimeSafe(Clock::getSinceEpoch()) + "_" + pmem.plan_id;
        pmem.maneuver_id = msg->id;
        pmem.memento = msg->memento;

        m_queue.pop();

        return true;
      }

    private:
      //! Queue of refspecs
      std::queue<RefSpec> m_queue;
      //! Maximum size of queue
      unsigned m_size;
    };
  }
}

#endif
