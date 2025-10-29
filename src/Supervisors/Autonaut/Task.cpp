//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace Autonaut
  {
    using DUNE_NAMESPACES;

    //! Maximum maneuvers in a plan
    static const unsigned int c_max_maneuvers = 5;
    //! Vehicle command description strings
    static const std::string c_plan_name = "service_plan";

    // Maneuver configuration parameters
    struct ManeuverConfig
    {
      //! Maneuver type
      std::string type;
      //! Radius
      float radius;
      //! Speed
      float speed;
      //! Duration of maneuver
      uint16_t duration;
      //! Final position (lat, lon) (degrees)
      std::vector<double> position;
    };

    struct Arguments
    {
      ManeuverConfig man_config[c_max_maneuvers];
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Watchdog to request loiter on service.
      Counter<double> m_wdog;
      //! Current Plan control state
      IMC::PlanControlState m_pcs;
      //! Vehicle state
      IMC::VehicleState m_vs;
      //! Current position.
      IMC::EstimatedState m_estate;
      //! Flag for vehicle armed
      bool m_armed;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_armed(true)
      {
        for (unsigned i = 0; i < c_max_maneuvers; ++i)
        {
          std::string option = String::str("Maneuver %u - Type", i);
          std::string description = String::str("Type of maneuver %u.", i);
          param(option, m_args.man_config[i].type)
          .defaultValue("None")
          .values("None, Goto, SK, Loiter")
          .description(description);

          option = String::str("Maneuver %u - Radius", i);
          description = String::str("Radius for maneuver %u in meters, only applies for SK and Loiter maneuvers.", i);
          param(option, m_args.man_config[i].radius)
          .units(Units::Meter)
          .defaultValue("30.0")
          .minimumValue("5.0")
          .description(description);

          option = String::str("Maneuver %u - Speed", i);
          description = String::str("Speed for maneuver %u in meters per second.", i);
          param(option, m_args.man_config[i].speed)
          .units(Units::MeterPerSecond)
          .defaultValue("0.5")
          .minimumValue("0.1")
          .description(description);

          option = String::str("Maneuver %u - Duration", i);
          description = String::str("Duration of maneuver %u in seconds, only applies for SK and Loiter maneuvers."
                                    "If set to 0 the maneuver will not timeout and will continue until the vehicle is disarmed.", i);
          param(option, m_args.man_config[i].duration)
          .units(Units::Second)
          .defaultValue("0")
          .minimumValue("0")
          .description(description);

          option = String::str("Maneuver %u - Position", i);
          description = String::str("Lat, Lon position for maneuver %u in degrees, "
                                    "if left empty the vehicle will execute the maneuver using its current position.", i);
          param(option, m_args.man_config[i].position)
          .units(Units::Degree)
          .description(description);
        }

        bind<IMC::PlanControlState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::RemoteActions>(this);
      }

      void
      onUpdateParameters(void)
      { }

      void
      onResourceAcquisition(void)
      { }

      void
      onResourceRelease(void)
      { }

      void
      onResourceInitialization(void)
      {
        // Add button for arm and disarm states.
        IMC::RemoteActionsRequest action_register;
        action_register.op = IMC::RemoteActionsRequest::OP_REGISTER;
        action_register.actions = "Arm=Button;Disarm=Button";
        dispatch(action_register);

        m_vs.op_mode = IMC::VehicleState::VS_BOOT;
        m_wdog.setTop(5.0);
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_pcs = *msg;
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        m_vs = *msg;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
      }

      void
      consume(const IMC::RemoteActions* msg)
      {
        TupleList tuples(msg->actions);
        if (tuples.get("Arm", 0))
          m_armed = true;
        else if (tuples.get("Disarm", 0))
          m_armed = false;
      }

      std::string
      getMessage(Status::Code code)
      {
        std::stringstream ss;
        std::string armed_str = m_armed ? "ARMED" : "DISARMED";
        ss << getString(code) << " - " << armed_str;
        return ss.str();
      }

      void
      task(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, getMessage(Status::CODE_ACTIVE).c_str());

        if (m_armed)
          executePlan();
        else
          disablePlan();
      }

      void
      executePlan()
      {
        if (m_vs.op_mode != IMC::VehicleState::VS_SERVICE)
          return;
        
        if (!m_wdog.overflow())
          return;
        m_wdog.reset();

        war("Vehicle in SERVICE -> Executing fallback plan...");
        IMC::PlanControl startPlan;
        startPlan.type = IMC::PlanControl::PC_REQUEST;
        startPlan.op = IMC::PlanControl::PC_START;
        startPlan.plan_id = c_plan_name;

        IMC::PlanSpecification spec;
        spec.plan_id = c_plan_name;

        std::string last_man_name;
        for (unsigned i = 0; i < c_max_maneuvers; ++i)
        {
          if (m_args.man_config[i].type == "None")
            continue;

          // Set initial maneuver id
          std::string maneuver_name = String::str("service_maneuver_%u", i);
          if (spec.start_man_id.empty())
            spec.start_man_id = maneuver_name;

          IMC::PlanManeuver pm;
          pm.maneuver_id = maneuver_name;
          
          if (m_args.man_config[i].type == "Goto")
          {
            IMC::Goto goto_man = getGoto(i);
            pm.data.set(goto_man);
          }
          else if (m_args.man_config[i].type == "Loiter")
          {
            IMC::Loiter loiter_man = getLoiter(i);
            pm.data.set(loiter_man);
          }
          else if (m_args.man_config[i].type == "SK")
          {
            IMC::StationKeeping sk_man = getStationKeeping(i);
            pm.data.set(sk_man);
          }
          else
          {
            war("Unknown maneuver type '%s' for maneuver %u, skipping...", m_args.man_config[i].type.c_str(), i);
            continue;
          }

          spec.maneuvers.push_back(pm);
          if (!last_man_name.empty())
          {
            // Add transition from previous maneuver
            IMC::PlanTransition pt;
            pt.source_man = last_man_name;
            pt.dest_man = maneuver_name;
            pt.conditions = "ManeuverIsDone";
            spec.transitions.push_back(pt);
          }

          last_man_name = maneuver_name;
        }

        if (spec.maneuvers.empty())
        {
          war("No maneuvers defined in fallback plan.");
          return;
        }

        startPlan.arg.set(spec);
        startPlan.request_id = 0;
        startPlan.flags = 0;
        startPlan.setDestination(m_ctx.resolver.id());
        dispatch(startPlan);
      }

      void
      disablePlan()
      {
        if (m_vs.op_mode != IMC::VehicleState::VS_MANEUVER)
          return;

        if (m_pcs.plan_id != c_plan_name)
          return;

        war("Vehicle disarmed -> Stopping Loiter plan...");
        IMC::PlanControl stopPlan;
        stopPlan.type = IMC::PlanControl::PC_REQUEST;
        stopPlan.op = IMC::PlanControl::PC_STOP;
        stopPlan.request_id = 0;
        stopPlan.flags = 0;
        stopPlan.setDestination(m_ctx.resolver.id());
        dispatch(stopPlan);
      }

      IMC::Loiter
      getLoiter(const unsigned i)
      {
        IMC::Loiter loiter;

        loiter.lat = 0.0;
        loiter.lon = 0.0;
        getPosition(loiter.lat, loiter.lon, i);

        loiter.duration = m_args.man_config[i].duration;
        loiter.z = 0;
        loiter.z_units = ZUnits::Z_DEPTH;
        loiter.speed = m_args.man_config[i].speed;
        loiter.speed_units = SpeedUnits::SUNITS_METERS_PS;
        loiter.type = Loiter::LoiterTypeEnum::LT_DEFAULT;
        loiter.radius = m_args.man_config[i].radius;
        return loiter;
      }

      IMC::Goto
      getGoto(const unsigned i)
      {
        IMC::Goto goto_man;

        goto_man.lat = 0.0;
        goto_man.lon = 0.0;
        getPosition(goto_man.lat, goto_man.lon, i);

        goto_man.z = 0;
        goto_man.z_units = ZUnits::Z_DEPTH;
        goto_man.speed = m_args.man_config[i].speed;
        goto_man.speed_units = SpeedUnits::SUNITS_METERS_PS;
        return goto_man;
      }

      IMC::StationKeeping
      getStationKeeping(const unsigned i)
      {
        IMC::StationKeeping sk_man;
        
        sk_man.lat = 0.0;
        sk_man.lon = 0.0;
        getPosition(sk_man.lat, sk_man.lon, i);

        sk_man.duration = m_args.man_config[i].duration;
        sk_man.z = 0;
        sk_man.z_units = ZUnits::Z_DEPTH;
        sk_man.speed = m_args.man_config[i].speed;
        sk_man.speed_units = SpeedUnits::SUNITS_METERS_PS;
        sk_man.radius = m_args.man_config[i].radius;
        return sk_man;
      }

      void
      getPosition(double& lat, double& lon, const unsigned i)
      {
        if (m_args.man_config[i].position.size() != 2)
        {
          // Use current position
          toWGS84(m_estate, lat, lon);
        }
        else
        {
          lat = Angles::radians(m_args.man_config[i].position[0]);
          lon = Angles::radians(m_args.man_config[i].position[1]);
        }
      }
    };
  }
}

DUNE_TASK
