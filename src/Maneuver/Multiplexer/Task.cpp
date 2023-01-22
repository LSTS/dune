//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Calado                                                     *
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

// ISO C++ 98 headers.
#include <algorithm>
#include <vector>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Idle.hpp"
#include "Goto.hpp"
#include "Launch.hpp"
#include "Loiter.hpp"
#include "StationKeeping.hpp"
#include "YoYo.hpp"
#include "Rows.hpp"
#include "FollowPath.hpp"
#include "Elevator.hpp"
#include "PopUp.hpp"
#include "Dislodge.hpp"
#include "MuxedManeuver.hpp"
#include "ScheduledGoto.hpp"
#include "Takeoff.hpp"
#include "Land.hpp"
#include "Drop.hpp"
#include "Sample.hpp"
#include "StationKeepingExtended.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    static const std::string c_names[] = {"IdleManeuver", "Goto", "Launch", "Loiter",
                                          "StationKeeping", "YoYo", "Rows",
                                          "FollowPath", "Elevator", "PopUp",
                                          "Dislodge","ScheduledGoto", "Takeoff", "Land",
                                          "Drop", "Sample", "StationKeepingExtended"};

    enum ManeuverType
    {
      //! Type Idle
      TYPE_IDLE = 0,
      //! Type Goto
      TYPE_GOTO,
      //! Type Launch
      TYPE_LAUNCH,
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
      //! Type ScheduledGoto
      TYPE_SCHEDULEDGOTO,
      //! Type Takeoff
      TYPE_TAKEOFF,
      //! Type Land
      TYPE_LAND,
      //! Type Drop
      TYPE_DROP,
      //! Type Sample
      TYPE_SAMPLE,
	  //! Type StationKeepingExtended
	  TYPE_SKEEPEXT,
      //! Total number of maneuvers
      TYPE_TOTAL
    };

    struct Arguments
    {
      //! Entity labels
      std::string labels[TYPE_TOTAL];
      //! List of not supported maneuvers
      std::vector<std::string> unsupported;
      //! Loiter Arguments
      LoiterArgs loiter;
      //! StationKeeping Arguments
      StationKeepingArgs sk;
      //! Yoyo Arguments
      YoYoArgs yoyo;
      //! Elevator Arguments
      ElevatorArgs elevator;
      //! PopUp Arguments
      PopUpArgs popup;
      //! Dislodge Arguments
      DislodgeArgs dislodge;
      //! Scheduled Arguments
      ScheduledArgs scheduled;
      //! Drop Arguments
      DropArgs drop;
      //! Sample Arguments
      SampleArgs sample;
      //! StationKeepingExtended Arguments
      StationKeepingExtendedArgs skext;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Type of maneuver to perform
      ManeuverType m_type;
      //! Array of entity ids
      unsigned m_ents[TYPE_TOTAL];
      //! Vector of supported maneuver IDs
      std::vector<uint32_t> m_supported;
      //! Map of message id to maneuver type
      typedef std::map<uint32_t, uint8_t> MultiplexMap;
      MultiplexMap m_map;
      //! Array of AbstractMuxes
      AbstractMux* m_maneuvers[TYPE_TOTAL];
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        for (unsigned i = 0; i < TYPE_TOTAL; i++)
        {
          param("Entity Label -- " + c_names[i], m_args.labels[i])
          .defaultValue(c_names[i] + " Maneuver")
          .description(c_names[i] + " maneuver's entity label");
        }

        param("Unsupported", m_args.unsupported)
        .defaultValue("")
        .description("List of unsupported maneuvers");

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

        param("YoYo -- Minimum Altitude Reference", m_args.yoyo.min_alt)
        .defaultValue("5.0")
        .minimumValue("1.0")
        .units(Units::Meter)
        .description("Minimum admissible altitude reference");

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

        param("PopUp -- Report at PopUps", m_args.popup.report)
        .defaultValue("false")
        .description("Request reports when popping at surface");

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

        param("Dislodge -- Safe Depth Gap", m_args.dislodge.safe_gap)
        .defaultValue("3.0")
        .units(Units::Meter)
        .description("Safe depth change to consider the maneuver was successful");

        param("ScheduledGoto -- Minimum Speed", m_args.scheduled.min_speed)
        .defaultValue("0.7")
        .units(Units::MeterPerSecond)
        .description("Move only at speeds higher than the minimum speed");

        param("ScheduledGoto -- Maximum Speed", m_args.scheduled.max_speed)
        .defaultValue("1.6")
        .units(Units::MeterPerSecond)
        .description("Maximum commanded speed");

        param("Drop -- Servo Id", m_args.drop.servoId)
          .defaultValue("2")
          .description("Servo Id.");

        param("Drop -- Servo Value", m_args.drop.servoValue)
          .defaultValue("3.14159")
          .description("Servo Value in radians.");

        param("Sample -- Syringe 0 Id", m_args.sample.syringe0Id)
        .defaultValue("0")
        .description("Port to use for syringe 0 servo");

        param("Sample -- Syringe 1 Id", m_args.sample.syringe1Id)
        .defaultValue("1")
        .description("Port to use for syringe 1 servo");

        param("Sample -- Syringe 2 Id", m_args.sample.syringe2Id)
        .defaultValue("2")
        .description("Port to use for syringe 2 servo");

        param("Sample -- Servo Open Value", m_args.sample.openValue)
        .defaultValue("3.14159")
        .description("Value to open servo");

        param("Sample -- Servo Close Value", m_args.sample.closeValue)
        .defaultValue("1.57079")
        .description("Value to close servo");

        param("Sample -- Execution Tolerance", m_args.sample.max_time)
        .defaultValue("30")
        .description("Default time tolerance to execute maneuver");

        param("StationKeepingExtended -- Minimum Radius", m_args.skext.min_radius)
        .defaultValue("10.0")
        .description("Minimum radius for StationKeepingExtended to prevent incompatibility with path controller");

        m_ctx.config.get("General", "Underwater Depth Threshold", "0.3", m_args.dislodge.depth_threshold);

        m_ctx.config.get("General", "Absolute Maximum Depth", "50.0", m_args.yoyo.max_depth);

        for (unsigned i = 0; i < TYPE_TOTAL; ++i)
          m_maneuvers[i] = NULL;

        bind<IMC::Brake>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::VehicleMedium>(this);
        bind<IMC::Throttle>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.yoyo.variation))
          m_args.yoyo.variation = Angles::radians(m_args.yoyo.variation);

        if (paramChanged(m_args.yoyo.u_course))
          m_args.yoyo.u_course = Angles::radians(m_args.yoyo.u_course);

        if (paramChanged(m_args.unsupported))
        {
          // Deal with unsupported maneuvers
          for (unsigned i = 0; i < TYPE_TOTAL; i++)
          {
            std::vector<std::string>::const_iterator itr;

            itr = std::find(m_args.unsupported.begin(),
                            m_args.unsupported.end(),
                            c_names[i]);

            if (itr == m_args.unsupported.end())
            {
              uint32_t id = IMC::Factory::getIdFromAbbrev(c_names[i]);
              m_map.insert(std::pair<uint32_t, uint8_t>(id, i));
              m_supported.push_back(id);
            }
          }
        }
      }

      void
      onResourceInitialization(void)
      {
        Maneuver::onResourceInitialization();

        bindToManeuvers<Task>(this, m_supported);
      }

      template <typename Type, typename Args>
      AbstractMux*
      create(Args* args)
      {
        Type* mux = new Type(static_cast<Maneuvers::Maneuver*>(this), args);
        return static_cast<AbstractMux*>(mux);
      }

      template <typename Type>
      AbstractMux*
      create(void)
      {
        Type* mux = new Type(static_cast<Maneuvers::Maneuver*>(this));
        return static_cast<AbstractMux*>(mux);
      }

      void
      onResourceAcquisition(void)
      {
        m_maneuvers[TYPE_IDLE] = create<Idle>();
        m_maneuvers[TYPE_GOTO] = create<Goto>();
        m_maneuvers[TYPE_LAUNCH] = create<Launch>();
        m_maneuvers[TYPE_LOITER] = create<Loiter>(&m_args.loiter);
        m_maneuvers[TYPE_SKEEP] = create<StationKeeping>(&m_args.sk);
        m_maneuvers[TYPE_YOYO] = create<YoYo>(&m_args.yoyo);
        m_maneuvers[TYPE_ROWS] = create<Rows>();
        m_maneuvers[TYPE_FOLLOWPATH] = create<FollowPath>();
        m_maneuvers[TYPE_ELEVATOR] = create<Elevator>(&m_args.elevator);
        m_maneuvers[TYPE_POPUP] = create<PopUp>(&m_args.popup);
        m_maneuvers[TYPE_DISLODGE] = create<Dislodge>(&m_args.dislodge);
        m_maneuvers[TYPE_SCHEDULEDGOTO] = create<ScheduledGoto>(&m_args.scheduled);
        m_maneuvers[TYPE_TAKEOFF] = create<Takeoff>();
        m_maneuvers[TYPE_LAND] = create<Land>();
        m_maneuvers[TYPE_DROP] = create<Drop>(&m_args.drop);
        m_maneuvers[TYPE_SAMPLE] = create<Sample>(&m_args.sample);
        m_maneuvers[TYPE_SKEEPEXT] = create<StationKeepingExtended>(&m_args.skext);
      }

      void
      onResourceRelease(void)
      {
        for (unsigned i = 0; i < TYPE_TOTAL; ++i)
          Memory::clear(m_maneuvers[i]);
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
      consume(const IMC::Maneuver* maneuver)
      {
        MultiplexMap::const_iterator itr = m_map.find(maneuver->getId());
        if (itr == m_map.end())
        {
          signalError(DTR("unsupported maneuver"));
          return;
        }

        m_type = (ManeuverType)itr->second;
        changeEntity();

        if (m_type >= TYPE_TOTAL)
        {
          signalError(DTR("wrong maneuver type"));
          return;
        }

        m_maneuvers[m_type]->start(maneuver);
      }

      void
      consume(const IMC::Brake* msg)
      {
        m_maneuvers[m_type]->onBrake(msg);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_maneuvers[m_type]->onEstimatedState(msg);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        m_maneuvers[m_type]->onGpsFix(msg);
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_maneuvers[m_type]->onVehicleMedium(msg);
      }

      void
      consume(const IMC::Throttle* msg)
      {
        m_maneuvers[m_type]->onThrottle(msg);
      }

      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        m_maneuvers[m_type]->onPathControlState(pcs);
      }

      void
      onStateReport(void)
      {
        m_maneuvers[m_type]->onStateReport();
      }
    };
  }
}

DUNE_TASK
