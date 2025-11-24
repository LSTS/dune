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

    //! Vehicle command description strings
    static const std::string c_plan_name = "service_loiter";
    //! Service Loiter maneuver name
    static const std::string c_sl_man_name = "service_loiter";
    //! Final loiter maneuver name
    static const std::string c_fl_man_name = "final_loiter";

    struct Arguments
    {
      //! Radius for loiter on service
      float loiter_on_service_radius;
      //! Speed for loiter on service
      float loiter_on_service_speed;
      //! Time for loiter on service
      uint16_t loiter_on_service_time;
      //! Final position (lat, lon) (degrees)
      std::vector<double> final_position;
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
        param("Loiter On Service -- Radius", m_args.loiter_on_service_radius)
          .defaultValue("30.0")
          .minimumValue("5.0")
          .description("Radius for loiter on service option.");

        param("Loiter On Service -- Speed", m_args.loiter_on_service_speed)
          .defaultValue("0.5")
          .minimumValue("0.1")
          .description("Speed for loiter on service option.");

        param("Loiter On Service -- Time", m_args.loiter_on_service_time)
          .defaultValue("0")
          .minimumValue("0")
          .units(Units::Second)
          .description("Time for loiter on service option. "
                        "If set to 0.0, the loiter will not timeout and will "
                        "continue until the vehicle is disarmed.");

          param("Final Loiter -- Position", m_args.final_position)
          .defaultValue("38.68765, -24.56268")
          .units(Units::Degree)
          .size(2)
          .description("Lat, Lon coordinates (degrees) for the final loiter maneuver.");

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
          loiterOnService();
        else
          disableLoiter();
      }

      void
      loiterOnService()
      {
        if (m_vs.op_mode != IMC::VehicleState::VS_SERVICE)
          return;
        
        if (!m_wdog.overflow())
          return;

        m_wdog.reset();

        war("Vehicle in SERVICE -> Starting Loiter plan...");
        IMC::PlanControl startPlan;
        startPlan.type = IMC::PlanControl::PC_REQUEST;
        startPlan.op = IMC::PlanControl::PC_START;
        startPlan.plan_id = c_plan_name;

        double lat = 0.0;
        double lon = 0.0;
        toWGS84(m_estate, lat, lon);
        IMC::Loiter man_service = getLoiter(lat, lon, m_args.loiter_on_service_time);

        IMC::PlanManeuver pm;
        pm.data.set(man_service);
        pm.maneuver_id = c_sl_man_name;

        IMC::PlanSpecification spec;
        spec.plan_id = c_plan_name;
        spec.start_man_id = c_sl_man_name;
        spec.maneuvers.push_back(pm);

        //! If service loiter is infinite only send service loiter maneuver
        if (m_args.loiter_on_service_time == 0.0)
        {
          startPlan.arg.set(spec);
          startPlan.request_id = 0;
          startPlan.flags = 0;
          startPlan.setDestination(m_ctx.resolver.id());
          dispatch(startPlan);
          return;
        }

        // Otherwise, we need to add a final loiter maneuver
        IMC::Loiter man_final = getLoiter(Angles::radians(m_args.final_position[0]),
                                          Angles::radians(m_args.final_position[1]),
                                          0); // No timeout for final loiter

        pm.data.set(man_final);
        pm.maneuver_id = c_fl_man_name;
        
        IMC::PlanTransition pt;
        pt.source_man = c_sl_man_name;
        pt.dest_man = c_fl_man_name;
        pt.conditions = "ManeuverIsDone";

        spec.maneuvers.push_back(pm);
        spec.transitions.push_back(pt);

        startPlan.arg.set(spec);
        startPlan.request_id = 0;
        startPlan.flags = 0;
        startPlan.setDestination(m_ctx.resolver.id());
        dispatch(startPlan);


      }

      void
      disableLoiter()
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
      getLoiter(const double lat, const double lon, const uint16_t duration)
      {
        IMC::Loiter loiter;
        loiter.duration = duration; // No timeout
        loiter.lat = lat;
        loiter.lon = lon;
        loiter.z = 0;
        loiter.z_units = ZUnits::Z_DEPTH;
        loiter.speed = m_args.loiter_on_service_speed;
        loiter.speed_units = SpeedUnits::SUNITS_METERS_PS;
        loiter.type = Loiter::LoiterTypeEnum::LT_DEFAULT;
        loiter.radius = m_args.loiter_on_service_radius;
        return loiter;
      }
    };
  }
}

DUNE_TASK
