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

    struct Arguments
    {
      //! Radius for loiter on service
      float loiter_on_service_radius;
      //! Speed for loiter on service
      float loiter_on_service_speed;
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
          .description("Radius for loiter on service option");

        param("Loiter On Service -- Speed", m_args.loiter_on_service_speed)
          .defaultValue("0.5")
          .minimumValue("0.1")
          .description("Speed for loiter on service option");

        bind<IMC::PlanControlState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::ArmingState>(this);
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
      consume(const IMC::ArmingState* msg)
      {
        m_armed = (msg->state == ArmingState::StateEnum::MOTORS_ARMED);
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

        war("Vehicle in SERVICE -> Starting Loiter plan...");
        IMC::PlanControl startPlan;
        startPlan.type = IMC::PlanControl::PC_REQUEST;
        startPlan.op = IMC::PlanControl::PC_START;
        startPlan.plan_id = c_plan_name;

        IMC::Loiter man;
        man.timeout = 0;
        toWGS84(m_estate, man.lat, man.lon);
        man.z = 0;
        man.z_units = ZUnits::Z_DEPTH;
        man.speed = m_args.loiter_on_service_speed;
        man.speed_units = SpeedUnits::SUNITS_METERS_PS;
        man.type = Loiter::LoiterTypeEnum::LT_DEFAULT;
        man.radius = m_args.loiter_on_service_radius;

        IMC::PlanSpecification spec;

        spec.plan_id = c_plan_name;
        spec.start_man_id = c_plan_name;

        IMC::PlanManeuver pm;
        pm.data.set(man);
        pm.maneuver_id = c_plan_name;
        spec.maneuvers.push_back(pm);
        startPlan.arg.set(spec);
        startPlan.request_id = 0;
        startPlan.flags = 0;
        startPlan.setDestination(m_ctx.resolver.id());
        dispatch(startPlan);

        m_wdog.reset();
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
    };
  }
}

DUNE_TASK
