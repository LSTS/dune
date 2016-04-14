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
// Author:  JTeixeira                                                       *
//          PGonçalves                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Vendor headers
#include "../../../vendor/libraries/happyhttp/happyhttp.h"

namespace Transports
{
  namespace WebLink
  {
    using DUNE_NAMESPACES;
    using namespace happyhttp;

    static const unsigned int c_max_size_msg = 32768;

    enum RequestMode
    {
      // Get data
      GET_DATA,
      // Clear data
      CLEAR_DATA
    };

    enum RequestSate
    {
      // Query data
      S_QUERY,
      // Reply data
      S_REPLY,
      // Clear data
      S_CLEAR,
      // Wait jump to other state
      S_WAIT
    };

    //! Task arguments.
    struct Arguments
    {
      //! Data Store
      std::string store;
      //! Server Name
      std::string server_name;
      //! Server Path
      std::string server_path;
      //! Server Port
      int server_port;
      //! Period of message
      double period;
    };

    struct Task : public DUNE::Tasks::Task
    {
      //! Parameters.
      // Size of Message
      long int m_size;
      // Header for connection HTTP
      Connection* m_conn;
      // Buffer for data to send
      std::vector<uint8_t> m_params;
      // ID number for sync
      int m_id;
      // IMC message of datastore
      IMC::HistoricDataQuery m_hist;
      // State of message
      RequestSate m_state;

      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
      DUNE::Tasks::Task(name, ctx), m_size(0), m_conn(0), m_params(0), m_id(0), m_state(S_QUERY)
      {
        param("Target", m_args.store)
        .description("Target of data store")
        .defaultValue("Data Store");

        param("Server Name", m_args.server_name)
        .description("Name of Server")
        .defaultValue("ripples.lsts.pt");

        param("Server Path", m_args.server_path)
        .description("Path http for Server")
        .defaultValue("/datastore");

        param("Server Port", m_args.server_port)
        .description("Port http for Server")
        .defaultValue("80");

        param("Period Message", m_args.period)
        .description("Period to send message (in mili-seconds)")
        .minimumValue("2000")
        .defaultValue("4000");

        bind<IMC::HistoricDataQuery>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.server_name) || paramChanged(m_args.server_port))
          m_conn = new Connection(m_args.server_name.c_str(), m_args.server_port);
        if (paramChanged(m_args.period))
        {
          if (m_args.period < 2000)
            m_args.period = 2000;
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_state = S_QUERY;
        m_id = 0;
        m_size = 8;
        m_conn = new Connection(m_args.server_name.c_str(), m_args.server_port);
        m_params.resize(m_size + 1);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        m_params.clear();
        Memory::clear(m_conn);
      }

      //! Consume Message HistoricDataQuery
      void
      consume(const IMC::HistoricDataQuery* msg)
      {
        if (m_args.store == resolveEntity(msg->getSourceEntity()) && msg->req_id == m_id && msg->type == msg->HRTYPE_REPLY)
        {
          inf("TRY SEND... %s >> ID: %d", resolveEntity(msg->getSourceEntity()).c_str(), msg->req_id);

          //TODO ####################################################################
          const IMC::HistoricData * dataToSend =  msg->data.get();
          m_size = dataToSend->getSerializationSize();
          m_params.resize(m_size);
          //if(!std::realloc(m_params, m_size))
          //  war("ERROR in realloc");

          IMC::Packet::serialize(dataToSend, &m_params[0], m_size);

          //#########################################################################
          if (!sendDataRequest())
          {
            err(DTR("ERROR CONNECTING TO SERVER - %s"), m_args.server_name.c_str());
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
          }
          else
          {
            if (happyhttp::getStatusValue() != 200)
            {
              setEntityState(IMC::EntityState::ESTA_BOOT, Utils::String::str(DTR("%s"), happyhttp::getStatusMessage()));
              war("%s", happyhttp::getStatusMessage());
            }
            else if (happyhttp::getStatusValue() == 200)
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            }
          }
          m_state = S_CLEAR;
          inf("DONE SEND...");
        }

        if (m_args.store == resolveEntity(msg->getSourceEntity()) && msg->req_id == m_id && msg->type == msg->HRTYPE_CLEAR)
        {
          inf("Data clear for id: %d\n\r", m_id);
          m_id++;
          m_state = S_QUERY;
        }
      }

      //! Send Data to HTTP Server
      bool
      sendDataRequest()
      {
        m_conn->putrequest("POST", m_args.server_path.c_str());
        m_conn->putheader("Content-Length", m_size);
        m_conn->putheader("Content-type", "text/plain");
        m_conn->putheader("Accept", "text/plain");
        if (!m_conn->endheaders())
        {
          return false;
        }
        else
        {
          bool state = m_conn->send(reinterpret_cast<const unsigned char*> (&m_params[0]), m_size);
          if (state)
          {
            while (m_conn->outstanding())
            {
              inf("pumping...");
              m_conn->pump();
            }

          }
          m_conn->close();
          return true;
        }
        return false;
      }

      //! Send request to datastore
      void
      requestToImcMsg(RequestMode mode, int id)
      {
        if (mode == GET_DATA)
        {
            m_hist.req_id = id;
            m_hist.max_size = c_max_size_msg;
            m_hist.type = m_hist.HRTYPE_QUERY;
            dispatch(m_hist);
        }
        else if (mode == CLEAR_DATA)
        {
            m_hist.req_id = id;
            m_hist.type = m_hist.HRTYPE_CLEAR;
            dispatch(m_hist);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        // Wait for other task
        Delay::waitMsec(5000);
        while (!stopping())
        {
          switch ( m_state )
          {
            case S_QUERY:
              Delay::waitMsec(m_args.period);
              requestToImcMsg(GET_DATA, m_id);
              m_state = S_REPLY;
              break;

            case S_REPLY:
              consumeMessages();
              break;

            case S_CLEAR:
              inf("Try clear data id: %d", m_id);
              requestToImcMsg(CLEAR_DATA, m_id);
              m_state = S_WAIT;
              break;

            case S_WAIT:
              consumeMessages();
              break;

            default:
              m_state = S_QUERY;
              break;
          }
        }
      }
    };
  }
}
DUNE_TASK
