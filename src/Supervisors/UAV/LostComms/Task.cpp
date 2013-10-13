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
        float heartbeat_tout;
        //! LostComms plan name.
        std::string plan;
        //! Timeout if executing plan
        float mission_tout;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Emergency message.
        std::string m_emsg;
        //! Time of last heartbeat.
        double m_heartbeat_last;
        //! True if executing plan
        bool m_in_mission;
        //! True if executing LostComms plan
        bool m_in_lc;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_in_mission(false)
        {
          param("Heartbeat Timeout", m_args.heartbeat_tout)
          .units(Units::Second)
          .defaultValue("5.0")
          .description("Heartbeat Timeout");

          param("In Mission Timeout", m_args.mission_tout)
          .units(Units::Second)
          .defaultValue("10.0")
          .description("Timeout if executing plan");

          param("Lost Comms Plan", m_args.plan)
          .defaultValue("lost_comms")
          .description("Plan to be executed in case of Lost Communications");

          bind<IMC::Heartbeat>(this);
          bind<IMC::PlanControlState>(this);
        }

        void
        onResourceInitialization(void)
        {
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

          m_heartbeat_last = Clock::get();
        }

        void
        consume(const IMC::Heartbeat* msg)
        {
          if (msg->getSource() == getSystemId())
            return;

          m_heartbeat_last = Clock::get();
        }

        void
        consume(const IMC::PlanControlState* msg)
        {
          m_in_mission = (msg->state & IMC::PlanControlState::PCS_EXECUTING) != 0;
          m_in_lc = (std::strcmp(msg->plan_id.c_str(), m_args.plan.c_str()) == 0);
        }

        void
        task(void)
        {
          double now = Clock::get();

          if(m_in_lc)
            return;

          if ((now > (m_heartbeat_last + m_args.mission_tout) && m_in_mission) ||
              now > (m_heartbeat_last + m_args.heartbeat_tout))
          {
            IMC::PlanControl p_control;
            p_control.plan_id = m_args.plan;
            p_control.op = IMC::PlanControl::PC_START;
            p_control.type = IMC::PlanControl::PC_REQUEST;
            p_control.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;

            dispatch(p_control);
            m_heartbeat_last = now;
          }
        }
      };
    }
  }
}

DUNE_TASK
