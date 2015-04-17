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
    Manager::Manager(Context& ctx):
      m_ctx(ctx)
    {
      // Get all sections.
      std::vector<std::string> vec = m_ctx.config.sections();

      for (unsigned int i = 0; i < vec.size(); ++i)
      {
        // If this section is not a task continue.
        if (!Factory::exists(getTaskName(vec[i])))
          continue;

        // Check if the task is enabled acording to the currently
        // selected profiles.
        std::string profiles;
        m_ctx.config.get(vec[i], "Enabled", "Never", profiles);

        if (ctx.profiles.isSelected(profiles))
          createTask(vec[i]);
      }
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

    Manager::~Manager(void)
    {
      // Request all tasks to stop.
      for (unsigned int i = 0; i < m_list.size(); ++i)
      {
        if (m_tasks.find(m_list[i]) == m_tasks.end())
          continue;
        stop(m_list[i]);
      }

      // ... and join.
      for (unsigned int i = 0; i < m_list.size(); ++i)
      {
        if (m_tasks.find(m_list[i]) == m_tasks.end())
          continue;

        if (m_tasks[m_list[i]]->isCreated())
          join(m_list[i]);
        delete m_tasks[m_list[i]];
        m_tasks[m_list[i]] = NULL;
      }
    }

    void
    Manager::stop(const std::string& section)
    {
      if (m_tasks[section]->isRunning())
        m_tasks[section]->stop();
    }

    void
    Manager::join(const std::string& section)
    {
      try
      {
        m_tasks[section]->inf(DTR("stopping"));
        m_tasks[section]->join();
        m_tasks[section]->inf(DTR("stopped"));
      }
      catch (...)
      {
        m_tasks[section]->err(DTR("failed to join task %s"), section.c_str());
      }
    }

    void
    Manager::start(void)
    {
      std::map<std::string, Task*>::iterator itr;

      for (itr = m_tasks.begin(); itr != m_tasks.end(); ++itr)
        start(itr->first);
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
  }
}
