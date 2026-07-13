//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_MODULE_LOADER_HPP_INCLUDED_
#define DUNE_TASKS_MODULE_LOADER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Tasks
  {
    struct Context;

    struct DUNE_DLL_SYM ModuleLoader
    {
      static void
      load(Context& ctx);

      static bool
      load(Context& ctx, const std::string& task_name);

      static void
      loadAll(Context& ctx);
    };
  }
}

#endif
