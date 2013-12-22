//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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


      struct Arguments
      {
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
        double accel_lim_x;
        double tas_max;
        double tas_min;
        double bank_lim;
        double alt_max;
        double alt_min;
        //! Formation configuration parameters
        int formation_frame;
        Matrix formation_pos;
        int uav_n;
        int uav_ind;
        //! Leader flight plan
        std::string plan;
        //! Environmental parameters
        double gaccel;
        double flow_accel_max;
        //! UAV Model Parameters
        std::string sim_type; // Simulation type (3DOF, 4DOF_bank, 4DOF_alt, 5DOF, 6DOF_stabder, and 6DOF_geom)
        double c_speed;
        double c_bank;
        // Initial state
        double init_lat;
        double init_lon;
        double init_alt;
        double init_speed;
        double init_roll;
        double init_yaw;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Simulated vehicles' models
        std::vector<UAVSimulation*> m_models;
        //! Leader vehicle' model
        UAVSimulation* m_model;
        //! Simulated position (X,Y,Z,phi,theta,psi).
        Matrix m_position;
        //! Simulated velocity (u,v,w,p,q,r).
        Matrix m_velocity;
        //! Simulated state
        IMC::SimulatedState m_sstate;
        //! Start time.
        double m_start_time;
        //! Last time update was ran
        double m_last_sim_update;
        Matrix m_last_ctrl_update;
        //! Task arguments.
        Arguments m_args;

        // System state variables
        Matrix m_uav_state;
        Matrix m_uav_accel;
        double m_airspeed;
        Matrix m_wind;

        // Vehicle commands
        IMC::DesiredRoll m_bank_cmd;
        IMC::DesiredSpeed  m_airspeed_cmd;

        // Other
        int m_uav_n;
        bool m_init_leader_state;
        bool m_init_sim_state;
        bool m_valid_airspeed;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          //m_models(NULL),
          //m_model(NULL),
          m_start_time(-1.0),
          m_last_sim_update(-1.0),
          m_uav_state(12, 1, 0.0),
          m_uav_accel(3, 1,  0.0),
          m_airspeed(1),
          m_wind(2, 1, 0.0),
          m_uav_n(1),
          m_init_leader_state(1),
          m_init_sim_state(1),
          m_valid_airspeed(false)
        {
          param("Formation Long Gain", m_args.k_longitudinal)
            .defaultValue("0.5")
            .description("Trajectory gain over the vehicle longitudinal direction");

          param("Formation Lat Gain", m_args.k_lateral)
          .defaultValue("0.8")
          .description("Trajectory gain over the vehicle lateral direction");

          param("Formation Boundary Layer", m_args.k_boundary)
          .defaultValue("0.6")
          .description("Control sliding surface boundary layer thickness");

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

          param("Accel Safety Margin", m_args.acc_safety_marg)
          .defaultValue("0.3")
          .description("Acceleration safety margin");

          param("Long Accel Limit", m_args.accel_lim_x)
          .defaultValue("0.1")
          .description("Aircraft Longitudinal Acceleration Limit");

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

          param("UAV Number", m_args.uav_n)
          .defaultValue("1")
          .description("UAV Number");

          param("UAV Index", m_args.uav_ind)
          .defaultValue("1")
          .description("Current UAV index in the formation");

          param(DTR_RT("Formation Plan"), m_args.plan)
          .defaultValue("formation_plan")
          .description(DTR("Flight plan to be executed by the vehicles formation"));

          param("Gravity Acceleration", m_args.gaccel)
          .defaultValue("9.8066")
          .units(Units::MeterPerSquareSecond)
          .description("Gravity Acceleration at aircraft location");

          param("Maximum Flow Accel", m_args.flow_accel_max)
          .defaultValue("0.0")
          .units(Units::MeterPerSquareSecond)
          .description("Maximum fluid flow acceleration at aircraft location");

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

          // Message binding
          bind<IMC::LeaderState>(this);
          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::EstimatedStreamVelocity>(this);
          bind<IMC::SimulatedState>(this);
          bind<IMC::EstimatedState>(this);
          bind<IMC::Acceleration>(this);
        }

        void
        onUpdateParameters(void)
        {
          //! Parameters checking
          checkParameters();
        }

        void
        onEntityResolution(void)
        {
        }

        void
        onResourceAcquisition(void)
        {
          //! Initial parameters checking
          checkParameters();

          UAVSimulation* model;
          if (m_args.uav_ind == 0)
          {
            //! Initialize the leader vehicle models
            //! - State  and control parameters initialization
            m_model = new UAVSimulation(m_args.c_bank, m_args.c_speed);
            //! - Simulation type
            m_model->m_sim_type = m_args.sim_type;

            //! Initiate the leader vehicle plan
            IMC::PlanControl p_control;
            p_control.plan_id = m_args.plan;
            p_control.op = IMC::PlanControl::PC_START;
            p_control.type = IMC::PlanControl::PC_REQUEST;
            p_control.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
            dispatch(p_control);
          }
          else
          {
            //! Initialize the simulated vehicles models
            for (int ind_uav = 0; ind_uav <= m_uav_n; ++ind_uav)
            {
              //! - State  and control parameters initialization
              model = new UAVSimulation(m_args.c_bank, m_args.c_speed);
              //! - Simulation type
              model->m_sim_type = m_args.sim_type;
              //! Add model to the models vector
              m_models.push_back(model);
            }
          }

          //! Start the simulation time
          m_start_time = Clock::get();
          m_last_sim_update = Clock::get();
          //! Start the control time
          m_last_ctrl_update = Matrix(m_args.uav_n, 1, Clock::get());
        }

        void
        onResourceRelease(void)
        {
        }

        void
        consume(const IMC::LeaderState* msg)
        {
          if (!isActive())
            requestActivation();

          /*
           * if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
           * return;
           */
          debug("Consuming GPS-Fix");

          // Defining origin.
          m_sstate.lat = msg->lat;
          m_sstate.lon = msg->lon;
          m_sstate.height = msg->height;

          //! - State initialization
          m_position(0) = 0.0;
          m_position(1) = 0.0;
          // Assuming vehicle starts at ground surface.
          m_position(2) = 0.0;
          m_position(3) = 0.0;
          m_position(4) = 0.0;
          m_position(5) = 0.0;
          m_model->set(m_position);

          m_start_time = Clock::get();
          m_last_sim_update = Clock::get();

          // Save message to cache.
          IMC::CacheControl cop;
          cop.op = IMC::CacheControl::COP_STORE;
          cop.message.set(*msg);
          dispatch(cop);
        }

        void
        consume(const IMC::IndicatedSpeed* msg)
        {
          if (m_args.uav_ind != 0 && msg->getSource() == getSystemId())
          {
            //! Get current vehicle airspeed
            m_airspeed = msg->value;
            if (!m_valid_airspeed)
            {
              m_valid_airspeed = 1;
              m_airspeed_cmd.value = m_airspeed;
            }
          }
        }

        void
        consume(const IMC::EstimatedStreamVelocity* msg)
        {
          double t_wind[3] = {msg->x, msg->y, msg->z};
          m_wind = Matrix(t_wind, 3, 1);
        }

        void
        consume(const IMC::SimulatedState* msg)
        {
          // Body to ground rotation matrix
          double euler_ang[3] = {msg->phi, msg->theta, msg->psi};
          Matrix md_rot_body2ground = Matrix(euler_ang, 3, 1).toDCM();

          // Ground velocity vector computation
          double vt_body_vel[3] = {msg->u, msg->v, msg->w};
          Matrix vd_vel = md_rot_body2ground*Matrix(vt_body_vel, 3, 1);

          double t_leader[12] = {msg->x,       msg->y,       msg->z,
              vd_vel(0),    vd_vel(1),    vd_vel(2),
              euler_ang[0], euler_ang[1], euler_ang[2],
              msg->p,       msg->q,       msg->r};
          m_uav_state.set(0, 11, 0, 0, Matrix(t_leader, 12, 1));
        }

        void
        consume(const IMC::Acceleration* msg)
        {
          if (m_args.uav_ind != 0 && msg->getSource() == getSystemId())
          {
            //! Get current vehicle acceleration state
            double mt_uav_accel[12] = {msg->x, msg->y, msg->z};
            m_uav_accel.set(0, 2, m_args.uav_ind, m_args.uav_ind, Matrix(mt_uav_accel, 3, 1));
          }
          //! Get team vehicles acceleration state
          //! - Check that the acceleration state is from a team member
          // m_uav_state.set(0, 11, m_args.uav_ind, m_args.uav_ind, Matrix(vt_uav_state, 12, 1));
        }

        void
        consume(const IMC::DesiredRoll* msg)
        {
          if (m_args.uav_ind == 0)
          {
            //! Get leader vehicle commanded roll
            if (!isActive())
            {
              trace("Bank command rejected.");
              trace("Simulation not active.");
              trace("Missing GPS-Fix!");
              return;
            }

            m_model->m_bank_cmd = msg->value;

            // ========= Debug ===========
            trace("Bank command received (%1.2fº)", DUNE::Math::Angles::degrees(msg->value));
          }
        }

        void
        consume(const IMC::DesiredSpeed* msg)
        {
          if (m_args.uav_ind == 0)
          {
            //! Get leader vehicle commanded airspeed
            if (!isActive())
            {
              trace("Speed command rejected.");
              trace("Simulation not active.");
              trace("Missing GPS-Fix!");
              return;
            }

            m_model->m_airspeed_cmd = msg->value;

            // ========= Debug ===========
            trace("Speed command received (%1.2fm/s)", msg->value);
          }
        }

        void
        consume(const IMC::EstimatedState* msg)
        {
          //! Declaration
          double time;
          double timestep;
          UAVSimulation* model;
          double* vd_cmd[3];

          //! Skip formation flight controller if running as the leader vehicle
          if (m_args.uav_ind == 0)
          {
            if (m_init_leader_state)
            {
              m_init_leader_state = 0;
              Matrix vd_vel2wind = Matrix(3, 1, 0.0);
              //! - State  and control parameters initialization
              m_model->set(m_uav_state.get(0, 2, 0, 0).vertCat(m_uav_state.get(6, 8, 0, 0)),
                        m_uav_state.get(3, 5, 0, 0).vertCat(m_uav_state.get(9, 11, 0, 0)));
              //! - Commands initialization
              vd_vel2wind = m_uav_state.get(3, 5, 0, 0) - m_wind;
              m_model->command(m_uav_state(6, 0), vd_vel2wind.norm_2(), m_uav_state(2, 0));
            }

            //! GPS position initialization
            debug("Formation leader GPS-Fix initialization");
            IMC::GpsFix init_fix;
            init_fix.lat = DUNE::Math::Angles::radians(m_args.init_lat);
            init_fix.lon = DUNE::Math::Angles::radians(m_args.init_lon);
            init_fix.height = m_args.init_alt;
            m_sstate.lat = init_fix.lat;
            m_sstate.lon = init_fix.lon;
            m_sstate.height = m_args.init_alt;
            dispatch(init_fix);
            requestActivation();

            //! Model initialization
            debug("Formation leader model initialization");
            //! - Altitude initialization
            m_position(2) = m_args.init_alt;
            //! - Bank initialization
            m_position(3) = DUNE::Math::Angles::radians(m_args.init_roll);
            //! - Heading initialization
            m_position(5) = DUNE::Math::Angles::radians(m_args.init_yaw);
            //! - Velocity vector initialization
            m_velocity(0) = m_args.init_speed*std::cos(m_position(5));
            m_velocity(1) = m_args.init_speed*std::sin(m_position(5));
            //! - State  and control parameters initialization
            m_model = new DUNE::Simulation::UAVSimulation(m_position, m_velocity, m_args.c_bank, m_args.c_speed);
            //! - Commands initialization
            m_model->command(m_position(3), m_args.init_speed, m_position(2));
            // - Simulation type
            m_model->m_sim_type = m_args.sim_type;
          }
          else
          {
            if (msg->getSource() == getSystemId())
            {
              //! Get vehicle own updated state
              double vt_uav_state[12] = {msg->x,   msg->y,     msg->z,
                  msg->vx,  msg->vy,    msg->vz,
                  msg->phi, msg->theta, msg->psi,
                  msg->p,   msg->q,     msg->r};
              m_uav_state.set(0, 11, m_args.uav_ind, m_args.uav_ind, Matrix(vt_uav_state, 12, 1));

              //! Compute the time step
              time  = Clock::get();
              timestep = time - m_last_ctrl_update(m_args.uav_ind);
              m_last_ctrl_update(m_args.uav_ind) = time;
            }
            //! Get team vehicles updated state
            //! - Check that the estimated state is from a team member
            // m_uav_state.set(0, 11, m_args.uav_ind, m_args.uav_ind, Matrix(vt_uav_state, 12, 1));

            //! Simulation - vehicles model initialization
            if (m_init_sim_state)
            {
              Matrix vd_vel2wind = Matrix(3, 1, 0.0);
              for (int ind_uav = 1; ind_uav <= m_uav_n; ++ind_uav)
              {
                //! Retrieve current vehicle model
                model = m_models[ind_uav-1];
                //! - State  and control parameters initialization
                model->set(m_uav_state.get(0, 2, ind_uav, ind_uav).vertCat(m_uav_state.get(6, 8, ind_uav, ind_uav)),
                          m_uav_state.get(3, 5, ind_uav, ind_uav).vertCat(m_uav_state.get(9, 11, ind_uav, ind_uav)));
                //! - Commands initialization
                vd_vel2wind = m_uav_state.get(3, 5, ind_uav, ind_uav) - m_wind;
                model->command(m_uav_state(6, ind_uav), vd_vel2wind.norm_2(), m_uav_state(2, ind_uav));
                //! Update current vehicle model to the vector
                m_models[ind_uav-1] = model;
              }
            }

            (*vd_cmd)[2] = m_airspeed_cmd.value;
            formationControl(m_uav_state, m_uav_accel, m_args.uav_ind, timestep, vd_cmd);

            //===========================================
            // Output
            //===========================================

            m_bank_cmd.value = (*vd_cmd)[1];
            dispatch(m_bank_cmd);
            m_airspeed_cmd.value = (*vd_cmd)[2];
            dispatch(m_airspeed_cmd);
            /*
             m_altitude_cmd.value = (*vd_cmd)[3];
             dispatch(m_altitude_cmd);
             */
          }
        }

        void
        formationControl(const Matrix& md_uav_state, const Matrix& md_uav_accel,
            const int& ind_uav, const double& d_time_step, double*const vd_cmd[3])
        {
          //! Vehicle formation control method

          //! Controls:
          //! - cmd(1) = bank_cmd
          //! - cmd(2) = airspeed_cmd
          //! - cmd(3) = alt_cmd

          //! ====== Variables declaration and initialization ======

          //! Environment parameters
          double d_g = m_args.gaccel;

          //! Control constraints
          double d_bank_lim = m_args.bank_lim;
          double d_airspeed_max = m_args.tas_max;
          double d_airspeed_min = m_args.tas_min;
          double d_accel_lim_x = m_args.accel_lim_x;

          //! Formation parameters
          int i_formation_frame = m_args.formation_frame;
          Matrix md_form_pos = m_args.formation_pos;

          //! Control parameters
          double mt_gain_mtx[2] = {m_args.k_longitudinal, m_args.k_lateral};
          Matrix md_gain_mtx = Matrix(mt_gain_mtx, 2);
          double d_ss_bnd_layer = m_args.k_boundary;
          double d_form_ref_gain = (m_uav_n-1)*m_args.k_leader;
          double d_flow_accel_max = m_args.flow_accel_max;
          double d_control_margin = m_args.deconfliction_offset;
          double d_deconfliction_dist = m_args.safe_dist + d_control_margin;
          double d_acc_saf_marg = m_args.acc_safety_marg;
          double k_leader = m_args.k_leader*(m_args.uav_n - 1);
          double k_deconfl_vel = m_args.k_deconfliction*k_leader;
          double k_deconfliction_dist = k_deconfl_vel/2;
          double k_long_dist1 = 1.5;
          double k_long_dist2 = 4;
          double k_long_dist3 = k_long_dist2-k_long_dist1;

          // Reference frame and axes rotation (Ground to Yaw)
          double d_cos_heading = std::cos(md_uav_state(8, ind_uav));
          double d_sin_heading = std::sin(md_uav_state(8, ind_uav));

          double t_rot_ground2yaw[4] = {d_cos_heading, d_sin_heading, -d_sin_heading, d_cos_heading};
          Matrix md_rot_ground2yaw = Matrix(t_rot_ground2yaw, 2, 2);
          Matrix vd_body_x = transpose(md_rot_ground2yaw.row(0));
          Matrix vd_body_y = transpose(md_rot_ground2yaw.row(1));

          // Maneuvering constrains
          Matrix vd_body_accel_lim_x = d_accel_lim_x*vd_body_x;
          Matrix vd_body_accel_lim_y = d_g * std::tan(d_bank_lim*0.6)*vd_body_y;

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
          double d_err_y_s_conv;
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
          Matrix vd_weight_gain = Matrix(1, m_uav_n+1, 0.0);


          // ===========================================
          // Formation control
          // ===========================================

          /*
        // ======== Formation perturbation test - Mesh stability =======
        if ind_uav == 2
        //     vd_Pert = 5*(1+std::cos(d_Time/40*2*pi))*[-1; 1];
        vd_Pert = 10*std::cos(d_Time/20*2*pi)*[-1; 1];
        //     vd_Pert = 10*[-std::cos(d_Time/20*2*pi); std::sin(d_Time/20*2*pi)];
        //     vd_Pert = [0; 0];
            md_form_pos(1:2, ind_uav) = md_form_pos(1:2, ind_uav) + vd_Pert;
        end
        // ======== Formation perturbation test - Mesh stability =======
           */

          //-------------------------------------------
          // Formation shape rotation
          //-------------------------------------------

          Matrix vd_leader_hor_vel = md_uav_state.get(3, 4, 0, 0);
          double d_leader_gndspeed = vd_leader_hor_vel.norm_2();
          double d_cos_form_course = md_uav_state(3, 0)/d_leader_gndspeed;
          double d_sin_form_course = md_uav_state(4, 0)/d_leader_gndspeed;
          double t_rot_formation[4] = {d_cos_form_course, -d_sin_form_course,
              d_sin_form_course,  d_cos_form_course};
          Matrix md_rot_formation = Matrix(t_rot_formation, 2, 2);

          //! Formation current rotation radius, speed, and turn-rate
          double d_form_turnrate = d_g * std::tan(md_uav_state(6, 0))/d_leader_gndspeed*
              std::cos(std::atan2(md_uav_state(4, 0), md_uav_state(3, 0)) - md_uav_state(8, 0));
          double d_form_turnrad = d_leader_gndspeed/d_form_turnrate;
          // d_form_turnrad = d_leader_gndspeed*d_leader_gndspeed/(d_g * std::tan(md_uav_state(6, 0))*...
          //     std::cos(std::atan2(md_uav_state(4, 0), md_uav_state(3, 0)) - md_uav_state(8, 0)));
          // d_form_turnrate = d_leader_gndspeed/d_form_turnrad;
          // vd_FormRotCtr = md_uav_state.get(0, 1, 0, 0) + d_form_turnrad*md_rot_formation.col;
          // vd_FormRotCtr = md_uav_state.get(0, 1, 0, 0) + d_form_turnrad*md_rot_formation(1:2, 2);
          // spew('\nFormation rotation center: %3.1f, %3.1f\n', vd_FormRotCtr)

          //! Formation reference position, velocity and acceleration vectors
          if (i_formation_frame > 0)
          {
            if (md_uav_state(6, 0) == 0)
            {
              //! Formation following in a straight line
              d_form_turnrate = 0;
              vd_form_pos1 = md_form_pos.get(0, 1, ind_uav, ind_uav);
              /*
            Matrix vd_form_vel1[2] = {0, 0};
            Matrix vd_form_acc1[2] = {0, 0};
               */
            }
            else if (i_formation_frame == 2)
            {
              //! Path reference frame
              //! In-formation adjustment
              t_uav_turnrad = d_form_turnrad - md_form_pos(1, ind_uav);
              t_cos_gamma = std::cos(md_form_pos(0, ind_uav)/d_form_turnrad);
              t_sin_gamma = std::sin(md_form_pos(0, ind_uav)/d_form_turnrad);
              // - Position
              vt_form_dir[0] = t_sin_gamma;
              vt_form_dir[1] = 1 - t_cos_gamma;
              double vt_form_pos1[2] = {0, md_form_pos(1, ind_uav)};
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
              vd_form_pos1 = md_form_pos.get(0, 1, ind_uav, ind_uav);
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
          //! Formation shape rotation
          //-------------------------------------------

          //! Formation UAV sweep

          // verificar inclusão do líder como elemento 0 dos vectores e matrizes
          // da formação, em vez de elemento m_uav_n em apenas algumas
          for (int ind_uav2 = 0; ind_uav2 < m_uav_n; ind_uav2++)
          {
            // Skeeping the current UAV index
            if (ind_uav == ind_uav2)
              continue;

            //! Computing relative state, from current UAV to "ind_uav2" UAV
            vd_inter_uav_state = md_uav_state.get(0, 5, ind_uav2, ind_uav2) -
                md_uav_state.get(0, 5, ind_uav, ind_uav);
            vd_inter_uav_pos = vd_inter_uav_state.get(0, 1, 0, 0);
            d_inter_uav_dist = vd_inter_uav_pos.norm_2();
            //! Computing the rotation matrix - From inter-UAV frame to ground frame
            d_inter_uav_angle = std::atan2(vd_inter_uav_pos(1),
                vd_inter_uav_pos(0));
            d_cos_inter_uav_angle = std::cos(d_inter_uav_angle);
            d_sin_inter_uav_angle = std::sin(d_inter_uav_angle);
            // verificar preenchimento da matriz (linhas e colunas ou vice-versa)
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
            if (i_formation_frame == 0)
            {
              //! Ground reference frame
              //! - Position
              vd_inter_uav_des_pos = md_form_pos.get(0, 1, ind_uav, ind_uav) -
                  md_form_pos.get(0, 1, ind_uav2, ind_uav2);
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
              if ((i_formation_frame == 2) && (md_uav_state(6, 0) != 0))
              {
                //! Curved shape - Formation shape adjustment to path curvature
                t_uav_turnrad = d_form_turnrad - md_form_pos(1, ind_uav2);
                t_cos_gamma = std::cos(md_form_pos(0, ind_uav2)/d_form_turnrad);
                t_sin_gamma = std::sin(md_form_pos(0, ind_uav2)/d_form_turnrad);
                // - Position
                vt_form_dir[0] = t_sin_gamma;
                vt_form_dir[1] = 1 - t_cos_gamma;
                vt_form_pos2[0] = 0;
                vt_form_pos2[1] = md_form_pos(1, ind_uav);
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
                vd_form_pos2 = md_form_pos.get(0, 1, ind_uav2, ind_uav2);
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
            d_vel_proj_x = Matrix::dot((md_uav_state.get(3, 4, ind_uav2, ind_uav2) - m_wind),
                vd_inter_uav_x);
            d_accel_max_proj_x = std::abs(Matrix::dot(vd_body_accel_lim_x, vd_inter_uav_x)) +
                std::abs(Matrix::dot(vd_body_accel_lim_y, vd_inter_uav_x));
            d_vel_proj_y = Matrix::dot((md_uav_state.get(3, 4, ind_uav2, ind_uav2) - m_wind),
                vd_inter_uav_y);
            d_accel_max_proj_y = std::abs(Matrix::dot(vd_body_accel_lim_x, vd_inter_uav_y)) +
                std::abs(Matrix::dot(vd_body_accel_lim_y, vd_inter_uav_y));

            //! Sliding Surface parameters - Inter-UAV X axis
            //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim"
            d_c1 = std::max(d_airspeed_max - d_vel_proj_x, vel_lim);
            t_ctrl_marg_mult = 2 * d_airspeed_max/(d_airspeed_max + d_vel_proj_x);
            d_c2 = d_control_margin * t_ctrl_marg_mult;
            if (d_err_x < 0)
            {
              d_c2 = std::max(4 * (1+d_acc_saf_marg) * d_c1*d_c1/(27 * d_accel_max_proj_x), d_c2);
              /*
            t_CtrlMarg = d_c2/t_ctrl_marg_mult;
            d_deconfliction_dist = m_args.safe_dist + t_CtrlMarg;
            if (t_CtrlMarg > d_control_margin*1.1)
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
              d_dist2confl)/d_control_margin*k_deconfl_vel;
            if (d_dist2confl < 0)
              d_dist_gain = 1 + d_dist2confl/d_control_margin *
                d_dist2confl/d_control_margin * k_deconfliction_dist;
            else if (d_inter_uav_dist <= d_des_dist*k_long_dist1)
              d_dist_gain = 1;
            else if (d_inter_uav_dist < d_des_dist*k_long_dist2)
            {
              t_dist_gain = (d_inter_uav_dist-d_des_dist*k_long_dist1)/(d_des_dist*k_long_dist3);
              d_dist_gain = 1 - t_dist_gain*t_dist_gain;
            }
            else
              d_dist_gain = 0;
            vd_weight_gain(ind_uav2) = std::max(d_vel_gain, d_dist_gain);

            //! Sliding Surface parameters - Inter-UAV Y axis
            if (d_err_y < 0)
            {
              //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim" m/s
              d_c3 = std::max(d_airspeed_max - d_vel_proj_y, vel_lim);
              d_c4 = 4 * (1+d_acc_saf_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            }
            else
            {
              //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
              d_c3 = std::min(- d_airspeed_max - d_vel_proj_y, -vel_lim);
              d_c4 = - 4 * (1+d_acc_saf_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            }

            //! ======= Sliding surface ==============

            t_surf_x = d_c1 * d_err_x/(d_err_x - d_c2);
            t_surf_y = d_c3 * d_err_y/(d_err_y - d_c4);
            //! Sliding surface deviation
            vd_surf_uav.set(0, 1, ind_uav2, ind_uav2,
                            vd_deriv_err - t_surf_x * vd_inter_uav_x - t_surf_y * vd_inter_uav_y);

            //! ======= Virtual error and feedback linearization ================
            d_inter_uav_angle_dot = Matrix::dot(vd_inter_uav_state.get(3, 4, 0, 0),
                vd_inter_uav_y/d_inter_uav_dist);
            // d_inter_uav_angle_dot = 0;
            vt_surf_deriv(0) = d_c1*d_c2*d_deriv_err_x/((d_err_x_s_conv - d_c2)*(d_err_x_s_conv - d_c2)) +
                t_surf_y * d_inter_uav_angle_dot;
            vt_surf_deriv(1) = d_c3 * d_c4 * d_deriv_err_y/((d_err_y - d_c4)*(d_err_y - d_c4)) -
                t_surf_x * d_inter_uav_angle_dot;
            vt_virt_err_uav.set(0, 1, ind_uav2, ind_uav2,
                                md_uav_accel.get(0, 1, ind_uav2, ind_uav2) +
                                vd_inter_uav_des_acc - md_rot * vt_surf_deriv);

            //! Tracking output
            /*
        if nargout > 3
        varargout{3}(ind_uav2) = d_inter_uav_dist;
        if nargout > 5
        varargout{5}(ind_uav2, :) = vd_inter_uav_x';
        if nargout > 6
        // // ======== Formation perturbation test - Mesh stability =======
        // if ind_UAV == 2
        //   vd_err = vd_err + vd_Pert;
        // end
        // // ======== Formation perturbation test - Mesh stability =======
        varargout{6}(ind_uav2, :) = vd_err';
        if nargout > 7
        varargout{7}(ind_uav2, :) = [vd_err'*md_rot, ...
                                     vd_deriv_err'*md_rot, vd_surf_uav(:, ind_uav2)'*md_Rot];
        if nargout > 8
        varargout{8}(ind_uav2, :) = vt_virt_err_uav(:, ind_uav2)';
        if nargout > 9
        // // ======== Formation perturbation test - Mesh stability =======
        // if ind_uav == 2
        //   vd_orig_err += + vd_Pert;
        // end
        // // ======== Formation perturbation test - Mesh stability =======
        varargout{9}(ind_uav2) = sqrt(sum(vd_orig_err.^2));
        end
        end
        end
        end
        end
        end
             */
          }

          //!---------------------------------------------------------------
          //! Dynamics relative to the Leader - Formation global reference
          //!---------------------------------------------------------------

          int ind_uav_lead = 0;
          //! Regulation of control importance
          vd_weight_gain(ind_uav_lead) = 1;

          //! Computing relative state, from current UAV to leader
          vd_inter_uav_state = md_uav_state.get(0, 5, ind_uav_lead, ind_uav_lead) -
              md_uav_state.get(0, 5, ind_uav, ind_uav);
          /* --- Used just for control performance evaluation ---
        vd_inter_uav_pos = vd_inter_uav_state.get(0, 1, 0, 0);
        d_inter_uav_dist = vd_inter_uav_pos.norm_2();
        //! Computing the rotation matrix - From inter-UAV frame to ground frame
        d_inter_uav_angle = std::atan2(vd_inter_uav_pos(1),
            vd_inter_uav_pos(0));
        d_cos_inter_uav_angle = std::cos(d_inter_uav_angle);
        d_sin_inter_uav_angle = std::sin(d_inter_uav_angle);
        // verificar preenchimento da matriz (linhas e colunas ou vice-versa)
        mt_rot[0] = d_cos_inter_uav_angle;
        mt_rot[1] = -d_sin_inter_uav_angle;
        mt_rot[2] = d_sin_inter_uav_angle;
        mt_rot[3] = d_cos_inter_uav_angle;
        md_rot = Matrix(mt_rot, 2, 2);
        vd_inter_uav_x = md_rot.column(0);
        // vd_inter_uav_y = md_rot.column(1);
           */


          if (i_formation_frame == 0)
          {
            //! Earth reference frame
            //! - Position
            vd_inter_uav_des_pos = md_form_pos.get(0, 1, ind_uav, ind_uav);
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

          //! Maneuvering constrains
          d_accel_max_proj_x = std::abs(vd_body_accel_lim_x(0)) + std::abs(vd_body_accel_lim_y(0));
          d_accel_max_proj_y = std::abs(vd_body_accel_lim_x(1)) + std::abs(vd_body_accel_lim_y(1));

          //! Sliding Surface parameters - Inter-UAV X axis
          if (d_err_x < 0)
          {
            //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim" m/s
            d_c1 = std::max(d_airspeed_max - md_uav_state(3, 0) + m_wind(0), vel_lim);
            d_c2 = 4 * (1+d_acc_saf_marg) * d_c1*d_c1/ (27 * d_accel_max_proj_x);
            // d_err_x_s_conv = std::max(d_err_x, -d_c2);
          }
          else
          {
            //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
            d_c1 = std::min(- d_airspeed_max - md_uav_state(3, 0) + m_wind(0), -vel_lim);
            d_c2 = - 4 * (1+d_acc_saf_marg) * d_c1*d_c1/ (27 * d_accel_max_proj_x);
            // d_err_x_s_conv = std::min(d_err_x, -d_c2);
          }
          //! Sliding Surface parameters - Inter-UAV Y axis
          if (d_err_y < 0)
          {
            //! Avoid negative maximum relative velocities - Minimum is hard-coded with "vel_lim" m/s
            d_c3 = std::max(d_airspeed_max - md_uav_state(4, 0) + m_wind(1), vel_lim); //! Avoid negative maximum relative velocities
            d_c4 = 4 * (1+d_acc_saf_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
            // d_err_y_s_conv = std::max(d_err_y, -d_c4);
          }
          else
          {
            //! Avoid positive minimum relative velocities - Maximum is hard-coded with -"vel_lim" m/s
            d_c3 =  std::min(- d_airspeed_max - md_uav_state(4, 0) + m_wind(1), -vel_lim);
            d_c4 = - 4 * (1+d_acc_saf_marg) * d_c3*d_c3/(27 * d_accel_max_proj_y);
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
          vt_virt_err_uav(0, ind_uav_lead) -= d_c3 * d_c4 * d_deriv_err_y/((d_err_y - d_c4)*(d_err_y - d_c4));

          //! Tracking output
          /*
        if nargout > 3
        varargout{3}(ind_uav_lead) = d_inter_uav_dist;
        if nargout > 5
        varargout{5}(ind_uav_lead, :) = vd_inter_uav_x';
        if nargout > 6
        //             // ======== Formation perturbation test - Mesh stability =======
        //             if ind_uav == 2
        //                 vd_err += vd_Pert;
        //             end
        //             // ======== Formation perturbation test - Mesh stability =======
        varargout{6}(ind_uav_lead, :) = vd_err';
        if nargout > 7
        varargout{7}(ind_uav_lead, :) = [vd_err'*md_rot, ...
                                     vd_deriv_err'*md_rot, vd_surf_uav(:, ind_uav_lead)'*md_Rot];
        if nargout > 8
        varargout{8}(ind_uav_lead, :) = vt_virt_err_uav(:, ind_uav_lead)';
        if nargout > 9
        varargout{9}(ind_uav_lead) = sqrt(sum(vd_err.^2));
        end
        end
        end
        end
        end
        end
           */

          //!-------------------------------------------
          //! Control influence merging
          //!-------------------------------------------

          //! UAV weight on control strategy
          Matrix vd_ctrl_weight = Matrix(m_uav_n+1, 1, 1);
          vd_ctrl_weight(m_uav_n) = d_form_ref_gain;
          vd_ctrl_weight(ind_uav) = 0;
          vd_ctrl_weight &= vd_weight_gain;
          vd_ctrl_weight /= sum(vd_ctrl_weight);
          /*
        if nargout > 4
        varargout{4} = vd_ctrl_weight';
        end
           */
          //! Sliding surface data mixing
          Matrix vd_surf = vd_surf_uav * vd_ctrl_weight;
          Matrix vt_virt_err = vt_virt_err_uav * vd_ctrl_weight;

          double d_surf_norm = vd_surf.norm_2();
          Matrix vd_surf_unit = vd_surf/d_surf_norm;

          //!-------------------------------------------
          //! Sliding surface convergence term
          //!-------------------------------------------

          Matrix vd_sat_surf = Matrix(2, 1);
          if (d_ss_bnd_layer < d_surf_norm)
          {
            vd_sat_surf = vd_surf_unit;
            spew("Sat: %1.2f - %1.2f, %1.2f!", d_surf_norm, vd_surf(0), vd_surf(1));
          }
          else
            vd_sat_surf = vd_surf/d_ss_bnd_layer;

          //verificar conversão para c++
          Matrix vd_surf_conv = transpose(md_rot_ground2yaw)*md_gain_mtx*md_rot_ground2yaw * vd_sat_surf;

          //!-------------------------------------------
          //! Sliding surface unknown disturbance term
          //!-------------------------------------------

          // vd_surf_unkn = (2 * (m_uav_n-1) + d_form_ref_gain) * d_flow_accel_max * vd_surf_unit;

          // vd_surf_unkn1 = ((m_uav_n-1)/(m_uav_n-1+d_form_ref_gain)+1)*...
          //     d_flow_accel_max*vd_surf_unit;

          vd_surf_unit = Matrix(2, 1);

          //! UAVs Uncertainty compensation

          double t_SurfSqr;
          for (int ind_uav2 = 0; ind_uav2 < m_uav_n; ind_uav2++)
          {
            // Skeeping the current UAV index
            if (ind_uav == ind_uav2)
              continue;

            t_SurfSqr = vd_surf_uav(0, ind_uav2)*vd_surf_uav(0, ind_uav2) +
                vd_surf_uav(1, ind_uav2)*vd_surf_uav(1, ind_uav2);
            if (t_SurfSqr > 0)
            {
              vd_surf_unit += 2*vd_surf_uav.get(0, 1, ind_uav2, ind_uav2)*
                  vd_ctrl_weight(ind_uav2)/std::sqrt(t_SurfSqr);
            }
          }
          // Leader/Uncertainty compensation
          t_SurfSqr = vd_surf_uav(0, m_uav_n)*vd_surf_uav(0, m_uav_n) +
              vd_surf_uav(1, m_uav_n)*vd_surf_uav(1, m_uav_n);
          if (t_SurfSqr)
            vd_surf_unit += d_form_ref_gain*vd_surf_uav.get(0, 1, m_uav_n, m_uav_n)*vd_ctrl_weight(m_uav_n)/std::sqrt(t_SurfSqr);
          // Formation/Uncertainty compensation
          Matrix vd_surf_unkn = vd_surf_unit*d_flow_accel_max/(m_uav_n-1+d_form_ref_gain);
          /*
        if (ind_uav == 1)
        {
          spew('Uncertainty component 1: %1.3f, %1.3f\n', vd_surf_unkn1(0), vd_surf_unkn1(1))
          spew('Uncertainty component 2: %1.3f, %1.3f\n', vd_surf_unkn(0), vd_surf_unkn(1))
         }
           */

          //-------------------------------------------
          // Acceleration command
          //-------------------------------------------

          /*
        t_rot_ground2yaw = {d_cos_heading, d_sin_heading, -d_sin_heading/m_airspeed, d_cos_heading/m_airspeed};
        md_rot_ground2yaw = Matrix(t_rot_ground2yaw, 2, 2);
           */

          // Control vector
          // vd_accel = (vt_virt_err - vd_surf_conv - vd_surf_unkn)/...
          //     (m_uav_n-1+d_form_ref_gain);
          Matrix vd_accel = vt_virt_err - vd_surf_conv - vd_surf_unkn;
          Matrix vd_ctrl = md_rot_ground2yaw*vd_accel;

          //-------------------------------------------
          // Altitude control
          //-------------------------------------------

          (*vd_cmd)[3] = md_form_pos(2, ind_uav) + md_uav_state(2, 0);

          //-------------------------------------------
          // Speed control
          //-------------------------------------------

          double d_accel_x_cmd = std::min(std::max(vd_ctrl(0), -d_accel_lim_x), d_accel_lim_x);
          vd_ctrl(0) = d_accel_x_cmd;
          (*vd_cmd)[2] += d_time_step * d_accel_x_cmd;

          //-------------------------------------------
          // Course control
          //-------------------------------------------

          // Bank command
          (*vd_cmd)[1] = std::atan(vd_ctrl(1)/d_g); // Desired bank

          //===========================================
          // Control limits
          //===========================================

          //! Velocity limits
          (*vd_cmd)[2] = std::min(std::max((*vd_cmd)[2], d_airspeed_min), d_airspeed_max);

          //! Altitude limits
          (*vd_cmd)[3] = std::min(std::max((*vd_cmd)[3], m_args.alt_min), m_args.alt_max);

          //! Bank limits
          (*vd_cmd)[1] = std::min(std::max((*vd_cmd)[1], -d_bank_lim), d_bank_lim);
          vd_ctrl(2) = d_g*std::tan((*vd_cmd)[1]); // Real lateral acceleration command

          //===========================================
          // Log data
          //===========================================

          /*
        if nargout > 1
          varargout{1} = vd_accel';
          if nargout > 2
            varargout{2} = [vt_virt_err; -vd_surf_conv; -vd_surf_unkn]';
            if nargout > 10
              varargout{10} = vd_surf';
              if nargout > 11
                varargout{11} = vd_ctrl';
              end
            end
          end
        end
           */

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

        void
        checkParameters(void)
        {
          m_uav_n = m_args.formation_pos.columns();
          if (m_uav_n != m_args.uav_n)
          {
            war("Number of the UAVs in the formation matrix (%d) is different from the total UAV count indicated (%d)!",
                 m_uav_n, m_args.uav_n);
            m_uav_n = (m_uav_n < m_args.uav_n)?m_uav_n:m_args.uav_n;
          }
        }

        void
        task(void)
        {
          if (m_args.uav_ind == 0)
          {
            //! Update the leader vehicle commands and states

            //! Handle IMC messages from bus
            consumeMessages();

            if (!isActive())
              return;

            //! Declaration
            double time;
            double timestep;

            //! Compute the time step
            time  = Clock::get();
            timestep = time - m_last_sim_update;
            m_last_sim_update = time;

            /*
            // ========= Debug ===========
            if (time >= m_last_time_debug + 1.0)
            {
              //spew("Simulating: %s", m_model->m_sim_type);
              spew("Bank: %1.2fº        - Commanded bank: %1.2fº",
                  DUNE::Math::Angles::degrees(m_position(3)),
                  DUNE::Math::Angles::degrees(m_model->m_bank_cmd));
              spew("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->m_airspeed, m_model->m_airspeed_cmd);
              spew("Yaw: %1.2f", DUNE::Math::Angles::degrees(m_position(5)));
            }
             */
            //==========================================================================
            //! Dynamics
            //==========================================================================

            m_model->update(timestep);
            m_model->get(m_position, m_velocity);

            //==========================================================================
            //! Output
            //==========================================================================

            //! Fill position.
            m_sstate.x = m_position(0);
            m_sstate.y = m_position(1);
            m_sstate.z = m_position(2);

            //! Fill attitude.
            m_sstate.phi = m_position(3);
            m_sstate.theta = m_position(4);
            m_sstate.psi = m_position(5);

            //! Rotation matrix
            double euler_ang[3] = {m_position(3), m_position(4), m_position(5)};
            Matrix md_rot_body2gnd = Matrix(euler_ang, 3, 1).toDCM();
            //! UAV velocity rotation to the body frame
            Matrix vd_body_vel = transpose(md_rot_body2gnd) * m_velocity.get(0, 2, 0, 0);
            //! Fill body-frame linear velocity, relative to the ground.
            m_sstate.u = vd_body_vel(0);
            m_sstate.v = vd_body_vel(1);
            m_sstate.w = vd_body_vel(2);

            //! UAV body-frame rotation rates
            // vd_UAVRotRates = UAVRotRatTrans_1_00(vd_State);

            //! Fill angular velocity.
            m_sstate.p = m_velocity(3);
            m_sstate.q = m_velocity(4);
            m_sstate.r = m_velocity(5);

            //! Fill stream velocity.
            m_sstate.svx = m_model->m_wind(0);
            m_sstate.svy = m_model->m_wind(1);
            m_sstate.svz = m_model->m_wind(2);

            dispatch(m_sstate);
          }
          else
          {
            //! Update the simulated vehicles commands and states

          }
        }
      };
    }
  }
}

DUNE_TASK
