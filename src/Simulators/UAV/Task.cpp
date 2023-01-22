//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <climits>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Simulation/UAV.hpp>

namespace Simulators
{
  namespace UAV
  {
    using DUNE_NAMESPACES;

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
      //unsigned m_gps_eid;
      //! Commands filter
      DUNE::Tasks::SourceFilter* m_cmd_flt;
      //! System alias id
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
        m_cmd_flt(NULL),
        m_alias_id(UINT_MAX)
      {
        // Definition of configuration parameters.
        param("Commands source", m_args.cmd_src)
        .defaultValue("")
        .description("List of <Command message>+<Command message>:<System>+<System>:<Entity>+<Entity> that define the source systems and entities allowed to pass a command.");

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

        // Set source system alias
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

        // GPS position initialization
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
      onResourceRelease(void)
      {
        spew("do 'onResourceRelease'");

        Memory::clear( m_model );
        Memory::clear( m_cmd_flt );
      }

      void
      onResourceAcquisition(void)
      {
        spew("onResourceAquisition - start");

        // Process the systems and entities allowed to define a command.
        m_cmd_flt = new Tasks::SourceFilter(*this, m_args.cmd_src);

        // Control and state initialization

        // Model state initialization
        debug("Model initialization");
        // - Altitude initialization
        m_position(2) = - m_args.init_alt;
        // - Bank initialization
        m_position(3) = DUNE::Math::Angles::radians(m_args.init_roll);
        // - Heading initialization
        m_position(5) = DUNE::Math::Angles::radians(m_args.init_yaw);
        // - Velocity vector initialization
        m_velocity(0) = m_args.init_speed * std::cos(m_position(5));
        m_velocity(1) = m_args.init_speed * std::sin(m_position(5));

        if (m_args.sim_type == "3DOF")
        {
          // 4 DOF (bank) model initialization
          // - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(*this, m_position, m_velocity);
          // - Commands initialization
          m_model->command(m_position(3), m_args.init_speed, - m_position(2));
          // - Limits definition
          if (m_args.l_bank_rate > 0)
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          if (m_args.l_accel_x > 0)
            m_model->setAccelLim(m_args.l_accel_x);
        }
        else if (m_args.sim_type == "4DOF_alt")
        {
          // 4 DOF (altitude) model initialization
          // - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(*this, m_position, m_velocity, m_args.c_alt);
          // - Commands initialization
          m_model->command(m_position(3), m_args.init_speed, - m_position(2));
          // - Limits definition
          if (m_args.l_vert_slope > 0)
            m_model->setVertSlopeLim(m_args.l_vert_slope);
        }
        else if (m_args.sim_type == "4DOF_bank")
        {
          // 4 DOF (bank) model initialization
          // - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(*this, m_position, m_velocity, m_args.c_bank, m_args.c_speed);
          // - Commands initialization
          m_model->command(m_position(3), m_args.init_speed, - m_position(2));
          // - Limits definition
          if (m_args.l_bank_rate > 0)
            m_model->setBankRateLim(DUNE::Math::Angles::radians(m_args.l_bank_rate));
          if (m_args.l_accel_x > 0)
            m_model->setAccelLim(m_args.l_accel_x);
        }
        else if (m_args.sim_type == "5DOF")
        {
          // 5 DOF model initialization
          // - State  and control parameters initialization
          m_model = new DUNE::Simulation::UAVSimulation(*this, m_position, m_velocity, m_args.c_bank, m_args.c_speed, m_args.c_alt);
          // - Commands initialization
          m_model->command(m_position(3), m_args.init_speed, - m_position(2));
          // - Limits definition
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
        // - Simulation type
        m_model->m_sim_type = m_args.sim_type;
        inf(DTR("UAV simulation type: %s"), m_args.sim_type.c_str());
        // Application of the wind vector
        m_model->m_wind(0) = m_args.wx;
        m_model->m_wind(1) = m_args.wy;

        // Start the simulation time
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

        spew("onResourceAquisition - end");
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

        // Check if system is active and activate it if not
        if (!isActive())
          requestActivation();

        /*
        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;
        */
        debug("Consuming GPS-Fix");

        // Defining origin.
        m_sstate.lat = msg->lat;
        m_sstate.lon = msg->lon;
        m_sstate.height = msg->height;

        // - State initialization
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
        if (!commandFilter(msg))
          return;

        m_model->commandBank(msg->value);

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value));
      }

