//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
// Author: Paulo Dias                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <stdexcept>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Discovery
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // List of ports to listen for advertisements.
      std::vector<unsigned> ports;
      // Multicast address.
      Address addr_mcast;
      // Trace incoming messages.
      bool trace_in;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Socket.
      UDPSocket m_sock;
      // Task arguments.
      Arguments m_args;
      // Our DUNE's UID URL.
      std::string m_dune_uid;
      // Last timestamps.
      std::map<Address, double> m_tstamps;
      // Deserialization buffer.
      uint8_t m_bfr[4096];

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        // Define configuration parameters.
        param("Ports", m_args.ports)
        .defaultValue("30100, 30101, 30102, 30103, 30104")
        .description("List of destination ports");

        param("Multicast Address", m_args.addr_mcast)
        .defaultValue("224.0.75.69")
        .description("Multicast address");

        param("Print Incoming Messages", m_args.trace_in)
        .defaultValue("false")
        .description("Print incoming messages (Debug)");

        // Initialize DUNE's UID URL.
        std::ostringstream os;
        os << "dune://0.0.0.0/uid/" << m_ctx.uid;
        m_dune_uid = os.str();
      }

      void
      onResourceInitialization(void)
      {
        // Initialize socket.
        m_sock.setMulticastTTL(1);
        m_sock.setMulticastLoop(false);
        m_sock.enableBroadcast(true);

        std::vector<Interface> itfs = Interface::get();
        for (unsigned i = 0; i < itfs.size(); ++i)
          m_sock.joinMulticastGroup(m_args.addr_mcast, itfs[i].address());

        for (unsigned i = 0; i < m_args.ports.size(); ++i)
        {
          try
          {
            m_sock.bind(m_args.ports[i], Address::Any, false);
            inf("listening for advertisements on port %u", m_args.ports[i]);
            return;
          }
          catch (...)
          { }
        }

        throw std::runtime_error("no available ports to listen to advertisements");
      }

      void
      readMessage(UDPSocket& sock)
      {
        Address addr;
        uint16_t rv = sock.read((char*)m_bfr, sizeof(m_bfr), &addr);
        IMC::Message* msg = IMC::Packet::deserialize(m_bfr, rv);

        // Validate message.
        if (msg == 0)
        {
          war("discarding spurious message");
          delete msg;
          return;
        }

        if (msg->getId() != DUNE_IMC_ANNOUNCE)
        {
          war("discarding spurious message '%s'", msg->getName());
          delete msg;
          return;
        }

        // Check if we already got this message.
        std::map<Address, double>::iterator itr = m_tstamps.find(addr);
        if (itr != m_tstamps.end())
        {
          if (itr->second == msg->getTimeStamp())
          {
            delete msg;
            return;
          }
          else
          {
            itr->second = msg->getTimeStamp();
          }
        }
        else
        {
          m_tstamps[addr] = msg->getTimeStamp();
        }

        // Parse service list.
        IMC::Announce* announce = static_cast<IMC::Announce*>(msg);
        std::vector<std::string> services;
        String::split(announce->services, ";", services);

        // If the message contains our special UID URL, then it was sent
        // by our DUNE instance and we discard it.
        for (unsigned i = 0; i < services.size(); ++i)
        {
          if (services[i] == m_dune_uid)
          {
            delete msg;
            return;
          }
        }

        // Check if the message was sent from our computer.
        bool m_local = false;
        std::vector<Interface> itfs = Interface::get();
        for (unsigned i = 0; i < itfs.size(); ++i)
        {
          if (itfs[i].address() == addr)
          {
            m_local = true;
            break;
          }
        }

        // Register node if not already registered.
        if (m_ctx.resolver.isUnknown(msg->getSource()))
        {
          inf("new node within range '%s' / %u / %s", announce->sys_name.c_str(),
              msg->getSource(), addr.c_str());

          m_ctx.resolver.insert(announce->sys_name, msg->getSource());
        }

        std::string node = resolveSystemId(msg->getSource());

        if (m_ctx.resolver.isLocal(msg->getSource()))
        {
          if (m_local)
            war("another node on this computer is advertising our node name '%s'", node.c_str());
          else
            war("another node on our network is advertising our node name '%s'", node.c_str());
        }

        // Send to other tasks.
        dispatch(msg, DF_KEEP_TIME);

        if (m_args.trace_in)
          msg->toText(std::cerr);

        delete msg;
      }

      void
      onMain(void)
      {
        IOMultiplexing iom;
        m_sock.addToPoll(iom);

        while (!stopping())
        {
          try
          {
            if (iom.poll(1.0))
            {
              if (m_sock.wasTriggered(iom))
                readMessage(m_sock);
            }
          }
          catch (...)
          { }
        }
      }
    };
  }
}

DUNE_TASK
