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

#define vel_lim 0.5

namespace Maneuver
{
  namespace VehicleFormation
  {
    namespace FormCollAvoid
    {
      using DUNE::Simulation::UAVSimulation;
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
        double leader_frequency;
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
        double speed_max;
        double speed_min;
        double bank_lim;
        double alt_max;
        double alt_min;
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
        // Wind average
        unsigned int wind_average_window;
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

        // Controller flags
        bool m_param_update_first;
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
        //! Synchronization, simulation and control time variables
        Matrix m_last_state_update;
        Matrix m_last_state_estim;
        Matrix m_last_simctrl_update;
        double m_last_leader_output;
        //! Last time debug information was shown
        double m_last_time_verb_task;
        double m_last_time_verb_ctrlactiv;
        double m_last_time_verb_leadertrace;
        double m_last_time_verb_leaderspew;
        double m_last_time_verb_formctrl;
        double m_timestep_trace;
        double m_timestep_spew;

        //! System state variables
        Matrix m_vehicle_state;
        Matrix m_vehicle_accel;
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
        double m_speed_cmd_leader;
        uint8_t m_speed_units_leader;
        //! Leader commanded altitude
        double m_alt_cmd_leader;
        uint8_t m_alt_units_leader;
        //! Vehicle command limits
        double m_bank_lim;
        double m_speed_min;
        double m_speed_max;
        double m_alt_min;
        double m_alt_max;
        //! Leader command limits
        double m_leader_bank_lim;
        double m_leader_speed_min;
        double m_leader_speed_max;
        double m_leader_alt_min;
        double m_leader_alt_max;

        //! Controller parameters
        IMC::FormationControlParams m_formation_ctrl_params;
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

        //! Formation configuration
        unsigned int m_uav_n;
        unsigned int m_uav_ind;
        Systems m_uav_id;
        Systems m_uav_id_last;
        std::vector<std::string> m_formation_systems;
        unsigned int m_formation_frame;
        Matrix m_formation_pos;
        IMC::PlanControl m_current_plan;

        //! Process logic control variables
        bool m_ctrl_active;
        bool m_team_plan_init;
        bool m_team_leader_init;
        bool m_team_state_init;
        bool m_valid_airspeed;
        std::vector<bool> m_vehicle_state_flag;

