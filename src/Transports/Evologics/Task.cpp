//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Listener.hpp"

namespace Transports
{
  namespace Evologics
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      // IP address.
      Address address;
      // TCP port.
      uint16_t port;
      // Low gain.
      bool low_gain;
      // Source level.
      unsigned source_level;
      // Connection retry count.
      unsigned con_retry_count;
      // Connection retry timeout.
      unsigned con_retry_tout;
      // Connection idle timeout.
      unsigned con_idle_tout;
      // Instant message retry count.
      unsigned im_retry_count;
      // Transmission pool size.
      unsigned pool_size;
    };

    // Type definition for mapping addresses.
    typedef std::map<unsigned, unsigned> AddressMap;
    typedef std::map<std::string, unsigned> EvologicsMap;

    struct Task: public Tasks::Task
    {
      // Map of Evologics modems.
      EvologicsMap m_modem_addrs;
      // Map of Evologics to IMC addresses.
      AddressMap m_modem_to_imc_table;
      // Map of IMC to Evologics addresses.
      AddressMap m_imc_to_modem_table;
      // TCP socket.
      TCPSocket* m_sock;
      // I/O multiplexer.
      IOMultiplexing* m_iom;
      // Modem address.
      unsigned m_address;
      // Listener thread.
      Listener* m_listener;
      // Task arguments.
      Arguments m_args;
      std::ofstream m_file;
      unsigned m_file_frames;
      unsigned m_file_frames_now;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sock(NULL),
        m_iom(NULL),
        m_address(0),
        m_listener(NULL)
      {
        param("IPv4 Address", m_args.address)
        .defaultValue("192.168.0.147")
        .description("IPv4 address");

        param("TCP Port", m_args.port)
        .defaultValue("9200")
        .description("TCP port");

        param("Low Gain", m_args.low_gain)
        .defaultValue("false")
        .description("Enable low gain mode (testing purposes)");

        param("Source Level", m_args.source_level)
        .defaultValue("3")
        .minimumValue("0")
        .maximumValue("3")
        .description("Source level");

        param("Connection Retry Count", m_args.con_retry_count)
        .defaultValue("3")
        .minimumValue("0")
        .maximumValue("50");

        param("Connection Retry Timeout", m_args.con_retry_tout)
        .defaultValue("1000")
        .units(Units::Millisecond)
        .minimumValue("500")
        .maximumValue("12000");

        param("Connection Idle Timeout", m_args.con_idle_tout)
        .defaultValue("0")
        .units(Units::Second)
        .minimumValue("0")
        .maximumValue("3600");

        param("Pool Size", m_args.pool_size)
        .defaultValue("16384")
        .minimumValue("16384")
        .maximumValue("1048576")
        .units(Units::Byte)
        .description("Transmission buffer size");

        param("Instant Message Retry Count", m_args.im_retry_count)
        .defaultValue("0")
        .minimumValue("0")
        .maximumValue("255")
        .description("Instant message retry count");

        // Process modem addresses.
        std::string agent = getSystemName();
        std::vector<std::string> addrs = ctx.config.options("Evologics Addresses");
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned imc_id = resolveSystemName(addrs[i]);
          unsigned modem_id = 0;
          ctx.config.get("Evologics Addresses", addrs[i], "0", modem_id);
          m_modem_to_imc_table[modem_id] = imc_id;
          m_imc_to_modem_table[imc_id] = modem_id;
          m_modem_addrs[addrs[i]] = modem_id;

          if (addrs[i] == agent)
            m_address = modem_id;
        }

        bind<IMC::AcousticOperation>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_iom = new IOMultiplexing;
        m_sock = new TCPSocket;
        m_sock->connect(m_args.address, m_args.port);
        m_sock->addToPoll(*m_iom);
      }

      void
      onResourceRelease(void)
      {
        if (m_listener != NULL)
        {
          m_listener->stopAndJoin();
          delete m_listener;
          m_listener = NULL;
        }

        Memory::clear(m_iom);
        Memory::clear(m_sock);
      }

      std::string
      readString(double timeout = 2.0)
      {
        if (!m_iom->poll(timeout))
          return std::string();

        char bfr[128];
        int rv = m_sock->read(bfr, sizeof(bfr));
        if (rv <= 0)
          return std::string();

        bfr[rv] = 0;
        war("%s", sanitize(bfr).c_str());
        return bfr;
      }

      bool
      waitReply(const char* reply, const char* alt_reply, double timeout = 2.0)
      {
        if (reply == NULL)
          return false;

        if (reply == NULL && alt_reply == NULL)
          return false;

        std::string received = readString(timeout);

        if (alt_reply == NULL)
          return received == reply;

        if (received == reply || received == alt_reply)
          return true;

        return false;
      }

      void
      writeString(const std::string& str)
      {
        inf(DTR("write: %s"), sanitize(str).c_str());
        m_sock->write(str.c_str(), str.size());
      }

      void
      onResourceInitialization(void)
      {
        if (m_iom->poll(2.0))
        {
          char bfr[2048];
          int rv = m_sock->read(bfr, sizeof(bfr));
          inf(DTR("discarding %d bytes"), rv);
        }

        // Clear transmission buffer.
        writeString("ATZ4\n");
        if (!waitReply("OK\r\n", "[*]OK\r\n"))
          throw std::runtime_error("failed to clear the transmission buffer");

        writeString(String::str("AT!G%u\n", m_args.low_gain ? 1 : 0));
        if (!waitReply("OK\r\n", "[*]OK\r\n"))
          throw std::runtime_error("failed to set gain");

        writeString(String::str("AT!L%u\n", m_args.source_level));
        if (!waitReply("OK\r\n", "[*]OK\r\n"))
          throw std::runtime_error("failed to set source_level");

        writeString(String::str("AT!RI%u\n", m_args.im_retry_count));
        if (!waitReply("OK\r\n", "[*]OK\r\n"))
          throw std::runtime_error("failed to set IM retry count");

        writeString(String::str("AT!RC%u\n", m_args.con_retry_count));
        if (!waitReply("OK\r\n", "[*]OK\r\n"))
          throw std::runtime_error("failed to set connection retry count");

        writeString(String::str("AT!RT%u\n", m_args.con_retry_tout));
        if (!waitReply("OK\r\n", "[*]OK\r\n"))
          throw std::runtime_error("failed to set connection retry timeout");

        writeString(String::str("AT!ZI%u\n", m_args.con_idle_tout));
        if (!waitReply("OK\r\n", "[*]OK\r\n"))
          throw std::runtime_error("failed to set connection idle timeout");

        writeString(String::str("AT!AL%u\n", m_address));
        if (!waitReply("OK\r\n", "[*]OK\r\n"))
          throw std::runtime_error("failed to set modem address");
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {
        // EvologicsMap::iterator itr = m_modem_addrs.find(msg->system);
        // if (itr == m_modem_addrs.end())
        // {
        //   err(DTR("address of '%s' is not configured"), msg->system.c_str());
        //   return;
        // }

        if (msg->op == IMC::AcousticOperation::AOP_ABORT)
        {
          msg->toText(std::cerr);
          m_listener->queueInstantMessage(1, "\x0a", 1);
          Delay::wait(2.0);
        }
        else if (msg->op == IMC::AcousticOperation::AOP_MSG)
        {
          if (msg->msg.isNull())
            return;

          const IMC::Message* imsg = msg->msg.get();

          if (imsg->getId() != DUNE_IMC_DEVDATABINARY)
            return;

          const IMC::DevDataBinary* raw = static_cast<const IMC::DevDataBinary*>(imsg);
          m_listener->queueMessage(2, &raw->value[0], raw->value.size());
        }
        else if (msg->op == IMC::AcousticOperation::AOP_MSG_SHORT)
        {
          if (msg->msg.isNull())
            return;

          const IMC::Message* imsg = msg->msg.get();

          if (imsg->getId() != DUNE_IMC_DEVDATABINARY)
            return;

          const IMC::DevDataBinary* raw = static_cast<const IMC::DevDataBinary*>(imsg);
          m_listener->queueInstantMessage(2, &raw->value[0], raw->value.size());
        }
      }

      void
      openFile(const char* data, unsigned data_size)
      {
        (void)data_size;

        m_file_frames_now = 0;
        m_file_frames = ((uint8_t)data[1] << 8) | (uint8_t)data[2];
        std::string file_name(data + 3);
        Path destination = Path("/opt/lsts") / file_name;

        war(DTR("opening file '%s' with %u frames"), file_name.c_str(), m_file_frames);
        m_file.open(destination.c_str(), std::ios::binary);
      }

      void
      handleInstantMessage(Reply* msg)
      {
        switch (msg->data.recv.data[0])
        {
          case 0x0a:
            {
              war(DTR("got abort request"));
              IMC::Abort abort;
              dispatch(abort);
            }
            break;
        }
      }

      void
      handleMessage(Reply* msg)
      {
        switch ((uint8_t)msg->data.recv.data[0])
        {
          case 0xf0:
            openFile(msg->data.recv.data, msg->data.recv.data_size);
            break;

          case 0xf1:
            if (m_file.is_open())
            {
              m_file.write(msg->data.recv.data + 1, msg->data.recv.data_size - 1);
              if (++m_file_frames_now == m_file_frames)
              {
                war(DTR("file is complete"));
                m_file.close();
              }
            }
            else
              war(DTR("no file is open"));
            break;
        }

      }

      void
      onMain(void)
      {
        m_listener = new Listener(m_sock);
        m_listener->start();

        while (!stopping())
        {
          waitForMessages(1.0);

          Reply* reply = m_listener->dequeueInstantMessage();
          if (reply != NULL)
          {
            handleInstantMessage(reply);
            delete reply;
          }

          reply = m_listener->dequeueMessage();
          if (reply != NULL)
          {
            handleMessage(reply);
            delete reply;
          }
        }
      }
    };
  }
}

DUNE_TASK
