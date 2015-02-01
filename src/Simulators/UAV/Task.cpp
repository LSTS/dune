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
#include <limits.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Simulation/UAV.hpp>

namespace Simulators
{
  namespace UAV
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
      //! Stream velocity parameters (m/s)
      //! - North
      double wx;
      //! - East
      double wy;
      //! UAV Model Parameters
      std::string sim_type; // Simulation type (3DOF, 4DOF_bank, 4DOF_alt, 5DOF, 6DOF_stabder, and 6DOF_geom)
      double gaccel;
      //! - Time constants
      double c_bank;
      double c_speed;
      double c_alt;
      //! - Constraints
      double l_bank_rate;
      double l_accel_x;
      double l_vert_slope;
      double mass;
      double max_thrust;
      Matrix aac; // Wing aerodynamic center
      Matrix wac; // Wing aerodynamic center
      Matrix tac; // Tail aerodynamic center
      Matrix fac; // Fin aerodynamic center
      Matrix addedmass;
      Matrix inertia;
      Matrix base_drag; // Aircraft aerodynamic drag - Constant component
      Matrix quadratic_drag; // Aircraft aerodynamic drag - Quadratic component
      Matrix lift; // Aircraft aerodynamic Lift - Linear component
      Matrix elev_lift;
      Matrix rud_lift;
      // Gps simulator entity id.
      std::string label_gps;
      // Initial state
      double init_lat;
      double init_lon;
      double init_hei;
      double init_alt;
      double init_speed;
      double init_roll;
      double init_yaw;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Simulation vehicle.
      DUNE::Simulation::UAVSimulation* m_model;
      //! Simulated position (X,Y,Z).
      IMC::SimulatedState m_sstate;
      //! Start time.
      double m_start_time;
      //! Last time update was ran
      double m_last_update;
      //! Last time debug information was shown
      double m_last_time_debug;
      double m_last_time_trace;
      //! Actuation in the thruster
      float m_thruster_act;
      //! Set Servo positions
      Matrix m_servo_pos;
      //! Vehicle position
      Matrix m_position;
      //! Vehicle velocity vector
      Matrix m_velocity;
      //! Wind velocity vector
      Matrix m_wind;
      //! Gps simulator entity id.
//      unsigned m_gps_eid;
      //! List of systems allowed to define a command.
      std::map<uint32_t, Systems> m_filtered_sys;
      //! List of entities allowed to define a command.
      std::map<uint32_t, Entities> m_filtered_ent;
      // System alias id
      uint32_t m_alias_id;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_model(NULL),
        m_start_time(-1.0),
        m_last_update(-1.0),
        m_last_time_debug(std::min(-1.0, Clock::get())),
        m_last_time_trace(std::min(-1.0, Clock::get())),
        m_thruster_act(0.0),
        m_servo_pos(4, 1, 0.0),
        m_position(6, 1, 0.0),
        m_velocity(6, 1, 0.0),
        m_wind(3, 1, 0.0),
        m_alias_id(UINT_MAX)
      {
        // Definition of configuration parameters.
        param("Commands source", m_args.cmd_src)
        .defaultValue("")
        .description("List of <Command>:<System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass a specific command.");

        param("Source Alias", m_args.src_alias)
        .defaultValue("")
        .description("Emulated system id.");

        param("Stream Speed to North", m_args.wx)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Wind speed towards the North in the NED frame");

        param("Stream Speed to East", m_args.wy)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Wind speed towards the East in the NED frame");

        param("Simulation type", m_args.sim_type)
        .defaultValue("4DOF_bank")
        .values("3DOF, 4DOF_alt, 4DOF_bank, 5DOF")
        .description("Simulation type (DOF)");

        param("Bank Time Constant", m_args.c_bank)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description("Bank controller first order time constant. Inverse of the bank rate gain to simulate bank dynamics");

        param("Speed Time Constant", m_args.c_speed)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description("Speed controller first order time constant. Inverse of the speed rate gain to simulate speed dynamics");

        param("Altitude Time Constant", m_args.c_alt)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description("Altitude controller first order time constant. Inverse of the vertical rate gain to simulate altitude dynamics");

        param("Bank Rate Limit", m_args.l_bank_rate)
        .defaultValue("0.0")
        .units(Units::DegreePerSecond)
        .description("Bank rate limit to simulate bank dynamics");

        param("Longitudinal Acceleration Limit", m_args.l_accel_x)
        .defaultValue("0.0")
        .units(Units::MeterPerSquareSecond)
        .description("Vehicle longitudinal acceleration limit to simulate the speed dynamics");

        param("Vertical Slope Limit", m_args.l_vert_slope)
        .defaultValue("0.0")
        .units(Units::None)
        .description("Vertical slope limit to simulate altitude dynamics");

        param("Mass", m_args.mass)
        .defaultValue("10.0")
        .units(Units::Kilogram)
        .description("Mass of the vehicle");

        param("Max Motor Thrust", m_args.max_thrust)
        .defaultValue("10.0")
        .units(Units::Newton)
        .description("Maximum motor thrust allowed");

        param("Aircraft Aerodynamic Center", m_args.aac)
        .defaultValue("0")
        .description("Aircraft aerodynamic center  of the vehicle counting from the center of gravity");

        param("Wing Aerodynamic Center", m_args.wac)
        .defaultValue("0")
        .description("Wing aerodynamic center  of the vehicle counting from the center of gravity");

        param("Tail Aerodynamic Center", m_args.tac)
        .defaultValue("0")
        .description("Tail aerodynamic center  of the vehicle counting from the center of gravity");

        param("Fin Aerodynamic Center", m_args.fac)
        .defaultValue("0")
        .description("Fin aerodynamic center  of the vehicle counting from the center of gravity");

        param("Added Mass", m_args.addedmass)
        .defaultValue("0.0")
        .description("Diagonal elements of the added mass matrix");

        param("Inertia", m_args.inertia)
        .defaultValue("0")
        .description("Inertia of the vehicle (3 elements of main diagonal)");

        param("Base Drag", m_args.base_drag)
        .defaultValue("0")
        .description("Constant drag component of the vehicle");

        param("Quadratic Drag", m_args.quadratic_drag)
        .defaultValue("0")
        .description("Quadratic drag component of the vehicle");

        param("Lift Coefficients", m_args.lift)
        .defaultValue("0")
        .description("Lift coefficient of the vehicle");

        param("Elevator Coefficient", m_args.elev_lift)
        .defaultValue("0")
        .description("Elevator lift coefficient of the vehicle");

        param("Rudder Coefficient", m_args.rud_lift)
        .defaultValue("0")
        .description("Rudder lift coefficient of the vehicle");

        param("Entity Label - GPS", m_args.label_gps)
        .defaultValue("Simulated GPS")
        .description("Entity label of simulated 'GpsFix' messages");

        param("Reference Ground Height", m_args.init_hei)
        .defaultValue("47.3")
        .description("Home reference ground height");

        param("Initial Reference Latitude", m_args.init_lat)
        .defaultValue("39.09")
        .description("Initial home reference latitude");

        param("Initial Reference Longitude", m_args.init_lon)
        .defaultValue("-8.964")
        .description("Initial home reference longitude");

        param("Initial Altitude", m_args.init_alt)
        .defaultValue("100")
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

        // Register handler routines.
        /*
        bind<IMC::SetServoPosition>(this);
        bind<IMC::SetThrusterActuation>(this);
        */
        bind<IMC::GpsFix>(this);
        bind<IMC::DesiredRoll>(this);
        bind<IMC::DesiredSpeed>(this);
        bind<IMC::DesiredZ>(this);
        bind<IMC::DesiredPitch>(this);
      }