        //! Simulation process frequency
        double m_frequency;
        double m_timestep_sim;
        double m_timestep_ctrl;
        double m_timestep_leader;

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
          m_param_update_first(true),
          //m_models(NULL),
          m_model(NULL),
          m_position(6, 1, 0.0),
          m_velocity(6, 1, 0.0),
          m_last_leader_output(std::min(-1.0, Clock::get())),
          m_last_time_verb_task(std::min(-1.0, Clock::get())),
          m_last_time_verb_ctrlactiv(std::min(-1.0, Clock::get())),
          m_last_time_verb_leadertrace(std::min(-1.0, Clock::get())),
          m_last_time_verb_leaderspew(std::min(-1.0, Clock::get())),
          m_last_time_verb_formctrl(std::min(-1.0, Clock::get())),
          m_timestep_trace(2.0),
          m_timestep_spew(0.5),
          m_vehicle_state(12, 1, 0.0),
          m_vehicle_accel(3, 1, 0.0),
          m_airspeed(0.0),
          m_wind(3, 1, 0.0),
          m_wind_avg_x(new Math::MovingAverage<fp64_t>(300)),
          m_wind_avg_y(new Math::MovingAverage<fp64_t>(300)),
          m_wind_avg_z(new Math::MovingAverage<fp64_t>(300)),
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
          m_leader_bank_lim(0.0),
          m_leader_speed_min(0.0),
          m_leader_speed_max(0.0),
          m_leader_alt_min(0.0),
          m_leader_alt_max(0.0),
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
          m_formation_frame(IMC::Formation::OP_EARTH_FIXED),
          m_formation_pos(3, 1, 0.0),
          m_ctrl_active(false),
          m_team_plan_init(false),
          m_team_leader_init(false),
          m_team_state_init(false),
          m_valid_airspeed(false),
          m_frequency(0.0),
          m_timestep_sim(0.0),
          m_timestep_ctrl(0.0),
          m_timestep_leader(0.0),
          m_debug(false),
          m_form_monitor(NULL),
          m_alias_id(UINT_MAX),
          m_leader_id(UINT_MAX)
        {
          // Definition of configuration parameters.
//          paramActive(Tasks::Parameter::SCOPE_MANEUVER,
//                      Tasks::Parameter::VISIBILITY_DEVELOPER);

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
          .units(Units::Hertz)
          .description("Vehicles motion simulation frequency.");

          param("Control Frequency", m_args.ctrl_frequency)
          .defaultValue("20.0")
          .units(Units::Hertz)
          .description("Frequency of simulated vehicles control execution.");

          param("Leader Output Frequency", m_args.leader_frequency)
          .defaultValue("20.0")
          .units(Units::Hertz)
          .description("Frequency at which the virtual leader state is sent to the message bus.");

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
          .units(Units::Meter)
          .description("Aircraft Safety Distance");

          param("Deconfliction Offset", m_args.deconfliction_offset)
          .defaultValue("7.0")
          .units(Units::Meter)
          .description("Aircraft Deconfliction Distance Offset");

          param("Acceleration Safety Margin", m_args.acc_safety_marg)
          .defaultValue("0.3")
          .description("Acceleration safety margin");

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
          .description("Vehicle longitudinal acceleration limit");

          param("Vertical Slope Limit", m_args.l_vert_slope)
          .defaultValue("0.0")
          .units(Units::None)
          .description("Vertical slope limit to simulate altitude dynamics");

          param("Default Altitude", m_args.default_alt)
          .defaultValue("147.3")
          .units(Units::Meter)
          .description("Initial state WGS-84 geoid altitude");

          param("Default Speed", m_args.default_speed)
          .defaultValue("18.0")
          .units(Units::MeterPerSecond)
          .description("Initial state airspeed");

          param("Wind Average Window", m_args.wind_average_window)
          .defaultValue("180.0")
          .units(Units::Second)
          .description("Window time length for the wind average");

          param("Debug", m_args.debug)
          .defaultValue("false")
          .description("Controller in debug mode");

          // Message binding
          bind<IMC::LeaderState>(this);
          bind<IMC::Formation>(this);
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
          spew("Starting the parameters update.");

          //==========================================
          // General parameters treatment
          //==========================================
          // Debug flag - for control performance monitoring
          m_debug = m_args.debug;
          // Task update frequency
          m_frequency = this->getFrequency();
          // Simulation frequency
          if (m_args.sim_frequency == 0.0)
            m_timestep_sim = 1/m_frequency;
          else
            m_timestep_sim = 1/m_args.sim_frequency;
          // Control frequency
          m_timestep_ctrl = 1/m_args.ctrl_frequency;
          // Leader state output frequency (used for the path tracking)
          m_timestep_leader = 1/m_args.leader_frequency;
          // Vehicle maneuverability constraints
          m_bank_lim = Angles::radians(m_args.bank_lim);
          m_speed_min = m_args.speed_min;
          m_speed_max = m_args.speed_max;
          m_alt_min = m_args.alt_min;
          m_alt_max = m_args.alt_max;
          if (m_param_update_first)
          {
            // Leader maneuverability constraints
            m_leader_bank_lim = m_bank_lim;
            m_leader_speed_min = m_args.speed_min;
            m_leader_speed_max = m_args.speed_max;
            m_leader_alt_min = m_args.alt_min;
            m_leader_alt_max = m_args.alt_max;
            // Home reference latitude, longitude, and height
            m_llh_ref_pos[0] = 0.0;
            m_llh_ref_pos[1] = 0.0;
            m_llh_ref_pos[2] = 0.0;
            // Airspeed value initialization
            m_airspeed = m_args.default_speed;
            // Leader commanded true airspeed
            m_speed_cmd_leader = m_airspeed;
            m_airspeed_cmd.value = m_speed_cmd_leader;
            // Leader commanded altitude
            m_alt_cmd_leader = m_args.default_alt + m_leader_alt_min;
            m_altitude_cmd.value = m_alt_cmd_leader;
          }

          //==========================================
          // Check the formation parameters
          //==========================================
          spew("onUpdateParameters - 1");
          if (m_uav_id.empty())
          {
            if (!m_param_update_first)
              war("Formation vehicle list is empty!");
            m_uav_id.push_back(getSystemId());
            m_uav_n = 1;
            m_uav_ind = 0;
            m_formation_pos = Matrix(3, 1, 0.0);
          }

          //==========================================
          // Set controller gains
          //==========================================
          spew("onUpdateParameters - 2");
          debug("Controller parameters definition.");
          // Output the controller parameter, if changed, and the controller evaluation data
          if (paramChanged(m_args.k_longitudinal) ||
              paramChanged(m_args.k_lateral) ||
              paramChanged(m_args.k_boundary) ||
              paramChanged(m_args.k_leader) ||
              paramChanged(m_args.k_deconfliction) ||
              paramChanged(m_args.flow_accel_max) ||
              paramChanged(m_args.safe_dist) ||
              paramChanged(m_args.deconfliction_offset) ||
              paramChanged(m_args.acc_safety_marg) ||
              paramChanged(m_args.l_accel_x))
          {
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
            if (m_debug)
            {
              dispatchFormationParameters();

              // Controller evaluation data
              if (!m_mean_first)
              {
                formationEvaluation();
                m_mean_first = true;
              }
            }
          }

          //==========================================
          // Set the leader vehicle model parameters
          //==========================================
          spew("onUpdateParameters - 3");
          if (m_param_update_first)
          {
            // Model initialization
            debug("Formation leader model initialization");
            // - State  and control parameters initialization
            m_model = new DUNE::Simulation::UAVSimulation(*this,
                m_position, m_velocity, m_args.c_bank, m_args.c_speed);
            // - Commands initialization
            m_model->command(0, m_speed_cmd_leader, -m_alt_cmd_leader);
          }
          // ToDo - Update with "DynamicsSimParam" message for the leader
          // - State  and control parameters definition
          if (paramChanged(m_args.c_bank) || paramChanged(m_args.c_speed))
            m_model->setCtrl(m_args.c_bank, m_args.c_speed);
          // - Limits definition
          if (paramChanged(m_args.l_bank_rate))
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          m_model->setAccelLim(m_accel_lim_x);
          // - Simulation type
          if (paramChanged(m_args.sim_type))
            m_model->m_sim_type = m_args.sim_type;

          //==========================================
          // Simulation model initialization
          //==========================================
          spew("onUpdateParameters - 4");
          // Check if the formation composition changed
          // Reinitialize the simulation models if so
          // ToDo - Check - data reallocation logic to keep the data from the remaining vehicles
          bool b_formation_change = true;
          unsigned int t_uav_n = m_uav_id_last.size();
          if (!m_param_update_first)
          {
            if (t_uav_n == m_uav_n)
            {
              b_formation_change = false;
              for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ind_uav++)
                if (m_uav_id_last[ind_uav] != m_uav_id[ind_uav])
                  b_formation_change = true;
            }
            else
              b_formation_change = true;
          }
          if (b_formation_change)
          {
            m_uav_id_last = m_uav_id;
            //! Initialize the team vehicles' models
            debug("Vehicles state and command vectors initialization");
            m_team_state_init = false;

            //! Save existing vehicles state
            Matrix t_vehicle_state = m_vehicle_state;
            std::vector<bool> t_vehicle_state_flag = m_vehicle_state_flag;
            Matrix t_vehicle_accel = m_vehicle_accel;
            Matrix t_uav_ctrl = m_uav_ctrl;
            Matrix t_last_state_update = m_last_state_update;
            Matrix t_last_state_estim = m_last_state_estim;
            Matrix t_last_simctrl_update = m_last_simctrl_update;
            std::vector<UAVSimulation*> t_models = m_models;

            // Keep the leader data
            m_vehicle_state.resizeAndKeep(12, 1);
            m_vehicle_accel.resizeAndKeep(3, 1);
            m_last_state_update.resizeAndKeep(1, 1);
            m_last_state_estim.resizeAndKeep(1, 1);

            //! Initialize vehicles state
            m_vehicle_state.resizeAndKeep(12, m_uav_n+1);
            m_vehicle_state_flag.clear();
            for (unsigned int uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
              m_vehicle_state_flag.push_back(false);
            m_vehicle_accel.resizeAndKeep(3, m_uav_n+1);
            //! Initialize vehicles commands
            m_uav_ctrl = DUNE::Math::Matrix(3, m_uav_n, 0.0);
            //! Start the team vehicles synchronization, simulation and control time
            m_last_state_update.resizeAndKeep(m_uav_n+1, 1);
            m_last_state_estim.resizeAndKeep(m_uav_n+1, 1);
            m_last_state_estim.set(1, m_uav_n, 0, 0, Matrix(m_uav_n, 1, Time::Clock::getSinceEpoch()));
            m_last_simctrl_update = Matrix(m_uav_n, 1, Time::Clock::getSinceEpoch());

            //! Initialize the simulated vehicles models
            debug("Simulated vehicles models initialization");
            UAVSimulation* model;
            m_models.clear();
            std::vector<bool> t_keep_data;
            for (unsigned int ind_uav2 = 0; ind_uav2 < t_uav_n; ++ind_uav2)
              t_keep_data.push_back(false);
            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
            {
              bool remaining_vehicle = false;
              // Data reallocation to keep the data from the remaining vehicles
              if (!m_param_update_first)
                for (unsigned int ind_uav2 = 0; ind_uav2 < t_uav_n; ++ind_uav2)
                {
                  if (m_uav_id_last[ind_uav2] == m_uav_id[ind_uav])
                  {
                    remaining_vehicle = true;
                    t_keep_data[ind_uav2] = true;
                    m_vehicle_state.set(0, 11, ind_uav+1, ind_uav+1,
                                        t_vehicle_state.get(0, 11, ind_uav2+1, ind_uav2+1));
                    m_vehicle_state_flag[ind_uav] = t_vehicle_state_flag[ind_uav2];
                    m_vehicle_accel.set(0, 2, ind_uav+1, ind_uav+1,
                                    t_vehicle_accel.get(0, 2, ind_uav2+1, ind_uav2+1));
                    m_uav_ctrl.set(0, 2, ind_uav, ind_uav,
                                   t_uav_ctrl.get(0, 2, ind_uav2, ind_uav2));
                    m_last_state_update(ind_uav+1) = t_last_state_update(ind_uav2+1);
                    m_last_state_estim(ind_uav+1) = t_last_state_estim(ind_uav2+1);
                    m_last_simctrl_update(ind_uav) = t_last_simctrl_update(ind_uav2);
                    m_models.push_back(t_models[ind_uav2]);
                    debug("Simulated vehicle model maintained for vehicle: %s",
                        resolveSystemId(m_uav_id[ind_uav]));
                    break;
                  }
                }
              if (remaining_vehicle)
                continue;

              //! - State  and control parameters initialization
              model = new DUNE::Simulation::UAVSimulation(*this,
                  m_formation_pos.get(0, 2, ind_uav, ind_uav).vertCat(m_position.get(3, 5, 0, 0)),
                  m_velocity, m_args.c_bank, m_args.c_speed);
              //! - Simulation type
              model->m_sim_type = m_args.sim_type;
              //! - Commands initialization
              model->command(0, m_speed_cmd_leader, -m_alt_cmd_leader);
              //! - Limits definition
              if (m_args.l_bank_rate > 0)
                model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
              if (m_args.l_accel_x > 0)
                model->setAccelLim(m_args.l_accel_x);
              //! Add model to the models vector
              m_models.push_back(model);
              debug("Simulated vehicle model initialized for vehicle %d.", ind_uav);
            }

            // Clean missing vehicles data
            for (unsigned int ind_uav2 = 0; ind_uav2 < t_uav_n; ++ind_uav2)
              if (!t_keep_data[ind_uav2])
                delete t_models[ind_uav2];
          }

          //==========================================
          // Set messages system source:
          // Main system alias identification and leader identification
          //==========================================
          spew("onUpdateParameters - 5");
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
                war("Source system alias - No system found with designation '%s'.",
                    m_args.src_alias.c_str());
                m_alias_id = UINT_MAX;
              }
            }
            else
              m_alias_id = UINT_MAX;
          }

          //! Set leader system id
          if (paramChanged(m_args.leader_alias))
          {
            if (!m_args.leader_alias.empty())
            {
              // Resolve systems.
              try
              {
                m_leader_id = resolveSystemName(m_args.leader_alias);
                inf("Leader output defined for system '%s' with id: %u", m_args.leader_alias.c_str(), m_leader_id);
              }
              catch (...)
              {
                err("Leader system name - No system found with designation '%s'.", m_args.leader_alias.c_str());
              }
            }
            else
              err("Leader system name - No system found with designation '%s'.", m_args.leader_alias.c_str());
          }

          //==========================================
          // Monitoring variables initialization
          //==========================================
          spew("onUpdateParameters - 6");
          //! Initialize the formation monitor message
          if (m_debug)
          {
            if (m_form_monitor == NULL)
              m_form_monitor = new FormMonitor;
            RelState* rel_state;
            if (!m_form_monitor->rel_state.empty())
            {
              for (unsigned int ind_uav = 0; ind_uav < m_form_monitor->rel_state.size(); ++ind_uav)
                delete m_form_monitor->rel_state[ind_uav];
              m_form_monitor->rel_state.clear();
            }
            for (unsigned int ind_uav = 0; ind_uav <= m_uav_n; ++ind_uav)
            {
              rel_state = new RelState();
              m_form_monitor->rel_state.push_back(rel_state);
            }
          }

          //==========================================
          // Wind average setup
          //==========================================
          unsigned int window_size;
          if (m_args.wind_average_window > 0)
            window_size = m_args.wind_average_window;
          else
          {
            war("Wind average window length parameter is too low: 0");
            window_size = 120;
          }
          *m_wind_avg_x = Math::MovingAverage<fp64_t>(window_size);
          *m_wind_avg_y = Math::MovingAverage<fp64_t>(window_size);
          *m_wind_avg_z = Math::MovingAverage<fp64_t>(window_size);

