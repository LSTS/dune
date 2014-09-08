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
#include "FollowPath.hpp"
#include "Elevator.hpp"
#include "PopUp.hpp"
#include "Dislodge.hpp"
#include "Idle.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    static const std::string c_names[] = {"Goto", "Loiter", "StationKeeping",
                                          "YoYo", "Rows", "FollowPath",
                                          "Elevator", "PopUp", "Dislodge",
                                          "Idle"};

    enum ManeuverType
    {
      //! Type Goto
      TYPE_GOTO = 0,
      //! Type Loiter
      TYPE_LOITER,
      //! Type StationKeeping
      TYPE_SKEEP,
      //! Type Yoyo
      TYPE_YOYO,
      //! Type Rows
      TYPE_ROWS,
      //! Type FollowPath
      TYPE_FOLLOWPATH,
      //! Type Elevator
      TYPE_ELEVATOR,
      //! Type PopUp
      TYPE_POPUP,
      //! Type Dislodge
      TYPE_DISLODGE,
      //! Type Idle
      TYPE_IDLE,
      //! Total number of maneuvers
      TYPE_TOTAL
    };

    struct Arguments
    {
      //! Entity labels
      std::string labels[TYPE_TOTAL];
      //! Loiter Arguments
      Loiter::LoiterArgs loiter;
      //! StationKeeping Arguments
      StationKeeping::StationKeepingArgs sk;
      //! Yoyo Arguments
      YoYo::YoYoArgs yoyo;
      //! Elevator Arguments
      Elevator::ElevatorArgs elevator;
      //! PopUp Arguments
      PopUp::PopUpArgs popup;
      //! Dislodge Arguments
      Dislodge::DislodgeArgs dislodge;
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
      //! FollowPath
      FollowPath* m_followpath;
      //! Elevator
      Elevator* m_elevator;
      //! PopUp
      PopUp* m_popup;
      //! Dislodge
      Dislodge* m_dislodge;
      //! Idle
      Idle* m_idle;
      //! Type of maneuver to perform
      ManeuverType m_type;
      //! Array of entity ids
      unsigned m_ents[TYPE_TOTAL];
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_goto(NULL),
        m_loiter(NULL),
        m_sk(NULL),
        m_yoyo(NULL),
        m_rows(NULL),
        m_followpath(NULL),
        m_elevator(NULL),
        m_popup(NULL),
        m_dislodge(NULL),
        m_idle(NULL)
      {
        for (unsigned i = 0; i < TYPE_TOTAL; i++)
        {
          param("Entity Label -- " + c_names[i], m_args.labels[i])
          .defaultValue(c_names[i] + " Maneuver")
          .description(c_names[i] + " maneuver's entity label");
        }

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

        param("Elevator -- Radius Tolerance", m_args.elevator.radius_tolerance)
        .defaultValue("2.0")
        .units(Units::Meter)
        .description("Distance tolerance to start loitering near elevator's location");

        param("Elevator -- VMonitor -- Minimum Speed", m_args.elevator.vmonitor_speed)
        .defaultValue("-1.0")
        .units(Units::MeterPerSecond)
        .description("Negative values will disable vertical progress monitor");

        param("Elevator -- VMonitor -- Timeout", m_args.elevator.vmonitor_timeout)
        .defaultValue("15.0")
        .units(Units::Second)
        .description("Timeout when progress is below the specified value");

        param("Elevator -- Minimum Radius", m_args.elevator.min_radius)
        .defaultValue("10.0")
        .units(Units::Meter)
        .description("Minimum radius to prevent incompatibility with path controller");

        param("PopUp -- Minimum Satellites", m_args.popup.min_sats)
        .defaultValue("7")
        .description("Least number of satellites to accept fixes");

        param("PopUp -- Minimum Distance", m_args.popup.min_distance)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Minimum distance between gps_fix position and the estimated state");

        param("PopUp -- Elevator Radius", m_args.popup.elev_radius)
        .defaultValue("15.0")
        .units(Units::Meter)
        .description("Radius for the elevator behavior");

        param("PopUp -- Maximum Distance From Station", m_args.popup.max_sk_dist)
        .defaultValue("15.0")
        .units(Units::Meter)
        .description("Maximum distance from station keeping radial circle");

        param("Dislodge -- Bursts", m_args.dislodge.bursts)
        .defaultValue("5")
        .description("Number of bursts with the motor");

        param("Dislodge -- Attempts", m_args.dislodge.attempts)
        .defaultValue("5")
        .description("Number of total attempts");

        param("Dislodge -- Burst Time", m_args.dislodge.burst_time)
        .defaultValue("10.0")
        .units(Units::Second)
        .description("Burst duration");

        param("Dislodge -- Interval Time", m_args.dislodge.interval_time)
        .defaultValue("5.0")
        .units(Units::Second)
        .description("Time interval between bursts");

        param("Dislodge -- Minimum Distance", m_args.dislodge.min_distance)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Minimum distance to ground or object to stop burst");

        param("Dislodge -- Safe Depth Gap", m_args.dislodge.safe_gap)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Safe depth change to consider the maneuver was successful");

        m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.dislodge.depth_threshold);

        bindToManeuver<Task, IMC::Goto>();
        bindToManeuver<Task, IMC::Loiter>();
        bindToManeuver<Task, IMC::StationKeeping>();
        bindToManeuver<Task, IMC::YoYo>();
        bindToManeuver<Task, IMC::Rows>();
        bindToManeuver<Task, IMC::FollowPath>();
        bindToManeuver<Task, IMC::Elevator>();
        bindToManeuver<Task, IMC::PopUp>();
        bindToManeuver<Task, IMC::Dislodge>();
        bindToManeuver<Task, IMC::IdleManeuver>();
        bind<IMC::EstimatedState>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::VehicleMedium>(this);
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
        m_followpath = new FollowPath(static_cast<Maneuvers::Maneuver*>(this));
        m_elevator = new Elevator(static_cast<Maneuvers::Maneuver*>(this), &m_args.elevator);
        m_popup = new PopUp(static_cast<Maneuvers::Maneuver*>(this), &m_args.popup);
        m_dislodge = new Dislodge(static_cast<Maneuvers::Maneuver*>(this), &m_args.dislodge);
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
        Memory::clear(m_followpath);
        Memory::clear(m_elevator);
        Memory::clear(m_popup);
        Memory::clear(m_dislodge);
        Memory::clear(m_idle);
      }

      void
      onEntityReservation(void)
      {
        Maneuver::onEntityReservation();

        for (unsigned i = 0; i < TYPE_TOTAL; i++)
          m_ents[i] = reserveEntity(m_args.labels[i]);
      }

      void
      onManeuverDeactivation(void)
      {
        setEntityId(getEntityId());
      }

      void
      changeEntity(void)
      {
        setEntityId(m_ents[m_type]);
      }

      void
      consume(const IMC::Goto* maneuver)
      {
        m_type = TYPE_GOTO;
        changeEntity();

        m_goto->start(maneuver);
      }

      void
      consume(const IMC::Loiter* maneuver)
      {
        m_type = TYPE_LOITER;
        changeEntity();

        m_loiter->start(maneuver);
      }

      void
      consume(const IMC::IdleManeuver* maneuver)
      {
        m_type = TYPE_IDLE;
        changeEntity();

        m_idle->start(maneuver);
      }

      void
      consume(const IMC::StationKeeping* maneuver)
      {
        m_type = TYPE_SKEEP;
        changeEntity();

        m_sk->start(maneuver);
      }

      void
      consume(const IMC::YoYo* maneuver)
      {
        m_type = TYPE_YOYO;
        changeEntity();

        m_yoyo->start(maneuver);
      }

      void
      consume(const IMC::Rows* maneuver)
      {
        m_type = TYPE_ROWS;
        changeEntity();

        m_rows->start(maneuver);
      }

      void
      consume(const IMC::FollowPath* maneuver)
      {
        m_type = TYPE_FOLLOWPATH;
        changeEntity();

        m_followpath->start(maneuver);
      }

      void
      consume(const IMC::Elevator* maneuver)
      {
        m_type = TYPE_ELEVATOR;
        changeEntity();

        m_elevator->start(maneuver);
      }

      void
      consume(const IMC::PopUp* maneuver)
      {
        m_type = TYPE_POPUP;
        changeEntity();

        m_popup->start(maneuver);
      }

      void
      consume(const IMC::Dislodge* maneuver)
      {
        m_type = TYPE_DISLODGE;
        changeEntity();

        m_dislodge->start(maneuver);
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
          case TYPE_ELEVATOR:
            m_elevator->onEstimatedState(msg);
            break;
          case TYPE_POPUP:
            m_popup->onEstimatedState(msg);
            break;
          case TYPE_DISLODGE:
            m_dislodge->onEstimatedState(msg);
            break;
          default:
            break;
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        switch (m_type)
        {
          case TYPE_POPUP:
            m_popup->onGpsFix(msg);
            break;
          default:
            break;
        }
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        switch (m_type)
        {
          case TYPE_POPUP:
            m_popup->onVehicleMedium(msg);
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
          case TYPE_FOLLOWPATH:
            m_followpath->onPathControlState(pcs);
            break;
          case TYPE_ELEVATOR:
            m_elevator->onPathControlState(pcs);
            break;
          case TYPE_POPUP:
            m_popup->onPathControlState(pcs);
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
          case TYPE_POPUP:
            m_popup->onStateReport();
            break;
          default:
            break;
        }
      }
    };
  }
}

DUNE_TASK
