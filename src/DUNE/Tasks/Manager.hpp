//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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

    private:
      //! Task list.
      std::vector<std::string> m_list;
      //! Running tasks.
      std::map<std::string, Task*> m_tasks;
      //! Task context.
      Context& m_ctx;

      void
      createTask(const std::string& section);
    };
  }
}

#endif
