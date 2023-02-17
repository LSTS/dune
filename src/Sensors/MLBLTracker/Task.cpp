//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************
//
// The format of a quick tracking message is:
// +----+----+----+----+----+----+----+----+----+----+----+----+----+
// | 0  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 | 9  | 10 | 11 | 12 |
// +----+----+----+----+----+----+----+----+----+----+----+----+----+
// |                   Range                         | Beacon  |  1 |
// +----+----+----+----+----+----+----+----+----+----+----+----+----+
//

// ISO C++ 98 headers.
#include <vector>
#include <memory>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace MLBLTracker
  {
    using DUNE_NAMESPACES;

    // Abort code.
    static const unsigned c_code_abort = 0x000a;
    // Abort acked code.
    static const unsigned c_code_abort_ack = 0x000b;
    //! Start plan acknowledge code.
    static const unsigned c_code_plan_ack = 0x000c;
    // Quick tracking mask.
    static const unsigned c_mask_qtrack = 0x1000;
    // Quick tracking beacon mask.
    static const unsigned c_mask_qtrack_beacon = 0x0c00;
    // Quick tracking range mask.
    static const unsigned c_mask_qtrack_range = 0x03ff;
    // Maximum buffer size.
    static const int c_bfr_size = 256;
    // Acoustic Report code.
    static const uint8_t c_code_report = 0x1;
    // Start plan code.
    static const uint8_t c_code_plan = 0x2;
    // Reverse range code.
    static const uint8_t c_code_reverse_range = 0x3;
    // Binary message size.
    static const uint8_t c_binary_size = 32;

    enum Operation
    {
      // No operation is in progress.
      OP_NONE,
      // Narrow band pinging in progress.
      OP_PING_NB,
      // Micro-Modem pinging in progress.
      OP_PING_MM,
      // Abort in progress.
      OP_ABORT
    };

    // Narrow band transponder.
    struct Transponder
    {
      // Query frequency.
      unsigned query_freq;
      // Reply frequency.
      unsigned reply_freq;

      Transponder(unsigned q, unsigned r):
        query_freq(q),
        reply_freq(r)
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
      // Narrow band ping timeout.
      unsigned tout_nbping;
      // Micro-Modem ping timeout.
      double tout_mmping;
      // Abort timeout.
      double tout_abort;
      // Input timeout.
      double tout_input;
      // GPIO to detect if transducer is connected.
      int gpio_txd;
      // Length of transmit pings.
      unsigned tx_length;
      // Length of receive pings.
      unsigned rx_length;
      //! Name of the section with modem addresses.
      std::string addr_section;
      //! Navigation turn around time.
      unsigned turn_around_time;
    };

    // Type definition for mapping addresses.
    typedef std::map<unsigned, unsigned> AddressMap;
    typedef std::map<std::string, Transponder> NarrowBandMap;
    typedef std::map<std::string, unsigned> MicroModemMap;

    struct Task: public DUNE::Tasks::Task
    {
      // Serial port handle.
      IO::Handle* m_handle;
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
      // Timestamp of last operation.
      double m_op_deadline;
      // Local modem-address.
      unsigned m_address;
      // Last acoustic operation.
      IMC::AcousticOperation m_acop;
      // Outgoing acoustic operation.
      IMC::AcousticOperation m_acop_out;
      // Save modem commands.
      IMC::DevDataText m_dev_data;
      // Saved Plan Control.
      IMC::PlanControl* m_pc;
      // Current operation.
      Operation m_op;
      // Transducer detection GPIO.
      GPIO* m_gpio_txd;
      // Time of last sentence from modem.
      Counter<double> m_last_stn;
      // Ignore GPIO;
      bool m_ignore_gpio;
      //! Current line.
      std::string m_line;
      // System position
      IMC::EstimatedState *m_estate;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_handle(NULL),
        m_op_deadline(-1.0),
        m_pc(NULL),
        m_op(OP_NONE),
        m_gpio_txd(NULL),
        m_estate(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Length of Transmit Pings", m_args.tx_length)
        .units(Units::Millisecond)
        .defaultValue("5")
        .minimumValue("0");

        param("Length of Receive Pings", m_args.rx_length)
        .units(Units::Millisecond)
        .defaultValue("5")
        .minimumValue("0");

        param("Sound Speed on Water", m_args.sspeed)
        .defaultValue("1500")
        .minimumValue("1375")
        .maximumValue("1900")
        .units(Units::MeterPerSecond)
        .description("Water sound speed");

        param("Turn Around Time", m_args.turn_around_time)
        .units(Units::Millisecond)
        .defaultValue("20")
        .minimumValue("0");

        param("Timeout - Micro-Modem Ping", m_args.tout_mmping)
        .units(Units::Second)
        .defaultValue("5.0")
        .minimumValue("0");

        param("Timeout - Narrow Band Ping", m_args.tout_nbping)
        .units(Units::Second)
        .defaultValue("5.0")
        .minimumValue("0");

        param("Timeout - Abort", m_args.tout_abort)
        .units(Units::Second)
        .defaultValue("5.0")
        .minimumValue("0");

        param("Timeout - Input", m_args.tout_input)
        .units(Units::Second)
        .defaultValue("20.0")
        .minimumValue("0");

        param("GPIO - Transducer Detection", m_args.gpio_txd)
        .defaultValue("-1");

        param("Address Section", m_args.addr_section)
        .defaultValue("Micromodem Addresses")
        .description("Name of the configuration section with modem addresses");

        // Process narrow band transponders.
        std::vector<std::string> txponders = ctx.config.options("Narrow Band Transponders");
        for (unsigned i = 0; i < txponders.size(); ++i)
        {
          std::vector<unsigned> freqs;
          ctx.config.get("Narrow Band Transponders", txponders[i], "", freqs);
          m_nbmap.insert(std::make_pair(txponders[i], Transponder(freqs[0], freqs[1])));
        }

        m_ignore_gpio = false;

        // Register message handlers.
        bind<IMC::AcousticOperation>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::AcousticSystemsQuery>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onUpdateParameters(void)
      {
        if ((m_gpio_txd != NULL) && paramChanged(m_args.gpio_txd) && !m_ignore_gpio)
          throw RestartNeeded(DTR("restarting to change transducer detection GPIO"), 1);

        // Process micro-modem addresses.
        m_mimap.clear();
        m_immap.clear();
        m_ummap.clear();
        std::string agent = getSystemName();
        std::vector<std::string> addrs = m_ctx.config.options(m_args.addr_section);
        for (unsigned i = 0; i < addrs.size(); ++i)
        {
          unsigned iid = resolveSystemName(addrs[i]);
          unsigned mid = 0;
          m_ctx.config.get(m_args.addr_section, addrs[i], "0", mid);
          m_mimap[mid] = iid;
          m_immap[iid] = mid;
          m_ummap[addrs[i]] = mid;

          if (addrs[i] == agent)
            m_address = mid;
        }

        // Input timeout.
        if (paramChanged(m_args.tout_input))
          m_last_stn.setTop(m_args.tout_input);
      }

      void
      onResourceAcquisition(void)
      {
        // Configure transducer GPIO (if any).
        if (m_args.gpio_txd > 0)
        {
          try
          {
            m_gpio_txd = new GPIO((unsigned)m_args.gpio_txd);
            m_gpio_txd->setDirection(GPIO::GPIO_DIR_INPUT);
          }
          catch (...)
          {
            err(DTR("unable to use GPIO %d for transducer detection"), m_args.gpio_txd);
          }
        }

        try
        {
          if (!openSocket())
          {
             SerialPort* port = new SerialPort(m_args.uart_dev, m_args.uart_baud);
             port->setCanonicalInput(true);
             port->flush();
             m_handle = port;
           }
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }

        // Set unit number.
        configureModem("CCCFG", "SRC", m_address);
        // Transmit stats messages.
        configureModem("CCCFG", "XST", 0);
        // Cycle-init timeout time.
        configureModem("CCCFG", "CTO", 10);
        // Navigation turn around time.
        configureModem("CCCFG", "TAT", m_args.turn_around_time);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Check if we have a TCP socket as device input argument.
      //! @return true if it is a TCP socket, false otherwise.
      bool
      openSocket(void)
      {
        char addr[128] = {0};
        unsigned port = 0;

        if (std::sscanf(m_args.uart_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return false;

        m_ignore_gpio = true;

        TCPSocket* sock = new TCPSocket;
        sock->connect(addr, port);
        m_handle = sock;
        return true;
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_pc);
        Memory::clear(m_gpio_txd);
        Memory::clear(m_handle);
      }

      void
      onResourceInitialization(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://acoustic/operation/")
        + URL::encode(getEntityLabel());
        dispatch(announce);
      }

      void
      consume(const IMC::AcousticSystemsQuery* msg)
      {
        if (m_args.addr_section.empty())
        {
          war("Modem address section was not properly set.");
          return;
        }
        AcousticSystems reply;
        std::vector<std::string> options = m_ctx.config.options(m_args.addr_section);
        options.erase(std::remove(options.begin(), options.end(), m_ctx.resolver.name()), options.end());
        reply.list = String::join(options.begin(), options.end(), ",");
        dispatchReply(*msg, reply);
      }

      void
      resetOp(void)
      {
        m_op = OP_NONE;
        m_op_deadline = -1.0;
      }

      bool
      hasTransducer(void)
      {
        if (m_ignore_gpio)
          return true;

        if (m_gpio_txd == NULL)
          return true;

        if (m_gpio_txd->getValue() == false)
          return true;

        err("%s", DTR("transducer not connected"));
        return false;
      }

      //! Send and log command.
      //! @param[in] cmd command to be sent.
      void
      sendCommand(const std::string& cmd)
      {
        inf("%s", sanitize(cmd).c_str());
        m_handle->writeString(cmd.c_str());
        m_dev_data.value.assign(sanitize(cmd));
        dispatch(m_dev_data);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        Memory::replace(m_estate, new IMC::EstimatedState(*msg));
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {
        if (m_op != OP_NONE)
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_BUSY;
          dispatch(m_acop_out);
          return;
        }

        m_acop = *msg;

        // check if we have a transducer connected.
        if (!hasTransducer())
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_NO_TXD;
          m_acop_out.system = msg->system;
          dispatch(m_acop_out);
          return;
        }

        // check desired operation.
        switch (msg->op)
        {
          case IMC::AcousticOperation::AOP_ABORT:
            abort(msg->system);
            break;
          case IMC::AcousticOperation::AOP_RANGE:
            ping(msg->system);
            break;
          case IMC::AcousticOperation::AOP_MSG:
            transmitMessage(msg->system, msg->msg);
            break;
          case IMC::AcousticOperation::AOP_REVERSE_RANGE:
            reverseRange(msg->system);
            break;
        }
      }

      //! Transmit message to modem.
      //! @param[in] sys destination system.
      //! @param[in] imsg message to be sent.
      void
      transmitMessage(const std::string& sys, const InlineMessage<IMC::Message>& imsg)
      {
        MicroModemMap::iterator itr = m_ummap.find(sys);
        if (itr == m_ummap.end())
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
          m_acop_out.system = sys;
          dispatch(m_acop_out);
          return;
        }

        const IMC::Message* msg = NULL;
        std::string command;

        try
        {
          msg = imsg.get();
        }
        catch (...)
        {
          return;
        }

        if (msg->getId() == DUNE_IMC_PLANCONTROL)
        {
          const IMC::PlanControl* pc = static_cast<const IMC::PlanControl*>(msg);
          Memory::replace(m_pc, new IMC::PlanControl(*pc));

          if (pc->op == IMC::PlanControl::PC_START)
          {
            std::vector<char> pmsg(c_binary_size, 0);

            if (pc->plan_id.size() > c_binary_size - 1)
            {
              err(DTR("unable to send plan %s"), pc->plan_id.c_str());
              return;
            }

            // Make packet.
            pmsg[0] = (char)c_code_plan;
            std::memcpy(&pmsg[1], &pc->plan_id[0], std::min(c_binary_size - 1, (int)pc->plan_id.size()));

            std::string hex = String::toHex(pmsg);
            std::string cmd = String::str("$CCTXD,%u,%u,0,%s\r\n",
                                          m_address, itr->second, hex.c_str());
            sendCommand(cmd);

            std::string cyc = String::str("$CCCYC,0,%u,%u,0,0,1\r\n", m_address, itr->second);
            sendCommand(cyc);

          }
        }

        if (command.empty())
          return;

        sendCommand(command);
      }

      void
      reverseRange(const std::string& sys)
      {
        MicroModemMap::iterator itr = m_ummap.find(sys);
        if (itr == m_ummap.end() || m_estate == NULL)
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
          m_acop_out.system = sys;
          dispatch(m_acop_out);
          return;
        }

        double lat = m_estate->lat, lon = m_estate->lon, depth = m_estate->depth;
        WGS84::displace(m_estate->x, m_estate->y, &lat, &lon);
        float slat = (float)lat, slon = (float) lon;
        std::vector<char> pmsg(c_binary_size, 0);
        int8_t sdep = (int8_t) depth;

        // Make packet.
        pmsg[0] = (char)c_code_reverse_range;
        std::memcpy(&pmsg[1], &slat, 4);
        std::memcpy(&pmsg[5], &slon, 4);
        std::memcpy(&pmsg[9], &sdep, 1);

        std::string hex = String::toHex(pmsg);
        std::string cmd = String::str("$CCTXD,%u,%u,0,%s\r\n", m_address, itr->second, hex.c_str());
        sendCommand(cmd);

        std::string cyc = String::str("$CCCYC,0,%u,%u,0,0,1\r\n", m_address, itr->second);
        sendCommand(cyc);
      }

      //! Abort system.
      //! @param[in] sys system to be aborted.
      void
      abort(const std::string& sys)
      {
        NarrowBandMap::iterator nitr = m_nbmap.find(sys);
        if (nitr != m_nbmap.end())
        {
          m_acop_out.system = sys;
          m_acop_out.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
          dispatch(m_acop_out);
          return;
        }

        MicroModemMap::iterator itr = m_ummap.find(sys);
        if (itr == m_ummap.end())
        {
          m_acop_out.system = sys;
          m_acop_out.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
          dispatch(m_acop_out);
          return;
        }

        std::string cmd = String::str("$CCMUC,%u,%u,%04x\r\n", m_address, itr->second, c_code_abort);
        sendCommand(cmd);
        m_op = OP_ABORT;
        m_op_deadline = Clock::get() + m_args.tout_abort;
      }

      //! Range system.
      //! @param[in] sys system to be ranged.
      void
      ping(const std::string& sys)
      {
        {
          MicroModemMap::iterator itr = m_ummap.find(sys);
          if (itr != m_ummap.end())
          {
            pingMicroModem(sys);
            return;
          }
        }

        {
          NarrowBandMap::iterator itr = m_nbmap.find(sys);
          if (itr != m_nbmap.end())
          {
            pingNarrowBand(sys);
            return;
          }
        }

        m_acop_out.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
        m_acop_out.system = sys;
        dispatch(m_acop_out);
      }

      //! Ping a modem address.
      //! @param[in] sys system to be pinged.
      void
      pingMicroModem(const std::string& sys)
      {
        MicroModemMap::iterator itr = m_ummap.find(sys);

        if (itr == m_ummap.end())
          return;

        std::string cmd = String::str("$CCMPC,%u,%u\r\n", m_address, itr->second);
        sendCommand(cmd);
        m_op = OP_PING_MM;
        m_op_deadline = Clock::get() + m_args.tout_mmping;
      }

      //! Ping a narrow band frequency.
      //! @param[in] sys transducer to be pinged.
      void
      pingNarrowBand(const std::string& sys)
      {
        NarrowBandMap::iterator itr = m_nbmap.find(sys);

        if (itr == m_nbmap.end())
          return;

        unsigned query = itr->second.query_freq;
        unsigned reply = itr->second.reply_freq;

        std::string cmd = String::str("$CCPNT,%u,%u,%u,%u,%u,0,0,0,1\r\n", query,
                                      m_args.tx_length, m_args.rx_length,
                                      m_args.tout_nbping * 1000, reply);
        sendCommand(cmd);
        m_op = OP_PING_NB;
        m_op_deadline = Clock::get() + m_args.tout_nbping;
      }

      //! Handle received range from modem.
      //! @param[in] stn sentence to be handled.
      void
      handleRangeModem(NMEAReader* const stn)
      {
        unsigned src = 0;
        unsigned dst = 0;
        *stn >> src >> dst;

        if (dst != m_address)
          return;

        double ttime = 0;
        try
        {
          *stn >> ttime;
        }
        catch (...)
        { }

        if (ttime < 0)
          ttime = 0;

        m_acop_out.op = IMC::AcousticOperation::AOP_RANGE_RECVED;
        m_acop_out.system = m_acop.system;
        m_acop_out.range = ttime * m_args.sspeed;
        dispatch(m_acop_out);
        resetOp();
      }

      //! Handle received range from transponder.
      //! @param[in] stn sentence to be handled.
      void
      handleRangeTransponder(NMEAReader* const stn)
      {
        double ttime = 0;

        try
        {
          *stn >> ttime;
        }
        catch (...)
        {
          // No travel-time.
          return;
        }

        if (ttime < 0)
          ttime = 0;

        m_acop_out.op = IMC::AcousticOperation::AOP_RANGE_RECVED;
        m_acop_out.system = m_acop.system;
        m_acop_out.range = ttime * m_args.sspeed;
        dispatch(m_acop_out);
        resetOp();
      }

      //! Handle a mini-packet reception.
      //! @param[in] stn sentence to be handled.
      void
      handleMiniPacketReception(NMEAReader* const stn)
      {
        unsigned src = 0;
        unsigned dst = 0;
        std::string val;
        *stn >> src >> dst >> val;

        unsigned value = 0;
        std::sscanf(val.c_str(), "%04X", &value);

        if (value == c_code_abort_ack)
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_ABORT_ACKED;
          m_acop_out.system = m_acop.system;
          dispatch(m_acop_out);
          resetOp();
        }
        if (value == c_code_plan_ack)
        {
          inf(DTR("plan started"));
          m_pc->setSource(m_mimap[src]);
          m_pc->type = IMC::PlanControl::PC_SUCCESS;
          m_pc->flags = 0;
          dispatchReply(*m_pc, *m_pc, DF_KEEP_SRC_EID);
        }
        else if (value & c_mask_qtrack)
        {
          unsigned beacon = (value & c_mask_qtrack_beacon) >> 10;
          unsigned range = (value & c_mask_qtrack_range);
          IMC::LblRangeAcceptance msg;
          msg.setSource(m_mimap[src]);
          msg.id = beacon;
          msg.range = range;
          msg.acceptance = IMC::LblRangeAcceptance::RR_ACCEPTED;
          dispatch(msg);
          inf("%s %u: %u", DTR("range to"), beacon, range);
        }
      }

      //! A requested range is in progress.
      //! @param[in] stn sentence to be handled.
      void
      handleRangeInProgress(NMEAReader* const stn)
      {
        (void)stn;
        m_acop_out.op = IMC::AcousticOperation::AOP_RANGE_IP;
        m_acop_out.system = m_acop.system;
        dispatch(m_acop_out);
      }

      //! Requested mini-packet transmission is in progress.
      //! @param[in] stn sentence to be handled.
      void
      handleMiniPacketEcho(NMEAReader* const stn)
      {
        unsigned src = 0;
        unsigned dst = 0;
        std::string val;
        *stn >> src >> dst >> val;

        unsigned value = 0;
        std::sscanf(val.c_str(), "%04X", &value);

        if (value == c_code_abort)
        {
          m_acop_out.op = IMC::AcousticOperation::AOP_ABORT_IP;
          m_acop_out.system = m_acop.system;
          dispatch(m_acop_out);
        }
      }

      //! Handle reception of binary message.
      //! @param[in] stn sentence to be handled.
      void
      handleBinaryReception(NMEAReader* const stn)
      {
        unsigned src, dst, ack, fnr;
        std::string hex;

        try
        {
          *stn >> src >> dst >> ack >> fnr >> hex;
        }
        catch (...)
        {
          return;
        }

        if (dst != 0)
          return;

        std::string msg = String::fromHex(hex);
        const char* msg_raw = msg.data();

        uint8_t code = static_cast<uint8_t>(msg_raw[0]);

        if (code == c_code_report)
        {
          float lat, lon;

          int8_t progress;
          uint8_t depth, fuel_level, fuel_conf;

          int16_t yaw, alt;
          uint16_t ranges[2];

          std::memcpy(&lat, msg_raw + 1, 4);
          std::memcpy(&lon, msg_raw + 5, 4);
          std::memcpy(&depth, msg_raw + 9, 1);
          std::memcpy(&yaw, msg_raw + 10, 2);
          std::memcpy(&alt, msg_raw + 12, 2);
          std::memcpy(&ranges[0], msg_raw + 14, 2);
          std::memcpy(&ranges[1], msg_raw + 16, 2);
          std::memcpy(&progress, msg_raw + 18, 1);
          std::memcpy(&fuel_level, msg_raw + 19, 1);
          std::memcpy(&fuel_conf, msg_raw + 20, 1);

          for (int i = 0; i < 2; ++i)
          {
            if (ranges[i] == 0)
              continue;

            IMC::LblRangeAcceptance lmsg;
            lmsg.setSource(m_mimap[src]);
            lmsg.id = i;
            lmsg.range = ranges[i];
            lmsg.acceptance = IMC::LblRangeAcceptance::RR_ACCEPTED;
            dispatch(lmsg);
            inf("%s %u: %f", DTR("range to"), lmsg.id, lmsg.range);
          }

          IMC::EstimatedState es;
          es.setSource(m_mimap[src]);
          es.lat = lat;
          es.lon = lon;
          es.depth = (float)depth;
          es.psi = (float)yaw / 100.0;

          if (alt >= -10)
            es.alt = (float)alt / 10.0;
          dispatch(es);

          if (alt < -10) {
            IMC::Salinity sal;
            sal.value = - ((float)alt / 10.0);
            sal.setSource(m_mimap[src]);
            dispatch(sal);
          }

          IMC::PlanControlState pcs;
          pcs.setSource(m_mimap[src]);

          int state = progress / 10;

          switch (state)
          {
            case (-1):
              pcs.state = PlanControlState::PCS_BLOCKED;
              pcs.last_outcome = progress % 10;
              break;
            case (-2):
              pcs.state = PlanControlState::PCS_READY;
              pcs.last_outcome = progress % 10;
              break;
            case (-3):
              pcs.state = PlanControlState::PCS_INITIALIZING;
              pcs.last_outcome = progress % 10;
              break;
            default:
              pcs.state = PlanControlState::PCS_EXECUTING;
              pcs.plan_progress = (float)progress;
              break;
          }

          dispatch(pcs);

          // Inform if progress is valid.
          if (pcs.plan_progress >= 0)
            inf(DTR("plan progress is %f"), pcs.plan_progress);

          IMC::FuelLevel fuel;
          fuel.setSource(m_mimap[src]);
          fuel.value = (float)fuel_level;
          fuel.confidence = (float)fuel_conf;
          dispatch(fuel);

          trace("lat %f | lon %f | depth %f | alt %f | yaw %f", es.lat, es.lon, es.depth, es.alt, es.psi);
          trace("fuel %f | conf %f | plan progress %f", fuel.value, fuel.confidence, pcs.plan_progress);
        }
        else if (code == c_code_plan)
        {
          debug("ignore start plan");
        }
        else
        {
          debug("wrong code id");
        }
      }

      //! Read sentence.
      void
      readSentence(void)
      {
        char bfr[c_bfr_size];
        size_t rv = m_handle->readString(bfr, sizeof(bfr));

        for (size_t i = 0; i < rv; ++i)
        {
          // Detected line termination.
          if (bfr[i] == '\n')
          {
            process(m_line);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_line.clear();
          }
          else
          {
            m_line.push_back(bfr[i]);
          }
        }
      }

      //! Process sentence.
      //! @param[in] msg sentence.
      void
      process(const std::string msg)
      {
        m_dev_data.value.assign(sanitize(msg));
        dispatch(m_dev_data);

        NMEAReader* const stn = new NMEAReader(msg);
        try
        {
          if (std::strcmp(stn->code(), "CAMPR") == 0)
            handleRangeModem(stn);
          else if (std::strcmp(stn->code(), "CAMUA") == 0)
            handleMiniPacketReception(stn);
          else if (std::strcmp(stn->code(), "CAMPC") == 0)
            handleRangeInProgress(stn);
          else if (std::strcmp(stn->code(), "SNPNT") == 0)
            handleRangeInProgress(stn);
          else if (std::strcmp(stn->code(), "CAMUC") == 0)
            handleMiniPacketEcho(stn);
          else if (std::strcmp(stn->code(), "SNTTA") == 0)
            handleRangeTransponder(stn);
          else if (std::strcmp(stn->code(), "CARXD") == 0)
            handleBinaryReception(stn);
        }
        catch (std::exception& e)
        {
          err("%s", e.what());
        }

        delete stn;
      }

      //! Check operation timeouts.
      void
      checkTimeouts(void)
      {
        if (m_op == OP_NONE)
          return;

        double now = Clock::get();

        if (now > m_op_deadline)
        {
          m_acop_out.system = m_acop.system;

          if ((m_op == OP_PING_NB) || (m_op == OP_PING_MM))
            m_acop_out.op = IMC::AcousticOperation::AOP_RANGE_TIMEOUT;
          else if (m_op == OP_ABORT)
            m_acop_out.op = IMC::AcousticOperation::AOP_ABORT_TIMEOUT;

          dispatch(m_acop_out);
          resetOp();
        }
      }

      //! Configure a modem parameter.
      //! @param[in] code NMEA code of the message to be transmitted.
      //! @param[in] parameter modem parameter to be configured.
      //! @param[in] value new configuration value.
      void
      configureModem(const std::string& code, const std::string& parameter, const unsigned value)
      {
        // Create NMEA message.
        NMEAWriter stn(code);
        stn << parameter << value;
        std::string cmd = stn.sentence();

        // Send to Modem.
        sendCommand(cmd);
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          consumeMessages();

          if (Poll::poll(*m_handle, 0.1))
          {
            readSentence();
            m_last_stn.reset();
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }

          if (m_last_stn.overflow())
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);

          checkTimeouts();
        }
      }
    };
  }
}

DUNE_TASK
