//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <cstddef>

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
      //! Work path for gpio manipulation
      std::string gpio_work_path;
    };

    struct Task: public Tasks::Task
    {
      // Button event.
      IMC::ButtonEvent m_button_event;
      // Task Arguments.
      Arguments m_args;
      // Buttons State
      bool isLastStateHigh[c_number_max_button];

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          std::string option = String::str("Button %u", t);
          param(option, m_args.gpio_bt[t])
          .description("User Buttons.");
        }

        param("Gpio Work Path", m_args.gpio_work_path)
        .description("Work path for Gpio manipulation.");
      }

      void
      onResourceInitialization(void)
      {
        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          if(!exportGpio(m_args.gpio_bt[t]))
          {
            std::string m_error_text = String::str("Cannot acess to export of pin %d", m_args.gpio_bt[t]);
            setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
            throw RestartNeeded(m_error_text, 5);
          }
          else
          {
            if(!setGpioDirection(m_args.gpio_bt[t], true))
            {
              std::string m_error_text = String::str("Cannot set direction of pin %d", m_args.gpio_bt[t]);
              setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_INTERNAL_ERROR);
              throw RestartNeeded(m_error_text, 5);
            }
          }
          isLastStateHigh[t] = false;
        }
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onResourceRelease(void)
      {
        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          if(!unexportGpio(m_args.gpio_bt[t]))
          {
            std::string m_error_text = String::str("Cannot acess to unexport of pin %d", m_args.gpio_bt[t]);
            debug("%s", m_error_text.c_str());
          }
        }
      }

      bool
      exportGpio(int gpio)
      {
        std::string path = m_args.gpio_work_path + "/export";
        int result = open (path.c_str(), O_WRONLY);
        if (result ==-1)
        {
          err("Error open export file for pin %d ", gpio);
          return false;
        }
        char buffer[3];
        std::snprintf(buffer, 3, "%d", gpio);
        if(write(result, buffer, 3) == -1)
        {
          close(result);
          return false;
        }
        close(result);
        return true;
      }

      bool
      unexportGpio(int gpio)
      {
        std::string path = m_args.gpio_work_path + "/unexport";
        int result = open (path.c_str(), O_WRONLY);
        if (result==-1)
        {
          war("Error open unexport file for pin %d ", gpio);
          return false;
        }
        char buffer[3];
        std::snprintf(buffer, 3, "%d", gpio);
        if(write(result, buffer, 3) == -1)
        {
          close(result);
          return false;
        }
        return true;
      }

      bool
      setGpioDirection(int gpio, bool isInput)
      {
        char path[64];
        std::snprintf(path, 35, "%s/gpio%d/direction", m_args.gpio_work_path.c_str(), gpio);
        int result = open (path, O_WRONLY);
        if (result == -1)
        {
          err("Error open direction file for pin %d ", gpio);
          return false;
        }
        char buffer[3];
        std::snprintf(buffer, 3, "%d", gpio);
        if (write(result, ((isInput == true)?"in":"out"),3 ) ==-1)
        {
          close(result);
          return false;
        }
        close(result);
        return true;
      }

      bool
      isGpioHigh(int gpio)
      {
        char path[64];
        std::snprintf(path, 35, "%s/gpio%d/value", m_args.gpio_work_path.c_str(), gpio);
        int result  = open(path, O_RDONLY);
        if (result == -1)
        {
          spew("Error open file value of pin %d", gpio);
          return false;
        }
        char buffer[3];
        if (read(result, buffer, 3) == -1)
        {
          spew("Error reading value of pin %d", gpio);
          close(result);
          return false;
        }
        close(result);
        return ((buffer[0] == '1')?true:false);
      }

      void
      checkButtonsState(void)
      {
        for (uint8_t t = 0; t < c_number_max_button; t++)
        {
          if (isGpioHigh(m_args.gpio_bt[t]))
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
