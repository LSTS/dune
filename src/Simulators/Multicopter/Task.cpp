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
// Author: Kristian                                                         *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "MulticopterModel.hpp"

namespace Simulators
{
  namespace Multicopter
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      double mass;
      double hover_throttle; // 0.45;
      double k; // pitch/roll motor gain
      double l; // Length from centre of multicopter to motor
      double b; // Yaw coefficient

      bool linear_actuator_dynamics;

      std::string frame; // Frame configuratin
      std::string configuration;

      Math::Matrix cog;
      Math::Matrix inertia;
      Math::Matrix ldrag;
      Math::Matrix qdrag;
    };

    struct Task : public Tasks::Periodic
    {
      //! Simulation vehicle.
      MulticopterModel* m_model;
      //! Simulated position (X,Y,Z).
      IMC::SimulatedState m_sstate;
      IMC::EstimatedState m_estate;
      //! Accelleration
      IMC::Acceleration m_acc;
      //! Start time.
      double m_start_time;
      //! Last time update was ran
      double m_last_update;
      //! Set Servo positions
      Matrix m_servo_speed;
      //! Vehicle position
      Matrix m_position;
      //! Vehicle velocity vector
      Matrix m_velocity;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_model(NULL),
        m_start_time(Clock::get()),
        m_last_update(Clock::get()),
        m_servo_speed(8, 1, 0.0), // max 8 servos.
        m_position(6, 1, 0.0),
        m_velocity(6, 1, 0.0)
      {
        // init positions

        // at trondheim
        m_sstate.lat = Angles::radians(63.45515289);
        m_sstate.lon = Angles::radians(10.91983723);

        // USA
        m_sstate.lat = Angles::radians(37.61);
        m_sstate.lon = Angles::radians(-122.38);
        m_sstate.height = 0;

        param("Mass", m_args.mass)
        .defaultValue("3.0")
        .units(Units::Kilogram)
        .description("Mass of the vehicle");

        param("Hover Throttle", m_args.hover_throttle)
        .defaultValue("0.5")
        .description("Throttle to keep the copter floating");

        param("k", m_args.k)
        .defaultValue("3")
        .description("Pitch/roll motor coefficient");

        param("l", m_args.l)
        .defaultValue("0.25")
        .description("Length from centre to motor");

        param("b", m_args.b)
        .defaultValue("1")
        .description("Yaw motor coefficient");

        param("Linear Actuator Dynamics", m_args.linear_actuator_dynamics)
        .defaultValue("False")
        .description("Use linear simplified actuator dynamics");

        param("Frame Type", m_args.frame)
        .values("quad,hex")
        .defaultValue("quad")
        .description("Sets frame type. (quad/hex)");

        param("Configuration", m_args.configuration)
        .values("+,x")
        .defaultValue("+")
        .description("Set frame configuration, +/x");

        param("Center of Gravity", m_args.cog)
        .defaultValue("")
        .description("Center of gravity of the vehicle counting from CO");

        param("Inertia", m_args.inertia)
        .defaultValue("")
        .description("Inertia of the vehicle (3 elements of main diagonal)");

        param("Linear Drag", m_args.ldrag)
        .defaultValue("")
        .description("Linear drag of the vehicle (6 elements of main diagonal)");

        param("Quadratic Drag", m_args.qdrag)
        .defaultValue("")
        .description("Quadratic (abs(x)*x) drag of the vehicle (6 elements of main diagonal)");

        bind<IMC::SetPWM>(this);

        // Set OK status
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        // Run inits!

        double inertia[3];
        for (int i = 0; i < 3; i++)
        {
          inertia[i] = m_args.inertia(i);
        }

        double ldrag[6];
        for (int i = 0; i < 6; i++)
        {
          ldrag[i] = m_args.ldrag(i);
        }

        double qdrag[6];
        for (int i = 0; i < 6; i++)
        {
          qdrag[i] = m_args.qdrag(i);
        }

        Simulators::Multicopter::MulticopterModelParameters par;
        par.mass = m_args.mass;
        par.hover_throttle = m_args.hover_throttle;
        par.k = m_args.k;
        par.l = m_args.l;
        par.b = m_args.b;
        par.linear_actuator_dynamics = m_args.linear_actuator_dynamics;
        par.frame = (m_args.frame == "quad") ? Frame_quad : Frame_hexa;
        par.configuration = (m_args.configuration == "+") ? Configuration_plus : Configuration_x;
        par.cog = m_args.cog;
        par.inertia = Matrix(inertia, 3);
        par.ldrag = Matrix(ldrag, 6);
        par.qdrag = Matrix(qdrag, 6);

        if (par.frame == Frame_quad)
          inf("Got quad");
        if (par.frame == Frame_hexa)
          inf("Got hexacopter");
        if (par.configuration == Configuration_plus)
          inf("Got plus");
        if (par.configuration == Configuration_x)
          inf("Got X");

        m_model = new MulticopterModel(par);

        inf(DTR("Multicopter simulation started."));
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        // Release model
        Memory::clear(m_model);
      }

      Matrix
      matrixJ(float roll, float pitch, float yaw)
      {
        double cx_elements[9] = { 1, 0, 0,
                                  0, std::cos(roll), std::sin(roll),
                                  0, -std::sin(roll), std::cos(roll) };

        double cy_elements[9] = { std::cos(pitch), 0, -std::sin(pitch),
                                  0, 1, 0,
                                  std::sin(pitch), 0, std::cos(pitch) };

        double cz_elements[9] = { std::cos(yaw), std::sin(yaw), 0,
                                  -std::sin(yaw), std::cos(yaw), 0,
                                  0, 0, 1 };

        Matrix J1 = transpose(Matrix(cz_elements, 3, 3)) * transpose(Matrix(cy_elements, 3, 3)) * transpose(Matrix(cx_elements, 3, 3));

        double j2_elements[9] = { 1, std::sin(roll) * std::tan(pitch), std::cos(roll) * std::tan(pitch),
                                  0, std::cos(roll), -std::sin(roll),
                                  0, std::sin(roll) / std::cos(pitch), std::cos(roll) / std::cos(pitch) };

        J1.vertCat(Matrix(3, 3, 0.0));
        Matrix cols456 = Matrix(3, 3, 0.0);
        cols456.vertCat(Matrix(j2_elements, 3, 3));
        J1.horzCat(cols456);

        return J1;
      }

      void
      consume(const IMC::SetPWM* msg)
      {
        if (resolveEntity(msg->getSourceEntity()) == "Sitl Layer")
        {
          int id = 0;
          bool got_relevant_message = true;

          // This implements the strange mapping APM has to motors.
          // Also remember channels are 1-indexed.
          // [1:1, 2:2, 3:3, 4:4, 5:7, 6:8, 7:10, 8:11]

          /*
        // Note: Intentionally skipping chan. 5,6 and 9.
        m_servo_speed(0) = msg->chan1;
        m_servo_speed(1) = msg->chan2;
        m_servo_speed(2) = msg->chan3;
        m_servo_speed(3) = msg->chan4;
        m_servo_speed(4) = msg->chan7;
        m_servo_speed(5) = msg->chan8;
        m_servo_speed(6) = msg->chan10;
        m_servo_speed(7) = msg->chan11;
           *
           */

          switch (msg->id)
          {
          default:
            got_relevant_message = false;
            break;
          case 1:
          case 2:
          case 3:
          case 4:
            id = msg->id;
            break;
          case 7:
            id = 5;
            break;
          case 8:
            id = 6;
            break;
          case 10:
            id = 7;
            break;
          case 11:
            id = 8;
            break;
          }

          if (got_relevant_message)
          {
            // this is zero-indexed.
            m_servo_speed(id - 1) = (msg->duty_cycle - 1000) / 1000.0;
          }
        }
        else
        {
          trace("Got a SetPWM message from another source. Ignoring.");
        }
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

        Matrix accel;
        accel = m_model->stepInv(m_servo_speed, m_velocity, m_position);
        trace("Resulting z-acc: %f", accel(2));

        // TODO: Add more sophisticated ground behaviour
        // Remember, we use a NED-convention, so z is negative when we are in the air
        spew("Moving at z: %f, height: %f", m_velocity(2), m_position(2));
        if (m_position(2) > 0)
        {
          trace("On ground!");
          // Set position on ground
          m_position(2) = 0;

          // If we are moving downwards, positive z in the ned-frame
          fp32_t vx, vy, vz;
          BodyFixedFrame::toInertialFrame(m_position(3), m_position(4), m_position(5),
                                          m_velocity(0), m_velocity(1), m_velocity(2),
                                          &vx, &vy, &vz);

          if (vz > 0)
          {
            // create simple bouncing-feature
            vz = -0.3 * vz;

            trace("Bounce!");

            // Update body-velocities
            BodyFixedFrame::toBodyFrame(m_position(3), m_position(4), m_position(5),
                                        vx, vy, vz,
                                        &m_velocity(0), &m_velocity(1), &m_velocity(2));
          }
        }

        // Compute velocity in the vehicle frame that will be used in the next iteration
        m_velocity += timestep * accel;

        // Fill position.
        double sim_time = Clock::get() - m_start_time;
        (void)sim_time;
        m_sstate.x = m_position(0); // + sim_time * m_args.wx;
        m_sstate.y = m_position(1); // + sim_time * m_args.wy;
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

        // Fill acceleration
        m_acc.x = accel(0);
        m_acc.y = accel(1);
        m_acc.z = accel(2);

        dispatch(m_acc);
        dispatch(m_sstate);
      }
    };
  }
}

DUNE_TASK
