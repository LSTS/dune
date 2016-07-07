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
// Author: Yonca Bayrakdar                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Routing
  {
    using DUNE_NAMESPACES;

    // Synchronization byte.
    static const uint8_t c_sync = 0xA1;
    static const uint8_t c_poly = 0x07;
    static const int c_rssi_threshold = -47;

    struct Node
    {
      std::string id;
      bool is_sink;
      float timestamp;
      float lat;
      float lon;
      uint8_t depth;
      int16_t yaw;
      int16_t alt;
      int8_t progress;
      uint8_t fuel_level;
      uint8_t fuel_conf;
      float weight;
      float dist_from_sink;
      bool forward; //If the neighbor is closer to the sink than me "forward" is true
      float rssi; // -85 < rssi <-20 acceptible signal strength
      uint16_t integrity; //If <100 considered as weak link
    };

    enum Codes
    {
      CODE_ABORT   = 0x00,
      CODE_RANGE   = 0x01,
      CODE_PLAN    = 0x02,
      CODE_REPORT  = 0x03,
      CODE_RESTART = 0x04,
      CODE_RAW     = 0x05
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
      bool i_am_sink;
    };

    struct Arguments
    {
      //! Enable reports.
      bool report_enable;
      //! Report periodicity.
      double report_period;
      //! Data period.
      double data_period;
      //! sink latitude.
      float sink_lat;
      //! sink longitude.
      float sink_lon;
      //! True if the node is sink
      bool i_am_sink;
      //! ID of the sink
      std::string sys_sink;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Routing neighbors.
      struct Node m_neighbors[5];
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //Data timer
      Counter<double> m_data_timer;
      //! Last progress.
      float m_progress;
      //! Last fuel level.
      float m_fuel_level;
      //! Last fuel level confidence.
      float m_fuel_conf;
      //! Report timer.
      Counter<double> m_rep_timer;
      //! Sequence number.
      uint16_t m_seq;
      //! Last acoustic operation.
      IMC::AcousticOperation* m_last_acop;
      //! Task arguments.
      Arguments m_args;
      //! Where is id.
      int m_where_is;
      //! Number of neighbors.
      unsigned m_neighbor_count;
      //! Distance from sink
      float m_dist_from_sink;
      //! HistoricData request id
      unsigned m_request_id;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_seq(0),
        m_last_acop(NULL),
        m_request_id(0)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER,
                    true);

        param(DTR_RT("Enable Reports"), m_args.report_enable)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("Enable system state reporting");

        param(DTR_RT("Reports Periodicity"), m_args.report_period)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("60")
        .minimumValue("30")
        .maximumValue("600")
        .description("Reports periodicity");

        param(DTR_RT("Data Periodicity"), m_args.data_period)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .units(Units::Second)
        .defaultValue("600")
        .minimumValue("100")
        .maximumValue("1500")
        .description("Data periodicity");

        param(DTR_RT("Sink Lat"), m_args.sink_lat)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("0.0")
        .description("Sink Latitude");

        param(DTR_RT("Sink Lon"), m_args.sink_lon)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("0.0")
        .description("Sink Longitude");

        param(DTR_RT("I am Sink"), m_args.i_am_sink)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("false")
        .description("If the node is sink");

        param(DTR_RT("Sink"), m_args.sys_sink)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .defaultValue("0")
        .description("Name of the sink node");

        m_where_is = -1;
        m_neighbor_count = 0;

        bind<IMC::EstimatedState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::AcousticOperation>(this);
        bind<IMC::UamRxFrame>(this);
        bind<IMC::UamTxStatus>(this);
        bind<IMC::UamRxRange>(this);
        bind<IMC::AcousticLink>(this);
        bind<IMC::HistoricDataQuery>(this);
      }


      ~Task(void)
      {
        onResourceRelease();
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.report_period))
        {
          m_rep_timer.setTop(m_args.report_period);
          m_data_timer.setTop(m_args.data_period);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://acoustic/operation/")
        + URL::encode(getEntityLabel());
        dispatch(announce);

        m_rep_timer.reset();
        m_data_timer.reset();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_rep_timer.reset();
        m_data_timer.reset();
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        clearLastOp();
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        m_estate = *msg;
        m_dist_from_sink = WGS84::distance((float)m_estate.lat,
        (float)m_estate.lon, 0.0, (float)m_args.sink_lat,
        (float) m_args.sink_lon,0.0);
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
            sendMessage(msg->system, msg->msg);
            break;

          default:
            return;
        }
        replaceLastOp(msg);
      }

      void
      consume(const IMC::AcousticLink* msg)
      {
        bool exists=false;
        if (msg->getSource() == getSystemId())
          return;
        exists = searchNeighbor(msg->peer);
        if(!exists)
        {
          //if neighbor is not in the list
          inf("this one does not exist");
          inf("Acousic Link add");
          Node newNeighbor;
          newNeighbor.id=msg->peer;
          newNeighbor.rssi=msg->rssi;
          newNeighbor.integrity=msg->integrity;
          m_neighbors[m_neighbor_count]=newNeighbor;
          m_neighbor_count++;
        }
        else
        {
          //if neighbor is in the list
          inf("this one exists");
          m_neighbors[m_where_is].rssi=msg->rssi;
          m_neighbors[m_where_is].integrity = msg->integrity;
        }
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
          debug("invalid synchronization number");
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
            /**************************************************/
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

        if (msg->value == IMC::UamTxStatus::UTS_IP)
        {
          if (m_last_acop->op == IMC::AcousticOperation::AOP_RANGE)
          {
            IMC::AcousticOperation aop(*m_last_acop);
            aop.op = IMC::AcousticOperation::AOP_RANGE_IP;
            dispatch(aop);
          }
          else if (m_last_acop->op == IMC::AcousticOperation::AOP_ABORT)
          {
            IMC::AcousticOperation aop(*m_last_acop);
            aop.op = IMC::AcousticOperation::AOP_ABORT_IP;
            dispatch(aop);
          }
        }
        else if (msg->value == IMC::UamTxStatus::UTS_DONE)
        {
          if (m_last_acop->op == IMC::AcousticOperation::AOP_ABORT)
          {
            IMC::AcousticOperation aop(*m_last_acop);
            aop.op = IMC::AcousticOperation::AOP_ABORT_ACKED;
            dispatch(aop);
          }
        }
        else
        {
          if (m_last_acop->op == IMC::AcousticOperation::AOP_ABORT)
          {
            IMC::AcousticOperation aop(*m_last_acop);
            aop.op = IMC::AcousticOperation::AOP_ABORT_TIMEOUT;
            dispatch(aop);
          }
          else if (m_last_acop->op == IMC::AcousticOperation::AOP_RANGE)
          {
            IMC::AcousticOperation aop(*m_last_acop);
            aop.op = IMC::AcousticOperation::AOP_RANGE_TIMEOUT;
            dispatch(aop);
          }
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

        switch (msg->getId())
        {
          case DUNE_IMC_PLANCONTROL:
            sendPlanControl(sys, static_cast<const IMC::PlanControl*>(msg));
            break;
          default:
            sendRawMessage(sys, msg);
            break;
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
          dispatch(m, DF_KEEP_TIME);
          debug("Acoustic message successfully parsed as '%s'.", m->getName());
        }
        catch (std::exception& ex) {
          err("Error parsing raw message from UAM frame: %s.", ex.what());
        }
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
        dat.i_am_sink = m_args.i_am_sink;

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

        // If report is coming from another system add as neighbor
        if (imc_src != getSystemId())
          addNeighbor(imc_src, dat);

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

      void
      sendData(void)
      {
        if (m_args.i_am_sink)
          return;

        debug("Querying data store for data to send.");
        IMC::HistoricDataQuery query;
        query.max_size = 1000;
        query.req_id = m_request_id++;
        query.type = IMC::HistoricDataQuery::HRTYPE_QUERY;
        dispatch(query);
      }

      void
      consume(const IMC::HistoricDataQuery* msg)
      {
        if (msg->getDestinationEntity() != getEntityId() || msg->getDestination() != getSystemId())
        {
          spew("Not processing HistoricData for other entity.");
          return;
        }

        if (msg->type == IMC::HistoricDataQuery::HRTYPE_REPLY)
        {
          std::string relay = findRelay();
          inf("Sending data to relay (%s)", relay.c_str());
          sendRawMessage(relay, msg->data.get());
        }
      }

      std::string
      findRelay(void)
      {
        //! Will find the best relay according to ......
        //! Will be totally updated
        if (m_neighbor_count == 0)
          return "";
        unsigned i;
        int best = 0;
        float bestRssi = 0.0;

        bestRssi = m_neighbors[0].rssi;
        for (i = 1; i < m_neighbor_count ; i++)
        {
          if (m_neighbors[i].forward)
          {
            if (m_neighbors[i].is_sink)
            {
              if (m_neighbors[i].rssi >= c_rssi_threshold)
                return m_neighbors[i].id;
            }
            if (m_neighbors[i].rssi < bestRssi)
            {
              bestRssi = m_neighbors[i].rssi;
              best = i;
            }
          }
        }
        return m_neighbors[best].id;
      }

      float
      calcWeight(Report dat)
      {
        //! Calculates the weight value for each neighbor
        //! considering the distance and fuel level
        //!But now it is only distance
        float dist,depDif;
        uint8_t depth = (uint8_t)m_estate.depth;
        double lat = 0;
        double lon = 0;
        Coordinates::toWGS84(m_estate, lat, lon);
        dist = WGS84::distance((float)dat.lat,(float)dat.lon,0.0,
                               (float)lat,(float)lon,0.0);
        //depDif = std::abs(dat.depth - depth);
        //return ((dist + depDif) * (1 / float(dat.fuel_level)));
        return dist;
      }

      void
      addNeighbor(uint16_t src, Report dat)
      {
        bool exists = searchNeighbor(resolveSystemId(src));
        float dist;
        dist = Coordinates::WGS84::distance(dat.lat,dat.lon,0.0,m_args.sink_lat,m_args.sink_lon,0.0);
        if(!exists)
        {
          //if neighbor is not in the list
          inf("this one does not exist");
          Node newNeighbor;
          newNeighbor.forward = false;//default
          newNeighbor.id=resolveSystemId(src);
          newNeighbor.is_sink=dat.i_am_sink;
          newNeighbor.lat=dat.lat;
          newNeighbor.lon=dat.lon;
          newNeighbor.depth=dat.depth;
          newNeighbor.yaw=dat.yaw;
          newNeighbor.alt=dat.alt;
          newNeighbor.progress=dat.progress;
          newNeighbor.fuel_level= dat.fuel_level;
          newNeighbor.fuel_conf=dat.fuel_conf;
          newNeighbor.weight=calcWeight(dat);
          newNeighbor.dist_from_sink = dist;
          if(m_dist_from_sink > dist)
            newNeighbor.forward = true;
          m_neighbors[m_neighbor_count]=newNeighbor;
          m_neighbor_count++;
          inf("I have %u neighbors",m_neighbor_count);
          printNeighbors();
        }
        else
        {
          //if neighbor is in the list
          // Find that in which the index of the neighbor ,
          // it updates the information in the index
          inf("this one exists");
          m_neighbors[m_where_is].is_sink=dat.i_am_sink;
          m_neighbors[m_where_is].lat=dat.lat;
          m_neighbors[m_where_is].lon=dat.lon;
          m_neighbors[m_where_is].depth=dat.depth;
          m_neighbors[m_where_is].yaw=dat.yaw;
          m_neighbors[m_where_is].alt=dat.alt;
          m_neighbors[m_where_is].progress=dat.progress;
          m_neighbors[m_where_is].fuel_level= dat.fuel_level;
          m_neighbors[m_where_is].fuel_conf=dat.fuel_conf;
          m_neighbors[m_where_is].weight=calcWeight(dat);
          m_neighbors[m_where_is].dist_from_sink = dist;
          if(m_dist_from_sink > dist)
            m_neighbors[m_where_is].forward = true;
        }
      }

      void
      printNeighbors(void)
      {
        unsigned i;
        for (i = 0; i < m_neighbor_count; i++)
        {
          inf("neighbor %u", i+1);
          inf("-------------");
          inf("id=%s", m_neighbors[i].id.c_str());
        }
      }

      bool
      searchNeighbor(std::string id)
      {
      //Returns the position of the neighbor being searched in the neighbor list
      //If not found returns -1
        unsigned i;
        for (i = 0; i < m_neighbor_count; i++)
        {
          if (m_neighbors[i].id == id)
          {
            m_where_is=i;
            return true;
          }
        }

        m_where_is = -1;
        return false;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (m_args.report_enable && isActive())
          {
            if (m_rep_timer.overflow())
            {
              m_rep_timer.reset();
              sendReport();
            }
          }

          if (m_data_timer.overflow())
          {
            m_data_timer.reset();
            if(m_neighbor_count>0)
              sendData();
          }
        }
      }
    };
  }
}

DUNE_TASK
