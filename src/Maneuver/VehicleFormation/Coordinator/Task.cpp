//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define __STDC_LIMIT_MACROS
#include <stdint.h>

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
        // Main coordinator flag
        bool main;
        //! Simulation and control frequencies
        double ctrl_frequency;
        double sync_frequency;
        //! Control constraints
        double speed_max;
        double speed_min;
        double bank_lim;
        double alt_max;
        double alt_min;
        //! Formation configuration parameters
        std::vector<std::string> formation_systems;
        int formation_frame;
        Matrix formation_pos;
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
        double default_height;
        double default_alt;
        double default_speed;
        // Debug flag
        bool debug;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Task arguments.
        Arguments m_args;

        // Coordination flags
        bool m_standalone;
        bool m_param_update_first;
        bool m_plan_new;
        bool m_plan_params;
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
        double m_last_time_sync;
        //! Last time debug information was shown
        double m_last_time_debug;
        double m_last_time_trace;
        double m_last_time_spew;

        //! System state variables
        Matrix m_vehicle_state;
        std::vector<bool> m_vehicle_state_flag;
        std::vector<bool> m_vehicle_wind_flag;
        Matrix m_team_state;
        Matrix m_last_state_update;
        //! Environment variables
        Matrix m_wind;
        double m_wind_speed;
        Matrix m_wind_team;
        double m_g;

        //! Vehicle commands
        IMC::DesiredRoll m_bank_cmd;
        IMC::DesiredSpeed m_airspeed_cmd;
        IMC::DesiredZ m_altitude_cmd;
        double m_speed_cmd_leader;
        uint8_t m_speed_units_leader;
        double m_alt_cmd_leader;
        uint8_t m_alt_units_leader;
        //! Constraints
        double m_bank_lim;
        double m_speed_min;
        double m_speed_max;
        double m_alt_min;
        double m_alt_max;
        Matrix m_bank_lim_uav;
        Matrix m_speed_min_uav;
        Matrix m_speed_max_uav;
        Matrix m_alt_min_uav;
        Matrix m_alt_max_uav;

        //! Number of team vehicles
        unsigned int m_uav_n;
        Systems m_uav_id;
        Matrix m_formation_pos;

        //! Simulation process time step
        double m_timestep;
        double m_timestep_ctrl;
        double m_timestep_sync;

        //! Formation synchronization messages
        IMC::Formation m_uav_formation;
        //! Leader initial state
        IMC::LeaderState m_init_leader;
        // Formation control activation state
        bool m_formation_control_state;

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
          m_standalone(false),
          m_param_update_first(true),
          m_plan_new(false),
          m_plan_params(false),
          m_model(NULL),
          m_position(6, 1, 0.0),
          m_velocity(6, 1, 0.0),
          m_clock_diff(0.0),
          m_last_leader_update(Clock::get()),
          m_last_time_sync(std::min(-1.0, Clock::get())),
          m_last_time_debug(std::min(-1.0, Clock::get())),
          m_last_time_trace(std::min(-1.0, Clock::get())),
          m_last_time_spew(std::min(-1.0, Clock::get())),
          m_vehicle_state(12, 1, 0.0),
          m_team_state(12, 1, 0.0),
          m_last_state_update(1, 1, 0.0),
          m_wind(3, 1, 0.0),
          m_wind_speed(0.0),
          m_wind_team(3, 1, 0.0),
          m_g(Math::c_gravity),
          m_speed_cmd_leader(0.0),
          m_speed_units_leader(IMC::SUNITS_METERS_PS),
          m_alt_cmd_leader(0.0),
          m_alt_units_leader(IMC::Z_ALTITUDE),
          m_bank_lim(0.0),
          m_speed_min(0.0),
          m_speed_max(0.0),
          m_alt_min(0.0),
          m_alt_max(0.0),
          m_bank_lim_uav(1, 1, 0.0),
          m_speed_min_uav(1, 1, 0.0),
          m_speed_max_uav(1, 1, 0.0),
          m_alt_min_uav(1, 1, 0.0),
          m_alt_max_uav(1, 1, 0.0),
          m_uav_n(1),
          m_timestep(0.0),
          m_timestep_ctrl(0.0),
          m_timestep_sync(0.0),
          m_formation_control_state(false),
          m_debug(false),
          m_alias_id(UINT_MAX)
        {
          // Definition of configuration parameters.
//          paramActive(Tasks::Parameter::SCOPE_MANEUVER,
//                      Tasks::Parameter::VISIBILITY_DEVELOPER);

          param("Commands source", m_args.cmd_src)
          .defaultValue("")
          .description("List of <Command>:<System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass a specific command.");

//          param("Message source", m_args.msg_src)
//          .defaultValue("")
//          .description("List of <Message>:<System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass a specific message.");
//
          param("Source Alias", m_args.src_alias)
          .defaultValue("")
          .description("Emulated system id.");

          param("Main Coordinator", m_args.main)
          .defaultValue("false")
          .description("Flag indicating that the coordinator in this system is the main coordinator task.");

          param("Control Frequency", m_args.ctrl_frequency)
          .defaultValue("20.0")
          .units(Units::Hertz)
          .description("Frequency of simulated vehicles control execution.");

          param("Synchronization Frequency", m_args.sync_frequency)
          .defaultValue("0.1")
          .units(Units::Hertz)
          .description("Frequency of the virtual leader synchronization.");

          param("Maximum Airspeed", m_args.speed_max)
          .defaultValue("22.0")
          .units(Units::MeterPerSecond)
          .description("Aircraft maximum airspeed");

          param("Minimum Airspeed", m_args.speed_min)
          .defaultValue("18.0")
          .units(Units::MeterPerSecond)
          .description("Aircraft minimum airspeed");

          param("Maximum Altitude", m_args.alt_max)
          .defaultValue("600.0")
          .units(Units::Meter)
          .description("Maximum altitude constraint");

          param("Minimum Altitude", m_args.alt_min)
          .defaultValue("150.0")
          .units(Units::Meter)
          .description("Minimum altitude constraint");

          param("Bank Limit", m_args.bank_lim)
          .defaultValue("30.0")
          .units(Units::Degree)
          .description("Aircraft Bank Limit");
          m_args.bank_lim = DUNE::Math::Angles::radians(m_args.bank_lim);

          param("Vehicle List", m_args.formation_systems)
          .defaultValue("")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .description("System ID list of the formation vehicles.");

          param("Formation Reference Frame", m_args.formation_frame)
          .defaultValue("0")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .values("0, 1, 2")
          .description("Formation Reference Frame (0 - Earth; 1 - Path (no curvature); 2 - Path (with curvature)");

          param("Formation Positions", m_args.formation_pos)
          .defaultValue("0.0, 0.0, 0.0")
          .units(Units::Meter)
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .scope(Tasks::Parameter::SCOPE_MANEUVER)
          .description("Formation positions matrix");

          param("Simulation type", m_args.sim_type)
          .defaultValue("4DOF_bank")
          .values("3DOF, 4DOF_alt, 4DOF_bank, 5DOF")
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
          .units(Units::Degree)
          .description("Default reference latitude");

          param("Default Longitude", m_args.default_lon)
          .defaultValue("-8.964")
          .units(Units::Degree)
          .description("Default reference longitude");

          param("Default Ground Height", m_args.default_height)
          .defaultValue("-8.964")
          .units(Units::Meter)
          .description("Default reference longitude");

          param("Default Altitude", m_args.default_alt)
          .defaultValue("147.3")
          .units(Units::Meter)
          .description("Default reference WGS-84 geoid altitude");

          param("Default Speed", m_args.default_speed)
          .defaultValue("18.0")
          .units(Units::MeterPerSecond)
          .description("Initial state airspeed");

          param("Debug", m_args.debug)
          .defaultValue("false")
          .description("Controller in debug mode");

          // Message binding
          //bind<IMC::LeaderState>(this);
          bind<IMC::PlanControl>(this);
          bind<IMC::PlanDB>(this);
          //bind<IMC::Formation>(this);
          bind<IMC::EntityActivationState>(this);
          //bind<IMC::SetEntityParameters>(this);
//          bind<IMC::DesiredRoll>(this);
//          bind<IMC::DesiredSpeed>(this);
//          bind<IMC::DesiredZ>(this);
          bind<IMC::EstimatedStreamVelocity>(this);
          bind<IMC::EstimatedState>(this);
        }

        void
        onUpdateParameters(void)
        {
          spew("Starting the parameters update.");
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
          // Control frequency
          m_timestep_ctrl = 1/m_args.ctrl_frequency;
          // Virtual leader synchronization period
          m_timestep_sync = 1/m_args.sync_frequency;
          // Debug flag - for control performance monitoring
          m_debug = m_args.debug;
          if (m_param_update_first)
          {
            // Home reference latitude, longitude, and height
            m_llh_ref_pos[0] = Angles::radians(m_args.default_lat);
            m_llh_ref_pos[1] = Angles::radians(m_args.default_lon);
            m_llh_ref_pos[2] = m_args.default_alt;
            // Leader commanded true airspeed
            m_speed_cmd_leader = m_args.default_speed;
            m_airspeed_cmd.value = m_speed_cmd_leader;
            // Leader commanded altitude
            m_alt_cmd_leader = m_args.default_alt + m_args.alt_min;
            m_altitude_cmd.value = m_alt_cmd_leader;
          }

          //==========================================
          // Check the formation parameters
          //==========================================
          spew("onUpdateParameters - 1");
          Systems t_uav_id_last = m_uav_id;
          if (paramChanged(m_args.formation_systems))
          {
            inf("New Formation vehicles' list.");
            // Process formation vehicle list
            m_uav_id.clear();
            if (m_args.formation_systems.empty())
            {
              war("Formation vehicle list is empty!");
              m_uav_id.push_back(getSystemId());
              m_uav_n = 1;
            }
            else
            {
              m_uav_n = m_args.formation_systems.size();
              for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
              {
                debug("UAV %u: %s", uav_ind, m_args.formation_systems[uav_ind].c_str());
                m_uav_id.push_back(resolveSystemName(m_args.formation_systems[uav_ind]));
              }
            }
          }

          spew("onUpdateParameters - 2");
          if (paramChanged(m_args.formation_pos))
          {
            inf("New Formation vehicles' position matrix");

            // Check if the formation positions matrix has a suitable size
            if (m_args.formation_pos.size() == 0)
              throw RestartNeeded("Formation vehicle positions matrix is empty!", 10);
            if (m_args.formation_pos.rows()%3 != 0)
              throw RestartNeeded(static_cast<std::ostringstream*>(
                  &(std::ostringstream() <<
                      "Number of vehicle positions coordinates in the formation matrix (" <<
                      m_args.formation_pos.rows() << ") is not a multiple of 3!"))->str(), 10);

            m_formation_pos = m_args.formation_pos;
            // Check if the number of UAVs in the formation positions matrix
            // matches the number of listed vehicles
            unsigned int t_uav_n = m_formation_pos.rows()/3;
            if (m_uav_n != t_uav_n)
            {
              war("Number of the vehicles in the formation matrix (%u) and listed vehicles (%u) is different!",
                  t_uav_n, m_uav_n);
              m_uav_n = (m_uav_n < t_uav_n)?m_uav_n:t_uav_n;
            }
            // Resize the formation positions matrix:
            // 3 rows and as many columns as the number of UAVs
            m_formation_pos.resizeAndKeep(3, m_uav_n);
            for (unsigned int ind_uav = 1; ind_uav < m_uav_n; ind_uav++)
              for (unsigned int i = 0; i < 3; i++)
                m_formation_pos(i, ind_uav) = m_args.formation_pos(i+ind_uav*3);

            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ind_uav++)
              debug("UAV %u: [x=%1.1f, y=%1.1f, z=%1.1f]", ind_uav,
                   m_formation_pos(0, ind_uav), m_formation_pos(1, ind_uav), m_formation_pos(2, ind_uav));

            // Clean the formation position matrix parameter variable
            m_args.formation_pos.~Matrix();

            // Set flag for formation activation
            if (m_plan_new)
            {
              m_plan_new = false;
              m_plan_params = true;
            }
          }

          // Vehicle quantity considered in the formation
          debug("Number of UAVs -> %d", m_uav_n);

          //==========================================
          // Data resizing
          //==========================================
          // Check if the formation composition changed
          spew("onUpdateParameters - 3");
          bool b_formation_change = true;
          unsigned int t_uav_n = t_uav_id_last.size();
          if (!m_param_update_first)
          {
            if (t_uav_n == m_uav_n)
            {
              b_formation_change = false;
              for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ind_uav++)
                if (t_uav_id_last[ind_uav] != m_uav_id[ind_uav])
                  b_formation_change = true;
            }
            else
              b_formation_change = true;
          }
          if (b_formation_change)
          {
            // ToDo - Add data reallocation logic to keep the data from the remaining vehicles
            debug("Vehicles state and command vectors initialization");

            //! Save existing vehicles state
            Matrix t_vehicle_state = m_vehicle_state;
            Matrix t_wind_team = m_wind_team;
            std::vector<bool> t_vehicle_state_flag = m_vehicle_state_flag;
            std::vector<bool> t_vehicle_wind_flag = m_vehicle_wind_flag;
            Matrix t_last_state_update = m_last_state_update;

            // Keep the leader data
            m_last_state_update.resizeAndKeep(1, 1);

            spew("onUpdateParameters - 3.1");
            // Initialize the team vehicles' state matrix
            m_vehicle_state = DUNE::Math::Matrix(12, m_uav_n, 0.0);
            m_wind_team = DUNE::Math::Matrix(3, m_uav_n, 0.0);
            m_vehicle_state_flag.clear();
            m_vehicle_wind_flag.clear();
            for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
            {
              m_vehicle_state_flag.push_back(false);
              m_vehicle_wind_flag.push_back(false);
            }
            //! Start the team vehicles synchronization time
            m_last_state_update.resizeAndKeep(m_uav_n+1, 1);

            spew("onUpdateParameters - 3.2");
            // Data reallocation to keep the data from the remaining vehicles
            if (!m_param_update_first)
              for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
                for (unsigned int ind_uav2 = 0; ind_uav2 < t_uav_n; ++ind_uav2)
                  if (t_uav_id_last[ind_uav2] == m_uav_id[ind_uav])
                  {
                    m_vehicle_state.set(0, 11, ind_uav, ind_uav,
                                        t_vehicle_state.get(0, 11, ind_uav2, ind_uav2));
                    m_wind_team.set(0, 2, ind_uav, ind_uav,
                                    t_wind_team.get(0, 2, ind_uav2, ind_uav2));
                    m_vehicle_state_flag[ind_uav] = t_vehicle_state_flag[ind_uav2];
                    m_vehicle_wind_flag[ind_uav] = t_vehicle_wind_flag[ind_uav2];
                    m_last_state_update(ind_uav+1) = t_last_state_update(ind_uav2+1);
                    debug("Vehicle state data maintained for vehicle: %s",
                        resolveSystemId(m_uav_id[ind_uav]));
                  }

            // ToDo - Acquire operation limits from all the formation vehicles
            m_bank_lim_uav = Matrix(1, m_uav_n, Angles::radians(m_args.bank_lim));
            m_speed_min_uav = Matrix(1, m_uav_n, m_args.speed_min);
            m_speed_max_uav = Matrix(1, m_uav_n, m_args.speed_max);
            m_alt_min_uav = Matrix(1, m_uav_n, m_args.alt_min);
            m_alt_max_uav = Matrix(1, m_uav_n, m_args.alt_max);
          }

          //==========================================
          // Compute the leader limits from the formation configuration
          //==========================================
          updateLeaderLimits();

          //==========================================
          // Check if the coordinator is activating and continue the activation process
          //==========================================
          spew("onUpdateParameters - 4");
          if (m_plan_params && (isActivating() || isActive()))
              onRequestActivation();

          //==========================================
          // Initialize the leader vehicle model
          //==========================================
          spew("onUpdateParameters - 5");
          if (m_param_update_first)
          {
            // Model initialization
            debug("Formation leader model initialization");
            // - State  and control parameters initialization
            m_velocity(0) = m_speed_cmd_leader;
            m_model = new DUNE::Simulation::UAVSimulation(*this,
                m_position, m_velocity, m_args.c_bank, m_args.c_speed);
            // - Commands initialization
            m_model->command(0, m_speed_cmd_leader, -m_alt_cmd_leader);
          }
          else if (paramChanged(m_args.c_bank) || paramChanged(m_args.c_speed))
            m_model->setCtrl(m_args.c_bank, m_args.c_speed);
          // - Limits definition
          if (paramChanged(m_args.l_bank_rate))
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          if (paramChanged(m_args.l_accel_x))
            m_model->setAccelLim(m_args.l_accel_x);
          // - Simulation type
          if (paramChanged(m_args.sim_type))
            m_model->m_sim_type = m_args.sim_type;

          //==========================================
          // Set messages system source
          //==========================================
          spew("onUpdateParameters - 6");
          //! Set source system alias
          if (paramChanged(m_args.src_alias))
          {
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

          m_param_update_first = false;
          spew("Ending the parameters update.");
        }

        void
        onEntityResolution(void)
        {
          spew("Entity resolution.");

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
              unsigned int i_sys_n = systems.size();
              unsigned int i_ent_n = entities.size();
              // Resolve systems id.
              for (unsigned j = 0; j < i_sys_n; j++)
              {
                // Resolve entities id.
                for (unsigned k = 0; k < i_ent_n; k++)
                {
                  i_src = (j+1)*(k+1)-1;
                  // Resolve systems.
                  if (systems[j].empty())
                  {
                    m_filtered_sys[i_cmd][i_src_ini+i_src] = UINT_MAX;
                    debug("Commands filtering - Filter source system undefined");
                  }
                  else
                  {
                    try
                    {
                      m_filtered_sys[i_cmd][i_src_ini+i_src] = resolveSystemName(systems[j]);
                      debug("Commands filtering - System '%s' with ID: %d",
                          systems[j].c_str(), resolveSystemName(systems[j]));
                    }
                    catch (...)
                    {
                      war("Commands filtering - No system found with designation '%s'!", systems[j].c_str());
                      i_sys_n--;
                      j--;
                    }
                  }
                  // Resolve entities.
                  if (entities[j].empty())
                  {
                    m_filtered_ent[i_cmd][i_src_ini+i_src] = UINT_MAX;
                    debug("Commands filtering - Filter entity system undefined");
                  }
                  else
                  {
                    try
                    {
                      m_filtered_ent[i_cmd][i_src_ini+i_src] = resolveEntity(entities[k]);
                      debug("Commands filtering - Entity '%s' with ID: %d",
                          entities[k].c_str(), resolveEntity(entities[k]));
                    }
                    catch (...)
                    {
                      war("Commands filtering - No entity found with designation '%s'!", entities[k].c_str());
                      i_ent_n--;
                      k--;
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
          // Initialize entity state.
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        void
        onResourceRelease(void)
        {
        }

        void
        onRequestActivation(void)
        {
          // Activating the formation coordinator
          spew("Activating the formation coordinator");

          if (m_plan_params)
          {
            m_plan_params = false;
            if (m_args.main)
            {
              war("Requesting formation control activation");
              // UAVFormation message to activate the cooperating vehicles
              // ToDo - Set the hardcoded variables as configurable
              IMC::VehicleFormationParticipant formation_uav;
              m_uav_formation.type = IMC::Formation::FC_REQUEST;
              m_uav_formation.op = IMC::Formation::OP_START;
              m_uav_formation.formation_name = "AsasF";
              m_uav_formation.group_name = "AsasF";
              m_uav_formation.plan_id = m_plan_ctrl_last.plan_id;
              m_uav_formation.description = "Test formation configuration";
              m_uav_formation.reference_frame = m_args.formation_frame;
              m_uav_formation.participants.clear();
              for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
              {
                formation_uav.vid = m_uav_id[uav_ind];
                formation_uav.off_x = m_formation_pos(0, uav_ind);
                formation_uav.off_y = m_formation_pos(1, uav_ind);
                formation_uav.off_z = m_formation_pos(2, uav_ind);
                m_uav_formation.participants.push_back(formation_uav);
              }
              // ToDo - Check that the formation is activated with the bank limit corresponding to the correct speed command
              m_uav_formation.leader_bank_lim = m_bank_lim;
              m_uav_formation.leader_speed_min = m_speed_min;
              m_uav_formation.leader_speed_max = m_speed_max;
              m_uav_formation.leader_alt_min = m_alt_min;
              m_uav_formation.leader_alt_max = m_alt_max;
              m_uav_formation.pos_sim_err_lim = 20;
              m_uav_formation.pos_sim_err_wrn = 10;
              m_uav_formation.pos_sim_err_timeout = 10;
              m_uav_formation.converg_max = 5;
              m_uav_formation.converg_timeout = 10;
              m_uav_formation.comms_timeout = 5;
              m_uav_formation.turb_lim = 10;
              // ToDo - Implement the monitor for the position error, convergence, communications and turbolence

              dispatchAlias(&m_uav_formation);
            }

//            // ToDo - Check if there exist a formation controller task in the current system
//            if (!m_standalone)
//            {
//              // Requesting the formation controller activation in the current system
//              war("Requesting the formation controller activation.");
//
//              IMC::SetEntityParameters sep;
//              IMC::EntityParameter ep;
//              sep.name = "Formation Control";
//              sep.setDestination(getSystemId());
//
//              // Request formation controller activation
//              ep.name = "Active";
//              ep.value = "true";
//              sep.params.push_back(ep);
//
//              // Set formation controller parameters
//              // -  Formation reference frame
//              ep.name = "Formation Reference Frame";
//              ep.value = static_cast<std::ostringstream*>(
//                  &(std::ostringstream() << m_args.formation_frame))->str();
//              sep.params.push_back(ep);
//              // - Vehicle formation' positions
//              ep.name = "Formation Positions";
//              ep.value = static_cast<std::ostringstream*>(
//                  &(std::ostringstream() << m_formation_pos(0, 0)))->str();
//              debug("UAV %u - position %u: %1.2f", 0, 0, m_formation_pos(0, 0));
//              for (unsigned int i = 1; i < 3; i++)
//              {
//                debug("UAV %u - position %u: %1.2f", 0, i, m_formation_pos(i, 0));
//                ep.value.append(", ");
//                ep.value.append(static_cast<std::ostringstream*>(
//                    &(std::ostringstream() << m_formation_pos(i, 0)))->str());
//              }
//              for (unsigned int ind_uav = 1; ind_uav < m_uav_n; ind_uav++)
//                for (unsigned int i = 0; i < 3; i++)
//                {
//                  debug("UAV %u - position %u: %1.2f", ind_uav, i, m_formation_pos(i, ind_uav));
//                  ep.value.append(", ");
//                  ep.value.append(static_cast<std::ostringstream*>(
//                      &(std::ostringstream() << m_formation_pos(i, ind_uav)))->str());
//                }
//              debug("%s: %s", ep.name.c_str(), ep.value.c_str());
//              sep.params.push_back(ep);
//              // - Vehicle list
//              ep.name = "Vehicle List";
//              ep.value = m_args.formation_systems[0];
//              for (unsigned int ind_uav = 1; ind_uav < m_uav_n; ind_uav++)
//              {
//                ep.value.append(", ");
//                ep.value.append(m_args.formation_systems[ind_uav]);
//              }
//              sep.params.push_back(ep);
//
//              dispatchAlias(&sep);
//
//              // ToDo - Change the Path Control parameters to control the virtual leader
//              //          // Request path controller activation
//              //          sep.name = "Path Control Leader";
//              //          dispatchAlias(&sep);
//              //          sep.name = "Path Control Coordinator";
//              //          dispatchAlias(&sep);
//            }
          }
        }

        void
        onRequestDeactivation(void)
        {
          // Deactivate the formation controller in the cooperating vehicles
          if (m_args.main)
          {
            war("Requesting formation control deactivation");
            m_uav_formation.type = IMC::Formation::FC_REQUEST;
            m_uav_formation.op = IMC::Formation::OP_STOP;
            dispatchAlias(&m_uav_formation);
          }

//          // ToDo - Check if there exist a formation controller task in the current system
//          if (!m_standalone)
//          {
//            // Requesting the formation controller deactivation in the current system
//            war("Requesting the formation controller deactivation.");
//
//            IMC::SetEntityParameters sep;
//            IMC::EntityParameter ep;
//            sep.name = "Formation Control";
//            sep.setDestination(getSystemId());
//
//            // Request formation controller activation
//            ep.name = "Active";
//            ep.value = "false";
//            sep.params.push_back(ep);
//            dispatchAlias(&sep);
//
//            // ToDo - Change the Path Control parameters to control the real vehicle
//            //          // Request path controller activation
//            //          sep.name = "Path Control Leader";
//            //          dispatchAlias(&sep);
//            //          sep.name = "Path Control Coordinator";
//            //          dispatchAlias(&sep);
//          }

          // Deactivating the formation coordinator
          spew("Deactivating the formation coordinator");
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
          // ToDo - For final implementation, the activation should
          // depend from the assertion that all formation vehicles are in reach

          // Check if it is a plan execution request
          if (msg->type != IMC::PlanControl::PC_REQUEST)
          {
            trace("PlanControl rejected (it is not a plan execution request)");
            return;
          }

          // Check if the vehicle is the intended destination of the plan
          if (msg->getDestination() != getSystemId() &&
              msg->getDestination() != UINT16_MAX)
          {
            trace("PlanControl rejected (destination system: %s)",
                  resolveSystemId(msg->getDestination()));
            return;
          }

          // Check if the coordinator is itself the source of the plan
          if ((m_alias_id != UINT_MAX)?(msg->getSource() == m_alias_id):false)
          {
            trace("PlanControl rejected (source is the coordinator itself)");
            return;
          }

          if (msg->op == IMC::PlanControl::PC_START && m_args.main)
          {
            // Request plan information to check if it is a formation flight plan
            trace("PlanControl accepted - Requesting plan information.");
            m_plan_ctrl_last = *msg;
            //m_plan_new = true;

            // Request plan specification to confirm if it is a formation flight plan
            IMC::PlanDB plan_db;
            plan_db.plan_id = msg->plan_id;
            plan_db.type = IMC::PlanDB::DBT_REQUEST;
            plan_db.op = IMC::PlanDB::DBOP_GET;
            dispatchAlias(&plan_db);
          }
          // Deactivate the task if the PlanControl action is "Stop"
          else if (msg->op == IMC::PlanControl::PC_STOP)
          {
            debug("PlanControl accepted - Stop plan.");
            requestDeactivation();
          }
        }

        void
        consume(const IMC::PlanDB* msg)
        {
          // Only execute if this task is the main formation coordinator
          if (!m_args.main)
            return;

          //================================================
          // Check if the plan is a formation flight plan
          //================================================
          // Check if the system and entity are the destination of the PlanDB message
          if (msg->getDestination() != ((m_alias_id != UINT_MAX)?m_alias_id:getSystemId()) ||
              msg->getDestinationEntity() != getEntityId())
          {
            trace("PlanDB message rejected.");
            if (msg->getDestination() != ((m_alias_id != UINT_MAX)?m_alias_id:getSystemId()) &&
                msg->getDestination() < UINT16_MAX)
              trace("Different system destination: %s (%s).", resolveSystemId(msg->getDestination()),
                    resolveSystemId((m_alias_id != UINT_MAX)?m_alias_id:getSystemId()));
            if (msg->getDestinationEntity() != getEntityId() && msg->getDestinationEntity() < UINT8_MAX)
              trace("Different entity destination: %s (%s).",
                    resolveEntity(msg->getDestinationEntity()).c_str(),
                    resolveEntity(getEntityId()).c_str());
            if (msg->getDestination() < UINT16_MAX &&
                msg->getDestinationEntity() < UINT8_MAX)
              trace("PlanDB received from system '%s' and entity '%s', to system '%s' and entity '%s'.",
                    resolveSystemId(msg->getSource()), resolveEntity(msg->getSourceEntity()).c_str(),
                    resolveSystemId(msg->getDestination()), resolveEntity(msg->getDestinationEntity()).c_str());
            else if (msg->getDestination() < UINT16_MAX)
              trace("PlanDB received from system '%s' and entity '%s', to system '%s' and no specific entity.",
                    resolveSystemId(msg->getSource()), resolveEntity(msg->getSourceEntity()).c_str(),
                    resolveSystemId(msg->getDestination()));
            else if (msg->getDestinationEntity() < UINT8_MAX)
              trace("PlanDB received from system '%s' and entity '%s', to no specific system and entity '%s'.",
                    resolveSystemId(msg->getSource()), resolveEntity(msg->getSourceEntity()).c_str(),
                    resolveEntity(msg->getDestinationEntity()).c_str());
            else
              trace("PlanDB received from system '%s' and entity '%s', to no specific system or entity.",
                    resolveSystemId(msg->getSource()), resolveEntity(msg->getSourceEntity()).c_str());
            return;
          }
          spew("PlanDB message accepted - received from system '%s' and entity '%s', to system '%s' and entity '%s'.",
              resolveSystemId(msg->getSource()), resolveEntity(msg->getSourceEntity()).c_str(),
              resolveSystemId(msg->getDestination()), resolveEntity(msg->getDestinationEntity()).c_str());
          // Check if the plan is valid
          if (msg->type == IMC::PlanDB::DBT_FAILURE)
          {
            err("Plan not found in the database!");
            return;
          }
          // Deserialize PlanDB message and check if there are formation flight maneuvers
          // ToDo - Activate the formation flight controllers only for the specific maneuvers and not the entire plan
          bool is_formation_control = false;
          try
          {
            const IMC::SetEntityParameters* t_sep;
            const IMC::PlanSpecification* planspec = static_cast<const IMC::PlanSpecification*>(msg->arg.get());
            IMC::MessageList<IMC::PlanManeuver>::const_iterator it = planspec->maneuvers.begin();
            for (; it != planspec->maneuvers.end(); it++ )
            {
              IMC::MessageList<IMC::Message>::const_iterator it_sa = (*it)->start_actions.begin();
              for (; it_sa != (*it)->start_actions.end(); it_sa++ )
              {
                t_sep = static_cast<const IMC::SetEntityParameters*>(*it_sa);
                if (t_sep->name.compare("Autopilot") == 0)
                {
                  IMC::MessageList<IMC::EntityParameter>::const_iterator it_ep = t_sep->params.begin();
                  for (; it_ep != t_sep->params.end(); it_ep++ )
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
          {
            debug("Plan is not a formation control plan.");

            // Deactivate the formation control
            if (isActive())
              requestDeactivation();

            return;
          }
          war("Plan is a formation control plan.");

          if (m_plan_ctrl_last.op != IMC::PlanControl::PC_START)
            return;

          // Set the leader initial state with the global team state
          trace("Sending LeaderState to the vehicles.");
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
          //m_init_leader.setDestination(m_uav_id[ind_uav]);
          dispatchAlias(&m_init_leader);
          m_last_time_sync = Clock::get();

          //==========================================
          // Activate the formation control and plan
          //==========================================
          m_plan_new = true;
          if (!isActive())
            requestActivation();
        }

//        void
//        consume(const IMC::Formation* msg)
//        {
//          // Check if the message the system itself
//          if (((m_alias_id != UINT_MAX)?m_alias_id:getSystemId()) != msg->getSource())
//          {
//            trace("Formation message rejected! - Source is the coordinator itself.");
//            return;
//          }
//
//          if (msg->type == IMC::Formation::FC_REQUEST)
//          {
//            if (msg->op == IMC::Formation::OP_START)
//            {
//              // Update the controller configuration
//              m_uav_formation.reference_frame = msg->reference_frame;
//              unsigned int uav_ind = 0;
//              for (IMC::MessageList<IMC::VehicleFormationParticipant>::const_iterator it =
//                  msg->participants.begin(); it != msg->participants.end(); it++ )
//              {
//                m_uav_id[uav_ind] = (*it)->vid;
//                m_formation_pos(0, uav_ind) = (*it)->off_x;
//                m_formation_pos(1, uav_ind) = (*it)->off_y;
//                m_formation_pos(2, uav_ind) = (*it)->off_z;
//                uav_ind++;
//              }
//              m_speed_min = msg->leader_speed_min;
//              m_speed_max = msg->leader_speed_max;
//              m_bank_lim = msg->leader_bank_lim;
//
//              // Activate the formation controller in the current system
//              requestActivation();
//
//              // Send a PlanControl message to start the formation control plan
//              for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ind_uav++)
//                if (m_uav_id[ind_uav] == getSystemId())
//                {
//                  IMC::PlanControl plan;
//                  plan.type = IMC::PlanControl::PC_REQUEST;
//                  plan.op = IMC::PlanControl::PC_START;
//                  plan.plan_id = msg->plan_id;
//                  plan.arg.clear();
//                  plan.setSourceEntity(getEntityId());
//                  plan.setDestination(m_uav_id[ind_uav]);
//                  dispatchAlias(&plan);
//                  inf("Formation control plan execution requested!");
//                  break;
//                }
//            }
//            else if (msg->op == IMC::Formation::OP_STOP)
//            {
//              // Deactivate the formation controller in the current system
//              requestDeactivation();
//
//              // Send a PlanControl message to stop the formation control plan
//              for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ind_uav++)
//                if (m_uav_id[ind_uav] == getSystemId())
//                {
//                  IMC::PlanControl plan;
//                  plan.type = IMC::PlanControl::PC_REQUEST;
//                  plan.op = IMC::PlanControl::PC_STOP;
//                  plan.plan_id = msg->plan_id;
//                  plan.arg.clear();
//                  plan.setSourceEntity(getEntityId());
//                  plan.setDestination(m_uav_id[ind_uav]);
//                  dispatchAlias(&plan);
//                  inf("Formation control plan execution requested!");
//                  break;
//                }
//            }
//          }
//        }

        void
        consume(const IMC::EntityActivationState* msg)
        {
          if (msg->getSourceEntity() == resolveEntity("Formation Control"))
          {
            if (msg->state == IMC::EntityActivationState::EAS_ACTIVE)
            {
              // ToDo - Implement the rest of the logic to assert if all
              // the team vehicles are in formation control,
              // in particular if the coordinator is running as a stand-alone task
              if (isActivating())
                activate();
              trace("Entity '%s' in system '%s' is 'active'!", resolveEntity(msg->getSourceEntity()).c_str(),
                   resolveSystemId(msg->getSource()));
            }
            else if (msg->state == IMC::EntityActivationState::EAS_INACTIVE)
            {
              // ToDo - Implement the rest of the logic to assert if all
              // the team vehicles deactivated the formation control,
              // in particular if the coordinator is running as a stand-alone task
              if (isDeactivating())
                deactivate();
              trace("Entity '%s' in system '%s' is 'inactive'!", resolveEntity(msg->getSourceEntity()).c_str(),
                   resolveSystemId(msg->getSource()));
            }
            else
              trace("Entity '%s' in system '%s' is 'another'!", resolveEntity(msg->getSourceEntity()).c_str(),
                   resolveSystemId(msg->getSource()));
          }
        }

        void
        consume(const IMC::DesiredRoll* msg)
        {
          //! Get leader vehicle commanded roll
          if (!m_standalone || !isActive())
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
          if (!m_standalone || !isActive())
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

          m_speed_units_leader = msg->speed_units;
          if (m_speed_units_leader != IMC::SUNITS_METERS_PS)
          {
            war("Speed command rejected - units are not in m/s");
            return;
          }

          m_speed_cmd_leader = trimValue(msg->value, m_args.speed_min,  m_args.speed_max);
          m_model->commandAirspeed(m_speed_cmd_leader);

          updateLeaderLimits();
          // Send leader maneuverability limits to the vehicles
          // ToDo - Check that this message creates no conflict with the general formation activation
          m_uav_formation.leader_bank_lim = m_bank_lim;
          dispatchAlias(&m_uav_formation);

          // ========= Debug ===========
          spew("Speed command received (%1.2fm/s), assumed (%1.2fm/s)", msg->value, m_speed_cmd_leader);
          spew("DesiredSpeed received from system '%s' and entity '%s'.",
              resolveSystemId(msg->getSource()),
              resolveEntity(msg->getSourceEntity()).c_str());
        }

        void
        consume(const IMC::DesiredZ* msg)
        {
          //! Check if system is active
          if (!m_standalone || !isActive())
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

          m_alt_units_leader = msg->z_units;
          if (msg->z_units == IMC::Z_ALTITUDE)
            m_alt_cmd_leader = msg->value;
          else if (msg->z_units == IMC::Z_HEIGHT)
            m_alt_cmd_leader = msg->value-m_llh_ref_pos[2];
          else if (msg->z_units == IMC::Z_DEPTH)
            m_alt_cmd_leader = -msg->value;
          else
            m_alt_cmd_leader = m_args.alt_min;
          m_model->commandAlt(trimValue(m_alt_cmd_leader, m_args.alt_min, m_args.alt_max));

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
            {
              m_wind_team(0, uav_ind) = msg->x;
              m_wind_team(1, uav_ind) = msg->y;
              m_wind_team(2, uav_ind) = msg->z;
              m_vehicle_wind_flag[uav_ind] = true;
              // Average the received wind estimations over the team members
              double t_sum;
              unsigned int t_uav;
              for (unsigned int i = 0; i < 3; i++)
              {
                t_sum = 0.0;
                t_uav = 0;
                for (uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
                  if (m_vehicle_wind_flag[uav_ind])
                  {
                    t_sum += m_wind_team(i, uav_ind);
                    t_uav++;
                  }
                m_wind(i) = t_sum/t_uav;
                m_wind_speed = m_wind.norm_2();
              }
              break;
            }
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          // Get the virtual leader state
          // ToDo - Add a source entity verification
          if (!m_standalone && ((m_alias_id != UINT_MAX)?m_alias_id:getSystemId()) == msg->getSource() &&
              (isActivating() || isActive()))
          {
            // Check if the received message is new
            if (m_last_state_update(0) > msg->getTimeStamp())
            {
              war("Old EstimatedState received from vehicle %s. (Received: %1.2f < Current: %1.2f)",
                  resolveSystemId(msg->getSource()), msg->getTimeStamp(), m_last_state_update(0));
              return;
            }
            m_last_state_update(0) = msg->getTimeStamp();

            if (m_last_time_sync + m_timestep_sync <= Clock::get())
            {
              m_last_time_sync = Clock::get();
              // Set the leader initial state with the global team state
              trace("Sending LeaderState to the vehicles.");
              m_init_leader.op      = IMC::LeaderState::OP_SET;
              m_init_leader.lat     = msg->lat;
              m_init_leader.lon     = msg->lon;
              m_init_leader.height  = msg->height;
              m_init_leader.x       = msg->x;
              m_init_leader.y       = msg->y;
              m_init_leader.z       = msg->z;
              m_init_leader.vx      = msg->vx;
              m_init_leader.vy      = msg->vy;
              m_init_leader.vz      = msg->vz;
              m_init_leader.phi     = msg->phi;
              m_init_leader.theta   = msg->theta;
              m_init_leader.psi     = msg->psi;
              m_init_leader.p       = msg->p;
              m_init_leader.q       = msg->q;
              m_init_leader.r       = msg->r;
              m_init_leader.svx     = m_wind(0);
              m_init_leader.svy     = m_wind(1);
              m_init_leader.svz     = m_wind(2);
              //m_init_leader.setDestination(m_uav_id[ind_uav]);
              dispatchAlias(&m_init_leader);
            }
          }
          else
          {
            //==========================================================
            // Define a global team state (for leader initial state)
            //==========================================================
            // Select the team vehicle
            unsigned int uav_ind = 0;
            for (; uav_ind < m_uav_n; uav_ind++)
              if (m_uav_id[uav_ind] == msg->getSource())
              {
                // Check if the received message is new
                if (m_last_state_update(uav_ind+1) > msg->getTimeStamp())
                {
                  war("Old EstimatedState received from vehicle %s. (Received: %1.2f < Current: %1.2f)",
                      resolveSystemId(msg->getSource()), msg->getTimeStamp(), m_last_state_update(uav_ind+1));
                  return;
                }
                m_last_state_update(uav_ind+1) = msg->getTimeStamp();

                spew("EstimatedState received from vehicle %s", resolveSystemId(msg->getSource()));
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
                m_vehicle_state.set(0, 8, uav_ind, uav_ind, Matrix(vt_uav_state, 9, 1));
                m_vehicle_state_flag[uav_ind] = true;

                // Average the received state data over the team members
                double t_sum;
                unsigned int t_uav;
                for (unsigned int i = 0; i < 9; i++)
                {
                  t_sum = 0.0;
                  t_uav = 0;
                  for (uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
                    if (m_vehicle_state_flag[uav_ind])
                    {
                      t_sum += m_vehicle_state(i, uav_ind);
                      t_uav++;
                    }
                  m_team_state(i) = t_sum/t_uav;
                  // ToDo - Correct the average for heading angles
                }
                break;
              }
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
              spew("Formation coordination task is not active (%s).",
                   (m_alias_id != UINT_MAX)?m_args.src_alias.c_str():this->getSystemName());
              m_last_time_trace = d_time;

              IMC::QueryEntityActivationState qeas;
              qeas.setDestinationEntity(resolveEntity("Formation Control"));
              dispatchAlias(&qeas);
            }
            return;
          }

          if (d_time >= m_last_time_trace + 1.0)
          {
            spew("Formation coordination task is active (%s).",
                 (m_alias_id != UINT_MAX)?m_args.src_alias.c_str():this->getSystemName());
            m_last_time_trace = d_time;
          }

          //! Update leader state for standard time periods
          if (m_standalone)
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
          m_vehicle_state.set(0, 11, 0, 0, Matrix(t_leader, 12, 1));
          m_model->setPosition(m_vehicle_state.get(0, 2, 0, 0).vertCat(m_vehicle_state.get(6, 8, 0, 0)));
          m_model->setVelocity(m_vehicle_state.get(3, 5, 0, 0).vertCat(m_vehicle_state.get(9, 11, 0, 0)));
          //! Update formation leader wind vector
          m_model->m_wind(0) = leader_state->svx;
          m_model->m_wind(1) = leader_state->svy;
          m_last_leader_update = leader_state->getTimeStamp();

          trace("---------------------------");
          trace("Leader latitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lat));
          trace("Leader longitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lon));
          trace("Leader altitude: %1.4fm", m_init_leader.height);
          trace("Leader x position: %1.4f", m_vehicle_state(0, 0));
          trace("Leader y position: %1.4f", m_vehicle_state(1, 0));
          trace("Leader z position: %1.4f", m_vehicle_state(2, 0));
          trace("Leader roll angle: %1.4f", m_vehicle_state(6, 0));
          trace("Leader pitch angle: %1.4f", m_vehicle_state(7, 0));
          trace("Leader yaw angle: %1.4f", m_vehicle_state(8, 0));
          trace("Leader x speed: %1.4f", m_vehicle_state(3, 0));
          trace("Leader y speed: %1.4f", m_vehicle_state(4, 0));
          trace("Leader z speed: %1.4f", m_vehicle_state(5, 0));
          trace("Leader roll rate: %1.4f", m_vehicle_state(9, 0));
          trace("Leader pitch rate: %1.4f", m_vehicle_state(10, 0));
          trace("Leader yaw rate: %1.4f", m_vehicle_state(11, 0));
          trace("Leader x wind speed: %1.4f", m_model->m_wind(0));
          trace("Leader y wind speed: %1.4f", m_model->m_wind(1));
          trace("Leader z wind speed: %1.4f", m_model->m_wind(2));
          trace("---------------------------");
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
            m_last_leader_update += m_timestep;
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
          spew("Leader limits update - Starting.");
          //================================
          // Leader maneuverability constraints
          //================================
          // Speed and altitude constraints
          // ToDo - Update method to get speed and altitude limits from the vehicles themselves
          m_speed_min = m_speed_min_uav(0);
          m_speed_max = m_speed_max_uav(0);
          m_alt_min = m_alt_min_uav(0)+m_formation_pos(2, 0);
          m_alt_max = m_alt_max_uav(0)+m_formation_pos(2, 0);
          for (unsigned int uav_ind = 1; uav_ind < m_uav_n; uav_ind++)
          {
            if (m_speed_min_uav(uav_ind) > m_speed_min)
              m_speed_min = m_speed_min_uav(uav_ind);
            if (m_speed_max_uav(uav_ind) < m_speed_max)
              m_speed_max = m_speed_max_uav(uav_ind);
            if (m_alt_min_uav(uav_ind)+m_formation_pos(2, uav_ind) > m_alt_min)
              m_alt_min = m_alt_min_uav(uav_ind)+m_formation_pos(2, uav_ind);
            if (m_alt_max_uav(uav_ind)+m_formation_pos(2, uav_ind) < m_alt_max)
              m_alt_max = m_alt_max_uav(uav_ind)+m_formation_pos(2, uav_ind);
          }

          if (m_args.formation_frame == IMC::Formation::OP_EARTH_FIXED)
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
            double d_speed_cmd_leader_wind = m_speed_cmd_leader +  m_wind_speed;

            // Safety/deviation margins
            double d_Marg = 0.05;
            double d_SpdMarg = d_Marg*(m_speed_max - m_speed_min);
            m_speed_min = m_speed_min + d_SpdMarg + m_wind_speed;
            m_speed_max = m_speed_max - d_SpdMarg + m_wind_speed;

            // Maximum lateral distance between the leader and any follower
            double d_FollLatDist = 0;
            double d_FollLonDist = 0;
            double t_LatDist;
            double t_LonDist;
            for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
            {
              t_LatDist = std::abs(m_formation_pos(1, uav_ind));
              if (t_LatDist > d_FollLatDist)
                d_FollLatDist = t_LatDist;
              t_LonDist = std::abs(m_formation_pos(0, uav_ind));
              if (t_LonDist > d_FollLonDist)
                d_FollLonDist = t_LonDist;
            }

            // Minimum formation turn radius due to aircraft minimum velocity
            double d_FormRMin = m_speed_min * d_FollLatDist/(d_speed_cmd_leader_wind - m_speed_min);
            // Minimum formation turn radius due to aircraft maximum velocity
            d_FormRMin = std::max(d_FormRMin, m_speed_max * d_FollLatDist/
                (m_speed_max - d_speed_cmd_leader_wind));
            // Minimum formation turn radius due to aircraft turning limits
            double t_MinRad;
            // Get bank limits from the team vehicles
            // ToDo - Update method to get bank limits from the vehicles themselves
            for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
            {
              // Maximum of the minimum feasible radius at maximum ground speed
              t_MinRad = (d_speed_cmd_leader_wind *
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
            m_bank_lim = std::atan((m_speed_cmd_leader - d_WindGain* m_wind_speed)*(m_speed_cmd_leader - d_WindGain* m_wind_speed)
                /(d_RMin * m_g));
          }
          spew("Leader limits update - End.");
        }
      };
    }
  }
}

DUNE_TASK
