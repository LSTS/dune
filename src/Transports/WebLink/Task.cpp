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
      //! Max Size of Message
      double max_size_msg;
      //! Upload timeout, in seconds
      int upload_timeout;
      //! Deactivate underwater and activate when vehicle is at surface
      bool control_mobileinet;
      
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
      // Setup watchdog for timeout.
      Counter<double> m_wdog;
      //! Timer counter for waiting
      Time::Counter<float> m_timer, m_uwtimer;
      //! Flag that indicates if vehicle is underwater
      bool m_underwater;

      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
      DUNE::Tasks::Task(name, ctx),
      m_size(0),
      m_conn(0),
      m_params(0),
      m_id(0),
      m_state(S_QUERY),
      m_underwater(false)
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
        .description("Period to send message (ms)")
        .minimumValue("30")
        .defaultValue("60");

        param("Max Size of Message", m_args.max_size_msg)
        .description("Max Size of Message (byte)")
        .minimumValue("1024")
        .maximumValue("32768")
        .defaultValue("10240");

        param("Upload Timeout", m_args.upload_timeout)
        .description("Upload Timeout (s)")
        .minimumValue("1")
        .maximumValue("60")
        .defaultValue("10");

        param("Deactivate Connection Underwater", m_args.control_mobileinet)
        .description("Deactivate Mobile Inet when vehicle is underwater and activate when at surface.")
        .defaultValue("false");

        bind<IMC::HistoricDataQuery>(this);
        bind<IMC::VehicleMedium>(this);
        m_uwtimer.setTop(10);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.server_name) || paramChanged(m_args.server_port))
        {
          m_conn = new Connection(m_args.server_name.c_str(), m_args.server_port);
        }

        if (paramChanged(m_args.period))
        {
          if (m_args.period < 30)
            m_args.period = 30;
        }

        if (paramChanged(m_args.max_size_msg))
        {
          if (m_args.max_size_msg < 1024)
            m_args.max_size_msg = 1024;
          else if (m_args.max_size_msg > 32768)
            m_args.max_size_msg = 32768;
        }

        if (paramChanged(m_args.upload_timeout))
        {
          if (m_args.upload_timeout < 1)
            m_args.upload_timeout = 1;
          else if (m_args.upload_timeout > 60)
            m_args.upload_timeout = 60;

          m_wdog.setTop(m_args.upload_timeout);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_wdog.setTop(m_args.upload_timeout);
        m_timer.setTop(m_args.period);
        war("VALUE: %f", m_args.period);
        m_state = S_QUERY;
        m_id = 0;
        m_size = 8;
        m_conn = new Connection(m_args.server_name.c_str(), m_args.server_port);
        m_params.resize(m_size);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      setMobileInetState(bool active)
      {
        IMC::SetEntityParameters ep;
        ep.name = "Mobile Internet";
        IMC::EntityParameter ea;
        ea.name = "Active";
        ea.value = active ? "true" : "false";
        ep.params.push_back(ea);
        if (active)
          inf(DTR("Activating Internet connection"));
        else
          inf(DTR("Terminating Internet connection"));
        dispatch(ep);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        m_params.clear();
        Memory::clear(m_conn);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        if (!isActive())
          return;

        if (m_uwtimer.overflow())
        {
          bool was_uw = m_underwater;
          m_underwater = msg->medium == IMC::VehicleMedium::VM_UNDERWATER;
          // if underwater state changed, disable if underwater
          if (m_underwater != was_uw)
            setMobileInetState(!m_underwater);
          m_uwtimer.reset();
        }
      }
      //! Consume Message HistoricDataQuery
      void
      consume(const IMC::HistoricDataQuery* msg)
      {
        if (m_args.store == resolveEntity(msg->getSourceEntity()) && msg->req_id == m_id && msg->type == msg->HRTYPE_REPLY)
        {
          if (msg->data.isNull())
          {
            inf(DTR("No data to be sent."));
            m_state = S_QUERY;
            return;
          }
          IMC::HistoricData * dataToSend = (IMC::HistoricData*) msg->data.get()->clone();
          debug("Sending historic data with %d samples.", dataToSend->data.size());
          dispatch(dataToSend);
          m_size = dataToSend->getSerializationSize();
          m_params.resize(m_size);
          IMC::Packet::serialize(dataToSend, &m_params[0], m_size);

          if (!sendDataRequest())
          {
            err(DTR("Error connecting to %s"), m_args.server_name.c_str());
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            m_state = S_QUERY;
          }
          else
          {
            if (happyhttp::getStatusValue() != 200)
            {
              setEntityState(IMC::EntityState::ESTA_BOOT, Utils::String::str(DTR("%s"), happyhttp::getStatusMessage()));
              war("%s", happyhttp::getStatusMessage());
              m_state = S_QUERY;
            }
            else if (happyhttp::getStatusValue() == 200)
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              m_state = S_CLEAR;
            }
          }
          delete dataToSend;
        }

        if (m_args.store == resolveEntity(msg->getSourceEntity()) && msg->req_id == m_id && msg->type == msg->HRTYPE_CLEAR)
        {
          m_id++;
          m_state = S_QUERY;
          m_timer.reset();
          inf(DTR("Sending http request Done"));
        }
      }

      //! Send Data to HTTP Server
      bool
      sendDataRequest()
      {
        m_conn->putrequest("POST", m_args.server_path.c_str());
        m_conn->putheader("Content-Length", m_size);
        if (!m_conn->sendheaders())
        {
          return false;
        }
        else
        {
          bool state = m_conn->send(reinterpret_cast<const unsigned char*> (&m_params[0]), m_size);
          if (state)
          {
            m_wdog.reset();
            while (m_conn->outstanding() && !m_wdog.overflow())
              m_conn->pump();

            if(m_wdog.overflow())
            {
              err(DTR("Watch Dog Overflow"));
              setEntityState(IMC::EntityState::ESTA_BOOT, Utils::String::str(DTR("Watch Dog Overflow")));
            }
          }

          debug("Response body has %d bytes.", m_conn->bodySize());
          if (m_conn->bodySize())
          {
            try {
              Message * msg = Packet::deserialize((const uint8_t *) m_conn->body(), m_conn->bodySize());
              debug("Dispatching received %s...", msg->getName());
              dispatch(msg);
              Memory::clear(msg);
            }
            catch (std::exception& e) {
              err("Error deserializing response: %s", e.what());
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
            m_hist.max_size = m_args.max_size_msg;
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
        while(!stopping())
        {
          waitForMessages(1);
          switch ( m_state )
          {
            case S_QUERY:
              if (m_timer.overflow())
              {
                inf(DTR("Sending HTTP Request"));
                requestToImcMsg(GET_DATA, m_id);
                m_timer.reset();
                m_state = S_REPLY;
              }
              break;

            case S_CLEAR:
              requestToImcMsg(CLEAR_DATA, m_id);
              m_state = S_WAIT;
              break;

            case S_REPLY:
              break;

            case S_WAIT:
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
