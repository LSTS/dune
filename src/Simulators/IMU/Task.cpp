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
// Author: Ricardo Martins                                                  *
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  //! %IMU simulator for DUNE.
  //! %IMU is responsible to gather data from the
  //! vehicle simulator by consuming SimulatedState
  //! IMC messages and then add a configurable
  //! gaussian noise component before sending
  //! EulerAngles, AngularVelocity and Acceleration
  //! information to the bus.
  //!
  //! To conform with existent hardware properties
  //! it is also possible to define a gyro rate bias.
  //!
  //! @author Ricardo Martins
  //! @author José Braga
  namespace IMU
  {
    //! %Task arguments
    struct Arguments
    {
      //! Euler angles standard deviation.
      double stdev_euler;
      //! Angular Velocity standard deviation.
      double stdev_agvel;
      //! Heading Offset standard deviation.
      double stdev_heading_offset;
      //! Gyro Rate Bias.
      double gyro_bias;
      //! Measures Euler Angles messages.
      bool euler;
      //! Activation Control
      bool activation_control;
      //! PRNG type.
      std::string prng_type;
      //! PRNG seed.
      int prng_seed;
    };

    //! %IMU simulator task.
    struct Task: public Tasks::Task
    {
      //! Euler angles.
      IMC::EulerAngles m_euler;
      //! Angular Velocity.
      IMC::AngularVelocity m_agvel;
      //! Acceleration.
      IMC::Acceleration m_accel;
      //! Stored Velocity.
      double m_vel[3];
      //! Pseudo-random generator.
      Random::Generator* m_prng;
      //! Random dynamic heading offset.
      float m_heading_offset;
      //! Timestep
      Time::Delta m_delta;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_prng(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_IDLE,
                    Tasks::Parameter::VISIBILITY_USER);

        // Retrieve configuration values
        param("Standard Deviation - Euler Angles", m_args.stdev_euler)
        .units(Units::Degree)
        .defaultValue("0.3")
        .description("White noise added to angular readings");

        param("Standard Deviation - Angular Velocity", m_args.stdev_agvel)
        .units(Units::DegreePerSecond)
        .defaultValue("0.03")
        .description("White noise added to angular velocity readings");

        param("Standard Deviation - Heading Offset", m_args.stdev_heading_offset)
        .units(Units::Degree)
        .defaultValue("0.0")
        .description("Heading bias from the compass");

        param("Gyro Rate Bias", m_args.gyro_bias)
        .units(Units::Degree)
        .defaultValue("1.0")
        .description("Gyro rate bias from the IMU");

        param("Measures Euler Angles", m_args.euler)
        .defaultValue("true")
        .description("Some IMUs do not output Euler Angles measurements");

        param("Activation Control", m_args.activation_control)
        .defaultValue("false")
        .description("True if it is possible to actively control the device");

        param("PRNG Type", m_args.prng_type)
        .defaultValue(Random::Factory::c_default);

        param("PRNG Seed", m_args.prng_seed)
        .defaultValue("-1");

        // Register consumers.
        bind<IMC::SimulatedState>(this);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_prng = Random::Factory::create(m_args.prng_type, m_args.prng_seed);
        m_heading_offset = m_prng->gaussian() * Angles::radians(m_args.stdev_heading_offset);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_prng);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::SimulatedState* msg)
      {
        if (m_args.activation_control)
        {
          if (!isActive())
            return;
        }

        if (!isActive())
        {
          m_vel[0] = msg->u;
          m_vel[1] = msg->v;
          m_vel[2] = msg->w;

          requestActivation();
        }

        // Compute time delta.
        double tstep = m_delta.getDelta();
        // Check if we have a valid time delta.
        if (tstep <= 0)
          return;

        // Define Euler Angles variables and add gaussian noise component.
        if (m_args.euler)
        {
          m_euler.phi = Angles::normalizeRadian(msg->phi + m_prng->gaussian() * Angles::radians(m_args.stdev_euler));
          m_euler.theta = Angles::normalizeRadian(msg->theta + m_prng->gaussian() * Angles::radians(m_args.stdev_euler));
          m_euler.psi_magnetic = Angles::normalizeRadian(msg->psi + m_prng->gaussian() * Angles::radians(m_args.stdev_euler));
          m_euler.psi = Angles::normalizeRadian(m_euler.psi_magnetic + m_heading_offset);

          // Heading offset will increment through time according with gyro rate bias.
          m_heading_offset += Angles::radians(m_args.gyro_bias / 3600) * tstep;

          m_euler.setTimeStamp(msg->getTimeStamp());
          dispatch(m_euler, DF_KEEP_TIME);
        }

        // Define Angular Velocity variables and add gaussian noise component.
        m_agvel.x = Angles::normalizeRadian(msg->p + m_prng->gaussian() * Angles::radians(m_args.stdev_agvel));
        m_agvel.y = Angles::normalizeRadian(msg->q + m_prng->gaussian() * Angles::radians(m_args.stdev_agvel));
        m_agvel.z = Angles::normalizeRadian(msg->r + m_prng->gaussian() * Angles::radians(m_args.stdev_agvel));

        // Compute acceleration values using simulated state velocity fields.
        m_accel.x = (msg->u - m_vel[0]) / tstep;
        m_accel.y = (msg->v - m_vel[1]) / tstep;
        m_accel.z = (msg->w - m_vel[2]) / tstep;

        // Store velocity for next iteration.
        m_vel[0] = msg->u;
        m_vel[1] = msg->v;
        m_vel[2] = msg->w;

        // Define messages timestamp and dispatch them to the bus.
        m_agvel.setTimeStamp(msg->getTimeStamp());
        m_accel.setTimeStamp(msg->getTimeStamp());
        dispatch(m_agvel, DF_KEEP_TIME);
        dispatch(m_accel, DF_KEEP_TIME);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onMain(void)
      {
        while (!stopping())
          waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
