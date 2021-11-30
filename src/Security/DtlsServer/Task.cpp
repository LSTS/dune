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
// Author: lea                                                              *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <stdexcept>
#include <set>
#include <algorithm>
#include <cstddef>
#include <string.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "NodeAddress.hpp"
#include "NodeTable.hpp"
#include "Listener.hpp"
#include "LimitedComms.hpp"

#include <unistd.h>

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include <arpa/inet.h>


namespace Security
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author lea
  namespace DtlsServer
  {
    using DUNE_NAMESPACES;

    struct Arguments
      {
        // Contact timeout.
        float contact_timeout;
        // Contact refresh periodicity.
        float contact_refresh_per;
        // Local UDP port.
        unsigned port;
        // Static destinations.
        std::vector<std::string> destinations;
        // Trace incoming messages.
        bool trace_in;
        // Trace outgoing messages.
        bool trace_out;
        // Rate limits.
        std::vector<std::string> rate_lims;
        // Filtered entities.
        std::vector<std::string> entities_flt;
        // List of messages to publish.
        std::vector<std::string> messages;
        // Announce this transport to services or not
        bool announce_service;
        // Simulated Communications Range
        float comm_range;
        // Block packets sent/received underwater
        bool underwater_comms;
        // Messages that will always be transmitted, disregarding comm limitations
        std::vector<std::string> allowed_messages;
        // Enable use of dynamic nodes
        bool dynamic_nodes;
        // Only transmit messages from local system
        bool only_local;
        // Optional custom service type
        std::string custom_service;
      };

    
    // Internal buffer size.
    static const int c_bfr_size = 65535;
    // Port bind retries.
    // Todo: where to define this instead of hardcoding here?
    static const int c_port_retries = 5;

    struct Task: public DUNE::Tasks::Task
    {

      int rv;
      //! Serialization buffer.
      uint8_t m_bfr[c_bfr_size];
      //! UDP Socket.
      UDPSocket m_sock;
      //! Set of static nodes.
      std::set<NodeAddress> m_static_dsts;
      //! Set of destination nodes.
      NodeTable m_node_table;
      //! Task arguments.
      Arguments m_args;
      //! Simulate communication limitations
      bool m_comm_limitations;
      //! Allow underwater communications when simulating limited comms
      bool m_underwater_comms;
      //! Listener thread.
      Listener* m_listener;
      //! Contact refresh counter.
      Time::Counter<float> m_contacts_refresh_counter;
      //! LimitedComms object
      LimitedComms* m_lcomms;
      //! Message Filter
      MessageFilter m_filter;


      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {

        param("Local Port", m_args.port)
        .defaultValue("6002")
        .description("Local UDP port to listen on");

        param("Contact Timeout", m_args.contact_timeout)
        .units(Units::Second)
        .defaultValue("30");

        param("Contact Refresh Periodicity", m_args.contact_refresh_per)
        .units(Units::Second)
        .defaultValue("5.0");

        param("Print Outgoing Messages", m_args.trace_out)
        .defaultValue("false")
        .description("Print outgoing messages (Debug)");

        param("Print Incoming Messages", m_args.trace_in)
        .defaultValue("false")
        .description("Print incoming messages (Debug)");

        param("Static Destinations", m_args.destinations)
        .description("List of <IPv4>:<Port> destinations that will always receive outgoing messages");

        param("Rate Limiters", m_args.rate_lims)
        .description("List of <Message>:<Frequency>");

        param("Filtered Entities", m_args.entities_flt)
        .description("List of <Message>:<Entity>+<Entity> that define the source entities allowed to pass message of a specific message type.");

        param("Announce Service", m_args.announce_service)
        .defaultValue("true")
        .description("Announce this transport to services or not");

        param("Communication Range", m_args.comm_range)
        .defaultValue("0")
        .units(Units::Meter)
        .description("Communication range (0 for infinite)");

        param("Underwater Communications", m_args.underwater_comms)
        .defaultValue("false")
        .description("Allow underwater communication when limited comms are being simulated");

        param("Transports", m_args.messages)
        .defaultValue("")
        .description("List of messages to transport");

        param("Always Transmitted Messages", m_args.allowed_messages)
        .defaultValue("")
        .description("List of messages that will always be transmitted disregarding communication limitations");

        param("Dynamic Nodes", m_args.dynamic_nodes)
        .defaultValue("true")
        .description("Allow use of dynamic nodes.");

        param("Local Messages Only", m_args.only_local)
        .defaultValue("false")
        .description("Only transmit messsages from local system.");

        param("Custom Service Type", m_args.custom_service)
        .defaultValue("")
        .description("Optional custom service type (imc+udp+<Custom Service Type>), empty entry gives default service (imc+udp)");

        // Allocate space for internal buffer.
        // m_bfr = new uint8_t[c_bfr_size];

        bind<IMC::Announce>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        war("hello from onUpdateParameters)");

        if (paramChanged(m_args.contact_refresh_per))
          m_contacts_refresh_counter.setTop(m_args.contact_refresh_per);

        // Process rate limiters.
        m_filter.setupRates(m_args.rate_lims);
        // Process filtered entities.
        m_filter.setupEntities(m_args.entities_flt, this);

      }


      //! Acquire resources.
      // bind to m_args.messages
      // init limitedComms
      // ? connect to static nodes?
      // --x init and dispatch announce service --> will be done in regular UDP task that handles announce messages, not here
      void
      onResourceAcquisition(void)
      {
        war("hello from onResourceAcquisition)");

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

      }

      void
      onResourceInitialization(void)
      {

      }


      /**
       * @brief Read IMC Announce message and verify if the source is already in the Node list.
       * If yes, just skip this step. 
       * If not, add the node to the nodeTable by creating a new socket and executing the handshake.
       * Start Listener for this socket
       * this also includes dispatching a DtlsMessage to the client to tell it where to connect to. ip and port.
       * 
       * @param msg IMC Announce message with source IP.
       */
      void
      consume(const IMC::Announce* msg)
      {
        // war("hello from consume(IMC Announce)");

        //todo: add depending on active list
        if (0 == strcmp(msg->sys_name.c_str(), "lauv-xplore-4"))
        {
          m_node_table.addNode(this, m_args.port, c_port_retries, msg->getSource(), msg->sys_name, msg->services);
          //todo: if successful, bind to remaining messages
          bind(this, m_args.messages);
          
        }
        
        

      }

      void
      consume(const IMC::Message* msg)
      {
        // war("hello from consume(IMC Message)");

        if (msg->getSource() != this->getSystemId())
        return;

        rv = IMC::Packet::serialize(msg, m_bfr, c_bfr_size);

        m_node_table.send((const unsigned char*) m_bfr, rv);

        memset(m_bfr, 0x00, c_bfr_size);


      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        war("hello from onResourceRelease");

      }


      //! Main loop.
      void
      onMain(void)
      {

        war("hello from onMain()");

        while (!stopping())
        {
           waitForMessages(1.0);
           Delay::wait(1);
          ;
        }
      }
    };
  }
}

DUNE_TASK
