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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! This task is responsible to monitor collisions
  //! by checking the acceleration values received
  //! from the inertial sensors.
  namespace Collisions
  {
    using DUNE_NAMESPACES;

    //! Task arguments.
    struct Arguments
    {
      //! Number of samples to average accelerations
      //! for innovation limits threshold checking.
      unsigned avg_samples_innov;
      //! Number of samples to average accelerations
      //! for absolute limits threshold checking.
      unsigned avg_samples_abs;
      //! Standard deviation multiplication factor to issue error.
      double k_std;
      //! Minimum standard deviation value to detect collision.
      float min_std;
      //! How much time the vehicle remains in error mode.
      float t_error;
      //! X-Axis acceleration maximum variation limit.
      float max_x;
      //! Z-Axis acceleration maximum variation limit.
      float max_z;
      //! Device Entity Label.
      std::string elabel_device;
      //! Depth value below which collisions will be ignored
      float min_depth;
      //! Collision output frequency.
      uint8_t frequency;
    };

    //! Collisions task.
    struct Task: public Tasks::Task
    {
      //! Accelerations along x-axis moving average
      //! for innovation limits threshold checking.
      MovingAverage<double>* m_avg_x_innov;
      //! Accelerations along z-axis moving average
      //! for innovation limits threshold checking.
      MovingAverage<double>* m_avg_z_innov;
      //! Accelerations along x-axis moving average
      //! for absolute limits threshold checking.
      MovingAverage<double>* m_avg_x_abs;
      //! Accelerations along z-axis moving average
      //! for absolute limits threshold checking.
      MovingAverage<double>* m_avg_z_abs;
      //! Time window to remain in error mode after colliding.
      Time::Counter<double> m_twindow;
      //! Collision message report period.
      Time::Counter<double> m_treport;
      //! Collision detected.
      IMC::Collision m_collision;
      //! Vehicle Medium.
      IMC::VehicleMedium m_vm;
      //! Device entity id.
      unsigned m_device_eid;
      //! Depth value
      float m_depth;
      //! True if braking
      bool m_braking;
      //! Motor's rpms
      int m_rpms;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_avg_x_innov(NULL),
        m_avg_z_innov(NULL),
        m_avg_x_abs(NULL),
        m_avg_z_abs(NULL),
        m_braking(false),
        m_rpms(0)
      {
        // Definition of configuration parameters.
        param("Innovation Moving Average Samples", m_args.avg_samples_innov)
        .defaultValue("10")
        .minimumValue("5")
        .maximumValue("20")
        .description("Number of moving average samples to smooth accelerations");

        param("Absolute Moving Average Samples", m_args.avg_samples_abs)
        .defaultValue("3")
        .minimumValue("2")
        .maximumValue("5")
        .description("Number of moving average samples to smooth accelerations");

        param("Maximum Deviation Factor", m_args.k_std)
        .minimumValue("2.5")
        .defaultValue("3")
        .description("Maximum deviation possible to issue error");

        param("Minimum Std Dev to Check Collision", m_args.min_std)
        .minimumValue("0")
        .defaultValue("0.2")
        .description("Minimum sample standard deviation value to check for collision");

        param("Time in Error Mode", m_args.t_error)
        .units(Units::Second)
        .minimumValue("0")
        .defaultValue("3")
        .description("How much time the vehicle remains in error mode after a collision is detected.");

        param("X Axis Maximum Variation Limit", m_args.max_x)
        .units(Units::MeterPerSquareSecond)
        .minimumValue("4")
        .defaultValue("5")
        .description("Maximum variation limit for x-axis acceleration values");

        param("Z Axis Maximum Variation Limit", m_args.max_z)
        .units(Units::MeterPerSquareSecond)
        .minimumValue("2")
        .defaultValue("3")
        .description("Maximum variation limit for z-axis acceleration values");

        param("Entity Label - Device", m_args.elabel_device)
        .defaultValue("AHRS")
        .description("Entity label of the device");

        param("Minimum Depth", m_args.min_depth)
        .defaultValue("1.0")
        .minimumValue("0.5")
        .maximumValue("10.0")
        .description("Depth value below which collisions will be ignored");

        param("Collision Output Frequency", m_args.frequency)
        .defaultValue("5")
        .minimumValue("1")
        .maximumValue("250")
        .description("Frequency to output Collision messages");

        // Register consumers.
        bind<IMC::Acceleration>(this);
        bind<IMC::Brake>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::Rpm>(this);
        bind<IMC::VehicleMedium>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.t_error))
          m_twindow.setTop(m_args.t_error);

        if (paramChanged(m_args.frequency))
          m_treport.setTop(1 / m_args.frequency);

        m_args.max_x = std::abs(m_args.max_x);
        m_args.max_z = std::abs(m_args.max_z);
      }

      void
      onResourceInitialization(void)
      {
        m_avg_x_innov = new MovingAverage<double>(m_args.avg_samples_innov);
        m_avg_z_innov = new MovingAverage<double>(m_args.avg_samples_innov);
        m_avg_x_abs = new MovingAverage<double>(m_args.avg_samples_abs);
        m_avg_z_abs = new MovingAverage<double>(m_args.avg_samples_abs);
      }

      void
      onEntityResolution(void)
      {
        try
        {
          m_device_eid = resolveEntity(m_args.elabel_device);
        }
        catch (std::runtime_error& e)
        {
          war(DTR("failed to resolve entity '%s': %s"), m_args.elabel_device.c_str(), e.what());
          m_device_eid = UINT_MAX;
        }
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_avg_x_innov);
        Memory::clear(m_avg_z_innov);
        Memory::clear(m_avg_x_abs);
        Memory::clear(m_avg_z_abs);
      }

      void
      consume(const IMC::Acceleration* msg)
      {
        if (msg->getSourceEntity() != m_device_eid)
          return;

        // Activate task if not active.
        if (!isActive())
        {
          requestActivation();
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        // Return if collision was already detected.
        if (getEntityState() == IMC::EntityState::ESTA_ERROR)
          return;

        // Compute mean values and standard deviations.
        double mean_x = m_avg_x_innov->update(msg->x);
        double mean_z = m_avg_z_innov->update(msg->z);
        double std_x = m_avg_x_innov->stdev();
        double std_z = m_avg_z_innov->stdev();
        double mean_x_abs = m_avg_x_abs->update(msg->x);
        double mean_z_abs = m_avg_z_abs->update(msg->z);

        // Absolute difference between standard deviation and mean value.
        double x = std::abs(msg->x - mean_x);
        double z = std::abs(msg->z - mean_z);

        // Check collision in the x-axis.
        if ((std_x > m_args.min_std) && (x > m_args.k_std * std_x))
        {
          m_collision.value = msg->x;
          m_collision.type = (IMC::Collision::CD_IMPACT |
                              IMC::Collision::CD_X);

          collided();
        }

        // Check collision in the z-axis.
        if ((std_z > m_args.min_std) && (z > m_args.k_std * std_z))
        {
          m_collision.value = msg->z;
          m_collision.type = (IMC::Collision::CD_IMPACT |
                              IMC::Collision::CD_Z);

          collided();
        }

        // Ignore attitude if vehicle is on the ground.
        if (m_vm.medium == IMC::VehicleMedium::VM_GROUND)
          return;

        // Check absolute acceleration values in the x-axis.
        if ((mean_x_abs > m_args.max_x) || (mean_x_abs < - m_args.max_x))
        {
          m_collision.value = mean_x_abs;
          m_collision.type = IMC::Collision::CD_X;

          collided();
        }

        // Check absolute acceleration values in the z-axis.
        if ((std::abs(mean_z_abs) > Math::c_gravity + m_args.max_z) ||
            (std::abs(mean_z_abs) < Math::c_gravity - m_args.max_z))
        {
          m_collision.value = mean_z_abs;
          m_collision.type = IMC::Collision::CD_Z;

          collided();
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_depth = msg->depth;
      }

      void
      consume(const IMC::Brake* msg)
      {
        if (msg->op == IMC::Brake::OP_STOP)
          m_braking = false;
        else
          m_braking = true;
      }

      void
      consume(const IMC::Rpm* msg)
      {
        m_rpms = msg->value;
      }

      void
      consume(const IMC::VehicleMedium* msg)
      {
        m_vm = *msg;
      }

      //! Check if the collision should be ignored
      //! @return true if collision should be ignored
      bool
      ignoreCollision(void)
      {
        if (m_depth < m_args.min_depth)
          return true;

        if (m_braking)
          return true;

        if (!m_rpms)
          return true;

        return false;
      }

      //! This routine is called when a collision is detected.
      void
      collided(void)
      {
        // Reset counter.
        m_twindow.reset();

        // If certain conditions are met, do not trigger an error
        if (ignoreCollision())
          return;

        // Dispatch collision.
        if (m_treport.overflow())
        {
          dispatch(m_collision);
          m_treport.reset();
        }

        // Change state and send state to the bus.
        setEntityState(IMC::EntityState::ESTA_ERROR, DTR("collision detected"));
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (getEntityState() == IMC::EntityState::ESTA_ERROR)
          {
            // Return to normal mode once counter overflows.
            if (m_twindow.overflow())
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
        }
      }
    };
  }
}

DUNE_TASK
