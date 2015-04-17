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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Monitors/ServoPositionMonitor.hpp>

namespace Monitors
{
  //! %Servos monitor for DUNE.
  //! %Servos is responsible for detecting faults using electric current
  //! and position measurements of the servos being controlled in the vehicle.
  //!
  //! @author Pedro Calado
  namespace Servos
  {
    using DUNE_NAMESPACES;

    //! Number of servos
    static const unsigned c_servo_count = 4;
    //! Error timeout
    static const float c_error_timeout = 5.0;

    enum FaultBits
    {
      //! No faults
      FT_NONE = 0x00,
      //! Position fault
      FT_POSITION = 0x01,
      //! Electric current fault
      FT_CURRENT = 0x02
    };

    struct Arguments
    {
      //! Monitor position faults
      bool pos_fault_detect;
      //! Threshold for fault detection in the position error (command vs position)
      float pos_error_threshold;
      //! Factor in detection for comparing accumulated difference (command vs position)
      float rate_factor;
      //! Delay for the detection triggering using DelayedTrigger class
      double pos_error_delay;
      //! Number of samples for the moving average in the DelayedTrigger object
      unsigned pos_error_samples;
      //! Maximum rotation rate of the servos
      double max_rotation_rate;
      //! Monitor electric current faults
      bool curr_fault_detect;
      //! Current lower threshold to consider abnormal behavior
      float curr_lower;
      //! Current upper threshold to consider abnormal behavior
      float curr_upper;
      //! Number of faults above the lower threshold to consider a fault detection
      int max_lfaults;
      //! Number of faults above the upper threshold to consider a fault detection
      int max_ufaults;
      //! Period of time after which the fault vectors will be reset to zero
      double fault_cooldown;
      //! Servo current entity labels.
      std::string elabel_ampg[c_servo_count];
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Position fault detection array
      ServoPositionMonitor<float>* m_pos_monitor[c_servo_count];
      //! Servo position
      float m_servo_pos[c_servo_count];
      //! Set Servo position values
      float m_set_servo[c_servo_count];
      //! Servo Current Fault Monitors
      ServoCurrentMonitor<float>* m_curr_monitor[c_servo_count];
      //! Electric current entity ids
      unsigned m_curr_ents[c_servo_count];
      //! String to hold the last error
      std::string m_error_str;
      //! Fault mask to keep track of fault types
      uint8_t m_on_fault[c_servo_count];
      //! Timer for error timeout
      Time::Counter<float> m_timer;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        param("Position Fault Detection", m_args.pos_fault_detect)
        .defaultValue("false")
        .description("Enable position fault detection");

        param("Position Error Threshold", m_args.pos_error_threshold)
        .defaultValue("0.2")
        .minimumValue("0.0")
        .units(Units::Radian)
        .description("Threshold for position error in fault detection");

        param("Position Rate Factor", m_args.rate_factor)
        .defaultValue("0.05")
        .description("Factor in fault detection for comparison between accumulated "
                     "differences");

        param("Position Error Delay", m_args.pos_error_delay)
        .defaultValue("5.0")
        .units(Units::Second)
        .description("Delay for the detection triggering using DelayedTrigger class");

        param("Position Error Samples", m_args.pos_error_samples)
        .defaultValue("5")
        .minimumValue("1")
        .description("Number of samples for the moving average in the "
                     "DelayedTrigger object");

        param("Maximum Rotation Rate", m_args.max_rotation_rate)
        .defaultValue("333.3")
        .units(Units::DegreePerSecond)
        .description("Maximum rotation rate allowed by the servo");

        param("Current Fault Detection", m_args.curr_fault_detect)
        .defaultValue("false")
        .description("Enable servo electric current fault detection");

        param("Current Lower Threshold", m_args.curr_lower)
        .units(Units::Ampere)
        .defaultValue("0.4")
        .minimumValue("0.0")
        .description("Current lower threshold to consider abnormal behavior");

        param("Current Upper Threshold", m_args.curr_upper)
        .units(Units::Ampere)
        .defaultValue("0.7")
        .minimumValue("0.0")
        .description("Current upper threshold to consider abnormal behavior");

        param("Maximum Lower Faults", m_args.max_lfaults)
        .defaultValue("20")
        .minimumValue("0")
        .description("Number of faults above the lower threshold to consider "
                     "a current fault detection");

        param("Maximum Upper Faults", m_args.max_ufaults)
        .defaultValue("4")
        .minimumValue("0")
        .description("Number of faults above the upper threshold to consider "
                     "a current fault detection");

        param("Fault Time Cooldown", m_args.fault_cooldown)
        .units(Units::Second)
        .defaultValue("60.0")
        .minimumValue("0.0")
        .description("Period of time after which the fault vectors will be reset to zero");

        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          std::string option = String::str("Entity Label - Current %d", i);
          param(option, m_args.elabel_ampg[i]);
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);

        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          m_pos_monitor[i] = NULL;
          m_curr_monitor[i] = NULL;
        }