      void
      onUpdateParameters(void)
      {
        // Application of the wind vector
        if (m_model != NULL)
        {
          m_model->m_wind(0) = m_args.wx;
          m_model->m_wind(1) = m_args.wy;
        }

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

        //! GPS position initialization
        debug("GPS-Fix initialization");
        IMC::GpsFix init_fix;
        init_fix.lat = DUNE::Math::Angles::radians(m_args.init_lat);
        init_fix.lon = DUNE::Math::Angles::radians(m_args.init_lon);
        init_fix.height = m_args.init_hei;
        m_sstate.lat = init_fix.lat;
        m_sstate.lon = init_fix.lon;
        m_sstate.height = m_args.init_hei;
        dispatch(init_fix);
        requestActivation();
      }

      void
      onResourceAcquisition(void)
      {
        // Control and state initialization

        //! Model state initialization
        debug("Model initialization");
        //! - Altitude initialization
        m_position(2) = -m_args.init_alt;
        //! - Bank initialization
        m_position(3) = DUNE::Math::Angles::radians(m_args.init_roll);
        //! - Heading initialization
        m_position(5) = DUNE::Math::Angles::radians(m_args.init_yaw);
        //! - Velocity vector initialization
        m_velocity(0) = m_args.init_speed*std::cos(m_position(5));
        m_velocity(1) = m_args.init_speed*std::sin(m_position(5));

        if (m_args.sim_type == "3DOF")
        {
          //! 4 DOF (bank) model initialization
          //! - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(*this, m_position, m_velocity);
          //! - Commands initialization
          m_model->command(m_position(3), m_args.init_speed, -m_position(2));
          //! - Limits definition
          if (m_args.l_bank_rate > 0)
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          if (m_args.l_accel_x > 0)
            m_model->setAccelLim(m_args.l_accel_x);
        }
        else if (m_args.sim_type == "4DOF_alt")
        {
          //! 4 DOF (altitude) model initialization
          //! - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(*this, m_position, m_velocity, m_args.c_alt);
          //! - Commands initialization
          m_model->command(m_position(3), m_args.init_speed, -m_position(2));
          //! - Limits definition
          if (m_args.l_vert_slope > 0)
            m_model->setVertSlopeLim(m_args.l_vert_slope);
        }
        else if (m_args.sim_type == "4DOF_bank")
        {
          //! 4 DOF (bank) model initialization
          //! - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(*this, m_position, m_velocity, m_args.c_bank, m_args.c_speed);
          //! - Commands initialization
          m_model->command(m_position(3), m_args.init_speed, -m_position(2));
          //! - Limits definition
          if (m_args.l_bank_rate > 0)
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          if (m_args.l_accel_x > 0)
            m_model->setAccelLim(m_args.l_accel_x);
        }
        else if (m_args.sim_type == "5DOF")
        {
          //! 5 DOF model initialization
          //! - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(*this, m_position, m_velocity, m_args.c_bank, m_args.c_speed, m_args.c_alt);
          //! - Commands initialization
          m_model->command(m_position(3), m_args.init_speed, -m_position(2));
          //! - Limits definition
          if (m_args.l_bank_rate > 0)
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          if (m_args.l_accel_x > 0)
            m_model->setAccelLim(m_args.l_accel_x);
          if (m_args.l_vert_slope > 0)
            m_model->setVertSlopeLim(m_args.l_vert_slope);
        }
        /*
        else if (m_args.sim_type == "6DOF_geom")
        {
          par.mass = m_args.mass;
          par.max_thrust = m_args.max_thrust;
          par.aac = m_args.aac;
          par.addedmass = m_args.addedmass;
          par.inertia = m_args.inertia;
          par.base_drag = m_args.base_drag;
          par.quadratic_drag = m_args.quadratic_drag;
          par.lift = m_args.lift;
          par.elev_lift = m_args.elev_lift;
          par.rud_lift = m_args.rud_lift;
        }
        */
        //! - Simulation type
        m_model->m_sim_type = m_args.sim_type;
        inf(DTR("UAV simulation type: %s"), m_args.sim_type.c_str());
        // Application of the wind vector
        m_model->m_wind(0) = m_args.wx;
        m_model->m_wind(1) = m_args.wy;

        //! Start the simulation time
        m_start_time = Clock::get();
        m_last_update = Clock::get();

        debug("Initial latitude: %1.4fº", DUNE::Math::Angles::degrees(m_sstate.lat));
        debug("Initial longitude: %1.4fº", DUNE::Math::Angles::degrees(m_sstate.lon));
        debug("Initial altitude: %1.4fm", m_sstate.height);
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
      }

