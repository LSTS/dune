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
// Author: Jose Pinto                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "DataStore.hpp"

namespace Transports
{
  namespace DataStore
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! List of messages to store.
      std::vector<std::string> messages;
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
      std::map<std::pair<int, int>, IMC::HistoricData> m_sending;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_store(this)
      {
        param("Messages", m_args.messages)
        .description("List of <Message>:<Frequency>");
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

        std::stringstream ss;
        for (std::vector<std::string>::const_iterator it = consumed.begin(); it != consumed.end(); it++)
          ss << *it << " ";

        bind(this, consumed);
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
          process(static_cast<const IMC::EstimatedState*>(msg));
        else if (msg->getId() == HistoricData::getIdStatic())
          process(static_cast<const IMC::HistoricData*>(msg));
        else if (msg->getId() == HistoricDataQuery::getIdStatic())
          process(static_cast<const IMC::HistoricDataQuery*>(msg));

        // only store messages with some defined priority (transported)
        if (m_priorities.find(msg->getName()) == m_priorities.end())
          return;

        // only start storing messages after there is a known system position
        if (m_state.lat == 0)
          return;

        if (m_ctx.resolver.isLocal(msg->getSource()))
        {
          DataSample* sample = new DataSample();

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
          sample->priority = m_priorities[msg->getName()];
          debug("Added message of type %s with size %d and priority %d to data store.",
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

      //! Process incoming HistoricData (multi-hop forwarding)
      void
      process(const IMC::HistoricData* msg)
      {
        debug("Adding %d messages from %s (%d) to data store.", (int)msg->data.size(),
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
            m_store.addData(&m_sending[source]);
          }

          IMC::HistoricDataQuery reply;
          IMC::HistoricData* data = m_store.pollSamples(msg->max_size);
          if (data != NULL)
          {
            m_sending[source] = *data;
            reply.data.set(data);
            delete data;
          }
          reply.max_size = msg->max_size;
          reply.req_id = msg->req_id;
          reply.type = IMC::HistoricDataQuery::HRTYPE_REPLY;
          reply.setDestination(msg->getSource());
          reply.setDestinationEntity(msg->getSourceEntity());
          dispatch(reply);

          debug("Sending historic data to %s.", m_ctx.resolver.resolve(msg->getSource()));
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
            war("No previously queried data to clear.");
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
