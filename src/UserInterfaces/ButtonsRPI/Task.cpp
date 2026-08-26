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

// ISO C++ 98 headers.
#include <cstddef>
#include <cerrno>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#if defined(DUNE_SYS_HAS_LINUX_GPIO_H)
#  include <linux/gpio.h>
#  include <sys/ioctl.h>
#endif

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
      // Character-device line handle, or -1 when using legacy sysfs.
      int m_line_handle;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_line_handle(-1)
      {
        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          std::string option = String::str("Button %u", t);
          param(option, m_args.gpio_bt[t])
          .description("User Buttons.");
        }

        param("Gpio Work Path", m_args.gpio_work_path)
        .description("Work path for Gpio manipulation.");

        param("GPIO Device", m_args.gpio_device)
        .defaultValue("/dev/gpiochip0")
        .description("GPIO character device. Falls back to Gpio Work Path when unavailable.");
      }

      void
      onResourceInitialization(void)
      {
        if (openGpioDevice())
        {
          bool states[c_number_max_button];
          if (!readButtons(states))
            throw RestartNeeded("Cannot read GPIO button lines", 5);

          for (uint8_t t = 0; t < c_number_max_button; ++t)
            isLastStateHigh[t] = states[t];

          inf("using GPIO character device '%s'", m_args.gpio_device.c_str());
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          return;
        }

        war("cannot use GPIO character device '%s': %s; falling back to sysfs",
            m_args.gpio_device.c_str(), std::strerror(errno));

        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          if(!exportGpio(m_args.gpio_bt[t]))
          {
            std::string m_error_text = String::str("Cannot access to export of pin %d", m_args.gpio_bt[t]);
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
        if (m_line_handle >= 0)
        {
          close(m_line_handle);
          m_line_handle = -1;
          return;
        }

        for(uint8_t t = 0; t < c_number_max_button; t++)
        {
          if(!unexportGpio(m_args.gpio_bt[t]))
          {
            std::string m_error_text = String::str("Cannot access to unexport of pin %d", m_args.gpio_bt[t]);
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
        char buffer[16];
        int size = std::snprintf(buffer, sizeof(buffer), "%d", gpio);
        if(size < 0 || write(result, buffer, size) != (ssize_t)size)
        {
          int saved_errno = errno;
          close(result);
          // A line exported by another process is already ready for use.
          if (saved_errno == EBUSY)
            return true;
          errno = saved_errno;
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
        char buffer[16];
        int size = std::snprintf(buffer, sizeof(buffer), "%d", gpio);
        if(size < 0 || write(result, buffer, size) != (ssize_t)size)
        {
          close(result);
          return false;
        }
        close(result);
        return true;
      }

      bool
      setGpioDirection(int gpio, bool isInput)
      {
        char path[64];
        std::snprintf(path, sizeof(path), "%s/gpio%d/direction", m_args.gpio_work_path.c_str(), gpio);
        int result = open (path, O_WRONLY);
        if (result == -1)
        {
          err("Error open direction file for pin %d ", gpio);
          return false;
        }
        const char* direction = isInput ? "in" : "out";
        size_t size = std::strlen(direction);
        if (write(result, direction, size) != (ssize_t)size)
        {
          close(result);
          return false;
        }
        close(result);
        return true;
      }

      bool
      readGpio(int gpio, bool& is_high)
      {
        char path[64];
        std::snprintf(path, sizeof(path), "%s/gpio%d/value", m_args.gpio_work_path.c_str(), gpio);
        int result  = open(path, O_RDONLY);
        if (result == -1)
        {
          spew("Error open file value of pin %d", gpio);
          return false;
        }
        char value = 0;
        if (read(result, &value, 1) != 1)
        {
          spew("Error reading value of pin %d", gpio);
          close(result);
          return false;
        }
        close(result);
        is_high = value == '1';
        return true;
      }

      bool
      openGpioDevice(void)
      {
#if defined(DUNE_SYS_HAS_LINUX_GPIO_H)
        int chip = open(m_args.gpio_device.c_str(), O_RDONLY);
        if (chip < 0)
          return false;

        struct gpiohandle_request request;
        std::memset(&request, 0, sizeof(request));
        request.lines = c_number_max_button;
        request.flags = GPIOHANDLE_REQUEST_INPUT;
        std::strncpy(request.consumer_label, "DUNE ButtonsRPI",
                     sizeof(request.consumer_label) - 1);
        for (unsigned t = 0; t < c_number_max_button; ++t)
          request.lineoffsets[t] = m_args.gpio_bt[t];

        if (ioctl(chip, GPIO_GET_LINEHANDLE_IOCTL, &request) < 0)
        {
          int saved_errno = errno;
          close(chip);
          errno = saved_errno;
          return false;
        }

        close(chip);
        m_line_handle = request.fd;
        return true;
#else
        errno = ENOTSUP;
        return false;
#endif
      }

      bool
      readButtons(bool* states)
      {
#if defined(DUNE_SYS_HAS_LINUX_GPIO_H)
        if (m_line_handle >= 0)
        {
          struct gpiohandle_data data;
          std::memset(&data, 0, sizeof(data));
          if (ioctl(m_line_handle, GPIOHANDLE_GET_LINE_VALUES_IOCTL, &data) < 0)
          {
            err("cannot read GPIO lines: %s", std::strerror(errno));
            return false;
          }

          for (unsigned t = 0; t < c_number_max_button; ++t)
            states[t] = data.values[t] != 0;
          return true;
        }
#endif
        for (unsigned t = 0; t < c_number_max_button; ++t)
        {
          if (!readGpio(m_args.gpio_bt[t], states[t]))
            return false;
        }
        return true;
      }

      void
      checkButtonsState(void)
      {
        bool states[c_number_max_button];
        if (!readButtons(states))
          return;

        for (uint8_t t = 0; t < c_number_max_button; t++)
        {
          if (states[t])
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
