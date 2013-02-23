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
#include "IO.hpp"
#include "Exceptions.hpp"
#include "SetParameter.hpp"
#include "HardReboot.hpp"
#include "NarrowBandPing.hpp"
#include "Packet.hpp"
#include "MiniPacket.hpp"
#include "MiniPacketPing.hpp"

namespace Transports
{
  namespace Micromodem
  {
    using DUNE_NAMESPACES;

    // Narrow band transponder.
    struct Transponder
    {
      // Query frequency.
      unsigned query_freq;
      // Reply frequency.
      unsigned reply_freq;
      // Abort frequency.
      unsigned abort_freq;

      Transponder(unsigned q, unsigned r, unsigned a):
        query_freq(q),
        reply_freq(r),
        abort_freq(a)
      { }
    };

    // Task arguments.
    struct Arguments
    {
      // UART device.
      std::string uart_dev;
      // UART baud rate.
      unsigned uart_baud;
      // Sound speed on water.
      double sspeed;
      //! Entity label of the sound speed provider.
      std::string sound_speed_elabel;
      // Narrow band ping timeout.
      double tout_nbping;
      // Micro-Modem ping timeout.
      double tout_mmping;
      // Input timeout.
      double tout_input;
      // GPIO to detect if transducer is connected.
      int gpio_txd;
      // Entity Label.
      std::string entity_label;
      // Length of transmit pings.
      unsigned tx_length;
      // Length of receive pings.
      unsigned rx_length;
      //! Narrow band transponders turn around time.
      unsigned turn_around_time;
    };

    // Type definition for mapping addresses.
    typedef std::map<unsigned, unsigned> AddressMap;
    typedef std::map<std::string, Transponder> NarrowBandMap;
    typedef std::map<std::string, unsigned> MicroModemMap;

    struct Task: public DUNE::Tasks::Task
    {
      // Map of narrow band transponders.
      NarrowBandMap m_nbmap;
      // Map of micro-modem addresses.
      MicroModemMap m_ummap;
      // Map of micro-modem to IMC addresses.
      AddressMap m_mimap;
      // Map of IMC to Micro-Modem addresses.
      AddressMap m_immap;
      // Task arguments.
      Arguments m_args;
      // Local modem-address.
      unsigned m_address;
      // Transducer detection GPIO.
      GPIO* m_txd_gpio;
      IO* m_io;
      Transaction* m_transaction;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_txd_gpio(NULL),
        m_io(NULL),
        m_transaction(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the modem");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Sound Speed - Default Value", m_args.sspeed)
        .units(Units::MeterPerSecond)
        .defaultValue("1500");

        param("Sound Speed - Entity Label", m_args.sound_speed_elabel)
        .description("Entity label of sound speed provider");

        param("Timeout - Input", m_args.tout_input)
        .units(Units::Second)
        .defaultValue("20.0");

        param("GPIO - Transducer Detection", m_args.gpio_txd)
        .defaultValue("-1");

        param("Narrow Band Ping - Timeout", m_args.tout_nbping)
        .units(Units::Second)
        .defaultValue("5.0");

        param("Narrow Band Ping - Turn Around Time", m_args.turn_around_time)
        .units(Units::Millisecond)
        .defaultValue("20");

        param("Narrow Band Ping - Length of Transmit Ping", m_args.tx_length)
        .units(Units::Millisecond)
        .defaultValue("5");

        param("Narrow Band Ping - Length of Receive Ping", m_args.rx_length)
        .units(Units::Millisecond)
        .defaultValue("5");

        param("Mini-Packet Ping - Timeout", m_args.tout_mmping)
        .units(Units::Second)
        .defaultValue("5.0");

        // Process micro-modem addresses.
        std::string agent = getSystemName();
        std::vector<std::string> addrs = ctx.config.options("uModem Addresses");
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned iid = resolveSystemName(addrs[i]);
          unsigned mid = 0;
          ctx.config.get("uModem Addresses", addrs[i], "0", mid);
          m_mimap[mid] = iid;
          m_immap[iid] = mid;
          m_ummap[addrs[i]] = mid;

          if (addrs[i] == agent)
            m_address = mid;
        }

        // Process narrow band transponders.
        std::vector<std::string> txponders = ctx.config.options("Narrow Band Frequencies");
        for (unsigned i = 0; i < txponders.size(); ++i)
        {
          std::vector<unsigned> freqs;
          ctx.config.get("Narrow Band Frequencies", txponders[i], "", freqs);
          if (freqs.size() == 2)
            freqs.push_back(0);
          m_nbmap.insert(std::make_pair(txponders[i], Transponder(freqs[0], freqs[1], freqs[2])));
        }

        // Register message handlers.
        bind<IMC::AcousticOperation>(this);
        bind<IMC::DevDataText>(this);
        bind<IMC::AcousticPing>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_io = new IO(*this, m_args.uart_dev, m_args.uart_baud);
        m_io->start();
      }

      void
      onResourceRelease(void)
      {
        clearTransaction();

        if (m_io != NULL)
        {
          m_io->stopAndJoin();
          delete m_io;
          m_io = NULL;
        }
      }

