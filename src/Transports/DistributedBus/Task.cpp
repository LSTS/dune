//***************************************************************************
// Copyright 2022 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// Author: José Pinto                                                       *
//***************************************************************************
// Objective:                                                               *
// Allow DUNE to be distributed between different processes / CPUs          *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace DistributedBus
  {
    using DUNE_NAMESPACES;
    //! %Task arguments.
    struct Arguments
    {
      unsigned local_port;
      Address remote_address;
      unsigned remote_port;
      bool print_outgoing;
      bool print_incoming;
    };

    class Task : public DUNE::Tasks::Task
    {
    private:
      // Task arguments.
      Arguments m_args;
      // Client to connect to server.
      TCPClient* m_client;
      // Server to listen for clients.
      TCPServer* m_server;
      // Buffer size.
      static const unsigned c_bfr_size = 0xFFFF;
      // Data buffer.
      uint8_t m_bfr[c_bfr_size];
      // Map with remote to local entity ids.
      std::map<uint8_t, uint8_t> m_remote_to_local_entities;
      std::map<uint8_t, uint8_t> m_local_to_remote_entities;
      std::map<std::string, std::string> m_local_to_remote_labels;
      std::map<void*, IMC::EntityList*> m_entities;
      volatile bool m_connected = false;
      Time::Counter<double> m_reconnect_timer;
      Mutex m_mutex;

    public:
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx), m_client(nullptr), m_server(nullptr), m_reconnect_timer(5.0)
      {
        param("Local Port", m_args.local_port)
            .defaultValue("6600")
            .description("Port to listen on. 0 to act as a client.");

        param("Remote Address", m_args.remote_address)
            .defaultValue("127.0.0.1")
            .description("Address of the remote host");

        param("Remote Port", m_args.remote_port).defaultValue("6600").description("Port of the remote host");

        param("Print Outgoing Messages", m_args.print_outgoing)
            .defaultValue("false")
            .description("Print outgoing messages");
        
        param("Print Incoming Messages", m_args.print_incoming)
            .defaultValue("false")
            .description("Print incoming messages");

        // bind this task to all messages
        bindAll(this);
      }

      bool
      tryReconnect()
      {
        m_connected = false;
        Memory::clear(m_client);
        Memory::clear(m_server);
        if (m_args.local_port != 0)
          return tryStartServer();
        else
          return tryConnectToServer();
      }

      bool
      tryConnectToServer()
      {
        if (m_args.local_port != 0 || stopping())
          return false;

        debug("Trying to connect to %s:%u", m_args.remote_address.c_str(), m_args.remote_port);
        try
        {
          m_client = new TCPClient(m_args.remote_address, m_args.remote_port);
          m_client->setOnRead(
              std::bind<void>(&Task::onRead, this, nullptr, std::placeholders::_1, std::placeholders::_2));
          m_client->setOnDisconnect(std::bind<void>(&Task::onDisconnect, this, nullptr));
          m_client->setOnConnect(std::bind<void>(&Task::onConnect, this));
          m_client->start();
          return true;
        }
        catch (std::runtime_error& e)
        {
          war(DTR("failed to connect to %s:%u: %s"), m_args.remote_address.c_str(), m_args.remote_port, e.what());
          setEntityState(EntityState::ESTA_ERROR, "Failed to connect to remote host");
          Memory::clear(m_client);
          return false;
        }
      }

      void
      onConnect()
      {
        inf("Client connected to server");
        m_connected = true;
        setEntityState(EntityState::ESTA_NORMAL, "Connected to server");
        queryEntities();
      }

      bool
      onClientConnected(Address addr, int port)
      {
        inf("Client connected from %s:%u", addr.c_str(), port);
        m_connected = true;
        queryEntities();
        return true;
      }

      void
      registerRemoteEntities(const IMC::EntityList* el)
      {
        Utils::TupleList tl(el->list);
        for (auto entry : tl.get())
        {
          std::string key = entry.first;
          int value = atoi(entry.second.c_str());
          registerRemoteEntity(key, value);
        }
      }

      void
      unregisterRemoteEntities(const IMC::EntityList* el)
      {
        if (el == nullptr)
          return;
        std::string list = el->list;
        Utils::TupleList tl(list);
        for (auto entry : tl.get())
        {
          unregisterRemoteEntity(entry.first);        
        }
      }

      IMC::Message *
      getMessage(const uint8_t* data, int offset, int len) {
        try
        {
          return IMC::Packet::deserialize(data+offset, len-offset);
        }
        catch
        (std::runtime_error& e)
        {
          war(DTR("failed to deserialize message: %s"), e.what());
          return nullptr;
        }
      }

      void
      handleIncomingMessage(TCPSocket* client, IMC::Message* msg)
      {
         if (msg->getId() == EntityList::getIdStatic())
          {
            EntityList* el = static_cast<EntityList*>(msg);
            if (el->op == IMC::EntityList::OP_REPORT)
            {             
                    
              bool shouldReload = false;
              if (client != nullptr && m_entities.find(client) == m_entities.end())
              {
                registerRemoteEntities(el);
                shouldReload = true;
                m_entities[client] = el->clone();
              }
              else if (client == nullptr && m_entities.find(m_server) == m_entities.end())
              {
                registerRemoteEntities(el);
                    
                shouldReload = true;
                m_entities[m_server] = el->clone();           
              }

              if (shouldReload)
              {
                debug("Reloading entities.");
                EntityList el1;
                el1.op = IMC::EntityList::OP_RELOAD;
                dispatch(el1);
              }
              return;
            }
          }
          if (m_server != nullptr && client != nullptr)
            m_server->write(msg, client);// send to other clients
          translateEntityIds(msg);
          dispatch(msg, DF_KEEP_SRC_EID);      
      }
      void
      onRead(TCPSocket* client, const char* data, size_t len)
      {
        try
        {
          std::vector<IMC::Message*> msgs;
          uint16_t offset = IMC::Packet::deserializeAllMessages((const uint8_t*)data, len, msgs);
          if (offset < len)
          {
            war(DTR("received %lu bytes of data, but only %u bytes were deserialized"), len, offset);
            return;
          }
          for (IMC::Message* msg : msgs)
          {
            if (m_args.print_incoming)
              inf("Received %s from remote DUNE.", msg->getName());
            handleIncomingMessage(client, msg);
          }          
        }
        catch (IMC::BufferTooShort& e)
        {
          war(DTR("buffer too short while deserializing: %s"), e.what());
          return;
        }
        catch (std::runtime_error& e)
        {
          war(DTR("failed to deserialize message: %s"), e.what());
          return;
        }
        catch (...)
        {
          war(DTR("failed to deserialize message: unknown error"));
          return;
        }
      }

      void
      onDisconnect(TCPSocket* client)
      {
        m_mutex.lock();
        if (client != nullptr)
        {          
          inf("Client has disconnected");
          if (m_entities.find(client) != m_entities.end())
          {
            unregisterRemoteEntities(m_entities.find(client)->second);
            m_entities.erase(client);
          }          
        }
        else
        {
          inf("Disconnected from server");
          m_connected = false;
          unregisterRemoteEntities(m_entities.find(m_server)->second);
          delete m_entities.find(m_server)->second;
          m_entities.clear();
          setEntityState(EntityState::ESTA_BOOT, "Disconnected from server");
        }
        m_mutex.unlock();
      }

      bool
      tryStartServer()
      {
        if (m_args.local_port == 0 || stopping())
          return false;
        debug("Trying to bind to port %u", m_args.local_port);

        try
        {
          m_server = new TCPServer(m_args.local_port);
          m_server->setOnClientConnected(
              std::bind<bool>(&Task::onClientConnected, this, std::placeholders::_1, std::placeholders::_2));
          m_server->setOnRead(std::bind<void>(&Task::onRead, this, std::placeholders::_1, std::placeholders::_2,
                                              std::placeholders::_3));
          m_server->setOnDisconnect(std::bind<void>(&Task::onDisconnect, this, std::placeholders::_1));
          m_server->start();
          m_connected = true;
          return true;
        }
        catch (std::runtime_error& e)
        {
          war(DTR("failed to bind to port %u: %s"), m_args.local_port, e.what());
          setEntityState(EntityState::ESTA_ERROR, "Failed to bind to local port");
          return false;
        }
      }

      void
      onResourceAcquisition() override
      {
        setEntityState(EntityState::ESTA_BOOT, Status::CODE_CONNECTING);
        tryReconnect();
      }

      void
      queryEntities(bool local = false)
      {
        IMC::EntityList el;
        el.op = IMC::EntityList::OP_QUERY;
        el.setSource(getSystemId());
        el.setTimeStamp();
        debug("Sending EntityList query");
        if (local)
          dispatch(el);
        else
          sendToRemote(&el);
      }

      void
      sendToRemote(IMC::Message* msg)
      {
        if (m_connected && !stopping())
        {
          if (m_server != nullptr)
          {
            uint16_t rv = IMC::Packet::serialize(msg, m_bfr, c_bfr_size);
            if (m_args.print_outgoing)
              inf("Sending %s to clients.", msg->getName());
            m_server->write(m_bfr, rv);
          }            
          else if (m_client != nullptr)
          {
            uint16_t rv = IMC::Packet::serialize(msg, m_bfr, c_bfr_size);
            if (m_args.print_outgoing)
              inf("Sending %s to server.", msg->getName());
            m_client->write(m_bfr, rv);
          }
        }
      }

      void
      onResourceRelease() override
      {        
        m_mutex.lock();
        m_connected = false;
        if (m_server != nullptr)
        {
          m_server->disconnect();
          m_server->stopAndJoin();
        }

        if (m_connected && m_client != nullptr)
        {
          m_client->disconnect();
          m_client->stopAndJoin();
        }

        m_client = nullptr;
        m_server = nullptr;
        m_mutex.unlock();
      }

      void
      consume(const IMC::Message* msg)
      {
        IMC::Message* clone = msg->clone();
        sendToRemote(clone);
      }

      void
      registerRemoteEntity(std::string name, int eid)
      {
        unsigned int local_id = -1;
        std::string original_name = name;
        while (m_ctx.entities.labelExists(name))
        {
          name = "Remote "+name;
          m_local_to_remote_labels[original_name] = name;
        }

        local_id = m_ctx.entities.reserve(name, original_name);

        m_remote_to_local_entities[eid] = local_id;
        m_local_to_remote_entities[local_id] = eid;
        debug("Remote entity named %s, will have local id %d", name.c_str(), local_id);
      }

      void
      unregisterRemoteEntity(std::string name)
      {
        std::string label = name;
        if (m_local_to_remote_labels.find(name) != m_local_to_remote_labels.end())
          label = m_local_to_remote_labels[name];
        debug("unregistering %s / %d", label.c_str(), m_ctx.entities.resolve(label));
        m_ctx.entities.unreserve(label);
      }

      void
      translateEntityIds(IMC::Message* msg)
      {
        // translate system id
        msg->setSource(getSystemId());

        // translate destination entity id
        if (msg->getDestinationEntity() != 255
            && m_remote_to_local_entities.find(msg->getDestinationEntity()) != m_remote_to_local_entities.end())
            {
              spew("translating destination entity id %d to %d", msg->getDestinationEntity(), m_remote_to_local_entities[msg->getDestinationEntity()]);
              msg->setDestinationEntity(m_remote_to_local_entities[msg->getDestinationEntity()]);
            }          

        // translate source entity id
        if (msg->getSourceEntity() != 255
            && m_remote_to_local_entities.find(msg->getSourceEntity()) != m_remote_to_local_entities.end())
            {
              spew("translating source entity id %d to %d", msg->getSourceEntity(), m_remote_to_local_entities[msg->getSourceEntity()]);
              msg->setSourceEntity(m_remote_to_local_entities[msg->getSourceEntity()]);
            }          
      }

      void
      onMain() override
      {
        while (!stopping())
        {
          waitForMessages(0.01);
          if (!m_connected && m_reconnect_timer.overflow())
          {
            m_reconnect_timer.reset();
            tryReconnect();
          }
          if (m_server != nullptr || m_connected)
            setEntityState(EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
        m_connected = false;        
      }
    };
  }
}
DUNE_TASK