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
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <cmath>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Simulation/UAV.hpp>
using DUNE::Simulation::UAVSimulation;

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace Coordinator
    {
      using DUNE_NAMESPACES;

      //! Vector for System Mapping.
      typedef std::vector<uint32_t> Systems;

      //! Vector for Entity Mapping.
      typedef std::vector<uint32_t> Entities;

      struct Arguments
      {
        //! Command source
        std::vector<std::string> cmd_src;
        //! Source system alias
        std::string src_alias;
        //! Leader system name
        std::string leader_alias;
        //! Control constraints
        double tas_max;
        double tas_min;
        double bank_lim;
        double alt_max;
        double alt_min;
        //! Formation configuration parameters
        int formation_frame;
        Matrix formation_pos;
        std::vector<std::string> formation_systems;
        unsigned int uav_n;
        //! UAV Model Parameters
        std::string sim_type; // Simulation type (3DOF, 4DOF_bank, 4DOF_alt, 5DOF, 6DOF_stabder, and 6DOF_geom)
        double c_speed;
        double c_bank;
        double c_alt;
        //! - Constraints
        double l_bank_rate;
        double l_accel_x;
        double l_vert_slope;
        // Initial state
        double default_lat;
        double default_lon;
        double default_alt;
        double default_speed;
        // Debug flag
        bool debug;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Task arguments.
        Arguments m_args;

        //! Leader vehicle model
        UAVSimulation* m_model;
        //! Vehicle's referential position (Latitude, Longitude, and height).
        double m_llh_ref_pos[3];
        //! Leader's simulated position (X,Y,Z,phi,theta,psi).
        Matrix m_position;
        //! Leader's simulated velocity (u,v,w,p,q,r).
        Matrix m_velocity;
        //! Leader's estimated state
        IMC::EstimatedState m_estate_leader;
        //! Simulation and control time variables
        double m_clock_diff;
        double m_last_leader_update;
        //! Last time debug information was shown
        double m_last_time_debug;
        double m_last_time_trace;
        double m_last_time_spew;

        //! System state variables
        Matrix m_uav_state;
        Matrix m_team_state;
        //! Environment variables
        Matrix m_wind;
        double m_wind_speed;
        Matrix m_wind_team;
        double m_g;

        //! System command variables
        Matrix m_uav_ctrl;

        //! Vehicle commands
        IMC::DesiredRoll m_bank_cmd;
        IMC::DesiredSpeed m_airspeed_cmd;
        IMC::DesiredZ m_altitude_cmd;
        double m_tas_cmd_leader;
        double m_alt_cmd_leader;
        //! Constraints
        double m_tas_min;
        double m_tas_max;
        double m_bank_lim;
        Matrix m_tas_min_uav;
        Matrix m_tas_max_uav;
        Matrix m_bank_lim_uav;

        //! Number of team vehicles
        unsigned int m_uav_n;
        Systems m_uav_id;
        Matrix m_formation_pos;

        //! Simulation process time step
        double m_timestep;

        //! Formation synchronization messages
        IMC::FormationPlanExecution m_uav_formation;
        //! Leader initial state
        IMC::LeaderState m_init_leader;

        // Debug variables
        bool m_debug;

        // Flight plan
        IMC::PlanControl m_plan_ctrl_last;

        //! List of systems allowed to define a command.
        std::map<uint32_t, Systems> m_filtered_sys;
        //! List of entities allowed to define a command.
        std::map<uint32_t, Entities> m_filtered_ent;
        // System alias id
        uint32_t m_alias_id;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          m_model(NULL),
          m_position(6, 1, 0.0),
          m_velocity(6, 1, 0.0),
          m_clock_diff(0.0),
          m_last_time_debug(std::min(-1.0, Clock::get())),
          m_last_time_trace(std::min(-1.0, Clock::get())),
          m_last_time_spew(std::min(-1.0, Clock::get())),
          m_uav_state(12, 1, 0.0),
          m_team_state(12, 1, 0.0),
          m_wind(3, 1, 0.0),
          m_wind_speed(0.0),
          m_wind_team(3, 1, 0.0),
          m_g(Math::c_gravity),
          m_bank_cmd(0.0),
          m_airspeed_cmd(0.0),
          m_altitude_cmd(0.0),
          m_tas_cmd_leader(0.0),
          m_alt_cmd_leader(0.0),
          m_tas_min(0.0),
          m_tas_max(0.0),
          m_bank_lim(0.0),
          m_tas_min_uav(1, 1, 0.0),
          m_tas_max_uav(1, 1, 0.0),
          m_bank_lim_uav(1, 1, 0.0),
          m_uav_n(1),
          m_timestep(0.0),
          m_debug(false),
          m_alias_id(UINT_MAX)
        {
          // Definition of configuration parameters.
          paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                      Tasks::Parameter::VISIBILITY_USER);

          param("Message source", m_args.cmd_src)
          .defaultValue("")
          .description("List of <Message>:<System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass a specific command.");

          param("Source Alias", m_args.src_alias)
          .defaultValue("")
          .description("Emulated system id.");

          param("Maximum Airspeed", m_args.tas_max)
          .defaultValue("22.0")
          .description("Aircraft maximum airspeed");

          param("Minimum Airspeed", m_args.tas_min)
          .defaultValue("18.0")
          .description("Aircraft minimum airspeed");

          param("Maximum Altitude", m_args.alt_max)
          .defaultValue("600.0")
          .description("Maximum altitude constraint");

          param("Minimum Altitude", m_args.alt_min)
          .defaultValue("150.0")
          .description("Minimum altitude constraint");

          param("Bank Limit", m_args.bank_lim)
          .defaultValue("30.0")
          .description("Aircraft Bank Limit");
          m_args.bank_lim = DUNE::Math::Angles::radians(m_args.bank_lim);

          param("Formation Reference Frame", m_args.formation_frame)
          .defaultValue("0")
          .description("Formation Reference Frame (0 - Earth; 1 - Path (no curvature); 2 - Path (with curvature)");

          param("Formation Positions", m_args.formation_pos)
          .defaultValue("0.0, 0.0, 0.0")
          .description("Formation positions matrix");

          param("Vehicle List", m_args.formation_systems)
          .defaultValue("")
          .description("System ID list of the formation vehicles.");

          param("UAV Number", m_args.uav_n)
          .defaultValue("1")
          .description("UAV Number");

          param("Simulation type", m_args.sim_type)
          .defaultValue("4DOF_bank")
          .description("Simulation type (DOF)");

          param("Speed Time Constant", m_args.c_speed)
          .defaultValue("1.0")
          .units(Units::Hertz)
          .description("Speed controller first order time constant. Inverse of the speed rate gain to simulate speed dynamics");

          param("Bank Time Constant", m_args.c_bank)
          .defaultValue("1.0")
          .units(Units::Hertz)
          .description("Bank controller first order time constant. Inverse of the bank rate gain to simulate bank dynamics");

          param("Altitude Time Constant", m_args.c_alt)
          .defaultValue("1.0")
          .units(Units::Hertz)
          .description("Altitude controller first order time constant. Inverse of the vertical rate gain to simulate altitude dynamics");

          param("Bank Rate Limit", m_args.l_bank_rate)
          .defaultValue("0.0")
          .units(Units::DegreePerSecond)
          .description("Bank rate limit to simulate bank dynamics");

          param("Longitudinal Acceleration Limit", m_args.l_accel_x)
          .defaultValue("0.1")
          .units(Units::MeterPerSquareSecond)
          .description("Vehicle longitudinal acceleration limit to simulate the speed dynamics");

          param("Vertical Slope Limit", m_args.l_vert_slope)
          .defaultValue("0.0")
          .units(Units::None)
          .description("Vertical slope limit to simulate altitude dynamics");

          param("Default Latitude", m_args.default_lat)
          .defaultValue("39.09")
          .description("Default reference latitude");

          param("Default Longitude", m_args.default_lon)
          .defaultValue("-8.964")
          .description("Default reference longitude");

          param("Default Altitude", m_args.default_alt)
          .defaultValue("147.3")
          .description("Default reference WGS-84 geoid altitude");

          param("Default Speed", m_args.default_speed)
          .defaultValue("18.0")
          .description("Initial state airspeed");

          param("Debug", m_args.debug)
          .defaultValue("false")
          .description("Controller in debug mode");

          // Message binding
          //bind<IMC::LeaderState>(this);
          bind<IMC::PlanControl>(this);
          bind<IMC::PlanDB>(this);
          bind<IMC::EstimatedStreamVelocity>(this);
          bind<IMC::DesiredRoll>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::DesiredZ>(this);
          bind<IMC::EstimatedState>(this);
        }

        void
        onUpdateParameters(void)
        {
          //==========================================
          // General parameters treatment
          //==========================================
          // Reset angular units
          m_bank_lim = Angles::radians(m_args.bank_lim);
          // Simulation time step
          if (this->getFrequency() > 0.0)
            m_timestep = 1/this->getFrequency();
          else
            throw std::runtime_error("Frequency must be larger than 0!");;
          // Debug flag - for control performance monitoring
          m_debug = m_args.debug;

          //==========================================
          // Check the formation parameters
          //==========================================
          // Check if the formation positions matrix has a suitable size
          if (m_args.formation_pos.size() == 0)
          {
            stop();
            throw std::runtime_error("Formation vehicles' positions matrix is empty!");
          }
          if (m_args.formation_pos.rows()%3 != 0)
          {
            stop();
            throw std::runtime_error(static_cast<std::ostringstream*>( &(std::ostringstream() << "Number of UAV positions coordinates in the formation matrix (" << m_args.formation_pos.rows() << ") is not a multiple of 3!"))->str());
          }
          // Check if the formation positions matrix has the right size:
          // 3 rows and as many columns as the number of UAVs
          if (m_args.formation_pos.rows()/3 > 1)
          {
            // - If not, compute the number of UAVs included and resize the matrix
            m_uav_n = m_args.formation_pos.rows()/3;
            m_formation_pos.resizeAndKeep(3, m_uav_n);
          }
          else
          {
            m_uav_n = m_args.formation_pos.columns();
            m_formation_pos = m_args.formation_pos;
          }

          // Check if the number of UAVs in the formation positions matrix
          // matches that indicated as a parameter
          if (m_uav_n != m_args.uav_n)
          {
            war("Number of the UAVs in the formation matrix (%u) is different from the total UAV count indicated (%u)!",
                m_uav_n, m_args.uav_n);
            debug("Formation position matrix:");
            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ind_uav++)
              debug("UAV %u: [x=%1.1f, y=%1.1f, z=%1.1f]", ind_uav,
                   m_formation_pos(0, ind_uav), m_formation_pos(1, ind_uav), m_formation_pos(2, ind_uav));
            m_uav_n = (m_uav_n < m_args.uav_n)?m_uav_n:m_args.uav_n;
          }

          // Check if the number of UAVs in the formation vehicle list
          // matches that indicated as a parameter
          if (m_args.formation_systems.size() != m_args.uav_n)
          {
            war("Number of the UAVs in the formation vehicle list (%u) is different from the total UAV count indicated (%u)!",
                (unsigned int)m_args.formation_systems.size(), m_args.uav_n);
            debug("Formation vehicle list:");
            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ind_uav++)
              debug("UAV %u: %s]", ind_uav, m_args.formation_systems[ind_uav].c_str());
          }
          m_uav_n = (m_uav_n < m_args.formation_systems.size())?m_uav_n:m_args.formation_systems.size();
          // Vehicle quantity considered in the formation
          debug("Number of UAVs -> %d", m_uav_n);

          // Process formation vehicle list
          Systems tmp_uav_id = m_uav_id;
          if (m_args.formation_systems.empty())
          {
            stop();
            throw std::runtime_error("Formation vehicle list is empty!");
          }
          m_uav_id.clear();
          for (unsigned int uav_ind = 0; uav_ind < m_uav_n; ++uav_ind)
            m_uav_id.push_back(resolveSystemName(m_args.formation_systems[uav_ind]));

          //==========================================
          // Data resizing
          //==========================================
          // Check if the formation composition changed
          if (tmp_uav_id != m_uav_id)
          {
            // ToDo - Add data reallocation logic to keep the data from the remaining vehicles
            // Initialize the team vehicles' state matrix
            debug("Vehicles state and command vectors initialization");
            m_uav_state = DUNE::Math::Matrix(12, m_uav_n, 0.0);
            // Resize the wind matrix
            m_wind_team.resizeAndKeep(3, m_uav_n);
            m_tas_min_uav = Matrix(1, m_uav_n, m_args.tas_min);
            m_tas_max_uav = Matrix(1, m_uav_n, m_args.tas_max);
            m_bank_lim_uav = Matrix(1, m_uav_n, Angles::radians(m_args.bank_lim));
          }

          //==========================================
          // Formation configuration messages
          //==========================================
          // ToDo - Set the hardcoded variables as configurable
          m_uav_formation.group_name = "AsasF";
          m_uav_formation.formation_name = "AsasF";
          m_uav_formation.plan_id = m_plan_ctrl_last.plan_id;
          m_uav_formation.description = "Test formation configuration";
          m_uav_formation.leader_speed = m_tas_cmd_leader;
          m_uav_formation.leader_bank_lim = m_bank_lim;
          m_uav_formation.pos_sim_err_lim = 20;
          m_uav_formation.pos_sim_err_wrn = 10;
          m_uav_formation.pos_sim_err_timeout = 10;
          m_uav_formation.converg_max = 5;
          m_uav_formation.converg_timeout = 10;
          m_uav_formation.comms_timeout = 5;
          m_uav_formation.turb_lim = 10;

          IMC::FormationParameters formation_param;
          IMC::VehicleFormationParticipant formation_uav;
          formation_param.formation_name = "AsasF";
          formation_param.reference_frame = m_args.formation_frame;
          for (unsigned int uav_ind; uav_ind < m_uav_n; uav_ind++)
          {
            formation_uav.vid = m_uav_id;
            formation_uav.off_x = m_formation_pos(0, uav_ind);
            formation_uav.off_y = m_formation_pos(1, uav_ind);
            formation_uav.off_z = m_formation_pos(2, uav_ind);
            formation_param.participants.push_back(formation_uav);
          }
          dispatchAlias(&formation_param);

          //==========================================
          // Compute the leader limits from the formation configuration
          //==========================================
          updateLeaderLimits();

          //==========================================
          // Set messages system source
          //==========================================
          //! Set source system alias
          if (!m_args.src_alias.empty())
          {
            // Resolve systems.
            try
            {
              m_alias_id = resolveSystemName(m_args.src_alias);
            }
            catch (...)
            {
              debug("No system found with designation '%s'.", m_args.src_alias.c_str());
              m_alias_id = UINT_MAX;
            }
          }
          else
            m_alias_id = UINT_MAX;
        }

        void
        onEntityResolution(void)
        {
          //==========================================
          // General parameters initialization
          //==========================================
          // Home reference latitude, longitude, and height
          m_llh_ref_pos[0] = Angles::radians(m_args.default_lat);
          m_llh_ref_pos[1] = Angles::radians(m_args.default_lon);
          m_llh_ref_pos[2] = m_args.default_alt;
          // Start the simulation time
          m_last_leader_update = Clock::get();
          // Leader commanded true airspeed
          m_tas_cmd_leader = m_args.default_speed;
          m_airspeed_cmd.value = m_tas_cmd_leader;
          // Leader commanded altitude
          m_alt_cmd_leader = m_args.default_alt + m_args.alt_min;
          m_altitude_cmd.value = m_alt_cmd_leader;

          //==========================================
          // Initialize the leader vehicle model
          //==========================================
          // Model initialization
          debug("Formation leader model initialization");
          // - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(m_position, m_velocity, m_args.c_bank, m_args.c_speed);
          // - Commands initialization
          m_model->command(0, m_tas_cmd_leader, -m_alt_cmd_leader);
          // - Limits definition
          if (m_args.l_bank_rate > 0)
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          if (m_args.l_accel_x > 0)
            m_model->setAccelLim(m_args.l_accel_x);
          // - Simulation type
          m_model->m_sim_type = m_args.sim_type;

          //==========================================
          // Apply the task parameters
          //==========================================
          onUpdateParameters();

          //==========================================
          // Process the systems and entities allowed to define a command
          //==========================================
          uint32_t i_cmd;
          uint32_t i_cmd_final;
          uint32_t i_src;
          uint32_t i_src_ini;
          m_filtered_sys.clear();
          m_filtered_ent.clear();
          for (unsigned int i = 0; i < m_args.cmd_src.size(); ++i)
          {
            std::vector<std::string> parts;
            String::split(m_args.cmd_src[i], ":", parts);
            if (parts.size() < 1)
              continue;

            if (parts[0].compare("DesiredRoll") == 0)
              i_cmd = 0;
            else if (parts[0].compare("DesiredSpeed") == 0)
              i_cmd = 1;
            else if (parts[0].compare("DesiredZ") == 0)
              i_cmd = 2;
            else if (parts[0].compare("DesiredPitch") == 0)
              i_cmd = 3;
            else if (parts[0].compare("EstimatedStreamVelocity") == 0)
              i_cmd = 4;
            else
              i_cmd = 5;

            // Split systems and entities.
            std::vector<std::string> systems;
            String::split(parts[1], "+", systems);
            std::vector<std::string> entities;
            String::split(parts[2], "+", entities);
            if (systems.size() == 0)
              systems.resize(1);
            if (entities.size() == 0)
              entities.resize(1);

            // Assign filtered systems and entities to the selected commands
            if (i_cmd == 4)
            {
              i_cmd = 0;
              i_cmd_final = 3;
            }
            else
              i_cmd_final = i_cmd;
            for (; i_cmd <= i_cmd_final; i_cmd++)
            {
              i_src_ini = m_filtered_sys[i_cmd].size();
              m_filtered_sys[i_cmd].resize(i_src_ini+systems.size()*entities.size());
              m_filtered_ent[i_cmd].resize(i_src_ini+systems.size()*entities.size());

              // Resolve systems id.
              for (unsigned j = 0; j < systems.size(); j++)
              {
                // Resolve entities id.
                for (unsigned k = 0; k < entities.size(); k++)
                {
                  i_src = (j+1)*(k+1)-1;
                  // Resolve systems.
                  if (systems[j].empty())
                  {
                    m_filtered_sys[i_cmd][i_src_ini+i_src] = UINT_MAX;
                    debug("Filter source system undefined");
                  }
                  else
                  {
                    try
                    {
                      m_filtered_sys[i_cmd][i_src_ini+i_src] = resolveSystemName(systems[j]);
                      debug("SystemID: %d", resolveSystemName(systems[j]));
                    }
                    catch (...)
                    {
                      debug("No system found with designation '%s'.", parts[1].c_str());
                      m_filtered_sys[i_cmd][i_src_ini+i_src] = UINT_MAX;
                    }
                  }
                  // Resolve entities.
                  if (entities[j].empty())
                  {
                    m_filtered_ent[i_cmd][i_src_ini+i_src] = UINT_MAX;
                    debug("Filter entity system undefined");
                  }
                  else
                  {
                    try
                    {
                      m_filtered_ent[i_cmd][i_src_ini+i_src] = resolveEntity(entities[k]);
                      debug("EntityID: %d", resolveEntity(entities[k]));
                    }
                    catch (...)
                    {
                      debug("No entity found with designation '%s'.", parts[2].c_str());
                      m_filtered_ent[i_cmd][i_src_ini+i_src] = UINT_MAX;
                    }
                  }
                }
              }
            }
          }
        }

        void
        onResourceAcquisition(void)
        {
        }

        void
        onResourceRelease(void)
        {
//          for (int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
//            Memory::clear(m_form_monitor->rel_state[ind_uav]);
//          Memory::clear(m_form_monitor);
        }

