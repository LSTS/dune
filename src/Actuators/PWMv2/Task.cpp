//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

// C++ headers
#include <unordered_map>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// local headers
#include "PWMsignal.hpp"


// TODO: change read param Servo 0-.. Pin

namespace Actuators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace PWMv2
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      static const unsigned int c_max_servo = 5;

      static const unsigned int c_max_pwm = 5;

      struct Arguments
      {
        //! IO ports information
        int servo_inf[c_max_servo];

        int pwm_inf[c_max_pwm];
      };

      //! Task arguments
      Arguments m_args;
      //! PWM servo signals
      std::array<PWMsignal*,c_max_servo> m_servo;
      //! PWM signals
      std::array<PWMsignal*,c_max_pwm> m_pwm;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), m_servo(), m_pwm()
      {
        for (unsigned int i = 0; i < c_max_servo; i++)
        {
          std::string option = String::str("Servo %u", i);
          param(option, m_args.servo_inf[i])
          .defaultValue("0")
          .description("Port");

        }

        for (unsigned int i = 0; i < c_max_pwm; i++)
        {
          std::string option = String::str("PWM %u", i);
          param(option, m_args.pwm_inf[i])
          .defaultValue("0")
          .description("");
        }
        
        m_servo.fill(nullptr);
        m_pwm.fill(nullptr);
        
        bind<IMC::SetServoPosition>(this);
        //bind<IMC::GpioStateSet>(this);
        bind<IMC::SetPWM>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        for (size_t id = 0; id < c_max_servo; id++)
        {
          if(m_args.servo_inf[id] != 0)
          {
            m_servo[id] = new PWMsignal(this, m_args.servo_inf[id]);
            m_servo[id]->start();
            inf("Initialized Servo PWM id %u on id: %d", id, m_args.servo_inf[id]);
          }
        }

        for (size_t id = 0; id < c_max_pwm; id++)
        {
          if(m_args.pwm_inf[id] != 0)
          {
            //m_pwm[id] = new PWMsignal(this, m_args.pwm_inf[id]);
            inf("Initialized Servo PWM id %u on id: %d", id, m_args.pwm_inf[id]);
          }
        }     
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        inf("Release resource");
        for (size_t id = 0; id < c_max_servo; id++)        
        {
          if (m_servo[id] != nullptr)
          {
            m_servo[id]->stopAndJoin();
            delete m_servo[id];
            m_servo[id] = nullptr;
          }
        }

        for (size_t id = 0; id < c_max_pwm; id++)
        {
          if (m_pwm[id] != nullptr)
          {
            m_pwm[id]->stopAndJoin();
            delete m_pwm[id];
            m_pwm[id] = nullptr;
          }
        }
        inf("End release");
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        (void)msg;
        // convert msg->value to dutycycle

      }

      void
      consume(const IMC::SetPWM* msg)
      {
        (void)msg;
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          m_servo[0]->setDutyCycle(1'000);
          inf("DutyCycle set 1ms");
          Delay::wait(1);
          m_servo[0]->setDutyCycle(2'000);
          inf("DutyCycle set 2ms");
          Delay::wait(1);
        }
      }
    };
  }
}

DUNE_TASK
