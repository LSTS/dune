//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "AscentRate.hpp"

namespace Supervisors
{
  namespace AUV
  {
    namespace Assist
    {
      using DUNE_NAMESPACES;

      //! Time between depth updates
      static const float c_depth_period = 5.0;
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
        //! Current depth
        float m_depth;
        //! Current Medium
        uint8_t m_medium;
        //! Current vehicle state
        uint8_t m_vstate;
        //! Rate of ascent
        AscentRate* m_ar;
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
          m_ar(NULL),
          m_astate(ST_IDLE),
          m_dtimer(c_stab_time),
          m_finish_depth(-1.0)
        {
          param("Dislodging RPMs", m_args.dislodge_rpm)
          .defaultValue("1600")
          .units(Units::RPM)
          .description("RPM value for dislodging the vehicle");

          param("Depth Threshold", m_args.depth_threshold)
          .defaultValue("0.2")
          .units(Units::Meter)
          .description("Depth threshold to consider that it is submerged");

          param("Minimum Ascent Rate", m_args.min_ascent_rate)
          .defaultValue("0.1")
          .units(Units::MeterPerSecond)
          .description("Threshold for the depth rate of change");

          param("Ascent Rate Window Size", m_args.ascent_wsize)
          .defaultValue("5")
          .description("Window size for the moving average of the ascent rate");

          param("Stuck Trigger Time", m_args.trigger_time)
          .defaultValue("30.0")
          .units(Units::Second)
          .description("Amount of time, after meeting conditions, before triggering dislodging behavior");

          bind<IMC::VehicleState>(this);
          bind<IMC::VehicleMedium>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::PlanGeneration>(this);
          bind<IMC::PlanControl>(this);
        }

        void
        onResourceAcquisition(void)
        {
          m_ar = new AscentRate(m_args.ascent_wsize, c_depth_period);
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_ar);
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
          m_ar->update(msg->depth);
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

          if (msg->plan_id != "dislodge")
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

        void
        checkDislodgeResult(const IMC::PlanControl* msg)
        {
          if (msg->type == IMC::PlanControl::PC_REQUEST)
            return;

          if (msg->type != IMC::PlanControl::PC_START)
            return;

          if (msg->plan_id != "dislodge")
            return;

          if (msg->type == IMC::PlanControl::PC_SUCCESS)
            setState(ST_IDLE);
          else if (msg->type == IMC::PlanControl::PC_FAILURE)
            setState(ST_CHECK_STUCK);
        }

        void
        getFinishDepth(const IMC::PlanControl* msg)
        {
          if ((msg->type != IMC::PlanControl::PC_SUCCESS) &&
              (msg->type != IMC::PlanControl::PC_FAILURE))
            return;

          m_finish_depth = m_depth;
        }

        inline void
        failedStartPlan(void)
        {
          err(DTR("failed to start dislodge maneuver"));
        }

        inline void
        dispatchDislodge(void)
        {
          IMC::PlanGeneration pg;
          pg.op = IMC::PlanGeneration::OP_REQUEST;
          pg.cmd = IMC::PlanGeneration::CMD_EXECUTE;
          pg.plan_id = "dislodge";
          pg.params = (Utils::String::str("rpm=%.1f", m_args.dislodge_rpm) +
                       "ignore_errors=true");
          dispatch(pg);
        }

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

        bool
        ascentCondition(void)
        {
          return (m_ar->mean() < m_args.min_ascent_rate);
        }

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

        void
        onStartDislodge(void)
        {
          if (m_dtimer.overflow())
          {
            failedStartPlan();
            setState(ST_CHECK_STUCK);
          }
        }

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
