//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Creator.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_TASKS_CREATOR_HPP_INCLUDED_
#define DUNE_TASKS_CREATOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Casts.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/System/Error.hpp>
#include <DUNE/System/DynamicLoader.hpp>

namespace DUNE
{
  namespace Tasks
  {
    typedef DUNE::Tasks::Task* (*task_creator_t)(const std::string&, DUNE::Tasks::Context&);

    struct Creator
    {
      Creator(void):
        m_creator(0)
      { }

      Creator(const task_creator_t& c):
        m_creator(c)
      { }

      void
      fromDDT(const char* file)
      {
        try
        {
          m_loader.load(file);
          m_creator = castUnsafe<task_creator_t, void*>(m_loader.getSymbol("dune_task_create"));
        }
        catch (System::Error& e)
        {
          DUNE_ERR("Task Creator", e.what());
        }
      }

      void
      fromCreatorPointer(const task_creator_t& ptr)
      {
        m_creator = ptr;
      }

      task_creator_t
      getCreatorPointer(void)
      {
        return m_creator;
      }

      private:
        task_creator_t m_creator;
        DUNE::System::DynamicLoader m_loader;
    };
  }
}

#endif
