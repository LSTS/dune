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
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Goto.hpp"
#include "Loiter.hpp"
#include "StationKeeping.hpp"
#include "YoYo.hpp"
#include "Rows.hpp"
#include "Idle.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    enum ManeuverType
    {
      //! Type Goto
      TYPE_GOTO,
      //! Type Loiter
      TYPE_LOITER,
      //! Type StationKeeping
      TYPE_SKEEP,
      //! Type Yoyo
      TYPE_YOYO,
      //! Type Rows
      TYPE_ROWS,
      //! Type Idle
      TYPE_IDLE
    };

    struct Arguments
    {
      //! Loiter Arguments
      Loiter::LoiterArgs loiter;
      //! StationKeeping Arguments
      StationKeeping::StationKeepingArgs sk;
      //! Yoyo Arguments
      YoYo::YoYoArgs yoyo;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Goto
      Goto* m_goto;
      //! Loiter
      Loiter* m_loiter;
      //! StationKeeping
      StationKeeping* m_sk;
      //! YoYo
      YoYo* m_yoyo;
      //! Rows
      Rows* m_rows;
      //! Idle
      Idle* m_idle;
      //! Type of maneuver to perform
      ManeuverType m_type;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_goto(NULL),
        m_loiter(NULL),
        m_sk(NULL),
        m_yoyo(NULL),
        m_rows(NULL),
        m_idle(NULL)
      {
        param("Loiter -- Minimum Radius", m_args.loiter.min_radius)
        .defaultValue("10.0")
        .description("Minimum radius for Loiter to prevent incompatibility with path controller");

        param("StationKeeping -- Minimum Radius", m_args.sk.min_radius)
        .defaultValue("10.0")
        .description("Minimum radius for StationKeeping to prevent incompatibility with path controller");

        param("YoYo -- Maximum Pitch Variation", m_args.yoyo.variation)
        .defaultValue("2")
        .units(Units::Degree)
        .description("Maximum pitch variation step when changing z direction");

        param("YoYo -- Check Path Errors", m_args.yoyo.check_errors)
        .defaultValue("false")
        .description("True if we should check path errors and stabilize pitch");

        param("YoYo -- Maximum Cross Track Error", m_args.yoyo.u_ctrack)
        .defaultValue("6")
        .units(Units::Meter)
        .description("Maximum cross track error admissible");

        param("YoYo -- Maximum Course Error", m_args.yoyo.u_course)
        .defaultValue("15")
        .units(Units::Degree)
        .description("Maximum course error admissible");

        bindToManeuver<Task, IMC::Goto>();
        bindToManeuver<Task, IMC::Loiter>();
        bindToManeuver<Task, IMC::StationKeeping>();
        bindToManeuver<Task, IMC::YoYo>();
        bindToManeuver<Task, IMC::Rows>();
        bindToManeuver<Task, IMC::IdleManeuver>();
        bind<IMC::EstimatedState>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.yoyo.variation))
          m_args.yoyo.variation = Angles::radians(m_args.yoyo.variation);

        if (paramChanged(m_args.yoyo.u_course))
          m_args.yoyo.u_course = Angles::radians(m_args.yoyo.u_course);
      }

      void
      onResourceAcquisition(void)
      {
        m_goto = new Goto(static_cast<Maneuvers::Maneuver*>(this));
        m_loiter = new Loiter(static_cast<Maneuvers::Maneuver*>(this), &m_args.loiter);
        m_sk = new StationKeeping(static_cast<Maneuvers::Maneuver*>(this), &m_args.sk);
        m_yoyo = new YoYo(static_cast<Maneuvers::Maneuver*>(this), &m_args.yoyo);
        m_rows = new Rows(static_cast<Maneuvers::Maneuver*>(this));
        m_idle = new Idle(static_cast<Maneuvers::Maneuver*>(this));
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_goto);
        Memory::clear(m_loiter);
        Memory::clear(m_sk);
        Memory::clear(m_yoyo);
        Memory::clear(m_rows);
        Memory::clear(m_idle);
      }

      void
      consume(const IMC::Goto* maneuver)
      {
        m_type = TYPE_GOTO;
        m_goto->start(maneuver);
      }

      void
      consume(const IMC::Loiter* maneuver)
      {
        m_type = TYPE_LOITER;
        m_loiter->start(maneuver);
      }

      void
      consume(const IMC::IdleManeuver* maneuver)
      {
        m_type = TYPE_IDLE;
        m_idle->start(maneuver);
      }

      void
      consume(const IMC::StationKeeping* maneuver)
      {
        m_type = TYPE_SKEEP;
        m_sk->start(maneuver);
      }

      void
      consume(const IMC::YoYo* maneuver)
      {
        m_type = TYPE_YOYO;
        m_yoyo->start(maneuver);
      }

      void
      consume(const IMC::Rows* maneuver)
      {
        m_type = TYPE_ROWS;
        m_rows->start(maneuver);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        switch (m_type)
        {
          case TYPE_SKEEP:
            m_sk->onEstimatedState(msg);
            break;
          case TYPE_YOYO:
            m_yoyo->onEstimatedState(msg);
            break;
          default:
            break;
        }
      }

       void
       onPathControlState(const IMC::PathControlState* pcs)
       {
         switch (m_type)
         {
           case TYPE_GOTO:
             m_goto->onPathControlState(pcs);
             break;
           case TYPE_LOITER:
             m_loiter->onPathControlState(pcs);
             break;
           case TYPE_SKEEP:
             m_sk->onPathControlState(pcs);
             break;
           case TYPE_YOYO:
             m_yoyo->onPathControlState(pcs);
             break;
           case TYPE_ROWS:
             m_rows->onPathControlState(pcs);
             break;
           default:
             break;
         }
       }

       void
       onStateReport(void)
       {
         switch (m_type)
         {
           case TYPE_IDLE:
             m_idle->onStateReport();
             break;
          case TYPE_SKEEP:
            m_sk->onStateReport();
            break;
          default:
            break;
        }
      }
    };
  }
}

DUNE_TASK
