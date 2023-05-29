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
// Author: Luis Venancio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// local headers
#include "MosquittoClient.hpp"


namespace Transports
{
  //! Insert short task description here.
  //! This task requires libmosquitto-dev.
  //! Install using sudo apt install libmosquitto-dev
  //!
  //! Insert explanation on task behaviour here.
  //! @author Luis Venancio
  namespace MQTT
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      // List of messages to publish.
      std::vector<std::string> messages;
      //! List of topics to subscribe
      std::vector<std::string> topics;
    };

    //! Message buffer size.
    static const int c_bfr_size = 65535;

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments
      Arguments m_args;
      //! Mosquitto client arguments
      MosquittoClient::Arguments m_client_args;
      //! Client
      MosquittoClient* m_client;
      //! Error message
      std::string m_err_msg;
      //! Topic buffer
      char m_topic_bfr[c_max_topic];
      //! Payload buffer
      uint8_t m_payload_bfr[c_max_payload];
      //! Payload length buffer
      uint32_t m_payloadlen_bfr;
      //! Serialization buffer.
      uint8_t m_msg_bfr[c_bfr_size];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_client(NULL)
      {
        param("Client ID", m_client_args.client_id)
        .defaultValue(getSystemName())
        .description("MQTT client ID.");

        param("Broker Address", m_client_args.address)
        .defaultValue("")
        .description("MQTT broker address.");

        param("Broker Port", m_client_args.port)
        .defaultValue("1883")
        .description("MQTT broker port.");

        param("Keepalive Period", m_client_args.keepalive)
        .defaultValue("60")
        .units(Units::Second)
        .description("");

        param("Retain", m_client_args.retain)
        .defaultValue("false")
        .description("Retain messages.");

        param("Subscribe Topics", m_args.topics)
        .defaultValue("")
        .description("List of topics the task should subscribe to."
                     "Use \'*\' instead of \'#\'.");

        param("Authetication -- User", m_client_args.usr)
        .defaultValue("admin")
        .description("User for broker authetication.");

        param("Authetication -- Password", m_client_args.pw)
        .defaultValue("")
        .description("Password for broker authetication."
                     "If left blank only user is sent.");

        param("Transports", m_args.messages)
        .defaultValue("")
        .description("List of messages to transport");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // Workaround for ini comment char
        for (unsigned i = 0; i < m_args.topics.size(); i++)
          m_args.topics[i] = String::replace(m_args.topics[i], '*', "#");
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
        // Register normal messages.
        bind(this, m_args.messages);

        // Start client
        try
        {
          m_client = new MosquittoClient(this, &m_client_args);

          if (m_client != NULL)
            m_client->start();
        }
        catch(const std::exception& e)
        {
          throw RestartNeeded(String::str("Unable to start client: %s", e.what()).c_str(), 10);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if (m_client)
          m_client->subscribe(m_args.topics);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_client != NULL)
        {
          m_client->stopAndJoin();
          delete m_client;
          m_client = NULL;
        }
      }

      void
      consume(const IMC::Message* msg)
      {
        uint16_t rv;
        try
        {
          rv = IMC::Packet::serialize(msg, m_msg_bfr, c_bfr_size);
          m_client->publish(String::str("tests/IMC/%s", msg->getName()), m_msg_bfr, rv);
        }
        catch (const std::exception& e)
        {
          war(DTR("Failed to publish message %s: %s"), msg->getName(), e.what());
          return;
        }
      }

      void
      onMessage(char *topic, uint8_t *payload, uint32_t payload_length)
      {
        IMC::Message* msg = IMC::Packet::deserialize(payload, payload_length);
        // dispatch(msg, DF_KEEP_TIME | DF_KEEP_SRC_EID);

        if (getDebugLevel() >= DEBUG_LEVEL_SPEW)
        {
          std::stringstream ss;
          msg->toText(ss);
          spew("recv msg (%s):\n%s", topic, ss.str().c_str());
        }
      }

      void
      annouce(void)
      {
        std::stringstream os;
        os << "imc+mqtt://" << "something something we are client" << "/";

        IMC::AnnounceService announce;
        announce.service = os.str();
        announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

        dispatch(announce);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          if (!m_client)
            continue;

          if (m_client->hasError(m_err_msg))
            throw RestartNeeded(m_err_msg.c_str(), 10);

          if (m_client->poll(m_topic_bfr, m_payload_bfr, &m_payloadlen_bfr))
          {
            onMessage(m_topic_bfr, m_payload_bfr, m_payloadlen_bfr);
          }
        }
      }
    };
  }
}

DUNE_TASK
