//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Recipient.hpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

#ifndef DUNE_TASKS_RECIPIENT_HPP_INCLUDED_
#define DUNE_TASKS_RECIPIENT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>

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
      std::map<uint32_t, AbstractConsumer*> m_cbacks;
      //! Message queue.
      Concurrency::TSQueue<IMC::Message*> m_mqueue;
    };
  }
}

#endif
