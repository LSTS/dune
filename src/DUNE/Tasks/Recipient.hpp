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

#ifndef DUNE_TASKS_RECIPIENT_HPP_INCLUDED_
#define DUNE_TASKS_RECIPIENT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <vector>

// DUNE headers.
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Tasks/Consumer.hpp>
#include <DUNE/Tasks/AbstractTask.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Forward declarations.
    struct Context;

    // Export DLL Symbol.
    class DUNE_DLL_SYM Recipient;

    class Recipient
    {
    public:
      //! Constructor.
      Recipient(AbstractTask* task, Context& ctx);

      //! Destructor.
      ~Recipient(void);

      void
      unbindAll(void);

      void
      put(const IMC::Message*);

      void
      bind(uint32_t id, AbstractConsumer* c);

      void
      waitForMessages(double timeout);

      void
      runCallBacks(void);

    private:
      //! Task.
      AbstractTask* m_task;
      //! Context.
      Context& m_ctx;
      //! Callbacks.
      std::map<uint32_t, std::vector<AbstractConsumer*> > m_cbacks;
      //! Message queue.
      Concurrency::TSQueue<IMC::Message*> m_mqueue;
    };
  }
}

#endif