      void
      onResourceInitialization(void)
      {
        try
        {
          execute(new SetParameter("REV", 1));
          execute(new SetParameter("XST", 0));
          execute(new SetParameter("CST", 0));
          execute(new SetParameter("DQF", 0));
          execute(new SetParameter("NRV", 0));
          execute(new SetParameter("TXP", 1));
          execute(new SetParameter("TXF", 1));
          execute(new SetParameter("TAT", m_args.turn_around_time));
          execute(new SetParameter("SRC", m_address));
          execute(new HardReboot(m_address));

          inf("setup complete");
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 5);
        }
      }

      void
      execute(Transaction* txn)
      {
        startTransaction(txn);
        while (!stopping() && !txn->ended())
        {
          waitForMessages(1.0);
        }

        if (txn->failed())
          throw std::runtime_error("failed");
      }

      bool
      transactionPending(void)
      {
        return m_transaction != NULL;
      }

      void
      updateTransaction(const std::string& stn)
      {
        if (m_transaction == NULL)
          return;

        try
        {
          m_transaction->update(m_io, stn);
          return;
        }
        catch (TransactionAborted& e)
        {
          err("%s", e.what());
        }

        clearTransaction();
      }

      void
      clearTransaction(void)
      {
        if (m_transaction != NULL)
        {
          delete m_transaction;
          m_transaction = NULL;
        }
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {
        (void)msg;
        // switch (msg->op)
        // {
        //   case IMC::AcousticOperation::ACOP_RANGE:

        //     break;

        //   case IMC::AcousticOperation::ACOP_MSG:
        //     break;
        // }
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getSourceEntity() != getEntityId())
          return;

        if (String::startsWith(msg->value, "CAMUA"))
          decodeMiniPacket(msg->value);
        else if (String::startsWith(msg->value, "CARXD"))
          decodePacket(msg->value);
        else if (transactionPending())
          updateTransaction(msg->value);
      }

      void
      consume(const IMC::AcousticPing* msg)
      {
        (void)msg;

        std::vector<char> d;
        for (unsigned i = 0; i < 16; ++i)
          d.push_back(i);

        startTransaction(new Packet(m_address, 7, d));
      }

      void
      decodePacket(const std::string& stn)
      {
        unsigned src = 0;
        unsigned dst = 0;
        unsigned ack = 0;
        unsigned fnr = 0;
        char data[64] = {0};

        if (std::sscanf(stn.c_str(), "CARXD,%u,%u,%u,%u,%s", &src, &dst, &ack, &fnr, data) == 5)
        {
          war("packet from %u to %u with data %s", src, dst, data);
        }
      }

      void
      decodeMiniPacket(const std::string& stn)
      {
        unsigned src = 0;
        unsigned dst = 0;
        unsigned data = 0;

        if (std::sscanf(stn.c_str(), "CAMUA,%u,%u,%04X", &src, &dst, &data) == 3)
        {
          inf("mini packet from %u with data %04X", src, data);
        }
      }

      void
      processPingMiniPacketReply(const std::string& str)
      {
        unsigned src = 0;
        unsigned dst = 0;
        double time = 0;

        int rv = std::sscanf(str.c_str(), "CAMPR,%u,%u,%lf", &src, &dst, &time);
        if (rv != 3)
          return;

        inf("distance is %f", time);

        //        double distance = time * m_sound_speed;
      }

      bool
      processNarrowBandTimes(const std::string& sentence)
      {
        inf("NBT %s", sentence.c_str());
        return true;
      }

      void
      startTransaction(Transaction* txn)
      {
        m_transaction = txn;
        m_transaction->start(m_io);
      }

      void
      onMain(void)
      {
        //startTransaction(new MiniPacket(m_address, 13, 0x0a));
        //startTransaction(new MiniPacketPing(m_address, 7));

        // NarrowBandPing* txn = new NarrowBandPing;
        // txn->setTransmitFrequency(26000);
        // txn->setTransmitLength(5);
        // txn->setReceiveLength(5);
        // txn->setReceiveTimeout(1000);
        // std::vector<unsigned> freqs;
        // freqs.push_back(24000);
        // txn->setReceiveFrequencies(freqs);
        // startTransaction(txn);

         while (!stopping())
        {
          waitForMessages(1.0);

          if (!transactionPending())
            continue;

          if (m_transaction->ended())
          {
            if (m_transaction->failed())
              err("transaction failed");
            else
              war("transaction completed");

            clearTransaction();
          }


          // if (getState() == ST_IDLE)
          // {
          //   Transaction txn;
          //   txn.type = TXN_NARROW_BAND_PING;
          //   txn.txn.ping_narrow.ftx = 26000;
          //   txn.txn.ping_narrow.trx = 5;
          //   txn.txn.ping_narrow.ttx = 5;
          //   txn.txn.ping_narrow.timeout = 1000;
          //   txn.txn.ping_narrow.fa = 24000;
          //   txn.txn.ping_narrow.fb = 27000;
          //   txn.txn.ping_narrow.fc = 28000;
          //   txn.txn.ping_narrow.fd = 29000;
          //   executeTransaction(txn);
          // }

          // if (!isBusy())
          //   continue;

          // if (m_target_state_wdog.overflow())
          // {
          //   err("failed to transition to %s", c_state_names[m_target_state]);
          //   setState(ST_IDLE);
          //   setTargetState(ST_LAST);
          // }
        }
      }
    };
  }
}

DUNE_TASK
