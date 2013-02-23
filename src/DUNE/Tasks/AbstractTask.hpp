//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_ABSTRACT_TASK_HPP_INCLUDED_
#define DUNE_TASKS_ABSTRACT_TASK_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>

// DUNE headers.
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/IMC/Message.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM AbstractTask;

    class AbstractTask: public Concurrency::Thread
    {
    public:
      AbstractTask(void)
      { }

      //! Destructor.
      virtual
      ~AbstractTask(void)
      { }

      //! Queue a message for later consumption.
      //! @param msg message object.
      virtual void
      receive(const IMC::Message* msg) = 0;

      //! Retrieve task name.
      //! @return task name.
      virtual const char*
      getName(void) const = 0;
    };
  }
}

#endif