          m_param_update_first = false;
          debug("Ending the parameters update.");
        }

        void
        onEntityResolution(void)
        {
          spew("Entity resolution.");

          // Initialize the PlanControl message plan id
          m_current_plan.plan_id = "";

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
//          for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
//            Memory::clear(m_form_monitor->rel_state[ind_uav]);
//          Memory::clear(m_form_monitor);
        }

        void
        onRequestActivation(void)
        {
          if (!m_team_leader_init)
            return;

          // Check if the message is from the same system leader
          //if (msg->getSource() != m_leader_id)
          //{
            // Send a PlanControl message to start the formation control plan
            // This is a resend in the vehicle where the coordinator is running
            // to make sure all the virtual leaders maneuver starting points are the same
            // ToDo - Set the maneuver start point directly
            m_current_plan.op = IMC::PlanControl::PC_START;
            dispatchLeader(&m_current_plan);
            inf("Formation control plan - Start requested!");
          //}

          // Controller parameters
          if (m_debug)
            dispatchFormationParameters();

          spew("Activating the formation controller");
          isControlActive();
        }

        void
        onRequestDeactivation(void)
        {
          m_team_leader_init = false;

          // Controller parameters
          if (m_debug)
          {
            formationEvaluation();
            m_mean_first = false;
          }

          spew("Deactivating the formation controller");
          isControlActive();
        }

        void
        consume(const IMC::LeaderState* msg)
        {
          // Set leader state
          if (msg->op == IMC::LeaderState::OP_SET)
          {
//            // Check if the system is the intended destination of the state
//            if (msg->getDestination() != ((m_alias_id != UINT_MAX) ? m_alias_id : getSystemId()))
//            {
//              trace("LeaderState rejected (destination system: %s)", resolveSystemId(msg->getDestination()));
//              return;
//            }

            debug("LeaderState received!");
            setLeaderState(msg);
          }
        }

        void
        consume(const IMC::Formation* msg)
        {
//          // Check if the message is from the system itself
//          if (((m_alias_id != UINT_MAX)?m_alias_id:getSystemId()) == msg->getSource())
//          {
//            trace("Formation message rejected! - Source is the coordinator itself.");
//            return;
//          }

          if (msg->type == IMC::Formation::FC_REQUEST)
          {
            m_current_plan.type = IMC::PlanControl::PC_REQUEST;
            m_current_plan.plan_id = msg->plan_id;
            m_current_plan.arg.clear();
            m_current_plan.setSourceEntity(getEntityId());
            m_current_plan.setDestination(getSystemId());

            if (msg->op == IMC::Formation::OP_START)
            {
              inf("Formation activation request received!");

              // Update the controller configuration
              m_formation_frame = msg->reference_frame;
              unsigned int uav_ind = 0;
              m_uav_id.clear();
              m_formation_systems.clear();
              m_formation_pos.~Matrix();
              for (IMC::MessageList<IMC::VehicleFormationParticipant>::const_iterator it =
                  msg->participants.begin(); it != msg->participants.end(); it++ )
              {
                m_uav_id.push_back((*it)->vid);
                //m_formation_systems.push_back(static_cast<std::ostringstream*>(
                //    &(std::ostringstream() << resolveSystemId(m_uav_id[uav_ind])) )->str());
                m_formation_systems.push_back(resolveSystemId(m_uav_id[uav_ind]));
                m_formation_pos.resizeAndKeep(3, uav_ind+1);
                m_formation_pos(0, uav_ind) = (*it)->off_x;
                m_formation_pos(1, uav_ind) = (*it)->off_y;
                m_formation_pos(2, uav_ind) = (*it)->off_z;
                m_uav_n = ++uav_ind;
              }
              m_leader_bank_lim = msg->leader_bank_lim;
              m_leader_speed_min = msg->leader_speed_min;
              m_leader_speed_max = msg->leader_speed_max;
              m_leader_alt_min = msg->leader_alt_min;
              m_leader_alt_max = msg->leader_alt_max;

              inf("Formation vehicles' list:");
              // Process formation vehicle list
              if (m_uav_id.empty())
              {
                war("Formation vehicle list is empty!");
                m_uav_id.push_back(getSystemId());
                m_uav_n = 1;
                m_uav_ind = 0;
                m_formation_pos = Matrix(3, 1, 0.0);
              }
              bool is_in_formation = false;
              for (uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
              {
                inf("UAV %u: %s", uav_ind, resolveSystemId(m_uav_id[uav_ind]));
                // Set the current UAV index according to the group definition
                if (m_uav_id[uav_ind] == this->getSystemId())
                {
                  m_uav_ind = uav_ind;
                  is_in_formation = true;
                }
              }

              inf("Formation vehicles' positions matrix:");
              for (uav_ind = 0; uav_ind < m_uav_n; uav_ind++)
                inf("UAV %u: [x=%1.1f, y=%1.1f, z=%1.1f]", uav_ind,
                    m_formation_pos(0, uav_ind), m_formation_pos(1, uav_ind), m_formation_pos(2, uav_ind));

              // Vehicle quantity considered in the formation
              debug("Number of UAVs -> %d", m_uav_n);
              debug("Current UAV -> %d", m_uav_ind);

              if (is_in_formation)
              {
                // Activate the formation controller in the current system
                onUpdateParameters();
                requestActivation();

                //              // ToDo - Change the Path Control parameters to control the virtual leader
                //              IMC::SetEntityParameters sep;
                //              IMC::EntityParameter ep;
                //              // Request formation controller activation
                //              ep.name = "Active";
                //              ep.value = "true";
                //              sep.params.push_back(ep);
                //              // Request path controller activation
                //              sep.name = "Path Control Leader";
                //              dispatchAlias(&sep);
                //              sep.name = "Path Control Coordinator";
                //              dispatchLeader(&sep);
              }
              else
              {
                war("Vehicle is not in the formation list!");
                m_uav_id.clear();
                m_uav_id.push_back(getSystemId());
                m_uav_n = 1;
                m_uav_ind = 0;
                m_formation_pos = Matrix(3, 1, 0.0);

                if (isActive())
                {
                  inf("Formation deactivation request received!");
                  // Deactivate the formation controller in the current system
                  requestDeactivation();

                  // Check if the message is from the same system leader
                  if (msg->getSource() != m_leader_id)
                  {
                    inf("Formation deactivation request received!");
                    // Send a PlanControl message to stop the formation control plan
                    m_current_plan.op = IMC::PlanControl::PC_STOP;
                    dispatchLeader(&m_current_plan);
                    inf("Formation control plan - Stop requested!");
                  }
                }
              }
            }
            else if (msg->op == IMC::Formation::OP_STOP)
            {
              inf("Formation deactivation request received!");
              // Deactivate the formation controller in the current system
              requestDeactivation();

              // Check if the message is from the same system leader
              if (msg->getSource() != m_leader_id)
              {
                // Send a PlanControl message to stop the formation control plan
                m_current_plan.op = IMC::PlanControl::PC_STOP;
                dispatchLeader(&m_current_plan);
                inf("Formation control plan - Stop requested!");
              }
            }
          }
        }

        void
        consume(const IMC::PlanControl* msg)
        {
          //! Check if it is a plan execution request
          if (msg->type != IMC::PlanControl::PC_REQUEST)
            return;

//          //! Check if the vehicle is the intended destination of the plan
//          if (msg->getDestination() != getSystemId())
//          {
//            trace("PlanControl rejected (destination system: %s)", resolveSystemId(msg->getDestination()));
//            return;
//          }

          // Request deactivation the formation controller if there is
          // a STOP request or a start request for a different plan
          if (isActive() && (msg->op == IMC::PlanControl::PC_STOP ||
              (msg->op == IMC::PlanControl::PC_START && msg->plan_id.compare(m_current_plan.plan_id) != 0)))
            requestDeactivation();
        }

        void
        consume(const IMC::IndicatedSpeed* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

          // Set commanded airspeed starting point for the current vehicle
          if (!isActive() || !m_valid_airspeed)
          {
            m_uav_ctrl(1, m_uav_ind) = msg->value;
            m_valid_airspeed = true;
            spew("Valid airspeed received.");
          }
        }

        void
        consume(const IMC::EstimatedStreamVelocity* msg)
        {
          if (msg->getSource() != getSystemId())
            return;

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
            m_vehicle_state.set(0, 11, 0, 0, Matrix(t_leader, 12, 1));
            m_model->setPosition(m_vehicle_state.get(0, 2, 0, 0).vertCat(m_vehicle_state.get(6, 8, 0, 0)));
            m_model->setVelocity(m_vehicle_state.get(3, 5, 0, 0).vertCat(m_vehicle_state.get(9, 11, 0, 0)));

            //! Update leader commands
            Matrix vd_vel2wind = m_vehicle_state.get(3, 5, 0, 0) - m_wind;
            m_model->command(m_vehicle_state(6, 0), vd_vel2wind.norm_2(), m_vehicle_state(2, 0));

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
            double mt_vehicle_accel[12] = {msg->x, msg->y, msg->z};
            m_vehicle_accel.set(0, 2, m_uav_ind+1, m_uav_ind+1, Matrix(mt_vehicle_accel, 3, 1));
          }
        }

        void
        consume(const IMC::DesiredRoll* msg)
        {
          //! Get leader vehicle commanded roll
          if (!isActive())
          {
            //trace("DesiredRoll rejected - Formation controller is not active.");
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
            trace("DesiredRoll rejected (from system '%s' and entity '%s')",
                resolveSystemId(msg->getSource()),
                resolveEntity(msg->getSourceEntity()).c_str());
            return;
          }

          //! Check that the command is a real value
          if (Math::isNaN(msg->value))
          {
            war("DesiredRoll rejected - Commanded value is not a number!");
            return;
          }

          m_model->commandBank(trimValue(msg->value, -m_leader_bank_lim, m_leader_bank_lim));

          // ========= Debug ===========
          spew("DesiredRoll accepted (%1.2fdeg), assumed (%1.2fdeg) - from system '%s' and entity '%s'",
              DUNE::Math::Angles::degrees(msg->value),
              DUNE::Math::Angles::degrees(m_model->getBankCmd()),
              resolveSystemId(msg->getSource()),
              resolveEntity(msg->getSourceEntity()).c_str());
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          //! Get leader vehicle commanded airspeed
          if (!isActive())
          {
            //trace("DesiredSpeed rejected - Formation controller is not active.");
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
            trace("DesiredSpeed rejected (from system '%s' and entity '%s')",
                resolveSystemId(msg->getSource()),
                resolveEntity(msg->getSourceEntity()).c_str());
            return;
          }

          //! Check that the command is a real value
          if (Math::isNaN(msg->value))
          {
            war("DesiredSpeed rejected - Commanded value is not a number!");
            return;
          }

          m_speed_units_leader = msg->speed_units;
          if (m_speed_units_leader != IMC::SUNITS_METERS_PS)
          {
            war("DesiredSpeed rejected - units are not in m/s");
            return;
          }

          m_speed_cmd_leader = trimValue(msg->value, m_leader_speed_min,  m_leader_speed_max);
          m_model->commandAirspeed(m_speed_cmd_leader);

          // ========= Debug ===========
          spew("DesiredSpeed accepted (%1.2fm/s), assumed (%1.2fm/s) - from system '%s' and entity '%s'",
              msg->value, m_speed_cmd_leader,
              resolveSystemId(msg->getSource()),
              resolveEntity(msg->getSourceEntity()).c_str());
        }

        void
        consume(const IMC::DesiredZ* msg)
        {
          //! Check if system is active
          if (!isActive())
          {
            //trace("DesiredZ rejected - Formation controller is not active.");
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
            trace("DesiredZ rejected (from system '%s' and entity '%s')",
                resolveSystemId(msg->getSource()),
                resolveEntity(msg->getSourceEntity()).c_str());
            return;
          }

          //! Check that the command is a real value
          if (Math::isNaN(msg->value))
          {
            war("DesiredZ rejected - Commanded value is not a number!");
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
            m_alt_cmd_leader = m_leader_alt_min;
          m_model->commandAlt(trimValue(m_alt_cmd_leader, m_leader_alt_min, m_leader_alt_max));

          // ========= Debug ===========
          spew("DesiredZ accepted (%1.2fm), assumed (%1.2fm) - from system '%s' and entity '%s'",
              msg->value, m_alt_cmd_leader,
              resolveSystemId(msg->getSource()),
              resolveEntity(msg->getSourceEntity()).c_str());
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          //! Declaration
          Matrix vd_cmd = Matrix(3, 1);

          spew("EstimatedState received from vehicle %s", resolveSystemId(msg->getSource()));
          if (msg->getSource() == getSystemId())
          {
            spew("Starting own EstimatedState");
            //! Update the time control variables
            if (m_last_state_update(m_uav_ind+1) > msg->getTimeStamp())
            {
              war("Old EstimatedState received from vehicle %s. (Received: %1.2f < Current: %1.2f)",
                  resolveSystemId(msg->getSource()), msg->getTimeStamp(), m_last_state_update(m_uav_ind+1));
              return;
            }
            m_last_state_update(m_uav_ind+1) = msg->getTimeStamp();
            m_last_state_estim(m_uav_ind+1) = msg->getTimeStamp();

            m_vehicle_state_flag[m_uav_ind] = true;
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
            m_vehicle_state.set(0, 11, m_uav_ind+1, m_uav_ind+1, Matrix(vt_uav_state, 12, 1));
            // ToDo - Check the difference between the vehicle real and simulated state

            //! - Update own vehicle simulation model
            m_models[m_uav_ind]->setPosition(m_vehicle_state.get(0, 2, m_uav_ind+1, m_uav_ind+1).
                               vertCat(m_vehicle_state.get(6, 8, m_uav_ind+1, m_uav_ind+1)));
            m_models[m_uav_ind]->setVelocity(m_vehicle_state.get(3, 5, m_uav_ind+1, m_uav_ind+1).
                               vertCat(m_vehicle_state.get(9, 11, m_uav_ind+1, m_uav_ind+1)));

            spew("Starting own EstimatedState control");
            // Check if the control is active
            if (!isControlActive())
              return;
            // Check if the commands should be updated
            if (m_last_simctrl_update(m_uav_ind) + m_timestep_ctrl > msg->getTimeStamp())
              return;

            //===========================================
            //! Team prediction update
            //===========================================

            //! Update team simulated state for standard time periods
            teamPeriodicUpdate(msg->getTimeStamp());
            teamUnevenUpdate(msg->getTimeStamp());

            //===========================================
            //! Control computation
            //===========================================

            vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, m_uav_ind, m_uav_ind));
            spew("Own control computation");
            formationControl(m_vehicle_state, m_vehicle_accel, m_uav_ind,
                m_timestep_ctrl, &vd_cmd, m_debug, m_form_monitor);
            if (!(Math::isNaN(vd_cmd(0)) || Math::isNaN(vd_cmd(1)) || Math::isNaN(vd_cmd(2))))
            {
              m_uav_ctrl.set(0, 2, m_uav_ind, m_uav_ind, vd_cmd.get(0, 2, 0, 0));

              //! - Update own vehicle simulation model - Controls
              m_models[m_uav_ind]->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));

              //! Update the time control variables
              m_last_simctrl_update(m_uav_ind) = msg->getTimeStamp();

              //===========================================
              //! Commands output
              //===========================================

              m_bank_cmd.value = m_uav_ctrl(0, m_uav_ind);
              dispatchAlias(&m_bank_cmd);

              m_airspeed_cmd.value = m_uav_ctrl(1, m_uav_ind);
              dispatchAlias(&m_airspeed_cmd);

              m_altitude_cmd.value = m_uav_ctrl(2, m_uav_ind);
              if (m_alt_units_leader == IMC::Z_ALTITUDE)
                m_altitude_cmd.value = m_uav_ctrl(2, m_uav_ind);
              else if (m_alt_units_leader == IMC::Z_HEIGHT)
                m_altitude_cmd.value = m_uav_ctrl(2, m_uav_ind)+m_llh_ref_pos[2];
              else if (m_alt_units_leader == IMC::Z_DEPTH)
                m_altitude_cmd.value = -m_uav_ctrl(2, m_uav_ind);
              else
                m_altitude_cmd.value = m_uav_ctrl(2, m_uav_ind);
              m_altitude_cmd.z_units = m_alt_units_leader;
              dispatchAlias(&m_altitude_cmd);
            }
            else
              war("Formation control is computing invalid commands");

            //===========================================
            //! Monitoring messages
            //===========================================

            // Set PathControlState
            IMC::PathControlState path_ctrl_state;
            path_ctrl_state.end_lat = msg->lat;
            path_ctrl_state.end_lon = msg->lon;
            WGS84::displace(m_vehicle_state(0, 0)+m_formation_pos(0, m_uav_ind),
                m_vehicle_state(1, 0)+m_formation_pos(1, m_uav_ind),
                &(path_ctrl_state.end_lat), &(path_ctrl_state.end_lon));
            dispatchAlias(&path_ctrl_state);

            double d_timestep = msg->getTimeStamp() - m_last_simctrl_update(m_uav_ind);
            if (m_debug)
            {
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
              double t_dist_min_mean = 0.0;
              bool t_dist_min_mean_first = true;

              // Initialize the inter-vehicle controller performance monitoring variables
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
                // - Position error relative to the reference position
                if (m_mean_first && ind_uav == 0)
                  m_err_mean = rel_state.err;
                else if (ind_uav == 0)
                    m_err_mean = (m_err_mean*d_mean_time_last + rel_state.err*d_timestep)/m_mean_time;
                // - Mean and absolute minimum distance relative to other vehicles
                else if (m_uav_n > 1)
                {
                  if (m_mean_first && t_dist_min_mean_first)
                  {
                    t_dist_min_mean = rel_state.dist;
                    m_dist_min_abs = rel_state.dist;
                    t_dist_min_mean_first = false;
                  }
                  else
                  {
                    if (t_dist_min_mean_first || t_dist_min_mean > rel_state.dist)
                    {
                      t_dist_min_mean = rel_state.dist;
                      t_dist_min_mean_first = false;
                    }
                    if (m_dist_min_abs > rel_state.dist)
                      m_dist_min_abs = rel_state.dist;
                  }
                }
              }

              if (m_alias_id != UINT_MAX)
                form_monit.setSource(m_alias_id);
              dispatchAlias(&form_monit);

              // Compute and dispatch the controller evaluation data
              if (m_uav_n > 1)
              {
                if (m_mean_first)
                {
                  m_dist_min_mean = t_dist_min_mean;
                  m_mean_first = false;
                }
                else
                  m_dist_min_mean = (m_dist_min_mean*d_mean_time_last + t_dist_min_mean*d_timestep)/m_mean_time;
              }
            }
            spew("Ending own EstimatedState");
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
                spew("EstimatedState rejected! - Vehicle '%s' is not on the formation vehicle list.",
                      resolveSystemId(msg->getSource()));
                return;
              }
            }
            //! Get estimated state time stamp
            if (m_last_state_update(ind_uav+1) > msg->getTimeStamp())
            {
              war("Old EstimatedState received from vehicle %s. (Received: %1.2f < Current: %1.2f)",
                  resolveSystemId(msg->getSource()), msg->getTimeStamp(), m_last_state_update(ind_uav+1));
              return;
            }
            m_last_state_update(ind_uav+1) = msg->getTimeStamp();
            m_last_state_estim(ind_uav+1) = msg->getTimeStamp();
            spew("EstimatedState accepted! - Vehicle '%s' is the '%u' in the formation vehicle list.",
                resolveSystemId(msg->getSource()), ind_uav);

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
            m_vehicle_state.set(0, 11, ind_uav+1, ind_uav+1, Matrix(vt_uav_state, 12, 1));
            // Set airspeed command starting point
            if (!m_vehicle_state_flag[ind_uav] || !isActive())
            {
              Matrix vd_ac2air = m_vehicle_state.get(3, 5, ind_uav+1, ind_uav+1) - m_wind;
              m_uav_ctrl(1, ind_uav) = vd_ac2air.norm_2();
              m_vehicle_state_flag[ind_uav] = true;
            }
            // - Update own vehicle simulation model
            m_models[ind_uav]->setPosition(m_vehicle_state.
                                           get(0, 2, ind_uav+1, ind_uav+1).
                                           vertCat(m_vehicle_state.
                                                   get(6, 8, ind_uav+1, ind_uav+1)));
            m_models[ind_uav]->setVelocity(m_vehicle_state.
                                           get(3, 5, ind_uav+1, ind_uav+1).
                                           vertCat(m_vehicle_state.
                                                   get(9, 11, ind_uav+1, ind_uav+1)));

            //! Check if conditions are met to initiate team virtual state updates
            //if (!isActive() && m_team_state_init)
            //  requestActivation();

            //spew("Process another system's EstimatedState - 3 for vehicle %s",
            //    resolveSystemId(msg->getSource()));
            // Check if the control is active
            if (!isControlActive())
              return;
            // Check if the commands should be updated
            if (m_last_simctrl_update(ind_uav) + m_timestep_ctrl > msg->getTimeStamp())
              return;
            spew("Process another system's EstimatedState and control - start for vehicle %s",
                resolveSystemId(msg->getSource()));

            spew("Starting team-mate EstimatedState control 2");
            //! Update team simulated state for standard time periods
            teamPeriodicUpdate(msg->getTimeStamp());
            teamUnevenUpdate(msg->getTimeStamp());

            spew("Starting team-mate EstimatedState control 3");
            //! - Commands update
            vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, ind_uav, ind_uav));
            spew("Cooperating vehicle simulated control computation");
            formationControl(m_vehicle_state, m_vehicle_accel, ind_uav, m_timestep_ctrl,
                &vd_cmd, false, m_form_monitor);
            if (!(Math::isNaN(vd_cmd(0)) || Math::isNaN(vd_cmd(1)) || Math::isNaN(vd_cmd(2))))
            {
              m_uav_ctrl.set(0, 2, ind_uav, ind_uav, vd_cmd.get(0, 2, 0, 0));

              spew("Starting team-mate EstimatedState control 4");
              //! - Update current vehicle simulation model
              m_models[ind_uav]->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));
              m_last_simctrl_update(ind_uav) = msg->getTimeStamp();
            }
            else
              war("Cooperating vehicle simulated control is computing invalid commands");

            spew("Process another system's EstimatedState and control - end for vehicle %s",
                resolveSystemId(msg->getSource()));
          }
        }

        void
        task(void)
        {
          spew("Starting periodic task");
          //! Handle IMC messages from bus
          consumeMessages();

          if (!isActive() && !isActivating())
          {
            if (Clock::get() >= m_last_time_verb_task + m_timestep_trace)
            {
              trace("Formation flight task is not active (%s).", this->getSystemName());
              m_last_time_verb_task = Clock::get();
            }
            return;
          }

          //! Update the simulated vehicles commands and states
          spew("Update the simulated vehicles commands and states");

          // ToDo - Check if leader simulation last update is recent enough: m_last_state_estim(0)
          // ToDo - Check if team vehicles last update is recent enough: m_last_state_estim(1:m_uav_n)

          //! Update team simulated state for standard time periods
          if (isControlActive())
            teamPeriodicUpdate(Time::Clock::getSinceEpoch());
          spew("Ending periodic task");
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

        bool
        isControlActive(void)
        {
          // Deactivate the formation controller if the task is not active
          if (isDeactivating())
          {
            deactivate();
            m_ctrl_active = false;
            war("Formation controller deactivation");
          }
          // Check if the controller is in the process of activating
          else if (isActivating())
          {
            //! Check if all vehicles states were initialized
            if (!m_team_state_init)
            {
              m_team_state_init = true;
              for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
                if (!m_vehicle_state_flag[ind_uav])
                {
                  m_team_state_init = false;
                  break;
                }
            }

            // Check the formation control activation conditions
            // - Plan activation request
            // - Airspeed data
            // - Leader vehicle data
            // - Single vehicle formation or team vehicles' data
            if (m_valid_airspeed && m_team_leader_init && (m_uav_n == 1 || m_team_state_init))
            {
              activate();
              m_ctrl_active = true;
              war("Formation controller is now active");
            }
            else if (Clock::get() >= m_last_time_verb_ctrlactiv + m_timestep_trace)
            {
              m_last_time_verb_ctrlactiv = Clock::get();
              if (!m_valid_airspeed)
                war("Formation control is activating - Airspeed missing!");
              else if (!m_team_leader_init)
                war("Formation control is activating - Virtual leader state missing!");
              else if (!(m_uav_n == 1 || m_team_state_init))
                war("Formation control is activating - Team vehicles' state missing!");
//              else if (!m_team_plan_init)
//                war("Formation control is activating - Team plan missing!");
            }
          }

          return m_ctrl_active;
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
          double t_leader[12] = {leader_state->x, leader_state->y, leader_state->z,
              leader_state->vx,    leader_state->vy,    0,
              trimValue(leader_state->phi, -m_leader_bank_lim, m_leader_bank_lim), 0, leader_state->psi,
              leader_state->p,       0,       leader_state->r};
          // Adjust leader offset position from its reference
          // frame to the vehicle reference frame
          positionReframing(m_llh_ref_pos[0], m_llh_ref_pos[1], m_llh_ref_pos[2],
              leader_state->lat, leader_state->lon, leader_state->height,
              &t_leader[0], &t_leader[1], &t_leader[2]);
          //! Update formation leader state vectors
          m_vehicle_state.set(0, 11, 0, 0, Matrix(t_leader, 12, 1));
          m_position = m_vehicle_state.get(0, 2, 0, 0).vertCat(m_vehicle_state.get(6, 8, 0, 0));
          m_velocity = m_vehicle_state.get(3, 5, 0, 0).vertCat(m_vehicle_state.get(9, 11, 0, 0));
          m_model->setPosition(m_position);
          m_model->setVelocity(m_velocity);
          // Update formation leader wind vector
          m_model->m_wind(0) = leader_state->svx;
          m_model->m_wind(1) = leader_state->svy;
          m_last_state_estim(0) = leader_state->getTimeStamp();
          leaderOutput();

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

          if (isActivating())
            onRequestActivation();
        }

        void
        leaderOutput(void)
        {
          m_last_leader_output = Clock::get();
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
            accel.x = m_vehicle_accel(0, 0);
            accel.y = m_vehicle_accel(1, 0);
            accel.z = m_vehicle_accel(2, 0);
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
          spew("Starting periodic update");
          //! Variables initialization
          double d_sim_time;
          Matrix vi_sim_time = Matrix(m_uav_n+1, 1);
          unsigned int ind_time;
          unsigned int i_time_n = m_uav_n;
          Matrix vd_cmd = Matrix(3, 1);
          Matrix tmp_last_state_estim = m_last_state_estim;

          spew("Periodic update 1");
          //! Order the update times as an increasing sequence
          for (unsigned int ind_uav = 0; ind_uav <= m_uav_n; ++ind_uav)
            vi_sim_time(ind_uav) = ind_uav;

          // ToDo - Limit the maximum difference between the current time and the last estimate time
          // for example with the time-out duration
          spew("Update state estimate up to: %1.2f", d_time);
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
            spew("UAV %1.0f last state estimate: %1.2f",
                vi_sim_time(ind_uav), m_last_state_estim(vi_sim_time(ind_uav)));
          }
          spew("UAV %1.0f last state estimate: %1.2f",
              vi_sim_time(i_time_n), m_last_state_estim(vi_sim_time(i_time_n)));

          spew("Periodic update 2");
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

          spew("Periodic update 3");
          //! Loop the time references to update all prediction up to the "current" time
          while (d_sim_time + m_timestep_sim <= d_time)
          {
            spew("Periodic update 3.1");
            spew("Simulating up to current time: %1.2f", d_sim_time + m_timestep_sim);
            //! Leader state prediction - Update the simulated vehicle state
            if (m_last_state_estim(0) <= d_sim_time && m_team_leader_init)
            {
              // ========= Spew ===========
              /*
              if (d_time >= m_last_time_verb_leaderspew + m_timestep_spew)
              {
                //spew("Simulating: %s", m_model->m_sim_type);
                spew("Bank: %1.2fº        - Commanded bank: %1.2fº",
                     DUNE::Math::Angles::degrees(m_position(3)),
                     DUNE::Math::Angles::degrees(m_model->getBankCmd()));
                spew("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->getAirspeed(), m_model->getAirspeedCmd());
                spew("Yaw: %1.2f", DUNE::Math::Anglest_posm_position(5)));
                spew("Current latitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lat));
                spew("Current longitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lon));
                spew("Current altitude: %1.4fm", m_init_leader.height);
                spew("Current x position: %1.4f m", m_position(0));
                spew("Current y position: %1.4f m", m_position(1));
                spew("Current z position: %1.4f m", m_position(2));
                spew("Current roll angle: %1.4f deg", Angles::degrees(m_position(3)));
                spew("Current pitch angle: %1.4f deg", Angles::degrees(m_position(4)));
                spew("Current yaw angle: %1.4f deg", Angles::degrees(m_position(5)));
                spew("Current x speed: %1.4f m/s", m_velocity(0));
                spew("Current y speed: %1.4f m/s", m_velocity(1));
                spew("Current z speed: %1.4f m/s", m_velocity(2));
                spew("Current roll rate: %1.4f deg/s", Angles::degrees(m_velocity(3)));
                spew("Current pitch rate: %1.4f deg/s", Angles::degrees(m_velocity(4)));
                spew("Current yaw rate: %1.4f deg/s", Angles::degrees(m_velocity(5)));
                spew("Current x wind speed: %1.4f m/s", m_wind(0));
                spew("Current y wind speed: %1.4f m/s", m_wind(1));
                spew("Current z wind speed: %1.4f m/s", m_wind(2));
                m_last_time_verb_leaderspew = d_time;
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
              if (d_time >= m_last_time_verb_leadertrace + m_timestep_trace)
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
                trace("Current x position: %1.4f m", m_position(0));
                trace("Current y position: %1.4f m", m_position(1));
                trace("Current z position: %1.4f m", m_position(2));
                trace("Current roll angle: %1.4f deg", Angles::degrees(m_position(3)));
                trace("Current pitch angle: %1.4f deg", Angles::degrees(m_position(4)));
                trace("Current yaw angle: %1.4f deg", Angles::degrees(m_position(5)));
                trace("Current x speed: %1.4f m/s", m_velocity(0));
                trace("Current y speed: %1.4f m/s", m_velocity(1));
                trace("Current z speed: %1.4f m/s", m_velocity(2));
                trace("Current roll rate: %1.4f deg/s", Angles::degrees(m_velocity(3)));
                trace("Current pitch rate: %1.4f deg/s", Angles::degrees(m_velocity(4)));
                trace("Current yaw rate: %1.4f deg/s", Angles::degrees(m_velocity(5)));
                trace("Current x wind speed: %1.4f m/s", m_wind(0));
                trace("Current y wind speed: %1.4f m/s", m_wind(1));
                trace("Current z wind speed: %1.4f m/s", m_wind(2));
                m_last_time_verb_leadertrace = d_time;
              }
               */

              //==========================================================================
              // Leader state output
              //==========================================================================

              if (m_last_leader_output + m_timestep_leader <= Clock::get())
                leaderOutput();
            }

            spew("Periodic update 3.3");
            //! Team state prediction - Update the simulated vehicles state
            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
              if (m_last_state_estim(ind_uav+1) <= d_sim_time && m_vehicle_state_flag[ind_uav])
              {
                m_models[ind_uav]->update(m_timestep_sim);
                m_last_state_estim(ind_uav+1) += m_timestep_sim;
              }

            spew("Periodic update 3.4");
            //! Team control prediction - Update the simulated vehicles commands
            for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
            {
              //! Commands update - At control frequency
              if (tmp_last_state_estim(ind_uav+1) <= d_sim_time &&
                  m_last_simctrl_update(ind_uav) + m_timestep_ctrl < d_sim_time + m_timestep_sim
                  && m_vehicle_state_flag[ind_uav])
              {
                //spew("Periodic update 3.4.1");
                //! Asynchronous update team simulated state
                teamUnevenUpdate(d_sim_time + m_timestep_sim);

                //spew("Periodic update 3.4.2");
                //! Compute simulated vehicle formation controls
                vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, ind_uav, ind_uav));
                //spew("Periodic update 3.4.2.1");
                spew("Simulated control computation");
                formationControl(m_vehicle_state, m_vehicle_accel, ind_uav, m_timestep_ctrl,
                    &vd_cmd, false, m_form_monitor);
                //spew("Periodic update 3.4.2.2");
                if (!(Math::isNaN(vd_cmd(0)) || Math::isNaN(vd_cmd(1)) || Math::isNaN(vd_cmd(2))))
                {
                  m_uav_ctrl.set(0, 2, ind_uav, ind_uav, vd_cmd.get(0, 2, 0, 0));

                  //spew("Periodic update 3.4.3");
                  //! - Update current vehicle model control commands
                  m_models[ind_uav]->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));

                  //spew("Periodic update 3.4.4");
                  //! Update the control prediction time
                  m_last_simctrl_update(ind_uav) = d_sim_time + m_timestep_sim;
                }
                else
                  war("Simulated control is computing invalid commands");
              }
            }

            spew("Periodic update 3.5");
            //! Update the state prediction time
            tmp_last_state_estim = m_last_state_estim;

            //! Select the next prediction time reference
            if (ind_time < i_time_n)
              ++ind_time;
            else
              ind_time = 0;
            d_sim_time = m_last_state_estim(vi_sim_time(ind_time));
          }
          spew("Ending periodic update");
        }

        //! Update team simulated state for uneven time periods
        void
        teamUnevenUpdate(const double& d_time)
        {
          //! Temporary prediction variables initialization
          Matrix vd_pos(6, 1, 0.0);
          Matrix vd_vel(6, 1, 0.0);
          UAVSimulation model;
          double mt_vehicle_accel[3] = {0, 0, 0};
          double d_cos_psi;
          double d_sin_psi;
          double t_rot[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
          Matrix md_rot;

          spew("Assynchronous update 1");
          //! Update team simulated state for remaining time
          //! - Leader state prediction - Update the simulated vehicle state
          if (m_team_leader_init)
          {
            model = *m_model;
            model.update(d_time - m_last_state_estim(0));
            vd_pos = model.getPosition();
            vd_vel = model.getVelocity();
            m_vehicle_state.set(0, 11, 0, 0,
                            vd_pos.get(0, 2, 0, 0).
                            vertCat(vd_vel.get(0, 2, 0, 0).
                                    vertCat(vd_pos.get(3, 5, 0, 0).
                                            vertCat(vd_vel.get(3, 5, 0, 0)))));
            mt_vehicle_accel[1] = m_g*std::tan(vd_pos(3));
            d_cos_psi = std::cos(vd_pos(5));
            d_sin_psi = std::sin(vd_pos(5));
            t_rot[0] = d_cos_psi;
            t_rot[1] = -d_sin_psi;
            t_rot[3] = d_sin_psi;
            t_rot[4] = d_cos_psi;
            md_rot = Matrix(t_rot, 3, 3);
            m_vehicle_accel.set(0, 2, 0, 0, md_rot*Matrix(mt_vehicle_accel, 3, 1));
          }

          spew("Assynchronous update 2");
          //! - Team state prediction - Update the simulated vehicles state
          for (unsigned int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
            if (m_vehicle_state_flag[ind_uav])
            {
              //spew("Assynchronous update 2.1");
              //!  * Retrieve current vehicle model
              model = *m_models[ind_uav];

              //spew("Assynchronous update 2.2");
              //!  * State update
              model.update(d_time - m_last_state_estim(ind_uav+1));
              vd_pos = model.getPosition();
              vd_vel = model.getVelocity();
              m_vehicle_state.set(0, 11, ind_uav+1, ind_uav+1,
                              vd_pos.get(0, 2, 0, 0).
                              vertCat(vd_vel.get(0, 2, 0, 0).
                                      vertCat(vd_pos.get(3, 5, 0, 0).
                                              vertCat(vd_vel.get(3, 5, 0, 0)))));
              //spew("Assynchronous update 2.3");
              if (ind_uav != m_uav_ind)
              {
                mt_vehicle_accel[1] = m_g*std::tan(vd_pos(3));
                d_cos_psi = std::cos(vd_pos(5));
                d_sin_psi = std::sin(vd_pos(5));
                t_rot[0] = d_cos_psi;
                t_rot[1] = -d_sin_psi;
                t_rot[3] = d_sin_psi;
                t_rot[4] = d_cos_psi;
                md_rot = Matrix(t_rot, 3, 3);
                m_vehicle_accel.set(0, 2, ind_uav+1, ind_uav+1, md_rot*Matrix(mt_vehicle_accel, 3, 1));
              }
            }
          spew("Assynchronous update - End");
        }

        void
        formationControl(const Matrix& md_uav_state, const Matrix& md_vehicle_accel,
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
          //debug("formationControl - start");

          //! Control parameters
          double mt_gain_mtx[2] = {m_k_longitudinal, m_k_lateral};
          Matrix md_gain_mtx = Matrix(mt_gain_mtx, 2) * m_speed_cmd_leader/2.5;
          double d_ss_bnd_layer = m_k_boundary * m_speed_cmd_leader;
          double d_deconfliction_dist = m_safe_dist + m_deconfliction_offset;
          double k_form_ref = (m_uav_n > 1)?m_k_leader*(m_uav_n-1):1.0;
          double k_deconfliction_dist = m_k_deconfliction*k_form_ref;
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
          Matrix vd_body_accel_lim_y = m_g * std::tan(m_bank_lim*0.75)*vd_body_y;

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
          double d_predicted_dist;

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
          //debug("formationControl - 1");

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
          if (m_formation_frame > IMC::Formation::OP_EARTH_FIXED)
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
            else if (m_formation_frame == IMC::Formation::OP_PATH_CURVED)
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

          //debug("formationControl - 2");
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

            //debug("formationControl - 2.1");
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

            //debug("formationControl - 2.2");
            //! Computation of the desired formation state:
            //! - Position vector
            //! - Velocity vector
            //! - Acceleration vector
            if (m_formation_frame == IMC::Formation::OP_EARTH_FIXED)
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
              if ((m_formation_frame == IMC::Formation::OP_PATH_CURVED) &&
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

            //debug("formationControl - 2.3");
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

            //debug("formationControl - 2.4");
            //! Relative velocity error vector
            vd_deriv_err = -vd_inter_uav_state.get(3, 4, 0, 0) - vd_inter_uav_des_vel;
            d_deriv_err_x = Matrix::dot(vd_deriv_err, vd_inter_uav_x);
            d_deriv_err_y = Matrix::dot(vd_deriv_err, vd_inter_uav_y);

            //! Maneuvering constrains - Projection onto the inter-UAV reference frame
            d_vel_proj_x = Matrix::dot((md_uav_state.get(3, 4, ind_uav2+1, ind_uav2+1) - m_wind.get(0, 1, 0, 0)),
                vd_inter_uav_x);
            //debug("formationControl - 2.4.1");
            d_accel_max_proj_x = std::abs(Matrix::dot(vd_body_accel_lim_x, vd_inter_uav_x)) +
                std::abs(Matrix::dot(vd_body_accel_lim_y, vd_inter_uav_x));
            //debug("formationControl - 2.4.2");
            d_vel_proj_y = Matrix::dot((md_uav_state.get(3, 4, ind_uav2+1, ind_uav2+1) - m_wind.get(0, 1, 0, 0)),
                vd_inter_uav_y);
            //debug("formationControl - 2.4.3");
            d_accel_max_proj_y = std::abs(Matrix::dot(vd_body_accel_lim_x, vd_inter_uav_y)) +
                std::abs(Matrix::dot(vd_body_accel_lim_y, vd_inter_uav_y));

            //debug("formationControl - 2.5");
            //! Sliding Surface parameters - Inter-UAV X axis
            //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim"
            d_c1 = std::max(m_speed_max - d_vel_proj_x, vel_lim);
            t_ctrl_marg_mult = 2 * m_speed_max/(m_speed_max + d_vel_proj_x);
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

            //debug("formationControl - 2.6");
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

            //debug("formationControl - 2.7");
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

            //debug("formationControl - 2.8");
            //! UAV-pair - Regulation of control importance
            d_des_dist = vd_inter_uav_des_pos.norm_2();
            // Inter-UAV distance compensated for the current inter-UAV velocity
            // Takes into account the vehicle acceleration limitations
            d_predicted_dist = d_inter_uav_dist + std::min(0.0, d_deriv_err_x*std::abs(d_deriv_err_x)*
                (1+m_acc_safety_marg)/d_accel_max_proj_x);
            d_dist2confl = d_predicted_dist-d_deconfliction_dist;
            if (d_dist2confl < 0)
              // Control weight increment if the predicted distance is shorter than the deconfliction distance
              vd_weight_gain(ind_uav2+1) = 1 + d_dist2confl/m_deconfliction_offset *
                  d_dist2confl/m_deconfliction_offset * k_deconfliction_dist;
            else if (d_predicted_dist <= d_des_dist*k_long_dist1)
              vd_weight_gain(ind_uav2+1) = 1;
            else if (d_predicted_dist < d_des_dist*k_long_dist2)
            {
              // Control weight reduction if the predicted distance is larger than
              // the desired distance by "k_long_dist1"
              t_dist_gain = (d_predicted_dist-d_des_dist*k_long_dist1)/(d_des_dist*k_long_dist3);
              vd_weight_gain(ind_uav2+1) = 1 - t_dist_gain*t_dist_gain;
            }
            else
              // Control weight anulation if the predicted distance is larger than
              // the desired distance multiplied by "k_long_dist2"
              vd_weight_gain(ind_uav2+1) = 0;

            //debug("formationControl - 2.9");
            //! Sliding Surface parameters - Inter-UAV Y axis
            if (d_err_y < 0)
            {
              //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim" m/s
              d_c3 = std::max(m_speed_max - d_vel_proj_y, vel_lim);
              d_c4 = 4 * (1+m_acc_safety_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            }
            else
            {
              //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
              d_c3 = std::min(- m_speed_max - d_vel_proj_y, -vel_lim);
              d_c4 = - 4 * (1+m_acc_safety_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            }

            //! ======= Sliding surface ==============

            //debug("formationControl - 2.10");
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
                                md_vehicle_accel.get(0, 1, ind_uav2+1, ind_uav2+1) +
                                vd_inter_uav_des_acc - md_rot * vt_surf_deriv);

            //debug("formationControl - 2.11");
            //! Tracking output
            if (b_debug)
            {
              rel_state = form_monitor->rel_state[ind_uav2+1];
              //! Vehicle identifier;
              rel_state->s_id = m_formation_systems[ind_uav2];
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
          }

          //debug("formationControl - 3");
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

          if (m_formation_frame == IMC::Formation::OP_EARTH_FIXED)
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
            d_c1 = std::max(m_speed_max - md_uav_state(3, 0) + m_wind(0), vel_lim);
            d_c2 = 4 * (1+m_acc_safety_marg) * d_c1*d_c1/ (27 * d_accel_max_proj_x);
            // d_err_x_s_conv = std::max(d_err_x, -d_c2);
          }
          else
          {
            //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
            d_c1 = std::min(- m_speed_max - md_uav_state(3, 0) + m_wind(0), -vel_lim);
            d_c2 = - 4 * (1+m_acc_safety_marg) * d_c1*d_c1/ (27 * d_accel_max_proj_x);
            // d_err_x_s_conv = std::min(d_err_x, -d_c2);
          }
          //! Sliding Surface parameters - Inter-UAV Y axis
          if (d_err_y < 0)
          {
            //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim" m/s
            d_c3 = std::max(m_speed_max - md_uav_state(4, 0) + m_wind(1), vel_lim); //! Avoid negative maximum relative velocities
            d_c4 = 4 * (1+m_acc_safety_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            // d_err_y_s_conv = std::max(d_err_y, -d_c4);
          }
          else
          {
            //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
            d_c3 =  std::min(- m_speed_max - md_uav_state(4, 0) + m_wind(1), -vel_lim);
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
                              vd_inter_uav_des_acc + md_vehicle_accel.get(0, 1, ind_uav_lead, ind_uav_lead));
          vt_virt_err_uav(0, ind_uav_lead) -= d_c1 * d_c2 * d_deriv_err_x/((d_err_x - d_c2)*(d_err_x - d_c2));
          vt_virt_err_uav(1, ind_uav_lead) -= d_c3 * d_c4 * d_deriv_err_y/((d_err_y - d_c4)*(d_err_y - d_c4));

          if (Math::isNaN(vt_virt_err_uav(0, ind_uav_lead)) || Math::isNaN(vt_virt_err_uav(1, ind_uav_lead))
              || Math::isNaN(vd_surf_uav(0, ind_uav_lead)) || Math::isNaN(vd_surf_uav(1, ind_uav_lead)))
          {
            war("-------------------------------------------------------");
            war("Maximum acceleration projected in x = %1.2f", d_accel_max_proj_x);
            war("Longitudinal acceleration limit = %1.2f", m_accel_lim_x);
            war("Body x axis = %1.2f, %1.2f", vd_body_x(0), vd_body_x(1));
            war("Body acceleration limit in x = %1.2f, %1.2f", vd_body_accel_lim_x(0), vd_body_accel_lim_x(1));
            war("Body acceleration limit in y = %1.2f, %1.2f", vd_body_accel_lim_y(0), vd_body_accel_lim_y(1));
            war("C1 = %1.2f", d_c1);
            war("C2 = %1.2f", d_c2);
            war("C3 = %1.2f", d_c3);
            war("C4 = %1.2f", d_c4);
            war("Error in x = %1.2f", d_err_x);
            war("Error in y = %1.2f", d_err_y);
            war("Error derivative in x = %1.2f", d_deriv_err_x);
            war("Error derivative in y = %1.2f", d_deriv_err_y);
            if (Math::isNaN(vd_inter_uav_des_acc(0, ind_uav_lead)))
              war("Leader-UAV desired acceleration is not a number in x!");
            if (Math::isNaN(vd_inter_uav_des_acc(1, ind_uav_lead)))
              war("Leader-UAV desired acceleration is not a number in y!");
            if (Math::isNaN(md_vehicle_accel(0, ind_uav_lead)))
              war("Leader current acceleration is not a number in x!");
            if (Math::isNaN(md_vehicle_accel(1, ind_uav_lead)))
              war("Leader current acceleration is not a number in y!");
            if (Math::isNaN(d_deriv_err_x))
              war("Leader error derivative is not a number in x!");
            if (Math::isNaN(d_deriv_err_y))
              war("Leader error derivative is not a number in y!");
            if (Math::isNaN(vt_virt_err_uav(0, ind_uav_lead)))
              war("Leader virtual error is not a number in x!");
            if (Math::isNaN(vt_virt_err_uav(1, ind_uav_lead)))
              war("Leader virtual error is not a number in y!");
            if (Math::isNaN(vd_surf_uav(0, ind_uav_lead)))
              war("Leader convergence command is not a number in x!");
            if (Math::isNaN(vd_surf_uav(1, ind_uav_lead)))
              war("Leader cConvergence command is not a number in y!");
          }
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
          }

          //debug("formationControl - 4");
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
//            if (b_debug && d_time >= m_last_time_verb_formctrl + m_timestep_spew)
//            {
//              spew("---------------------------------------------------");
//              spew("Orig: %1.2f - %1.2f, %1.2f!", d_surf_norm, vd_surf(0), vd_surf(1));
//              spew("Sat:  %1.2f - %1.2f, %1.2f!", d_ss_bnd_layer, vd_surf_unit(0), vd_surf_unit(1));
//              m_last_time_verb_formctrl = d_time;
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
          // Acceleration desired
          //-------------------------------------------

          // Control vector
          // vd_accel = (vt_virt_err - vd_surf_conv - vd_surf_unkn)/...
          //     (m_uav_n-1+k_form_ref);
          Matrix vd_accel = vt_virt_err - vd_surf_conv - vd_surf_unkn;
          Matrix vd_ctrl = md_rot_ground2yaw*vd_accel;
          if (Math::isNaN(vd_accel(0)) || Math::isNaN(vd_accel(1)))
          {
            war("-------------------------------------------------------");
            if (Math::isNaN(vd_accel(0)))
              war("Desired acceleration command is not a number in x!");
            if (Math::isNaN(vd_accel(1)))
              war("Desired acceleration command is not a number in y!");
            if (Math::isNaN(vt_virt_err(0)))
              war("Total virtual error is not a number in x!");
            if (Math::isNaN(vt_virt_err(1)))
              war("Total virtual error is not a number in y!");
            if (Math::isNaN(vd_surf_conv(0)))
              war("Convergence command is not a number in x!");
            if (Math::isNaN(vd_surf_conv(1)))
              war("Convergence command is not a number in y!");
            if (Math::isNaN(vd_surf_unkn(0)))
              war("Unknown perturbation command is not a number in x!");
            if (Math::isNaN(vd_surf_unkn(1)))
              war("Unknown perturbation command is not a number in y!");
          }

          //debug("formationControl - 5");

          //-------------------------------------------
          // Course control
          //-------------------------------------------
          //debug("formationControl - 5.2");

          //! Check that the command is a real value
          if (Math::isNaN((*vd_cmd)(0)) || Math::isNaN((*vd_cmd)(1)))
          {
            war("-------------------------------------------------------");
            if (Math::isNaN((*vd_cmd)(0)))
              war("Formation bank command is not a number!");
            if (Math::isNaN((*vd_cmd)(1)))
              war("Formation speed command is not a number!");
            war("Heading value: %1.2f deg - cos = %1.2f - sin = %1.2f",
                Angles::degrees(md_uav_state(8, ind_uav+1)), d_cos_heading, d_sin_heading);
            war("=======================================================");
          }

          // Bank command
          (*vd_cmd)(0) = trimValue(std::atan(vd_ctrl(1)/m_g), -m_bank_lim, m_bank_lim);
          // Lateral acceleration command
          vd_ctrl(1) = m_g*std::tan((*vd_cmd)(0));

          //-------------------------------------------
          // Speed control
          //-------------------------------------------

          // Longitudinal acceleration command
          vd_ctrl(0) = trimValue(vd_ctrl(0), -m_accel_lim_x, m_accel_lim_x);
          // Speed command
          (*vd_cmd)(1) = trimValue((*vd_cmd)(1) + d_time_step*vd_ctrl(0), m_speed_min, m_speed_max);

          //-------------------------------------------
          // Altitude control
          //-------------------------------------------

          // Altitude command
          (*vd_cmd)(2) = trimValue(-m_formation_pos(2, ind_uav) - md_uav_state(2, 0),
                                   m_alt_min, m_alt_max);

          //===========================================
          // Log data
          //===========================================

          //! Tracking output
          // ========= Spew ===========
          //debug("formationControl - 5.5");
          if (b_debug)
          {
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
          //debug("formationControl - end");
        }

        void
        dispatchFormationParameters(void)
        {
          // Controller parameters
          m_formation_ctrl_params.action = IMC::FormationControlParams::OP_REP;
          m_formation_ctrl_params.lon_gain = m_k_longitudinal;
          m_formation_ctrl_params.lat_gain = m_k_lateral;
          m_formation_ctrl_params.bond_thick = m_k_boundary;
          m_formation_ctrl_params.lead_gain = m_k_leader;
          m_formation_ctrl_params.deconfl_gain = m_k_deconfliction;
          m_formation_ctrl_params.accel_switch_gain = m_flow_accel_max;
          m_formation_ctrl_params.safe_dist = m_safe_dist;
          m_formation_ctrl_params.deconflict_offset = m_deconfliction_offset;
          m_formation_ctrl_params.accel_safe_margin = m_acc_safety_marg;
          m_formation_ctrl_params.accel_lim_x = m_accel_lim_x;
          dispatchAlias(&m_formation_ctrl_params);
        }

        void
        formationEvaluation(void)
        {
          // Output
          m_formation_eval.dist_min_abs = m_dist_min_abs;
          m_formation_eval.dist_min_mean = m_dist_min_mean;
          m_formation_eval.err_mean = m_err_mean;
          m_formation_eval.time = m_mean_time;
          dispatchAlias(&m_formation_eval);
          // Reset
          m_dist_min_abs = 0.0;
          m_dist_min_mean = 0.0;
          m_err_mean = 0.0;
          m_mean_time = 0.0;
        }

        void
        printState(const std::string what, const Matrix pos, const Matrix vel)
        {
          inf("============================");
          inf("%s x position: %1.4f m", what.c_str(), pos(0));
          inf("%s y position: %1.4f m", what.c_str(), pos(1));
          inf("%s z position: %1.4f m", what.c_str(), pos(2));
          inf("%s roll angle: %1.4f deg", what.c_str(), Angles::degrees(pos(3)));
          inf("%s pitch angle: %1.4f deg", what.c_str(), Angles::degrees(pos(4)));
          inf("%s yaw angle: %1.4f deg", what.c_str(), Angles::degrees(pos(5)));
          inf("%s x speed: %1.4f m/s", what.c_str(), vel(0));
          inf("%s y speed: %1.4f m/s", what.c_str(), vel(1));
          inf("%s z speed: %1.4f m/s", what.c_str(), vel(2));
          inf("%s roll rate: %1.4f deg/s", what.c_str(), Angles::degrees(vel(3)));
          inf("%s pitch rate: %1.4f deg/s", what.c_str(), Angles::degrees(vel(4)));
          inf("%s yaw rate: %1.4f deg/s", what.c_str(), Angles::degrees(vel(5)));
          inf("-----------------------------");
        }
      };
    }
  }
}

DUNE_TASK
