//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Factory.cpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
#include <cstring>

// DUNE headers.
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Tasks/Factory.hpp>
#include <DUNE/Utils/Utils.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/FileSystem/Directory.hpp>

namespace DUNE
{
  namespace Tasks
  {
    static Factory::Table c_table;

    DUNE::Tasks::Task*
    Factory::produce(const std::string& name, const std::string& label, Context& ctx)
    {
      if (!exists(name))
        return 0;

      task_creator_t creator = c_table[name].getCreatorPointer();

      if (creator == NULL)
        return 0;

      return creator(label, ctx);
    }

    bool
    Factory::exists(const std::string& name)
    {
      return c_table.find(name) != c_table.end();
    }

    void
    Factory::registerStaticTask(const std::string& name, task_creator_t creator)
    {
      c_table[name] = Creator(creator);
    }

    void
    Factory::registerDynamicTask(const char* file)
    {
      std::string label = FileSystem::Path(file).basename().str();
      label.resize(label.find_last_of('.'));
      c_table[label].fromDDT(file);
    }

    void
    Factory::registerDynamicTasks(const char* folder)
    {
      using FileSystem::Directory;

      try
      {
        Directory dir(folder);
        const char* fname = 0;

        while ((fname = dir.readEntry(Directory::RD_FULL_NAME)))
        {
          int len = std::strlen(fname) - 4;
          if (len <= 0)
            continue;

          if (std::strcmp(fname + len, ".ddt") != 0)
            continue;

          registerDynamicTask(fname);
        }
      }
      catch (...)
      { }
    }

    int
    Factory::getRegisteredCount(void)
    {
      return c_table.size();
    }

    Factory::Table&
    Factory::getTable(void)
    {
      return c_table;
    }
  }
}
