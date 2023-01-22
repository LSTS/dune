//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "DataStore.hpp"
#include "Router.hpp"

namespace Transports
{
  namespace DataStore
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! List of messages to store.
      std::vector<std::string> messages;

      //! If set, messages will be forwarded to gateway using wifi
      std::string wifi_gateway;

      //! If set, messages will be forwarded to gateway using acoustic modem
      std::string acoustic_gateway;

      //! If set, messages will be forwarded to gateway using any comm available
      std::string any_gateway;

      //! Period, in seconds, between wifi forwarding
      int wifi_forward_period;

      //! Period, in seconds, between acoustic forwarding
      int acoustic_forward_period;

      //! Maximum size for acoustic messages
      int acoustic_mtu;

      //! Period, in seconds, between forwarding
      int any_forward_period;

      //! Period, in seconds, between iridium uploads (0 == deactivated)
      int iridium_upload_period;

      //! Variable priorities will result in older
      //! data being sent through low bandwidth connections
      bool variable_priorities;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! object used to store samples locally
      DataStore m_store;

      //! task arguments
      Arguments m_args;

      //! last position from local platform
      IMC::EstimatedState m_state;

      //! priority for each message type
      std::map<std::string, int> m_priorities;

      //! messages currently on the way to their destination
      std::map<std::pair<int, int>, IMC::HistoricData*> m_sending;

      //! Timer used for forwarding data over acoustic modem
      Time::Counter<double> m_acoustic_forward_timer;

      //! Timer used for forwarding data over wifi
      Time::Counter<double> m_wifi_forward_timer;

      //! Timer used for forwarding data over any mean
      Time::Counter<double> m_any_forward_timer;

      //! Timer used for uploading data over iridium
      Time::Counter<double> m_iridium_upload_timer;

      //! Number of stored local samples
      int sample_count;

      //! Router is used to forward data to other systems
      Router m_router;

      typedef std::map<uint16_t, IMC::TransmissionRequest*> MessagesQueued;
      MessagesQueued m_transmission_requests;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_store(this),
        sample_count(0),
        m_router(this)
      {
        param("Messages", m_args.messages)
        .description("List of <Message>:<Frequency>");

        param("WiFi Gateway", m_args.wifi_gateway)
        .description("If set, messages will be forwarded to gateway using wifi")
        .defaultValue("");

        param("Acoustic Gateway", m_args.acoustic_gateway)
        .description("If set, messages will be forwarded to gateway using acoustic modem")
        .defaultValue("");

        param("Any Mean Gateway", m_args.any_gateway)
        .description("If set, messages will be forwarded to gateway using any comm available")
        .defaultValue("");

        param("WiFi Forward Period", m_args.wifi_forward_period)
        .description("WiFi forwarding period, in seconds")
        .defaultValue("30");

        param("Acoustic Forward Period", m_args.acoustic_forward_period)
        .description("Acoustic forwarding period, in seconds")
        .defaultValue("300");

        param("Acoustic MTU", m_args.acoustic_mtu)
        .description("Maximum Size To Transmit Over Acoustic")
        .defaultValue("250");

        param("Any Mean Forward Period", m_args.any_forward_period)
        .description("Any mean upload period, in seconds.")
        .defaultValue("30");

        param("Iridium Upload Period", m_args.iridium_upload_period)
        .description("Iridium upload period, in seconds. 0 Deactivates uploading via Iridium.")
        .defaultValue("0");

        param("Variable priorities", m_args.variable_priorities)
        .description("Apply variable priorities to local samples")
        .defaultValue("true");

        m_wifi_forward_timer.setTop(m_args.wifi_forward_period);
        m_acoustic_forward_timer.setTop(m_args.acoustic_forward_period);
        m_any_forward_timer.setTop(m_args.any_forward_period);
        m_iridium_upload_timer.setTop(m_args.iridium_upload_period);
      }

