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

    enum RequestState
    {
      // Send init
      SEND_INIT,
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
      //! File Name
      std::string file_name;
      //! Input Data
      std::string input_data;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //
      IMC::QueryPowerChannelState m_query_power_channel_state;
      //! Header for connection HTTP
      Connection* m_conn;
      //! Buffer to save time
      char m_buffer_time[c_max_buffer];
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
          DUNE::Tasks::Task(name, ctx)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Slave System Name", m_args.slave_system)
        .description("Name of the slave system");

        param("Power Channel", m_args.pwr_chn)
        .description("Power channel");

        param("Turn On System", m_args.initial_state)
        .description("Initial state of power in slave.");

        param("Ip Host", m_args.ip_host)
        .description("Ip Host.");

        param("Port Host", m_args.server_port)
        .description("Port Host.");

        param("Number of attempts to connect", m_args.counter_attempts)
        .description("Number of attempts to connect (1 ~ 2 mim).");

        param("Sampling Time", m_args.sampling_time)
        .description("Sampling Time.");

        param("Rate", m_args.rate)
        .description("Rate.");

        param("File Name", m_args.file_name)
        .description("File Name.");

        param("Input Data", m_args.input_data)
        .description("Input Data.");

        // Register listeners.
        bind<IMC::LoggingControl>(this);
        bind<IMC::PowerChannelState>(this);

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if (m_args.initial_state)
        {
          setEntityState(IMC::EntityState::ESTA_FAILURE, Status::CODE_ACTIVATING);
          initSystem();
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
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->op == IMC::LoggingControl::COP_STARTED)
        {
          currentDateTimeMili();
          sendComandHttp(SEND_STOP, msg->name);
          Delay::wait(1);
          sendComandHttp(SEND_START, msg->name);
        }
      }

      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->name == m_args.pwr_chn)
        {
          if (msg->state == IMC::PowerChannelState::PCS_ON)
            err("ON");
          else if (msg->state == IMC::PowerChannelState::PCS_OFF)
            err("OFF");
        }
      }

      void
      initSystem(void)
      {
        dispatch(m_query_power_channel_state);

        sendPowerChannelControl(m_args.pwr_chn, false);
        Delay::wait(1);
        sendPowerChannelControl(m_args.pwr_chn, true);
        Delay::wait(1);
      }

      void
      sendPowerChannelControl(const std::string& name, bool value)
      {
        IMC::PowerChannelControl pcc;
        pcc.name = name;

        if (value)
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        else
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;

        dispatch(pcc);
      }

      bool
      isServerOn()
      {
        return m_conn->connect();
        return true;
      }

      void
      sendComandHttp(RequestState mode, std::string file_name)
      {
        if (mode == SEND_INIT)
        {
          war("Sending: pruinit");
          m_conn->request( "GET", "/pruinit", 0, 0, 0);

          m_conn->close();
        }
        else if (mode == SEND_START)
        {
          war("Sending: start");
          char data_to_send[128];
          std::string log_name_dune = file_name.substr(file_name.find("/") + 1, file_name.size());
          sprintf(data_to_send, "/start?time=%d&rate=%d&filename=%s&input=%s&time=%s", m_args.sampling_time, m_args.rate, log_name_dune.c_str(), m_args.input_data.c_str(), m_buffer_time);
          m_conn->request( "GET", data_to_send, 0, 0, 0);
          while( m_conn->outstanding() && !stopping())
            m_conn->pump();

          war("Response body has %d bytes - %d.", m_conn->bodySize(), happyhttp::getStatusValue());
          inf("Data Send: %s", data_to_send);
          m_conn->close();
        }
        else if (mode == SEND_STOP)
        {
          war("Sending: stop");
          m_conn->request( "GET", "/stop", 0, 0, 0);

          m_conn->close();
        }
      }

      void
      currentDateTimeMili()
      {
        time_t now;
        struct tm *current;
        struct timeval detail_time;
        gettimeofday(&detail_time,NULL);
        now = time(0);
        current = localtime(&now);
        memset(&m_buffer_time, '\0', sizeof(m_buffer_time));
        std::sprintf(m_buffer_time, "%d:%d:%d.%ld", current->tm_hour - 1, current->tm_min, current->tm_sec, detail_time.tv_usec/1000);
      }

      void tryConnectToServer()
      {
        int m_cnt = 0;
        inf("Trying to connect to server: %s in port: %d", m_args.ip_host.c_str(), m_args.server_port);
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
          throw RestartNeeded(DTR("failed to connect to server"), 5, true);
        }

        if (isServerOn())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          inf("Connect to server: %s in port: %d", m_args.ip_host.c_str(), m_args.server_port);
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
      }
    };
  }
}

DUNE_TASK
