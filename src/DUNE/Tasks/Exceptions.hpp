//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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

    //! Value is invalid for a given parameter.
    class InvalidValue: public std::invalid_argument
    {
    public:
      //! Constructor.
      //! @param[in] name parameter name.
      //! @param[in] value value.
      InvalidValue(const std::string& name, const std::string& value):
        std::invalid_argument(Utils::String::str(DTR("invalid value for parameter '%s': '%s'"),
                                                 name.c_str(),
                                                 value.c_str()))
      { }
    };
  }
}

#endif
