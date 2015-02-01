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

#ifndef DUNE_TASKS_FACTORY_HPP_INCLUDED_
#define DUNE_TASKS_FACTORY_HPP_INCLUDED_

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

#endif
