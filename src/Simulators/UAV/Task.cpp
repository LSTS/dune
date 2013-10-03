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

namespace Simulators
{
  namespace UAV
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Stream speed North parameter (m/s).
      double m_wx;
      //! Stream speed East parameter (m/s).
      double m_wy;
      //! UAV Model Parameters
      std::string sim_type; //! Simulation type (3DOF, 4DOF_bank, 4DOF_alt, 5DOF, 6DOF_stabder, and 6DOF_geom)
      double gaccel;
      double kbankrate;
      double mass;
      double max_thrust;
      Matrix aac; //! Wing aerodynamic center
      Matrix wac; //! Wing aerodynamic center
      Matrix tac; //! Tail aerodynamic center
      Matrix fac; //! Fin aerodynamic center
      Matrix addedmass;
      Matrix inertia;
      Matrix base_drag; //! Aircraft aerodynamic drag - Constant component
      Matrix quadratic_drag; //! Aircraft aerodynamic drag - Quadratic component
      Matrix lift; //! Aircraft aerodynamic Lift - Linear component
      Matrix elev_lift;
      Matrix rud_lift;
      //! Gps simulator entity id.
      std::string label_gps;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Simulation vehicle.
      UAVModel* m_model;
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
      //! Bank command
      float m_bank_cmd;
      //! Airspeed command
      float m_speed_cmd;
      //! Vehicle position
      Matrix m_position;
      //! Vehicle velocity vector
      Matrix m_velocity;
      //! Gps simulator entity id.
      unsigned m_gps_eid;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_model(NULL),
        m_start_time(Clock::get()),
        m_last_update(Clock::get()),
        m_thruster_act(0.0),
        m_servo_pos(4, 1, 0.0),
        m_bank_cmd(0.0),
        m_speed_cmd(18.0),
        m_position(6, 1, 0.0),
        m_velocity(6, 1, 0.0)
      {
        // Definition of configuration parameters.
        param("Stream Speed North", m_args.m_wx)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Wind speed along the North in the NED frame");

        param("Stream Speed East", m_args.wy)
        .units(Units::MeterPerSecond)
        .defaultValue("0.0")
        .description("Wind speed along the East in the NED frame");

        param("Simulation type", m_args.sim_type)
        .description("Simulation type (DOF)");

        param("Gravity Acceleration", m_args.gaccel)
        .defaultValue("9.8066")
        .units(Units::MeterPerSquareSecond)
        .description("Gravity Acceleration at aicraft location");

        param("Bank Rate Gain", m_args.kbankrate)
        .defaultValue("1.0")
        .units(Units::Hertz)
        .description("Bank rate gain to simulate bank dynamics");

        param("Mass", m_args.mass)
        .defaultValue("10.0")
        .units(Units::Kilogram)
        .description("Mass of the vehicle");

        param("Max Motor Thrust", m_args.max_thrust)
        .defaultValue("10.0")
        .units(Units::Newton)
        .description("Maximum motor thrust allowed");

        param("Aircraft Aerodynamic Center", m_args.aac)
        .defaultValue("")
        .description("Aircraft aerodynamic center  of the vehicle counting from the center of gravity");

        param("Wing Aerodynamic Center", m_args.wac)
        .defaultValue("")
        .description("Wing aerodynamic center  of the vehicle counting from the center of gravity");

        param("Tail Aerodynamic Center", m_args.tac)
        .defaultValue("")
        .description("Tail aerodynamic center  of the vehicle counting from the center of gravity");

        param("Fin Aerodynamic Center", m_args.fac)
        .defaultValue("")
        .description("Fin aerodynamic center  of the vehicle counting from the center of gravity");

        param("Added Mass", m_args.addedmass)
        .defaultValue("")
        .description("Diagonal elements of the added mass matrix");

        param("Inertia", m_args.inertia)
        .defaultValue("")
        .description("Inertia of the vehicle (3 elements of main diagonal)");

        param("Base Drag", m_args.base_drag)
        .defaultValue("")
        .description("Constant drag component of the vehicle");

        param("Quadratic Drag", m_args.quadratic_drag)
        .defaultValue("")
        .description("Quadratic drag component of the vehicle");

        param("Lift Coefficients", m_args.lift)
        .defaultValue("")
        .description("Lift coefficient of the vehicle");

        param("Elevator Coefficient", m_args.elev_lift)
        .defaultValue("")
        .description("Elevator lift coefficient of the vehicle");

        param("Rudder Coefficient", m_args.rud_lift)
        .defaultValue("")
        .description("Rudder lift coefficient of the vehicle");

        param("Entity Label - GPS", m_args.label_gps)
        .description("Entity label of simulated 'GpsFix' messages");

        // Register handler routines.
        bind<IMC::SetServoPosition>(*this);
        bind<IMC::SetThrusterActuation>(*this);
        bind<IMC::DesiredRoll>(*this);
        bind<IMC::DesiredVelocity>(*this);
      }