        // Register handler routines.
        bind<IMC::SetServoPosition>(this);
        bind<IMC::ServoPosition>(this);
        bind<IMC::Current>(this);
      }

      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.max_rotation_rate))
          m_args.max_rotation_rate = Angles::radians(m_args.max_rotation_rate);

        if (!m_args.pos_fault_detect && !m_args.curr_fault_detect)
          requestDeactivation();
      }

      void
      onEntityResolution(void)
      {
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          try
          {
            m_curr_ents[i] = resolveEntity(m_args.elabel_ampg[i]);
          }
          catch (...)
          {
            m_curr_ents[i] = 0;
          }
        }
      }

      void
      onResourceRelease(void)
      {
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          Memory::clear(m_pos_monitor[i]);
          Memory::clear(m_curr_monitor[i]);
        }
      }

      void
      onResourceAcquisition(void)
      {
        if (m_args.curr_fault_detect)
        {
          // Acquire current fault detection resources
          for (unsigned i = 0; i < c_servo_count; ++i)
          {
            m_curr_monitor[i] = new ServoCurrentMonitor<float>(m_args.curr_lower,
                                                               m_args.curr_upper,
                                                               m_args.max_lfaults,
                                                               m_args.max_ufaults,
                                                               m_args.fault_cooldown);
          }
        }
      }

      void
      onResourceInitialization(void)
      {
        for (unsigned i = 0; i < c_servo_count; ++i)
        {
          m_set_servo[i] = 0.0;
          m_on_fault[i] = FT_NONE;
          m_timer.setTop(c_error_timeout);
        }

        if (m_args.pos_fault_detect || m_args.curr_fault_detect)
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::ServoPosition* msg)
      {
        if (!isActive())
          return;

        if (m_args.pos_fault_detect)
        {
          testPositionFaults(msg);
          m_timer.reset();
        }
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        if (!isActive())
          return;

        m_set_servo[msg->id] = msg->value;
      }

      void
      consume(const IMC::Current* msg)
      {
        if (!isActive())
          return;

        // Servo fault detection routine
        if (m_args.curr_fault_detect)
        {
          for (unsigned i = 0; i < c_servo_count; i++)
          {
            if (m_curr_ents[i] == msg->getSourceEntity() && m_curr_ents[i])
            {
              testCurrentFaults(msg->value, i);
              break;
            }
          }
        }
      }

      //! Test for fault in servo positioning
      //! @param[in] msg pointer to ServoPosition message
      void
      testPositionFaults(const IMC::ServoPosition* msg)
      {
        unsigned i = msg->id;

        if (m_pos_monitor[i] == NULL)
        {
          m_pos_monitor[i] = new ServoPositionMonitor<float>(m_args.pos_error_threshold,
                                                             m_args.rate_factor,
                                                             m_args.pos_error_delay,
                                                             m_args.pos_error_samples,
                                                             m_args.max_rotation_rate);
        }
        else
        {
          uint8_t was_on_fault = m_on_fault[i];
          std::string desc;

          if (m_pos_monitor[i]->updateAndTest(msg->value, m_set_servo[i], &desc))
          {
            m_error_str = String::str(DTR("potential fault in servo#%d, %s"),
                                      i, desc.c_str());

            m_on_fault[i] |= FT_POSITION;
          }
          else
          {
            m_on_fault[i] &= ~FT_POSITION;
          }

          if (was_on_fault != m_on_fault[i])
            updateState(i);
        }
      }

      //! This method will attempt to detect faults in the servo
      //! using electric current readings
      //! @param[in] value electric current value received
      //! @param[in] i number of the servo to test for faults
      void
      testCurrentFaults(float value, unsigned i)
      {
        uint8_t was_on_fault = m_on_fault[i];

        // test for fault occurrence
        float curr = m_curr_monitor[i]->updateAndTest(value);

        // If a potential fault is detected throw a message informing the user!
        // Reset counters after that to avoid spamming the output
        if (curr > 0)
        {
          m_error_str = String::str(DTR("potential fault in servo#%d, "
                                        "current consumption above %f"),
                                    i, curr);

          m_on_fault[i] |= FT_CURRENT;
        }
        else
        {
          m_on_fault[i] &= ~FT_CURRENT;
        }

        if (was_on_fault != m_on_fault[i])
          updateState(i);
      }

      //! Update entity state according to fault states
      //! @param[in] id number id of the servo
      void
      updateState(unsigned id)
      {
        if (m_on_fault[id] == FT_NONE)
        {
          unsigned i = 0;
          for (; i < c_servo_count; ++i)
            if (m_on_fault[i] != FT_NONE)
              break;

          if (i == c_servo_count)
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, m_error_str.c_str());
          err("%s", m_error_str.c_str());
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (getEntityState() == IMC::EntityState::ESTA_ERROR)
            if (m_timer.overflow() && m_args.pos_fault_detect)
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
      }
    };
  }
}

DUNE_TASK
