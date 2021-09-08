//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Keila Lima                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  //! Supervisor in charge of changing log.
  //!
  //! This supervisors verifies allows triggers the change of log file according to the specified parameter.
  //! @author Keila
  namespace LogChanger
  {
    using DUNE_NAMESPACES;

      struct Arguments
      {
          double period;
      };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;

      //! Logging timer.
      Counter<double> m_log_timer;

      //! Stopping current log
      bool m_stopping;

      //! Stopping current log
      bool m_starting;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_stopping(false),
        m_starting(false)
      {
        param("Change Interval", m_args.period)
        .defaultValue("720") //! 12 hours
        .units(Units::Minute)
        .description("Log Change Interval");

        bind<IMC::LoggingControl>(this);

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.period))
          m_log_timer.setTop(m_args.period*60.0); //! Convert to seconds
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
      }

        void
        onResourceInitialization(void)
        {
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::LoggingControl *msg)
      {
        switch(msg->op){
          case IMC::LoggingControl::COP_STOPPED:
            debug(DTR("Stopped log: %s"),msg->name.c_str());
            if(m_stopping) {
              m_log_timer.reset();
              requestStart();
            }
            m_stopping = m_stopping ? false: m_stopping;
            break;
          case IMC::LoggingControl::COP_REQUEST_STOP: //! doesn't loopback this task requests
            debug(DTR("Detected request to stop log."),msg->name.c_str());
            break;
          case IMC::LoggingControl::COP_STARTED: //! doesn't loopback this task requests
            debug(DTR("Started Log: %s"),msg->name.c_str());
            if(m_starting)
              m_starting = false;
            else
            {
              m_log_timer.reset();
              war(DTR("Detected request to start log, resetting timer."),msg->name.c_str());
            }
            break;
          case IMC::LoggingControl::COP_REQUEST_START: //! doesn't loopback this task requests
            debug(DTR("Detected request to start log."),msg->name.c_str());
            break;
        }
      }

      void
      requestLogChange()
      {
        IMC::LoggingControl msg;
        msg.op = IMC::LoggingControl::COP_REQUEST_STOP;
        m_stopping = true;
        dispatch(msg);
      }

      void
      requestStart()
      {
        IMC::LoggingControl msg;
        msg.op = IMC::LoggingControl::COP_REQUEST_START;
        msg.name = "";
        m_starting = true;
        dispatch(msg);
      };

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          if (m_log_timer.overflow()){
            requestLogChange();
          }
        }
      }
    };
  }
}

DUNE_TASK
