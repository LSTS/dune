//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace UserInterfaces
{
  namespace ButtonsRPI
  {
    using DUNE_NAMESPACES;

    static const int c_number_max_button = 3;

    struct Arguments
    {
      //! Gpio Number for buttons
      int gpio_bt[c_number_max_button];
      //! GPIO character device (Linux 4.8 and newer).
      std::string gpio_device;
    };

    struct Task: public Tasks::Task
    {
      // Button event.
      IMC::ButtonEvent m_button_event;
      // Task Arguments.
      Arguments m_args;
      // Buttons State
      bool isLastStateHigh[c_number_max_button];
      // GPIO interfaces.
      Hardware::GPIO* m_gpio[c_number_max_button];

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_gpio{nullptr, nullptr, nullptr}
      {
        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          std::string option = String::str("Button %u", t);
          param(option, m_args.gpio_bt[t])
          .description("User Buttons.");
        }

        param("GPIO Device", m_args.gpio_device)
        .defaultValue("")
        .description("GPIO character device.");
      }

      void
      onResourceInitialization(void)
      {
        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          if (m_args.gpio_device.empty())
            m_gpio[t] = new Hardware::GPIO(m_args.gpio_bt[t]);
          else
            m_gpio[t] = new Hardware::GPIO(m_args.gpio_device, m_args.gpio_bt[t]);
          m_gpio[t]->setDirection(Hardware::GPIO::GPIO_DIR_INPUT);
          isLastStateHigh[t] = m_gpio[t]->getValue();
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      {
        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          delete m_gpio[t];
          m_gpio[t] = 0;
        }
      }

      void
      checkButtonsState(void)
      {
        for (uint8_t t = 0; t < c_number_max_button; t++)
        {
          if (m_gpio[t]->getValue())
          {
            if(!isLastStateHigh[t])
            {
              isLastStateHigh[t] = true;
              spew("button %d set High", m_args.gpio_bt[t]);
              m_button_event.button = t;
              m_button_event.value = 1;
              dispatch(m_button_event);
            }
          }
          else
          {
            if(isLastStateHigh[t])
            {
              isLastStateHigh[t] = false;
              spew("button %d set low", m_args.gpio_bt[t]);
              m_button_event.button = t;
              m_button_event.value = 0;
              dispatch(m_button_event);
            }
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          Delay::waitMsec(50);
          checkButtonsState();
        }
      }
    };
  }
}

DUNE_TASK
