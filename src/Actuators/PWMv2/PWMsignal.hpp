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

#ifndef ACTUATORS_PWMSIGNAL_HPP_INCLUDED_
#define ACTUATORS_PWMSIGNAL_HPP_INCLUDED_

// DUNE headers
#include <DUNE/DUNE.hpp>

// TODO: validate duty cycle (1000 - 2000 us)
namespace Actuators
{
  namespace PWMv2
  {
    // Import namespaces.
    using DUNE_NAMESPACES;
    class PWMsignal: public Thread
    {
    public:
      PWMsignal(DUNE::Tasks::Task* task, int pin, double period = 20'000):
        m_task(task), m_gpio(nullptr), m_pin(pin), m_period(period)
      {
        m_gpio = new Hardware::GPIO(pin);
        m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
        m_gpio->setValue(false);

        m_wdog.setTop(m_period);
        m_duty_cycle = 1'000;
      }

      void
      setPeriod(uint32_t period)
      {
        m_period = period;
        m_wdog.setTop(m_period);
      }

      void
      setDutyCycle(uint32_t _duty_cycle)
      {
        m_duty_cycle = _duty_cycle;
        if (m_duty_cycle > m_period)
          throw std::runtime_error("Duty Cycle above period");
        
      }

      ~PWMsignal()
      {
        Memory::clear(m_gpio);
      }
    private:

      void
      run()
      {
        float write_dc;
        m_task->inf("Started task");
        while (!isStopping())
        {
          /* if (m_wdog.getElapsed() < m_duty_cycle)
            m_gpio->setValue(1);
          else if(!m_wdog.overflow())
            m_gpio->setValue(0);
          else
            m_wdog.reset(); */
          write_dc = m_duty_cycle;
          m_gpio->setValue(true);
          Delay::waitUsec(write_dc);
          m_gpio->setValue(false);
          Delay::waitUsec(m_period - write_dc);

        }
      }

      Counter<double> m_wdog;
      DUNE::Tasks::Task* m_task;
      Hardware::GPIO* m_gpio;
      int m_pin;
      uint32_t m_period;        // period in microseconds
      uint32_t m_duty_cycle;
    };
  }
}

#endif