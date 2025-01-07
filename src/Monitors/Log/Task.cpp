//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// ISO C++ headers
#include <regex>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! Log Monitor Task.
  //!
  //! Task that implements a log management
  //! to prevent logs from becoming too large
  //! or running for too long.
  //! @author João Bogas
  namespace Log
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! 
      std::string log_time;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments
      Arguments m_args;
      //! Log time.
      double m_log_time;
      //! Log Watchdog.
      Counter<double> m_wdog;
      //! Current log name.
      std::string m_log_name;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_log_time(0)
      {
        param("Log Timeout", m_args.log_time)
          .description("Log time in format %ud:%uh:%um");

        bind<IMC::LoggingControl>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.log_time))
          m_log_time = parseTime(m_args.log_time);

        // If log time is 0 deactivate task
        if (m_log_time == 0)
        {
          requestDeactivation();
          return;
        }

        if (!isActive())
          requestActivation();
      }

      //! Parse time string.
      //! @return Number of seconds.
      double
      parseTime(const std::string& str)
      {
        if (str.empty())
          return 0;

        std::regex pattern(R"((?:(\d+)[dD])?(?:(\d+)[hH])?(?:(\d+)[mM])?)");
        std::smatch match;

        if (!tryMatch(str, pattern, match))
          return 0;

        unsigned days = match[1].matched ? std::stoi(match[1].str()) : 0;
        unsigned hours = match[2].matched ? std::stoi(match[2].str()) : 0;
        unsigned minutes = match[3].matched ? std::stoi(match[3].str()) : 0;

        debug("Set time to %u Days, %u Hours and %u Minutes", days, hours, minutes);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        return ((((days * 24) + hours) * 60) + minutes) * 60;
      }

      //! Try to match a string with a regex pattern.
      //! @param[in] str string to match.
      //! @param[in] pattern regex pattern.
      //! @param[out] match regex match.
      //! @return true if successful, false if not.
      bool
      tryMatch(const std::string& str, const std::regex& pattern, std::smatch& match)
      {
        try
        {
          spew("matching string time %s", str.c_str());
          if (!std::regex_match(str, match, pattern))
            throw std::runtime_error("Invalid format " + str);

          return true;
        }
        catch (const std::exception& e)
        {
          err("Error parsing time: %s", e.what());
        }

        setEntityState(IMC::EntityState::ESTA_ERROR, "Failed to parse time parameter");
        return false;
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        switch (msg->op)
        {
          case IMC::LoggingControl::COP_STARTED:
            m_wdog.setTop(m_log_time);
            m_log_name = getLogName(msg->name);
            break;

          case IMC::LoggingControl::COP_STOPPED:
            m_wdog.setTop(0);
            m_log_name = getLogName(msg->name);
            break;

          default:
            break;
        }
      }

      //! Get log name.
      std::string
      getLogName(const std::string& name)
      {
        size_t pos = name.find('_');
        if (pos == std::string::npos)
          return {};  // return empty string

        return name.substr(pos + 1);
      }

      //! Send request to start a new log.
      void
      restartLog(void)
      {
        IMC::LoggingControl msg;
        msg.op = LoggingControl::COP_REQUEST_START;
        msg.name = m_log_name;
        dispatch(msg);

        // Disable while log has not started
        m_wdog.setTop(0);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1);
          if (!isActive())
            continue;

          if (m_wdog.overflow() && m_wdog.getTop() != 0)
            restartLog();
        }
      }
    };
  }
}

DUNE_TASK
