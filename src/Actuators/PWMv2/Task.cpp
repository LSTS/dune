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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// local headers
#include "PWMsignal.hpp"
#include "DMA.hpp"
#include "DirectGPIO.hpp"
#include "DirectPWM.hpp"

// TODO: make pwm channels available in /boot/config.txt

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
      static const unsigned int c_max_pwm = 2;

      struct Arguments
      {
        //! IO ports information
        int servo_inf[c_max_pwm];

        int pwm_inf[c_max_pwm];
      };

      //! Task arguments
      Arguments m_args;
      //! PWM signals
      std::array<DirectPWM*,2> m_channel;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), m_channel{nullptr}
      {
        for (unsigned int i = 0; i < c_max_pwm; i++)
        {
          std::string option = String::str("Servo %u", i);
          param(option, m_args.servo_inf[i])
          .defaultValue("0")
          .description("Servo information");
        }

        for (unsigned int i = 0; i < c_max_pwm; i++)
        {
          std::string option = String::str("PWM %u", i);
          param(option, m_args.pwm_inf[i])
          .defaultValue("0")
          .description("PWM information");
        }
        
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
        for (size_t i = 0; i < c_max_pwm; i++)
        {
          if (m_args.servo_inf[i] != 0)
          {
            //if(validate_port(m_args.servo_inf[i], i))
              //m_channel[i] = new DirectPWM();
          }
          if(m_args.pwm_inf[i] != 0)
          {
            //validate_port(m_args.pwm_inf[i], i);
              //m_channel[i] = new DirectPWM();
          }
        }
        m_channel[0] = new DirectPWM(18);
        m_channel[1] = new DirectPWM(19);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_channel[0]);
        Memory::clear(m_channel[1]);
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        m_channel[msg->id]->setDutyCycle(radToDutycycle(msg->value));
      }

      uint32_t
      radToDutycycle(fp32_t rad)
      {
        float angle = Angles::degrees(rad);
        if (angle < -90)
          angle = -90;
        else if( angle > 90)
          angle = 90;
        
        return angle * 5.5 + 1495;
        // y = mx + b
        // m = (-90 - 90)/(1000 - 2000) ; b = 1000 - (-90*m)
      }
      void
      consume(const IMC::SetPWM* msg)
      {
        //m_channel[msg->id]->setPeriod(msg->period);
        m_channel[msg->id]->setDutyCycle(msg->duty_cycle);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!isStopping())
        {
          m_channel[0]->setDutyCycle(1'000);
          m_channel[1]->setDutyCycle(1'000);
          inf("DutyCycle set 1ms");
          Delay::wait(1);
          m_channel[0]->setDutyCycle(2'000);
          m_channel[1]->setDutyCycle(2'000);
          inf("DutyCycle set 2ms");
          Delay::wait(1);
        }
      }
    };
  }
}

DUNE_TASK
