//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <set>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Tasks/Factory.hpp>
#include <DUNE/Tasks/ModuleLoader.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Tasks
  {
    namespace
    {
      std::string
      getTaskName(const std::string& section)
      {
        std::vector<std::string> tokens;
        Utils::String::split(section, "/", tokens);
        return tokens[0];
      }

      FileSystem::Path
      getModulePath(Context& ctx, const std::string& task_name)
      {
        return ctx.dir_lib / FileSystem::Path(task_name + ".ddt");
      }
    }

    void
    ModuleLoader::load(Context& ctx)
    {
      std::set<std::string> loaded;
      std::vector<std::string> sections = ctx.config.sections();

      for (unsigned i = 0; i < sections.size(); ++i)
      {
        std::string task_name = getTaskName(sections[i]);

        if (loaded.find(task_name) != loaded.end())
          continue;

        if (load(ctx, task_name))
          loaded.insert(task_name);
      }
    }

    bool
    ModuleLoader::load(Context& ctx, const std::string& task_name)
    {
      if (Factory::exists(task_name))
        return true;

      FileSystem::Path module = getModulePath(ctx, task_name);

      if (!module.isFile())
        return false;

      DUNE_MSG("ModuleLoader", Utils::String::str("loading module '%s'", module.c_str()));
      Factory::registerDynamicTask(module.c_str());
      return Factory::exists(task_name);
    }

    void
    ModuleLoader::loadAll(Context& ctx)
    {
      Factory::registerDynamicTasks(ctx.dir_lib.c_str());
    }
  }
}
