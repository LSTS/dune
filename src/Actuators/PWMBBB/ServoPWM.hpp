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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

#ifndef ACTUATORS_SERVOPWM_HPP_INCLUDED_
#define ACTUATORS_SERVOPWM_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <queue>
#include <unistd.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Actuators
{
  namespace PWMBBB
  {
    class ServoPwm: public Thread
    {
      public:
        int m_gpio;
        double m_value;
        bool m_gpio_state;
        ServoPwm(DUNE::Tasks::Task* task, int gpio, int value):
        m_task(task)
        {
          m_gpio = gpio;
          m_value = value;
          m_gpio_state = false;
        }

        //! Destructor.
        ~ServoPwm(void)
        {
          closeConfigServo();
        }
        
        void
        SetPwmValue( double _value)
        {
          m_value = _value;
        }

        bool
        CheckGPIOSate(void)
        {
          if(m_gpio_state)
            return true;

          return false;
        }

      private:
        //! Parent task.
        DUNE::Tasks::Task* m_task;
        
        void
        run(void)
        {
          //int cnt = 0;
          while(!inicServo( m_gpio ) && isStopping())
          {
            sleep(1);
          }
          m_gpio_state = true;

          while (!isStopping())
          {
              RefreshPWM(m_value);
          }
        }

        //!Inic of config to pinout of servomotor
        bool
        inicServo(int gpioPin)
        {
          sprintf(GPIOString, "%d", gpioPin);
          sprintf(GPIOValue, "/sys/class/gpio/gpio%d/value", gpioPin);
          sprintf(GPIODirection, "/sys/class/gpio/gpio%d/direction", gpioPin);
          // Export the pin
          if ((myOutputHandle = fopen("/sys/class/gpio/export", "ab")) == NULL)
          {
            m_task->err(DTR("Unable to export GPIO pin"));
            return false;
          }
          strcpy(setValue, GPIOString);
          fwrite(&setValue, sizeof(char), 2, myOutputHandle);
          fclose(myOutputHandle);
          // Set direction of the pin to an output
          if ((myOutputHandle = fopen(GPIODirection, "rb+")) == NULL)
          {
            m_task->err(DTR("Unable to open direction handle"));
            return false;
          }
          strcpy(setValue,"out");
          fwrite(&setValue, sizeof(char), 3, myOutputHandle);
          fclose(myOutputHandle);

          return true;
        }

        //!Close PinOut config
        bool
        closeConfigServo(void)
        {
          // Unexport the pin
          if ((myOutputHandle = fopen("/sys/class/gpio/unexport", "ab")) == NULL)
          {
            m_task->err(DTR("Unable to unexport GPIO pin"));
            return false;
          }
          strcpy(setValue, GPIOString);
          fwrite(&setValue, sizeof(char), 2, myOutputHandle);
          fclose(myOutputHandle);

          return true;
        }

        void
        RefreshPWM( double angle )
        {
          int degAngle = DUNE::Math::Angles::degrees(std::abs(angle));
          
          if(degAngle < 0)
            degAngle = 0;
          if(degAngle > 180)
            degAngle = 180;

          int valueUP = (10 * degAngle) + 600;

          if ((myOutputHandle = fopen(GPIOValue, "rb+")) == NULL)
          {
            m_task->err(DTR("Unable to open value handle"));
            m_gpio_state = false;
          }
          strcpy(setValue, "1"); // Set value high
          fwrite(&setValue, sizeof(char), 1, myOutputHandle);
          fclose(myOutputHandle);
          usleep (valueUP);
          // Set output to low
          if ((myOutputHandle = fopen(GPIOValue, "rb+")) == NULL)
          {
            m_task->err(DTR("Unable to open value handle"));
            m_gpio_state = false;
          }
          strcpy(setValue, "0"); // Set value low
          fwrite(&setValue, sizeof(char), 1, myOutputHandle);
          fclose(myOutputHandle);;
          usleep (20000 - valueUP);
        }

        //Handle of servo pinout
        FILE *myOutputHandle;
        //Mode in/out of pinout
        char setValue[4];
        char GPIODirection[64];
        //Name of pin to use
        char GPIOString[4];
        //Value to put in pinout
        char GPIOValue[64];
    };
  }
}

#endif
