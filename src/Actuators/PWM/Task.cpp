//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: PGonçalves                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <pthread.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//Local headers
#include "ServoPWM.hpp"

namespace Actuators
{
  namespace PWM
  {
    using DUNE_NAMESPACES;

    static const unsigned int c_max_pwm = 3;
    static const std::string c_mode_operation[] = {"Gimbal", "Drop", "Sample"};

    struct Task: public DUNE::Tasks::Task
    {
      //!Variables
      struct Arguments
      {
        //! PinOut for pwm
        int port_io[c_max_pwm];
        //! Operation Mode
        std::string operation_mode;
      };

      Arguments m_args;
      //! Servo 0
      ServoPwm* m_servo_0;
      //! Servo 1
      ServoPwm* m_servo_1;
      //! Servo 2
      ServoPwm* m_servo_2;
      //! State of update msg servo position
      bool updateMsg;
      //! Value of servo position in deg
      double valuePos;
      //! ID servo
      uint8_t idServo;
      //! Wrong operation mode
      bool m_wrong_mode;
      //! State of pwm
      bool m_pwm_state;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx),
      m_servo_0(NULL),
      m_servo_1(NULL),
      m_servo_2(NULL)
      {
        for(unsigned int i = 0; i < c_max_pwm; ++i)
        {
          std::string option = String::str("PinOut %u", i);
          param(option, m_args.port_io[i])
          .defaultValue("")
          .description("Port IO for Output PWM.");
        }

        param("Operation Mode", m_args.operation_mode)
          .defaultValue("")
          .description("Operation Mode.");

        bind<IMC::SetServoPosition>(this);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        if ( m_args.operation_mode == c_mode_operation[0])
        {
          m_servo_0 = new ServoPwm(this, m_args.port_io[0], 1.308997, true);
          m_servo_0->start();
          m_servo_1 = new ServoPwm(this, m_args.port_io[1], 1.308997, true);
          m_servo_1->start();
          m_wrong_mode = false;
        }
        else if (m_args.operation_mode == c_mode_operation[1])
        {
          m_servo_2 = new ServoPwm(this, m_args.port_io[2], 1.308997, false);
          m_servo_2->start();
          m_wrong_mode = false;
        }
        else if (m_args.operation_mode == c_mode_operation[2])
        {
          m_servo_0 = new ServoPwm(this, m_args.port_io[0], 3.141593, false);
          m_servo_0->start();
          m_servo_1 = new ServoPwm(this, m_args.port_io[1], 3.141593, false);
          m_servo_1->start();
          m_servo_2 = new ServoPwm(this, m_args.port_io[2], 3.141593, false);
          m_servo_2->start();
          m_wrong_mode = false;
        }
        else
          m_wrong_mode = true;
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_servo_0 != NULL)
        {
          m_servo_0->stopAndJoin();
          delete m_servo_0;
          m_servo_0 = NULL;
        }
        if (m_servo_1 != NULL)
        {
          m_servo_1->stopAndJoin();
          delete m_servo_1;
          m_servo_1 = NULL;
        }
        if (m_servo_2 != NULL)
        {
          m_servo_2->stopAndJoin();
          delete m_servo_2;
          m_servo_2 = NULL;
        }
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        m_pwm_state = true;
        valuePos = msg->value;
        idServo = msg->id;
        if (!m_wrong_mode)
        {
          if(idServo == 0)
          {
            //war("SERVO 0: %f", valuePos);
            m_servo_0->SetPwmValue(valuePos);
            if(!m_servo_0->CheckGPIOSate())
              m_pwm_state = false;
          }
          else if(idServo == 1)
          {
            //war("SERVO 1: %f", valuePos);
              m_servo_1->SetPwmValue(valuePos);
            if(!m_servo_1->CheckGPIOSate())
              m_pwm_state = false;
          }
          else if(idServo == 2)
          {
            //war("SERVO 2: %f", valuePos);
            m_servo_2->SetPwmValue(valuePos);
            if(!m_servo_2->CheckGPIOSate())
              m_pwm_state = false;
          }
        }
        else

        if (!m_pwm_state)
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);

        updateMsg = true;
      }

      //! Main loop.
      void
      onMain(void)
      {
        IMC::ServoPosition msgServoPos;

        if (m_wrong_mode)
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_MISSING_DATA);
          err("Error in config file");
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(m_args.operation_mode.c_str()));
        }

        while (!stopping())
        {
          if(updateMsg)
          {
            msgServoPos.value = valuePos;
            msgServoPos.id = idServo;
            dispatch(msgServoPos);
            updateMsg = false;
          }

          waitForMessages(1.0);
        }
      }
    };
  }
}
DUNE_TASK