      void
      onUpdateParameters(void)
      {
        m_priorities.clear();
        std::vector<std::string> consumed;
        int priority = 0;
        std::vector<std::string> parts;

        // initialize list of messages to be consumed
        for (unsigned int i = 0; i < m_args.messages.size(); ++i)
        {
          parts.clear();
          Utils::String::split(m_args.messages[i], ":", parts);
          if (parts.size() == 2)
          {
            if (std::sscanf(parts[1].c_str(), "%d", &priority) && priority > 0)
            {
              m_priorities[parts[0]] = priority;
              consumed.push_back(parts[0]);
              debug("Will store message %s with priority %d.", parts[0].c_str(), priority);
              continue;
            }
          }
          throw std::runtime_error(Utils::String::str(DTR("invalid format: %s"), m_args.messages[i].c_str()));
        }

        // consume these messages on top of transported messages
        consumed.push_back("HistoricData");
        consumed.push_back("EstimatedState");
        consumed.push_back("HistoricDataQuery");
        consumed.push_back("Announce");
        consumed.push_back("UamRxFrame");
        consumed.push_back("TransmissionStatus");

        std::stringstream ss;
        for (std::vector<std::string>::const_iterator it = consumed.begin(); it != consumed.end(); it++)
          ss << *it << " ";

        bind(this, consumed);

        m_wifi_forward_timer.setTop(m_args.wifi_forward_period);
        m_acoustic_forward_timer.setTop(m_args.acoustic_forward_period);
        m_any_forward_timer.setTop(m_args.any_forward_period);
        m_iridium_upload_timer.setTop(m_args.iridium_upload_period);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::Message* msg)
      {
        if (msg->getId() == EstimatedState::getIdStatic())
        {
          m_router.process(static_cast<const IMC::EstimatedState*>(msg->clone()));
          process(static_cast<const IMC::EstimatedState*>(msg->clone()));
        }
        else if (msg->getId() == HistoricData::getIdStatic())
          process(static_cast<const IMC::HistoricData*>(msg->clone()));
        else if (msg->getId() == HistoricDataQuery::getIdStatic())
          process(static_cast<const IMC::HistoricDataQuery*>(msg->clone()));
        else if (msg->getId() == UamRxFrame::getIdStatic())
          m_router.process(static_cast<const IMC::UamRxFrame*>(msg->clone()));
        else if (msg->getId() == Announce::getIdStatic())
          m_router.process(static_cast<const IMC::Announce*>(msg->clone()));
        else if (msg->getId() == TransmissionStatus::getIdStatic())
          process(static_cast<const IMC::TransmissionStatus*>(msg->clone()));

        // only store messages with some defined priority (transported)
        if (m_priorities.find(msg->getName()) == m_priorities.end())
          return;

        war("Storing message of type %s.", msg->getName());

        // only start storing messages after there is a known system position
        if (m_state.lat == 0)
          return;

        if (m_ctx.resolver.isLocal(msg->getSource()))
        {
          DataSample* sample = new DataSample();

          int num = sample_count++;
          int add_priority = 0;
          if (m_args.variable_priorities)
          {
            while (num % 2)
            {
              add_priority++;
              num /= 2;
            }
          }

          // use last EstimatedState for this sample's position
          double lat = m_state.lat, lon = m_state.lon;
          WGS84::displace(m_state.x, m_state.y, &lat, &lon);
          sample->latDegs = Angles::degrees(lat);
          sample->lonDegs = Angles::degrees(lon);
          sample->zMeters = m_state.depth != -1? -m_state.depth : m_state.alt;
          sample->source = msg->getSource();
          sample->timestamp = msg->getTimeStamp();
          sample->sample = msg->clone();
          // retrieve priority set in the configuration
          sample->priority = m_priorities[msg->getName()] + add_priority;
          inf("Added message of type %s with size %d and priority %d to data store.",
              msg->getName(), sample->serializationSize(), sample->priority);
          m_store.addSample(sample);
        }
      }

      //! Updates position of this platform
      void
      process(const IMC::EstimatedState* msg)
      {
        if (m_ctx.resolver.isLocal(msg->getSource()))
          m_state = *msg;
      }

