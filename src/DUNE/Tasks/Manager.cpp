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

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>
#include <vector>
#include <algorithm>
#include <cstddef>

// DUNE headers.
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Tasks/Factory.hpp>
#include <DUNE/Tasks/Exceptions.hpp>
#include <DUNE/Tasks/Manager.hpp>

namespace DUNE
{
  namespace Tasks
  {
    static const int c_high_task_cpu_usage = 10;

    struct TaskCpuUsage
    {
      //! Task name.
      std::string name;
      //! Percentage of CPU usage.
      int usage;

      bool
      operator<(const TaskCpuUsage& other) const
      {
        return usage < other.usage;
      }
    };

    Manager::Manager(Context& ctx):
      m_ctx(ctx)
    {
      // Get all sections.
      std::vector<std::string> vec = m_ctx.config.sections();

      for (unsigned int i = 0; i < vec.size(); ++i)
      {
        // If this section is not a task continue.
        if (!Factory::exists(getTaskName(vec[i])))
        {
          // We use '.' here to ignore configuration sections (such as General
          // or Addresses)
          if (getTaskName(vec[i]).find('.') != std::string::npos)
          {
            std::string invalid = "Invalid task name: " + getTaskName(vec[i]);
            DUNE_WRN("Manager", DTR(invalid.c_str()));
          }

          continue;
        }

        // Check if the task is enabled acording to the currently
        // selected profiles.
        std::string profiles;
        m_ctx.config.get(vec[i], "Enabled", "Never", profiles);

        if (ctx.profiles.isSelected(profiles))
          createTask(vec[i]);
      }

      // Sort task by shutdown priority.
      auto comparator = [this](const std::string& str1, const std::string& str2) {
        return m_tasks[str1]->getShutdownPriority() > m_tasks[str2]->getShutdownPriority();
      };

      std::sort(m_list.begin(), m_list.end(), comparator);
    }

    void
    Manager::createTask(const std::string& section)
    {
      std::string task_name = getTaskName(section);

      if (!Factory::exists(task_name))
        throw InvalidTaskName(task_name);

      Task* task = Factory::produce(task_name, section, m_ctx);
      if (task == NULL)
        throw InvalidTaskName(task_name);

      try
      {
        task->loadConfig();
        task->reserveEntities();
        m_tasks[section] = task;
        m_list.push_back(section);
      }
      catch (std::exception& e)
      {
        task->err("%s", e.what());
      }
      catch (...)
      {
        task->err("%s", DTR("unknown exception"));
      }
    }

    void
    Manager::waitShutdown(std::queue<Task*>& queue)
    {
      while (!queue.empty())
      {
        Task* task = queue.front();
        queue.pop();
        join(task);
      }
    }

    Manager::~Manager(void)
    {
      // Get maximum shutdown priority.
      unsigned int shutdown_prio = m_tasks[m_list[0]]->getShutdownPriority();
      std::queue<Task*> shutdown_queue;

      DUNE_DBG("Manager", DTR("stopping tasks with priority ") << shutdown_prio);

      for (const std::string& task_name : m_list)
      {
        if (m_tasks.find(task_name) == m_tasks.end())
          continue;

        Task* task = m_tasks[task_name];
        m_tasks.erase(task_name);

        if (task->getShutdownPriority() != shutdown_prio)
        {
          waitShutdown(shutdown_queue);
          DUNE_DBG("Manager", DTR("stopped tasks with priority") << shutdown_prio);

          shutdown_prio = task->getShutdownPriority();
          DUNE_DBG("Manager", DTR("stopping tasks with priority ") << shutdown_prio);
        }

        stop(task);
        shutdown_queue.push(task);
      }

      // Wait for the last group of tasks to finish.
      if (!shutdown_queue.empty()) 
      {
        waitShutdown(shutdown_queue);
        DUNE_DBG("Manager", DTR("stopped tasks with priority") << shutdown_prio);
      }
    }

    void
    Manager::stop(Task* task)
    {
      if (task->isRunning())
      {
        task->inf(DTR("stopping"));
        task->stop();
      }
    }

    void
    Manager::join(Task* task)
    {
      try
      {
        DUNE_DBG("Manager", DTR("join task ") << task->getName());
        task->join();
        task->inf(DTR("stopped"));
      }
      catch (...)
      {
        DUNE_WRN("Manager", DTR("failed to join task ") << task->getName());
      }
    }

    void
    Manager::start(void)
    {
      // Request all tasks to start.
      for (unsigned int i = 0; i < m_list.size(); ++i)
      {
        if (m_tasks.find(m_list[i]) == m_tasks.end())
          continue;
        start(m_list[i]);
      }
    }

    void
    Manager::start(const std::string& section)
    {
      std::map<std::string, Task*>::iterator itr = m_tasks.find(section);
      if (itr == m_tasks.end())
        throw InvalidTaskName(section);

      Task* task = itr->second;

      try
      {
        task->inf(DTR("starting"));
        task->start();
      }
      catch (std::exception& e)
      {
        task->err("%s", e.what());
      }
      catch (...)
      {
        task->err(DTR("unknown exception"));
      }
    }

    std::string
    Manager::getTaskName(const std::string& str)
    {
      // Split name and label.
      std::vector<std::string> tokens;
      DUNE::Utils::String::split(str, "/", tokens);
      return tokens[0];
    }

    void
    Manager::writeParamsXML(std::ostream& os) const
    {
      std::map<std::string, Task*>::const_iterator itr = m_tasks.begin();
      for ( ; itr != m_tasks.end(); ++itr)
        itr->second->writeParamsXML(os);
    }

    void
    Manager::measureCpuUsage(void)
    {
      std::map<std::string, Task*>::const_iterator itr = m_tasks.begin();

      for ( ; itr != m_tasks.end(); ++itr)
      {
        Task* task = itr->second;
        int value = task->getProcessorUsage();
        if (value < 0 || value > 100)
          continue;

        m_task_cpu_usage.setSourceEntity(task->getEntityId());
        m_task_cpu_usage.value = value;
        task->dispatch(m_task_cpu_usage);

        if (value >= c_high_task_cpu_usage)
        {
          TaskCpuUsage entry;
          entry.usage = value;
          entry.task = task;
          m_cpu_usage_hogs.push(entry);
        }
      }
    }

    void
    Manager::adjustPriorities(void)
    {
      while (!m_cpu_usage_hogs.empty())
      {
        TaskCpuUsage entry = m_cpu_usage_hogs.top();
        m_cpu_usage_hogs.pop();
        lowerHogPriority(entry.task, entry.usage);
      }
    }

    void
    Manager::lowerHogPriority(Task* task, int cpu_usage)
    {
      try
      {
        unsigned current_priority = task->getPriority();
        unsigned minimum_priority = Concurrency::Scheduler::minimumPriority();
        if (current_priority != minimum_priority)
        {
          task->setPriority(minimum_priority);
          task->war(DTR("using %d%% of CPU, lowering the priority"), cpu_usage);
        }
      }
      catch (...)
      {
        task->war(DTR("using %d%% of CPU, failed to lower the priority"), cpu_usage);
      }
    }
  }
}
