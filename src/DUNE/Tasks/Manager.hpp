//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_MANAGER_HPP_INCLUDED_
#define DUNE_TASKS_MANAGER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <map>
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Manager;

    // Forward declarations
    struct Context;
    class Task;

    class Manager
    {
    public:
      //! Constructor.
      //! @param ctx task context.
      Manager(Context& ctx);

      //! Destructor.
      ~Manager(void);

      //! Start all tasks.
      void
      start(void);

      //! Start a task with a given name.
      //! @param name task name.
      void
      start(const std::string& name);

      //! Stop a task with a given name.
      //! @param name task name.
      //! @return true if task was stopped, false otherwise.
      void
      stop(const std::string& name);

      void
      join(const std::string& name);

      //! Retrieve the task name from a configuration section.
      //! @param str configuration section string.
      //! @return task name.
      static std::string
      getTaskName(const std::string& str);

      void
      writeParamsXML(std::ostream& os) const;

      std::map<std::string, Task*>::iterator
      begin(void)
      {
        return m_tasks.begin();
      }

      std::map<std::string, Task*>::iterator
      end(void)
      {
        return m_tasks.end();
      }

      Task*
      getTaskByName(const std::string& name)
      {
        return m_tasks[name];
      }

      void
      measureCpuUsage(void);

      void
      adjustPriorities(void);

    private:
      struct TaskCpuUsage
      {
        //! Task object.
        Task* task;
        //! Percentage of CPU usage.
        int usage;

        bool
        operator<(const TaskCpuUsage& other) const
        {
          return usage < other.usage;
        }
      };

      //! Task list.
      std::vector<std::string> m_list;
      //! Running tasks.
      std::map<std::string, Task*> m_tasks;
      //! Task context.
      Context& m_ctx;
      //! Task CPU usage queue.
      std::priority_queue<TaskCpuUsage> m_cpu_usage_hogs;
      //! Buffer message to dispatch CPU usage of tasks.
      IMC::CpuUsage m_task_cpu_usage;

      void
      createTask(const std::string& section);

      void
      lowerHogPriority(Task* task, int cpu_usage);
    };
  }
}

#endif
