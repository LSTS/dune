//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: AbstractConsumer.hpp 12667 2013-01-22 02:44:42Z rasm             $:*
//***************************************************************************

#ifndef DUNE_TASKS_ABSTRACT_CONSUMER_HPP_INCLUDED_
#define DUNE_TASKS_ABSTRACT_CONSUMER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/IMC/Message.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM AbstractConsumer;

    class AbstractConsumer
    {
    public:
      AbstractConsumer(void)
      { }

      virtual void
      consume(const IMC::Message*) = 0;

      virtual
      ~AbstractConsumer(void)
      { }
    };
  }
}

#endif
