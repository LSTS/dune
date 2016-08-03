//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: PGonçalves                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Vendor headers
#include "../../../vendor/libraries/happyhttp/happyhttp.h"

// System headers
#include <sys/time.h>

namespace Monitors
{
  namespace EVERUN
  {
    using DUNE_NAMESPACES;
    using namespace happyhttp;

    static const unsigned int c_max_buffer = 32;
    static const unsigned int c_max_buffer_text_to_send = 256;

    enum RequestState
    {
      // Send start
      SEND_START,
      // Send stop
      SEND_STOP
    };

    //! %Task arguments.
    struct Arguments
    {
      //! Power channel.
      std::string pwr_chn;
      //! Slave system name.
      std::string slave_system;
      //! Initial state of slave
      bool initial_state;
      //! Ip Host
      std::string ip_host;
      //! Port for http
      int server_port;
      //! Timeout for connection
      int counter_attempts;
      //! Sampling Time
      int sampling_time;
      //! Rate
      int rate;
      //! Input Data
      std::string input_data;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Header for connection HTTP
      Connection* m_conn;
      //! Buffer to save time
      char m_buffer_time[c_max_buffer];
      //! Flag to reject first stop command
      bool m_is_reset_first_stop;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
          DUNE::Tasks::Task(name, ctx)
      {
        param("Slave System Name", m_args.slave_system)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Name of the slave system");

        param("Power Channel", m_args.pwr_chn)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Power channel");

        param("Turn On System", m_args.initial_state)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Initial state of power in slave.");

        param("Ip Host", m_args.ip_host)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Ip Host.");

        param("Port Host", m_args.server_port)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Port Host.");

        param("Number of attempts to connect", m_args.counter_attempts)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Number of attempts to connect (1 ~ 2 mim).");

        param("Sampling Time", m_args.sampling_time)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Sampling Time.");

        param("Rate", m_args.rate)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Rate.");

        param("Input Data", m_args.input_data)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("Input Data.");

        // Register listeners.
        bind<IMC::LoggingControl>(this);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if (m_args.initial_state)
        {
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);
          m_is_reset_first_stop = false;
          m_conn = new Connection(m_args.ip_host.c_str(), m_args.server_port);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_conn);
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.initial_state)
        {
          war("received command to enable everun service");
          setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);
          m_conn = new Connection(m_args.ip_host.c_str(), m_args.server_port);
          tryConnectToServer();
        }
        else if (!m_args.initial_state)
        {
          if (m_is_reset_first_stop)
          {
            war("received command to disable everun service");
            setEntityState(IMC::EntityState::ESTA_BOOT, "Everun board is OFF in config task");
            sendComandHttp(SEND_STOP, "");
            Delay::wait(2);
          }
          else
          {
            m_is_reset_first_stop = true;
          }
        }
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->op == IMC::LoggingControl::COP_STARTED)
        {
          if (m_args.initial_state)
          {
            std::sprintf(m_buffer_time, "%d", (int)time(NULL));
            sendComandHttp(SEND_STOP, msg->name);
            Delay::wait(1);
            sendComandHttp(SEND_START, msg->name);
          }
          else if (!m_args.initial_state)
          {
            war("Everun board is OFF in config task");
            setEntityState(IMC::EntityState::ESTA_BOOT, "Everun board is OFF in config task");
          }
        }
      }

      bool
      isServerOn()
      {
        return m_conn->connect();
      }

      void
      sendComandHttp(RequestState mode, std::string file_name)
      {
        if (mode == SEND_START)
        {
          war("Sending: start");
          char data_to_send[c_max_buffer_text_to_send];
          std::string log_name_dune = file_name.substr(file_name.find("/") + 1, file_name.size());
          sprintf(data_to_send, "/start?time=%d&rate=%d&filename=%s&input=%s&unix_time=%s", m_args.sampling_time, m_args.rate, log_name_dune.c_str(), m_args.input_data.c_str(), m_buffer_time);
          m_conn->request( "GET", data_to_send, 0, 0, 0);
          while( m_conn->outstanding() && !stopping())
            m_conn->pump();

          war("Data Send: %s", data_to_send);
          war("Response body has %d bytes - %d.", m_conn->bodySize(), happyhttp::getStatusValue());
          m_conn->close();
        }
        else if (mode == SEND_STOP)
        {
          war("Sending: stop");
          m_conn->request( "GET", "/stop", 0, 0, 0);
          m_conn->close();
        }
      }

      void tryConnectToServer()
      {
        int m_cnt = 0;
        war("Trying to connect to server: %s in port: %d", m_args.ip_host.c_str(), m_args.server_port);
        while (!isServerOn() && !stopping())
        {
          m_cnt++;
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          err("Error in connection to server: %s in port: %d", m_args.ip_host.c_str(), m_args.server_port);
          if (m_cnt >= m_args.counter_attempts)
          {
            break;
          }
        }
        if (m_cnt >= m_args.counter_attempts)
        {
          throw RestartNeeded(DTR("failed to connect to server"), 10, true);
        }

        if (isServerOn())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          war("Connect to server: %s in port: %d", m_args.ip_host.c_str(), m_args.server_port);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        if (m_args.initial_state)
        {
          tryConnectToServer();
        }

        while (!stopping())
        {
          waitForMessages(1.0);
        }

        if (m_args.initial_state)
        {
          sendComandHttp(SEND_STOP, "");
          Delay::wait(2);
        }
      }
    };
  }
}

DUNE_TASK
