//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Factory.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
#include <string>

// DUNE headers.
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Tasks/Creator.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    struct DUNE_DLL_SYM Factory;

    // Forward declarations.
    struct Context;

    struct Factory
    {
      //! Low-level task table.
      typedef std::map<std::string, Creator> Table;

      static DUNE::Tasks::Task*
      produce(const std::string& name, const std::string& label, Context& ctx);

      static bool
      exists(const std::string& name);

      static void
      registerStaticTask(const std::string& name, task_creator_t creator);

      static void
      registerDynamicTask(const char* file);

      static void
      registerDynamicTasks(const char* folder);

      static int
      getRegisteredCount(void);

      static Table&
      getTable(void);
    };
  }
}
