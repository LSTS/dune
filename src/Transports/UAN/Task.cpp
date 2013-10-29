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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace UAN
  {
    using DUNE_NAMESPACES;

    enum Codes
    {
      CODE_ABORT  = 0x00,
      CODE_RANGE  = 0x01,
      CODE_PLAN   = 0x02,
      CODE_REPORT = 0x03,
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
        m_rep_timer.setTop(m_args.report_period);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
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
        if (msg->data.size() < 1)
          return;

        uint16_t imc_addr = 0;
        try
        {
          imc_addr = resolveSystemName(msg->sys_src);
        }
        catch (...)
        {
          err(DTR("unknown system name: %s"), msg->sys_src.c_str());
          return;
        }

        switch (msg->data[0])
        {
          case CODE_REPORT:
            recvReport(imc_addr, msg);
            break;

          case CODE_ABORT:
            recvAbort(imc_addr, msg);
            break;

          case CODE_RANGE:
            recvRange(imc_addr, msg);
            break;

          case CODE_PLAN:
            recvPlanControl(imc_addr, msg);
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
        IMC::UamTxFrame frame;
        frame.setDestination(getSystemId());
        frame.sys_dst = sys;
        frame.seq = m_seq++;
        frame.flags = IMC::UamTxFrame::UTF_ACK;
        frame.data.push_back(CODE_ABORT);
        dispatch(frame);
      }

      void
      recvAbort(uint16_t imc_src, const IMC::UamRxFrame* msg)
      {
        (void)msg;
        war(DTR("got abort request"));

        IMC::Abort abort;
        abort.setSource(imc_src);
        dispatch(abort);
      }

      void
      sendRange(const std::string& sys)
      {
        spew("sending range to %s", sys.c_str());

        IMC::UamTxFrame frame;
        frame.setDestination(getSystemId());
        frame.sys_dst = sys;
        frame.seq = m_seq++;
        frame.flags = IMC::UamTxFrame::UTF_ACK;
        frame.data.push_back(CODE_RANGE);
        dispatch(frame);
      }

      void
      recvRange(uint16_t imc_src, const IMC::UamRxFrame* msg)
      {
        (void)imc_src;
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

        IMC::UamTxFrame frame;
        frame.setDestination(getSystemId());
        frame.sys_dst = sys;
        frame.seq = m_seq++;
        frame.flags = IMC::UamTxFrame::UTF_ACK;
        frame.data.push_back(CODE_PLAN);
        frame.data.push_back(msg->plan_id[0]);
        dispatch(frame);
      }

      void
      recvPlanControl(uint16_t imc_src, const IMC::UamRxFrame* msg)
      {
        IMC::OperationalLimits ol;
        ol.setSource(imc_src);
        ol.mask = 0;
        dispatch(ol);

        Delay::wait(1.0);

        char plan_name[2] = {msg->data[1], 0};
        IMC::PlanControl pc;
        pc.setSource(imc_src);
        pc.type = IMC::PlanControl::PC_REQUEST;
        pc.op = IMC::PlanControl::PC_START;
        pc.plan_id.assign(plan_name);
        pc.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
        dispatch(pc);

        war(DTR("start plan detected"));
      }

      void
      sendRestartSystem(const std::string& sys, const IMC::RestartSystem* msg)
      {
        (void)msg;
        IMC::UamTxFrame frame;
        frame.setDestination(getSystemId());
        frame.sys_dst = sys;
        frame.seq = m_seq++;
        frame.flags = IMC::UamTxFrame::UTF_ACK;
        frame.data.push_back(CODE_RESTART);
        dispatch(frame);
      }

      void
      recvRestartSystem(uint16_t imc_src, const IMC::UamRxFrame* msg)
      {
        (void)msg;
        IMC::RestartSystem restart;
        restart.setSource(imc_src);
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

        IMC::UamTxFrame tx;
        tx.setDestination(getSystemId());
        tx.sys_dst = "broadcast";
        tx.seq = m_seq++;
        tx.flags = 0;
        tx.data.resize(sizeof(dat) + 1);
        tx.data[0] = CODE_REPORT;
        std::memcpy(&tx.data[1], &dat, sizeof(dat));
        dispatch(tx);
      }

      void
      recvReport(uint16_t imc_src, const IMC::UamRxFrame* msg)
      {
        Report dat;
        std::memcpy(&dat, &msg->data[1], sizeof(dat));

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
