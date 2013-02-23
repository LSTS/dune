//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace EvoRoma
  {
    using DUNE_NAMESPACES;

    // Simply map structs to databytes (...)
#if defined(DUNE_CXX_GNU) && !defined(DUNE_OS_NETBSD)
#  pragma pack(push,1)
#endif
    struct seacon_position
    {
      // node ID the position information refers to
      int32_t node_id;
      // latitude expressed in degree (decimal value))
      double latitude;
      // longitude expressed in degree (decimal value)
      double longitude;
      // depth expressed as a positive decimal number
      double depth;
    };

    struct seacon_range
    {
      // node ID the ranging information refers to
      int32_t node_id;
      // estimated distance to node_id
      double distance;
      // estimated travel time to node_id (the vehicle could have better estimation of the ssp to compute the distance)
      double travel_time;
    };

    struct seacon_node_info
    {
      // node ID the ranging information refers to
      int32_t node_id;
      double latitude;
      double longitude;
      double depth;
      double contuctivity;
      double temperature;
      double pressure;
    };
#if defined(DUNE_CXX_GNU) && !defined(DUNE_OS_NETBSD)
#  pragma pack(pop)
#endif

    union seacon_packet
    {
      struct seacon_position position;
      struct seacon_range range;
      struct seacon_node_info node_info;
    };

    enum PacketType
    {
      // NULL command
      SEACON_NULL = 0,
      // Node position information
      SEACON_POSITION = 1,
      // Broadcast node info in the network
      SEACON_NODE_INFO = 2,
      // Set the node ID info on the vehicle
      SEACON_NODE_ID = 3,
      // Confirm the correct reception of a message
      SEACON_OK = 4,
      // Reply: the system is busy executing other actions when a message is received
      SEACON_BUSY = 5,
      // Reply: an error occured when reading the message
      SEACON_ERROR = 6,
      // Node ranging information
      SEACON_RANGE = 7,
      // Abort request
      SEACON_ABORT = 9
    };

    struct Parser
    {
      // Packet type
      enum PacketType type;
      // Bytes still missing
      int missing;
      // Current data packet
      union seacon_packet packet;
    };

    struct Arguments
    {
      // Update frequency
      float send_period;
      // TCP port.
      uint16_t port;
      // CTD data entity label
      std::string ctd_elabel;
    };

    struct Task: public Tasks::Task
    {
      // TCP socket.
      TCPSocket* m_sock;
      // I/O multiplexer.
      IOMultiplexing m_iom;
      // Task arguments.
      Arguments m_args;
      // Port bind retries.
      static const int c_port_retries = 5;
      // CTD Conductivity
      float m_last_cond;
      // CTD Temperature
      float m_last_temp;
      // CTD Pressure
      float m_last_pres;
      // EstimatedState last lat
      fp64_t m_last_lat;
      // EstimatedState last lon
      fp64_t m_last_lon;
      // EstimatedState last depth
      float m_last_depth;
      // Message sending timer
      double m_last_transmission;
      // Evologics node Id
      uint8_t m_node_id;
      // Abort message
      IMC::Abort m_abort;
      // Range message
      IMC::LblRange m_range;
      // Beacon node id
      int m_beacons[6];
      // CTD sensor eid
      unsigned m_ctd_eid;

      struct Client
      {
        // Socket handle.
        TCPSocket* socket;
        // Client address.
        Address address;
        // Client port.
        uint16_t port;
        // Packet parser
        struct Parser parser;
      };

      // Client list.
      typedef std::list<Client> ClientList;
      ClientList m_clients;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sock(NULL),
        m_node_id(0)
      {
        param("TCP Port", m_args.port)
        .defaultValue("9300")
        .description("TCP port");

        param("Transmit Period", m_args.send_period)
        .defaultValue("10")
        .description("Data transmission period");

        param("CTD Entity Label", m_args.ctd_elabel)
        .defaultValue("CTD")
        .description("CTD Sensor Entity Label");

        bind<IMC::Conductivity>(this);
        bind<IMC::Temperature>(this);
        bind<IMC::Pressure>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::LblConfig>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_ctd_eid = resolveEntity(m_args.ctd_elabel);
        }
        catch (...)
        {
          m_ctd_eid = 0;
        }
      }

      void
      onResourceAcquisition(void)
      {
        int port_limit = m_args.port + c_port_retries;

        m_sock = new TCPSocket;

        while (m_args.port != port_limit)
        {
          try
          {
            m_sock->bind(m_args.port);
            break;
          }
          catch (std::runtime_error& e)
          {
            war(DTR("failed to bind to port %lu: %s"), (long unsigned int)m_args.port, e.what());
            ++m_args.port;
          }
        }

        if (m_args.port == port_limit)
        {
          std::string str = DTR("could not bind to a port");
          err("%s", str.c_str());
          throw std::runtime_error(str);
        }

        m_sock->listen(5);
        m_sock->addToPoll(m_iom);
        inf(DTR("bound to port %u"), m_args.port);

        m_last_transmission = Clock::get();

        clearBeacons();
      }

      void
      closeConnection(Client& c, std::exception& e)
      {
        inf(DTR("disconnected - %s:%u -- %s -- clients now: %lu"),
            c.address.c_str(), c.port, e.what(),
            (long unsigned int)(m_clients.size() - 1));

        c.socket->delFromPoll(m_iom);
        delete c.socket;
      }

      void
      onResourceRelease(void)
      {
        for (ClientList::iterator itr = m_clients.begin(); itr != m_clients.end(); ++itr)
        {
          itr->socket->delFromPoll(m_iom);
          delete itr->socket;
        }

        m_clients.clear();

        if (m_sock)
        {
          m_sock->delFromPoll(m_iom);
          delete m_sock;
          m_sock = NULL;
        }
      }

      void
      acceptNewClient(void)
      {
        Client c;
        c.socket = 0;
        try
        {
          c.socket = m_sock->accept(&c.address, &c.port);
          c.socket->addToPoll(m_iom);
          c.parser.missing = 0;
          c.parser.type = SEACON_NULL;

          m_clients.push_back(c);
          inf(DTR("connected - %s:%u - clients now: %lu"),
              c.address.c_str(), c.port,
              (long unsigned int)m_clients.size());
        }
        catch (std::runtime_error& e)
        {
          if (c.socket)
            delete c.socket;
          err(DTR("error accepting new client connection: %s"), e.what());
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_last_lat = msg->lat;
        m_last_lon = msg->lon;
        Coordinates::toWGS84(*msg, m_last_lat, m_last_lon);
        m_last_depth = msg->depth;
      }

      void
      consume(const IMC::Conductivity* msg)
      {
        if (msg->getSourceEntity() != m_ctd_eid)
          return;

        m_last_cond = msg->value;
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if (msg->getSourceEntity() != m_ctd_eid)
          return;

        m_last_temp = msg->value;
      }

      void
      consume(const IMC::Pressure* msg)
      {
        if (msg->getSourceEntity() != m_ctd_eid)
          return;

        m_last_pres = msg->value;
      }

      void
      addBeacon(int id, const IMC::LblBeacon* msg)
      {
        if (msg != NULL)
        {
          m_beacons[id] = msg->query_channel;
          inf(DTR("adding beacon %d, query channel %d"), id, m_beacons[id]);
        }
        else
          m_beacons[id] = -1;
      }

      void
      clearBeacons()
      {
        // Quick and dirty "clear beacons"
        for (int i = 0; i < 6; i++)
        {
          m_beacons[i] = -1;
        }
      }

      void
      consume(const IMC::LblConfig* msg)
      {
        if (msg->op != IMC::LblConfig::OP_SET_CFG)
          return;

        IMC::MessageList<IMC::LblBeacon>::const_iterator itr = msg->beacons.begin();
        for (unsigned i = 0; itr != msg->beacons.end(); ++itr, ++i)
          addBeacon(i, *itr);
      }

      void
      sendNodeInfo(void)
      {
        struct seacon_node_info msg;
        msg.node_id = m_node_id;
        msg.latitude = Math::Angles::degrees(m_last_lat);
        msg.longitude = Math::Angles::degrees(m_last_lon);
        msg.depth = m_last_depth;
        msg.contuctivity = m_last_cond;
        msg.temperature = m_last_temp;
        msg.pressure = m_last_pres;

        ClientList::iterator itr = m_clients.begin();

        while (itr != m_clients.end())
        {
          try
          {
            const uint8_t type = SEACON_NODE_INFO;
            itr->socket->write((char*)&type, 1);
            itr->socket->write((char*)&msg, sizeof(msg));
            inf(DTR("sent %lu bytes"), (long unsigned int)sizeof(msg));
          }
          catch (std::runtime_error& e)
          {
            closeConnection(*itr, e);
            itr = m_clients.erase(itr);
            continue;
          }
          ++itr;
        }
      }

      void
      sendOk(Client* client)
      {
        const uint8_t msg = SEACON_OK;
        try
        {
          client->socket->write((char*)&msg, 1);
        }
        catch (std::runtime_error& e)
        {
          closeConnection(*client, e);
        }
        inf(DTR("sent server OK"));
      }

      void
      handleRange(int node_id, float range)
      {
        m_range.setTimeStamp();
        m_range.range = range;

        for (int i = 0; i < 6; i++)
        {
          if (m_beacons[i] == node_id)
          {
            m_range.id = i;
            dispatch(m_range, DF_KEEP_TIME);
            return;
          }
        }

        err(DTR("got range from unknown beacon"));
      }

      void
      handleData(Client* client, uint8_t* buf, int len)
      {
        int i = 0;
        while (i < len)
        {
          switch (client->parser.type)
          {
            case SEACON_NULL:
              client->parser.type = (enum PacketType)buf[i];
              client->parser.missing = 0;
              i++;
              break;
            case SEACON_POSITION:
              {
                if (client->parser.missing == 0)
                  client->parser.missing = sizeof(struct seacon_position);

                struct seacon_position* pos = &client->parser.packet.position;

                int tocopy = std::min(client->parser.missing, len);
                uint8_t* dest = (uint8_t*)pos + (sizeof(struct seacon_position) - client->parser.missing);
                std::memcpy(dest, buf, tocopy);
                i += tocopy;
                client->parser.missing -= tocopy;

                // Packet finished
                if (client->parser.missing == 0)
                {
                  inf(DTR("received seacon position: id=%d latitude=%0.5f longitude=%0.5f depth=%0.2f"),
                      pos->node_id, pos->latitude, pos->longitude, pos->depth);
                  sendOk(client);
                  client->parser.type = SEACON_NULL;
                }
              }
              break;
            case SEACON_NODE_ID:
              m_node_id = buf[i];
              inf(DTR("node id set to %d"), (int)m_node_id);
              sendOk(client);
              client->parser.type = SEACON_NULL;
              client->parser.missing = 0;
              i += 1;
              break;
            case SEACON_OK:
              inf(DTR("client ok"));
              client->parser.type = SEACON_NULL;
              client->parser.missing = 0;
              break;
            case SEACON_ERROR:
              err(DTR("client error"));
              client->parser.type = SEACON_NULL;
              client->parser.missing = 0;
              break;
            case SEACON_BUSY:
              inf(DTR("client is busy"));
              client->parser.type = SEACON_NULL;
              client->parser.missing = 0;
              break;
            case SEACON_ABORT:
              war(DTR("acoustic abort received"));
              dispatch(m_abort);
              sendOk(client);
              client->parser.type = SEACON_NULL;
              client->parser.missing = 0;
              break;
            case SEACON_RANGE:
              {
                if (client->parser.missing == 0)
                  client->parser.missing = sizeof(struct seacon_range);

                struct seacon_range* range = &client->parser.packet.range;

                int tocopy = std::min(client->parser.missing, len);
                uint8_t* dest = (uint8_t*)range + (sizeof(struct seacon_range) - client->parser.missing);
                std::memcpy(dest, buf, tocopy);
                i += tocopy;
                client->parser.missing -= tocopy;

                // Packet finished
                if (client->parser.missing == 0)
                {
                  inf(DTR("received seacon range: id=%d distance=%0.2f ttime=%0.2f"),
                      range->node_id, range->distance, range->travel_time);
                  handleRange(range->node_id, range->distance);
                  sendOk(client);
                  client->parser.type = SEACON_NULL;
                }
              }
              break;
            default:
              err(DTR("unknown packet type: %u"), client->parser.type);
              client->parser.type = SEACON_NULL;
              client->parser.missing = 0;
          }
        }

      }

      void
      readData(float timeout)
      {
        // Poll for connections and client data
        if (!m_iom.poll(timeout))
          return;

        // Check for new clients.
        if (m_sock->wasTriggered(m_iom))
          acceptNewClient();

        // Check for client data
        ClientList::iterator itr = m_clients.begin();

        while (itr != m_clients.end())
        {
          if (!itr->socket->wasTriggered(m_iom))
          {
            ++itr;
            continue;
          }

          int n;
          uint8_t buffer[32];

          try
          {
            n = itr->socket->read((char*)buffer, sizeof(buffer));
          }
          catch (std::runtime_error& e)
          {
            closeConnection(*itr, e);
            itr = m_clients.erase(itr);
            continue;
          }

          if (n > 0)
          {
            handleData(&(*itr), buffer, n);
            inf(DTR("received %d bytes"), n);
          }

          ++itr;
        }
      }

      void
      onResourceInitialization(void)
      {
      }

      void
      onMain()
      {
        while (!stopping())
        {
          consumeMessages();
          readData(0.5);

          double now = Clock::get();
          if (now > m_last_transmission + m_args.send_period)
          {
            sendNodeInfo();
            m_last_transmission = now;
          }
        }
      }
    };
  }
}

DUNE_TASK
