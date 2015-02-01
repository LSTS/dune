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

// DUNE headers.
#include <DUNE/DUNE.hpp>

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
      CODE_RESTART = 0x04
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
      //! Report periodicity.
      double report_period;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Estimated state.
      IMC::EstimatedState m_estate;
      //! Report timer.
      Counter<double> m_report_timer;
      //! Last progress.
      float m_progress;
      //! Last fuel level.
      float m_fuel_level;
      //! Last fuel level confidence.
      float m_fuel_conf;
      //! Saved plan control.
      IMC::PlanControl* m_pc;
      //! Report timer.
      Counter<double> m_rep_timer;
      //! Sequence number.
      uint16_t m_seq;
      //! Last acoustic operation.
      IMC::AcousticOperation* m_last_acop;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_seq(0),
        m_last_acop(NULL)
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

        bind<IMC::EstimatedState>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::AcousticOperation>(this);
        bind<IMC::UamRxFrame>(this);
        bind<IMC::UamTxStatus>(this);
        bind<IMC::UamRxRange>(this);
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
          m_rep_timer.setTop(m_args.report_period);
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

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_rep_timer.reset();
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
        }
      }

      void
      recvMessage(const IMC::UamRxFrame* msg)
      {
        (void)msg;
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
        }
      }
    };
  }
}

DUNE_TASK
