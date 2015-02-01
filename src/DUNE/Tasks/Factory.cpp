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
