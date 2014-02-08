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
        //! Simulation and control frequencies
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
        // Debug flag
        char debug;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! Task arguments.
        Arguments m_args;

        //! Simulated vehicles' models
        std::vector<UAVSimulation*> m_models;
        //! Leader vehicle model
        UAVSimulation* m_model;
        //! Vehicls's referencial position (Latitude, Longitude, and height).
        double m_llh_ref_pos[3];
        //! Leader's simulated position (X,Y,Z,phi,theta,psi).
        Matrix m_position;
        //! Leader's simulated velocity (u,v,w,p,q,r).
        Matrix m_velocity;
        //! Leader's simulated state
        IMC::SimulatedState m_sstate;
        //! Simulation and control time variables
        double m_clock_diff;
        double m_last_leader_update;
        double m_last_ctrl_update;
        Matrix m_last_state_estim;
        Matrix m_last_simctrl_update;
        //! Last time debug information was shown
        double m_last_time_debug;
        double m_last_time_trace;

        //! System state variables
        Matrix m_uav_state;
        Matrix m_uav_accel;
        double m_airspeed;
        Matrix m_wind;

        //! System command variables
        Matrix m_uav_ctrl;

        //! Vehicle commands
        IMC::DesiredRoll m_bank_cmd;
        IMC::DesiredSpeed  m_airspeed_cmd;

        //! Number of team vehicles
        int m_uav_n;

        //! Process logic control variables
        bool m_team_state_init;
        bool m_valid_airspeed;

        //! Simulation process frequency
        double m_frequency;

        //! Leader initial state
        IMC::LeaderState m_init_leader;
        bool m_init_leader_set;

        // Debug flag
        bool m_debug;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          //m_models(NULL),
          //m_model(NULL),
          m_clock_diff(0.0),
          m_position(6, 1, 0.0),
          m_velocity(6, 1, 0.0),
          m_last_time_debug(std::min(-1.0, Clock::get())),
          m_last_time_trace(std::min(-1.0, Clock::get())),
          m_uav_state(12, 1, 0.0),
          m_uav_accel(3, 1, 0.0),
          m_airspeed(0.0),
          m_wind(3, 1, 0.0),
          m_uav_n(1),
          m_team_state_init(false),
          m_valid_airspeed(false),
          m_frequency(0.0),
          m_debug(false)
        {
          param("Predicted Control Frequency", m_args.ctrl_frequency)
            .defaultValue("20.0")
            .description("Frequency at which simulated vehicles control is executed");

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

          param("Initial Latitude", m_args.init_lat)
          .defaultValue("39.09")
          .description("Initial state latitude");

          param("Initial Longitude", m_args.init_lon)
          .defaultValue("-8.964")
          .description("Initial state longitude");

          param("Initial Altitude", m_args.init_alt)
          .defaultValue("147.3")
          .description("Initial state WGS-84 geoid altitude");

          param("Initial Speed", m_args.init_speed)
          .defaultValue("18.0")
          .description("Initial state airspeed");

          param("Initial Roll", m_args.init_roll)
          .defaultValue("0.0")
          .description("Initial state bank");

          param("Initial Yaw", m_args.init_yaw)
          .defaultValue("0.0")
          .description("Initial state yaw");

          param("Debug Level", m_args.debug)
          .defaultValue("")
          .description("Kind of debug");

          // Message binding
          bind<IMC::LeaderState>(this);
          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::EstimatedStreamVelocity>(this);
          bind<IMC::SimulatedState>(this);
          bind<IMC::Acceleration>(this);
          bind<IMC::DesiredRoll>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::EstimatedState>(this);
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
          debug("Number of UAVs -> %d", m_uav_n);
          debug("Current UAV -> %d", m_args.uav_ind);

          m_llh_ref_pos[0] = 0.0;
          m_llh_ref_pos[1] = 0.0;
          m_llh_ref_pos[2] = 0.0;

          //! Airspeed value initialization
          m_airspeed = m_args.init_speed;
          m_airspeed_cmd.value = m_airspeed;

          m_frequency = this->getFrequency();
          if (m_args.debug == "Debug" || m_args.debug == "Trace" ||
              m_args.debug == "Spew")
            m_debug = true;

          //! Initialize the leader vehicle model
          //! Model initialization
          debug("Formation leader model initialization");
          //! - Altitude initialization
          //m_position(2) = m_args.init_alt;
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
          //! - Simulation type
          m_model->m_sim_type = m_args.sim_type;

          if (m_args.uav_ind == 0)
          {
            //! Leader state initialization
            debug("Formation LeaderState initialization");
            m_init_leader.op = IMC::LeaderState::OP_SET;
            m_init_leader.lat = DUNE::Math::Angles::radians(m_args.init_lat);
            m_init_leader.lon = DUNE::Math::Angles::radians(m_args.init_lon);
            m_init_leader.height = m_args.init_alt;
            m_init_leader.x = m_position(0);
            m_init_leader.y = m_position(1);
            m_init_leader.z = m_position(2);
            m_init_leader.phi = m_position(3);
            m_init_leader.theta = m_position(4);
            m_init_leader.psi = m_position(5);
            m_init_leader.vx = m_velocity(0);
            m_init_leader.vy = m_velocity(1);
            m_init_leader.vz = m_velocity(2);
            m_init_leader.p = m_velocity(3);
            m_init_leader.q = m_velocity(4);
            m_init_leader.r = m_velocity(5);
            m_init_leader.svx = m_wind(0);
            m_init_leader.svy = m_wind(1);
            m_init_leader.svz = m_wind(2);
            setLeaderState(&m_init_leader);

            debug("Initial latitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lat));
            debug("Initial longitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lon));
            debug("Initial altitude: %1.4fm", m_init_leader.height);
            debug("Initial x position: %1.4f", m_position(0));
            debug("Initial y position: %1.4f", m_position(1));
            debug("Initial z position: %1.4f", m_position(2));
            debug("Initial roll angle: %1.4f", m_position(3));
            debug("Initial pitch angle: %1.4f", m_position(4));
            debug("Initial yaw angle: %1.4f", m_position(5));
            debug("Initial x speed: %1.4f", m_velocity(0));
            debug("Initial y speed: %1.4f", m_velocity(1));
            debug("Initial z speed: %1.4f", m_velocity(2));
            debug("Initial roll rate: %1.4f", m_velocity(3));
            debug("Initial pitch rate: %1.4f", m_velocity(4));
            debug("Initial yaw rate: %1.4f", m_velocity(5));
            debug("Initial x wind speed: %1.4f", m_wind(0));
            debug("Initial y wind speed: %1.4f", m_wind(1));
            debug("Initial z wind speed: %1.4f", m_wind(2));

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
            debug("Vehicles state and command vectors initialization");
            //! Initialize vehicles state
            m_uav_state = DUNE::Math::Matrix(12, m_uav_n+1, 0.0);
            //! Initialize vehicles commands
            m_uav_ctrl = DUNE::Math::Matrix(3, m_uav_n, 0.0);

            //! Start the team vehicles simulation and control time
            m_last_state_estim = Matrix(m_uav_n + 1, 1, 0.0);
            m_last_simctrl_update = Matrix(m_uav_n, 1, -1);

            //! Initialize the simulated vehicles models
            debug("Simulated vehicles models initialization");
            UAVSimulation* model;
            for (int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
            {
              //! - State  and control parameters initialization
              model = new DUNE::Simulation::UAVSimulation(
                  m_args.formation_pos.get(0, 2, ind_uav, ind_uav).vertCat(m_position.get(3, 5, 0, 0)),
                  m_velocity, m_args.c_bank, m_args.c_speed);
              //! - Simulation type
              model->m_sim_type = m_args.sim_type;
              //! - Commands initialization
              model->command(m_position(3), m_airspeed);
              //! Add model to the models vector
              m_models.push_back(model);
              debug("Simulated vehicle model initialized for vehicle %d.", ind_uav+1);
            }
          }

          //! Start the simulation time
          m_last_leader_update = Clock::get();

          //! Start the control time
          m_last_ctrl_update = Clock::get();

          spew("Resource acquisition end");
        }

        void
        onResourceRelease(void)
        {
        }

        void
        consume(const IMC::LeaderState* msg)
        {
          if (m_args.uav_ind == 0 && msg->op == IMC::LeaderState::OP_SET)
          {
            debug("Consuming LeaderState");

            setLeaderState(msg);

            /*
            // Save message to cache.
            IMC::CacheControl cop;
            cop.op = IMC::CacheControl::COP_STORE;
            cop.message.set(*msg);
            dispatch(cop);
            */
          }
        }

        void
        consume(const IMC::IndicatedSpeed* msg)
        {
          if (m_args.uav_ind > 0 && msg->getSource() == getSystemId())
          {
            //! Get current vehicle airspeed
            m_airspeed = msg->value;
            if (!m_valid_airspeed)
            {
              m_valid_airspeed = 1;
              trace("Valid airspeed in.");
              m_uav_ctrl(1, m_args.uav_ind-1) = m_airspeed;
            }
          }
        }

        void
        consume(const IMC::EstimatedStreamVelocity* msg)
        {
          double t_wind[3] = {msg->x, msg->y, msg->z};
          m_wind = Matrix(t_wind, 3, 1);
          // To complete - Send estimated wind to the global formation management thread
        }

        void
        consume(const IMC::SimulatedState* msg)
        {
          // ToDo - Used formation leader name from configuration parameters or a formation definition message
          if (m_args.uav_ind > 0 && msg->getSource() == resolveSystemName("form-leader-01"))
          {
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

            if (!isActive() && m_uav_n == 1)
              requestActivation();
          }
        }

        void
        consume(const IMC::Acceleration* msg)
        {
          if (m_args.uav_ind > 0)
          {
            double mt_uav_accel[12] = {msg->x, msg->y, msg->z};
            if (msg->getSource() == getSystemId())
            {
              //! Get current vehicle acceleration state
              m_uav_accel.set(0, 2, m_args.uav_ind, m_args.uav_ind, Matrix(mt_uav_accel, 3, 1));
            }
            else // To complete - Check that the acceleration state is from a team member
            {
              //! To complete - Get team vehicles acceleration state
              // m_uav_state.set(0, 11, m_args.uav_ind, m_args.uav_ind, Matrix(vt_uav_state, 12, 1));
            }
          }
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
          //! Skip formation flight controller if running as the leader vehicle
          if (m_args.uav_ind > 0)
          {
            //! Declaration
            UAVSimulation* model;
            Matrix vd_cmd = Matrix(3, 1);

            if (msg->getSource() == getSystemId())
            {
              //===========================================
              //! Vehicle own updated state
              //===========================================
              m_llh_ref_pos[0] = msg->lat;
              m_llh_ref_pos[1] = msg->lon;
              m_llh_ref_pos[2] = msg->height;
              double vt_uav_state[12] = {msg->x,   msg->y,     msg->z,
                  msg->vx,  msg->vy,    msg->vz,
                  msg->phi, msg->theta, msg->psi,
                  msg->p,   msg->q,     msg->r};
              m_uav_state.set(0, 11, m_args.uav_ind, m_args.uav_ind, Matrix(vt_uav_state, 12, 1));
              // To complete - Check the difference between the vehicle real and simulated state

              //! - Update own vehicle simulation model
              model = m_models[m_args.uav_ind-1];
              model->setPosition(m_uav_state.get(0, 2, m_args.uav_ind, m_args.uav_ind).
                         vertCat(m_uav_state.get(6, 8, m_args.uav_ind, m_args.uav_ind)));
              model->setVelocity(m_uav_state.get(3, 5, m_args.uav_ind, m_args.uav_ind).
                         vertCat(m_uav_state.get(9, 11, m_args.uav_ind, m_args.uav_ind)));
              m_models[m_args.uav_ind-1] = model;

              //! Update the time control variables
              m_clock_diff = msg->getTimeStamp() - Clock::get();
              m_last_state_estim(m_args.uav_ind) = msg->getTimeStamp();

              if (!isActive())
                return;

              //===========================================
              //! Team prediction update
              //===========================================

              /*
              double vt_uav_state_own3[6] = {m_uav_state(0, m_args.uav_ind), m_uav_state(1, m_args.uav_ind), m_uav_state(2, m_args.uav_ind),
              m_uav_state(3, m_args.uav_ind), m_uav_state(4, m_args.uav_ind), m_uav_state(5, m_args.uav_ind)};
              */

              //! Update team simulated state for standard time periods
              teamPeriodicUpdate(msg->getTimeStamp());
              teamUnevenUpdate(msg->getTimeStamp());

              //===========================================
              //! Control computation
              //===========================================

              /*
              double vt_uav_state_own2[6] = {m_uav_state(0, m_args.uav_ind), m_uav_state(1, m_args.uav_ind), m_uav_state(2, m_args.uav_ind),
                  m_uav_state(3, m_args.uav_ind), m_uav_state(4, m_args.uav_ind), m_uav_state(5, m_args.uav_ind)};
              */

              vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, m_args.uav_ind-1, m_args.uav_ind-1));
              formationControl(m_uav_state, m_uav_accel, m_args.uav_ind, msg->getTimeStamp() - m_last_ctrl_update, &vd_cmd, m_debug);
              m_uav_ctrl.set(0, 2, m_args.uav_ind-1, m_args.uav_ind-1, vd_cmd.get(0, 2, 0, 0));

              if (m_debug)
              {
                //IMC::FormationEval form_eval;
                IMC::FormationEval<IMC::RelativeState> form_rel_state;
                IMC::RelativeState rel_state;

                // Iterate point list
                for (int ind_uav = 0; ind_uav <= m_uav_n; ind_uav++)
                {
                  if (m_args.uav_ind == ind_uav)
                    continue;

                  form_rel_state.push_back(rel_state);
                }
              }

              //! - Update own vehicle simulation model - Controls
              model->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));
              m_models[m_args.uav_ind-1] = model;

              //! Update the time control variables
              m_last_ctrl_update = msg->getTimeStamp();
              m_last_simctrl_update(m_args.uav_ind-1) = msg->getTimeStamp();
              //! Get estimated state time stamp
//              debug("Clock time: %2.3f; Estimated state time stamp: %2.3f", d_time, msg->getTimeStamp());

              //===========================================
              //! Commands output
              //===========================================

              m_bank_cmd.value = m_uav_ctrl(0, m_args.uav_ind-1);
              dispatch(m_bank_cmd);
              m_airspeed_cmd.value = m_uav_ctrl(1, m_args.uav_ind-1);
              dispatch(m_airspeed_cmd);
              /*
               m_altitude_cmd.value = m_uav_ctrl(2, m_args.uav_ind-1);
               dispatch(m_altitude_cmd);
               */
            }
            else
            {
              debug("EstimatedState start for vehicle %s", resolveSystemId(msg->getSource()));
              //! Get team vehicle updated state
              //! To complete - Check that the estimated state is from a team member

              //! To complete - Get vehicle team index
              int ind_uav = 100;

              //! Get estimated state time stamp
              debug("EstimatedState 1 for vehicle %s", resolveSystemId(msg->getSource()));
              m_last_state_estim(ind_uav) = msg->getTimeStamp();
              m_last_simctrl_update(ind_uav-1)  = msg->getTimeStamp();

              debug("EstimatedState 2 for vehicle %s", resolveSystemId(msg->getSource()));
              //! - State update
              double vt_uav_state[12] = {msg->x,   msg->y,     msg->z,
                  msg->vx,  msg->vy,    msg->vz,
                  msg->phi, msg->theta, msg->psi,
                  msg->p,   msg->q,     msg->r};
              //! Adjust vehicle offset position from its reference
              //! frame to the real vehicle reference frame
              positionReframing(m_llh_ref_pos[0], m_llh_ref_pos[1], m_llh_ref_pos[2],
                  msg->lat, msg->lon, msg->height, &vt_uav_state[0], &vt_uav_state[1], &vt_uav_state[2]);
              //! Update vehicle state vector
              m_uav_state.set(0, 11, ind_uav, ind_uav, Matrix(vt_uav_state, 12, 1));

              //! - Update own vehicle simulation model
              model = m_models[ind_uav-1];
              model->setPosition(m_uav_state.get(0, 2, ind_uav, ind_uav).vertCat(m_uav_state.get(6, 8, ind_uav, ind_uav)));
              model->setVelocity(m_uav_state.get(3, 5, ind_uav, ind_uav).vertCat(m_uav_state.get(9, 11, ind_uav, ind_uav)));
              model->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));
              m_models[ind_uav-1] = model;

              //! - Commands update
              // To complete - Compute the estimated vehicle acceleration
              Matrix vd_uav_accel = Matrix(3, 1, 0.0);
              vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, ind_uav-1, ind_uav-1));
              formationControl(m_uav_state, vd_uav_accel, ind_uav, 1/m_args.ctrl_frequency, &vd_cmd, false);
              m_uav_ctrl.set(0, 2, ind_uav-1, ind_uav-1, vd_cmd.get(0, 2, 0, 0));

              //! - Update current vehicle simulation model
              model->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));
              m_models[ind_uav-1] = model;

              //! Check if all vehicles states were initialized
              if (!m_team_state_init)
              {
                if (!m_valid_airspeed)
                  return;

                bool b_state_init = true;
                for (ind_uav = 1; ind_uav <= m_uav_n; ++ind_uav)
                {
                  // Do not check current vehicle state initialization
                  if (ind_uav == m_args.uav_ind)
                    continue;

                  if (m_last_simctrl_update(ind_uav-1) < 0.0)
                    b_state_init = false;
                  break;
                }
                m_team_state_init = b_state_init;
              }

              if (!isActive() && m_team_state_init)
                requestActivation();
            }
          }
        }

        void
        task(void)
        {
          //! Handle IMC messages from bus
          consumeMessages();

          if (!isActive())
          {
            //! Initialize leader state
            if (m_args.uav_ind == 0)
              dispatch(m_init_leader);

            spew("Formation flight task is inactive (%s).", this->getSystemName());
            return;
          }

          if (m_args.uav_ind == 0)
          {
            //! Update the leader vehicle commands and states

            //! Declaration
            double d_time;
            double d_timestep;

            //! Compute the time step
            d_time  = Clock::get();
            d_timestep = d_time - m_last_leader_update;
            m_last_leader_update = d_time;


            // ========= Trace ===========
            /*
            if (d_time >= m_last_time_trace + 0.1)
            {
              //trace("Simulating: %s", m_model->m_sim_type);
              trace("Bank: %1.2fº        - Commanded bank: %1.2fº",
                  DUNE::Math::Angles::degrees(m_position(3)),
                  DUNE::Math::Angles::degrees(m_model->m_bank_cmd));
              trace("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->getAirspeed(), m_model->m_airspeed_cmd);
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
            //! Dynamics
            //==========================================================================

            m_model->update(d_timestep);
            m_position = m_model->getPosition();
            m_velocity = m_model->getVelocity();

            // ========= Debug ===========
            /*
            if (d_time >= m_last_time_debug + 1.0)
            {
              //debug("Simulating: %s", m_model->m_sim_type);
              debug("Bank: %1.2fº        - Commanded bank: %1.2fº",
                  DUNE::Math::Angles::degrees(m_position(3)),
                  DUNE::Math::Angles::degrees(m_model->m_bank_cmd));
              debug("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->getAirspeed(), m_model->m_airspeed_cmd);
              debug("Yaw: %1.2f", DUNE::Math::Angles::degrees(m_position(5)));
              debug("Current latitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lat));
              debug("Current longitude: %1.4fº", DUNE::Math::Angles::degrees(m_init_leader.lon));
              debug("Current altitude: %1.4fm", m_init_leader.height);
              debug("Current x position: %1.4f", m_position(0));
              debug("Current y position: %1.4f", m_position(1));
              debug("Current z position: %1.4f", m_position(2));
              debug("Current roll angle: %1.4f", m_position(3));
              debug("Current pitch angle: %1.4f", m_position(4));
              debug("Current yaw angle: %1.4f", m_position(5));
              debug("Current x speed: %1.4f", m_velocity(0));
              debug("Current y speed: %1.4f", m_velocity(1));
              debug("Current z speed: %1.4f", m_velocity(2));
              debug("Current roll rate: %1.4f", m_velocity(3));
              debug("Current pitch rate: %1.4f", m_velocity(4));
              debug("Current yaw rate: %1.4f", m_velocity(5));
              debug("Current x wind speed: %1.4f", m_wind(0));
              debug("Current y wind speed: %1.4f", m_wind(1));
              debug("Current z wind speed: %1.4f", m_wind(2));
              m_last_time_debug = d_time;
            }
            */
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

            //! Set the destination ID as the system own ID (for virtual leader autopilot simulation)
            m_sstate.setDestination(getSystemId());

            //! Send simulated state message (with the system own ID as destination)
            dispatch(m_sstate);

            /*
            //! Set the destination ID as the real vehicle system ID (for virtual leader data transmission)
            m_sstate.setDestination(getSystemId());

            //! Send simulated state message (with the real vehicle system ID as destination)
            dispatch(m_sstate);
            */
          }
          else
          {
            //! Update the simulated vehicles commands and states

            // ToDo - Check if leader simulation last update is recent enough: m_last_state_estim(0)
            // ToDo - Check if team vehicles last update is recent enough: m_last_state_estim(1:m_uav_n)

            //! Update team simulated state for standard time periods
            teamPeriodicUpdate(m_clock_diff + Clock::get());
          }
        }

        void
        checkParameters(void)
        {
          //! Check if the formation positions matrix has a suitable size
          if (m_args.formation_pos.rows()%3 != 0)
            err("Number of UAV positions coordinates in the formation matrix (%d) is not a multiple of 3!",
                m_args.formation_pos.rows());

          //! Check if the formation positions matrix has the right size:
          //! 3 rows and as many columns as the number of UAVs
          if (m_args.formation_pos.rows()/3 > 1)
          {
            //! - If not, compute the number of UAVs included and resize the matrix
            m_uav_n = m_args.formation_pos.rows()/3;
            m_args.formation_pos.resizeAndKeep(3, m_uav_n);
          }
          else
            m_uav_n = m_args.formation_pos.columns();

          //! Check if the number of UAVs in the formation positions matrix
          //! matches that indicated as a parameter
          if (m_uav_n != m_args.uav_n)
          {
            war("Number of the UAVs in the formation matrix (%d) is different from the total UAV count indicated (%d)!",
                 m_uav_n, m_args.uav_n);
            m_uav_n = (m_uav_n < m_args.uav_n)?m_uav_n:m_args.uav_n;
          }
        }

        void
        setLeaderState(const IMC::LeaderState* msg)
        {
          if (!isActive())
            requestActivation();

          //! Defining GpsFix for autopilot simulator
          IMC::GpsFix origin;
          origin.lat = msg->lat;
          origin.lon = msg->lon;
          origin.height = msg->height;
          origin.setDestination(getSystemId());
          dispatch(origin);

          //! Defining origin.
          m_sstate.lat = msg->lat;
          m_sstate.lon = msg->lon;
          m_sstate.height = msg->height;

          //! - State initialization
          m_position = m_model->getPosition();
          m_position(0) = msg->x;
          m_position(1) = msg->y;
          m_position(2) = msg->z;
          m_position(3) = msg->phi;
          m_position(4) = msg->theta;
          m_position(5) = msg->psi;
          m_model->setPosition(m_position);
          m_velocity(0) = msg->vx;
          m_velocity(1) = msg->vy;
          m_velocity(2) = msg->vz;
          m_velocity(3) = msg->p;
          m_velocity(4) = msg->q;
          m_velocity(5) = msg->r;
          m_model->setVelocity(m_velocity);
          m_wind(0) = msg->svx;
          m_wind(1) = msg->svy;
          m_wind(2) = msg->svz;
          m_model->m_wind = m_wind;

          m_last_leader_update = Clock::get();
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
        //! @param[in] lon2 new reference longitude (rad).
        //! @param[in] hei2 new reference height (m).
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
          double d_timestep_sim = 1/m_frequency;
          double d_timestep_ctrl = 1/m_args.ctrl_frequency;
          double d_sim_time;
          Matrix vi_sim_time = Matrix(m_uav_n+1, 1);
          int ind_time;
          int i_time_n = m_uav_n;
          Matrix vd_cmd = Matrix(3, 1);
          UAVSimulation* model;

          //! Order the update times as an increasing sequence
          for (int ind_uav = 0; ind_uav <= m_uav_n; ++ind_uav)
            vi_sim_time(ind_uav) = ind_uav;

          for (int ind_uav = 1; ind_uav < i_time_n; ++ind_uav)
          {
            for (int ind_uav2 = ind_uav + 1; ind_uav2 <= i_time_n; ++ind_uav2)
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
                for (ind_time = ind_uav2; ind_time < i_time_n; ++ind_time)
                  vi_sim_time(ind_time) = vi_sim_time(ind_time + 1);
              }
            }
          }

          //! Select the oldest prediction time reference
          ind_time = 0;
          d_sim_time = m_last_state_estim(vi_sim_time(ind_time));
          while (d_sim_time <= 0.0 && ind_time <= i_time_n)
          {
            m_last_state_estim(vi_sim_time(ind_time)) = d_time;
            if (ind_time < i_time_n)
              ++ind_time;
            d_sim_time = m_last_state_estim(vi_sim_time(ind_time));
          }


          //! Loop the time references to update all prediction up to the "current" time
          while (d_sim_time + d_timestep_sim <= d_time)
          {
            //! Leader state prediction - Update the simulated vehicle state
            if (m_last_state_estim(0) <= d_sim_time)
              m_model->update(d_timestep_sim);

            //! Team state prediction - Update the simulated vehicles state
            for (int ind_uav = 1; ind_uav <= m_uav_n; ++ind_uav)
            {
              if (m_last_state_estim(ind_uav) <= d_sim_time)
              {
                //! Retrieve current vehicle model
                model = m_models[ind_uav-1];
                //! State update
                model->update(d_timestep_sim);
                //! Update current vehicle model to the vector
                m_models[ind_uav-1] = model;
              }
            }

            //! Team control prediction - Update the simulated vehicles commands
            for (int ind_uav = 1; ind_uav <= m_uav_n; ++ind_uav)
            {
              //! Commands update - At control frequency
              if (m_last_state_estim(ind_uav) <= d_sim_time &&
                  m_last_simctrl_update(ind_uav-1) + d_timestep_ctrl < d_sim_time)
              {
                //! Update team simulated state for uneven time periods
                teamUnevenUpdate(d_time);

                // To complete - Compute the estimated vehicle acceleration
                Matrix vd_uav_accel = Matrix(3, 1, 0.0);

                //! Compute simulated vehicle formation controls
                vd_cmd.set(0, 2, 0, 0, m_uav_ctrl.get(0, 2, ind_uav-1, ind_uav-1));
                formationControl(m_uav_state, vd_uav_accel, ind_uav, d_timestep_ctrl, &vd_cmd, false);
                m_uav_ctrl.set(0, 2, ind_uav-1, ind_uav-1, vd_cmd.get(0, 2, 0, 0));

                //! Retrieve current vehicle model
                model = m_models[ind_uav-1];
                //! - Update current vehicle model control commands
                model->command(vd_cmd(0), vd_cmd(1), vd_cmd(2));
                //! Update current vehicle model to the vector
                m_models[ind_uav-1] = model;

                //! Update the control prediction time
                m_last_simctrl_update(ind_uav-1) = d_sim_time;
              }
            }

            //! Update the state prediction time
            m_last_state_estim(vi_sim_time(ind_time)) += d_timestep_sim;

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
          UAVSimulation* model;

          //! Update team simulated state for remaining time
          //! - Leader state prediction - Update the simulated vehicle state
          m_model->update(d_time - m_last_state_estim(0));
          vd_pos = m_model->getPosition();
          vd_vel = m_model->getVelocity();
          m_uav_state.set(0, 11, 0, 0, vd_pos.get(0, 2, 0, 0).vertCat(vd_vel.get(0, 2, 0, 0).
                          vertCat(vd_pos.get(3, 5, 0, 0).vertCat(vd_vel.get(3, 5, 0, 0)))));

          //! - Team state prediction - Update the simulated vehicles state
          for (int ind_uav = 1; ind_uav <= m_uav_n; ++ind_uav)
          {
            //!  * Retrieve current vehicle model
            model = m_models[ind_uav-1];

            //!  * State update
            model->update(d_time - m_last_state_estim(ind_uav));
            vd_pos = model->getPosition();
            vd_vel = model->getVelocity();
            m_uav_state.set(0, 11, ind_uav, ind_uav,
                            vd_pos.get(0, 2, 0, 0).vertCat(vd_vel.get(0, 2, 0, 0).
                            vertCat(vd_pos.get(3, 5, 0, 0).vertCat(vd_vel.get(3, 5, 0, 0)))));
          }
        }

        void
        formationControl(const Matrix& md_uav_state, const Matrix& md_uav_accel,
            const int& ind_uav, const double& d_time_step, Matrix* vd_cmd, const bool b_debug)
        {
          /*
          double vt_uav_state_own1[6] = {md_uav_state(0, ind_uav), md_uav_state(1, ind_uav), md_uav_state(2, ind_uav),
                        md_uav_state(3, ind_uav), md_uav_state(4, ind_uav), md_uav_state(5, ind_uav)};
          */
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
          double d_flow_accel_max = m_args.flow_accel_max;
          double d_control_margin = m_args.deconfliction_offset;
          double d_deconfliction_dist = m_args.safe_dist + d_control_margin;
          double d_acc_saf_marg = m_args.acc_safety_marg;
          double k_form_ref = (m_uav_n > 1)?m_args.k_leader*(m_uav_n-1):1.0;
          double k_deconfl_vel = m_args.k_deconfliction*k_form_ref;
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
              vd_form_pos1 = md_form_pos.get(0, 1, ind_uav-1, ind_uav-1);
              /*
            Matrix vd_form_vel1[2] = {0, 0};
            Matrix vd_form_acc1[2] = {0, 0};
               */
            }
            else if (i_formation_frame == 2)
            {
              //! Path reference frame
              //! In-formation adjustment
              t_uav_turnrad = d_form_turnrad - md_form_pos(1, ind_uav-1);
              t_cos_gamma = std::cos(md_form_pos(0, ind_uav-1)/d_form_turnrad);
              t_sin_gamma = std::sin(md_form_pos(0, ind_uav-1)/d_form_turnrad);
              // - Position
              vt_form_dir[0] = t_sin_gamma;
              vt_form_dir[1] = 1 - t_cos_gamma;
              double vt_form_pos1[2] = {0, md_form_pos(1, ind_uav-1)};
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
              vd_form_pos1 = md_form_pos.get(0, 1, ind_uav-1, ind_uav-1);
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

          // check - verificar inclusão do líder como elemento 0 dos vectores e matrizes
          // da formação, em vez de elemento m_uav_n em apenas algumas
          for (int ind_uav2 = 1; ind_uav2 < m_uav_n; ind_uav2++)
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
              vd_inter_uav_des_pos = md_form_pos.get(0, 1, ind_uav-1, ind_uav-1) -
                  md_form_pos.get(0, 1, ind_uav2-1, ind_uav2-1);
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
                t_uav_turnrad = d_form_turnrad - md_form_pos(1, ind_uav2-1);
                t_cos_gamma = std::cos(md_form_pos(0, ind_uav2-1)/d_form_turnrad);
                t_sin_gamma = std::sin(md_form_pos(0, ind_uav2-1)/d_form_turnrad);
                // - Position
                vt_form_dir[0] = t_sin_gamma;
                vt_form_dir[1] = 1 - t_cos_gamma;
                vt_form_pos2[0] = 0;
                vt_form_pos2[1] = md_form_pos(1, ind_uav-1);
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
                vd_form_pos2 = md_form_pos.get(0, 1, ind_uav2-1, ind_uav2-1);
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
            if (b_debug)
            {
              *vd_inter_uav_dist(ind_uav2, d_inter_uav_dist);
              *md_inter_uav_x.set(0, 1, ind_uav2, ind_uav2, vd_inter_uav_x);
                  // // ======== Formation perturbation test - Mesh stability =======
                  // if ind_UAV == 2
                  //   vd_err = vd_err + vd_Pert;
                  // end
                  // // ======== Formation perturbation test - Mesh stability =======
              *md_err.set(0, 1, ind_uav2, ind_uav2) = vd_err;
              *md_dyn.set(0, 1, ind_uav2, ind_uav2, vd_err'*md_rot, ...
                                               vd_deriv_err'*md_rot, vd_surf_uav(:, ind_uav2)'*md_Rot);
              *md_virt_err.set(0, 1, ind_uav2, ind_uav2, vt_virt_err_uav.get(0, 1, ind_uav2, ind_uav2));
                // // ======== Formation perturbation test - Mesh stability =======
                // if ind_uav == 2
                //   vd_orig_err += + vd_Pert;
                // end
                // // ======== Formation perturbation test - Mesh stability =======
               *vd_rel_err_norm(ind_uav2) = vd_orig_err.norm_2();
            }
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

          /*
          // Debug
          double vt_uav_state_lead[6] = {md_uav_state(0, ind_uav_lead), md_uav_state(1, ind_uav_lead), md_uav_state(2, ind_uav_lead),
              md_uav_state(3, ind_uav_lead), md_uav_state(4, ind_uav_lead), md_uav_state(5, ind_uav_lead)};
          double vt_uav_state_own[6] = {md_uav_state(0, ind_uav), md_uav_state(1, ind_uav), md_uav_state(2, ind_uav),
              md_uav_state(3, ind_uav), md_uav_state(4, ind_uav), md_uav_state(5, ind_uav)};
           */

          /* --- Used just for control performance evaluation ---
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
        // vd_inter_uav_y = md_rot.column(1);
           */


          if (i_formation_frame == 0)
          {
            //! Earth reference frame
            //! - Position
            vd_inter_uav_des_pos = md_form_pos.get(0, 1, ind_uav-1, ind_uav-1);
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
          vt_virt_err_uav(1, ind_uav_lead) -= d_c3 * d_c4 * d_deriv_err_y/((d_err_y - d_c4)*(d_err_y - d_c4));

          //! Tracking output
          /*
        if nargout > 3
        varargout{3}(ind_uav_lead) = d_inter_uav_dist;
        if nargout > 5
        varargout{5}(ind_uav_lead, :) = vd_inter_uav_x';
        if nargout > 6
        // // ======== Formation perturbation test - Mesh stability =======
        // if ind_uav == 2
        //   vd_err += vd_Pert;
        // end
        // // ======== Formation perturbation test - Mesh stability =======
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
          Matrix vd_ctrl_weight = Matrix(m_uav_n+1, 1, 1.0);
          vd_ctrl_weight(m_uav_n) = k_form_ref;
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
            spew("Sat: %1.2f - %1.2f, %1.2f!", d_surf_norm, vd_surf(0), vd_surf(1));
          }
          else
            vd_sat_surf = vd_surf/d_ss_bnd_layer;

          // Check - verificar conversão para c++
          Matrix vd_surf_conv = transpose(md_rot_ground2yaw)*md_gain_mtx*md_rot_ground2yaw * vd_sat_surf;

          //!-------------------------------------------
          //! Sliding surface unknown disturbance term
          //!-------------------------------------------

          // vd_surf_unkn = (2 * (m_uav_n-1) + k_form_ref) * d_flow_accel_max * vd_surf_unit;

          // vd_surf_unkn1 = ((m_uav_n-1)/(m_uav_n-1+k_form_ref)+1)*...
          //     d_flow_accel_max*vd_surf_unit;

          vd_surf_unit = Matrix(2, 1);

          //! UAVs Uncertainty compensation

          double t_SurfSqr;
          for (int ind_uav2 = 0; ind_uav2 < m_uav_n; ind_uav2++)
          {
            // Skipping the current UAV index
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
          //! Leader/Uncertainty compensation
          t_SurfSqr = vd_surf_uav(0, m_uav_n)*vd_surf_uav(0, m_uav_n) +
              vd_surf_uav(1, m_uav_n)*vd_surf_uav(1, m_uav_n);
          if (t_SurfSqr)
            vd_surf_unit += k_form_ref*vd_surf_uav.get(0, 1, m_uav_n, m_uav_n)*vd_ctrl_weight(m_uav_n)/std::sqrt(t_SurfSqr);
          //! Formation/Uncertainty compensation
          Matrix vd_surf_unkn = vd_surf_unit*d_flow_accel_max/(m_uav_n-1+k_form_ref);
          /*
        if (ind_uav == 1)
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

          (*vd_cmd)(2, m_args.uav_ind-1) = md_form_pos(2, ind_uav-1) + md_uav_state(2, 0);

          //-------------------------------------------
          //! Speed control
          //-------------------------------------------

          double d_accel_x_cmd = std::min(std::max(vd_ctrl(0), -d_accel_lim_x), d_accel_lim_x);
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
          (*vd_cmd)(0) = std::atan(vd_ctrl(1)/d_g); // Desired bank

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
          (*vd_cmd)(0) = trimValue((*vd_cmd)(0), -d_bank_lim, d_bank_lim);
          vd_ctrl(1) = d_g*std::tan((*vd_cmd)(0)); // Real lateral acceleration command

          /*
          // Debug
          double vt_cmd2[3] = {(*vd_cmd)(0), (*vd_cmd)(1), (*vd_cmd)(2)};
          inf("Debugging");
           */

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
      };
    }
  }
}

DUNE_TASK
