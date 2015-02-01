//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"
#include "Ticket.hpp"

namespace Transports
{
  namespace Evologics
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! IP address.
      Address address;
      //! TCP port.
      uint16_t port;
      //! Low gain.
      bool low_gain;
      //! Source level.
      unsigned source_level;
      //! Connection retry count.
      unsigned con_retry_count;
      //! Connection retry timeout.
      unsigned con_retry_tout;
      //! Connection idle timeout.
      unsigned con_idle_tout;
      //! Instant message retry count.
      unsigned im_retry_count;
      //! Transmission pool size.
      unsigned pool_size;
      //! Sound speed on water.
      double sound_speed_def;
      //! Entity label of sound speed provider.
      std::string sound_speed_elabel;
      //! Keep-alive timeout.
      double kalive_tout;
      //! Highest address.
      unsigned highest_addr;
    };

    // Type definition for mapping addresses.
    typedef std::map<unsigned, unsigned> AddressMap;
    typedef std::map<std::string, unsigned> MapName;
    typedef std::map<unsigned, std::string> MapAddr;

    //! Broadcast address.
    static const unsigned c_broadcast = 0x0f;

    struct Task: public Tasks::Task
    {
      //! Map of Evologics modems by name.
      MapName m_modem_names;
      //! Map of Evologics modems by address.
      MapAddr m_modem_addrs;
      //! TCP socket.
      TCPSocket* m_sock;
      //! Modem address.
      unsigned m_address;
      //! Driver.
      Driver* m_driver;
      // Current sound speed (m/s).
      double m_sound_speed;
      //! Sound speed entity id.
      int m_sound_speed_eid;
      //! Current transmission ticket.
      Ticket* m_ticket;
      //! Keep-alive counter.
      Counter<double> m_kalive_counter;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sock(NULL),
        m_address(0),
        m_driver(NULL),
        m_sound_speed_eid(-1),
        m_ticket(NULL)
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

        param(DTR_RT("Source Level"), m_args.source_level)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("3")
        .minimumValue("0")
        .maximumValue("3")
        .description("Signal transmission source level during data exchange");

        param("Connection Retry Count", m_args.con_retry_count)
        .defaultValue("3")
        .minimumValue("0")
        .maximumValue("50");

        param("Connection Retry Timeout", m_args.con_retry_tout)
        .defaultValue("2000")
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

        param("Highest Address", m_args.highest_addr)
        .defaultValue("14")
        .values("2, 6, 14, 30, 62, 126, 254")
        .description("The highest address available for a device."
                     "Highest Address values must match for all communicating devices.");

        param("Sound Speed - Default Value", m_args.sound_speed_def)
        .units(Units::MeterPerSecond)
        .defaultValue("1500");

        param("Sound Speed - Entity Label", m_args.sound_speed_elabel)
        .description("Entity label of sound speed provider");

        param("Keep Alive - Timeout", m_args.kalive_tout)
        .defaultValue("5.0")
        .units(Units::Second)
        .description("Keep-alive timeout");

        // Process modem addresses.
        std::string system = getSystemName();
        std::vector<std::string> addrs = ctx.config.options("Evologics Addresses");
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned addr = 0;
          ctx.config.get("Evologics Addresses", addrs[i], "0", addr);
          m_modem_names[addrs[i]] = addr;
          m_modem_addrs[addr] = addrs[i];

          if (addrs[i] == system)
            m_address = addr;
        }

        bind<IMC::UamTxFrame>(this);
        bind<IMC::DevDataText>(this);
        bind<IMC::SoundSpeed>(this);
        //bind<IMC::VehicleMedium>(this);
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
          m_sound_speed_eid = resolveEntity(m_args.sound_speed_elabel);
        }
        catch (...)
        {
          debug("dynamic sound speed corrections are disabled");
          m_sound_speed = m_args.sound_speed_def;
        }
      }

      void
      onUpdateParameters(void)
      {
        m_sound_speed = m_args.sound_speed_def;
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          {
            TCPSocket atz;
            atz.connect(m_args.address, m_args.port);
            atz.writeString("ATZ0\n");
            Delay::wait(5.0);
          }

          m_sock = new TCPSocket;
          m_sock->connect(m_args.address, m_args.port);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 5, false);
        }

        m_driver = new Driver(this, m_sock);
        m_driver->setLineTermIn("\r\n");
        m_driver->setLineTermOut("\n");
        m_driver->initialize();
      }

      void
      onResourceRelease(void)
      {
        if (m_driver)
        {
          m_driver->stopAndJoin();
          delete m_driver;
          m_driver = NULL;
        }

        Memory::clear(m_sock);
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
      }

      void
      onResourceInitialization(void)
      {
        m_driver->setAddress(m_address);
        m_driver->setSourceLevel(m_args.source_level);
        m_driver->setLowGain(m_args.low_gain);
        m_driver->setRetryCount(m_args.con_retry_count);
        m_driver->setRetryTimeout(m_args.con_retry_tout);
        m_driver->setRetryCountIM(m_args.im_retry_count);
        m_driver->setIdleTimeout(m_args.con_idle_tout);
        m_driver->setHighestAddress(m_args.highest_addr);
        m_driver->setPositionDataOutput(true);
        m_driver->setPromiscuous(true);
        m_driver->setExtendedNotifications(true);
        m_kalive_counter.setTop(m_args.kalive_tout);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      unsigned
      lookupSystemAddress(const std::string& name)
      {
        MapName::iterator itr = m_modem_names.find(name);
        if (itr == m_modem_names.end())
          throw std::runtime_error("unknown system name");
        return itr->second;
      }

      std::string
      lookupSystemName(unsigned addr)
      {
        MapAddr::iterator itr = m_modem_addrs.find(addr);
        if (itr == m_modem_addrs.end())
          throw std::runtime_error("unknown system address");
        return itr->second;
      }

      void
      consume(const IMC::SoundSpeed* msg)
      {
        if ((int)msg->getSourceEntity() != m_sound_speed_eid)
          return;

        if (msg->value < 0)
          return;

        m_sound_speed = msg->value;
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (String::startsWith(msg->value, "RECVIMS"))
          return;
        else if (String::startsWith(msg->value, "RECVIM"))
          handleInstantMessage(msg->value);
        else if (String::startsWith(msg->value, "DELIVEREDIM"))
          handleInstantMessageDelivered(msg->value);
        else if (String::startsWith(msg->value, "CANCELEDIM"))
          handleInstantMessageFailed(msg->value);
        else if (String::startsWith(msg->value, "FAILEDIM"))
          handleInstantMessageFailed(msg->value);
        else if (String::startsWith(msg->value, "SENDEND"))
          handleSendEnd(msg->value);
      }

      void
      clearTicket(IMC::UamTxStatus::ValueEnum reason, const std::string& error = "")
      {
        if (m_ticket != NULL)
        {
          sendTxStatus(*m_ticket, reason, error);
          delete m_ticket;
          m_ticket = NULL;
        }
      }

      void
      replaceTicket(const Ticket& ticket)
      {
        clearTicket(IMC::UamTxStatus::UTS_CANCELED);
        m_ticket = new Ticket(ticket);
      }

      void
      sendTxStatus(const Ticket& ticket, IMC::UamTxStatus::ValueEnum value,
                   const std::string& error = "")
      {
        IMC::UamTxStatus status;
        status.setDestination(ticket.imc_sid);
        status.setDestinationEntity(ticket.imc_eid);
        status.seq = ticket.seq;
        status.value = value;
        status.error = error;
        dispatch(status);
      }

      void
      consume(const IMC::UamTxFrame* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        // Create and fill new ticket.
        Ticket ticket;
        ticket.imc_sid = msg->getSource();
        ticket.imc_eid = msg->getSourceEntity();
        ticket.seq = msg->seq;
        ticket.ack = (msg->flags & IMC::UamTxFrame::UTF_ACK) != 0;

        if (msg->sys_dst == getSystemName())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          return;
        }

        try
        {
          ticket.addr = lookupSystemAddress(msg->sys_dst);
        }
        catch (...)
        {
          war(DTR("invalid system name %s"), msg->sys_dst.c_str());
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_INV_ADDR);
          return;
        }

        // Fail if busy.
        if (m_driver->isBusy())
        {
          sendTxStatus(ticket, IMC::UamTxStatus::UTS_BUSY);
          return;
        }

        // Replace ticket and transmit.
        replaceTicket(ticket);
        sendTxStatus(ticket, IMC::UamTxStatus::UTS_IP);
        m_driver->sendIM((uint8_t*)&msg->data[0], msg->data.size(), ticket.addr, ticket.ack);
        m_kalive_counter.reset();
      }

      void
      handleInstantMessageFailed(const std::string& str)
      {
        (void)str;

        m_driver->setBusy(false);
        clearTicket(IMC::UamTxStatus::UTS_FAILED);
      }

      void
      handleInstantMessageDelivered(const std::string& str)
      {
        //! Query propagation time.
        unsigned dst = 0;
        if (std::sscanf(str.c_str(), "DELIVEREDIM,%u", &dst) == 1)
        {
          try
          {
            double ptime = m_driver->getPropagationTime();
            if (ptime > 0)
            {
              IMC::UamRxRange range;
              range.sys = lookupSystemName(dst);
              range.seq = m_ticket->seq;
              range.value = (ptime * m_sound_speed) / 1000000.0;
              dispatch(range);
            }
          }
          catch (...)
          { }
        }

        m_driver->getMultipathStructure();

        // Clear ticket.
        m_driver->setBusy(false);
        clearTicket(IMC::UamTxStatus::UTS_DONE);
      }

      void
      handleSendEnd(const std::string& str)
      {
        (void)str;

        if (m_ticket == NULL)
          return;

        if (!m_ticket->ack)
        {
          m_driver->setBusy(false);
          clearTicket(IMC::UamTxStatus::UTS_DONE);
        }
      }

      void
      handleInstantMessage(const std::string& str)
      {
        RecvIM reply;
        m_driver->parse(str, reply);

        IMC::UamRxFrame msg;
        msg.data.assign((char*)&reply.data[0], (char*)&reply.data[0] + reply.data.size());

        // Lookup source system name.
        try
        {
          msg.sys_src = lookupSystemName(reply.src);
        }
        catch (...)
        {
          msg.sys_src = "unknown";
        }

        // Lookup destination system name.
        try
        {
          msg.sys_dst = lookupSystemName(reply.dst);
        }
        catch (...)
        {
          msg.sys_dst = "unknown";
        }

        // Fill flags.
        if (m_address != reply.dst)
          msg.flags |= IMC::UamRxFrame::URF_PROMISCUOUS;

        dispatch(msg);

        m_driver->getMultipathStructure();
      }

      void
      keepAlive(void)
      {
        if (m_driver->isBusy())
          return;

        if (m_kalive_counter.overflow())
        {
          m_kalive_counter.reset();

          try
          {
            m_driver->getClock();
          }
          catch (std::runtime_error& e)
          {
            throw RestartNeeded(e.what(), 10.0);
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          keepAlive();
        }
      }
    };
  }
}

DUNE_TASK
