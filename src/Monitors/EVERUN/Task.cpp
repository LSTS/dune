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

namespace Monitors
{
  namespace EVERUN
  {
    using DUNE_NAMESPACES;
    using namespace happyhttp;

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
      //! Header for connection HTTP
      Connection* m_conn;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
          DUNE::Tasks::Task(name, ctx)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Slave System Name", m_args.slave_system).description(
            "Name of the slave system");

        param("Power Channel", m_args.pwr_chn)
        .description("Power channel");

        param("Active System", m_args.initial_state)
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
        bind<IMC::PowerChannelControl>(this);

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
          rebootSystem();
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
      consume(const IMC::PowerChannelControl* msg)
      {
        if (msg->name == m_args.pwr_chn)
        {
          if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
            war("ON");
          else if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
            war("OFF");
        }
      }

      void
      rebootSystem(void)
      {
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
      }

      void
      sendComandHttp(bool init)
      {
        if (!init)
        {
          war("Sending: pruinit");
          //m_conn->request( "GET", "/post.php?dir=pedro&teste_de_envio", 0, 0, 0);
          m_conn->request( "GET", "/pruinit", 0, 0, 0);

          war("pruinit Done.");
          m_conn->close();
        }
        else
        {
          war("Sending: start");
          char data_to_send[128];
          //sprintf(data_to_send, "/post.php?dir=pedro&time=%d&rate=%d&filename=%s&input=%s", m_args.sampling_time, m_args.rate, m_args.file_name.c_str(), m_args.input_data.c_str());
          sprintf(data_to_send, "/start?time=%d&rate=%d&filename=%s&input=%s", m_args.sampling_time, m_args.rate, m_args.file_name.c_str(), m_args.input_data.c_str());
          m_conn->request( "GET", data_to_send, 0, 0, 0);
          while( m_conn->outstanding() && !stopping())
            m_conn->pump();

          war("Response body has %d bytes - %d.", m_conn->bodySize(), happyhttp::getStatusValue());
          //war("Data: %s", data_to_send);
          m_conn->close();
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        if (m_args.initial_state)
        {
          int m_cnt = 0;
          inf("Trying to connect to server: %s in port: %d",
              m_args.ip_host.c_str(), m_args.server_port);
          while (!isServerOn() && !stopping())
          {
            m_cnt++;
            setEntityState(IMC::EntityState::ESTA_ERROR,
                           Status::CODE_COM_ERROR);
            err("Error in connection to server: %s in port: %d",
                m_args.ip_host.c_str(), m_args.server_port);
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
            inf("Connect to server: %s in port: %d", m_args.ip_host.c_str(),
                m_args.server_port);
            sendComandHttp(0);
            Delay::wait(2);
            sendComandHttp(1);
          }
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
