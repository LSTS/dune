//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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

//! TODO: adapt to use Acoustics::Ticket.

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
      //! IO device.
      std::string io_dev;
      //! Sound speed on water.
      double sspeed;
      //! Narrow band ping timeout.
      unsigned tout_nbping;
      //! Micro-Modem ping timeout.
      double tout_mmping;
      //! Abort timeout.
      double tout_abort;
      //! Input timeout.
      double tout_input;
      //! GPIO to detect if transducer is connected.
      int gpio_txd;
      //! Length of transmit pings.
      unsigned tx_length;
      //! Length of receive pings.
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

    struct Task: public Hardware::BasicDeviceDriver
    {
      //! IO handle.
      IO::Handle* m_handle;
      //! Map of narrow band transponders.
      NarrowBandMap m_nbmap;
      //! Map of micro-modem addresses.
      MicroModemMap m_ummap;
      //! Map of micro-modem to IMC addresses.
      AddressMap m_mimap;
      //! Map of IMC to Micro-Modem addresses.
      AddressMap m_immap;
      //! Task arguments.
      Arguments m_args;
      //! Timestamp of last operation.
      double m_op_deadline;
      //! Local modem-address.
      unsigned m_address;
      //! Last acoustic operation.
      IMC::UamTxFrame m_txframe;
      //! Outgoing acoustic operation.
      IMC::UamTxStatus m_txstatus;
      //! Save modem commands.
      IMC::DevDataText m_dev_data;
      //! Saved Plan Control.
      IMC::PlanControl* m_pc;
      //! Current operation.
      Operation m_op;
      //! Transducer detection GPIO.
      GPIO* m_gpio_txd;
      //! Time of last sentence from modem.
      Counter<double> m_last_stn;
      //! Ignore GPIO.
      bool m_ignore_gpio;
      //! Current line.
      std::string m_line;
      //! System position.
      IMC::EstimatedState* m_estate;

      Task(const std::string& name, Tasks::Context& ctx):
        Hardware::BasicDeviceDriver(name, ctx),
        m_handle(NULL),
        m_op_deadline(-1.0),
        m_pc(NULL),
        m_op(OP_NONE),
        m_gpio_txd(NULL),
        m_ignore_gpio(true),
        m_estate(NULL)
      {
        //! Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER,
                    false);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"tcp://ADDRESS:PORT\" or \"uart://DEVICE:BAUD\"");

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

        //! Use wait for messages.
        setWaitForMessages(1.0);

        //! Register message handlers.
        bind<IMC::EstimatedState>(this);
        bind<IMC::UamTxFrame>(this);
      }

      void
      dispatchSystems(bool force = false)
      {
        if (!isActive() && !force)
          return;

        IMC::AcousticSystems acsys;
        acsys.setDestination(getSystemId());
        for (auto& name: m_ummap)
          acsys.list.append(name.first).append(",");
        acsys.list.pop_back(); // remove last ","
        dispatch(acsys);
      }

      void
      dispatchURI(void)
      {
        IMC::EntityParameters params;
        params.name = getEntityLabel();
        IMC::EntityParameter p;
        p.name = "IO Port - Device";
        p.value = m_args.io_dev;
        params.params.push_back(p);
        dispatch(params);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.io_dev))
        {
          dispatchURI();
          if (isActive())
            requestRestart();
        }

        if ((m_gpio_txd != NULL) && paramChanged(m_args.gpio_txd) && !m_ignore_gpio)
          throw RestartNeeded(DTR("restarting to change transducer detection GPIO"), 1, false);

        if (paramChanged(m_args.addr_section))
        {
          // Process micro-modem addresses.
          m_mimap.clear();
          m_immap.clear();
          m_ummap.clear();
          std::string agent = getSystemName();
          std::vector<std::string> addrs = m_ctx.config.options(m_args.addr_section);
          for (auto& name: addrs)
          {
            unsigned iid = resolveSystemName(name);
            unsigned mid = 0;
            m_ctx.config.get(m_args.addr_section, name, "0", mid);
            m_mimap[mid] = iid;
            m_immap[iid] = mid;
            m_ummap[name] = mid;

            if (name == agent)
              m_address = mid;
          }

          dispatchSystems();
        } 

        // Input timeout.
        if (paramChanged(m_args.tout_input))
          m_last_stn.setTop(m_args.tout_input);
      }

      //! Try to connect to the device.
      //! @return true if connection was established, false otherwise.
      bool
      onConnect() override
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
        
        // Configure transducer GPIO (if any).
        if (m_args.gpio_txd > 0)
        {
          try
          {
            m_gpio_txd = new GPIO((unsigned)m_args.gpio_txd);
            m_gpio_txd->setDirection(GPIO::GPIO_DIR_INPUT);
            m_ignore_gpio = false;
          }
          catch (...)
          {
            err(DTR("unable to use GPIO %d for transducer detection"), m_args.gpio_txd);
          }
        }

        try
        {
          m_handle = openDeviceHandle(m_args.io_dev, true);
        }
        catch (...)
        {
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
        }

        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://acoustic/operation/")
                                        + URL::encode(getEntityLabel());
        dispatch(announce);

        return true;
      }

      //! Disconnect from device.
      void
      onDisconnect() override
      {
        if (m_pc != NULL)
          Memory::clear(m_pc);
        if (m_gpio_txd != NULL)
          Memory::clear(m_gpio_txd);
        if (m_handle != NULL)
          Memory::clear(m_handle);
      }

      //! Initialize device.
      void
      onInitializeDevice() override
      {
        // Set unit number.
        configureModem("CCCFG", "SRC", m_address);
        // Transmit stats messages.
        configureModem("CCCFG", "XST", 0);
        // Cycle-init timeout time.
        configureModem("CCCFG", "CTO", 10);
        // Navigation turn around time.
        configureModem("CCCFG", "TAT", m_args.turn_around_time);

        //! TODO: make sure configuration works
        //! otherwise, task will run even if no modem is connected

        dispatchSystems(true);
      }

      void
      sendTxStatus(IMC::UamTxStatus::ValueEnum status, const std::string& error = "")
      {
        m_txstatus.setDestination(m_txframe.getSource());
        m_txstatus.setDestinationEntity(m_txframe.getSourceEntity());
        m_txstatus.seq = m_txframe.seq;
        m_txstatus.value = status;
        m_txstatus.error = error;
        dispatch(m_txstatus);
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
        debug("sending: %s", sanitize(cmd).c_str());
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
      consume(const IMC::UamTxFrame* msg)
      {
        if (!isActive())
          return;

        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != 255 && msg->getDestinationEntity() != getEntityId())
          return;

        m_txframe = *msg;

        if (m_op != OP_NONE)
        {
          sendTxStatus(IMC::UamTxStatus::UTS_BUSY);
          return;
        }

        // check if we have a transducer connected.
        if (!hasTransducer())
        {
          sendTxStatus(IMC::UamTxStatus::UTS_FAILED, "No transducer connected.");
          return;
        }

        if ((uint8_t) msg->data[0] != Acoustics::c_sync)
        {
          sendTxStatus(IMC::UamTxStatus::UTS_FAILED, "Incorrect sync number.");
          return;
        }
        
        Algorithms::CRC8 crc(Acoustics::c_poly);
        uint8_t res = crc.putArray((uint8_t*)&msg->data[0], msg->data.size() - 1);

        if (res != msg->data.back())
        {
          sendTxStatus(IMC::UamTxStatus::UTS_FAILED, "Incorrect crc8.");
          return;
        }

        switch (msg->data[1])
        {
        case Acoustics::CODE_ABORT:
          abort(msg->sys_dst);
          break;
        case Acoustics::CODE_RANGE:
          ping(msg->sys_dst);
          break;
        case Acoustics::CODE_REV_RANGE:
          reverseRange(msg->sys_dst);
          break;
        case Acoustics::CODE_REPORT:
        case Acoustics::CODE_RESTART:
        case Acoustics::CODE_RAW:
        case Acoustics::CODE_USBL:
          transmitMessage(msg);
          break;

        default:
          sendTxStatus(IMC::UamTxStatus::UTS_UNSUPPORTED);
          return;
        }

        sendTxStatus(IMC::UamTxStatus::UTS_SENT);
      }

      //! Abort system.
      //! @param[in] sys system to be aborted.
      void
      abort(const std::string& sys)
      {
        NarrowBandMap::iterator nitr = m_nbmap.find(sys);
        MicroModemMap::iterator itr = m_ummap.find(sys);
        if (nitr != m_nbmap.end() || itr == m_ummap.end())
        {
          sendTxStatus(IMC::UamTxStatus::UTS_UNSUPPORTED);
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
        if (pingMicroModem(sys))
          return;

        if (pingNarrowBand(sys))
          return;

        sendTxStatus(IMC::UamTxStatus::UTS_UNSUPPORTED);
      }

      //! Ping a modem address.
      //! @param[in] sys system to be pinged.
      bool
      pingMicroModem(const std::string& sys)
      {
        MicroModemMap::iterator itr = m_ummap.find(sys);

        if (itr == m_ummap.end())
          return false;

        std::string cmd = String::str("$CCMPC,%u,%u\r\n", m_address, itr->second);
        sendCommand(cmd);
        m_op = OP_PING_MM;
        m_op_deadline = Clock::get() + m_args.tout_mmping;

        return true;
      }

      //! Ping a narrow band frequency.
      //! @param[in] sys transducer to be pinged.
      bool
      pingNarrowBand(const std::string& sys)
      {
        NarrowBandMap::iterator itr = m_nbmap.find(sys);

        if (itr == m_nbmap.end())
          return false;

        unsigned query = itr->second.query_freq;
        unsigned reply = itr->second.reply_freq;

        std::string cmd = String::str("$CCPNT,%u,%u,%u,%u,%u,0,0,0,1\r\n", query,
                                      m_args.tx_length, m_args.rx_length,
                                      m_args.tout_nbping * 1000, reply);
        sendCommand(cmd);
        m_op = OP_PING_NB;
        m_op_deadline = Clock::get() + m_args.tout_nbping;

        return true;
      }

      void
      reverseRange(const std::string& sys)
      {
        if (m_estate == NULL)
        {
          sendTxStatus(IMC::UamTxStatus::UTS_FAILED, "No EstimatedState.");
          return;
        }

        MicroModemMap::iterator itr = m_ummap.find(sys);
        if (itr == m_ummap.end())
        {
          sendTxStatus(IMC::UamTxStatus::UTS_INV_ADDR, "Can't target " + sys + ".");
          return;
        }

        double lat = m_estate->lat, lon = m_estate->lon, depth = m_estate->depth;
        WGS84::displace(m_estate->x, m_estate->y, &lat, &lon);
        float slat = (float)lat, slon = (float) lon;
        std::vector<char> pmsg(c_binary_size, 0);
        int8_t sdep = (int8_t) depth;

        // Make packet.
        pmsg[0] = (char)Acoustics::c_sync;
        pmsg[1] = (char)Acoustics::CODE_REV_RANGE;
        std::memcpy(&pmsg[2], &slat, 4);
        std::memcpy(&pmsg[6], &slon, 4);
        std::memcpy(&pmsg[10], &sdep, 1);

        Algorithms::CRC8 crc(Acoustics::c_poly);
        uint8_t res = crc.putArray((uint8_t*)&pmsg[0], pmsg.size() - 1);
        pmsg[11] = (char)res;

        std::string hex = String::toHex(pmsg);
        std::string cmd = String::str("$CCTXD,%u,%u,0,%s\r\n", m_address, itr->second, hex.c_str());
        sendCommand(cmd);

        std::string cyc = String::str("$CCCYC,0,%u,%u,0,0,1\r\n", m_address, itr->second);
        sendCommand(cyc);
      }

      //! Transmit message to modem.
      //! @param[in] msg message to be sent.
      void
      transmitMessage(const IMC::UamTxFrame* msg)
      {
        if (msg->data.size() > c_binary_size)
        {
          sendTxStatus(IMC::UamTxStatus::UTS_INV_SIZE);
          return;
        }

        MicroModemMap::iterator itr = m_ummap.find(msg->sys_dst);
        if (itr == m_ummap.end())
        {
          sendTxStatus(IMC::UamTxStatus::UTS_INV_ADDR, "Can't target " + msg->sys_dst + ".");
          return;
        }

        std::string hex = String::toHex(msg->data);
        std::string cmd = String::str("$CCTXD,%u,%u,0,%s\r\n", m_address, itr->second, hex.c_str());
        sendCommand(cmd);

        std::string cyc = String::str("$CCCYC,0,%u,%u,0,0,1\r\n", m_address, itr->second);
        sendCommand(cyc);
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

        IMC::UamRxRange range;
        range.setDestination(m_txframe.getSource());
        range.setDestinationEntity(m_txframe.getSourceEntity());
        range.sys = m_txframe.sys_dst;
        range.value = ttime * m_args.sspeed;
        dispatch(range);
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
        
        IMC::UamRxRange range;
        range.setDestination(m_txframe.getSource());
        range.setDestinationEntity(m_txframe.getSourceEntity());
        range.sys = m_txframe.sys_dst;
        range.value = ttime * m_args.sspeed;
        dispatch(range);
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

        std::vector<char> data(val.begin(), val.end());

        uint8_t code_pos = 1;

        if ((uint8_t)data[0] == Acoustics::c_sync)
        {
          Algorithms::CRC8 crc(Acoustics::c_poly);
          uint8_t res = crc.putArray((uint8_t*)&val[0], val.size() - 1);

          if ((uint8_t)data.back() != res)
          {
            war("Received Acoustic Message with invalid crc8.");
            return;
          }

          code_pos = 0;
        }

        if ((uint8_t)data[code_pos] == Acoustics::CODE_ACK)
        {
          sendTxStatus(IMC::UamTxStatus::UTS_DONE);
          return;
        }

        IMC::UamRxFrame rxframe;
        rxframe.sys_src = src;
        rxframe.sys_dst = dst;
        rxframe.data = data;

        if (dst != m_address)
          rxframe.flags |= IMC::UamRxFrame::URF_PROMISCUOUS;

        dispatch(rxframe);
      }

      //! A requested range is in progress.
      //! @param[in] stn sentence to be handled.
      void
      handleRangeInProgress(NMEAReader* const stn)
      {
        (void)stn;
        sendTxStatus(IMC::UamTxStatus::UTS_IP);
      }

      //! Requested mini-packet transmission is in progress.
      //! @param[in] stn sentence to be handled.
      void
      handleMiniPacketEcho(NMEAReader* const stn)
      {
        (void)stn;
        sendTxStatus(IMC::UamTxStatus::UTS_IP);
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

        IMC::UamRxFrame rxframe;
        rxframe.sys_src = src;
        rxframe.sys_dst = dst;
        rxframe.data = std::vector<char>(hex.begin(), hex.end());

        if (dst != m_address)
          rxframe.flags |= IMC::UamRxFrame::URF_PROMISCUOUS;

        dispatch(rxframe);
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
            m_last_stn.reset();
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
        trace("received: %s", sanitize(msg).c_str());
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
          sendTxStatus(IMC::UamTxStatus::UTS_FAILED, "Exceeded deadline.");
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

      //! Check for data.
      //! Check for input timeout.
      //! @return true.
      bool
      onReadData() override
      {
        if (Poll::poll(*m_handle, 0.1))
        {
          readSentence();
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        if (m_last_stn.overflow())
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);

        checkTimeouts();

        return true;
      }
    };
  }
}

DUNE_TASK
