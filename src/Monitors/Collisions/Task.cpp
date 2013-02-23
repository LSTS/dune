//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: Task.cpp 12814 2013-01-31 13:31:48Z jbraga                       $:*
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
    };

    //! Collisions task.
    struct Task: public Tasks::Task
    {
      //! Task is active.
      bool m_active;
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
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_active(false),
        m_avg_x_innov(NULL),
        m_avg_z_innov(NULL),
        m_avg_x_abs(NULL),
        m_avg_z_abs(NULL)
      {
        // Definition of configuration parameters.
        param("Innovation Moving Average Samples", m_args.avg_samples_innov)
        .defaultValue("10")
        .description("Number of moving average samples to smooth accelerations");

        param("Absolute Moving Average Samples", m_args.avg_samples_abs)
        .defaultValue("3")
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

        // Register consumers.
        bind<IMC::Acceleration>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      void
      onUpdateParameters(void)
      {
        m_twindow.setTop(m_args.t_error);
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
        // Activate task if not active.
        if (!m_active)
        {
          m_active = true;
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
          err(DTR("collision in the x-axis: %.2f times the standard deviation %f"), (x / std_x), std_x);
          collided();
        }

        // Check collision in the z-axis.
        if ((std_z > m_args.min_std) && (z > m_args.k_std * std_z))
        {
          err(DTR("collision in the z-axis: %.2f times the standard deviation %f"), (z / std_z), std_z);
          collided();
        }

        // Check absolute acceleration values in the x-axis.
        if ((mean_x_abs > m_args.max_x) || (mean_x_abs < - m_args.max_x))
        {
          err(DTR("x-axis acceleration breached limits: %.2f"), mean_x_abs);
          collided();
        }

        // Check absolute acceleration values in the z-axis.
        if ((std::abs(mean_z_abs) > Math::c_gravity + m_args.max_z) ||
            (std::abs(mean_z_abs) < Math::c_gravity - m_args.max_z))
        {
          err(DTR("z-axis acceleration breached limits: %.2f"), mean_z_abs);
          collided();
        }
      }

      //! This routine is called when a collision is detected.
      void
      collided(void)
      {
        // Reset counter.
        m_twindow.reset();

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
