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
#include "MosquittoClient.hpp"
// #ifdef DUNE_MOSQUITTO_ENABLED
// #include "MosquittoClient.hpp"
// #endif

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
    };
    struct Task: public DUNE::Tasks::Task
    {
      // //! Task arguments
      // Arguments m_args;
      //! Mosquitto client arguments
      MosquittoClient::Arguments m_client_args;
      //! Client
      MosquittoClient* m_client;
      //! Topic buffer
      std::string m_topic_bfr;
      //! Payload buffer
      std::string m_payload_bfr;

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

        param("Subscribe Topings", m_client_args.topics)
        .defaultValue("")
        .description("List of topics the task should subscribe to."
                     "Use \'*\' instead of \'#\'.");

        param("Authetication -- User", m_client_args.usr)
        .defaultValue("")
        .description("User for broker authetication.");

        param("Authetication -- Password", m_client_args.pw)
        .defaultValue("")
        .description("Password for broker authetication."
                     "If left blank only user is sent.");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // Workaround for ini comment char
        for (unsigned i = 0; i < m_client_args.topics.size(); i++)
          m_client_args.topics[i] = String::replace(m_client_args.topics[i], '*', "#");
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
        m_client = new MosquittoClient(this, &m_client_args);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_client->subscribe(m_client_args.topics);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_client);
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
          if (!m_client->loop())
            err("Loop error");
        }
      }
    };
  }
}

DUNE_TASK
