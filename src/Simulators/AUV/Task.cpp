//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: Task.cpp 12721 2013-01-25 02:01:06Z jbraga                       $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace AUV
  {
    using DUNE_NAMESPACES;

    static const float c_servo_count = 4;

    static const float c_surface_depth = 0.1;

    struct Arguments
    {
      //! Stream speed North parameter (m/s).
      double wx;
      //! Stream speed East parameter (m/s).
      double wy;
      //! AUV Model Parameters
      double mass;
      double density;
      double volume;
      double motor_friction;
      double max_thrust;
      Matrix cog;
      Matrix addedmass;
      Matrix inertia;
      Matrix linear_drag;
      Matrix quadratic_drag;
      Matrix lift;
      Matrix fin_lift;
    };

    struct Task: public Tasks::Periodic
    {
      //! Active flag
      bool m_active;
      //! Simulation vehicle.
      AUVModel* m_model;
      //! Simulated position (X,Y,Z).
      IMC::SimulatedState m_sstate;
      //! Start time.
      double m_start_time;
      //! Last time update was ran
      double m_last_update;
      //! Actuation in the thruster
      float m_thruster_act;
      //! Set Servo positions
      Matrix m_servo_pos;
      //! Vehicle position
      Matrix m_position;
      //! Vehicle velocity vector
      Matrix m_velocity;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_active(false),
        m_model(NULL),
        m_start_time(Clock::get()),
        m_last_update(Clock::get()),
        m_thruster_act(0.0),
        m_servo_pos(4, 1, 0.0),
        m_position(6, 1, 0.0),
        m_velocity(6, 1, 0.0)
      {
        // Definition of configuration parameters.
        param("Stream Speed North", m_args.wx)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Water current speed along the North in the NED frame");

        param("Stream Speed East", m_args.wy)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Water current speed along the East in the NED frame");

        param("Mass", m_args.mass)
        .defaultValue("18.0")
        .units(Units::Kilogram)
        .description("Mass of the vehicle");

        param("Density", m_args.density)
        .defaultValue("0.0")
        .description("Density of the vehicle");

        param("Volume", m_args.volume)
        .defaultValue("0.0")
        .description("Volume of the vehicle");

        param("Motor Friction", m_args.motor_friction)
        .defaultValue("0.0")
        .description("Friction in the motor shaft");

        param("Max Motor Thrust", m_args.max_thrust)
        .defaultValue("10.0")
        .units(Units::Newton)
        .description("Maximum motor thrust allowed");

        param("Center of Gravity", m_args.cog)
        .defaultValue("")
        .description("Center of gravity of the vehicle counting from the center of buoyancy");

        param("Added Mass", m_args.addedmass)
        .defaultValue("")
        .description("Diagonal elements of the added mass matrix");

        param("Inertia", m_args.inertia)
        .defaultValue("")
        .description("Inertia of the vehicle (3 elements of main diagonal)");

        param("Linear Drag", m_args.linear_drag)
        .defaultValue("")
        .description("Linear drag of the vehicle");

        param("Quadratic Drag", m_args.quadratic_drag)
        .defaultValue("")
        .description("Quadratic drag of the vehicle");

        param("Lift Coefficients", m_args.lift)
        .defaultValue("")
        .description("Lift coefficients of the vehicle");

        param("Fin Coefficients", m_args.fin_lift)
        .defaultValue("")
        .description("Fin lift coefficients of the vehicle");

        // Register handler routines.
        bind<IMC::GpsFix>(this);
        bind<IMC::SetServoPosition>(this);
        bind<IMC::SetThrusterActuation>(this);
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
      onResourceAcquisition(void)
      {
        // Initialize the model model
        DUNE::Control::ModelParameters par;
        par.mass = m_args.mass;
        par.density = m_args.density;
        par.volume = m_args.volume;
        par.motor_friction = m_args.motor_friction;
        par.max_thrust = m_args.max_thrust;
        par.cog = m_args.cog;
        par.addedmass = m_args.addedmass;
        par.inertia = m_args.inertia;
        par.linear_drag = m_args.linear_drag;
        par.quadratic_drag = m_args.quadratic_drag;
        par.lift = m_args.lift;
        par.fin_lift = m_args.fin_lift;

        m_model = new AUVModel(par);
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        if (!m_active)
          return;

        if (msg->id < c_servo_count)
        {
          m_servo_pos(msg->id) = msg->value;
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (!m_active)
        {
          m_active = true;
        }

        if (msg->type != IMC::GpsFix::GFT_MANUAL_INPUT)
          return;

        // Defining origin.
        m_sstate.lat = msg->lat;
        m_sstate.lon = msg->lon;
        m_sstate.height = msg->height;

        m_position(0) = 0.0;
        m_position(1) = 0.0;
        // Assuming vehicle starts at sea surface.
        m_position(2) = 0.0;
        m_position(3) = 0.0;
        m_position(4) = 0.0;
        m_position(5) = 0.0;

        m_start_time = Clock::get();
        m_last_update = Clock::get();

        // Save message to cache.
        IMC::CacheControl cop;
        cop.op = IMC::CacheControl::COP_STORE;
        cop.message.set(*msg);
        dispatch(cop);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (!m_active)
          return;

        m_thruster_act = msg->value;
      }

      Matrix
      matrixJ(float roll, float pitch, float yaw)
      {
        double cx_elements[9] = {1, 0,               0,
                                 0, std::cos(roll),  std::sin(roll),
                                 0, -std::sin(roll), std::cos(roll)};

        double cy_elements[9] = {std::cos(pitch), 0, -std::sin(pitch),
                                 0,               1, 0,
                                 std::sin(pitch), 0, std::cos(pitch)};

        double cz_elements[9] = {std::cos(yaw),  std::sin(yaw), 0,
                                 -std::sin(yaw), std::cos(yaw), 0,
                                 0,              0,             1};

        Matrix J1 = transpose(Matrix(cz_elements, 3, 3)) * transpose(Matrix(cy_elements, 3, 3)) * transpose(Matrix(cx_elements, 3, 3));

        double j2_elements[9] = {1, std::sin(roll) * std::tan(pitch), std::cos(roll) * std::tan(pitch),
                                 0, std::cos(roll),                   -std::sin(roll),
                                 0, std::sin(roll) / std::cos(pitch), std::cos(roll) / std::cos(pitch)};

        J1.vertCat(Matrix(3, 3, 0.0));
        Matrix cols456 = Matrix(3, 3, 0.0);
        cols456.vertCat(Matrix(j2_elements, 3, 3));
        J1.horzCat(cols456);

        return J1;
      }

      void
      task(void)
      {
        // compute the timestep
        double timestep = Clock::get() - m_last_update;
        m_last_update = Clock::get();

        // Find the derivative of the position in the earth fixed frame
        Matrix dposition(6, 1, 0.0);
        dposition = matrixJ(m_position(3), m_position(4), m_position(5)) * m_velocity;

        // Integrate using Euler method
        m_position += timestep * dposition;

        // Compute acceleration in the vehicle's frame
        Matrix accel;
        accel = m_model->stepInv(m_thruster_act, m_servo_pos, m_velocity, m_position);

        // surface behavior
        if (m_position(2) < c_surface_depth)
        {
          accel(2) = std::fabs(accel(2));
        }

        // Compute velocity in the vehicle frame that will be used in the next iteration
        m_velocity += timestep * accel;

        // Fill position.
        double sim_time = Clock::get() - m_start_time;
        m_sstate.x = m_position(0) + sim_time * m_args.wx;
        m_sstate.y = m_position(1) + sim_time * m_args.wy;
        m_sstate.z = m_position(2);

        // Fill attitude.
        m_sstate.phi = m_position(3);
        m_sstate.theta = m_position(4);
        m_position(5) = Angles::normalizeRadian(m_position(5));
        m_sstate.psi = m_position(5);

        // Fill linear velocity.
        m_sstate.u = m_velocity(0);
        m_sstate.v = m_velocity(1);
        m_sstate.w = m_velocity(2);

        // Fill angular velocity.
        m_sstate.p = m_velocity(3);
        m_sstate.q = m_velocity(4);
        m_sstate.r = m_velocity(5);

        // Fill stream velocity.
        m_sstate.svx = m_args.wx;
        m_sstate.svy = m_args.wy;
        m_sstate.svz = 0;

        dispatch(m_sstate);
      }
    };
  }
}

DUNE_TASK
