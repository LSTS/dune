//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"

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
    };

    // Type definition for mapping addresses.
    typedef std::map<unsigned, unsigned> AddressMap;
    typedef std::map<std::string, unsigned> MapName;
    typedef std::map<unsigned, std::string> MapAddr;

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
      //! Acoustic operation reply.
      IMC::AcousticOperation m_acop_out;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_sock(NULL),
        m_address(0),
        m_driver(NULL),
        m_sound_speed_eid(-1)
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

        param("Sound Speed - Default Value", m_args.sound_speed_def)
        .units(Units::MeterPerSecond)
        .defaultValue("1500");

        param("Sound Speed - Entity Label", m_args.sound_speed_elabel)
        .description("Entity label of sound speed provider");

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

        bind<IMC::DevDataText>(this);
        bind<IMC::SoundSpeed>(this);
        bind<IMC::AcousticOperation>(this);
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
          inf(DTR("dynamic sound speed corrections are disabled"));
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
        m_sock = new TCPSocket;
        m_sock->connect(m_args.address, m_args.port);
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
        m_driver->setPositionDataOutput(true);

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

        if (String::startsWith(msg->value, "RECVIM"))
          handleInstantMessage(msg->value);
        else if (String::startsWith(msg->value, "DELIVEREDIM"))
          handleInstantMessageDelivered(msg->value);
        else if (String::startsWith(msg->value, "CANCELEDIM"))
          handleInstantMessageFailed(msg->value);
        else if (String::startsWith(msg->value, "FAILEDIM"))
          handleInstantMessageFailed(msg->value);
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {
        unsigned addr = 0;
        try
        {
          addr = lookupSystemAddress(msg->system);
        }
        catch (...)
        {
          err(DTR("address of '%s' is not configured"), msg->system.c_str());
          return;
        }

        if (m_driver->isBusy())
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_BUSY;
          dispatch(m_acop_out);
          return;
        }

        if (msg->op == IMC::AcousticOperation::AOP_RANGE)
        {
          uint8_t data[] = {CODE_RANGE};
          m_driver->sendIM(data, sizeof(data), addr, true);
          m_acop_out.op = IMC::AcousticOperation::AOP_RANGE_IP;
          dispatch(m_acop_out);
        }
        else if (msg->op == IMC::AcousticOperation::AOP_ABORT)
        {
          uint8_t data[] = {CODE_ABORT};
          m_driver->sendIM(data, sizeof(data), addr, true);
          m_acop_out.op = IMC::AcousticOperation::AOP_ABORT_IP;
          dispatch(m_acop_out);
        }
        else
        {
          return;
        }
      }

      void
      handleInstantMessageFailed(const std::string& str)
      {
        (void)str;

        switch (m_acop_out.op)
        {
          case IMC::AcousticOperation::AOP_ABORT_IP:
            m_acop_out.op = IMC::AcousticOperation::AOP_ABORT_TIMEOUT;
            break;

          case IMC::AcousticOperation::AOP_RANGE_IP:
            m_acop_out.op = IMC::AcousticOperation::AOP_RANGE_TIMEOUT;
            break;

          default:
            return;
        }

        dispatch(m_acop_out);
        m_driver->setBusy(false);
      }

      void
      handleInstantMessageDelivered(const std::string& str)
      {
        double range = -1.0;
        unsigned dst = 0;
        if (std::sscanf(str.c_str(), "DELIVEREDIM,%u", &dst) == 1)
        {
          double ptime = m_driver->getPropagationTime();
          if (ptime > 0)
          {
            range = (ptime * m_sound_speed) / 1000000.0;
          }
        }

        m_driver->setBusy(false);

        std::string name;
        try
        {
          name = lookupSystemName(dst);
        }
        catch (...)
        {
          err("unknown address %u", dst);
          return;
        }

        switch (m_acop_out.op)
        {
          case IMC::AcousticOperation::AOP_ABORT_IP:
            m_acop_out.op = IMC::AcousticOperation::AOP_ABORT_ACKED;
            m_acop_out.system = name;
            break;

          case IMC::AcousticOperation::AOP_RANGE_IP:
            m_acop_out.op = IMC::AcousticOperation::AOP_RANGE_RECVED;
            m_acop_out.system = name;
            m_acop_out.range = range;
            break;

          default:
            return;
        }

        dispatch(m_acop_out);
      }

      void
      handleInstantMessage(const std::string& str)
      {
        int offset = 0;
        unsigned src = 0;
        unsigned dst = 0;
        char flag[16] = {0};
        unsigned bitrate = 0;
        float rssi = 0;
        unsigned integrity = 0;
        float velocity = 0;
        float propagation_time = 0;
        std::vector<uint8_t> data;
        size_t data_size = 0;
        unsigned duration = 0;
        int rv = 0;

        if (m_driver->getFirmwareVersion() == "1.6")
        {
          rv = std::sscanf(str.c_str(),
                           "RECVIM,%lu,%u,%u,%[^,],%u,%f,%u,%f,%f,%n",
                           &data_size, &src, &dst, flag, &bitrate,
                           &rssi, &integrity, &propagation_time,
                           &velocity, &offset);

          if (rv != 9)
            return;
        }
        else
        {
          rv = std::sscanf(str.c_str(),
                           "RECVIM,%lu,%u,%u,%[^,],%u,%f,%u,%f,%n",
                           &data_size, &src, &dst, flag, &duration,
                           &rssi, &integrity, &velocity, &offset);

          if (rv != 8)
            return;
        }

        bool ack = std::strcmp(flag, "ack") == 0;

        if (offset >= str.size())
          return;

        data.assign((uint8_t*)&str[offset], (uint8_t*)&str[str.size()]);

        switch (data[0])
        {
          case CODE_RANGE:
            debug("range request received");
            break;
          case CODE_ABORT:
            {
              war(DTR("got abort request"));
              IMC::Abort abort;
              dispatch(abort);
            }
            break;
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