//        void
//        consume(const IMC::LeaderState* msg)
//        {
//          if (m_args.uav_ind == 0)
//          {
//            // Set leader state
//            if (msg->op == IMC::LeaderState::OP_SET)
//            {
//              // Check if the system is the intended destination of the state
//              if (msg->getDestination() != ((m_alias_id != UINT_MAX) ? m_alias_id : getSystemId()))
//              {
//                trace("LeaderState message rejected!");
//                trace("Destination system: %s.", resolveSystemId(msg->getDestination()));
//                return;
//              }
//
//              debug("LeaderState received!");
//              setLeaderState(msg);
//
//              /*
//              // Save message to cache.
//              IMC::CacheControl cop;
//              cop.op = IMC::CacheControl::COP_STORE;
//              cop.message.set(*msg);
//              dispatchAlias(&cop);
//               */
//            }
//          }
//        }

        void
        consume(const IMC::PlanControl* msg)
        {
          m_plan_ctrl_last = *msg;
          // ToDo - For final implementation, the activation should
          // depend from the assertion that all formation vehicles are in reach
          trace("PlanControl message received.");

          // Check if it is a plan execution request
          if (msg->type != IMC::PlanControl::PC_REQUEST)
            return;

          // Check if the vehicle is the intended destination of the plan
          if (msg->getDestination() != getSystemId())
          {
            trace("PlanControl message rejected!");
            trace("Destination system: %s.", resolveSystemId(msg->getDestination()));
            return;
          }

          // Check if the vehicle is itself the source of the plan
          if (msg->getSource() == m_alias_id)
          {
            trace("PlanControl message rejected!");
            trace("Source is the coordinator itself.");
            return;
          }

          // Request plan information to check if it is a formation flight plan
          // if the PlanControl action is "Start"
          if (msg->op == IMC::PlanControl::PC_START)
          {
            // Request plan specification to confirm if it is a formation flight plan
            IMC::PlanDB plan_db;
            plan_db.plan_id = msg->plan_id;
            plan_db.type = IMC::PlanDB::DBT_REQUEST;
            plan_db.op = IMC::PlanDB::DBOP_GET;
            dispatchAlias(&plan_db);
          }
        }

        void
        consume(const IMC::PlanDB* msg)
        {
          //================================================
          // Check if the plan is a formation flight plan
          //================================================
          // Check if the system and entity are the destination of the PlanDB message
          if (msg->getDestination() != (m_alias_id != UINT_MAX)?m_alias_id:getSystemId() ||
              msg->getDestinationEntity() != getEntityId())
          {
            trace("PlanDB message rejected.");
            trace("PlanDB received from system '%s' and entity '%s'.",
                resolveSystemId(msg->getSource()),
                resolveEntity(msg->getSourceEntity()).c_str());
            return;
          }
          // Check if the plan is valid
          if (msg->type != IMC::PlanDB::DBT_FAILURE)
          {
            err("Plan not found in the database!");
            return;
          }
          // Deserialize PlanDB message and check if there are formation flight maneuvers
          // ToDo - Activate the formation flight controllers only for the specific maneuvers
          bool is_formation_control = false;
          try
          {
            const IMC::SetEntityParameters* sep;
            const IMC::PlanSpecification* planspec = static_cast<const IMC::PlanSpecification*>(msg->arg.get());
            IMC::MessageList<IMC::PlanManeuver>::const_iterator it = planspec->maneuvers.begin();
            for (; it != planspec->maneuvers.end(); it++ )
            {
              IMC::MessageList<IMC::Message>::const_iterator it_sa = (*it)->start_actions.begin();
              for (; it_sa != (*it)->start_actions.end(); it_sa++ )
              {
                sep = static_cast<const IMC::SetEntityParameters*>(*it_sa);
                if (sep->name.compare("Autopilot") == 0)
                {
                  IMC::MessageList<IMC::EntityParameter>::const_iterator it_ep = sep->params.begin();
                  for (; it_ep != sep->params.end(); it_ep++ )
                  {
                    if ((*it_ep)->name.compare("Formation Flight") == 0 &&
                        (*it_ep)->value.compare("true") == 0)
                      is_formation_control = true;
                  }
                }
              }
            }
          }
          catch (std::exception& e)
          {
            err(DTR("Plan specification request failed with uncaught exception: %s"), e.what());
          }

          //===================================
          // Activate formation flight control
          //===================================
          if (!is_formation_control)
            return;
          // Set the leader initial state with the global team state
          trace("Sending LeaderState to the leader.");
          //m_init_leader.setDestination(m_uav_id[ind_uav]);
          m_init_leader.op      = IMC::LeaderState::OP_SET;
          m_init_leader.lat     = m_llh_ref_pos[0];
          m_init_leader.lon     = m_llh_ref_pos[1];
          m_init_leader.height  = m_llh_ref_pos[2];
          m_init_leader.x       = m_team_state(0);
          m_init_leader.y       = m_team_state(1);
          m_init_leader.z       = m_team_state(2);
          m_init_leader.vx      = m_team_state(3);
          m_init_leader.vy      = m_team_state(4);
          m_init_leader.vz      = m_team_state(5);
          m_init_leader.phi     = m_team_state(6);
          m_init_leader.theta   = m_team_state(7);
          m_init_leader.psi     = m_team_state(8);
          m_init_leader.p       = m_team_state(9);
          m_init_leader.q       = m_team_state(10);
          m_init_leader.r       = m_team_state(11);
          m_init_leader.svx     = m_wind(0);
          m_init_leader.svy     = m_wind(1);
          m_init_leader.svz     = m_wind(2);
          setLeaderState(&m_init_leader);
          dispatchAlias(&m_init_leader);
          // Reroute the PlanControl message to the vehicle formation controllers
          for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ind_uav++)
          {
            m_plan_ctrl_last.setDestination(m_uav_id[ind_uav]);
            dispatchAlias(&lead_plan_ctrl);
          }
        }

        void
        consume(const IMC::DesiredRoll* msg)
        {
          //! Get leader vehicle commanded roll
          if (!isActive())
          {
            //trace("Bank command rejected.");
            //trace("Leader simulation not active.");
            return;
          }

          // Filter command by systems and entities.
          bool matched = true;
          if (m_filtered_sys[0].size() > 0)
          {
            matched = false;
            std::vector<uint32_t>::iterator itr_sys = m_filtered_sys[0].begin();
            std::vector<uint32_t>::iterator itr_ent = m_filtered_ent[0].begin();
            for (; itr_sys != m_filtered_sys[0].end(); ++itr_sys)
            {
              if ((*itr_sys == msg->getSource() || *itr_sys == UINT_MAX) &&
                  (*itr_ent == msg->getSourceEntity() || *itr_ent == UINT_MAX))
                matched = true;
              ++itr_ent;
            }
          }
          // This system and entity are not listed to be passed.
          if (!matched)
          {
            trace("Bank command rejected.");
            trace("DesiredRoll received from system '%s' and entity '%s'.",
                resolveSystemId(msg->getSource()),
                resolveEntity(msg->getSourceEntity()).c_str());
            return;
          }

          m_model->commandBank(trimValue(msg->value, -m_bank_lim, m_bank_lim));

          // ========= Debug ===========
          spew("Bank command received (%1.2fº)", DUNE::Math::Angles::degrees(msg->value));
          spew("DesiredRoll received from system '%s' and entity '%s'.",
              resolveSystemId(msg->getSource()),
              resolveEntity(msg->getSourceEntity()).c_str());
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          //! Get leader vehicle commanded airspeed
          if (!isActive())
          {
            //trace("Speed command rejected.");
            //trace("Leader simulation not active.");
            return;
          }

          // Filter command by systems and entities.
          bool matched = true;
          if (m_filtered_sys[1].size() > 0)
          {
            matched = false;
            std::vector<uint32_t>::iterator itr_sys = m_filtered_sys[1].begin();
            std::vector<uint32_t>::iterator itr_ent = m_filtered_ent[1].begin();
            for (; itr_sys != m_filtered_sys[1].end(); ++itr_sys)
            {
              if ((*itr_sys == msg->getSource() || *itr_sys == UINT_MAX) &&
                  (*itr_ent == msg->getSourceEntity() || *itr_ent == UINT_MAX))
                matched = true;
              ++itr_ent;
            }
          }
          // This system and entity are not listed to be passed.
          if (!matched)
          {
            trace("Speed command rejected.");
            trace("DesiredSpeed received from system '%s' and entity '%s'.",
                resolveSystemId(msg->getSource()),
                resolveEntity(msg->getSourceEntity()).c_str());
            return;
          }

          m_tas_cmd_leader = trimValue(msg->value, m_args.tas_min,  m_args.tas_max);
          m_model->commandAirspeed(m_tas_cmd_leader);

          m_uav_formation.leader_speed = m_tas_cmd_leader;
          updateLeaderLimits();

          // ========= Debug ===========
          spew("Speed command received (%1.2fm/s), assumed (%1.2fm/s)", msg->value, m_tas_cmd_leader);
          spew("DesiredSpeed received from system '%s' and entity '%s'.",
              resolveSystemId(msg->getSource()),
              resolveEntity(msg->getSourceEntity()).c_str());
        }

        void
        consume(const IMC::DesiredZ* msg)
        {
          //! Check if system is active
          if (!isActive())
          {
            //trace("Altitude command rejected.");
            //trace("Leader simulation not active.");
            return;
          }

          // Filter command by systems and entities.
          bool matched = true;
          if (m_filtered_sys[2].size() > 0)
          {
            matched = false;
            std::vector<uint32_t>::iterator itr_sys = m_filtered_sys[2].begin();
            std::vector<uint32_t>::iterator itr_ent = m_filtered_ent[2].begin();
            for (; itr_sys != m_filtered_sys[2].end(); ++itr_sys)
            {
              if ((*itr_sys == msg->getSource() || *itr_sys == UINT_MAX) &&
                  (*itr_ent == msg->getSourceEntity() || *itr_ent == UINT_MAX))
                matched = true;
              ++itr_ent;
            }
          }
          // This system and entity are not listed to be passed.
          if (!matched)
          {
            trace("Altitude command rejected.");
            trace("DesiredZ received from system '%s' and entity '%s'.",
                resolveSystemId(msg->getSource()),
                resolveEntity(msg->getSourceEntity()).c_str());
            return;
          }

          if (msg->z_units == IMC::Z_ALTITUDE)
            m_alt_cmd_leader = msg->value+m_llh_ref_pos[2];
          else if (msg->z_units == IMC::Z_HEIGHT)
            m_alt_cmd_leader = msg->value;
          else if (msg->z_units == IMC::Z_DEPTH)
            m_alt_cmd_leader = -msg->value;
          else
            m_alt_cmd_leader = m_args.alt_min+m_llh_ref_pos[2];
          m_model->commandAlt(trimValue(m_alt_cmd_leader,
                                        m_args.alt_min+m_llh_ref_pos[2],
                                        m_args.alt_max+m_llh_ref_pos[2]));

          // ========= Debug ===========
          spew("Altitude command received (%1.2fm), assumed (%1.2fm)", msg->value, m_alt_cmd_leader);
          spew("DesiredZ received from system '%s' and entity '%s'.",
              resolveSystemId(msg->getSource()),
              resolveEntity(msg->getSourceEntity()).c_str());
        }

        void
        consume(const IMC::EstimatedStreamVelocity* msg)
        {
          // Set the current UAV index according to the group definition and the message source
          unsigned int uav_ind = 0;
          for (; uav_ind < m_uav_n; uav_ind++)
            if (m_uav_id[uav_ind] == msg->getSource())
              break;
          m_wind_team(0, uav_ind) = msg->x;
          m_wind_team(1, uav_ind) = msg->y;
          m_wind_team(2, uav_ind) = msg->z;
          // Average the received wind estimations over the team members
          double t_sum = 0.0;
          for (unsigned int i = 0; i < 3; i++)
          {
            for (uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
              t_sum =+ m_wind_team(i, uav_ind);
            m_wind(i) = t_sum/m_uav_n;
            m_wind_speed = m_wind.norm_2();
          }
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          //==========================================================
          // Define a global team state (for leader initial state)
          //==========================================================
          // Select the team vehicle
          unsigned int uav_ind = 0;
          for (; uav_ind < m_uav_n; uav_ind++)
            if (m_uav_id[uav_ind] == msg->getSource())
              break;

          // Update the relative formation state from a team vehicle
          double vt_uav_state[9] = {
              msg->x - m_formation_pos(0, uav_ind),
              msg->y - m_formation_pos(1, uav_ind),
              msg->z - m_formation_pos(2, uav_ind),
              msg->vx, msg->vy, msg->vz,
              0, 0, msg->psi};
          if (m_uav_id[uav_ind] == getSystemId())
          {
            // Updating the home reference if the vehicle is that on which the coordinator is running
            m_llh_ref_pos[0] = msg->lat;
            m_llh_ref_pos[1] = msg->lon;
            m_llh_ref_pos[2] = msg->alt;
          }
          else
            // Adjust the cooperating vehicle offset position from its reference
            // frame to the current vehicle reference frame
            positionReframing(m_llh_ref_pos[0], m_llh_ref_pos[1], m_llh_ref_pos[2],
                              msg->lat, msg->lon, msg->height,
                              &vt_uav_state[0], &vt_uav_state[1], &vt_uav_state[2]);
          // Update vehicle state vector
          m_uav_state.set(0, 8, uav_ind, uav_ind, Matrix(vt_uav_state, 9, 1));

          // Average the received state data over the team members
          double t_sum = 0.0;
          for (unsigned int i = 0; i < 9; i++)
          {
            for (uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
              t_sum =+ m_uav_state(i, uav_ind);
            m_team_state(i) = t_sum/m_uav_n;
          }
        }

        void
        task(void)
        {
          //! Handle IMC messages from bus
          consumeMessages();

          //! Declaration
          double d_time = Clock::get();

          if (!isActive())
          {
            // ========= Spew ===========
            if (d_time >= m_last_time_trace + 1.0)
            {
              spew("Formation flight task is inactive (%s).", this->getSystemName());
              m_last_time_trace = d_time;
            }
            return;
          }

          //! Update leader state for standard time periods
          periodicUpdate(m_clock_diff + Clock::get());
        }

        void
        dispatchAlias(IMC::Message* msg)
        {
          // Dispatch message with alias source identification
          if (m_alias_id != UINT_MAX)
            msg->setSource(m_alias_id);
          dispatch(*msg);
        }

        void
        setLeaderState(const IMC::LeaderState* leader_state)
        {
          //if (!isActive())
          //  requestActivation();

          // Leader home reference
          m_estate_leader.lat = m_llh_ref_pos[0];
          m_estate_leader.lon = m_llh_ref_pos[1];
          m_estate_leader.height = m_llh_ref_pos[2];

          //! Update leader state variables
          double t_leader[12] = {leader_state->x,       leader_state->y,       leader_state->z,
              leader_state->vx,    leader_state->vy,    0,
              trimValue(leader_state->phi, -m_bank_lim, m_bank_lim), 0, leader_state->psi,
              leader_state->p,       0,       leader_state->r};
          //! Adjust leader offset position from its reference
          //! frame to the real vehicle reference frame
          positionReframing(m_llh_ref_pos[0], m_llh_ref_pos[1], m_llh_ref_pos[2],
              leader_state->lat, leader_state->lon, leader_state->height,
              &t_leader[0], &t_leader[1], &t_leader[2]);
          //! Update formation leader state vectors
          m_uav_state.set(0, 11, 0, 0, Matrix(t_leader, 12, 1));
          m_model->setPosition(m_uav_state.get(0, 2, 0, 0).vertCat(m_uav_state.get(6, 8, 0, 0)));
          m_model->setVelocity(m_uav_state.get(3, 5, 0, 0).vertCat(m_uav_state.get(9, 11, 0, 0)));
          //! Update formation leader wind vector
          m_model->m_wind(0) = leader_state->svx;
          m_model->m_wind(1) = leader_state->svy;
          m_last_leader_update = leader_state->getTimeStamp();

          debug("---------------------------");
          debug("Leader latitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lat));
          debug("Leader longitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lon));
          debug("Leader altitude: %1.4fm", m_init_leader.height);
          debug("Leader x position: %1.4f", m_uav_state(0, 0));
          debug("Leader y position: %1.4f", m_uav_state(1, 0));
          debug("Leader z position: %1.4f", m_uav_state(2, 0));
          debug("Leader roll angle: %1.4f", m_uav_state(6, 0));
          debug("Leader pitch angle: %1.4f", m_uav_state(7, 0));
          debug("Leader yaw angle: %1.4f", m_uav_state(8, 0));
          debug("Leader x speed: %1.4f", m_uav_state(3, 0));
          debug("Leader y speed: %1.4f", m_uav_state(4, 0));
          debug("Leader z speed: %1.4f", m_uav_state(5, 0));
          debug("Leader roll rate: %1.4f", m_uav_state(9, 0));
          debug("Leader pitch rate: %1.4f", m_uav_state(10, 0));
          debug("Leader yaw rate: %1.4f", m_uav_state(11, 0));
          debug("Leader x wind speed: %1.4f", m_model->m_wind(0));
          debug("Leader y wind speed: %1.4f", m_model->m_wind(1));
          debug("Leader z wind speed: %1.4f", m_model->m_wind(2));
          debug("---------------------------");
        }

        Matrix
        matrixRotRbody2gnd(float roll, float pitch)
        {
          // Rotations rotation matrix
          double t_j2[9] = {1, std::sin(roll) * std::tan(pitch),  std::cos(roll) * std::tan(pitch),
              0,                   std::cos(roll),                   -std::sin(roll),
              0, std::sin(roll) / std::cos(pitch),  std::cos(roll) / std::cos(pitch)};

          return Matrix(t_j2, 3, 3);
        }

        //! Adjust offset position from a reference frame to a new reference frame.
        //!
        //! @param[in] lat1 new reference latitude (rad).
        //! @param[in] lon1 new reference longitude (rad).
        //! @param[in] hei1 new reference height (m).
        //! @param[in] lat2 old reference latitude (rad).
        //! @param[in] lon2 old reference longitude (rad).
        //! @param[in] hei2 old reference height (m).
        //! @param[in,out] n North offset (m).
        //! @param[in,out] e East offset (m).
        //! @param[in,out] d Down offset (m).
        template <typename Ta, typename Tb, typename Tc, typename Td, typename Te>
        void
        positionReframing(const Ta lat1, const Ta lon1, const Tb hei1,
            const Tc lat2, const Tc lon2, const Td hei2, Te* n, Te* e, Te* d)
        {
          double lat = lat2;
          double lon = lon2;
          double hei = hei2;

          WGS84::displace(*n, *e, *d, &lat, &lon, &hei);
          WGS84::displacement(lat1, lon1, hei1, lat, lon, hei, n, e);

          //! Vertical position adjustment
          *d += hei1 - hei2;
        }

        //! Update leader simulated state for standard time periods
        void
        periodicUpdate(const double& d_time)
        {
          //! Leader state prediction - Update the simulated vehicle state
          while (m_last_leader_update <= d_time)
          {
            // ========= Spew ===========
            /*
              if (d_time >= m_last_time_spew + 0.1)
              {
                //spew("Simulating: %s", m_model->m_sim_type);
                spew("Bank: %1.2fº        - Commanded bank: %1.2fº",
                     DUNE::Math::Angles::degrees(m_position(3)),
                     DUNE::Math::Angles::degrees(m_model->getBankCmd()));
                spew("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->getAirspeed(), m_model->getAirspeedCmd());
                spew("Yaw: %1.2f", DUNE::Math::Angles::degrees(m_position(5)));
                spew("Current latitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lat));
                spew("Current longitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lon));
                spew("Current altitude: %1.4fm", m_init_leader.height);
                spew("Current x position: %1.4f", m_position(0));
                spew("Current y position: %1.4f", m_position(1));
                spew("Current z position: %1.4f", m_position(2));
                spew("Current roll angle: %1.4f", m_position(3));
                spew("Current pitch angle: %1.4f", m_position(4));
                spew("Current yaw angle: %1.4f", m_position(5));
                spew("Current x speed: %1.4f", m_velocity(0));
                spew("Current y speed: %1.4f", m_velocity(1));
                spew("Current z speed: %1.4f", m_velocity(2));
                spew("Current roll rate: %1.4f", m_velocity(3));
                spew("Current pitch rate: %1.4f", m_velocity(4));
                spew("Current yaw rate: %1.4f", m_velocity(5));
                spew("Current x wind speed: %1.4f", m_wind(0));
                spew("Current y wind speed: %1.4f", m_wind(1));
                spew("Current z wind speed: %1.4f", m_wind(2));
                m_last_time_spew = d_time;
              }
             */

            //==========================================================================
            //! Dynamics
            //==========================================================================

            m_model->update(m_timestep);
            m_last_leader_update =+ m_timestep;
            m_position = m_model->getPosition();
            m_velocity = m_model->getVelocity();

            // ========= Trace ===========
            /*
              if (d_time >= m_last_time_trace + 1.0)
              {
                //trace("Simulating: %s", m_model->m_sim_type);
                trace("Bank: %1.2fº        - Commanded bank: %1.2fº",
                    DUNE::Math::Angles::degrees(m_position(3)),
                    DUNE::Math::Angles::degrees(m_model->getBankCmd()));
                trace("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->getAirspeed(), m_model->getAirspeedCmd());
                trace("Yaw: %1.2f", DUNE::Math::Angles::degrees(m_position(5)));
                trace("Current latitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lat));
                trace("Current longitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lon));
                trace("Current altitude: %1.4fm", m_init_leader.height);
                trace("Current x position: %1.4f", m_position(0));
                trace("Current y position: %1.4f", m_position(1));
                trace("Current z position: %1.4f", m_position(2));
                trace("Current roll angle: %1.4f", m_position(3));
                trace("Current pitch angle: %1.4f", m_position(4));
                trace("Current yaw angle: %1.4f", m_position(5));
                trace("Current x speed: %1.4f", m_velocity(0));
                trace("Current y speed: %1.4f", m_velocity(1));
                trace("Current z speed: %1.4f", m_velocity(2));
                trace("Current roll rate: %1.4f", m_velocity(3));
                trace("Current pitch rate: %1.4f", m_velocity(4));
                trace("Current yaw rate: %1.4f", m_velocity(5));
                trace("Current x wind speed: %1.4f", m_wind(0));
                trace("Current y wind speed: %1.4f", m_wind(1));
                trace("Current z wind speed: %1.4f", m_wind(2));
                m_last_time_trace = d_time;
              }
             */

            //==========================================================================
            // Leader state output
            //==========================================================================

            //! Rotation matrix
            double euler_ang[3] = {m_position(3), m_position(4), m_position(5)};
            Matrix md_rot_body2gnd = Matrix(euler_ang, 3, 1).toDCM();
            //! UAV velocity rotation to the body frame
            Matrix vd_body_vel = transpose(md_rot_body2gnd) * m_velocity.get(0, 2, 0, 0);
            // UAV velocity components, on ground frame
            Matrix vd_gnd_vel = md_rot_body2gnd * vd_body_vel;

            //! Fill position.
            m_estate_leader.x = m_position(0);
            m_estate_leader.y = m_position(1);
            m_estate_leader.z = m_position(2);
            //! Fill body-frame linear velocity, relative to the ground.
            m_estate_leader.u = vd_body_vel(0);
            m_estate_leader.v = vd_body_vel(1);
            m_estate_leader.w = vd_body_vel(2);
            //! Fill attitude.
            m_estate_leader.phi = m_position(3);
            m_estate_leader.theta = m_position(4);
            m_estate_leader.psi = m_position(5);
            //! Fill angular velocity.
            m_estate_leader.p = m_velocity(3);
            m_estate_leader.q = m_velocity(4);
            m_estate_leader.r = m_velocity(5);
            // Fill ground linear velocity.
            m_estate_leader.vx = vd_gnd_vel(0);
            m_estate_leader.vy = vd_gnd_vel(1);
            m_estate_leader.vz = vd_gnd_vel(2);

            //! Send simulated state message (with the system own ID as destination)
            dispatchAlias(&m_estate_leader);

            if (m_debug)
            {
              IMC::SimulatedState sstate;
              IMC::EstimatedStreamVelocity streamspeed;
              IMC::IndicatedSpeed speed;
              IMC::TrueSpeed groundspeed;
              //! Fill position.
              sstate.x = m_position(0);
              sstate.y = m_position(1);
              sstate.z = m_position(2);
              //! Fill body-frame linear velocity, relative to the ground.
              sstate.u = vd_body_vel(0);
              sstate.v = vd_body_vel(1);
              sstate.w = vd_body_vel(2);
              //! Fill attitude.
              sstate.phi = m_position(3);
              sstate.theta = m_position(4);
              sstate.psi = m_position(5);
              //! Fill angular velocity.
              sstate.p = m_velocity(3);
              sstate.q = m_velocity(4);
              sstate.r = m_velocity(5);
              // Fill ground linear velocity.
              sstate.svx = m_wind(0);
              sstate.svy = m_wind(1);
              sstate.svz = m_wind(2);
              // Fill stream velocity.
              streamspeed.x = m_model->m_wind(0);
              streamspeed.y = m_model->m_wind(1);
              streamspeed.z = m_model->m_wind(2);
              // True Airspeed
              speed.value = m_model->getAirspeed();
              // Ground speed
              groundspeed.value = vd_gnd_vel.norm_2();
              // Dispatch messages
              dispatchAlias(&sstate);
              dispatchAlias(&speed);
              dispatchAlias(&groundspeed);
              dispatchAlias(&streamspeed);
            }
          }
        }

        void
        updateLeaderLimits(void)
        {
          //================================
          // Leader maneuverability limits
          //================================
          // Limit speeds
          m_tas_min = m_args.tas_min;
          m_tas_max = m_args.tas_max;
          // Get speed limits from the team vehicles
          // ToDo - Update method to get speed limits from the vehicles themselves
          for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
          {
            if (m_tas_min_uav(uav_ind) > m_tas_min)
              m_tas_min = m_tas_min_uav(uav_ind);
            if (m_tas_max_uav(uav_ind) < m_tas_max)
              m_tas_max = m_tas_max_uav(uav_ind);
          }

          if (m_args.formation_frame == IMC::FormationParameters::OP_EARTH_FIXED)
          {
            //------------------------------------------
            // Ground aligned formation reference frame
            //------------------------------------------
            // Maximum leader bank
            m_bank_lim = m_args.bank_lim;
            for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
              if (m_bank_lim_uav(uav_ind) < m_bank_lim)
                  m_bank_lim = m_bank_lim_uav(uav_ind);
          }
          else
          {
            //------------------------------------------
            // Path aligned formation reference frame
            //------------------------------------------
            double d_tas_cmd_leader_wind = m_tas_cmd_leader +  m_wind_speed;

            // Safety/deviation margins
            double d_Marg = 0.05;
            double d_SpdMarg = d_Marg*(m_tas_max - m_tas_min);
            m_tas_min = m_tas_min + d_SpdMarg + m_wind_speed;
            m_tas_max = m_tas_max - d_SpdMarg + m_wind_speed;

            // Maximum lateral distance between the leader and any follower
            double d_FollLatDist = 0;
            double d_FollLonDist = 0;
            double t_LatDist;
            double t_LonDist;
            for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
            {
              t_LatDist = std::abs(m_args.formation_pos(1, uav_ind));
              if (t_LatDist > d_FollLatDist)
                d_FollLatDist = t_LatDist;
              t_LonDist = std::abs(m_args.formation_pos(0, uav_ind));
              if (t_LonDist > d_FollLonDist)
                d_FollLonDist = t_LonDist;
            }

            // Minimum formation turn radius due to aircraft minimum velocity
            double d_FormRMin = m_tas_min * d_FollLatDist/(d_tas_cmd_leader_wind - m_tas_min);
            // Minimum formation turn radius due to aircraft maximum velocity
            d_FormRMin = std::max(d_FormRMin, m_tas_max * d_FollLatDist/
                (m_tas_max - d_tas_cmd_leader_wind));
            // Minimum formation turn radius due to aircraft turning limits
            double t_MinRad;
            // Get bank limits from the team vehicles
            // ToDo - Update method to get bank limits from the vehicles themselves
            for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
            {
              // Maximum of the minimum feasible radius at maximum ground speed
              t_MinRad = (d_tas_cmd_leader_wind *
                  ((d_FormRMin + d_FollLatDist)/d_FormRMin)*(d_FormRMin + d_FollLatDist)/d_FormRMin)/
                      (m_g * std::tan(m_bank_lim_uav(uav_ind)));
              if (t_MinRad > d_FormRMin)
                d_FormRMin = t_MinRad;
            }

            // Minimum leader turn radius
            double d_RMin = d_FormRMin;
            // Maximum formation arc length - For maximum wind speed compensation
            double d_ArcMax = d_FollLonDist/d_FormRMin;
            double d_WindGain;
            if (d_ArcMax > M_PI)
              d_WindGain = 1;
            else
              d_WindGain = d_ArcMax/M_PI;
            // Maximum leader bank
            m_bank_lim = std::atan((m_tas_cmd_leader - d_WindGain* m_wind_speed)*(m_tas_cmd_leader - d_WindGain* m_wind_speed)
                /(d_RMin * m_g));
          }
          // Send leader maneuverability limits to the vehicles
          m_uav_formation.leader_bank_lim = m_bank_lim;
          dispatchAlias(&m_uav_formation);
        }
      };
    }
  }
}

DUNE_TASK
