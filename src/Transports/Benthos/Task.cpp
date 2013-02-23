//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
//***************************************************************************

// ISO C++ 98 headers
#include <iomanip>
#include <iostream>
#include <fstream>
#include <set>
#include <map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "HardwareDriver.hpp"
#include "SimulationDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    using DUNE_NAMESPACES;

    static const int c_abort_repetitions = 3;

    struct Arguments
    {
      bool compression;
      bool gateway;

      Configuration mcfg;

      struct
      {
        double period;
        std::vector<std::string> slots;
        bool dadj;
      } tdma;

      std::vector<std::string> transports;
      std::vector<std::string> inc_filter;
    };

    struct Task: public DUNE::Tasks::Task
    {
      // Arguments
      Arguments m_args;
      // Messsage key datum.
      typedef uint64_t MKey;
      // Queued message datum (one by message type allowed).
      typedef std::map<MKey, IMC::Message*> MQueue;
      // Incoming message filter.
      std::set<uint32_t> m_allow;
      // Value to denote no range request has been issued.
      static const uint8_t c_no_range_req = 255;
      // Driver handle.
      AbstractDriver* m_driver;
      // Buffer for data operations.
      ByteBuffer m_data;
      // Queued messages.
      MQueue m_queued;
      // Range request issue flag (contains address if defined, 255 otherwise).
      uint8_t m_range_request;
      // Local IMC address.
      uint16_t m_local_imc_addr;

      IMC::EstimatedState m_estate;
      IMC::RemoteState m_rstate;
      IMC::AcousticOperation m_reply;

      // TDMA related data.
      typedef std::map<int, int> SlotMap;
      struct
      {
        int period;
        int n_slots;
        int slot_duration;
        int my_slot;
        double next_slot;
        SlotMap addr2slot;
      } m_tdma;

      // Compression related data.
      struct
      {
        ByteBuffer buf; // Buffer for data compression operations.
        ZlibCompressor zc; // Compressor handle.
        ZlibDecompressor zd; // Decompressor handle.
      } m_compr;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_driver(NULL),
        m_data(2048),
        m_range_request(c_no_range_req),
        m_local_imc_addr(getSystemId())
      {
        param("Use Compression", m_args.compression)
        .defaultValue("true")
        .description("Enable use of compression");

        param("Act As Gateway", m_args.gateway)
        .defaultValue("false")
        .description("Act as gateway");

        param("Transports", m_args.transports)
        .defaultValue("")
        .description("Messages to transport");

        param("Allow Incoming Messages", m_args.inc_filter)
        .defaultValue("")
        .description("Allowed incoming messages (any others will be filtered out)");

        param("Modem - Serial Port Device", m_args.mcfg.uart_device)
        .defaultValue("/dev/ttyS0")
        .description("Serial port device (Hardware profile)");

        param("Modem - Serial Port Baud Rate", m_args.mcfg.uart_brate)
        .defaultValue("9600")
        .description("Serial port baud rate (Hardware profile)");

        param("Modem - Address", m_args.mcfg.address)
        .defaultValue(DUNE::uncastLexical(c_default_modem_address))
        .description("Modem address (use the same for all modems in the network)");

        param("Modem - Acoustic Data Rate", m_args.mcfg.acoustic_baud_rate)
        .units(Units::BitPerSecond)
        .defaultValue(DUNE::uncastLexical(c_default_abrate))
        .description("Modem - Acoustic data rate");

        param("Modem - Transmit Power", m_args.mcfg.transmit_power)
        .defaultValue(DUNE::uncastLexical(c_default_transmit_power))
        .description("Modem - Transmission power");

        param("Modem - Forwarding Delay", m_args.mcfg.forwarding_delay)
        .units(Units::Millisecond)
        .defaultValue(DUNE::uncastLexical(c_default_forwarding_delay))
        .description("Forwarding delay");

        // TDMA configuration
        param("TDMA - Period", m_args.tdma.period)
        .defaultValue("30")
        .minimumValue("10")
        .maximumValue("60")
        .description("TDMA window period");

        param("TDMA - Slots", m_args.tdma.slots)
        .defaultValue("")
        .description("TDMA slots (node name / slot pairs)");

        param("TDMA - Dynamic Adjustment", m_args.tdma.dadj)
        .defaultValue("false")
        .description("Adjust TDMA slots dynamically (use in networks with unsync. clocks)");
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_driver);
      }

      void
      onUpdateParameters(void)
      {
        bind(this, m_args.transports);

        if (m_args.gateway)
        {
          bind<IMC::AcousticOperation>(this);
        }
        else
        {
          bind<IMC::EstimatedState>(this);
          m_allow.clear();
          for (unsigned int i = 0; i < m_args.inc_filter.size(); ++i)
            m_allow.insert(IMC::Factory::getIdFromAbbrev(m_args.inc_filter[i]));
        }

        // TDMA setup
        m_tdma.n_slots = 0;
        m_tdma.addr2slot.clear();
        for (unsigned int i = 0; i < m_args.tdma.slots.size(); ++i)
        {
          std::vector<std::string> vspair;
          int slot;
          String::split(m_args.tdma.slots[i], "/", vspair);

          if (vspair.size() != 2 || std::sscanf(vspair[1].c_str(), "%d", &slot) != 1)
            throw std::runtime_error("invalid TDMA slot configuration");

          m_tdma.addr2slot[resolveSystemName(vspair[0])] = slot;
          m_tdma.n_slots = std::max(slot + 1, m_tdma.n_slots);
          inf("%s -- %s = %d", DTR("TDMA slot"), vspair[0].c_str(), slot);
        }

        SlotMap::iterator itr = m_tdma.addr2slot.find(m_local_imc_addr);

        if (itr == m_tdma.addr2slot.end())
          throw std::runtime_error("invalid TDMA slot configuration");

        m_tdma.my_slot = itr->second;
        m_tdma.slot_duration = (int)(m_args.tdma.period / m_tdma.n_slots);

        setupCommTime();

        // Misc. setup
        m_compr.buf.setSize(2048);
      }

      void
      onResourceAcquisition(void)
      {
        if (m_ctx.profiles.isSelected("HILSimulation") || m_ctx.profiles.isSelected("Hardware"))
        {
          m_driver = new HardwareDriver(m_args.mcfg);
        }
        else
        {
          m_driver = new SimulationDriver(m_args.mcfg, m_ctx.mbus);
          bind<IMC::UASimulation>(this);
        }
      }

      void
      onEntityReservation(void)
      {
        if (m_args.gateway)
        {
          IMC::AnnounceService announce;
          announce.service = std::string("imc+any://acoustic/operation/") + URL::encode(getEntityLabel());
          dispatch(announce);
        }
      }

      void
      setupCommTime(void)
      {
        double now_epoch = Clock::getSinceEpoch();
        double next_slot_epoch =
        now_epoch + m_args.tdma.period - std::fmod(now_epoch, m_args.tdma.period) + m_tdma.my_slot * m_tdma.slot_duration;
        double delta = next_slot_epoch - now_epoch;

        m_tdma.next_slot = Clock::get() + delta;

        inf("%s | %s = %f s | %s = %d s | %s = %d | %s = %d | %s %f s",
            DTR("TDMA slots"), DTR("period"), m_args.tdma.period,
            DTR("duration"), m_tdma.slot_duration,
            DTR("total slots"), m_tdma.n_slots,
            DTR("my slot"), m_tdma.my_slot,
            DTR("next slot in"), delta);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
      }

      void
      consume(const IMC::UASimulation* msg)
      {
        if (msg->getSource() == m_local_imc_addr)
          return;

        m_driver->onNotification(msg);
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {
        uint16_t dst = resolveSystemName(msg->system);

        if (!IMC::AddressResolver::isValid(dst))
        {
          err("%s '%s'", DTR("unknown system"), msg->system.c_str());
          m_reply.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
        }
        else
          switch (msg->op)
          {
            case IMC::AcousticOperation::AOP_ABORT:
              {
                inf("%s '%s'", DTR("handling abort to"), msg->system.c_str());
                IMC::Abort ab;
                ab.setTimeStamp(msg->getTimeStamp());
                ab.setSource(m_local_imc_addr);
                ab.setDestination(dst);
                consume(&ab);
                m_reply.op = IMC::AcousticOperation::AOP_ABORT_IP;
                break;
              }
            case IMC::AcousticOperation::AOP_RANGE:
              {
                inf("%s, '%s'", DTR("handling range request to"), msg->system.c_str());
                m_range_request = m_driver->config().address;
                m_reply.op = IMC::AcousticOperation::AOP_RANGE_IP;
                break;
              }
            case IMC::AcousticOperation::AOP_MSG:
              {
                inf("%s %s %s '%s'", DTR("queuing"), msg->msg.get()->getName(), DTR("para"), msg->system.c_str());
                m_reply.op = IMC::AcousticOperation::AOP_MSG_QUEUED;
                queue(msg->msg.get(), dst);
                break;
              }
            default:
              m_reply.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
          }

        m_reply.system = msg->system;
        dispatch(m_reply);
      }

      void
      consume(const IMC::Abort* msg)
      {
        int len = msg->getSerializationSize();
        m_data.setSize(len);
        uint8_t* buf = m_data.getBuffer();
        IMC::Packet::serialize(msg, buf, len);

        for (int i = 0; i < c_abort_repetitions; ++i)
        {
          inf("%s %0.2f s", "sending Abort -- this will take ",  m_driver->txOverhead(len));

          if (!m_driver->send((char*)buf, len))
          {
            err("%s", DTR("error sending data"));
            break;
          }

          Delay::wait(0.1);
        }
      }

      void
      consume(const IMC::Message* msg)
      {
        queue(msg);
      }

      void
      queue(const IMC::Message* msg, uint16_t dst = 0xffff)
      {
        const IMC::Message* imsg = dynamic_cast<const IMC::Message*>(msg);

        if (!imsg)
        {
          inf("%s", DTR(Status::getString(Status::CODE_INTERNAL_ERROR)));
          return;
        }

        MKey key;

        key = ((uint64_t)imsg->getId()) << 48;

        if (dst == 0xffff)
          dst = imsg->getDestination();

        key |= ((uint64_t)dst) << 32;
        key |= ((uint64_t)imsg->getSourceEntity()) << 24;
        key |= ((uint64_t)imsg->getDestinationEntity()) << 16;
        key |= (uint64_t)imsg->getSubId();

        //printf("%s %016LX\n",msg->getName(),  key);

        IMC::Message*& prev = m_queued[key];

        if (prev)
          delete prev;

        prev = msg->clone();
        prev->setDestination(dst);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          // Consume all available messages
          waitForMessages(0.1);

          // Handle range request, if any
          handleRangeRequest();

          // Check for incoming messages
          checkForIncomingData();

          // Send queued messages if any
          sendQueuedMessages();
        }
      }

      void
      handleRangeRequest(void)
      {
        // Note: range request may be issued over the bus
        // via IMC::AcousticRange or automatically via m_range_on_recv flag.
        if (m_range_request == c_no_range_req)
          return;

        int a = m_range_request;
        m_range_request = c_no_range_req;

        // Send range request and wait for modem reply
        IMC::AcousticRangeReply reply;
        reply.address = a;
        reply.range = 0;

        inf("%s %d", DTR("RANGE: Issuing request - modem"), a);

        if (m_driver->range(a, &reply.range))
        {
          reply.status = IMC::AcousticRangeReply::RNG_OK;
          inf("%s: %f %s", DTR("RANGE"), reply.range, DTR("meters"));
        }
        else
        {
          reply.status = IMC::AcousticRangeReply::RNG_NO_RESPONSE;
          inf("%s", DTR("RANGE: No response"));
        }

        dispatch(reply);
      }

      void
      sendQueuedMessages(void)
      {
        double now = Clock::get();

        if (now < m_tdma.next_slot)
          return;

        m_tdma.next_slot += m_args.tdma.period;

        uint16_t slen = 0;

        if (!m_args.gateway)
        {
          double rlat, rlon;
          m_rstate.setSource(m_local_imc_addr);
          m_rstate.setTimeStamp();
          m_rstate.depth = (uint8_t)Math::round(m_estate.depth);
          m_rstate.speed = m_estate.u;
          m_rstate.psi = m_estate.psi;
          rlat = m_estate.lat;
          rlon = m_estate.lon;

          Coordinates::toWGS84(m_estate, rlat, rlon);

          m_rstate.lat = (fp32_t)rlat;
          m_rstate.lon = (fp32_t)rlon;

          slen = m_rstate.getSerializationSize();
          m_data.setSize(slen);
          IMC::Packet::serialize(&m_rstate, m_data.getBuffer(), slen);

          inf(DTR("sending message to %s (length %u)"),
              m_rstate.getName(), slen);
        }
        else if (!m_queued.size())
        {
          IMC::Heartbeat hb;
          hb.setSource(m_local_imc_addr);
          hb.setTimeStamp();
          slen = hb.getSerializationSize();
          m_data.setSize(slen);
          IMC::Packet::serialize(&hb, m_data.getBuffer(), slen);
          inf(DTR("sending hearbeat to %s (length %u)"),
              hb.getName(), slen);
        }

        for (MQueue::iterator it = m_queued.begin(); it != m_queued.end(); ++it)
        {
          IMC::Message* msg = it->second;
          uint16_t mlen = msg->getSerializationSize();

          inf(DTR("sending message '%s' (length %u)"), msg->getName(), mlen);

          m_data.setSize(slen + mlen);
          IMC::Packet::serialize(msg, m_data.getBuffer() + slen, mlen);
          slen += mlen;

          delete msg;
        }
        m_queued.clear();

        inf(DTR("total %u"), slen);

        char* sbuf = (char*)m_data.getBuffer();

        if (m_args.compression)
        {
          try
          {
            m_compr.zc.compress(m_compr.buf, m_data);

            if (slen > m_compr.buf.getSize())
            {
              sbuf = m_compr.buf.getBufferSigned();
              slen = m_compr.buf.getSize();
              inf(DTR("compressed %u"), slen);
            }
          }
          catch (std::exception& e)
          {
            war(DTR("error compressing data: %s"), e.what());
            return;
          }
        }

        inf(DTR("time %0.1f"), m_driver->txOverhead(slen));

        if (!m_driver->send(sbuf, slen))
        {
          war(DTR("error sending data"));
          return;
        }
      }

      void
      checkForIncomingData(void)
      {
        char* rbuf = (char*)m_data.getBuffer();
        uint16_t rlen = m_data.getCapacity();

        if (!m_driver->receive(rbuf, &rlen, 0.1))
          return;

        inf(DTR("incoming data (length %u)"), rlen);

        uint16_t sync = 0;

        if (rlen >= 2)
        {
          std::memcpy(&sync, rbuf, sizeof(sync));
        }
        else
        {
          err(DTR("packet too short"));
          return;
        }

        m_data.setSize(rlen);

        if (m_args.compression && sync != DUNE_IMC_CONST_SYNC && sync != DUNE_IMC_CONST_SYNC_REV)
        {
          // Possibly compressed data, try to decompress ...
          try
          {
            m_compr.buf.setSize(rlen * 10);  // @todo smart way ? ...
            m_compr.zd.decompress(m_compr.buf, m_data);
            rbuf = m_compr.buf.getBufferSigned();
            rlen = m_compr.buf.getSize();
            inf(DTR("uncompressed %u"), rlen);
          }
          catch (std::exception& e)
          {
            war(DTR("corrupt data -- %s"), e.what());
            return;
          }
        }

        uint16_t pos = 0;

        uint16_t sender_src = 0xFFFF;
        double sender_dist = 1000;
        bool got_abort = false;

        while (pos < rlen)
        {
          try
          {
            IMC::Message* msg = IMC::Packet::deserialize((uint8_t*)rbuf + pos, rlen - pos);
            uint16_t mlen = msg->getSerializationSize();
            pos += mlen;

            std::string sname = resolveSystemId(msg->getSource());
            std::string dname = resolveSystemId(msg->getDestination());

            // Dispatch to bus
            if (!m_args.gateway && msg->getDestination() != m_local_imc_addr && m_allow.find(msg->getId()) == m_allow.end())
              inf(DTR("discarded"));
            else
              dispatch(msg, DF_KEEP_TIME);

            sender_src = msg->getSource();

            if (!m_args.gateway)
            {
              if (msg->getId() == DUNE_IMC_REMOTESTATE)
              {
                double x, y;
                IMC::RemoteState* rstate = dynamic_cast<IMC::RemoteState*>(msg);
                WGS84::displacement(m_estate.lat, m_estate.lon, 0, rstate->lat, rstate->lon, 0, &x, &y);
                x -= m_estate.x;
                y -= m_estate.y;
                sender_dist = Math::norm(x, y);
              }
              else if (msg->getId() == DUNE_IMC_ABORT)
              {
                got_abort = true;
              }
            }
            delete msg;
          }
          catch (std::exception& e)
          {
            inf(DTR("corrupt data -- %s"), e.what());
            break;
          }
        }

        if (m_args.tdma.dadj && sender_src != 0xFFFF && !got_abort)
        {
          double delta = m_driver->totalOverhead(sender_dist, rlen);

          int sender_slot = m_tdma.addr2slot[sender_src];
          int slot_diff;

          if (sender_slot < m_tdma.my_slot)
            slot_diff = m_tdma.my_slot - sender_slot;
          else
            slot_diff = m_tdma.n_slots - sender_slot + m_tdma.my_slot;

          double now = Clock::get();
          double new_time = now - delta + slot_diff * m_tdma.slot_duration;
          double dev_estimate = new_time - m_tdma.next_slot;

          inf(DTR("clock dev. estimate: %0.2f s, %0.2f, %0.2f"),
              dev_estimate, sender_dist, delta);

          if (std::fabs(dev_estimate) <= m_args.tdma.period && new_time >= now)
          {
            inf(DTR("adjusted"));
            m_tdma.next_slot = new_time;
          }
        }
      }
    };
  }
}

DUNE_TASK
