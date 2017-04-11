//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <Supervisors/Reporter/Client.hpp>

namespace Transports
{
  namespace UAN
  {
    using DUNE_NAMESPACES;

    // Synchronization byte.
    static const uint8_t c_sync = 0xA1;
    static const uint8_t c_poly = 0x07;

    enum Codes
    {
      CODE_ABORT   = 0x00,
      CODE_RANGE   = 0x01,
      CODE_PLAN    = 0x02,
      CODE_REPORT  = 0x03,
      CODE_RESTART = 0x04,
      CODE_RAW     = 0x05,
      CODE_USBL    = 0x06
    };

    struct Report
    {
      float lat;
      float lon;
      uint8_t depth;
      int16_t yaw;
      int16_t alt;
      int8_t progress;
      uint8_t fuel_level;
      uint8_t fuel_conf;
    };

    struct Arguments
    {
      //! Enable reports.
      bool report_enable;
      //! USBL Modem maximum waiting time.
      float usbl_max_wait;
      //! USBL Modem Announce service.
      bool usbl_announce;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Last progress.
      float m_progress;
      //! Last fuel level.
      float m_fuel_level;
      //! Last fuel level confidence.
      float m_fuel_conf;
      //! Sequence number.
      uint16_t m_seq;
      //! Last acoustic operation.
      IMC::AcousticOperation* m_last_acop;
      //! Vector of pending message requests
      std::vector<const IMC::AcousticOperation*> m_msg_requests;
      //! Timer for sending preceding message
      Counter<double> m_msg_send_timer;
      //! When set should wait and send next message
      bool m_send_next;
      //! Reporter API.
      Supervisors::Reporter::Client* m_reporter;
      //! USBL Node arguments.
      UsblTools::Node::Arguments m_node_args;
      //! USBL Node.
      UsblTools::Node* m_usbl_node;
      //! USBL Modem.
      UsblTools::Modem* m_usbl_modem;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_progress(0),
        m_fuel_level(0),
        m_fuel_conf(0),
        m_seq(0),
        m_last_acop(NULL),
        m_send_next(false),
        m_reporter(NULL),
        m_usbl_node(NULL),
        m_usbl_modem(NULL)
      {
        param("Enable Reports", m_args.report_enable)
        .defaultValue("false")
        .description("Enable system state acoustic reporting. When enabled, systems"
                     " shall acknowledge reception of requests to broadcast acoustic"
                     " messages containing the overall state of the system."
                     " When disabled, those requests shall be ignored");

        param("USBL Node -- Enabled", m_node_args.enabled)
        .defaultValue("false")
        .description("Enable system's USBL mode. When active, this system will"
                     " start using USBL by actively broadcasting an acoustic"
                     " message containing a request to get USBL feedback. The"
                     " request contains the period for transmissions, if quick"
                     " (two-way travel) or ranging (three-way travel) mode is"
                     " desired, and, if in ranging mode (not \"quick\"), to use"
                     " absolute or relative positioning. If a USBL modem is in"
                     " reach, they will start exchanging acoustic transmissions"
                     " to provide USBL positioning to the system."
                     " Any system can be configured to request USBL information"
                     " including modems with built-in USBL capabilities");

        param("USBL Node -- Period", m_node_args.period)
        .defaultValue("60.0")
        .minimumValue("2.0")
        .units(Units::Second)
        .description("USBL's period. This value determines the period of USBL"
                     " positioning data. If \"Quick\" mode is selected, modem"
                     " shall ping the USBL modem with this period to get bearing"
                     " and elevation (two-way travel transmission). If \"Quick\""
                     " mode is disabled, ranging information is included for a"
                     " proper fix. In this case, the USBL modem pings the node,"
                     " hears the reply, computes the position and transmits back"
                     " to the node (three-way travel transmission)");

        param("USBL Node -- Absolute Fix", m_node_args.fix)
        .defaultValue("false")
        .description("If this argument is enabled, USBL sends an absolute fix using"
                     " WGS-84 lat/lon coordinates. If disabled, then the positioning"
                     " is relative to the origin of a system where the center of the"
                     " reference frame is the USBL modem");

        param("USBL Node -- Quick, No Range", m_node_args.no_range)
        .defaultValue("false")
        .description("In this mode, the USBL node does not request ranging information."
                     " Thus, with this mode enabled, there's only a two-way travel"
                     " transmission between the node and the USBL modem. The node will"
                     " actively ping the modem to get bearing/elevation information"
                     " With this mode enabled \"Absolute Fix\" argument is ignored");

        param("USBL Modem -- Announce Service", m_args.usbl_announce)
        .defaultValue("false")
        .description("This argument only concerns systems with USBL modems installed."
                     " This parameter statically adds a USBL announce, even if service"
                     " has not been detected yet (eg. modem not connected)");

        param("USBL Modem -- Max Waiting Time", m_args.usbl_max_wait)
        .defaultValue("10.0")
        .minimumValue("2.0")
        .maximumValue("20.0")
        .units(Units::Second)
        .description("This argument only concerns systems with USBL modems installed."
                     " This value establishes the maximum amount of time that the modem"
                     " waits for the target system's reply");

        bind<IMC::AcousticOperation>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::ReportControl>(this);
        bind<IMC::UamRxFrame>(this);
        bind<IMC::UamTxStatus>(this);
        bind<IMC::UamRxRange>(this);
        bind<IMC::UsblPositionExtended>(this);
        bind<IMC::UsblAnglesExtended>(this);
        bind<IMC::UsblConfig>(this);
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onResourceAcquisition(void)
      {
        m_reporter = new Supervisors::Reporter::Client(this, Supervisors::Reporter::IS_ACOUSTIC,
                                                       2.0, false);

        m_usbl_node = new UsblTools::Node(this, &m_node_args);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://acoustic/operation/")
        + URL::encode(getEntityLabel());
        dispatch(announce);

        if (m_args.usbl_announce)
          announceUSBL();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        clearLastOp();
        Memory::clear(m_reporter);
        Memory::clear(m_usbl_node);
        Memory::clear(m_usbl_modem);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_estate = *msg;
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_progress = msg->plan_progress;
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        m_fuel_level = msg->value;
        m_fuel_conf = msg->confidence;
      }

      void
      consume(const IMC::AcousticOperation* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        switch (msg->op)
        {
          case IMC::AcousticOperation::AOP_ABORT:
            sendAbort(msg->system);
            break;

          case IMC::AcousticOperation::AOP_RANGE:
            sendRange(msg->system);
            break;

          case IMC::AcousticOperation::AOP_MSG:
            m_msg_requests.push_back((const IMC::AcousticOperation*)msg->clone());
            // are there more messages being sent?
            if (m_msg_requests.size() > 1)
            {
              IMC::AcousticOperation aop(*msg);
              aop.op = IMC::AcousticOperation::AOP_MSG_QUEUED;
              dispatch(aop);
              return;
            }
            else
            {
              sendMessage(msg->system, msg->msg);
            }
            break;

          default:
            return;
        }
        replaceLastOp(msg);
      }

      void
      consume(const IMC::UamRxFrame* msg)
      {
        if (msg->data.size() < 2)
        {
          debug("invalid message size");
          return;
        }

        uint16_t imc_addr_src = 0;
        try
        {
          imc_addr_src = resolveSystemName(msg->sys_src);
        }
        catch (...)
        {
          debug("unknown system name: %s", msg->sys_src.c_str());
          return;
        }

        uint16_t imc_addr_dst = 0;
        try
        {
          imc_addr_dst = resolveSystemName(msg->sys_dst);
        }
        catch (...)
        {
          debug("unknown system name: %s", msg->sys_dst.c_str());
          return;
        }

        if ((uint8_t)msg->data[0] != c_sync)
        {
          debug("invalid synchronization number: %02X", msg->data[0]);
          return;
        }

        Algorithms::CRC8 crc(c_poly);
        crc.putArray((uint8_t*)&msg->data[0], msg->data.size() - 1);
        if (crc.get() != (uint8_t)(msg->data[msg->data.size() - 1]))
        {
          debug("invalid CRC");
          return;
        }

        switch (msg->data[1])
        {
          case CODE_REPORT:
            recvReport(imc_addr_src, imc_addr_dst, msg);
            break;

          case CODE_ABORT:
            recvAbort(imc_addr_src, imc_addr_dst, msg);
            break;

          case CODE_RANGE:
            recvRange(imc_addr_src, imc_addr_dst, msg);
            break;

          case CODE_PLAN:
            recvPlanControl(imc_addr_src, imc_addr_dst, msg);
            break;

          case CODE_RAW:
            recvMessage(imc_addr_src, imc_addr_dst, msg);
            break;

          case CODE_USBL:
            if (UsblTools::toNode(msg->data[2]))
            {
              if (m_usbl_node != NULL)
                m_usbl_node->parse(imc_addr_src, msg);
            }
            else
            {
              // handle request to USBL modem.
              if (m_usbl_modem != NULL)
              {
                std::vector<uint8_t> data;
                data.push_back(CODE_USBL);
                if (m_usbl_modem->parse(msg, data))
                  sendFrame(msg->sys_src, data, false);
              }
            }
            break;
        }
      }

      void
      consume(const IMC::UamTxStatus* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (m_last_acop == NULL)
          return;

        IMC::AcousticOperation aop(*m_last_acop);

        switch(msg->value)
        {
          case IMC::UamTxStatus::UTS_BUSY:
            aop.op = IMC::AcousticOperation::AOP_BUSY;
            break;

          case IMC::UamTxStatus::UTS_INV_ADDR:
            aop.op = IMC::AcousticOperation::AOP_UNSUPPORTED;
            if (m_last_acop->op == IMC::AcousticOperation::AOP_MSG)
            {
              delete m_msg_requests.front();
              m_msg_requests.erase(m_msg_requests.begin());
            }
            break;

          case IMC::UamTxStatus::UTS_DONE:
            switch(m_last_acop->op)
            {
              case IMC::AcousticOperation::AOP_ABORT:
                aop.op = IMC::AcousticOperation::AOP_ABORT_ACKED;
                break;
              case IMC::AcousticOperation::AOP_RANGE:
                // do nothing.
                return;
                break;
              case IMC::AcousticOperation::AOP_MSG:
                delete m_msg_requests.front();
                m_msg_requests.erase(m_msg_requests.begin());
                aop.op = IMC::AcousticOperation::AOP_MSG_DONE;
                break;
            }
            break;

          case IMC::UamTxStatus::UTS_IP:
            switch(m_last_acop->op)
            {
              case IMC::AcousticOperation::AOP_ABORT:
                aop.op = IMC::AcousticOperation::AOP_ABORT_IP;
                break;
              case IMC::AcousticOperation::AOP_RANGE:
                aop.op = IMC::AcousticOperation::AOP_RANGE_IP;
                break;
              case IMC::AcousticOperation::AOP_MSG:
                aop.op = IMC::AcousticOperation::AOP_MSG_IP;
                break;
            }
            break;

          case IMC::UamTxStatus::UTS_FAILED:
            switch(m_last_acop->op)
            {
              case IMC::AcousticOperation::AOP_ABORT:
                aop.op = IMC::AcousticOperation::AOP_ABORT_TIMEOUT;
                break;
              case IMC::AcousticOperation::AOP_RANGE:
                aop.op = IMC::AcousticOperation::AOP_RANGE_TIMEOUT;
                break;
              case IMC::AcousticOperation::AOP_MSG:
                delete m_msg_requests.front();
                m_msg_requests.erase(m_msg_requests.begin());
                aop.op = IMC::AcousticOperation::AOP_MSG_FAILURE;
                break;
            }
            break;
        }

        dispatch(aop);

        // If idle send pending messages.
        if (msg->value != IMC::UamTxStatus::UTS_IP && !m_msg_requests.empty())
        {
          // wait (for clearing buffers) and send next message
          m_msg_send_timer.setTop(2);
          m_msg_send_timer.reset();
          m_send_next = true;
        }
      }

      void
      consume(const IMC::UamRxRange* msg)
      {
        if (m_last_acop == NULL)
          return;

        if (m_last_acop->op == IMC::AcousticOperation::AOP_RANGE)
        {
          IMC::AcousticOperation aop(*m_last_acop);
          aop.op = IMC::AcousticOperation::AOP_RANGE_RECVED;
          aop.range = msg->value;
          dispatch(aop);
        }
      }

      void
      consume(const IMC::UsblPositionExtended* msg)
      {
        if (m_usbl_modem == NULL)
        {
          announceUSBL();
          m_usbl_modem = new UsblTools::Modem();
          return;
        }

        // check if we are waiting for this system.
        if (!m_usbl_modem->waitingForSystem(msg->target))
          return;

        std::vector<uint8_t> data;
        data.push_back(CODE_USBL);

        // The target wants an absolute fix?
        if (m_usbl_modem->wantsFix(msg->target))
        {
          // transform data.
          IMC::UsblFixExtended fix = UsblTools::toFix(*msg, m_estate);
          if (m_usbl_modem->encode(&fix, data))
            sendFrame(msg->target, data, false);
        }
        else
        {
          if (m_usbl_modem->encode(msg, data))
            sendFrame(msg->target, data, false);
        }
      }

      void
      consume(const IMC::UsblAnglesExtended* msg)
      {
        if (m_usbl_modem == NULL)
        {
          announceUSBL();
          m_usbl_modem = new UsblTools::Modem();
          return;
        }

        // check if we are waiting for this system.
        if (!m_usbl_modem->waitingForSystem(msg->target))
          return;

        std::vector<uint8_t> data;
        data.push_back(CODE_USBL);
        if (m_usbl_modem->encode(msg, data))
          sendFrame(msg->target, data, false);
      }

      void
      consume(const IMC::UsblConfig* msg)
      {
        if (m_usbl_node != NULL)
          m_usbl_node->consume(msg);
      }

      void
      consume(const IMC::ReportControl* msg)
      {
        if (m_reporter != NULL)
          m_reporter->consume(msg);
      }

      //! Announce USBL service.
      void
      announceUSBL(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://acoustic/usbl/")
        + URL::encode(getEntityLabel());
        dispatch(announce);
      }

      //! Clear last operation.
      void
      clearLastOp(void)
      {
        Memory::clear(m_last_acop);
      }

      void
      sendFrame(const std::string& sys, Codes code, bool ack)
      {
        std::vector<uint8_t> data;
        data.push_back(code);
        sendFrame(sys, data, ack);
      }

      void
      sendFrame(const std::string& sys, const std::vector<uint8_t>& data, bool ack)
      {
        Algorithms::CRC8 crc(c_poly);

        IMC::UamTxFrame frame;
        frame.setDestination(getSystemId());
        frame.sys_dst = sys;
        frame.seq = m_seq++;
        frame.flags = ack ? IMC::UamTxFrame::UTF_ACK : 0;

        frame.data.push_back(c_sync);
        crc.putByte(c_sync);
        for (size_t i = 0; i < data.size(); ++i)
        {
          frame.data.push_back(data[i]);
          crc.putByte(data[i]);
        }
        frame.data.push_back(crc.get());

        dispatch(frame);
      }

      void
      replaceLastOp(const IMC::AcousticOperation* msg)
      {
        clearLastOp();
        m_last_acop = static_cast<IMC::AcousticOperation*>(msg->clone());
        m_last_acop->setDestination(m_last_acop->getSource());
        m_last_acop->setDestinationEntity(m_last_acop->getSourceEntity());
        m_last_acop->setSource(getSystemId());
        m_last_acop->setSourceEntity(getEntityId());
      }

      void
      sendAbort(const std::string& sys)
      {
        sendFrame(sys, CODE_ABORT, true);
      }

      void
      recvAbort(uint16_t imc_src, uint16_t imc_dst, const IMC::UamRxFrame* msg)
      {
        (void)msg;

        // ignore aborts addressed to other systems
        if (imc_dst != getSystemId())
        {
          inf(DTR("ignoring abort message addressed to other system"));
          return;
        }

        war(DTR("got abort request"));

        IMC::Abort abort;
        abort.setSource(imc_src);
        abort.setDestination(imc_dst);
        dispatch(abort);
      }

      void
      sendRange(const std::string& sys)
      {
        spew("sending range to %s", sys.c_str());
        sendFrame(sys, CODE_RANGE, true);
      }

      void
      recvRange(uint16_t imc_src, uint16_t imc_dst, const IMC::UamRxFrame* msg)
      {
        (void)imc_src;
        (void)imc_dst;
        (void)msg;
      }

      void
      sendMessage(const std::string& sys, const InlineMessage<IMC::Message>& imsg)
      {
        const IMC::Message* msg = NULL;

        try
        {
          msg = imsg.get();
        }
        catch (...)
        {
          return;
        }

        // Check if special command can be used...
        if (msg->getId() == IMC::PlanControl::getIdStatic())
        {
          const IMC::PlanControl * pc = static_cast<const IMC::PlanControl*>(msg);
          if (pc->arg.isNull())
          {
            sendPlanControl(sys, static_cast<const IMC::PlanControl*>(msg));
            return;
          }
        }

        // For all other cases, send the raw message across
        sendRawMessage(sys, msg);
      }

      void
      recvMessage(uint16_t imc_src, uint16_t imc_dst, const IMC::UamRxFrame* msg)
      {
        debug("Parsing message received via acoustic message.");

        try
        {
          uint16_t msg_type;
          std::memcpy(&msg_type, &msg->data[2], sizeof(uint16_t));
          Message *m = IMC::Factory::produce(msg_type);
          if (m == NULL)
          {
            err("Invalid message type received: %d", msg_type);
            return;
          }

          m->setSource(imc_src);
          m->setDestination(imc_dst);
          m->setTimeStamp(msg->getTimeStamp());
          m->deserializeFields((const unsigned char *)&msg->data[4], msg->data.size()-4);
          dispatch(m, DF_KEEP_TIME | DF_LOOP_BACK);
          debug("Acoustic message successfully parsed as '%s'.", m->getName());
        }
        catch (std::exception& ex) {
          err("Error parsing raw message from UAM frame: %s.", ex.what());
        }
      }

      void
      sendRawMessage(const std::string& sys, const IMC::Message * msg)
      {
        std::vector<uint8_t> data;
        data.push_back(CODE_RAW);

        // leave 1 byte for CODE_RAW and another for CRC8
        uint8_t buf[1022];

        // start with message id
        uint16_t id = msg->getId();
        std::memcpy(&buf[0], &id, sizeof(uint16_t));

        // followed by all message fields
        uint8_t* end = msg->serializeFields(&buf[2]);

        int length = end - buf;
        data.insert(data.end(), buf, buf + length);
        sendFrame(sys, data, true);
      }

      void
      sendPlanControl(const std::string& sys, const IMC::PlanControl* msg)
      {
        if (msg->type != IMC::PlanControl::PC_REQUEST)
          return;

        if (msg->op != IMC::PlanControl::PC_START)
          return;

        std::vector<uint8_t> data;
        data.push_back(CODE_PLAN);
        for (size_t i = 0; i < msg->plan_id.size(); ++i)
          data.push_back((uint8_t)msg->plan_id[i]);
        sendFrame(sys, data, true);
      }

      void
      recvPlanControl(uint16_t imc_src, uint16_t imc_dst, const IMC::UamRxFrame* msg)
      {
        IMC::OperationalLimits ol;
        ol.setDestination(imc_dst);
        ol.setSource(imc_src);
        ol.mask = 0;
        dispatch(ol);

        Delay::wait(1.0);

        IMC::PlanControl pc;
        pc.setSource(imc_src);
        pc.type = IMC::PlanControl::PC_REQUEST;
        pc.op = IMC::PlanControl::PC_START;
        pc.plan_id.assign(&msg->data[2], msg->data.size() - 3);
        pc.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
        dispatch(pc);

        war(DTR("start plan detected"));
      }

      void
      sendRestartSystem(const std::string& sys, const IMC::RestartSystem* msg)
      {
        (void)msg;
        sendFrame(sys, CODE_RESTART, true);
      }

      void
      recvRestartSystem(uint16_t imc_src, uint16_t imc_dst, const IMC::UamRxFrame* msg)
      {
        (void)msg;
        IMC::RestartSystem restart;
        restart.setSource(imc_src);
        restart.setDestination(imc_dst);
        dispatch(restart);
      }

      void
      sendReport(void)
      {
        double lat = 0;
        double lon = 0;
        Coordinates::toWGS84(m_estate, lat, lon);

        Report dat;
        dat.lat = lat;
        dat.lon = lon;
        dat.depth = (uint8_t)m_estate.depth;
        dat.yaw = (int16_t)(m_estate.psi * 100.0);
        dat.alt = (int16_t)(m_estate.alt * 10.0);
        dat.fuel_level = (uint8_t)m_fuel_level;
        dat.fuel_conf = (uint8_t)m_fuel_conf;
        dat.progress = (int8_t)m_progress;

        std::vector<uint8_t> data;
        data.resize(sizeof(dat) + 1);
        data[0] = CODE_REPORT;
        std::memcpy(&data[1], &dat, sizeof(dat));
        sendFrame("broadcast", data, false);
      }

      void
      recvReport(uint16_t imc_src, uint16_t imc_dst, const IMC::UamRxFrame* msg)
      {
        (void)imc_dst;

        Report dat;
        std::memcpy(&dat, &msg->data[2], sizeof(dat));

        IMC::EstimatedState es;
        es.setSource(imc_src);
        es.lat = dat.lat;
        es.lon = dat.lon;
        es.depth = (float)dat.depth;
        es.psi = (float)dat.yaw / 100.0;
        es.alt = (float)dat.alt / 10.0;
        dispatch(es);

        IMC::PlanControlState pcs;
        pcs.setSource(imc_src);
        pcs.plan_progress = (float)dat.progress;
        dispatch(pcs);

        IMC::FuelLevel fuel;
        fuel.setSource(imc_src);
        fuel.value = (float)dat.fuel_level;
        fuel.confidence = (float)dat.fuel_conf;
        dispatch(fuel);
      }

      //! Main loop of USBL modem.
      void
      onUsblModem(void)
      {
        if (m_usbl_modem != NULL)
        {
          // Trigger target.
          std::string sys;
          if (m_usbl_modem->run(sys, m_args.usbl_max_wait))
            sendRange(sys);
        }
      }

      //! Main loop of USBL node.
      void
      onUsblNode(void)
      {
        if (m_usbl_node != NULL)
        {
          std::vector<uint8_t> data;
          data.push_back(CODE_USBL);
          if (m_usbl_node->run(data))
            sendFrame("broadcast", data, false);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          onUsblModem();
          onUsblNode();

          if (m_args.report_enable)
          {
            if (m_reporter != NULL && m_reporter->trigger())
              sendReport();
          }

          if (m_send_next && m_msg_send_timer.overflow())
          {
            m_send_next = false;
            const IMC::AcousticOperation * req = m_msg_requests.at(0);
            replaceLastOp(req);
            sendMessage(req->system, req->msg);
          }
        }
      }
    };
  }
}

DUNE_TASK
