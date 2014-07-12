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
        double c_alt;
        //! - Constraints
        double l_bank_rate;
        double l_lon_accel;
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
        double m_last_leader_update;
        double m_last_ctrl_update;
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
        Matrix m_wind;

        //! System command variables
        Matrix m_uav_ctrl;

        //! Vehicle commands
        IMC::DesiredRoll m_bank_cmd;
        IMC::DesiredSpeed m_airspeed_cmd;
        //IMC::DesiredZ m_altitude_cmd;
        double m_tas_cmd_leader;
        double m_alt_cmd_leader;

        //! Number of team vehicles
        int m_uav_n;

        //! Process logic control variables
        bool m_ctrl_active;
        bool m_team_plan_init;
        bool m_team_leader_init;
        bool m_team_state_init;
        bool m_valid_airspeed;

        //! Simulation process frequency
        double m_frequency;

        //! Leader initial state
        IMC::LeaderState m_init_leader;
        bool m_init_leader_set;

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

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Periodic(name, ctx),
          //m_models(NULL),
          //m_model(NULL),
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
          m_uav_n(1),
          m_ctrl_active(false),
          m_team_plan_init(false),
          m_team_leader_init(false),
          m_team_state_init(false),
          m_valid_airspeed(false),
          m_frequency(0.0),
          m_debug(false),
          m_alias_id(UINT_MAX)
        {
          // Definition of configuration parameters.
          param("Commands source", m_args.cmd_src)
          .defaultValue("")
          .description("List of <Command>:<System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass a specific command.");

          param("Source Alias", m_args.src_alias)
          .defaultValue("")
          .description("Emulated system id.");

          param("Predicted Control Frequency", m_args.ctrl_frequency)
          .defaultValue("20.0")
          .description("Frequency at which simulated vehicles control is executed");

          param("Formation Longitudinal Gain", m_args.k_longitudinal)
          .defaultValue("0.5")
          .description("Trajectory gain over the vehicle longitudinal direction");

          param("Formation Lateral Gain", m_args.k_lateral)
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

          param("Altitude Time Constant", m_args.c_alt)
          .defaultValue("1.0")
          .units(Units::Hertz)
          .description("Altitude controller first order time constant. Inverse of the vertical rate gain to simulate altitude dynamics");

          param("Bank Rate Limit", m_args.l_bank_rate)
          .defaultValue("0.0")
          .units(Units::DegreePerSecond)
          .description("Bank rate limit to simulate bank dynamics");

          param("Acceleration Limit", m_args.l_lon_accel)
          .defaultValue("0.0")
          .units(Units::MeterPerSquareSecond)
          .description("Longitudinal acceleration limit to simulate speed dynamics");

          param("Vertical Slope Limit", m_args.l_vert_slope)
          .defaultValue("0.0")
          .units(Units::None)
          .description("Vertical slope limit to simulate altitude dynamics");

          param("Default Latitude", m_args.default_lat)
          .defaultValue("39.09")
          .description("Initial state latitude");

          param("Default Longitude", m_args.default_lon)
          .defaultValue("-8.964")
          .description("Initial state longitude");

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
          bind<IMC::LeaderState>(this);
          bind<IMC::PlanControl>(this);
          bind<IMC::IndicatedSpeed>(this);
          bind<IMC::EstimatedStreamVelocity>(this);
          bind<IMC::SimulatedState>(this);
          bind<IMC::Acceleration>(this);
          bind<IMC::DesiredRoll>(this);
          bind<IMC::DesiredSpeed>(this);
          bind<IMC::DesiredZ>(this);
          bind<IMC::EstimatedState>(this);
        }

        void
        onUpdateParameters(void)
        {
          //! Initial parameters checking
          checkParameters();
          debug("Number of UAVs -> %d", m_uav_n);

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

          // Debug flag - for control performance monitoring
          m_debug = m_args.debug;

          updateLeaderLimits();
        }

        void
        onEntityResolution(void)
        {
          //! Process the systems and entities allowed to define a command.
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
          m_llh_ref_pos[0] = 0.0;
          m_llh_ref_pos[1] = 0.0;
          m_llh_ref_pos[2] = 0.0;

          //! Airspeed value initialization
          m_airspeed = m_args.default_speed;
          m_airspeed_cmd.value = m_airspeed;
          //m_altitude_cmd.value = m_args.default_alt;
          m_tas_cmd_leader = m_airspeed;
          m_alt_cmd_leader = m_args.default_alt;

          m_frequency = this->getFrequency();

          //! Initialize the leader vehicle model
          //! Model initialization
          debug("Formation leader model initialization");
          //! - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(m_position, m_velocity, m_args.c_bank, m_args.c_speed);
          //! - Commands initialization
          m_model->command(0, m_args.default_speed, -m_args.default_alt);
          //! - Limits definition
          if (m_args.l_bank_rate > 0)
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          if (m_args.l_lon_accel > 0)
            m_model->setAccelLim(m_args.l_lon_accel);
          //! - Simulation type
          m_model->m_sim_type = m_args.sim_type;

          //! Start the simulation time
          m_last_leader_update = Clock::get();

          spew("Resource acquisition end");
        }

        void
        onResourceRelease(void)
        {
//          for (int ind_uav = 0; ind_uav < m_uav_n; ++ind_uav)
//            Memory::clear(m_form_monitor->rel_state[ind_uav]);
//          Memory::clear(m_form_monitor);
        }

        void
        consume(const IMC::LeaderState* msg)
        {
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
//                if (m_alias_id != UINT_MAX)
//                  cop.setSource(m_alias_id);
//              dispatch(cop);
//               */
//            }
//          }
        }

        void
        consume(const IMC::PlanControl* msg)
        {
          IMC::PlanControl lead_plan_ctrl;
          // ToDo - For final implementation, the activation of plans
          // should come from a formation synchronous message
          if (m_args.uav_ind > 0)
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

            //! Reroute the PlanControl message to the virtual leader
            lead_plan_ctrl = *msg;
            lead_plan_ctrl.setDestination(resolveSystemName("form-leader-01"));
            if (m_alias_id != UINT_MAX)
              lead_plan_ctrl.setSource(m_alias_id);
            dispatch(lead_plan_ctrl);
            */

            //! Reset virtual leader state, if the PlanControl action is "Start"
            // ToDo - Use global team position to set the leader initial state
            if (msg->op == IMC::PlanControl::PC_START)
            {
              trace("Sending LeaderState to the leader.");
              m_init_leader.setDestination(resolveSystemName("form-leader-01"));
              m_init_leader.op      = IMC::LeaderState::OP_SET;
              m_init_leader.lat     = m_llh_ref_pos[0];
              m_init_leader.lon     = m_llh_ref_pos[1];
              m_init_leader.height  = m_llh_ref_pos[2];
              m_init_leader.x       = m_uav_state(0, m_args.uav_ind);
              m_init_leader.y       = m_uav_state(1, m_args.uav_ind);
              m_init_leader.z       = m_uav_state(2, m_args.uav_ind);
              m_init_leader.vx      = m_uav_state(3, m_args.uav_ind);
              m_init_leader.vy      = m_uav_state(4, m_args.uav_ind);
              m_init_leader.vz      = m_uav_state(5, m_args.uav_ind);
              m_init_leader.phi     = m_uav_state(6, m_args.uav_ind);
              m_init_leader.theta   = m_uav_state(7, m_args.uav_ind);
              m_init_leader.psi     = m_uav_state(8, m_args.uav_ind);
              m_init_leader.p       = m_uav_state(9, m_args.uav_ind);
              m_init_leader.q       = m_uav_state(10, m_args.uav_ind);
              m_init_leader.r       = m_uav_state(11, m_args.uav_ind);
              m_init_leader.svx     = m_wind(0);
              m_init_leader.svy     = m_wind(1);
              m_init_leader.svz     = m_wind(2);
              if (m_alias_id != UINT_MAX)
                m_init_leader.setSource(m_alias_id);
              dispatch(m_init_leader);
            }

            /*
            //! Initiate the leader vehicle plan
            IMC::PlanControl p_control;
            p_control.plan_id = m_args.plan;
            p_control.op = IMC::PlanControl::PC_START;
            p_control.type = IMC::PlanControl::PC_REQUEST;
            p_control.flags = IMC::PlanControl::FLG_IGNORE_ERRORS;
                if (m_alias_id != UINT_MAX)
                  p_control.setSource(m_alias_id);
            dispatch(p_control);
             */

            //! Flag virtual leader state arrival
            m_team_plan_init = true;
          }
          else
            trace("PlanControl message received.");
        }

        void
        consume(const IMC::EstimatedStreamVelocity* msg)
        {
          double t_wind[3] = {msg->x, msg->y, msg->z};
          m_wind = Matrix(t_wind, 3, 1);
          // ToDo - Send estimated wind to the global formation management thread
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

          m_model->commandBank(trimValue(msg->value, -m_args.bank_lim, m_args.bank_lim));

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

          // ToDo - Check if leader simulation last update is recent enough: m_last_state_estim(0)
          // ToDo - Check if team vehicles last update is recent enough: m_last_state_estim(1:m_uav_n)

          //! Update team simulated state for standard time periods
          teamPeriodicUpdate(m_clock_diff + Clock::get());
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
        setLeaderState(const IMC::LeaderState* lead_state)
        {
          if (!isActive())
            requestActivation();

          //! Defining GpsFix for autopilot simulator
          IMC::GpsFix origin;
          origin.lat = lead_state->lat;
          origin.lon = lead_state->lon;
          origin.height = lead_state->height;
          origin.setDestination((m_alias_id != UINT_MAX) ? m_alias_id : getSystemId());
          //! Set source system alias
          if (m_alias_id != UINT_MAX)
            origin.setSource(m_alias_id);
          dispatch(origin);

          //! Defining origin.
          m_estate_leader.lat = lead_state->lat;
          m_estate_leader.lon = lead_state->lon;
          m_estate_leader.height = lead_state->height;

          //! - State initialization
          double bank_lim = Angles::radians(m_args.bank_lim);

          m_position = m_model->getPosition();
          m_position(0) = lead_state->x;
          m_position(1) = lead_state->y;
          m_position(2) = lead_state->z;
          m_position(3) = trimValue(lead_state->phi, -bank_lim, bank_lim);
          m_position(4) = 0;
          m_position(5) = lead_state->psi;
          m_model->setPosition(m_position);
          m_velocity(0) = lead_state->vx;
          m_velocity(1) = lead_state->vy;
          m_velocity(2) = lead_state->vz;
          m_velocity(3) = 0;
          m_velocity(4) = 0;
          m_velocity(5) = lead_state->r;
          m_model->setVelocity(m_velocity);
          m_wind(0) = lead_state->svx;
          m_wind(1) = lead_state->svy;
          m_wind(2) = lead_state->svz;
          m_model->m_wind = m_wind;

          /*
          debug("---------------------------");
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
          */

          m_last_leader_update = Clock::get();
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

              m_model->update(d_timestep_sim);
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

              //! Fill position.
              m_estate_leader.x = m_position(0);
              m_estate_leader.y = m_position(1);
              m_estate_leader.z = m_position(2);

              //! Fill attitude.
              m_estate_leader.phi = m_position(3);
              m_estate_leader.theta = m_position(4);
              m_estate_leader.psi = m_position(5);

              //! Rotation matrix
              double euler_ang[3] = {m_position(3), m_position(4), m_position(5)};
              Matrix md_rot_body2gnd = Matrix(euler_ang, 3, 1).toDCM();
              //! UAV velocity rotation to the body frame
              Matrix vd_body_vel = transpose(md_rot_body2gnd) * m_velocity.get(0, 2, 0, 0);
              //! Fill body-frame linear velocity, relative to the ground.
              m_estate_leader.u = vd_body_vel(0);
              m_estate_leader.v = vd_body_vel(1);
              m_estate_leader.w = vd_body_vel(2);

              //! UAV body-frame rotation rates
              // vd_UAVRotRates = UAVRotRatTrans_1_00(vd_State);

              //! Fill angular velocity.
              m_estate_leader.p = m_velocity(3);
              m_estate_leader.q = m_velocity(4);
              m_estate_leader.r = m_velocity(5);

              //! Fill stream velocity.
              m_estate_leader.svx = m_model->m_wind(0);
              m_estate_leader.svy = m_model->m_wind(1);
              m_estate_leader.svz = m_model->m_wind(2);

              //! Set the destination ID as the system own ID (for virtual leader autopilot simulation)
              m_estate_leader.setDestination((m_alias_id != UINT_MAX) ? m_alias_id : getSystemId());

              //! Set source system alias
              if (m_alias_id != UINT_MAX)
                m_estate_leader.setSource(m_alias_id);

              //! Send simulated state message (with the system own ID as destination)
              dispatch(m_estate_leader);

              /*
              //! Set the destination ID as the real vehicle system ID (for virtual leader data transmission)
              m_estate_leader.setDestination(getSystemId());

              //! Send simulated state message (with the real vehicle system ID as destination)
              dispatch(m_estate_leader);
               */
            }

        }

        void
        updateLeaderLimits(void)
        {
          // Leader maneuverability limits
          if (m_args.formation_frame > 0)
          {
            // Wind and formation reference speed
            double  m_wind_speed = 2;
            double d_tas_cmd_leader_wind = m_tas_cmd_leader +  m_wind_speed;
            // Limit velocities
            d_MinIAS = 0;
            d_MaxIAS = inf;
            for (ind_UAV = 1:i_UAV_N)
            {
              if (struc_UAV(ind_UAV).Lim.IAS_Min > d_MinIAS)
                d_MinIAS = struc_UAV(ind_UAV).Lim.IAS_Min;
              if (struc_UAV(ind_UAV).Lim.IAS_Max < d_MaxIAS)
                d_MaxIAS = struc_UAV(ind_UAV).Lim.IAS_Max;
            }

            // Safety/deviation margins
            d_Marg = 0.05;
            d_SpdMarg = d_Marg*(d_MaxIAS - d_MinIAS);
            d_MinIAS = d_MinIAS + d_SpdMarg +  m_wind_speed;
            d_MaxIAS = d_MaxIAS - d_SpdMarg +  m_wind_speed;

            // Maximum lateral distance between the leader and any follower
            d_FollLatDist = 0;
            d_FollLonDist = 0;
            for (ind_UAV = 1:i_UAV_N)
            {
              t_LatDist = abs(struc_UAV(ind_UAV).Ctrl.FormCtrl.Pos(2));
              if (t_LatDist > d_FollLatDist)
                d_FollLatDist = t_LatDist;
              t_LonDist = abs(struc_UAV(ind_UAV).Ctrl.FormCtrl.Pos(1));
              if (t_LonDist > d_FollLonDist)
                d_FollLonDist = t_LonDist;
            }

            // Minimum formation turn radius due to aircraft minimum velocity
            d_FormRMin = d_MinIAS * d_FollLatDist/(m_tas_cmd_leader_W - d_MinIAS);
            // Minimum formation turn radius due to aircraft maximum velocity
            d_FormRMin = max(d_FormRMin, d_MaxIAS * d_FollLatDist/
                               (d_MaxIAS - m_tas_cmd_leader_W));
            // Minimum formation turn radius due to aircraft turning limits
            for (ind_UAV = 1:i_UAV_N)
            {
              // Maximum of the minimum feaseable radius at maximum ground speed
              t_MinRad = (m_tas_cmd_leader_W * ...
                  (d_FormRMin + d_FollLatDist)/d_FormRMin)^2/...
                      (RefData.LocalProp.g * tan(struc_UAV(ind_UAV).Lim.Bank_Max));
              if t_MinRad > d_FormRMin
              d_FormRMin = t_MinRad;
            }

            // Minimum leader turn radius
            d_RMin = d_FormRMin;
            // Maximum formation arc length - For maximum wind speed compensation
            d_ArcMax = d_FollLonDist/d_FormRMin;
            if (d_ArcMax > pi)
              d_WindGain = 1;
            else
              d_WindGain = d_ArcMax/pi;
            // Maximum leader bank
            struc_Team.LeaderData.Lim.Bank_Max = atan((m_tas_cmd_leader - ...
                d_WindGain* m_wind_speed)^2/(d_RMin * RefData.LocalProp.g));
          }
          else
          {
            // Maximum leader bank
            struc_Team.LeaderData.Lim.Bank_Max = struc_UAV(1).Lim.Bank_Max;
          }
        }
      };
    }
  }
}

DUNE_TASK
