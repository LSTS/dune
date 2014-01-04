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
      // Stream speed North parameter (m/s).
      double wx;
      // Stream speed East parameter (m/s).
      double wy;
      // UAV Model Parameters
      std::string sim_type; // Simulation type (3DOF, 4DOF_bank, 4DOF_alt, 5DOF, 6DOF_stabder, and 6DOF_geom)
      double gaccel;
      double c_speed;
      double c_bank;
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
      double init_alt;
      double init_speed;
      double init_roll;
      double init_yaw;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
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
      //! Actuation in the thruster
      float m_thruster_act;
      //! Set Servo positions
      Matrix m_servo_pos;
      //! Vehicle position
      Matrix m_position;
      //! Vehicle velocity vector
      Matrix m_velocity;
      //! Gps simulator entity id.
      unsigned m_gps_eid;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_model(NULL),
        m_start_time(-1.0),
        m_last_update(-1.0),
        m_last_time_debug(-1.0),
        m_thruster_act(0.0),
        m_servo_pos(4, 1, 0.0),
        m_position(6, 1, 0.0),
        m_velocity(6, 1, 0.0)
      {
        // Definition of configuration parameters.
        param("Stream Speed North", m_args.wx)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Wind speed along the North in the NED frame");

        param("Stream Speed East", m_args.wy)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Wind speed along the East in the NED frame");

        param("Simulation type", m_args.sim_type)
        .defaultValue("4DOF_bank")
        .description("Simulation type (DOF)");

        param("Gravity Acceleration", m_args.gaccel)
        .defaultValue("9.8066")
        .units(Units::MeterPerSquareSecond)
        .description("Gravity Acceleration at aircraft location");

        param("Speed Time Constant", m_args.c_speed)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description("Speed controller first order time constant. Inverse of the speed rate gain to simulate speed dynamics");

        param("Bank Time Constant", m_args.c_bank)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description("Bank controller first order time constant. Inverse of the bank rate gain to simulate bank dynamics");

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

        // Register handler routines.
        /*
        bind<IMC::SetServoPosition>(this);
        bind<IMC::SetThrusterActuation>(this);
        */
        bind<IMC::GpsFix>(this);
        bind<IMC::DesiredRoll>(this);
        bind<IMC::DesiredSpeed>(this);

      }

      void
      onResourceAcquisition(void)
      {
        // Control and state initialization

        //! GPS position initialization
        debug("GPS-Fix initialization");
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
        debug("Model initialization");
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


        /*
        DUNE::Control::ModelParameters par;
        if (m_args.sim_type == "4DOF_bank")
        {
        }
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

        m_model = new UAVModel(par);
        */

        //! Start the simulation time
        m_start_time = Clock::get();
        m_last_update = Clock::get();
        m_last_time_debug = Clock::get();
      }

      void
      onEntityReservation(void)
      {
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_model);
      }

      void
      consume(const IMC::GpsFix* msg)
      {
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

        // Save message to cache.
        IMC::CacheControl cop;
        cop.op = IMC::CacheControl::COP_STORE;
        cop.message.set(*msg);
        dispatch(cop);
      }

      void
      consume(const IMC::DesiredRoll* msg)
      {
        debug("Consuming DesiredRoll");

        //! Check if system is active
        if (!isActive())
        {
          trace("Bank command rejected.");
          trace("Simulation not active.");
          trace("Missing GPS-Fix!");
          return;
        }

        //! Check if the source ID is from the system itself
        if (msg->getSource() != getSystemId())
        {
          trace("Bank command rejected.");
          trace("DesiredRoll sent from another source!");
          return;
        }

        m_model->m_bank_cmd = msg->value;

        // ========= Debug ===========
        trace("Bank command received (%1.2fº)", DUNE::Math::Angles::degrees(msg->value));
      }

      void
      consume(const IMC::DesiredSpeed* msg)
      {
        debug("Consuming DesiredSpeed");

        //! Check if system is active
        if (!isActive())
        {
          trace("Speed command rejected.");
          trace("Simulation not active.");
          trace("Missing GPS-Fix!");
          return;
        }

        //! Check if the source ID is from the system itself
        if (msg->getSource() != getSystemId())
        {
          trace("Speed command rejected.");
          trace("DesiredSpeed sent from another source!");
          return;
        }

        m_model->m_airspeed_cmd = msg->value;

        // ========= Debug ===========
        trace("Speed command received (%1.2fm/s)", msg->value);
      }

      /*
      void
      consume(const IMC::SetServoPosition* msg)
      {
        //! Check if system is active
        if (!isActive())
          return;

        //! Check if the source ID is from the system itself
        if (msg->getSource() != getSystemId())
        {
          trace("Servo command rejected.");
          trace("SetServoPosition sent from another source!");
          return;
        }

        m_servo_pos(msg->id) = msg->value;
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        //! Check if system is active
        if (!isActive())
          return;

        //! Check if the source ID is from the system itself
        if (msg->getSource() != getSystemId())
        {
          trace("Thruster command rejected.");
          trace("SetThrusterActuation sent from another source!");
          return;
        }

        m_thruster_act = msg->value;
      }
      */

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
        double time;
        double timestep;

        //! Compute the time step
        time  = Clock::get();
        timestep = time - m_last_update;
        m_last_update = time;

        /*
        // ========= Debug ===========
        if (time >= m_last_time_debug + 1.0)
        {
          //spew("Simulating: %s", m_model->m_sim_type);
          spew("Bank: %1.2fº        - Commanded bank: %1.2fº",
              DUNE::Math::Angles::degrees(m_position(3)),
              DUNE::Math::Angles::degrees(m_model->m_bank_cmd));
          spew("Speed: %1.2fm/s     - Commanded speed: %1.2fm/s", m_model->getAirspeed(), m_model->m_airspeed_cmd);
          spew("Yaw: %1.2f", DUNE::Math::Angles::degrees(m_position(5)));
          m_last_time_debug = time;
        }
        */
        //==========================================================================
        //! Dynamics
        //==========================================================================

        m_model->update(timestep);
        m_position = m_model->getPosition();
        m_velocity = m_model->getVelocity();

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

        dispatch(m_sstate);

      }
    };
  }
}

DUNE_TASK
