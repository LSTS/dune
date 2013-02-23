//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

//! RPM tolerance to be considered zero.
static const float c_low_rpm = 30.0f;
//! Actuation tolerance to be considered zero.
static const float c_low_act = 0.1f;

namespace Simulators
{
  //! %Motor simulator for DUNE.
  //! %Motor is responsible to gather actuation values from
  //! the DUNE control layer and outputs frequency of
  //! rotation information in rotations per minute (RPM).
  //!
  //! @author Ricardo Martins
  namespace Motor
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Number of samples to average.
      int avg_samples;
      //! Parameters to convert thruster actuation to thruster frequency of rotation.
      std::vector<double> act_to_rpm_args;
      //! Thruster Id.
      int thruster_id;
    };

    //! %Motor simulator task
    struct Task: public Tasks::Periodic
    {
      //! Moving average filter for frequency of rotation.
      MovingAverage<double>* m_avg_motor;
      //! Filtered motor frequency of rotation (RPM).
      IMC::Rpm m_rpm;
      //! New frequency of rotation value.
      int16_t m_rpm_new;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_avg_motor(NULL)
      {
        // Retrieve configuration values.
        param("Moving Average Samples", m_args.avg_samples)
        .defaultValue("5")
        .description("Number of moving average samples to average frequency of rotation");

        param("Thruster Act to RPM Factor", m_args.act_to_rpm_args)
        .defaultValue("")
        .size(2)
        .description("Parameters to convert thruster actuation (%) to frequency of rotation (RPM)");

        // Initialize Thruster Id.
        param("Thruster Id", m_args.thruster_id)
        .defaultValue("0")
        .description("Thruster identification");

        // Register consumers.
        bind<IMC::SetThrusterActuation>(this);
      }

      ~Task(void)
      {
        Task::onResourceRelease();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_avg_motor);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // Initialize RPM values.
        m_rpm.value = 0;
        m_rpm_new = 0;
        m_avg_motor = new MovingAverage<double>(m_args.avg_samples);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        // This is a linear equation RPM = a + b * act
        // where a and b were estimated using mission data
        // by applying a least squares method.
        if (msg->id == m_args.thruster_id)
        {
          if (std::abs(msg->value) >= c_low_act)
            m_rpm_new = (int16_t)(m_args.act_to_rpm_args[0] * (msg->value / std::abs(msg->value)) + m_args.act_to_rpm_args[1] * msg->value);
          else
            m_rpm_new = 0;
        }
      }

      void
      task(void)
      {
        // Compute filtered RPM value.
        // This value is computed using a moving average filter.
        m_rpm.value = (int16_t)Math::round(m_avg_motor->update(m_rpm_new));

        // Threshold check.
        if (std::abs(m_rpm.value) < c_low_rpm)
          m_rpm.value = 0;

        // Send to bus.
        dispatch(m_rpm);
      }
    };
  }
}

DUNE_TASK