      //! Updates position of this platform
      void
      process(const IMC::TransmissionStatus* msg)
      {
        if (msg->getDestination() != getSystemId()
            || msg->getDestinationEntity() != getEntityId())
          return;

        if (m_transmission_requests.find(msg->req_id)
            != m_transmission_requests.end())
        {
          IMC::TransmissionRequest* req = m_transmission_requests[msg->req_id];
          switch (msg->status)
          {
            case IMC::TransmissionStatus::TSTAT_TEMPORARY_FAILURE:
              war("not possible to forward data through %s by any mean at this time.",
                  m_args.any_gateway.c_str());
              m_store.addData((IMC::HistoricData*)req->msg_data.get());
              m_transmission_requests.erase(msg->req_id);
              Memory::clear(req);
              break;

            case IMC::TransmissionStatus::TSTAT_SENT:
              inf("Routed samples to %s using any mean available",
                  m_args.any_gateway.c_str());
              m_transmission_requests.erase(msg->req_id);
              Memory::clear(req);
              break;

            case IMC::TransmissionStatus::TSTAT_INPUT_FAILURE:
              war("not possible to forward data through %s by any mean at this time.",
                  m_args.any_gateway.c_str());
              m_store.addData((IMC::HistoricData*)req->msg_data.get());
              m_transmission_requests.erase(msg->req_id);
              Memory::clear(req);
              break;

            case IMC::TransmissionStatus::TSTAT_PERMANENT_FAILURE:
              war("not possible to forward data through %s by any mean at this time.",
                  m_args.any_gateway.c_str());
              m_store.addData((IMC::HistoricData*)req->msg_data.get());
              m_transmission_requests.erase(msg->req_id);
              Memory::clear(req);
              break;

            default:
              return;
          }

        }

      }

      //! Process incoming HistoricData (multi-hop forwarding)
      void
      process(const IMC::HistoricData* msg)
      {
        // avoid loop back
        if (m_ctx.resolver.isLocal(msg->getSource()) && getEntityId() == msg->getSourceEntity())
          return;

        if (!m_ctx.resolver.isLocal(msg->getSource()))
          debug("Received %u items from %s.", (uint32_t) msg->data.size(), resolveSystemId(msg->getSource()));
        else
          debug("Adding %u items from %s (%d) to data store.", (uint32_t) msg->data.size(),
                m_ctx.resolver.resolve(msg->getSource()), msg->getSource());

        // add all data to local store
        m_store.addData(msg);
      }

      //! Handle incoming HistoricDataQuery messages
      void
      process(const IMC::HistoricDataQuery* msg)
      {
        std::pair<int, int> source = std::pair<int, int>(msg->getSource(), msg->getSourceEntity());

        if (msg->type == IMC::HistoricDataQuery::HRTYPE_QUERY)
        {
          if (m_sending.find(source) != m_sending.end())
          {
            debug("Adding back data previously queried from same peer as it wasn't cleared with HRTYPE_CLEAR.");
            m_store.addData(m_sending[source]);
            delete m_sending[source];
            m_sending.erase(source);
          }

          IMC::HistoricDataQuery reply;
          IMC::HistoricData* data = m_store.pollSamples(msg->max_size);
          if (data != NULL)
          {
            m_sending[source] = static_cast<IMC::HistoricData*>(data->clone());
            reply.data.set(data);
            Memory::clear(data);
          }

          if (m_ctx.resolver.isLocal(msg->getSource()))
            debug("Sending historic data to entity %s.", m_ctx.entities.resolve(msg->getSourceEntity()).c_str());
          else
            debug("Sending historic data to system %s.", m_ctx.resolver.resolve(msg->getSource()));

          reply.max_size = msg->max_size;
          reply.req_id = msg->req_id;
          reply.type = IMC::HistoricDataQuery::HRTYPE_REPLY;
          reply.setDestination(msg->getSource());
          reply.setDestinationEntity(msg->getSourceEntity());
          dispatch(reply);
        }
        else if (msg->type == IMC::HistoricDataQuery::HRTYPE_CLEAR)
        {
          IMC::HistoricDataQuery reply;
          reply.req_id = msg->req_id;
          reply.type = IMC::HistoricDataQuery::HRTYPE_CLEAR;
          reply.setDestination(msg->getSource());
          reply.setDestinationEntity(msg->getSourceEntity());
          dispatch(reply);
          if (m_sending.find(source) != m_sending.end())
          {
            debug("Clearing previously queried data from store");
            m_sending.erase(source);
          }
          else
          {
            debug("No previously queried data to clear.");
          }
        }
        Memory::clear(msg);
      }

