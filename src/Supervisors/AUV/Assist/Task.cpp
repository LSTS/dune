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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace AUV
  {
    namespace Assist
    {
      using DUNE_NAMESPACES;

      //! Timeout for the vertical monitor
      static const float c_vertical_timeout = 20.0;
      //! Plan generation command timeout
      static const float c_gen_timeout = 3.0;
      //! Stabilization time before testing ascent rate
      static const float c_stab_time = 20.0;

      struct Arguments
      {
        //! RPM value for dislodging the vehicle
        float dislodge_rpm;
        //! Depth threshold to consider that it is submerged
        float depth_threshold;
        //! Threshold for the depth rate of change
        float min_ascent_rate;
        //! Window size for the moving average of the ascent rate
        unsigned ascent_wsize;
        //! Minimum time with a low ascent rate before triggering assist
        float trigger_time;
        //! Dislodge plan id
        std::string plan_id;
      };

      enum AssistState
      {
        //! Idle state
        ST_IDLE,
        //! Check if stuck
        ST_CHECK_STUCK,
        //! Send acoustic signal
        ST_ACOUSTIC,
        //! Start dislodge
        ST_START_DISLODGE,
        //! Wait for dislodge to be done
        ST_WAIT_DISLODGE
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Vertical speed (z)
        float m_vz;
        //! Current depth
        float m_depth;
        //! Current Medium
        uint8_t m_medium;
        //! Current vehicle state
        uint8_t m_vstate;
        //! Rate of ascent
        VerticalMonitor* m_vmon;
        //! Task's state
        AssistState m_astate;
        //! Timer for triggering the dislodge
        Time::Counter<float> m_dtimer;
        //! Finish depth of the running plan
        float m_finish_depth;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_vmon(NULL),
          m_astate(ST_IDLE),
          m_dtimer(c_stab_time),
          m_finish_depth(-1.0)
        {
          m_ctx.config.get("General", "Maximum Underwater RPMs", "1700.0", m_args.dislodge_rpm);

          m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.depth_threshold);

          param("Minimum Ascent Rate", m_args.min_ascent_rate)
          .defaultValue("0.1")
          .units(Units::MeterPerSecond)
          .description("Threshold for the depth rate of change");

          param("Ascent Rate Window Size", m_args.ascent_wsize)
          .defaultValue("5")
          .description("Window size for the moving average of the ascent rate");

          param("Stuck Trigger Time", m_args.trigger_time)
          .defaultValue("60.0")
          .units(Units::Second)
          .description("Amount of time, after meeting conditions, before triggering dislodging behavior");

          param("Dislodge Plan Id", m_args.plan_id)
          .defaultValue("dislodge")
          .description("Dislodge plan id");

          bind<IMC::VehicleState>(this);
          bind<IMC::VehicleMedium>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::PlanGeneration>(this);
          bind<IMC::PlanControl>(this);
        }

        void
        onResourceAcquisition(void)
        {
          m_vmon = new VerticalMonitor(c_vertical_timeout, m_args.min_ascent_rate);
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_vmon);
        }

        void
        onResourceInitialization(void)
        {
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }

        void
        consume(const IMC::VehicleState* msg)
        {
          m_vstate = msg->op_mode;
        }

        void
        consume(const IMC::VehicleMedium* msg)
        {
          m_medium = msg->medium;
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          m_vz = msg->vz;
          m_depth = msg->depth;

          // reset finish depth if the vehicle comes to the surface
          if (m_depth < m_args.depth_threshold)
            m_finish_depth = -1.0;
        }

        void
        consume(const IMC::PlanGeneration* msg)
        {
          if (m_astate != ST_START_DISLODGE)
            return;

          if (msg->cmd != IMC::PlanGeneration::CMD_EXECUTE)
            return;

          if (msg->plan_id != m_args.plan_id)
            return;

          if (msg->op != IMC::PlanGeneration::OP_SUCCESS)
          {
            failedStartPlan();
            return;
          }

          setState(ST_WAIT_DISLODGE);
        }

        void
        consume(const IMC::PlanControl* msg)
        {
          if (m_astate == ST_WAIT_DISLODGE)
          {
            checkDislodgeResult(msg);
          }
          else if ((m_astate == ST_IDLE) || (m_astate == ST_CHECK_STUCK))
          {
            getFinishDepth(msg);
          }
        }

        //! Check if the received PlanControl message reports to
        //! a successful Dislodge plan request
        //! @param[in] msg pointer to PlanControl message
        void
        checkDislodgeResult(const IMC::PlanControl* msg)
        {
          if (msg->type == IMC::PlanControl::PC_REQUEST)
            return;

          if (msg->type != IMC::PlanControl::PC_START)
            return;

          if (msg->plan_id != m_args.plan_id)
            return;

          if (msg->type == IMC::PlanControl::PC_SUCCESS)
            setState(ST_IDLE);
          else if (msg->type == IMC::PlanControl::PC_FAILURE)
            setState(ST_CHECK_STUCK);
        }

        //! Check if the received PlanControl message reports to
        //! a plan that has just finished.
        //! If so, save the depth at which the plan ended
        //! @param[in] msg pointer to PlanControl message
        void
        getFinishDepth(const IMC::PlanControl* msg)
        {
          if ((msg->type != IMC::PlanControl::PC_SUCCESS) &&
              (msg->type != IMC::PlanControl::PC_FAILURE))
            return;

          m_finish_depth = m_depth;
        }

        //! Signal that the start of the dislodge plan has failed
        inline void
        failedStartPlan(void)
        {
          err(DTR("failed to start %s plan"), m_args.plan_id.c_str());
        }

        //! Dispatch the dislodge plan
        inline void
        dispatchDislodge(void)
        {
          IMC::PlanGeneration pg;
          pg.op = IMC::PlanGeneration::OP_REQUEST;
          pg.cmd = IMC::PlanGeneration::CMD_EXECUTE;
          pg.plan_id = m_args.plan_id;
          pg.params = (Utils::String::str("rpm=%.1f,", m_args.dislodge_rpm) +
                       "ignore_errors=true,calibrate=false");
          dispatch(pg);
        }

        //! Test the main conditions to consider throwing a dislodge plan
        //! @return true if the conditions hold, false otherwise
        bool
        mainConditions(void)
        {
          if ((m_vstate != IMC::VehicleState::VS_SERVICE) &&
              (m_vstate != IMC::VehicleState::VS_ERROR))
            return false;

          if (m_medium != IMC::VehicleMedium::VM_UNDERWATER)
            return false;

          if (m_depth < m_args.depth_threshold)
            return false;

          if (m_finish_depth < m_args.depth_threshold)
            return false;

          return true;
        }

        //! Test if the ascent rate condition hold
        //! @return true if condition holds, false otherwise
        bool
        ascentCondition(void)
        {
          return m_vmon->isProgressSlow(-m_vz);
        }

        //! Set the state machine's current state
        //! @param[in] state target state to which the machine should transition
        void
        setState(AssistState state)
        {
          switch (state)
          {
            case ST_CHECK_STUCK:
              m_dtimer.setTop(m_args.trigger_time);
              break;
            case ST_START_DISLODGE:
              m_dtimer.setTop(c_gen_timeout);
              dispatchDislodge();
              break;
            default:
              break;
          }

          m_astate = state;
        }

        //! Routine to run when on idle state
        void
        onIdle(void)
        {
          if (!mainConditions())
          {
            m_dtimer.setTop(c_stab_time);
            return;
          }

          if (m_dtimer.overflow())
          {
            setState(ST_CHECK_STUCK);
            m_dtimer.reset();
          }
        }

        //! Routine to run when on checkstuck state
        void
        onCheckStuck(void)
        {
          if (!mainConditions())
          {
            setState(ST_IDLE);
            return;
          }

          if (ascentCondition() && m_dtimer.overflow())
          {
            setState(ST_START_DISLODGE);
            m_dtimer.reset();
          }
        }

        //! Routine to run when on startdislodge state
        void
        onStartDislodge(void)
        {
          if (m_dtimer.overflow())
          {
            failedStartPlan();
            setState(ST_CHECK_STUCK);
          }
        }

        //! Routine to run when waiting for dislodge to end
        void
        onWaitDislodge(void)
        {

        }

        void
        task(void)
        {
          switch (m_astate)
          {
            case ST_IDLE:
              onIdle();
              break;
            case ST_CHECK_STUCK:
              onCheckStuck();
              break;
            case ST_START_DISLODGE:
              onStartDislodge();
              break;
            case ST_WAIT_DISLODGE:
              onWaitDislodge();
              break;
            default:
              break;
          }
        }
      };
    }
  }
}

DUNE_TASK
