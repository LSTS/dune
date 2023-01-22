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
  namespace PWM
  {
    class ServoPwm: public Thread
    {
      public:
        int m_gpio;
        double m_value;
        bool m_gpio_state;
        bool m_refresh;

        ServoPwm(DUNE::Tasks::Task* task, int gpio, double value, bool refresh):
        m_task(task)
        {
          m_gpio = gpio;
          m_value = value;
          m_gpio_state = false;
          m_refresh = refresh;
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
          m_update_angle = true;
        }

        bool
        CheckGPIOSate(void)
        {
          if(m_gpio_state)
            return true;

          return false;
        }

      private:
        void
        run(void)
        {
          c_time_delayms = 19500;
          wdog_tout = 0.02;
          m_wdog.setTop(wdog_tout);
          while(!inicServo( m_gpio ) && !isStopping())
          {
            Delay::wait(1);
          }
          m_gpio_state = true;
          m_update_angle = true;

          while (!isStopping())
          {
            if (m_refresh)
              refreshPWM(m_value);
            else if(!m_refresh && m_update_angle)
              setAngleServomotor(m_value);
            else
              Delay::waitUsec(500);
          }
        }

        //!Set angle to servomotor
        void
        setAngleServomotor( double angle )
        {
          m_gpio_state = true;
          int cntRefreshservo = 0;
          degAngle = DUNE::Math::Angles::degrees(std::abs(angle));
          if (degAngle < 0)
            degAngle = 0;
          if (degAngle > 180)
            degAngle = 180;

          valueUP = (10 * degAngle) + 600;

          while (cntRefreshservo < 200 && !isStopping() && m_gpio_state)
          {
            if ((myOutputHandle = fopen(GPIOValue, "rb+")) == NULL)
            {
              m_task->err("ERROR PinOut %d", m_gpio);
              m_gpio_state = false;
            }
            strcpy(setValue, "1"); // Set value high
            fwrite(&setValue, sizeof(char), 1, myOutputHandle);
            fclose(myOutputHandle);
            Delay::waitUsec(valueUP);
            // Set output to low
            if ((myOutputHandle = fopen(GPIOValue, "rb+")) == NULL)
            {
              m_task->err("ERROR PinOut %d", m_gpio);
              m_gpio_state = false;
            }
            strcpy(setValue, "0"); // Set value low
            fwrite(&setValue, sizeof(char), 1, myOutputHandle);
            fclose(myOutputHandle);;
            Delay::waitUsec(20000 - valueUP);

            cntRefreshservo++;
          }

          if (m_gpio_state)
            m_update_angle = false;
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
            m_task->err("Unable to export GPIO pin (%d)", m_gpio);
            return false;
          }
          strcpy(setValue, GPIOString);
          fwrite(&setValue, sizeof(char), 2, myOutputHandle);
          fclose(myOutputHandle);
          // Set direction of the pin to an output
          if ((myOutputHandle = fopen(GPIODirection, "rb+")) == NULL)
          {
            m_task->err("Unable to open direction handle (%d)", m_gpio);
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
            m_task->err("Unable to unexport GPIO pin (%d)", m_gpio);
            return false;
          }
          strcpy(setValue, GPIOString);
          fwrite(&setValue, sizeof(char), 2, myOutputHandle);
          fclose(myOutputHandle);

          return true;
        }

        void
        refreshPWM( double angle )
        {
          m_gpio_state = true;
          m_wdog.reset();
          degAngle = DUNE::Math::Angles::degrees(std::abs(angle));

          if(degAngle < 0)
            degAngle = 0;
          if(degAngle > 180)
            degAngle = 180;

          valueUP = (10 * degAngle) + 600;

          if ((myOutputHandle = fopen(GPIOValue, "rb+")) == NULL)
          {
            m_task->err("Unable to open value handle (%d)", m_gpio);
            m_gpio_state = false;
          }
          strcpy(setValue, "1"); // Set value high
          fwrite(&setValue, sizeof(char), 1, myOutputHandle);
          fclose(myOutputHandle);
          Delay::waitUsec(valueUP);
          // Set output to low
          if ((myOutputHandle = fopen(GPIOValue, "rb+")) == NULL)
          {
            m_task->err("Unable to open value handle (%d)", m_gpio);
            m_gpio_state = false;
          }
          strcpy(setValue, "0"); // Set value low
          fwrite(&setValue, sizeof(char), 1, myOutputHandle);
          fclose(myOutputHandle);

          while(!m_wdog.overflow())
          {
            Delay::waitUsec(20);
          }
        }

        //! Parent task.
        DUNE::Tasks::Task* m_task;
        //Handle of servo pinout
        FILE *myOutputHandle;
        //Mode in/out of pinout
        char setValue[4];
        char GPIODirection[64];
        //Name of pin to use
        char GPIOString[4];
        //Value to put in pinout
        char GPIOValue[64];
        //! Time of delay to refresh in miliseconds
        int c_time_delayms;
        //! Value of angle in degrees
        int degAngle;
        //! Time to kept in high value
        int valueUP;
        //! Watchdog timeout.
        double wdog_tout;
        //! Watchdog.
        Counter<double> m_wdog;
        //! State of setAngle function
        bool m_update_angle;
    };
  }
}

#endif