      void
      onEntityReservation(void)
      {
      }

      void
      onEntityResolution(void)
      {
        //! Process the systems and entities allowed to define a command.
        uint32_t i_cmd;
        uint32_t i_cmd_final;
        uint32_t i_src;
        uint32_t i_src_ini = UINT_MAX;
        std::vector<std::string> parts;
        std::vector<std::string> systems;
        std::vector<std::string> entities;
        unsigned int i_sys_n;
        unsigned int i_ent_n;
        uint32_t sys_tmp;

        m_filtered_sys.clear();
        m_filtered_ent.clear();
        for (unsigned int i = 0; i < m_args.cmd_src.size(); ++i)
        {
          parts.clear();
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
          else if (parts[0].compare("SetServoPosition") == 0)
            i_cmd = 4;
          else if (parts[0].compare("SetThrusterActuation") == 0)
            i_cmd = 5;
          else
            i_cmd = 6;

          // Split systems and entities.
          systems.clear();
          entities.clear();
          String::split(parts[1], "+", systems);
          String::split(parts[2], "+", entities);
          i_sys_n = systems.size();
          i_ent_n = entities.size();

          // Assign filtered systems and entities to the selected commands
          if (i_cmd == 6)
          {
            i_cmd = 0;
            i_cmd_final = 5;
          }
          else
            i_cmd_final = i_cmd;
          for (; i_cmd <= i_cmd_final; i_cmd++)
          {
            i_src_ini = m_filtered_sys[i_cmd].size();
            m_filtered_ent[i_cmd].resize(i_src_ini+i_sys_n*i_ent_n);
            m_filtered_sys[i_cmd].resize(i_src_ini+i_sys_n*i_ent_n);
            for (unsigned j = 0; j < i_sys_n; j++)
            {
              spew("Commands filtering - System '%s' (%u/%u).",
                   systems[j].c_str(), j+1, i_sys_n);

              // Resolve systems id.
              if (systems[j].empty())
              {
                sys_tmp = UINT_MAX;
                debug("Commands filtering - Filter source system undefined");
              }
              else if (systems[j].compare("self") == 0)
              {
                sys_tmp = getSystemId();
                debug("Commands filtering - System '%s' with ID: %u",
                    resolveSystemId(sys_tmp), sys_tmp);
              }
              else
              {
                try
                {
                  sys_tmp = resolveSystemName(systems[j]);
                  if (sys_tmp != USHRT_MAX)
                    debug("Commands filtering - System '%s' with ID: %u",
                          resolveSystemId(sys_tmp), sys_tmp);
                  else
                  {
                    war("Commands filtering - No system found with designation '%s'!", systems[j].c_str());
                    for (unsigned j_tmp = j; j_tmp+1 < i_ent_n; j_tmp++)
                      systems[j_tmp] = systems[j_tmp + 1];
                    i_sys_n--;
                    j--;
                    continue;
                  }
                }
                catch (...)
                {
                  war("Commands filtering - No system found with designation '%s'!", systems[j].c_str());
                  for (unsigned j_tmp = j; j_tmp+1 < i_sys_n; j_tmp++)
                    systems[j_tmp] = systems[j_tmp + 1];
                  i_sys_n--;
                  j--;
                  continue;
                }
              }

              for (unsigned k = 0; k < i_ent_n; k++)
              {
                spew("Commands filtering - Entity '%s' (%u/%u).",
                     entities[k].c_str(), k+1, i_ent_n);

                i_src = j*i_ent_n + k;

                // Assign system id
                m_filtered_sys[i_cmd][i_src_ini+i_src] = sys_tmp;

                // Resolve entities id.
                if (entities[k].empty())
                {
                  m_filtered_ent[i_cmd][i_src_ini+i_src] = UINT_MAX;
                  debug("Commands filtering - Filter entity system undefined");
                }
                else
                {
                  try
                  {
                    m_filtered_ent[i_cmd][i_src_ini+i_src] = resolveEntity(entities[k]);
                    debug("Commands filtering - Entity '%s' with ID: %u",
                        resolveEntity(m_filtered_ent[i_cmd][i_src_ini+i_src]).c_str(),
                        m_filtered_ent[i_cmd][i_src_ini+i_src]);
                  }
                  catch (...)
                  {
                    war("Commands filtering - No entity found with designation '%s'!", entities[k].c_str());
                    for (unsigned k_tmp = k; k_tmp+1 < i_ent_n; k_tmp++)
                      entities[k_tmp] = entities[k_tmp + 1];
                    i_ent_n--;
                    k--;
                  }
                }

                spew("Commands filtering state - System %u of %u : Entity %u of %u.",
                    j+1, i_sys_n, k+1, i_ent_n);
              }
            }
            m_filtered_ent[i_cmd].resize(i_src_ini+i_sys_n*i_ent_n);
            m_filtered_sys[i_cmd].resize(i_src_ini+i_sys_n*i_ent_n);
          }
          if (parts[0].empty())
            spew("Commands filter sets:");
          else
            spew("%s filter sets:", parts[0].c_str());

          i_cmd--;
          for (unsigned i_flt = i_src_ini; i_flt < i_src_ini + i_sys_n*i_ent_n; i_flt++)
            spew("    System %s : Entity %s.",
                 resolveSystemId(m_filtered_sys[i_cmd][i_flt]),
                 resolveEntity(m_filtered_ent[i_cmd][i_flt]).c_str());
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_model);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        // Check if the system is the destination
        if (msg->getDestination() != ((m_alias_id != (unsigned int)UINT_MAX) ? m_alias_id : getSystemId()))
        {
          spew("GpsFix message rejected.");
          spew("GpsFix sent from another source!");
          return;
        }

        //! Check if system is active and activate it if not
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
        m_model->setPosition(m_position);

        m_start_time = Clock::get();
        m_last_update = Clock::get();

        /*
        // Save message to cache.
        IMC::CacheControl cop;
        cop.op = IMC::CacheControl::COP_STORE;
        cop.message.set(*msg);
        dispatch(cop);
         */
      }

