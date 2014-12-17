//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_EXCEPTIONS_HPP_INCLUDED_
#define DUNE_TASKS_EXCEPTIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <stdexcept>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbols.
    class DUNE_DLL_SYM RestartNeeded;
    class DUNE_DLL_SYM TryAgainLater;

    //! The emitting task has encountered an error that can possibly
    //! be recovered by a restart.
    class RestartNeeded
    {
    public:
      //! Constructor.
      //! @param[in] msg message.
      //! @param[in] delay amount of seconds to wait before restarting
      //! @param[in] error true if an error should be emitted, false otherwise.
      RestartNeeded(const std::string& msg, unsigned delay, bool error = true):
        m_msg(msg),
        m_delay(delay),
        m_error(error)
      { }

      //! Retrieve the amount of seconds that must elapse before
      //! restarting the task.
      unsigned
      getDelay(void) const
      {
        return m_delay;
      }

      bool
      isError(void) const
      {
        return m_error;
      }

      //! Retrieve error message.
      //! @return error message.
      const char*
      getError(void)
      {
        return m_msg.c_str();
      }

    private:
      //! Error message.
      std::string m_msg;
      //! Delay.
      unsigned m_delay;
      //! True if error.
      bool m_error;
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

    //! Value is invalid for a given parameter.
    class InvalidValue: public std::invalid_argument
    {
    public:
      //! Constructor.
      //! @param[in] name parameter name.
      //! @param[in] value value.
      //! @param[in] reason reason.
      InvalidValue(const std::string& name, const std::string& value, const std::string& reason):
        std::invalid_argument(Utils::String::str(DTR("invalid value '%s' for parameter '%s': '%s'"),
                                                 value.c_str(),
                                                 name.c_str(),
                                                 reason.c_str()))
      { }
    };
  }
}

#endif
