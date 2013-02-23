//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: AbstractCreator.hpp 12667 2013-01-22 02:44:42Z rasm              $:*
//***************************************************************************

#ifndef DUNE_TASKS_ABSTRACT_CREATOR_HPP_INCLUDED_
#define DUNE_TASKS_ABSTRACT_CREATOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM AbstractCreator;

    class Task;
    struct Context;

    //! Abstract representation of a task creator.
    class AbstractCreator
    {
    public:
      virtual Task*
      create(std::string, Context&) = 0;

      virtual
      ~AbstractCreator(void)
      { }
    };
  }
}

#endif
