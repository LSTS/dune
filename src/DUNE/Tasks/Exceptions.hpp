//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Exceptions.hpp 12667 2013-01-22 02:44:42Z rasm                   $:*
//***************************************************************************

#ifndef DUNE_TASKS_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_TASKS_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM RestartNeeded;

    //! The emitting task has encountered an error that can possibly
    //! be recovered by a restart.
    class RestartNeeded
    {
    public:
      //! Constructor.
      //! @param[in] error error message.
      //! @param[in] delay amount of seconds to wait before restarting
      //! the task.
      RestartNeeded(const std::string& error, unsigned delay = 1):
        m_error(error),
        m_delay(delay)
      { }

      //! Retrieve the amount of seconds that must elapse before
      //! restarting the task.
      unsigned
      getDelay(void) const
      {
        return m_delay;
      }

      //! Retrieve error message.
      //! @return error message.
      const char*
      getError(void)
      {
        return m_error.c_str();
      }

    private:
      //! Error message.
      std::string m_error;
      //! Delay.
      unsigned m_delay;
    };

    //! Thrown when the name of a task is not valid.
    class InvalidTaskName: public std::invalid_argument
    {
    public:
      //! Constructor.
      //! @param[in] name invalid task name.
      InvalidTaskName(const std::string& name):
        std::invalid_argument(Utils::String::str(DTR("invalid task name '%s'"), name.c_str()))
      { }
    };
  }
}

#endif