      void
      consume(const IMC::DesiredRoll* msg)
      {
        spew("Consuming DesiredRoll");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        bool b_source_id = false;
        if (!commandFilter(msg, &b_source_id))
          return;

        m_model->commandBank(msg->value);

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value), &b_source_id);
      }

      void
      consume(const IMC::DesiredSpeed* msg)
      {
        spew("Consuming DesiredSpeed");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        bool b_source_id = false;
        if (!commandFilter(msg, &b_source_id))
          return;

        m_model->commandAirspeed(msg->value);

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value), &b_source_id);
      }

      void
      consume(const IMC::DesiredZ* msg)
      {
        spew("Consuming DesiredZ");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        bool b_source_id = false;
        if (!commandFilter(msg, &b_source_id))
          return;

        double alt_cmd;
        if (msg->z_units == IMC::Z_HEIGHT)
          alt_cmd = msg->value-m_sstate.height;
        else if (msg->z_units == IMC::Z_DEPTH)
          alt_cmd = -msg->value;
        else
          alt_cmd = msg->value;
        m_model->commandAlt(alt_cmd);

        // ========= Debug ===========
        commandPrintOut(msg, &(alt_cmd), &b_source_id);
      }

      void
      consume(const IMC::DesiredPitch* msg)
      {
        spew("Consuming DesiredPitch");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        bool b_source_id = false;
        if (!commandFilter(msg, &b_source_id))
          return;

        m_model->commandFPA(msg->value);

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value), &b_source_id);
      }

      /*
      void
      consume(const IMC::SetServoPosition* msg)
      {
        spew("Consuming SetServoPosition");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        bool b_source_id = false;
        if (!commandFilter(msg, &b_source_id))
          return;

        m_servo_pos(msg->id) = msg->value;

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value), &b_source_id);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        spew("Consuming SetThrusterActuation");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        bool b_source_id = false;
        if (!commandFilter(msg, &b_source_id))
          return;

        m_thruster_act = msg->value;

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value), &b_source_id);
      }
      */

      bool
      commandFilter(const IMC::Message* msg, bool* b_source_id)
      {
        bool pass_command = true;
        const char* system_id = NULL;
        const char* entity_id = NULL;

        try
        {
          system_id = resolveSystemId(msg->getSource());
          entity_id = resolveEntity(msg->getSourceEntity()).c_str();
          *b_source_id = true;
        }
        catch (...)
        {
          war("Unresolved system or entity ID!");
        }

        uint32_t i_cmd;
        const char* c_msg_name = msg->getName();
        if (strcmp(c_msg_name, "DesiredRoll") == 0)
          i_cmd = 0;
        else if (strcmp(c_msg_name, "DesiredSpeed") == 0)
          i_cmd = 1;
        else if (strcmp(c_msg_name, "DesiredZ") == 0)
          i_cmd = 2;
        else if (strcmp(c_msg_name, "DesiredPitch") == 0)
          i_cmd = 3;
        else if (strcmp(c_msg_name, "SetServoPosition") == 0)
          i_cmd = 4;
        else if (strcmp(c_msg_name, "SetThrusterActuation") == 0)
          i_cmd = 5;

        // Filter command by systems and entities.
        bool matched = true;
        if (m_filtered_sys[i_cmd].size() > 0)
        {
          matched = false;
          std::vector<uint32_t>::iterator itr_sys = m_filtered_sys[i_cmd].begin();
          std::vector<uint32_t>::iterator itr_ent = m_filtered_ent[i_cmd].begin();
          for (; itr_sys != m_filtered_sys[i_cmd].end(); ++itr_sys)
          {
            if ((*itr_sys == msg->getSource() || *itr_sys == (unsigned int)UINT_MAX) &&
                (*itr_ent == msg->getSourceEntity() || *itr_ent == (unsigned int)UINT_MAX))
              matched = true;
            ++itr_ent;
          }
        }
        // This system and entity are not listed to be passed.
        if (!matched)
        {
          trace("%s rejected.", c_msg_name);
          if (*b_source_id)
            trace("%s received from system '%s' and entity '%s'.", c_msg_name,
                  system_id, entity_id);
          else
            trace("%s received from unidentified system and/or entity.", c_msg_name);
          pass_command = false;
        }

        //! Check if system is active
        if (!isActive())
        {
          trace("%s rejected - Simulation not active - Missing GPS-Fix!", c_msg_name);
          pass_command = false;
        }

        //! Check that the command is a real value
        if (Math::isNaN(msg->getValueFP()))
        {
          war("%s rejected - Commanded value is not a number!", c_msg_name);
          pass_command = false;
        }

        return pass_command;
      }

      void
      commandPrintOut(const IMC::Message* msg, const double* d_msg_value, bool* b_source_id)
      {
        // Get the print out message name and unit type, and define if the command is an angle
        const char* c_msg_name = msg->getName();
        std::string c_units = "";
        bool b_cmd_angle = false;
        if (strcmp(c_msg_name, "DesiredRoll") == 0)
        {
          b_cmd_angle = true;
        }
        else if (strcmp(c_msg_name, "DesiredSpeed") == 0)
        {
          c_units = "m/s";
        }
        else if (strcmp(c_msg_name, "DesiredZ") == 0)
        {
          c_units = "m";
        }
        else if (strcmp(c_msg_name, "DesiredPitch") == 0)
        {
          b_cmd_angle = true;
        }
        /*
        else if (strcmp(c_msg_name, "SetServoPosition") == 0)
        else if (strcmp(c_msg_name, "SetThrusterActuation") == 0)
        */

        // Print out the command value and source information
        if (b_cmd_angle)
          spew("%s received (%1.2fº)", c_msg_name, DUNE::Math::Angles::degrees(*d_msg_value));
        else
          spew("%s received (%1.2f%s)", c_msg_name, *d_msg_value, c_units.c_str());
        if (*b_source_id)
          spew("%s received from system '%s' and entity '%s'.", c_msg_name,
               resolveSystemId(msg->getSource()), resolveEntity(msg->getSourceEntity()).c_str());
        else
          spew("%s received from unidentified system and/or entity.", c_msg_name);

        return;
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

      Matrix
      matrixRotRgnd2body(float roll, float pitch)
      {
        // Rotations rotation matrix
        double tmp_j2[9] = {1,               0,               -std::sin(pitch),
                            0,  std::cos(roll), std::cos(pitch)*std::sin(roll),
                            0, -std::sin(roll), std::cos(pitch)*std::cos(roll)};

        return Matrix(tmp_j2, 3, 3);
      }

      Matrix
      matrixJ(float roll, float pitch, float yaw)
      {
        double ea[3] = {roll, pitch, yaw};
        Matrix j = Matrix(ea, 3, 1).toDCM();

        j.vertCat(Matrix(3, 3, 0.0));
        Matrix cols456 = Matrix(3, 3, 0.0);
        cols456.vertCat(matrixRotRbody2gnd(roll, pitch));
        j.horzCat(cols456);

        return j;
      }

      void
      task(void)
      {
        //! Handle IMC messages from bus
        consumeMessages();

        //! Check if system is active
        if (!isActive())
          return;

        //! Declaration
        double d_time;
        double d_timestep;

        //! Compute the time step
        d_time  = Clock::get();
        d_timestep = d_time - m_last_update;
        m_last_update = d_time;

        // ========= Trace ===========
        /*
        if (d_time >= m_last_time_trace + 0.1)
        {
          //trace("Simulating: %s", m_model->m_sim_type);
          trace("Bank: %1.2fº        - Commanded bank: %1.2fº",
              DUNE::Math::Angles::degrees(m_position(3)),
              DUNE::Math::Angles::degrees(m_model->getBankCmd()));
          trace("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->getAirspeed(), m_model->getAirspeedCmd());
          trace("Yaw: %1.2f", DUNE::Math::Angles::degrees(m_position(5)));
          trace("Current latitude: %1.4fº", DUNE::Math::Angles::degrees(m_sstate.lat));
          trace("Current longitude: %1.4fº", DUNE::Math::Angles::degrees(m_sstate.lon));
          trace("Current altitude: %1.4fm", m_sstate.height);
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
              DUNE::Math::Angles::degrees(m_model->getBankCmd()));
          debug("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->getAirspeed(), m_model->getAirspeedCmd());
          debug("Yaw: %1.2f", DUNE::Math::Angles::degrees(m_position(5)));
          debug("Current latitude: %1.4fº", DUNE::Math::Angles::degrees(m_sstate.lat));
          debug("Current longitude: %1.4fº", DUNE::Math::Angles::degrees(m_sstate.lon));
          debug("Current altitude: %1.4fm", m_sstate.height);
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

        //! Set the destination ID as the system own ID
        m_sstate.setDestination(getSystemId());

        //! Set source system alias
        if (m_alias_id != (unsigned int)UINT_MAX)
          m_sstate.setSource(m_alias_id);

        dispatch(m_sstate);

      }
    };
  }
}

DUNE_TASK