      void
      onResourceAcquisition(void)
      {
        // Initialize the model model
        DUNE::Control::ModelParameters par;
        if (m_args.sim_type == "4DOF_bank")
        {
          return;
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
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_model);
      }

      void
      consume(const IMC::DesiredRoll* msg)
      {
        if (!isActive())
          return;

        m_bank_cmd = msg->value;
      }

      void
      consume(const IMC::DesiredVelocity* msg)
      {
        if (!isActive())
          return;

        m_speed_cmd = msg->value;
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        if (!isActive())
          return;

        m_servo_pos(msg->id) = msg->value;
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (!isActive())
          return;

        m_thruster_act = msg->value;
      }

      Matrix
      matrixRotRbody2gnd(float roll, float pitch, float yaw)
      {
        //! Rotations rotation matrix
        double tmp_j2[9] = {1, std::sin(roll) * std::tan(pitch), std::cos(roll) * std::tan(pitch),
                            0, std::cos(roll),                   -std::sin(roll),
                            0, std::sin(roll) / std::cos(pitch), std::cos(roll) / std::cos(pitch)};

        return Matrix(tmp_j2, 3, 3);
      }

      Matrix
      matrixJ(float roll, float pitch, float yaw)
      {
        double ea[3] = {roll, pitch, yaw};
        Matrix j = Matrix(ea, 3, 1).toDCM();

        j.vertCat(Matrix(3, 3, 0.0));
        Matrix cols456 = Matrix(3, 3, 0.0);
        cols456.vertCat(matrixRotRbody2gnd(roll, pitch, yaw));
        j.horzCat(cols456);

        return j;
      }

      void
      onMain(void)
      {
        //! Initialization
        IMC::DesiredVelocity m_ias;
        double time;
        double timestep;
        double sim_time;
        double cos_yaw;
        double sin_yaw;
        double tmp_vx_wind;
        double tmp_vy_wind;
        double tas;

        while (!stopping())
        {
          // Compute the time step
          time  = Clock::get();
          timestep = time - m_last_update;
          m_last_update = time;

          if (m_args.sim_type == "4DOF_bank")
          {
            //! Optimization variables
            cos_yaw = std::cos(m_position(5));
            sin_yaw = std::sin(m_position(5));
            tmp_vx_wind = m_velocity(0) - m_wx;
            tmp_vy_wind = m_velocity(1) - m_wy;
            tas = std::sqrt(tmp_vx_wind*tmp_vx_wind + tmp_vy_wind*tmp_vy_wind);

            //==========================================================================
            //! Dynamics
            //==========================================================================
            //! Command effect
            //! - Horizontal acceleration command
            tas += m_speed_cmd*timestep;
            //! - Roll rate command
            m_position(3) += m_bank_cmd*timestep;

            //! UAV velocity components on the flow field frame
            tmp_vx_wind = tas * cos_yaw;
            tmp_vy_wind = tas * sin_yaw;
            //! UAV velocity components on the fixed frame
            m_velocity(0) = tas * cos_yaw + m_wx;
            m_velocity(1) = tas * sin_yaw + m_wy;
            //! Turn rate
            m_velocity(5) = m_arg.gaccel * std::tan(m_position(3))/tas;

            //! State vector update
            m_position += m_velocity*timestep;

            //==========================================================================
            //! Output
            //==========================================================================

            //! Air-relative UAV velocity components, on aircraft frame
            double ea[3] = {m_position(3), m_position(4), m_position(5)};
            Matrix vd_UAV2Air_BodyVel = transpose(Matrix(ea, 3, 1).toDCM()) * vd_UAV2AirVel_GndFr;

            //! UAV body-frame rotation rates
            vd_UAVRotRates = UAVRotRatTrans_1_00(vd_State);

            sim_time = time - m_start_time;
            // Fill position.
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

            //! Absolute airspeed
            m_ias.value = tas;
            //! Alpha - Angle of Attack
            m_alpha.value = std::atan(-wz/vd_UAV2Air_BodyVel(1));
            //! Beta - Slip angle
            m_beta.value = std::atan2(vd_UAV2Air_BodyVel(2), vd_UAV2AirVel(1));

            dispatch(m_sstate);
            dispatch(m_ias);
          }
        }
      }
    };
  }
}

DUNE_TASK
