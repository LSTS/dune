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

#define vel_lim 0.5

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace FormCollAvoid
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
        //! Simulation and control frequencies
        double sim_frequency;
        double ctrl_frequency;
        //! Controller parameters
        double k_longitudinal;
        double k_lateral;
        double k_boundary;
        double k_leader;
        double k_deconfliction;
        double safe_dist;
        double deconfliction_offset;
        double acc_safety_marg;
        //! Control constraints
        double tas_max;
        double tas_min;
        double bank_lim;
        double alt_max;
        double alt_min;
        //! Formation configuration parameters
        unsigned int formation_frame;
        unsigned int uav_n;
        Matrix formation_pos;
        std::vector<std::string> formation_systems;
        //! Environmental parameters
        double flow_accel_max;
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
        double default_alt;
        double default_speed;
        // Debug flag
        bool debug;
      };

      struct RelState
      {
        //! Identifier of the vehicle whose relative state is being reported.
        std::string s_id;
        //! Distance between vehicles.
        double dist;
        //! Relative position error norm.
        double err;
        //! Weight in the computation of the desired acceleration.
        double ctrl_imp;
        //! Inter-vehicle direction vector.
        double rel_dir_x;
        double rel_dir_y;
        double rel_dir_z;
        //! Relative position error in the fixed reference frame.
        double err_x;
        double err_y;
        double err_z;
        //! Relative position error in the inter-vehicle reference frame.
        double rf_err_x;
        double rf_err_y;
        double rf_err_z;
        //! Relative velocity error in the inter-vehicle reference frame.
        double rf_err_vx;
        double rf_err_vy;
        double rf_err_vz;
        //! Deviation from convergence (sliding surface value).
        double ss_x;
        double ss_y;
        double ss_z;
        //! Relative virtual error.
        //! (Component of the vehicle desired acceleration)
        double virt_err_x;
        double virt_err_y;
        double virt_err_z;

        // Default initialization
        RelState()
        {
          s_id = "";
          dist = 0;
          err = 0;
          ctrl_imp = 0;
          rel_dir_x = 0;
          rel_dir_y = 0;
          rel_dir_z = 0;
          err_x = 0;
          err_y = 0;
          err_z = 0;
          rf_err_x = 0;
          rf_err_y = 0;
          rf_err_z = 0;
          rf_err_vx = 0;
          rf_err_vy = 0;
          rf_err_vz = 0;
          ss_x = 0;
          ss_y = 0;
          ss_z = 0;
          virt_err_x = 0;
          virt_err_y = 0;
          virt_err_z = 0;
        }
      };

      class FormMonitor
      {
      public:
        //! Commanded acceleration computed by the formation controller.
        //! (Constrained by the vehicle operational limits)
        double ax_cmd;
        double ay_cmd;
        double az_cmd;
        //! Desired acceleration computed by the formation controller.
        double ax_des;
        double ay_des;
        double az_des;
        //! Formation combined virtual error.
        //! (Component of the vehicle desired acceleration)
        double virt_err_x;
        double virt_err_y;
        double virt_err_z;
        //! Formation combined sliding surface feedback.
        //! (Component of the vehicle desired acceleration)
        double surf_fdbk_x;
        double surf_fdbk_y;
        double surf_fdbk_z;
        //! Dynamics uncertainty compensation.
        //! (Component of the vehicle desired acceleration)
        double surf_unkn_x;
        double surf_unkn_y;
        double surf_unkn_z;
        //! Combined deviation from convergence.
        //! (Total sliding surface value)
        double ss_x;
        double ss_y;
        double ss_z;
        //! Inter-vehicle state data
        std::vector<RelState*> rel_state;

        FormMonitor()
        {
          ax_cmd = 0;
          ay_cmd = 0;
          az_cmd = 0;
          ax_des = 0;
          ay_des = 0;
          az_des = 0;
          virt_err_x = 0;
          virt_err_y = 0;
          virt_err_z = 0;
          surf_fdbk_x = 0;
          surf_fdbk_y = 0;
          surf_fdbk_z = 0;
          surf_unkn_x = 0;
          surf_unkn_y = 0;
          surf_unkn_z = 0;
          ss_x = 0;
          ss_y = 0;
          ss_z = 0;
        }
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Task arguments.
        Arguments m_args;

        //! Simulated vehicles' models
        std::vector<UAVSimulation*> m_models;
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
        Matrix m_last_state_estim;
        Matrix m_last_simctrl_update;
        //! Last time debug information was shown
        double m_last_time_debug;
        double m_last_time_trace;
        double m_last_time_spew;

        //! System state variables
        Matrix m_uav_state;
        Matrix m_uav_accel;
        double m_airspeed;

        //! Environment variables
        Matrix m_wind;
        Math::MovingAverage<fp64_t>* m_wind_avg_x;
        Math::MovingAverage<fp64_t>* m_wind_avg_y;
        Math::MovingAverage<fp64_t>* m_wind_avg_z;
        double m_g;

        //! System command variables
        Matrix m_uav_ctrl;

        //! Vehicle commands
        IMC::DesiredRoll m_bank_cmd;
        IMC::DesiredSpeed m_airspeed_cmd;
        IMC::DesiredZ m_altitude_cmd;
        //! Leader commanded true airspeed
        double m_tas_cmd_leader;
        //! Leader commanded altitude
        double m_alt_cmd_leader;
        //! Command limits
        double m_bank_lim;

        //! Controller parameters
        IMC::FormationControlParams m_formation_ctrl_params;
        bool m_param_init;
        double m_k_longitudinal;
        double m_k_lateral;
        double m_k_boundary;
        double m_k_leader;
        double m_k_deconfliction;
        double m_flow_accel_max;
        double m_safe_dist;
        double m_deconfliction_offset;
        double m_acc_safety_marg;
        double m_accel_lim_x;

        //! Controller evaluation data
        IMC::FormationEvaluation m_formation_eval;
        double m_dist_min_abs;
        double m_dist_min_mean;
        double m_err_mean;
        double m_mean_time;
        double m_mean_time_start;
        bool m_mean_first;

        //! Number of team vehicles
        unsigned int m_uav_n;
        unsigned int m_uav_ind;
        Matrix m_formation_pos;
        Systems m_uav_id;

        //! Process logic control variables
        bool m_ctrl_active;
        bool m_team_plan_init;
        bool m_team_leader_init;
        bool m_team_state_init;
        bool m_valid_airspeed;

        //! Simulation process frequency
        double m_frequency;
        double m_timestep_sim;
        double m_timestep_ctrl;

        //! Leader initial state
        IMC::LeaderState m_init_leader;

        // Debug variables
        bool m_debug;
        FormMonitor* m_form_monitor;
        //std::vector<RelState*> m_rel_state;

        //! List of systems allowed to define a command.
        std::map<uint32_t, Systems> m_filtered_sys;
        //! List of entities allowed to define a command.
        std::map<uint32_t, Entities> m_filtered_ent;
        // System alias id
        uint32_t m_alias_id;
        // Leader system id
        uint32_t m_leader_id;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          //m_models(NULL),
          m_model(NULL),
          m_position(6, 1, 0.0),
          m_velocity(6, 1, 0.0),
          m_clock_diff(0.0),
          m_last_time_debug(std::min(-1.0, Clock::get())),
          m_last_time_trace(std::min(-1.0, Clock::get())),
          m_last_time_spew(std::min(-1.0, Clock::get())),
          m_uav_state(12, 1, 0.0),
          m_uav_accel(3, 1, 0.0),
          m_airspeed(0.0),
          m_wind(3, 1, 0.0),
          m_wind_avg_x(new Math::MovingAverage<fp64_t>(300)),
          m_wind_avg_y(new Math::MovingAverage<fp64_t>(300)),
          m_wind_avg_z(new Math::MovingAverage<fp64_t>(300)),
          m_g(Math::c_gravity),
          m_tas_cmd_leader(0.0),
          m_alt_cmd_leader(0.0),
          m_bank_lim(0.0),
          m_param_init(false),
          m_k_longitudinal(0.0),
          m_k_lateral(0.0),
          m_k_boundary(0.0),
          m_k_leader(0.0),
          m_k_deconfliction(0.0),
          m_flow_accel_max(0.0),
          m_safe_dist(0.0),
          m_deconfliction_offset(0.0),
          m_acc_safety_marg(0.0),
          m_accel_lim_x(0.0),
          m_dist_min_abs(0.0),
          m_dist_min_mean(0.0),
          m_err_mean(0.0),
          m_mean_time(0.0),
          m_mean_time_start(0.0),
          m_mean_first(true),
          m_uav_n(1),
          m_uav_ind(0),
          m_formation_pos(3, 1, 0.0),
          m_ctrl_active(false),
          m_team_plan_init(false),
          m_team_leader_init(false),
          m_team_state_init(false),
          m_valid_airspeed(false),
          m_frequency(0.0),
          m_timestep_sim(0.0),
          m_timestep_ctrl(0.0),
          m_debug(false),
          m_form_monitor(NULL),
          m_alias_id(UINT_MAX),
          m_leader_id(UINT_MAX)
        {
          // Definition of configuration parameters.
          paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                      Tasks::Parameter::VISIBILITY_USER, false);

          param("Commands source", m_args.cmd_src)
          .defaultValue("")
          .description("List of <Command>:<System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass a specific command.");

          param("Source Alias", m_args.src_alias)
          .defaultValue("")
          .description("Emulated system id.");

          param("Leader Name", m_args.leader_alias)
          .defaultValue("form-leader-01")
          .description("Leader system name.");

          param("Simulation Frequency", m_args.sim_frequency)
          .defaultValue("0.0")
          .description("Vehicles motion simulation frequency.");

          param("Control Frequency", m_args.ctrl_frequency)
          .defaultValue("20.0")
          .description("Frequency of simulated vehicles control execution.");

          param("Formation Longitudinal Gain", m_args.k_longitudinal)
          .defaultValue("0.5")
          .description("Trajectory gain over the vehicle longitudinal direction");

          param("Formation Lateral Gain", m_args.k_lateral)
          .defaultValue("0.8")
          .description("Trajectory gain over the vehicle lateral direction");

          param("Formation Boundary Layer", m_args.k_boundary)
          .defaultValue("0.6")
          .description("Control sliding surface boundary layer thickness");

          param("Flow Switching Gain", m_args.flow_accel_max)
          .defaultValue("0.0")
          .units(Units::MeterPerSquareSecond)
          .description("Maximum fluid flow acceleration at aircraft location. Switching gain for the worst case scenario.");

          param("Formation Leader Gain", m_args.k_leader)
          .defaultValue("2.5")
          .description("Leader control importance gain (relative to the sum of every other formation vehicle)");

          param("Formation Deconfliction Gain", m_args.k_deconfliction)
          .defaultValue("5.0")
          .description("Individual vehicle importance gain (relative to the leader)");

          param("Safety Distance", m_args.safe_dist)
          .defaultValue("12.0")
          .description("Aircraft Safety Distance");

          param("Deconfliction Offset", m_args.deconfliction_offset)
          .defaultValue("7.0")
          .description("Aircraft Deconfliction Distance Offset");

          param("Acceleration Safety Margin", m_args.acc_safety_marg)
          .defaultValue("0.3")
          .description("Acceleration safety margin");

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

          param("Formation Reference Frame", m_args.formation_frame)
          .defaultValue("0")
          .description("Formation Reference Frame (0 - Earth; 1 - Path (no curvature); 2 - Path (with curvature)");

          param("Formation Positions", m_args.formation_pos)
          .defaultValue("")
          .description("Formation positions matrix");

          param("UAV Number", m_args.uav_n)
          .defaultValue("1")
          .description("UAV Number");

          param("Vehicle List", m_args.formation_systems)
          .defaultValue("")
          .description("System ID list of the formation vehicles.");

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
          .description("Vehicle longitudinal acceleration limit");

          param("Vertical Slope Limit", m_args.l_vert_slope)
          .defaultValue("0.0")
          .units(Units::None)
          .description("Vertical slope limit to simulate altitude dynamics");

          param("Default Altitude", m_args.default_alt)
          .defaultValue("147.3")
          .description("Initial state WGS-84 geoid altitude");

          param("Default Speed", m_args.default_speed)
          .defaultValue("18.0")
          .description("Initial state airspeed");

          param("Debug", m_args.debug)
          .defaultValue("false")
          .description("Controller in debug mode");

          // Message binding
          //bind<IMC::LeaderState>(this);
          bind<IMC::PlanControl>(this);
          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::EstimatedStreamVelocity>(this);
          bind<IMC::Acceleration>(this);
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
          // Task update frequency
          m_frequency = this->getFrequency();
          // Simulation frequency
          if (m_args.sim_frequency == 0.0)
            m_timestep_sim = 1/m_frequency;
          else
            m_timestep_sim = 1/m_args.sim_frequency;
          // Control frequency
          m_timestep_ctrl = 1/m_args.ctrl_frequency;


          //==========================================
          // Check the formation parameters
          //==========================================
          // Check if the formation positions matrix has a suitable size
          if (m_args.formation_pos.size() == 0)
          {
            stop();
            throw std::runtime_error("Restarting - Formation vehicles' positions matrix is empty!");
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
          {
            m_uav_id.push_back(resolveSystemName(m_args.formation_systems[uav_ind]));
            // Set the current UAV index according to the group definition
            if (m_uav_id[uav_ind] == this->getSystemId())
              m_uav_ind = uav_ind;
          }
          debug("Current UAV -> %d", m_uav_ind);

          //==========================================
          // Set controller gains
          //==========================================
          debug("Controller parameters definition.");
          double t_k_longitudinal = m_k_longitudinal;
          double t_k_lateral = m_k_lateral;
          double t_k_boundary = m_k_boundary;
          double t_k_leader = m_k_leader;
          double t_k_deconfliction = m_k_deconfliction;
          double t_flow_accel_max = m_flow_accel_max;
          double t_safe_dist = m_safe_dist;
          double t_deconfliction_offset = m_deconfliction_offset;
          double t_acc_safety_marg = m_acc_safety_marg;
          double t_accel_lim_x = m_accel_lim_x;
          m_k_longitudinal = m_args.k_longitudinal;
          m_k_lateral = m_args.k_lateral;
          m_k_boundary = m_args.k_boundary;
          m_k_leader = m_args.k_leader;
          m_k_deconfliction = m_args.k_deconfliction;
          m_flow_accel_max = m_args.flow_accel_max;
          m_safe_dist = m_args.safe_dist;
          m_deconfliction_offset = m_args.deconfliction_offset;
          m_acc_safety_marg = m_args.acc_safety_marg;
          m_accel_lim_x = m_args.l_accel_x;
          // Output the controller parameter, if changed, and the controller evaluation data
          if (!m_param_init && isActive())
            debug("Controller parameters initialization");
          if (t_k_longitudinal != m_k_longitudinal ||
              t_k_lateral != m_k_lateral ||
              t_k_boundary != m_k_boundary ||
              t_k_leader != m_k_leader ||
              t_k_deconfliction != m_k_deconfliction ||
              t_flow_accel_max != m_flow_accel_max ||
              t_safe_dist != m_safe_dist ||
              t_deconfliction_offset != m_deconfliction_offset ||
              t_acc_safety_marg != m_acc_safety_marg ||
              t_accel_lim_x != m_accel_lim_x ||
              (!m_param_init && isActive()))
          {
            // Controller parameters
            m_formation_ctrl_params.action = IMC::FormationControlParams::OP_REP;
            m_formation_ctrl_params.lon_gain = m_k_longitudinal;
            m_formation_ctrl_params.lat_gain = m_k_lateral;
            m_formation_ctrl_params.bond_thick = m_k_boundary;
            m_formation_ctrl_params.lead_gain = m_k_leader;
            m_formation_ctrl_params.deconfl_gain = m_k_deconfliction;
            dispatchAlias(&m_formation_ctrl_params);
            if (isActive())
              m_param_init = true;

            // Controller evaluation data
            if (!m_mean_first)
            {
              // Output
              m_formation_eval.dist_min_abs = m_dist_min_abs;
              m_formation_eval.dist_min_mean = m_dist_min_mean;
              m_formation_eval.err_mean = m_err_mean;
              dispatchAlias(&m_formation_eval);
              // Reset
              m_dist_min_abs = 0.0;
              m_dist_min_mean = 0.0;
              m_err_mean = 0.0;
              m_mean_time = 0.0;
              m_mean_first = true;
            }
          }

          //==========================================
          // Reset the leader vehicle model parameters
          //==========================================
          if (m_model != NULL)
          {
            debug("Formation leader model reset");
            // - State  and control parameters definition
            m_model->setCtrl(m_args.c_bank, m_args.c_speed);
            // - Limits definition
            if (m_args.l_bank_rate > 0)
              m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
            if (m_accel_lim_x > 0)
              m_model->setAccelLim(m_accel_lim_x);
            // - Simulation type
            m_model->m_sim_type = m_args.sim_type;
          }

          //==========================================
          // Simulation model initialization
          //==========================================
          // Check if the formation composition changed
          // Reinitialize the simulation models if so
          if (tmp_uav_id != m_uav_id)
          {
            // ToDo - Add data reallocation logic to keep the data from the remaining vehicles
            //! Initialize the team vehicles' models
            debug("Vehicles state and command vectors initialization");
            m_team_state_init = false;
            //! Initialize vehicles state
            m_uav_state = DUNE::Math::Matrix(12, m_uav_n+1, 0.0);
            //! Initialize vehicles commands
            m_uav_ctrl = DUNE::Math::Matrix(3, m_uav_n, 0.0);
            //! Start the team vehicles simulation and control time
            m_last_state_estim = Matrix(m_uav_n + 1, 1, Clock::get());
            m_last_simctrl_update = Matrix(m_uav_n, 1, Clock::get());
            //! Initialize the simulated vehicles models
            debug("Simulated vehicles models initialization");
            UAVSimulation* model;
            m_models.clear();
            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
            {
              //! - State  and control parameters initialization
              model = new DUNE::Simulation::UAVSimulation(
                  m_formation_pos.get(0, 2, ind_uav, ind_uav).vertCat(m_position.get(3, 5, 0, 0)),
                  m_velocity, m_args.c_bank, m_args.c_speed);
              //! - Simulation type
              model->m_sim_type = m_args.sim_type;
              //! - Commands initialization
              model->command(0, m_tas_cmd_leader, -m_alt_cmd_leader);
              //! - Limits definition
              if (m_args.l_bank_rate > 0)
                model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
              if (m_args.l_accel_x > 0)
                model->setAccelLim(m_args.l_accel_x);
              //! Add model to the models vector
              m_models.push_back(model);
              debug("Simulated vehicle model initialized for vehicle %d.", ind_uav);
            }
          }

          //==========================================
          // Set messages system source:
          // Main system alias identification and leader identification
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
              war("Source system alias - No system found with designation '%s'.",
                  m_args.src_alias.c_str());
              m_alias_id = UINT_MAX;
            }
          }
          else
            m_alias_id = UINT_MAX;

          //! Set leader system id
          if (!m_args.leader_alias.empty())
          {
            // Resolve systems.
            try
            {
              m_leader_id = resolveSystemName(m_args.leader_alias);
            }
            catch (...)
            {
              err("Leader system name - No system found with designation '%s'.", m_args.leader_alias.c_str());
            }
          }
          else
            err("Leader system name - No system found with designation '%s'.", m_args.leader_alias.c_str());

          //==========================================
          // Debug control variables
          //==========================================
          // Debug flag - for control performance monitoring
          m_debug = m_args.debug;
          //! Initialize the formation monitor message
          if (m_debug)
          {
            if (m_form_monitor == NULL)
              m_form_monitor = new FormMonitor;
            RelState* rel_state;
            m_form_monitor->rel_state.clear();
            for (unsigned int ind_uav = 0; ind_uav <= m_uav_n; ++ind_uav)
            {
              rel_state = new RelState();
              m_form_monitor->rel_state.push_back(rel_state);
            }
          }
        }

        void
        onEntityResolution(void)
        {
          //==========================================
          // General parameters initialization
          //==========================================
          // Home reference latitude, longitude, and height
          m_llh_ref_pos[0] = 0.0;
          m_llh_ref_pos[1] = 0.0;
          m_llh_ref_pos[2] = 0.0;
          // Airspeed value initialization
          m_airspeed = m_args.default_speed;
          // Leader commanded true airspeed
          m_tas_cmd_leader = m_airspeed;
          m_airspeed_cmd.value = m_tas_cmd_leader;
          // Leader commanded altitude
          m_alt_cmd_leader = m_args.default_alt + m_args.alt_min;
          m_altitude_cmd.value = m_alt_cmd_leader;

          //==========================================
          // Initialize the leader vehicle model
          //==========================================
          // Model initialization
          debug("Formation leader model initialization");
          m_team_leader_init = false;
          // - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(m_position, m_velocity, m_args.c_bank, m_args.c_speed);
          // - Commands initialization
          m_model->command(0, m_tas_cmd_leader, -m_alt_cmd_leader);

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
            else
              i_cmd = 4;

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
                      debug("Commands filtering - No system found with designation '%s'.", parts[1].c_str());
                      m_filtered_sys[i_cmd][i_src_ini+i_src] = UINT_MAX;
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
                      debug("Commands filtering - No entity found with designation '%s'.", parts[2].c_str());
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
//          for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
//            Memory::clear(m_form_monitor->rel_state[ind_uav]);
//          Memory::clear(m_form_monitor);
        }

        void
        consume(const IMC::LeaderState* msg)
        {
          // Set leader state
          if (msg->op == IMC::LeaderState::OP_SET)
          {
            // Check if the system is the intended destination of the state
            if (msg->getDestination() != ((m_alias_id != UINT_MAX) ? m_alias_id : getSystemId()))
            {
              trace("LeaderState message rejected!");
              trace("Destination system: %s.", resolveSystemId(msg->getDestination()));
              return;
            }

            debug("LeaderState received!");
            setLeaderState(msg);

            /*
              // Save message to cache.
              IMC::CacheControl cop;
              cop.op = IMC::CacheControl::COP_STORE;
              cop.message.set(*msg);
              dispatchAlias(&cop);
             */
          }
        }

        void
        consume(const IMC::PlanControl* msg)
        {
          //! Check if it is a plan execution request
          if (msg->type != IMC::PlanControl::PC_REQUEST)
            return;

          //! Check if the vehicle is the intended destination of the plan
          if (msg->getDestination() != getSystemId())
          {
            trace("PlanControl message rejected!");
            trace("Destination system: %s.", resolveSystemId(msg->getDestination()));
            return;
          }

          //! Check if the vehicle is itself the source of the plan
          // ToDo - For final implementation this blocking should be removed
          if (msg->getSource() == getSystemId())
          {
            trace("PlanControl message rejected!");
            trace("Source is the system itself.");
            return;
          }

          /*
            //! Check if the PlanControl messages is for formation flight
            if (msg->plan_id.compare(m_args.plan) == 0)
            {
              trace("PlanControl message rejected!");
              trace("Plan ID (%s) does not match the parameters plan (%s).",
                  msg->plan_id.c_str(), m_args.plan.c_str());
              return;
            }
           */

          //! Reset virtual leader state, if the PlanControl action is "Start"
          // ToDo - Use global team position to set the leader initial state
          if (msg->op == IMC::PlanControl::PC_START)
          {
            trace("Reseting the leader state.");
            m_init_leader.op      = IMC::LeaderState::OP_SET;
            m_init_leader.lat     = m_llh_ref_pos[0];
            m_init_leader.lon     = m_llh_ref_pos[1];
            m_init_leader.height  = m_llh_ref_pos[2];
            m_init_leader.x       = m_uav_state(0, m_uav_ind+1);
            m_init_leader.y       = m_uav_state(1, m_uav_ind+1);
            m_init_leader.z       = m_uav_state(2, m_uav_ind+1);
            m_init_leader.vx      = m_uav_state(3, m_uav_ind+1);
            m_init_leader.vy      = m_uav_state(4, m_uav_ind+1);
            m_init_leader.vz      = 0;
            m_init_leader.phi     = trimValue(m_uav_state(6, m_uav_ind+1), -m_bank_lim, m_bank_lim);
            m_init_leader.theta   = 0;
            m_init_leader.psi     = m_uav_state(8, m_uav_ind+1);
            m_init_leader.p       = 0;
            m_init_leader.q       = 0;
            m_init_leader.r       = m_uav_state(11, m_uav_ind+1);
            m_init_leader.svx     = m_wind(0);
            m_init_leader.svy     = m_wind(1);
            m_init_leader.svz     = 0;
            m_init_leader.setTimeStamp();
            setLeaderState(&m_init_leader);

            // ToDo - For final implementation, the activation of plans
            // should come from a formation synchronous message
            // if (!isActive())
            //  requestActivation();
          }
          // else if (msg->op == IMC::PlanControl::PC_STOP && isActive())
          //  requestDeactivation();

          /*
            //! Initiate the leader vehicle plan
            IMC::PlanControl p_control;
            p_control.plan_id = m_args.plan;
            p_control.op = IMC::PlanControl::PC_START;
            p_control.type = IMC::PlanControl::PC_REQUEST;
            p_control.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
            dispatchAlias(&p_control);
           */

          //! Flag virtual leader state arrival
          m_team_plan_init = true;
        }

        void
        consume(const IMC::IndicatedSpeed* msg)
        {
          if (!isActive() || msg->getSource() != getSystemId())
            return;

          //! Get current vehicle airspeed
          m_airspeed = msg->value;
          if (!m_valid_airspeed)
          {
            m_valid_airspeed = true;
            trace("Valid airspeed received.");
            m_uav_ctrl(1, m_uav_ind) = m_airspeed;
          }
        }

        void
        consume(const IMC::EstimatedStreamVelocity* msg)
        {
          m_wind_avg_x->update(msg->x);
          m_wind_avg_y->update(msg->y);
          m_wind_avg_z->update(msg->z);

          double t_wind[3] = {m_wind_avg_x->mean(), m_wind_avg_y->mean(), m_wind_avg_z->mean()};
          m_wind = Matrix(t_wind, 3, 1);
          // ToDo - Send estimated wind to the global formation management thread
        }

        /*
        void
        consume(const IMC::SimulatedState* msg)
        {
          if (msg->getSource() != m_leader_id)
            return;

            //! Receive the leader simulated state from a parallel DUNE instance

            //! Get simulated state time stamp
            m_last_state_estim(0) = msg->getTimeStamp();

            // Body to ground rotation matrix
            double euler_ang[3] = {msg->phi, msg->theta, msg->psi};
            Matrix md_rot_body2ground = Matrix(euler_ang, 3, 1).toDCM();

            // Ground velocity vector computation
            double vt_body_vel[3] = {msg->u, msg->v, msg->w};
            Matrix vd_vel = md_rot_body2ground*Matrix(vt_body_vel, 3, 1);


            //! Update leader state variables
            double t_leader[12] = {msg->x,       msg->y,       msg->z,
                vd_vel(0),    vd_vel(1),    vd_vel(2),
                euler_ang[0], euler_ang[1], euler_ang[2],
                msg->p,       msg->q,       msg->r};
            //! Adjust leader offset position from its reference
            //! frame to the real vehicle reference frame
            positionReframing(m_llh_ref_pos[0], m_llh_ref_pos[1], m_llh_ref_pos[2],
                msg->lat, msg->lon, msg->height, &t_leader[0], &t_leader[1], &t_leader[2]);
            //! Update formation leader state vectors
            m_uav_state.set(0, 11, 0, 0, Matrix(t_leader, 12, 1));
            m_model->setPosition(m_uav_state.get(0, 2, 0, 0).vertCat(m_uav_state.get(6, 8, 0, 0)));
            m_model->setVelocity(m_uav_state.get(3, 5, 0, 0).vertCat(m_uav_state.get(9, 11, 0, 0)));

            //! Update leader commands
            Matrix vd_vel2wind = m_uav_state.get(3, 5, 0, 0) - m_wind;
            m_model->command(m_uav_state(6, 0), vd_vel2wind.norm_2(), m_uav_state(2, 0));

            //! Flag virtual leader state arrival
            m_team_leader_init = true;
            if (!isActive() && m_uav_n == 1)
              requestActivation();
        }
        */

        void
        consume(const IMC::Acceleration* msg)
        {
          //! Get current vehicle acceleration state
          if (msg->getSource() == getSystemId())
          {
            double mt_uav_accel[12] = {msg->x, msg->y, msg->z};
            m_uav_accel.set(0, 2, m_uav_ind+1, m_uav_ind+1, Matrix(mt_uav_accel, 3, 1));
          }
        }

        void
        consume(const IMC::DesiredRoll* msg)
        {
          //! Get leader vehicle commanded roll
          if (!isActive())
          {
            //trace("Bank command rejected.");
            //trace("Formation controller is not active.");
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
        consume(const IMC::EstimatedState* msg)
        {
          //! Declaration
          Matrix vd_cmd = Matrix(3, 1);
          IMC::PathControlState path_ctrl_state;

          // for debug
          //spew("EstimatedState received from vehicle %s", resolveSystemId(msg->getSource()));
          //spew("On Vehicle %s", resolveSystemId(getSystemId()));
          if (msg->getSource() == getSystemId())
          {
            //===========================================
            //! Vehicle own updated state
            //===========================================
            // ToDo - Check if the home reference has changed to adjust
            // the leader and cooperation vehicles positions accordingly
            m_llh_ref_pos[0] = msg->lat;
            m_llh_ref_pos[1] = msg->lon;
            m_llh_ref_pos[2] = msg->height;
            double vt_uav_state[12] = {msg->x,   msg->y,     msg->z,
                msg->vx,  msg->vy,    msg->vz,
                msg->phi, msg->theta, msg->psi,
                msg->p,   msg->q,     msg->r};
            m_uav_state.set(0, 11, m_uav_ind+1, m_uav_ind+1, Matrix(vt_uav_state, 12, 1));
            // ToDo - Check the difference between the vehicle real and simulated state

            //! - Update own vehicle simulation model
            m_models[m_uav_ind]->setPosition(m_uav_state.get(0, 2, m_uav_ind+1, m_uav_ind+1).
                               vertCat(m_uav_state.get(6, 8, m_uav_ind+1, m_uav_ind+1)));
            m_models[m_uav_ind]->setVelocity(m_uav_state.get(3, 5, m_uav_ind+1, m_uav_ind+1).
                               vertCat(m_uav_state.get(9, 11, m_uav_ind+1, m_uav_ind+1)));

            //! Update the time control variables
            m_clock_diff = msg->getTimeStamp() - Clock::get();
            m_last_state_estim(m_uav_ind+1) = msg->getTimeStamp();

            // Check if the control is active
            checkActivCtrlCond();
            if (!m_ctrl_active)
              return;
            // Check if the commands should be updated
            if (m_last_simctrl_update(m_uav_ind) + m_timestep_ctrl > msg->getTimeStamp())
              return;

            //===========================================
            //! Team prediction update
            //===========================================

            /*
              double vt_uav_state_own3[6] = {m_uav_state(0, m_uav_ind+1), m_uav_state(1, m_uav_ind+1), m_uav_state(2, m_uav_ind+1),
              m_uav_state(3, m_uav_ind+1), m_uav_state(4, m_uav_ind+1), m_uav_state(5, m_uav_ind+1)};
             */

            //! Update team simulated state for standard time periods
            teamPeriodicUpdate(msg->getTimeStamp());
            teamUnevenUpdate(msg->getTimeStamp());

            //===========================================
            //! Control computation
            //===========================================

            /*
              double vt_uav_state_own2[6] = {m_uav_state(0, m_uav_ind+1), m_uav_state(1, m_uav_ind+1), m_uav_state(2, m_uav_ind+1),
                  m_uav_state(3, m_uav_ind+1), m_uav_state(4, m_uav_ind+1), m_uav_state(5, m_uav_ind+1)};
             */

            vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, m_uav_ind, m_uav_ind));
            formationControl(m_uav_state, m_uav_accel, m_uav_ind,
                m_timestep_ctrl, &vd_cmd, m_debug, m_form_monitor);
            m_uav_ctrl.set(0, 2, m_uav_ind, m_uav_ind, vd_cmd.get(0, 2, 0, 0));

            //! - Update own vehicle simulation model - Controls
            m_models[m_uav_ind]->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));

            //! Update the time control variables
            double d_timestep = msg->getTimeStamp() - m_last_simctrl_update(m_uav_ind);
            m_last_simctrl_update(m_uav_ind) = msg->getTimeStamp();
            //! Get estimated state time stamp
            //              debug("Clock time: %2.3f; Estimated state time stamp: %2.3f", d_time, msg->getTimeStamp());

            //===========================================
            //! Commands output
            //===========================================

            m_bank_cmd.value = m_uav_ctrl(0, m_uav_ind);
            m_airspeed_cmd.value = m_uav_ctrl(1, m_uav_ind);
            m_altitude_cmd.value = m_uav_ctrl(2, m_uav_ind);
            dispatchAlias(&m_bank_cmd);
            dispatchAlias(&m_airspeed_cmd);
            dispatchAlias(&m_altitude_cmd);


            if (m_debug)
            {
              // Set PathControlState
              path_ctrl_state.end_lat = msg->lat;
              path_ctrl_state.end_lon = msg->lon;
              WGS84::displace(m_uav_state(0, 0), m_uav_state(1, 0),
                  &(path_ctrl_state.end_lat), &(path_ctrl_state.end_lon));
              dispatchAlias(&path_ctrl_state);

              //! Update the monitoring message
              IMC::FormationMonitor form_monit;

              form_monit.ax_cmd = m_form_monitor->ax_cmd;
              form_monit.ay_cmd = m_form_monitor->ax_cmd;
              //form_monit.az_cmd = m_form_monitor->ax_cmd;
              form_monit.ax_des = m_form_monitor->ax_des;
              form_monit.ay_des = m_form_monitor->ax_des;
              //form_monit.az_des = m_form_monitor->ax_des;
              form_monit.virt_err_x = m_form_monitor->virt_err_x;
              form_monit.virt_err_y = m_form_monitor->virt_err_y;
              //form_monit.virterr_z = m_form_monitor->virt_err_z;
              form_monit.surf_fdbk_x = m_form_monitor->surf_fdbk_x;
              form_monit.surf_fdbk_y = m_form_monitor->surf_fdbk_y;
              //form_monit.surf_fdbk_z = m_form_monitor->surf_fdbk_z;
              form_monit.surf_unkn_x = m_form_monitor->surf_unkn_x;
              form_monit.surf_unkn_y = m_form_monitor->surf_unkn_y;
              //form_monit.surf_unkn_z = m_form_monitor->surf_unkn_z;
              form_monit.ss_x = m_form_monitor->ss_x;
              form_monit.ss_y = m_form_monitor->ss_y;
              //form_monit.ss_z = m_form_monitor->ss_z;

              // Initialize the data for the controller evaluation
              if (m_mean_first)
                m_mean_time_start = msg->getTimeStamp();
              double d_mean_time_last = m_mean_time;
              m_mean_time = msg->getTimeStamp()-m_mean_time_start;
              double t_dist_min_mean = (m_form_monitor->rel_state[0])->dist;

              form_monit.rel_state.clear();
              IMC::RelativeState relative_state;
              RelState rel_state;

              // Iterate point list
              for (unsigned int ind_uav = 0; ind_uav <= m_uav_n; ind_uav++)
              {
                if (m_uav_ind+1 == ind_uav)
                  continue;

                rel_state = *(m_form_monitor->rel_state[ind_uav]);

                //! Identifier of the vehicle whose relative state is being reported.
                relative_state.s_id = rel_state.s_id;
                //! Distance between vehicles.
                relative_state.dist = rel_state.dist;
                //! Relative position error norm.
                relative_state.err = rel_state.err;
                //! Weight in the computation of the desired acceleration.
                relative_state.ctrl_imp = rel_state.ctrl_imp;
                //! Inter-vehicle direction vector.
                relative_state.rel_dir_x = rel_state.rel_dir_x;
                relative_state.rel_dir_y = rel_state.rel_dir_y;
                relative_state.rel_dir_z = rel_state.rel_dir_z;
                //! Relative position error in the fixed reference frame.
                relative_state.err_x = rel_state.err_x;
                relative_state.err_y = rel_state.err_y;
                relative_state.err_z = rel_state.err_z;
                //! Relative position error in the inter-vehicle reference frame.
                relative_state.rf_err_x = rel_state.rf_err_x;
                relative_state.rf_err_y = rel_state.rf_err_y;
                relative_state.rf_err_z = rel_state.rf_err_z;
                //! Relative velocity error in the inter-vehicle reference frame.
                relative_state.rf_err_vx = rel_state.rf_err_vx;
                relative_state.rf_err_vy = rel_state.rf_err_vy;
                relative_state.rf_err_vz = rel_state.rf_err_vz;
                //! Deviation from convergence (sliding surface value).
                relative_state.ss_x = rel_state.ss_x;
                relative_state.ss_y = rel_state.ss_y;
                relative_state.ss_z = rel_state.ss_z;
                //! Relative virtual error.
                //! (Component of the vehicle desired acceleration)
                relative_state.virt_err_x = rel_state.virt_err_x;
                relative_state.virt_err_y = rel_state.virt_err_y;
                relative_state.virt_err_z = rel_state.virt_err_z;

                form_monit.rel_state.push_back(relative_state);

                // Compute the controller evaluation data
                if (m_mean_first && ind_uav == 0)
                {
                  m_err_mean = rel_state.err;
                  t_dist_min_mean = rel_state.dist;
                  m_dist_min_abs = rel_state.dist;
                }
                else
                {
                  if (ind_uav == 0)
                  {
                    m_err_mean = (m_err_mean*d_mean_time_last + rel_state.err*d_timestep)/m_mean_time;
                    t_dist_min_mean = rel_state.dist;
                  }
                  else if (t_dist_min_mean > rel_state.dist)
                    t_dist_min_mean = rel_state.dist;
                  if (m_dist_min_abs > rel_state.dist)
                    m_dist_min_abs = rel_state.dist;
                }
              }

              if (m_alias_id != UINT_MAX)
                form_monit.setSource(m_alias_id);
              dispatchAlias(&form_monit);

              // Compute and dispatch the controller evaluation data
              if (m_mean_first)
              {
                m_dist_min_mean = t_dist_min_mean;
                m_mean_first = false;
              }
              else
                m_dist_min_mean = (m_dist_min_mean*d_mean_time_last + t_dist_min_mean*d_timestep)/m_mean_time;
            }
          }
          else
          {
            spew("Process another system's EstimatedState - start for vehicle %s",
                 resolveSystemId(msg->getSource()));
            //! Get team vehicle updated state

            if (m_uav_n < 2)
              return;

            //! Get vehicle team index
            unsigned int ind_uav = 0;
            while (m_uav_id[ind_uav] != msg->getSource())
            {
              ++ind_uav;
              if (ind_uav == m_uav_n)
              {
                trace("EstimatedState rejected! - Vehicle '%s' is not on the formation vehicle list.",
                      resolveSystemId(msg->getSource()));
                return;
              }
            }


            spew("Process another system's EstimatedState - 2 for vehicle %s",
                resolveSystemId(msg->getSource()));
            // - State update
            double vt_uav_state[12] = {msg->x,   msg->y,     msg->z,
                msg->vx,  msg->vy,    msg->vz,
                msg->phi, msg->theta, msg->psi,
                msg->p,   msg->q,     msg->r};
            // Adjust the cooperating vehicle offset position from its reference
            // frame to the current vehicle reference frame
            positionReframing(m_llh_ref_pos[0], m_llh_ref_pos[1], m_llh_ref_pos[2],
                msg->lat, msg->lon, msg->height, &vt_uav_state[0], &vt_uav_state[1], &vt_uav_state[2]);
            // Update vehicle state vector
            m_uav_state.set(0, 11, ind_uav+1, ind_uav+1, Matrix(vt_uav_state, 12, 1));
            // - Update own vehicle simulation model
            m_models[ind_uav]->setPosition(m_uav_state.
                                           get(0, 2, ind_uav+1, ind_uav+1).
                                           vertCat(m_uav_state.
                                                   get(6, 8, ind_uav+1, ind_uav+1)));
            m_models[ind_uav]->setVelocity(m_uav_state.
                                           get(3, 5, ind_uav+1, ind_uav+1).
                                           vertCat(m_uav_state.
                                                   get(9, 11, ind_uav+1, ind_uav+1)));
            //! Get estimated state time stamp
            m_last_state_estim(ind_uav+1) = msg->getTimeStamp();

            // Check if the control is active
            checkActivCtrlCond();
            if (!m_ctrl_active)
              return;
            // Check if the commands should be updated
            if (m_last_simctrl_update(ind_uav) + m_timestep_ctrl > msg->getTimeStamp())
              return;

            //! - Check if there is a valid reference airspeed
            // ToDo - Check from where is the team mates reference airspeed coming from
            if (!m_valid_airspeed)
              return;

            //! Update team simulated state for standard time periods
            teamPeriodicUpdate(msg->getTimeStamp());
            teamUnevenUpdate(msg->getTimeStamp());

            //! - Commands update
            vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, ind_uav, ind_uav));
            formationControl(m_uav_state, m_uav_accel, ind_uav, m_timestep_ctrl,
                &vd_cmd, false, m_form_monitor);
            m_uav_ctrl.set(0, 2, ind_uav, ind_uav, vd_cmd.get(0, 2, 0, 0));

            //! - Update current vehicle simulation model
            m_models[ind_uav]->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));
            m_last_simctrl_update(ind_uav) = msg->getTimeStamp();

            //! Check if all vehicles states were initialized
            if (!m_team_state_init)
            {
              bool b_state_init = true;
              for (ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
              {
                // Do not check current vehicle state initialization
                if (ind_uav == m_uav_ind)
                  continue;

                if (m_last_simctrl_update(ind_uav) < 0.0)
                {
                  b_state_init = false;
                  break;
                }
              }
              m_team_state_init = b_state_init;
            }

            //! Check if conditions are met to initiate team virtual state updates
            //if (!isActive() && m_team_state_init)
            //  requestActivation();
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

          //! Update the simulated vehicles commands and states
          //spew("Update the simulated vehicles commands and states");

          // ToDo - Check if leader simulation last update is recent enough: m_last_state_estim(0)
          // ToDo - Check if team vehicles last update is recent enough: m_last_state_estim(1:m_uav_n)

          //! Update team simulated state for standard time periods
          teamPeriodicUpdate(m_clock_diff + Clock::get());
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
        dispatchLeader(IMC::Message* msg)
        {
          // Dispatch message with leader source identification
          msg->setSource(m_leader_id);
          dispatch(*msg);
        }

        void
        checkActivCtrlCond()
        {
          // Deactivate the formation controller if the task is not active
          if (!isActive() && m_ctrl_active)
            m_ctrl_active = false;
          // Check formation control activation conditions
          // - Plan activation request
          // - Airspeed data
          // - Leader vehicle data
          // - Single vehicle formation or team vehicles' data
          else if (isActive() && !m_ctrl_active && m_team_plan_init && m_valid_airspeed
              && m_team_leader_init && (m_uav_n == 1 || m_team_state_init))
            m_ctrl_active = true;
          else if (Clock::get() >= m_last_time_trace + 1.0)
          {
            if (isActive())
            {
              if (!m_team_plan_init)
                spew("Team plan missing!");
              else if (!m_valid_airspeed)
                spew("Airspeed missing!");
              else if (!m_team_leader_init)
                spew("Virtual leader state missing!");
              else if (m_uav_n != 1 && m_team_state_init)
                spew("Team vehicles' state missing!");
            }
          }
        }

        void
        setLeaderState(const IMC::LeaderState* leader_state)
        {
          // Flag virtual leader state arrival
          m_team_leader_init = true;
          //if (!isActive())
          //  requestActivation();

          // Leader home reference
          m_estate_leader.lat = m_llh_ref_pos[0];
          m_estate_leader.lon = m_llh_ref_pos[1];
          m_estate_leader.height = m_llh_ref_pos[2];

          // Update leader state variables
          double t_leader[12] = {leader_state->x,       leader_state->y,       leader_state->z,
              leader_state->vx,    leader_state->vy,    0,
              trimValue(leader_state->phi, -m_bank_lim, m_bank_lim), 0, leader_state->psi,
              leader_state->p,       0,       leader_state->r};
          // Adjust leader offset position from its reference
          // frame to the vehicle reference frame
          positionReframing(m_llh_ref_pos[0], m_llh_ref_pos[1], m_llh_ref_pos[2],
              leader_state->lat, leader_state->lon, leader_state->height,
              &t_leader[0], &t_leader[1], &t_leader[2]);
          //! Update formation leader state vectors
          m_uav_state.set(0, 11, 0, 0, Matrix(t_leader, 12, 1));
          m_model->setPosition(m_uav_state.get(0, 2, 0, 0).vertCat(m_uav_state.get(6, 8, 0, 0)));
          m_model->setVelocity(m_uav_state.get(3, 5, 0, 0).vertCat(m_uav_state.get(9, 11, 0, 0)));
          // Update formation leader wind vector
          m_model->m_wind(0) = leader_state->svx;
          m_model->m_wind(1) = leader_state->svy;
          m_last_state_estim(0) = leader_state->getTimeStamp();

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
          double tmp_j2[9] = {1, std::sin(roll) * std::tan(pitch),  std::cos(roll) * std::tan(pitch),
              0,                   std::cos(roll),                   -std::sin(roll),
              0, std::sin(roll) / std::cos(pitch),  std::cos(roll) / std::cos(pitch)};

          return Matrix(tmp_j2, 3, 3);
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

        //! Update team simulated state for standard time periods
        void
        teamPeriodicUpdate(const double& d_time)
        {
          //! Variables initialization
          double d_sim_time;
          Matrix vi_sim_time = Matrix(m_uav_n+1, 1);
          unsigned int ind_time;
          unsigned int i_time_n = m_uav_n;
          Matrix vd_cmd = Matrix(3, 1);
          Matrix tmp_last_state_estim = m_last_state_estim;

          //! Order the update times as an increasing sequence
          for (unsigned int ind_uav = 0; ind_uav <= m_uav_n; ++ind_uav)
            vi_sim_time(ind_uav) = ind_uav;

          for (unsigned int ind_uav = 0; ind_uav < i_time_n; ++ind_uav)
          {
            for (unsigned int ind_uav2 = ind_uav + 1; ind_uav2 <= i_time_n; ++ind_uav2)
            {
              if (m_last_state_estim(vi_sim_time(ind_uav)) > m_last_state_estim(vi_sim_time(ind_uav2)))
              {
                ind_time = vi_sim_time(ind_uav);
                vi_sim_time(ind_uav) = vi_sim_time(ind_uav2);
                vi_sim_time(ind_uav2) = ind_time;
              }
              else if (m_last_state_estim(vi_sim_time(ind_uav)) == m_last_state_estim(vi_sim_time(ind_uav2)))
              {
                --i_time_n;
                for (ind_time = ind_uav2; ind_time <= i_time_n; ++ind_time)
                  vi_sim_time(ind_time) = vi_sim_time(ind_time + 1);
              }
            }
          }

          //! Select the oldest prediction time reference
          ind_time = 0;
          d_sim_time = m_last_state_estim(vi_sim_time(ind_time));
          // Reset state estimation time, if it is negative
          while (d_sim_time <= 0.0 && ind_time <= i_time_n)
          {
            m_last_state_estim(vi_sim_time(ind_time)) = d_time;
            if (ind_time < i_time_n)
              ++ind_time;
            d_sim_time = m_last_state_estim(vi_sim_time(ind_time));
          }

          //! Loop the time references to update all prediction up to the "current" time
          while (d_sim_time + m_timestep_sim <= d_time)
          {
            //! Leader state prediction - Update the simulated vehicle state
            if (m_last_state_estim(0) <= d_sim_time)
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

              m_model->update(m_timestep_sim);
              m_last_state_estim(0) += m_timestep_sim;
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
              // UAV velocity components, on ground frame
              Matrix vd_gnd_vel = m_velocity.get(0, 2, 0, 0);
              //! UAV velocity rotation to the body frame
              Matrix vd_body_vel = transpose(md_rot_body2gnd) * vd_gnd_vel;

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

              //! Send estimated state message
              dispatchLeader(&m_estate_leader);

              if (m_debug)
              {
                //! Leader acceleration
                IMC::Acceleration accel;
                accel.x = m_uav_accel(0, 0);
                accel.y = m_uav_accel(1, 0);
                accel.z = m_uav_accel(2, 0);
                dispatchLeader(&accel);

                // Stream velocity.
                // Air-relative UAV velocity components, on aircraft frame
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
                dispatchLeader(&sstate);
                dispatchLeader(&speed);
                dispatchLeader(&groundspeed);
                dispatchLeader(&streamspeed);
              }
            }

            //! Team state prediction - Update the simulated vehicles state
            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
              if (m_last_state_estim(ind_uav+1) <= d_sim_time)
              {
                m_models[ind_uav]->update(m_timestep_sim);
                m_last_state_estim(ind_uav+1) += m_timestep_sim;
              }

            //! Team control prediction - Update the simulated vehicles commands
            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
            {
              //! Commands update - At control frequency
              if (tmp_last_state_estim(ind_uav+1) <= d_sim_time &&
                  m_last_simctrl_update(ind_uav) + m_timestep_ctrl < d_sim_time + m_timestep_sim)
              {
                //! Asynchronous update team simulated state
                teamUnevenUpdate(d_sim_time + m_timestep_sim);

                //! Compute simulated vehicle formation controls
                vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, ind_uav, ind_uav));
                formationControl(m_uav_state, m_uav_accel, ind_uav, m_timestep_ctrl,
                    &vd_cmd, false, m_form_monitor);
                m_uav_ctrl.set(0, 2, ind_uav, ind_uav, vd_cmd.get(0, 2, 0, 0));

                //! - Update current vehicle model control commands
                m_models[ind_uav]->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));

                //! Update the control prediction time
                m_last_simctrl_update(ind_uav) = d_sim_time + m_timestep_sim;
              }
            }

            //! Update the state prediction time
            tmp_last_state_estim = m_last_state_estim;

            //! Select the next prediction time reference
            if (ind_time < i_time_n)
              ++ind_time;
            else
              ind_time = 0;
            d_sim_time = m_last_state_estim(vi_sim_time(ind_time));
          }
        }

        //! Update team simulated state for uneven time periods
        void
        teamUnevenUpdate(const double& d_time)
        {
          //! Temporary prediction variables initialization
          Matrix vd_pos(6, 1, 0.0);
          Matrix vd_vel(6, 1, 0.0);
          UAVSimulation model;

          //! Update team simulated state for remaining time
          //! - Leader state prediction - Update the simulated vehicle state
          model = *m_model;
          model.update(d_time - m_last_state_estim(0));
          vd_pos = model.getPosition();
          vd_vel = model.getVelocity();
          m_uav_state.set(0, 11, 0, 0,
                          vd_pos.get(0, 2, 0, 0).
                          vertCat(vd_vel.get(0, 2, 0, 0).
                                  vertCat(vd_pos.get(3, 5, 0, 0).
                                          vertCat(vd_vel.get(3, 5, 0, 0)))));
          double mt_uav_accel[3] = {0, m_g*std::tan(vd_pos(3)), 0};
          double d_cos_psi = std::cos(vd_pos(5));
          double d_sin_psi = std::sin(vd_pos(5));
          double t_rot[9] = {d_cos_psi, -d_sin_psi, 0,
              d_sin_psi,  d_cos_psi, 0,
              0, 0, 1};
          Matrix md_rot = Matrix(t_rot, 3, 3);
          m_uav_accel.set(0, 2, 0, 0, md_rot*Matrix(mt_uav_accel, 3, 1));

          //! - Team state prediction - Update the simulated vehicles state
          for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
          {
            //!  * Retrieve current vehicle model
            model = *m_models[ind_uav];

            //!  * State update
            model.update(d_time - m_last_state_estim(ind_uav+1));
            vd_pos = model.getPosition();
            vd_vel = model.getVelocity();
            m_uav_state.set(0, 11, ind_uav+1, ind_uav+1,
                            vd_pos.get(0, 2, 0, 0).
                            vertCat(vd_vel.get(0, 2, 0, 0).
                                    vertCat(vd_pos.get(3, 5, 0, 0).
                                            vertCat(vd_vel.get(3, 5, 0, 0)))));
            if (ind_uav != m_uav_ind)
            {
              mt_uav_accel[0] = 0;
              mt_uav_accel[1] = m_g*std::tan(vd_pos(3));
              mt_uav_accel[2] = 0;
              d_cos_psi = std::cos(vd_pos(5));
              d_sin_psi = std::sin(vd_pos(5));
              t_rot[0] = d_cos_psi;
              t_rot[1] = -d_sin_psi;
              t_rot[3] = d_sin_psi;
              t_rot[4] = d_cos_psi;
              md_rot = Matrix(t_rot, 3, 3);
              m_uav_accel.set(0, 2, ind_uav+1, ind_uav+1, md_rot*Matrix(mt_uav_accel, 3, 1));
            }
          }
        }

        void
        formationControl(const Matrix& md_uav_state, const Matrix& md_uav_accel,
            const unsigned int& ind_uav, const double& d_time_step, Matrix* vd_cmd,
            const bool b_debug, FormMonitor* form_monitor)
        {
          /*
          double vt_uav_state_own1[6] = {md_uav_state(0, ind_uav+1), md_uav_state(1, ind_uav+1), md_uav_state(2, ind_uav+1),
                        md_uav_state(3, ind_uav+1), md_uav_state(4, ind_uav+1), md_uav_state(5, ind_uav+1)};
           */

          //! Vehicle formation control method

          //! ====== Variables declaration and initialization ======

          //! Control constraints
          double d_airspeed_max = m_args.tas_max;
          double d_airspeed_min = m_args.tas_min;

          //! Formation parameters
          int i_formation_frame = m_args.formation_frame;

          //! Control parameters
          double mt_gain_mtx[2] = {m_k_longitudinal, m_k_lateral};
          Matrix md_gain_mtx = Matrix(mt_gain_mtx, 2) * m_tas_cmd_leader/2.5;
          double d_ss_bnd_layer = m_k_boundary * m_tas_cmd_leader;
          double d_deconfliction_dist = m_safe_dist + m_deconfliction_offset;
          double k_form_ref = (m_uav_n > 1)?m_k_leader*(m_uav_n-1):1.0;
          double k_deconfl_vel = m_k_deconfliction*k_form_ref;
          double k_deconfliction_dist = k_deconfl_vel/2;
          double k_long_dist1 = 1.5;
          double k_long_dist2 = 4;
          double k_long_dist3 = k_long_dist2-k_long_dist1;

          // Reference frame and axes rotation (Ground to Yaw)
          double d_cos_heading = std::cos(md_uav_state(8, ind_uav+1));
          double d_sin_heading = std::sin(md_uav_state(8, ind_uav+1));

          double t_rot_ground2yaw[4] = {d_cos_heading, d_sin_heading, -d_sin_heading, d_cos_heading};
          Matrix md_rot_ground2yaw = Matrix(t_rot_ground2yaw, 2, 2);
          Matrix vd_body_x = transpose(md_rot_ground2yaw.row(0));
          Matrix vd_body_y = transpose(md_rot_ground2yaw.row(1));

          // Maneuvering constrains
          Matrix vd_body_accel_lim_x = m_accel_lim_x*vd_body_x;
          Matrix vd_body_accel_lim_y = m_g * std::tan(m_bank_lim*0.6)*vd_body_y;

          //! Miscellaneous
          double t_uav_turnrad;
          double t_cos_gamma;
          double t_sin_gamma;
          double vt_form_dir[2];
          Matrix vd_form_pos1 = Matrix(2, 1, 0.0);
          double t_dist_gain;

          Matrix vd_inter_uav_state = Matrix(6, 1);
          Matrix vd_inter_uav_pos = Matrix(2, 1);
          double d_inter_uav_dist;
          double d_inter_uav_angle;
          double d_cos_inter_uav_angle;
          double d_sin_inter_uav_angle;
          double mt_rot[4];
          Matrix md_rot = Matrix(2, 2);
          Matrix vd_inter_uav_x = Matrix(2, 1);
          Matrix vd_inter_uav_y = Matrix(2, 1);

          double vt_form_pos2[2] = {0, 0};
          Matrix vd_form_pos2 = Matrix(2, 1, 0.0);
          Matrix vd_inter_uav_des_pos = Matrix(2, 1, 0.0);
          Matrix vd_inter_uav_des_vel = Matrix(2, 1, 0.0);
          Matrix vd_inter_uav_des_acc = Matrix(2, 1, 0.0);

          Matrix vd_err = Matrix(2, 1);
          Matrix vd_orig_err = Matrix(2, 1);
          double t_err_y;
          double d_err_x;
          double d_err_y;
          double d_err_x_s_conv;
          // double d_err_y_s_conv;
          int int_Max;
          Matrix vd_deriv_err = Matrix(2, 1);
          double d_deriv_err_x;
          double d_deriv_err_y;

          double d_vel_proj_x;
          double d_vel_proj_y;
          double d_accel_max_proj_x;
          double d_accel_max_proj_y;

          double d_c1;
          double d_c2;
          double d_c3;
          double d_c4;
          double t_ctrl_marg_mult;

          double d_des_dist;
          double d_dist2confl;
          double d_vel_gain;
          double d_dist_gain;

          double t_surf_x;
          double t_surf_y;

          double d_inter_uav_angle_dot;
          Matrix vt_surf_deriv =  Matrix(2, 1, 0.0);

          Matrix vd_surf_uav = Matrix(2, m_uav_n+1, 0.0);
          Matrix vt_virt_err_uav = Matrix(2, m_uav_n+1, 0.0);
          Matrix vd_weight_gain = Matrix(m_uav_n+1, 1, 0.0);

          //double d_time = Clock::get();

          //! Monitoring data
          RelState* rel_state;

          // ===========================================
          // Formation control
          // ===========================================

          /*
        // ======== Formation perturbation test - Mesh stability =======
        if ind_uav == 1
        //     vd_Pert = 5*(1+std::cos(d_Time/40*2*pi))*[-1; 1];
        vd_Pert = 10*std::cos(d_Time/20*2*pi)*[-1; 1];
        //     vd_Pert = 10*[-std::cos(d_Time/20*2*pi); std::sin(d_Time/20*2*pi)];
        //     vd_Pert = [0; 0];
            m_formation_pos.set(0, 1, ind_uav, ind_uav, m_formation_pos.get(0, 1, ind_uav, ind_uav) + vd_Pert);
        end
        // ======== Formation perturbation test - Mesh stability =======
           */

          //-------------------------------------------
          //! Formation shape rotation
          //-------------------------------------------

          Matrix vd_leader_hor_vel = md_uav_state.get(3, 4, 0, 0);
          double d_leader_gndspeed = vd_leader_hor_vel.norm_2();
          double d_cos_form_course = md_uav_state(3, 0)/d_leader_gndspeed;
          double d_sin_form_course = md_uav_state(4, 0)/d_leader_gndspeed;
          double t_rot_formation[4] = {d_cos_form_course, -d_sin_form_course,
              d_sin_form_course,  d_cos_form_course};
          Matrix md_rot_formation = Matrix(t_rot_formation, 2, 2);

          //! Formation current rotation radius, speed, and turn-rate
          double d_form_turnrate = m_g * std::tan(md_uav_state(6, 0))/d_leader_gndspeed*
              std::cos(std::atan2(md_uav_state(4, 0), md_uav_state(3, 0)) - md_uav_state(8, 0));
          double d_form_turnrad = d_leader_gndspeed/d_form_turnrate;
          // d_form_turnrad = d_leader_gndspeed*d_leader_gndspeed/(m_g * std::tan(md_uav_state(6, 0))*...
          //     std::cos(std::atan2(md_uav_state(4, 0), md_uav_state(3, 0)) - md_uav_state(8, 0)));
          // d_form_turnrate = d_leader_gndspeed/d_form_turnrad;
          // vd_FormRotCtr = md_uav_state.get(0, 1, 0, 0) + d_form_turnrad*md_rot_formation.col;
          // vd_FormRotCtr = md_uav_state.get(0, 1, 0, 0) + d_form_turnrad*md_rot_formation(1:2, 2);
          // spew('\nFormation rotation center: %3.1f, %3.1f\n', vd_FormRotCtr)

          //! Formation reference position, velocity and acceleration vectors
          if (i_formation_frame > IMC::Formation::OP_EARTH_FIXED)
          {
            if (md_uav_state(6, 0) == 0)
            {
              //! Formation following in a straight line
              d_form_turnrate = 0;
              vd_form_pos1 = m_formation_pos.get(0, 1, ind_uav, ind_uav);
              /*
            Matrix vd_form_vel1[2] = {0, 0};
            Matrix vd_form_acc1[2] = {0, 0};
               */
            }
            else if (i_formation_frame == IMC::Formation::OP_PATH_CURVED)
            {
              //! Path reference frame
              //! In-formation adjustment
              t_uav_turnrad = d_form_turnrad - m_formation_pos(1, ind_uav);
              t_cos_gamma = std::cos(m_formation_pos(0, ind_uav)/d_form_turnrad);
              t_sin_gamma = std::sin(m_formation_pos(0, ind_uav)/d_form_turnrad);
              // - Position
              vt_form_dir[0] = t_sin_gamma;
              vt_form_dir[1] = 1 - t_cos_gamma;
              double vt_form_pos1[2] = {0, m_formation_pos(1, ind_uav)};
              vd_form_pos1 = t_uav_turnrad * Matrix(vt_form_dir, 2, 1) +
                  Matrix(vt_form_pos1, 2, 1);
              /*
            //! - Velocity
            double vt_form_vel1[2] = {-vd_form_pos1(1), vd_form_pos1(0)};
            Matrix vd_form_vel1 = Matrix(vt_form_vel1, 2, 1) * d_form_turnrate;
            //! - Acceleration
            Matrix vd_form_acc1[2] = -vd_form_pos1 * d_form_turnrate*d_form_turnrate;
               */
            }
            else
            {
              //! Ground reference frame
              vd_form_pos1 = m_formation_pos.get(0, 1, ind_uav, ind_uav);
              /*
            //! - Velocity
            double vt_form_vel1[2] = {-vd_form_pos1(1), vd_form_pos1(0)};
            Matrix vd_form_vel1 = Matrix(vt_form_vel1, 2, 1) * d_form_turnrate;
            //! - Acceleration
            Matrix vd_form_acc1[2] = -vd_form_pos1 * d_form_turnrate*d_form_turnrate;
               */
            }
          }

          //-------------------------------------------
          //! Formation UAV sweep
          //-------------------------------------------

          // ToDo - check - verificar inclusão do líder como elemento 0 dos vectores e matrizes
          // da formação, em vez de elemento m_uav_n em apenas algumas
          for (unsigned int ind_uav2 = 0; ind_uav2 < m_uav_n; ind_uav2++)
          {
            // Skipping the current UAV index
            if (ind_uav == ind_uav2)
              continue;

            //! Computing relative state, from current UAV to "ind_uav2" UAV
            vd_inter_uav_state = md_uav_state.get(0, 5, ind_uav2+1, ind_uav2+1) -
                md_uav_state.get(0, 5, ind_uav+1, ind_uav+1);
            vd_inter_uav_pos = vd_inter_uav_state.get(0, 1, 0, 0);
            d_inter_uav_dist = vd_inter_uav_pos.norm_2();
            //! Computing the rotation matrix - From inter-UAV frame to ground frame
            d_inter_uav_angle = std::atan2(vd_inter_uav_pos(1),
                vd_inter_uav_pos(0));
            d_cos_inter_uav_angle = std::cos(d_inter_uav_angle);
            d_sin_inter_uav_angle = std::sin(d_inter_uav_angle);
            mt_rot[0] = d_cos_inter_uav_angle;
            mt_rot[1] = -d_sin_inter_uav_angle;
            mt_rot[2] = d_sin_inter_uav_angle;
            mt_rot[3] = d_cos_inter_uav_angle;
            md_rot = Matrix(mt_rot, 2, 2);
            vd_inter_uav_x = md_rot.column(0);
            vd_inter_uav_y = md_rot.column(1);

            //! Computation of the desired formation state:
            //! - Position vector
            //! - Velocity vector
            //! - Acceleration vector
            if (i_formation_frame == IMC::Formation::OP_EARTH_FIXED)
            {
              //! Ground reference frame
              //! - Position
              vd_inter_uav_des_pos = m_formation_pos.get(0, 1, ind_uav, ind_uav) -
                  m_formation_pos.get(0, 1, ind_uav2, ind_uav2);
              //! - Velocity
              vd_inter_uav_des_vel = Matrix(2, 1, 0.0);
              //! - Acceleration
              vd_inter_uav_des_acc = Matrix(2, 1, 0.0);
              /* Alternative computation
            vd_err = -vd_inter_uav_state.get(0, 1, 0, 0) - vd_inter_uav_des_pos;
            //! - Velocity
            vd_inter_uav_des_vel = [-vd_err(1); vd_err(0)] * d_form_turnrate;
            //! - Acceleration
            vd_inter_uav_des_acc = -vd_err * d_form_turnrate*d_form_turnrate;
               */
            }
            else
            {
              //! Path reference frame
              if ((i_formation_frame == IMC::Formation::OP_PATH_CURVED) &&
                  (md_uav_state(6, 0) != 0))
              {
                //! Curved shape - Formation shape adjustment to path curvature
                t_uav_turnrad = d_form_turnrad - m_formation_pos(1, ind_uav2);
                t_cos_gamma = std::cos(m_formation_pos(0, ind_uav2)/d_form_turnrad);
                t_sin_gamma = std::sin(m_formation_pos(0, ind_uav2)/d_form_turnrad);
                // - Position
                vt_form_dir[0] = t_sin_gamma;
                vt_form_dir[1] = 1 - t_cos_gamma;
                vt_form_pos2[0] = 0;
                vt_form_pos2[1] = m_formation_pos(1, ind_uav);
                vd_form_pos2 = t_uav_turnrad * Matrix(vt_form_dir, 2, 1) +
                    Matrix(vt_form_pos2, 2, 1);
                /*
              //! - Velocity
              vd_form_vel2 = [-vd_form_pos2(2); vd_form_pos2(1)] * d_form_turnrate;
              //! - Acceleration
              vd_form_acc2 = -vd_form_pos2 * d_form_turnrate*d_form_turnrate;
                 */
              }
              else
              {
                //! Original shape - Simpler formation shape rotation (below)
                vd_form_pos2 = m_formation_pos.get(0, 1, ind_uav2, ind_uav2);
                /*
              vd_form_vel2 = [-vd_form_pos2(2); vd_form_pos2(1)] * d_form_turnrate;
              vd_form_acc2 = -vd_form_pos2 * d_form_turnrate*d_form_turnrate;
                 */
              }

              vd_inter_uav_des_pos = md_rot_formation * (vd_form_pos1 - vd_form_pos2);
              //vd_err = -vd_inter_uav_state.get(0, 1, 0, 0) - vd_inter_uav_des_pos;
              //! - Velocity
              vd_inter_uav_des_vel(0) = vd_inter_uav_state(1) * d_form_turnrate;
              vd_inter_uav_des_vel(1) = -vd_inter_uav_state(0) * d_form_turnrate;
              //vd_inter_uav_des_vel = md_rot_formation * (vd_form_vel1 - vd_form_vel2);
              //! - Acceleration
              vd_inter_uav_des_acc = vd_inter_uav_state.get(0, 1, 0, 0)  * d_form_turnrate*d_form_turnrate;
              //vd_inter_uav_des_acc = md_rot_formation * (vd_form_acc1 - vd_form_acc2);
            }

            //! Relative position error vector
            vd_err = -vd_inter_uav_state.get(0, 1, 0, 0) - vd_inter_uav_des_pos;
            d_err_y = Matrix::dot(vd_err, vd_inter_uav_y);
            d_err_x = Matrix::dot(vd_err, vd_inter_uav_x);
            // verificar uso de "Booleano" como alternativa a "int_Max",
            // para optimização do código e da facilidade de interpretação deste
            if (d_err_x < d_deconfliction_dist - d_inter_uav_dist)
            {
              int_Max = 2;
              d_err_x = d_deconfliction_dist - d_inter_uav_dist;
            }
            else
            {
              int_Max = 1;
            }
            // Original positional error vector, only used for controller performance evaluation
            vd_orig_err = vd_err;

            //! Relative velocity error vector
            vd_deriv_err = -vd_inter_uav_state.get(3, 4, 0, 0) - vd_inter_uav_des_vel;
            d_deriv_err_x = Matrix::dot(vd_deriv_err, vd_inter_uav_x);
            d_deriv_err_y = Matrix::dot(vd_deriv_err, vd_inter_uav_y);

            //! Maneuvering constrains - Projection onto the inter-UAV reference frame
            d_vel_proj_x = Matrix::dot((md_uav_state.get(3, 4, ind_uav2+1, ind_uav2+1) - m_wind),
                vd_inter_uav_x);
            d_accel_max_proj_x = std::abs(Matrix::dot(vd_body_accel_lim_x, vd_inter_uav_x)) +
                std::abs(Matrix::dot(vd_body_accel_lim_y, vd_inter_uav_x));
            d_vel_proj_y = Matrix::dot((md_uav_state.get(3, 4, ind_uav2+1, ind_uav2+1) - m_wind),
                vd_inter_uav_y);
            d_accel_max_proj_y = std::abs(Matrix::dot(vd_body_accel_lim_x, vd_inter_uav_y)) +
                std::abs(Matrix::dot(vd_body_accel_lim_y, vd_inter_uav_y));

            //! Sliding Surface parameters - Inter-UAV X axis
            //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim"
            d_c1 = std::max(d_airspeed_max - d_vel_proj_x, vel_lim);
            t_ctrl_marg_mult = 2 * d_airspeed_max/(d_airspeed_max + d_vel_proj_x);
            d_c2 = m_deconfliction_offset * t_ctrl_marg_mult;
            if (d_err_x < 0)
            {
              d_c2 = std::max(4 * (1+m_acc_safety_marg) * d_c1*d_c1/(27 * d_accel_max_proj_x), d_c2);
              /*
            t_CtrlMarg = d_c2/t_ctrl_marg_mult;
            d_deconfliction_dist = m_safe_dist + t_CtrlMarg;
            if (t_CtrlMarg > m_deconfliction_offset*1.1)
              spew('Control margin: %1.1f m; UAV%d & UAV%d\n', t_CtrlMarg, ind_uav, ind_uav2);
               */
            }

            //! Limitation of the sliding surface (before reaching negative infinite)
            if (d_inter_uav_dist < d_deconfliction_dist)
            {
              d_err_x = std::min(d_err_x, d_c2*0.5);
              if (d_deriv_err_x > 0)
                d_err_x_s_conv = d_err_x;
              else
                d_err_x_s_conv = std::min(d_err_x, 0.0);
            }
            else
            {
              d_err_x = std::min(d_err_x, d_c2*0.5);
              d_err_x_s_conv = d_err_x;
            }
            // d_err_x = std::min(d_err_x, d_c2*0.5);

            //! Y projection adjustment, if target is beyond the other UAV
            if (int_Max == 2)
            {
              //! Target point across another UAV position - Define a point
              //! on the safety rim of the other UAV to follow
              t_err_y = 2 * d_deconfliction_dist;
              /*
            if (d_err_x > 0)
              t_err_y = 2 * d_deconfliction_dist;
            else
              t_err_y = 0.5 * d_deconfliction_dist;
               */
              if (t_err_y > std::abs(d_err_y))
              {
                if (d_err_y < 0)
                  d_err_y = -t_err_y;
                else
                  d_err_y = t_err_y;
              }
            }
            vd_err(0) = d_err_x;
            vd_err(1) = d_err_y;
            vd_err = md_rot*vd_err;

            //! UAV-pair - Regulation of control importance
            d_des_dist = vd_inter_uav_des_pos.norm_2();
            d_dist2confl = d_inter_uav_dist-d_deconfliction_dist;
            d_vel_gain = 1 + (d_deriv_err_x*d_deriv_err_x/d_accel_max_proj_x -
                d_dist2confl)/m_deconfliction_offset*k_deconfl_vel;
            if (d_dist2confl < 0)
              d_dist_gain = 1 + d_dist2confl/m_deconfliction_offset *
              d_dist2confl/m_deconfliction_offset * k_deconfliction_dist;
            else if (d_inter_uav_dist <= d_des_dist*k_long_dist1)
              d_dist_gain = 1;
            else if (d_inter_uav_dist < d_des_dist*k_long_dist2)
            {
              t_dist_gain = (d_inter_uav_dist-d_des_dist*k_long_dist1)/(d_des_dist*k_long_dist3);
              d_dist_gain = 1 - t_dist_gain*t_dist_gain;
            }
            else
              d_dist_gain = 0;
            vd_weight_gain(ind_uav2+1) = std::max(d_vel_gain, d_dist_gain);

            //! Sliding Surface parameters - Inter-UAV Y axis
            if (d_err_y < 0)
            {
              //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim" m/s
              d_c3 = std::max(d_airspeed_max - d_vel_proj_y, vel_lim);
              d_c4 = 4 * (1+m_acc_safety_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            }
            else
            {
              //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
              d_c3 = std::min(- d_airspeed_max - d_vel_proj_y, -vel_lim);
              d_c4 = - 4 * (1+m_acc_safety_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            }

            //! ======= Sliding surface ==============

            t_surf_x = d_c1 * d_err_x/(d_err_x - d_c2);
            t_surf_y = d_c3 * d_err_y/(d_err_y - d_c4);
            //! Sliding surface deviation
            vd_surf_uav.set(0, 1, ind_uav2+1, ind_uav2+1,
                            vd_deriv_err - t_surf_x * vd_inter_uav_x - t_surf_y * vd_inter_uav_y);

            //! ======= Virtual error and feedback linearization ================
            d_inter_uav_angle_dot = Matrix::dot(vd_inter_uav_state.get(3, 4, 0, 0),
                vd_inter_uav_y/d_inter_uav_dist);
            // d_inter_uav_angle_dot = 0;
            vt_surf_deriv(0) = d_c1*d_c2*d_deriv_err_x/((d_err_x_s_conv - d_c2)*(d_err_x_s_conv - d_c2)) +
                t_surf_y * d_inter_uav_angle_dot;
            vt_surf_deriv(1) = d_c3 * d_c4 * d_deriv_err_y/((d_err_y - d_c4)*(d_err_y - d_c4)) -
                t_surf_x * d_inter_uav_angle_dot;
            vt_virt_err_uav.set(0, 1, ind_uav2+1, ind_uav2+1,
                                md_uav_accel.get(0, 1, ind_uav2+1, ind_uav2+1) +
                                vd_inter_uav_des_acc - md_rot * vt_surf_deriv);

            //! Tracking output
            if (b_debug)
            {
              rel_state = form_monitor->rel_state[ind_uav2+1];
              //! Vehicle identifier;
              rel_state->s_id = m_args.formation_systems[ind_uav2];
              //! Distance between vehicles
              rel_state->dist = d_inter_uav_dist;
              // // ======== Formation perturbation test - Mesh stability =======
              // if (ind_uav == 1)
              //   vd_orig_err += vd_Pert;
              // end
              // // ======== Formation perturbation test - Mesh stability =======
              //! Relative position error norm
              rel_state->err =  vd_orig_err.norm_2();
              //! Inter-vehicle direction vector
              rel_state->rel_dir_x = vd_inter_uav_x(0);
              rel_state->rel_dir_y = vd_inter_uav_x(1);
              //rel_state->rel_dir_z = vd_inter_uav_x(2);
              //! Relative position error - Ground reference frame
              // // ======== Formation perturbation test - Mesh stability =======
              // if ind_UAV == 1
              //   vd_err = vd_err + vd_Pert;
              // end
              // // ======== Formation perturbation test - Mesh stability =======
              rel_state->err_x = vd_err(0);
              rel_state->err_y = vd_err(1);
              //rel_state->err_z = vd_err(2);
              //! Relative position error - Inter-vehicle reference frame
              rel_state->rf_err_x = Matrix::dot(vd_err ,vd_inter_uav_x);
              rel_state->rf_err_y = Matrix::dot(vd_err, vd_inter_uav_y);
              //rel_state->rf_err_z = Matrix::dot(vd_err, vd_inter_uav_z);
              //! Relative velocity error - Inter-vehicle reference frame
              rel_state->rf_err_vx = Matrix::dot(vd_deriv_err, vd_inter_uav_x);
              rel_state->rf_err_vy = Matrix::dot(vd_deriv_err, vd_inter_uav_y);
              //rel_state->rf_err_vz = Matrix::dot(vd_deriv_err, vd_inter_uav_z);
              //! Deviation from convergence (sliding surface) - Inter-vehicle reference frame
              rel_state->ss_x = Matrix::dot(vd_surf_uav.get(0, 1, ind_uav2+1, ind_uav2+1), vd_inter_uav_x);
              rel_state->ss_y = Matrix::dot(vd_surf_uav.get(0, 1, ind_uav2+1, ind_uav2+1), vd_inter_uav_y);
              //rel_state->ss_z = Matrix::dot(vd_surf_uav.get(0, 1, ind_uav2+1, ind_uav2+1), vd_inter_uav_z);
              //! Inter-vehicle virtual error - Ground reference frame
              rel_state->virt_err_x = vt_virt_err_uav(0, ind_uav2+1);
              rel_state->virt_err_y = vt_virt_err_uav(1, ind_uav2+1);
              //rel_state->virt_err_z = vt_virt_err_uav(2, ind_uav2+1);
            }

            // ========= Spew ===========
//            if (b_debug && d_time >= m_last_time_spew + 0.5)
//            {
//              spew("---------------------------------------------------");
//              spew("Relative to UAV %d - Distance: %1.2fm", ind_uav2, d_inter_uav_dist);
//              spew("Relative to UAV %d - Total position error: %1.2fm", ind_uav2, vd_err.norm_2());
//              //spew("Relative to UAV %d - Position error - North: %1.2fm - East: %1.2fm",
//              //     ind_uav2, vd_err(0), vd_err(1));
//              spew("Relative to UAV %d - Position error - X: %1.2fm     - Y: %1.2fm",
//                  ind_uav2, Matrix::dot(vd_err ,vd_inter_uav_x), Matrix::dot(vd_err ,vd_inter_uav_y));
//              spew("Relative to UAV %d - Velocity error - X: %1.2fm/s   - Y: %1.2fm/s",
//                  ind_uav2, Matrix::dot(vd_deriv_err ,vd_inter_uav_x), Matrix::dot(vd_deriv_err ,vd_inter_uav_y));
//              spew("Relative to the leader - SS deviation - X: %1.2fm/s - Y: %1.2fm/s",
//                  Matrix::dot(vd_surf_uav.get(0, 1, ind_uav2, ind_uav2), vd_inter_uav_x),
//                  Matrix::dot(vd_surf_uav.get(0, 1, ind_uav2, ind_uav2), vd_inter_uav_y));
//            }
          }

          //!---------------------------------------------------------------
          //! Dynamics relative to the Leader - Formation global reference
          //!---------------------------------------------------------------

          int ind_uav_lead = 0;
          //! Regulation of control importance
          vd_weight_gain(ind_uav_lead) = 1;

          //! Computing relative state, from current UAV to leader
          vd_inter_uav_state = md_uav_state.get(0, 5, ind_uav_lead, ind_uav_lead) -
              md_uav_state.get(0, 5, ind_uav+1, ind_uav+1);

          /*
          // Debug
          double vt_uav_state_lead[6] = {md_uav_state(0, ind_uav_lead),
            md_uav_state(1, ind_uav_lead), md_uav_state(2, ind_uav_lead),
            md_uav_state(3, ind_uav_lead), md_uav_state(4, ind_uav_lead), md_uav_state(5, ind_uav_lead)};
          double vt_uav_state_own[6] = {md_uav_state(0, ind_uav+1),
            md_uav_state(1, ind_uav+1), md_uav_state(2, ind_uav+1),
              md_uav_state(3, ind_uav+1), md_uav_state(4, ind_uav+1), md_uav_state(5, ind_uav+1)};
           */

          if (i_formation_frame == IMC::Formation::OP_EARTH_FIXED)
          {
            //! Earth reference frame
            //! - Position
            vd_inter_uav_des_pos = m_formation_pos.get(0, 1, ind_uav, ind_uav);
            vd_err = -vd_inter_uav_state.get(0, 1, 0, 0) - vd_inter_uav_des_pos;
            //! - Velocity
            //     vd_inter_uav_des_vel = [0; 0];
            vd_inter_uav_des_vel(0) = -vd_err(1) * d_form_turnrate;
            vd_inter_uav_des_vel(1) = vd_err(0) * d_form_turnrate;
            //! - Acceleration
            // vd_inter_uav_des_acc = [0; 0];
            vd_inter_uav_des_acc = -vd_err * d_form_turnrate*d_form_turnrate;
          }
          else
          {
            //! Path reference frame
            //! Position
            vd_inter_uav_des_pos = md_rot_formation * vd_form_pos1;
            vd_err = -vd_inter_uav_state.get(0, 1, 0, 0) - vd_inter_uav_des_pos;
            //! - Velocity
            vd_inter_uav_des_vel(0) = vd_inter_uav_state(1) * d_form_turnrate;
            vd_inter_uav_des_vel(1) = -vd_inter_uav_state(0) * d_form_turnrate;
            // vd_inter_uav_des_vel = md_rot_formation * vd_form_vel1;
            //! - Acceleration
            vd_inter_uav_des_acc = vd_inter_uav_state.get(0, 1, 0, 0) * d_form_turnrate*d_form_turnrate;
            // vd_inter_uav_des_acc = md_rot_formation * vd_form_acc1;
          }

          //! Relative position error vector
          d_err_x = vd_err(0);
          d_err_y = vd_err(1);

          //! Relative position error vector
          vd_deriv_err = -vd_inter_uav_state.get(3, 4, 0, 0) - vd_inter_uav_des_vel;
          d_deriv_err_x = vd_deriv_err(0);
          d_deriv_err_y = vd_deriv_err(1);

          /*
          // Debug
          double vt_inter_uav_state1[6] = {vd_inter_uav_state(0, 0), vd_inter_uav_state(1, 0), vd_inter_uav_state(2, 0),
              vd_inter_uav_state(3, 0), vd_inter_uav_state(4, 0), vd_inter_uav_state(5, 0)};
          double vt_inter_uav_des_vel1[6] = {vd_inter_uav_des_vel(0), vd_inter_uav_des_vel(1)};
           */

          //! Maneuvering constrains
          d_accel_max_proj_x = std::abs(vd_body_accel_lim_x(0)) + std::abs(vd_body_accel_lim_y(0));
          d_accel_max_proj_y = std::abs(vd_body_accel_lim_x(1)) + std::abs(vd_body_accel_lim_y(1));

          //! Sliding Surface parameters - Inter-UAV X axis
          if (d_err_x < 0)
          {
            //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim" m/s
            d_c1 = std::max(d_airspeed_max - md_uav_state(3, 0) + m_wind(0), vel_lim);
            d_c2 = 4 * (1+m_acc_safety_marg) * d_c1*d_c1/ (27 * d_accel_max_proj_x);
            // d_err_x_s_conv = std::max(d_err_x, -d_c2);
          }
          else
          {
            //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
            d_c1 = std::min(- d_airspeed_max - md_uav_state(3, 0) + m_wind(0), -vel_lim);
            d_c2 = - 4 * (1+m_acc_safety_marg) * d_c1*d_c1/ (27 * d_accel_max_proj_x);
            // d_err_x_s_conv = std::min(d_err_x, -d_c2);
          }
          //! Sliding Surface parameters - Inter-UAV Y axis
          if (d_err_y < 0)
          {
            //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim" m/s
            d_c3 = std::max(d_airspeed_max - md_uav_state(4, 0) + m_wind(1), vel_lim); //! Avoid negative maximum relative velocities
            d_c4 = 4 * (1+m_acc_safety_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            // d_err_y_s_conv = std::max(d_err_y, -d_c4);
          }
          else
          {
            //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
            d_c3 =  std::min(- d_airspeed_max - md_uav_state(4, 0) + m_wind(1), -vel_lim);
            d_c4 = - 4 * (1+m_acc_safety_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            // d_err_y_s_conv = std::min(d_err_y, -d_c4);
          }

          //! ======= Sliding surface ==============

          //! Sliding surface deviation
          vd_surf_uav.set(0, 1, ind_uav_lead, ind_uav_lead, vd_deriv_err);
          vd_surf_uav(0, ind_uav_lead) -= d_c1 * d_err_x/(d_err_x - d_c2);
          vd_surf_uav(1, ind_uav_lead) -= d_c3 * d_err_y/(d_err_y - d_c4);

          //! ======= Virtual error and feedback linearization ================
          vt_virt_err_uav.set(0, 1, ind_uav_lead, ind_uav_lead,
                              vd_inter_uav_des_acc + md_uav_accel.get(0, 1, ind_uav_lead, ind_uav_lead));
          vt_virt_err_uav(0, ind_uav_lead) -= d_c1 * d_c2 * d_deriv_err_x/((d_err_x - d_c2)*(d_err_x - d_c2));
          vt_virt_err_uav(1, ind_uav_lead) -= d_c3 * d_c4 * d_deriv_err_y/((d_err_y - d_c4)*(d_err_y - d_c4));

          //! Tracking output
          if (b_debug)
          {
            vd_inter_uav_pos = vd_inter_uav_state.get(0, 1, 0, 0);
            d_inter_uav_dist = vd_inter_uav_pos.norm_2();
            //! Computing the rotation matrix - From inter-UAV frame to ground frame
            d_inter_uav_angle = std::atan2(vd_inter_uav_pos(1),
                vd_inter_uav_pos(0));
            d_cos_inter_uav_angle = std::cos(d_inter_uav_angle);
            d_sin_inter_uav_angle = std::sin(d_inter_uav_angle);
            mt_rot[0] = d_cos_inter_uav_angle;
            mt_rot[1] = -d_sin_inter_uav_angle;
            mt_rot[2] = d_sin_inter_uav_angle;
            mt_rot[3] = d_cos_inter_uav_angle;
            md_rot = Matrix(mt_rot, 2, 2);
            vd_inter_uav_x = md_rot.column(0);
            vd_inter_uav_y = md_rot.column(1);

            rel_state = form_monitor->rel_state[ind_uav_lead];
            //! Vehicle identifier;
            rel_state->s_id = "Leader";
            //! Distance between vehicles
            rel_state->dist = d_inter_uav_dist;
            // // ======== Formation perturbation test - Mesh stability =======
            // if (ind_uav == 1)
            //   vd_err += vd_Pert;
            // end
            // // ======== Formation perturbation test - Mesh stability =======
            //! Relative position error norm
            rel_state->err =  vd_err.norm_2();
            //! Inter-vehicle direction vector
            rel_state->rel_dir_x = vd_inter_uav_x(0);
            rel_state->rel_dir_y = vd_inter_uav_x(1);
            //rel_state->rel_dir_z = vd_inter_uav_x(2);
            //! Relative position error - Ground reference frame
            rel_state->err_x = vd_err(0);
            rel_state->err_y = vd_err(1);
            //rel_state->err_z = vd_err(2);
            //! Relative position error - Inter-vehicle reference frame
            rel_state->rf_err_x = Matrix::dot(vd_err ,vd_inter_uav_x);
            rel_state->rf_err_y = Matrix::dot(vd_err, vd_inter_uav_y);
            //rel_state->rf_err_z = Matrix::dot(vd_err, vd_inter_uav_z);
            //! Relative velocity error - Inter-vehicle reference frame
            rel_state->rf_err_vx = Matrix::dot(vd_deriv_err, vd_inter_uav_x);
            rel_state->rf_err_vy = Matrix::dot(vd_deriv_err, vd_inter_uav_y);
            //rel_state->rf_err_vz = Matrix::dot(vd_deriv_err, vd_inter_uav_z);
            //! Deviation from convergence (sliding surface) - Inter-vehicle reference frame
            rel_state->ss_x = Matrix::dot(vd_surf_uav.get(0, 1, ind_uav_lead, ind_uav_lead), vd_inter_uav_x);
            rel_state->ss_y = Matrix::dot(vd_surf_uav.get(0, 1, ind_uav_lead, ind_uav_lead), vd_inter_uav_y);
            //rel_state->ss_z = Matrix::dot(vd_surf_uav.get(0, 1, ind_uav_lead, ind_uav_lead), vd_inter_uav_z);
            //! Inter-vehicle virtual error - Ground reference frame
            rel_state->virt_err_x = vt_virt_err_uav(0, ind_uav_lead);
            rel_state->virt_err_y = vt_virt_err_uav(1, ind_uav_lead);
            //rel_state->virt_err_z = vt_virt_err_uav(2, ind_uav_lead);

            // ========= Spew ===========
//            if (d_time >= m_last_time_spew + 0.5)
//            {
//              spew("---------------------------------------------------");
//              //spew("Relative to the leader - Distance: %1.2fm", d_inter_uav_dist);
//              spew("Relative to the leader - Total position error: %1.2fm", vd_err.norm_2());
//              //spew("Relative to the leader - Position error - North: %1.2fm - East: %1.2fm",
//              //     vd_err(0), vd_err(1));
//              //spew("Relative to the leader - Position error - X: %1.2fm     - Y: %1.2fm",
//              //    Matrix::dot(vd_err ,vd_inter_uav_x), Matrix::dot(vd_err ,vd_inter_uav_y));
//              spew("Relative to the leader - Velocity error - X: %1.2fm/s   - Y: %1.2fm/s",
//                  Matrix::dot(vd_deriv_err ,vd_inter_uav_x), Matrix::dot(vd_deriv_err ,vd_inter_uav_y));
//              spew("Relative to the leader - SS deviation - X: %1.2fm/s - Y: %1.2fm/s",
//                  Matrix::dot(vd_surf_uav.get(0, 1, ind_uav_lead, ind_uav_lead), vd_inter_uav_x),
//                  Matrix::dot(vd_surf_uav.get(0, 1, ind_uav_lead, ind_uav_lead), vd_inter_uav_y));
//            }
          }

          //!-------------------------------------------
          //! Control influence merging
          //!-------------------------------------------


          //! UAV weight on control strategy
          Matrix vd_ctrl_weight = Matrix(m_uav_n+1, 1, 1.0);
          vd_ctrl_weight(0) = k_form_ref;
          vd_ctrl_weight(ind_uav+1) = 0;
          vd_ctrl_weight &= vd_weight_gain;
          vd_ctrl_weight /= sum(vd_ctrl_weight);

          //! Tracking output
          if (b_debug)
          {
            for (unsigned int ind_uav2 = 0; ind_uav2 <= m_uav_n; ++ind_uav2)
            {
              if (ind_uav+1 == ind_uav2)
                continue;
              form_monitor->rel_state[ind_uav2]->ctrl_imp = vd_ctrl_weight(ind_uav2);
            }
          }

          //! Sliding surface data mixing
          Matrix vd_surf = vd_surf_uav * vd_ctrl_weight;
          Matrix vt_virt_err = vt_virt_err_uav * vd_ctrl_weight;

          /*
          // Debug
          double vt_surf2[2] = {vd_surf(0), vd_surf(1)};
          double vt_virt_err2[2] = {vt_virt_err(0), vt_virt_err(1)};
           */

          double d_surf_norm = vd_surf.norm_2();
          Matrix vd_surf_unit = vd_surf/d_surf_norm;

          //!-------------------------------------------
          //! Sliding surface convergence term
          //!-------------------------------------------

          Matrix vd_sat_surf = Matrix(2, 1);
          if (d_ss_bnd_layer < d_surf_norm)
          {
            vd_sat_surf = vd_surf_unit;
//            if (b_debug && d_time >= m_last_time_spew + 0.5)
//            {
//              spew("---------------------------------------------------");
//              spew("Orig: %1.2f - %1.2f, %1.2f!", d_surf_norm, vd_surf(0), vd_surf(1));
//              spew("Sat:  %1.2f - %1.2f, %1.2f!", d_ss_bnd_layer, vd_surf_unit(0), vd_surf_unit(1));
//            }
          }
          else
            vd_sat_surf = vd_surf/d_ss_bnd_layer;
          Matrix vd_surf_conv = transpose(md_rot_ground2yaw)*md_gain_mtx*md_rot_ground2yaw * vd_sat_surf;

          //!-------------------------------------------
          //! Sliding surface unknown disturbance term
          //!-------------------------------------------

          // vd_surf_unkn = (2 * (m_uav_n-1) + k_form_ref) * m_flow_accel_max * vd_surf_unit;

          // vd_surf_unkn1 = ((m_uav_n-1)/(m_uav_n-1+k_form_ref)+1)*...
          //     m_flow_accel_max*vd_surf_unit;

          vd_surf_unit = Matrix(2, 1);

          //! UAVs Uncertainty compensation
          double t_SurfSqr;
          for (unsigned int ind_uav2 = 0; ind_uav2 < m_uav_n; ind_uav2++)
          {
            // Skipping the current UAV index
            if (ind_uav == ind_uav2)
              continue;

            t_SurfSqr = vd_surf_uav(0, ind_uav2+1)*vd_surf_uav(0, ind_uav2+1) +
                vd_surf_uav(1, ind_uav2+1)*vd_surf_uav(1, ind_uav2+1);
            if (t_SurfSqr > 0)
              vd_surf_unit += 2*vd_surf_uav.get(0, 1, ind_uav2+1, ind_uav2+1)*
                  vd_ctrl_weight(ind_uav2+1)/std::sqrt(t_SurfSqr);
          }
          //! Leader - Uncertainty compensation
          t_SurfSqr = vd_surf_uav(0, 0)*vd_surf_uav(0, 0) + vd_surf_uav(1, 0)*vd_surf_uav(1, 0);
          if (t_SurfSqr)
            vd_surf_unit += k_form_ref*vd_surf_uav.get(0, 1, 0, 0)*vd_ctrl_weight(0)/std::sqrt(t_SurfSqr);
          //! Formation - Uncertainty compensation
          Matrix vd_surf_unkn = vd_surf_unit*m_flow_accel_max/(m_uav_n-1+k_form_ref);
          /*
        if (ind_uav == 0)
        {
          spew('Uncertainty component 1: %1.3f, %1.3f\n', vd_surf_unkn1(0), vd_surf_unkn1(1))
          spew('Uncertainty component 2: %1.3f, %1.3f\n', vd_surf_unkn(0), vd_surf_unkn(1))
         }
           */

          //-------------------------------------------
          //! Acceleration command
          //-------------------------------------------

          /*
        t_rot_ground2yaw = {d_cos_heading, d_sin_heading, -d_sin_heading/m_airspeed, d_cos_heading/m_airspeed};
        md_rot_ground2yaw = Matrix(t_rot_ground2yaw, 2, 2);
           */

          // Control vector
          // vd_accel = (vt_virt_err - vd_surf_conv - vd_surf_unkn)/...
          //     (m_uav_n-1+k_form_ref);
          Matrix vd_accel = vt_virt_err - vd_surf_conv - vd_surf_unkn;
          Matrix vd_ctrl = md_rot_ground2yaw*vd_accel;

          /*
          // Debug
          double vt_virt_err1[2] = {vt_virt_err(0), vt_virt_err(1)};
          double vt_surf_conv1[2] = {vd_surf_conv(0), vd_surf_conv(1)};
          double vt_surf_unkn1[2] = {vd_surf_unkn(0), vd_surf_unkn(1)};
          double vt_accel1[2] = {vd_accel(0), vd_accel(1)};
          double vt_ctrl2[2] = {vd_ctrl(0), vd_ctrl(1)};
           */

          //-------------------------------------------
          //! Altitude control
          //-------------------------------------------

          (*vd_cmd)(2, m_uav_ind) = m_formation_pos(2, ind_uav) + md_uav_state(2, 0);

          //-------------------------------------------
          //! Speed control
          //-------------------------------------------

          double d_accel_x_cmd = std::min(std::max(vd_ctrl(0), -m_accel_lim_x), m_accel_lim_x);
          vd_ctrl(0) = d_accel_x_cmd;
          (*vd_cmd)(1) += d_time_step * d_accel_x_cmd;

          /*
          // Debug
          double vt_ctrl1[2] = {vd_ctrl(0), vd_ctrl(1)};
           */

          //-------------------------------------------
          //! Course control
          //-------------------------------------------

          // Bank command
          (*vd_cmd)(0) = std::atan(vd_ctrl(1)/m_g); // Desired bank

          /*
          // Debug
          double vt_cmd1[3] = {(*vd_cmd)(0), (*vd_cmd)(1), (*vd_cmd)(2)};
           */

          //===========================================
          // Control limits
          //===========================================

          //! Velocity limits
          (*vd_cmd)(1) = trimValue((*vd_cmd)(1), d_airspeed_min, d_airspeed_max);

          //! Altitude limits
          (*vd_cmd)(2) = trimValue((*vd_cmd)(2), m_args.alt_min, m_args.alt_max);

          //! Bank limits
          (*vd_cmd)(0) = trimValue((*vd_cmd)(0), -m_bank_lim, m_bank_lim);
          vd_ctrl(1) = m_g*std::tan((*vd_cmd)(0)); // Real lateral acceleration command

          /*
          // Debug
          double vt_cmd2[3] = {(*vd_cmd)(0), (*vd_cmd)(1), (*vd_cmd)(2)};
          inf("Debugging");
           */

          //===========================================
          // Log data
          //===========================================

          //! Tracking output
          // ========= Spew ===========
          if (b_debug)
          {
//            if (d_time >= m_last_time_spew + 0.5)
//            {
//              spew("---------------------------------------------------");
//              spew("Long accel: %1.2fm/s/s - Lat accel: %1.2fm/s/s", vd_ctrl(0), vd_ctrl(1));
//              spew("Sliding surface deviation - North: %1.2fm/s - East: %1.2fm/s", vd_surf(0), vd_surf(1));
//              spew("---------------------------------------------------");
//              m_last_time_spew = d_time;
//            };

            //! Commanded acceleration computed by the formation controller.
            //! (Constrained by the vehicle operational limits)
            form_monitor->ax_cmd = vd_ctrl(0);
            form_monitor->ay_cmd = vd_ctrl(1);
            //form_monitor->az_cmd = vd_ctrl(2);
            //! Desired acceleration computed by the formation controller.
            form_monitor->ax_des = vd_accel(0);
            form_monitor->ay_des = vd_accel(1);
            //form_monitor->az_des = vd_accel(2);
            //! Formation combined virtual error.
            //! (Component of the vehicle desired acceleration)
            form_monitor->virt_err_x = vt_virt_err(0);
            form_monitor->virt_err_y = vt_virt_err(1);
            //form_monitor->virt_err_z = vt_virt_err(2);
            //! Formation combined sliding surface feedback.
            //! (Component of the vehicle desired acceleration)
            form_monitor->surf_fdbk_x = -vd_surf_conv(0);
            form_monitor->surf_fdbk_y = -vd_surf_conv(1);
            //form_monitor->surf_fdbk_z = -vd_surf_conv(2);
            //! Dynamics uncertainty compensation.
            //! (Component of the vehicle desired acceleration)
            form_monitor->surf_unkn_x = -vd_surf_unkn(0);
            form_monitor->surf_unkn_y = -vd_surf_unkn(1);
            //form_monitor->surf_unkn_z = -vd_surf_unkn(2);
            //! Combined deviation from convergence.
            //! (Total sliding surface value)
            form_monitor->ss_x = vd_surf(0);
            form_monitor->ss_y = vd_surf(1);
            //form_monitor->ss_z = vd_surf(2);
          }
        }
      };
    }
  }
}

DUNE_TASK
