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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace AUV
  {
    namespace LostComms
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Expected name of the plan to consider lost comms plan
        std::string plan_name;
        //! Heartbeat timeout.
        float timeout;
      };

      enum DataReady
      {
        //! Got no data
        GOT_NOTHING = 0x00,
        //! Got vehicle state
        GOT_VSTATE = 0x01,
        //! Got vehicle medium
        GOT_MEDIUM = 0x02,
        //! Got Plan control state
        GOT_PCS = 0x04,
        //! Got defined plan
        GOT_LCPLAN = 0x08,
        //! Got all
        GOT_ALL = 0x0f
      };

      enum LostCommsState
      {
        //! Conditions not met
        STATE_NOT_MET,
        //! Timer started
        STATE_STARTED,
        //! Lost comms plan sent
        STATE_EXEC
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Lost communications timer.
        Counter<double> m_lost_coms_timer;
        //! Vehicle state is error or service
        bool m_serv_err;
        //! Vehicle medium
        IMC::VehicleMedium m_medium;
        //! Plan Control State
        IMC::PlanControlState m_pcs;
        //! Availability of data
        unsigned m_dr;
        //! State of the task
        LostCommsState m_lcs;
        //! Plan specification for lost comms
        IMC::PlanSpecification m_plan;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_serv_err(false),
          m_dr(GOT_NOTHING),
          m_lcs(STATE_NOT_MET)
        {
          param("Plan Name", m_args.plan_name)
          .defaultValue("lostcomms")
          .description("Name for the lost communciations plan");

          param("Lost Comms Timeout", m_args.timeout)
          .defaultValue("300")
          .units(Units::Second)
          .description("Timeout before sending lost comms plan");

          bind<IMC::Abort>(this);
          bind<IMC::Heartbeat>(this);
          bind<IMC::PlanControlState>(this);
          bind<IMC::VehicleState>(this);
          bind<IMC::VehicleMedium>(this);
          bind<IMC::PlanControl>(this);
          bind<IMC::PlanDB>(this);
        }

        void
        onResourceInitialization(void)
        {
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        onDeactivation(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        consume(const IMC::Abort* msg)
        {
          if (msg->getDestination() != getSystemId())
            return;

          if (isActive())
            requestDeactivation();
        }

        void
        consume(const IMC::Heartbeat* msg)
        {
          if (msg->getSource() == getSystemId())
            return;

          if ((msg->getSource() & 0x4000) == 0)
            return;

          if (m_lcs == STATE_STARTED)
            m_lost_coms_timer.reset();
        }

        void
        consume(const IMC::PlanControlState* msg)
        {
          m_dr |= GOT_PCS;

          m_pcs = *msg;
        }

        void
        consume(const IMC::VehicleState* msg)
        {
          m_dr |= GOT_VSTATE;

          m_serv_err = (msg->op_mode == IMC::VehicleState::VS_SERVICE) || (msg->op_mode == IMC::VehicleState::VS_ERROR);
        }

        void
        consume(const IMC::VehicleMedium* msg)
        {
          m_dr |= GOT_MEDIUM;

          m_medium = *msg;
        }

        void
        getPlanSpec(const IMC::InlineMessage<IMC::Message>* msg)
        {
          if (msg->isNull())
          {
            m_dr &= ~GOT_LCPLAN;
            return;
          }

          const IMC::PlanSpecification* spec = static_cast<const IMC::PlanSpecification*>(msg->get());

          if (spec == NULL)
          {
            m_dr &= ~GOT_LCPLAN;
            return;
          }

          m_dr |= GOT_LCPLAN;
          m_plan = *spec;

          debug("got lost comms plan");

          if (!isActive())
            requestActivation();

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        consume(const IMC::PlanControl* msg)
        {
          if ((msg->type == IMC::PlanControl::PC_REQUEST) &&
              (msg->op == IMC::PlanControl::PC_LOAD) &&
              (msg->plan_id.compare(m_args.plan_name) == 0))
          {
            getPlanSpec(&msg->arg);
          }
        }

        void
        consume(const IMC::PlanDB* msg)
        {
          if ((msg->type == IMC::PlanDB::DBT_REQUEST) &&
              (msg->op == IMC::PlanDB::DBOP_SET) &&
              (msg->plan_id.compare(m_args.plan_name) == 0))
          {
            getPlanSpec(&msg->arg);
          }
        }

        bool
        testVehicleState(void)
        {
          return m_serv_err;
        }

        //! Checks if the vehicle is plan ready or blocked,
        //! and had a failure outcome from the previous plan
        bool
        testPlanControlState(void)
        {
          // is it not executing a plan
          bool is_idle = (m_pcs.state == IMC::PlanControlState::PCS_BLOCKED) || (m_pcs.state == IMC::PlanControlState::PCS_READY);

          // is coming from a bad outcome plan
          bool has_bad_outcome = m_pcs.last_outcome == IMC::PlanControlState::LPO_FAILURE;

          return is_idle && has_bad_outcome;
        }

        bool
        canStartTimer(void)
        {
          bool at_surface = m_medium.medium == IMC::VehicleMedium::VM_WATER;

          return testVehicleState() && testPlanControlState() && at_surface;
        }

        bool
        canKeepTimer(void)
        {
          bool in_water = (m_medium.medium == IMC::VehicleMedium::VM_WATER) ||
          (m_medium.medium == IMC::VehicleMedium::VM_UNDERWATER);

          return testVehicleState() && testPlanControlState() && in_water;
        }

        bool
        canTakeAction(void)
        {
          return m_lost_coms_timer.overflow();
        }

        bool
        isStillExecuting(void)
        {
          if ((m_pcs.state == IMC::PlanControlState::PCS_INITIALIZING) ||
              (m_pcs.state == IMC::PlanControlState::PCS_EXECUTING))
          {
            if (m_pcs.plan_id.compare(m_args.plan_name) == 0)
              return true;
          }

          return false;
        }

        void
        task(void)
        {
          if (!isActive())
            return;

          if (m_dr != GOT_ALL)
            return;

          switch (m_lcs)
          {
            case STATE_NOT_MET:
              if (canStartTimer())
              {
                debug("conditions are met to start timer");

                m_lost_coms_timer.setTop(m_args.timeout);

                m_lcs = STATE_STARTED;
              }
              break;
            case STATE_STARTED:
              trace("time left is %.1f", m_lost_coms_timer.getRemaining());

              if (!canKeepTimer())
              {
                trace("lost conditions to keep timer");
                m_lcs = STATE_NOT_MET;
              }
              else if (canTakeAction())
              {
                war(DTR("starting lost comms plan"));

                IMC::PlanControl pc;
                pc.type = IMC::PlanControl::PC_REQUEST;
                pc.op = IMC::PlanControl::PC_START;
                pc.request_id = 0;
                pc.plan_id = m_args.plan_name;
                pc.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
                pc.arg.set(m_plan);

                dispatch(pc);

                m_lcs = STATE_EXEC;
              }
              break;
            case STATE_EXEC:
              if (!isStillExecuting())
              {
                trace("no longer executing lost comms");
                m_lcs = STATE_NOT_MET;
              }
              break;
          }
        }
      };
    }
  }
}

DUNE_TASK