      void
      consume(const IMC::DesiredSpeed* msg)
      {
        spew("Consuming DesiredSpeed");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        if (!commandFilter(msg))
          return;

        m_model->commandAirspeed(msg->value);

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value));
      }

      void
      consume(const IMC::DesiredZ* msg)
      {
        spew("Consuming DesiredZ");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        if (!commandFilter(msg))
          return;

        double alt_cmd;
        if (msg->z_units == IMC::Z_HEIGHT)
          alt_cmd = msg->value-m_sstate.height;
        else if (msg->z_units == IMC::Z_DEPTH)
          alt_cmd = - msg->value;
        else
          alt_cmd = msg->value;
        m_model->commandAlt(alt_cmd);

        // ========= Debug ===========
        commandPrintOut(msg, &(alt_cmd));
      }

      void
      consume(const IMC::DesiredPitch* msg)
      {
        spew("Consuming DesiredPitch");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        if (!commandFilter(msg))
          return;

        m_model->commandFPA(msg->value);

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value));
      }

      /*
      void
      consume(const IMC::SetServoPosition* msg)
      {
        spew("Consuming SetServoPosition");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        if (!commandFilter(msg))
          return;

        m_servo_pos(msg->id) = msg->value;

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value));
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        spew("Consuming SetThrusterActuation");

        // Check if the command source is valid, if the simulator is active,
        // and if the commanded value is a real value
        if (!commandFilter(msg))
          return;

        m_thruster_act = msg->value;

        // ========= Debug ===========
        commandPrintOut(msg, &(msg->value));
      }
      */

      bool
      commandFilter(const IMC::Message* msg)
      {
        // Filter command by systems and entities.
        bool pass_command = m_cmd_flt->match(msg);

        // Check if system is active
        if (!isActive())
        {
          trace("%s rejected - Simulation not active - Missing GPS-Fix!", msg->getName());
          pass_command = false;
        }

        // Check that the command is a real value
        if (Math::isNaN(msg->getValueFP()))
        {
          war("%s rejected - Commanded value is not a number!", msg->getName());
          pass_command = false;
        }

        return pass_command;
      }

      void
      commandPrintOut(const IMC::Message* msg, const double* d_msg_value)
      {
        // Get the print out message name and unit type, and define if the command is an angle
        const char* msg_name = msg->getName();
        std::string c_units = "";
        bool b_cmd_angle = false;
        if (strcmp(msg_name, "DesiredRoll") == 0)
        {
          b_cmd_angle = true;
        }
        else if (strcmp(msg_name, "DesiredSpeed") == 0)
        {
          c_units = "m/s";
        }
        else if (strcmp(msg_name, "DesiredZ") == 0)
        {
          c_units = "m";
        }
        else if (strcmp(msg_name, "DesiredPitch") == 0)
        {
          b_cmd_angle = true;
        }
        /*
        else if (strcmp(msg_name, "SetServoPosition") == 0)
        else if (strcmp(msg_name, "SetThrusterActuation") == 0)
        */

        // Print out the command value and source information
        try
        {
          const char* system_name = resolveSystemId(msg->getSource());
          const char* entity_name = resolveEntity(msg->getSourceEntity()).c_str();
          if (b_cmd_angle)
            spew("%s received (%1.2fº) from system '%s' and entity '%s'.", msg_name,
                 DUNE::Math::Angles::degrees(*d_msg_value), system_name, entity_name);
          else
            spew("%s received (%1.2f%s) from system '%s' and entity '%s'.", msg_name,
                 *d_msg_value, c_units.c_str(), system_name, entity_name);
        }
        catch (...)
        {
          if (b_cmd_angle)
            war("%s received (%1.2fº) from an unresolved system and/or entity.", msg_name,
                 DUNE::Math::Angles::degrees(*d_msg_value));
          else
            war("%s received (%1.2f%s) from an unresolved system and/or entity.", msg_name,
                 *d_msg_value, c_units.c_str());
        }

        return;
      }

      Matrix
      matrixRotRbody2gnd(float roll, float pitch)
      {
        // Rotations rotation matrix
        double tmp_j2[9] = {1, std::sin(roll) * std::tan(pitch),  std::cos(roll) * std::tan(pitch),
                            0,                   std::cos(roll),                  - std::sin(roll),
                            0, std::sin(roll) / std::cos(pitch),  std::cos(roll) / std::cos(pitch)};

        return Matrix(tmp_j2, 3, 3);
      }

      Matrix
      matrixRotRgnd2body(float roll, float pitch)
      {
        // Rotations rotation matrix
        double tmp_j2[9] = {1,                0,                - std::sin(pitch),
                            0,   std::cos(roll), std::cos(pitch) * std::sin(roll),
                            0, - std::sin(roll), std::cos(pitch) * std::cos(roll)};

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
        // Handle IMC messages from bus
        consumeMessages();

        // Check if system is active
        if (!isActive())
          return;

        // Declaration
        double d_time;
        double d_timestep;

        // Compute the time step
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
        // Dynamics
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
        // Output
        //==========================================================================

        // Fill position.
        m_sstate.x = m_position(0);
        m_sstate.y = m_position(1);
        m_sstate.z = m_position(2);

        // Fill attitude.
        m_sstate.phi = m_position(3);
        m_sstate.theta = m_position(4);
        m_sstate.psi = m_position(5);

        // Rotation matrix
        double euler_ang[3] = {m_position(3), m_position(4), m_position(5)};
        Matrix md_rot_body2gnd = Matrix(euler_ang, 3, 1).toDCM();
        // UAV velocity rotation to the body frame
        Matrix vd_body_vel = transpose(md_rot_body2gnd) * m_velocity.get(0, 2, 0, 0);
        // Fill body-frame linear velocity, relative to the ground.
        m_sstate.u = vd_body_vel(0);
        m_sstate.v = vd_body_vel(1);
        m_sstate.w = vd_body_vel(2);

        // UAV body-frame rotation rates
        // vd_UAVRotRates = UAVRotRatTrans_1_00(vd_State);

        // Fill angular velocity.
        m_sstate.p = m_velocity(3);
        m_sstate.q = m_velocity(4);
        m_sstate.r = m_velocity(5);

        // Fill stream velocity.
        m_sstate.svx = m_model->m_wind(0);
        m_sstate.svy = m_model->m_wind(1);
        m_sstate.svz = m_model->m_wind(2);

        // Set the destination ID as the system own ID
        m_sstate.setDestination(getSystemId());

        // Set source system alias
        if (m_alias_id != (unsigned int)UINT_MAX)
          m_sstate.setSource(m_alias_id);

        dispatch(m_sstate);

      }
    };
  }
}

DUNE_TASK
