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

    struct TSP{
      std::vector<unsigned int> path;
      double totalDistance;
      Math::Matrix dp;
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
      bool planReady = false;
      bool planHasStarted = false;
      bool errorPresent = false;
      int allVisited;


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
      }

      void
      onActivation(void)
      {
        m_mbox_check_timer.reset();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
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
          // Not an even number in input POI
          // deactivate task
          err("Input Error: There are not an even number of Points of Interest");
          errorPresent = true;
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
        Coordinates::toWGS84(*msg, vehicle_lat, vehicle_lon);
        positionReady = true;
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        if(msg->op_mode == IMC::VehicleState::VS_SERVICE)
        {
          inService = true;
        }
        else
        {
          inService = false;
        }
      }     

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (msg->plan_id == m_plan_to_run.plan_id && msg->last_outcome == PlanControlState::LPO_SUCCESS)
        {
          requestDeactivation();
        }
      }

      TSP
      tsp(int bitMask, int currLocation, TSP tsp_args)
      {
        if (bitMask == allVisited)
        {
          TSP tsp;
          tsp.totalDistance = Coordinates::WGS84::distance(m_points[2*currLocation], 
                                                           m_points[2*currLocation + 1], 
                                                           0, 
                                                           m_points[0], 
                                                           m_points[1], 
                                                           0);                                                 
          return tsp;
        }

        // if we arrive at a state which is already been computed
        if(tsp_args.dp(bitMask, currLocation) != -1) {
          return tsp_args;
        }

        for(unsigned int i = 0; i < m_points.size()/2; i = i + 1)
        {
          if ((bitMask & (1<<i)) == 0)
          {
            // this means current city has not been visited
            //changing the city as visited
            int bitMaskNew = bitMask | (1<<i);
            
            //storing the distance of current city to the city and then fetching remaining distance from recursive call.
            double dist = Coordinates::WGS84::distance(m_points[2*currLocation], 
                                                       m_points[2*currLocation + 1], 
                                                       0, 
                                                       m_points[2*i], 
                                                       m_points[2*i + 1], 
                                                       0);
            TSP tsp_rec = tsp(bitMaskNew, i, tsp_args);
            double distAns = dist + tsp_rec.totalDistance;
            
            //storing the shortest distance
            if (distAns < tsp_args.totalDistance)
            {
              tsp_args.totalDistance = distAns;
              tsp_args.path = tsp_rec.path;
              tsp_args.path.push_back(i);
              tsp_args.dp(bitMaskNew, currLocation) = distAns;
            }
          }
        }
        return tsp_args;
      }

      std::vector<unsigned int>
      TSPalgorithm()
      {
        m_points.push_back(Angles::degrees(vehicle_lat));
        m_points.push_back(Angles::degrees(vehicle_lon));

        for(unsigned int i = 0; i < m_args.POI.size(); i = i + 1)
        {
          m_points.push_back(m_args.POI[i]);
        }
        allVisited = (1<<(m_points.size()/2)) - 1;

        TSP tsp_args;
        tsp_args.totalDistance = 200000.0;
        tsp_args.dp = Matrix(pow(2, m_points.size()/2), m_points.size()/2);
        tsp_args.dp.fill(-1.0);
        TSP tspResult = tsp(1, 0, tsp_args);
        tspResult.path.push_back(0);
        debug("The total distance is %.2f", tspResult.totalDistance);
        debug("Order to visit locations:");
        for(unsigned int i = 0; i < tspResult.path.size(); i = i + 1)
        {
          debug("%d", tspResult.path[i]);
        }
        return tspResult.path;
      }

      void
      createPlan(std::vector<unsigned int> order)
      {
        for(unsigned int i = 0; i < m_points.size()/2; i = i + 1)
        {
          double lat_deg = m_points[2*order[i]];
          double lon_deg = m_points[2*order[i] + 1];
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
          man_name << "Goto" << (i);
          pman.maneuver_id = man_name.str();
          pman.data.set(goto_maneuver);
          m_plan_to_run.maneuvers.push_back(pman);
          if (i == 0)
          {
            m_plan_to_run.start_man_id = pman.maneuver_id;
          }
          else
          {
            // Set Plan Transition
            IMC::PlanTransition ptrans;
            std::stringstream prev_man_name;
            prev_man_name << "Goto" << (i) - 1;
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
          if (positionReady && !planReady && !errorPresent)
          {
            debug("using TSP and creating plan");
            std::vector<unsigned int> order = TSPalgorithm();
            createPlan(order);
            positionReady = false;
            planReady = true;
          }

          if (inService && planReady && !planHasStarted && !errorPresent){
            debug("start execution of plan");
            m_gen = Math::Random::Factory::create(Math::Random::Factory::c_default);
            IMC::PlanControl plan_control;
            plan_control.type = IMC::PlanControl::PC_REQUEST;
            plan_control.op = IMC::PlanControl::PC_START;
            plan_control.request_id = m_gen->random() & 0xFFFF;
            debug("Plan_control request ID is %d", plan_control.request_id);
            plan_control.plan_id = m_plan_to_run.plan_id;
            debug("Plan_control plan ID is %s", m_plan_to_run.plan_id.c_str());
            plan_control.arg.set(m_plan_to_run);
            plan_control.setDestination(getSystemId());

            dispatch (plan_control, DF_LOOP_BACK);
            planHasStarted = true;
          }
        }
      }
    };
  }
}

DUNE_TASK