      void
      anyMeanRouting()
      {
        inf("forwarding to gateway over any mean");

        IMC::HistoricData* data = m_store.pollSamples(1000);

        uint16_t newId = m_router.createInternalId();

        TransmissionRequest tr;
        tr.setSource(getSystemId());
        tr.setSourceEntity(getEntityId());
        tr.setDestination(getSystemId());

        tr.comm_mean         = IMC::TransmissionRequest::CMEAN_ANY;
        tr.data_mode         = IMC::TransmissionRequest::DMODE_INLINEMSG;
        tr.destination       = m_args.any_gateway;
        tr.req_id            = newId;
        tr.msg_data.set(data);
        tr.deadline          = Clock::getSinceEpoch() + m_args.any_forward_period;

        dispatch(tr);
        m_transmission_requests[newId] = tr.clone();

        Memory::clear(data);
      }

      void
      acousticRouting()
      {
        IMC::HistoricData* data = m_store.pollSamples(m_args.acoustic_mtu);
        int size = 0;
        if (data != NULL)
          size = (int)data->data.size();
        else
          war("Nothing to forward via acoustic modem.");

        if (size > 0 && !m_router.routeOverAcoustic(m_args.acoustic_gateway, data))
        {
          war("not possible to forward data through %s acoustically at this time.",
              m_args.acoustic_gateway.c_str());
          m_store.addData(data);
        }
        else {
          inf("Routed %d samples to %s using Acoustic Modem", size, m_args.acoustic_gateway.c_str());
        }

        Memory::clear(data);
      }

      void
      wifiRouting()
      {

        debug("forwarding to gateway over wifi");

        IMC::HistoricData* data = m_store.pollSamples(32 * 1024);
        if (data == NULL)
          return;
        if (!m_router.routeOverWifi(m_args.wifi_gateway, data))
        {
          war("not possible to forward data over WiFi through %s at this time.", m_args.wifi_gateway.c_str());
          m_store.addData(data);
        }
        else
          inf("Routed %u samples to %s using UDP", (uint32_t) data->data.size(), m_args.wifi_gateway.c_str());

        Memory::clear(data);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          std::stringstream ss;

          if (m_args.any_forward_period > 0 && m_any_forward_timer.overflow())
          {
            m_any_forward_timer.reset();
            //m_router.forwardCommandsAnyMean(&m_store);

            if (!m_args.any_gateway.empty())
              anyMeanRouting();
          }
          else if (m_args.any_forward_period > 0)
            ss << "  Any mean: " << m_any_forward_timer.getRemaining();
          else
            ss << "  Any mean: N/A";


          if (m_args.acoustic_forward_period > 0 && m_acoustic_forward_timer.overflow())
          {
            m_acoustic_forward_timer.reset();
            m_router.forwardCommandsAcoustic(&m_store);

            if (!m_args.acoustic_gateway.empty())
              acousticRouting();
          }
          else if (m_args.acoustic_forward_period > 0)
            ss << "  Acoustic: " << m_acoustic_forward_timer.getRemaining();
          else
            ss << "  Acoustic: N/A";

          if (m_args.wifi_forward_period > 0 && m_wifi_forward_timer.overflow())
          {
            m_wifi_forward_timer.reset();
            m_router.forwardCommandsWifi(&m_store);

            if (!m_args.wifi_gateway.empty())
              wifiRouting();
          }
          else if (m_args.wifi_forward_period > 0)
            ss << "  Wi-Fi: " << m_wifi_forward_timer.getRemaining();
          else
            ss << " Wi-Fi: N/A";

          if (m_args.iridium_upload_period > 0 && m_iridium_upload_timer.overflow())
          {
            m_iridium_upload_timer.reset();
            m_router.iridiumUpload(&m_store);
          }
        }
      }
    };
  }
}

DUNE_TASK
