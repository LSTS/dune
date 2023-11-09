//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Karianne Moe                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Tutorial
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Karianne Moe
  namespace PlanVisit
  {
    using DUNE_NAMESPACES;
    
    struct Arguments{
      std::vector<double> POI;
    };

    struct Task: public DUNE::Tasks::Task
    {
      Arguments m_args;
      std::vector<double> m_points;   
      double vehicle_lat;
      double vehicle_lon; 
      IMC::PlanSpecification m_plan_to_run;
      Math::Random::Generator* m_gen;
      Time::Counter<double> m_mbox_check_timer;
      bool positionReady = false;
      bool inService = false;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Points to Visit", m_args.POI)
        .defaultValue("")
        .description("Points of Interest in the Traveling Salesman Problem");

        paramActive(Tasks::Parameter::SCOPE_GLOBAL, 
                    Tasks::Parameter::VISIBILITY_USER);

        bind<IMC::EstimatedState>(this);
        bind<IMC::VehicleState>(this);
        bind<IMC::PlanControlState>(this);
        debug("Task constructor");
      }

      void
      onActivation(void)
      {
        m_mbox_check_timer.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        debug("Task is now active :)");
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if(m_args.POI.size() % 2 != 0){
          // Not a even number in input POI
          // deactivate task
          onDeactivation();
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        debug("Message of EstimatedState received");
        Coordinates::toWGS84(*msg, vehicle_lat, vehicle_lon);
        // debug("Vehicle lat is %d", vehicle_lat);
        // debug("Vehicle lon is %d", vehicle_lon);
        // debug("Vehicle x is %d north", msg->x);
        // debug("Vehicle y is %d east", msg->y);
        vehicle_lat = vehicle_lat + msg->x;
        vehicle_lon = vehicle_lat + msg->y;
        positionReady = true;
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        debug("Message of VehicleState received");
        // debug("VehicleState is %d", msg->op_mode);
        // debug("VehicleState VS_SERVICE is %d", IMC::VehicleState::VS_SERVICE);
        // debug("VehicleState VS_ERROR is %d", IMC::VehicleState::VS_ERROR);
        if(msg->op_mode == IMC::VehicleState::VS_SERVICE)
        {
          inService = true;
        }
      }     

      void
      consume(const IMC::PlanControlState* msg)
      {
        debug("Message of PlanControlState received");
        if (msg->last_outcome == PlanControlState::LPO_SUCCESS)
        {
          requestDeactivation();
        }
      }

      void 
      TSPalgorithm()
      {
        for(unsigned int i = 0; i < m_args.POI.size(); i = i + 1)
        {
          m_points.push_back(m_args.POI[i]);
        }
        m_points.push_back(vehicle_lat);
        m_points.push_back(vehicle_lon);
      }

      void
      createPlan()
      {
        for(unsigned int i = 0; i < m_points.size(); i = i + 2)
        {
          double lat_deg = m_points[i];
          double lon_deg = m_points[i + 1];
          IMC::Goto goto_maneuver;
          goto_maneuver.lat = Angles::radians(lat_deg);
          goto_maneuver.lon = Angles::radians(lon_deg);
          goto_maneuver.speed = 1;
          goto_maneuver.speed_units = IMC::SpeedUnits::SUNITS_METERS_PS;
          goto_maneuver.z = 0;
          goto_maneuver.z_units = IMC::Z_DEPTH;


          // Set Plan Maneuver
          IMC::PlanManeuver pman;
          std::stringstream man_name;
          man_name << "Goto" << (i/2);
          pman.maneuver_id = man_name.str();
          pman.data.set(goto_maneuver);
          m_plan_to_run.maneuvers.push_back(pman);
          if (i/2 == 0)
          {
            m_plan_to_run.start_man_id = pman.maneuver_id;
          }
          else
          {
            // Set Plan Transition
            IMC::PlanTransition ptrans;
            std::stringstream prev_man_name;
            prev_man_name << "Goto" << (i/2) - 1;
            ptrans.source_man = prev_man_name.str();
            ptrans.dest_man = man_name.str();
            ptrans.conditions = "ManeuverIsDone";
            m_plan_to_run.transitions.push_back(ptrans);
          }
        }
      }



      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          if (positionReady)
          {
            TSPalgorithm();
            createPlan();
            while(!inService){

            }
            m_gen = Math::Random::Factory::create(Math::Random::Factory::c_default);
            IMC::PlanControl plan_control;
            plan_control.type = IMC::PlanControl::PC_REQUEST;
            plan_control.op = IMC::PlanControl::PC_START;
            plan_control.request_id = m_gen->random() & 0xFFFF;
            plan_control.plan_id = m_plan_to_run.plan_id;
            plan_control.arg.set(m_plan_to_run);
            plan_control.setDestination(getSystemId());

            dispatch (plan_control, DF_LOOP_BACK);
          }

        }
      }
    };
  }
}

DUNE_TASK