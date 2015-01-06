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
// Author: Joao Fortuna                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace UAV
  {
    namespace LostComms
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Heartbeat timeout.
        float tout_heartbeat;
        //! Timeout if executing plan
        float tout_mission;
        //! LostComms plan name.
        std::string plan;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Heartbeat timeout.
        Time::Counter<double> m_tout_heartbeat;
        //! Mission timeout.
        Time::Counter<double> m_tout_mission;
        //! True if executing plan.
        bool m_in_mission;
        //! True if executing LostComms plan.
        bool m_in_lc;
        //! Lost comms checked.
        bool m_check_plan;
        //! Got lost comms plan.
        bool m_got_plan;
        //! Plan specification for lost comms.
        IMC::PlanSpecification m_plan;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_in_mission(false),
          m_in_lc(false),
          m_check_plan(false),
          m_got_plan(false)
        {
          param("Heartbeat Timeout", m_args.tout_heartbeat)
          .units(Units::Second)
          .defaultValue("10.0")
          .minimumValue("0.0")
          .maximumValue("60.0")
          .description("Heartbeat Timeout");

          param("In Mission Timeout", m_args.tout_mission)
          .units(Units::Second)
          .defaultValue("20.0")
          .minimumValue("0.0")
          .maximumValue("60.0")
          .description("Timeout if executing plan");

          param("Lost Comms Plan", m_args.plan)
          .defaultValue("lost_comms")
          .description("Plan to be executed in case of Lost Communications");

          bind<IMC::Heartbeat>(this);
          bind<IMC::PlanControl>(this);
          bind<IMC::PlanDB>(this);
          bind<IMC::PlanControlState>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (paramChanged(m_args.tout_heartbeat))
            m_tout_heartbeat.setTop(m_args.tout_heartbeat);

          if (paramChanged(m_args.tout_mission))
            m_tout_mission.setTop(m_args.tout_mission);
        }

        void
        checkPlan(void)
        {
          m_check_plan = true;
          IMC::PlanDB db;
          db.type = IMC::PlanDB::DBT_REQUEST;
          db.op = IMC::PlanDB::DBOP_GET;
          db.plan_id = m_args.plan;
          dispatch(db);
        }

        void
        consume(const IMC::Heartbeat* msg)
        {
          if (msg->getSource() == getSystemId())
            return;

          // Use only console Heartbeats.
          if ((msg->getSource() & 0x4000) == 0)
            return;

          resetTimers();
        }

        void
        consume(const IMC::PlanControl* msg)
        {
          if ((msg->type == IMC::PlanControl::PC_REQUEST) &&
              (msg->op == IMC::PlanControl::PC_LOAD) &&
              (msg->plan_id.compare(m_args.plan) == 0))
          {
            getPlanSpec(&msg->arg);
          }
        }

        void
        consume(const IMC::PlanDB* msg)
        {
          if (!m_check_plan)
          {
            if (msg->op != IMC::PlanDB::DBOP_BOOT)
              checkPlan();
          }

          if (msg->plan_id.compare(m_args.plan) == 0)
          {
            if (((msg->type == IMC::PlanDB::DBT_REQUEST) &&
                 (msg->op == IMC::PlanDB::DBOP_SET)) ||
                ((msg->type == IMC::PlanDB::DBT_SUCCESS) &&
                 (msg->op == IMC::PlanDB::DBOP_GET)))
            {
              getPlanSpec(&msg->arg);
            }
          }
        }

        void
        consume(const IMC::PlanControlState* msg)
        {
          m_in_mission = (msg->state == IMC::PlanControlState::PCS_EXECUTING);
          m_in_lc = (std::strcmp(msg->plan_id.c_str(), m_args.plan.c_str()) == 0);
        }

        void
        resetTimers(void)
        {
          m_tout_heartbeat.reset();
          m_tout_mission.reset();
        }

        void
        startLostComms(void)
        {
          IMC::PlanControl p_control;
          p_control.plan_id = m_args.plan;
          p_control.op = IMC::PlanControl::PC_START;
          p_control.type = IMC::PlanControl::PC_REQUEST;
          p_control.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
          p_control.arg.set(m_plan);

          dispatch(p_control);
          resetTimers();
        }

        void
        getPlanSpec(const IMC::InlineMessage<IMC::Message>* msg)
        {
          if (msg->isNull())
          {
            m_got_plan = false;
            return;
          }

          if (msg->get()->getId() != DUNE_IMC_PLANSPECIFICATION)
          {
            m_got_plan = false;
            return;
          }

          const IMC::PlanSpecification* spec = static_cast<const IMC::PlanSpecification*>(msg->get());

          if (spec == NULL)
          {
            m_got_plan = false;
            return;
          }

          m_got_plan = true;
          m_plan = *spec;

          debug("got lost comms plan");

          if (!isActive())
            requestActivation();

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        task(void)
        {
          if (!isActive())
            return;

          if (m_in_lc)
            return;

          if ((m_in_mission && m_tout_mission.overflow()) ||
              (!m_in_mission && m_tout_heartbeat.overflow()))
            startLostComms();
        }
      };
    }
  }
}

DUNE_TASK
