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
// Author: Luis Venâncio                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <cerrno>
#include <cstring>

// DUNE headers.
#include <DUNE/System/Error.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Hardware/GPIO/GPIOCharDevice.hpp>

// POSIX headers.
#if defined(DUNE_OS_LINUX)
#  include <fcntl.h>
#  include <unistd.h>
#  include <sys/ioctl.h>
#endif

// Linux headers.
#if defined(DUNE_SYS_HAS_LINUX_GPIO_H)
#  include <linux/gpio.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    namespace GPIOInternals
    {
      using System::Error;
      using Utils::String;

#if defined(DUNE_OS_LINUX)
      static const int c_error_unavailable = ENOTSUP;
#else
      static const int c_error_unavailable = 0;
#endif

      GPIOCharDevice::GPIOCharDevice(const std::string& device, unsigned int offset):
        m_offset(offset),
        m_version(VERSION_PENDING),
        m_chip_fd(-1),
        m_line_fd(-1)
      {
        (void)device;
#if defined(DUNE_OS_LINUX) && defined(DUNE_SYS_HAS_LINUX_GPIO_H) && defined(GPIO_GET_CHIPINFO_IOCTL)
        m_chip_fd = open(device.c_str(), O_RDONLY);
        if (m_chip_fd < 0)
        {
          int saved_errno = errno;
          if (isUnavailable(saved_errno))
            throw GPIOInterfaceUnavailable(saved_errno);
          throw Error(saved_errno, "unable to open GPIO chip", device);
        }
#else
        throw GPIOInterfaceUnavailable(c_error_unavailable);
#endif
      }

      GPIOCharDevice::~GPIOCharDevice(void)
      {
#if defined(DUNE_OS_LINUX)
        if (m_line_fd >= 0)
          close(m_line_fd);
        if (m_chip_fd >= 0)
          close(m_chip_fd);
#endif
      }

      bool
      GPIOCharDevice::isUnavailable(int code)
      {
#if defined(DUNE_OS_LINUX)
        return code == ENOENT || code == ENODEV || code == ENXIO ||
               code == ENOTTY || code == EOPNOTSUPP;
#else
        (void)code;
        return true;
#endif
      }

      void
      GPIOCharDevice::setDirection(GPIO::Direction direction)
      {
        if (m_version == VERSION_PENDING)
          requestLine(direction);
        else
          configureLine(direction);
      }

      void
      GPIOCharDevice::setValue(bool value)
      {
#if defined(DUNE_OS_LINUX)
        if (m_version == VERSION_2)
        {
#if defined(GPIO_V2_LINE_SET_VALUES_IOCTL)
          struct gpio_v2_line_values values;
          std::memset(&values, 0, sizeof(values));
          values.mask = 1;
          values.bits = value ? 1 : 0;
          if (ioctl(m_line_fd, GPIO_V2_LINE_SET_VALUES_IOCTL, &values) < 0)
            throw Error(errno, "unable to set GPIO value", String::str(m_offset));
          return;
#endif
        }

        if (m_version == VERSION_1)
        {
#if defined(GPIOHANDLE_SET_LINE_VALUES_IOCTL)
          struct gpiohandle_data data;
          std::memset(&data, 0, sizeof(data));
          data.values[0] = value ? 1 : 0;
          if (ioctl(m_line_fd, GPIOHANDLE_SET_LINE_VALUES_IOCTL, &data) < 0)
            throw Error(errno, "unable to set GPIO value", String::str(m_offset));
          return;
#endif
        }
#endif
        (void)value;
        throw GPIOInterfaceUnavailable(c_error_unavailable);
      }

      bool
      GPIOCharDevice::getValue(void)
      {
        if (m_version == VERSION_PENDING)
          requestLine(GPIO::GPIO_DIR_INPUT);

#if defined(DUNE_OS_LINUX)
        if (m_version == VERSION_2)
        {
#if defined(GPIO_V2_LINE_GET_VALUES_IOCTL)
          struct gpio_v2_line_values values;
          std::memset(&values, 0, sizeof(values));
          values.mask = 1;
          if (ioctl(m_line_fd, GPIO_V2_LINE_GET_VALUES_IOCTL, &values) < 0)
            throw Error(errno, "unable to read GPIO value", String::str(m_offset));
          return (values.bits & 1) != 0;
#endif
        }

        if (m_version == VERSION_1)
        {
#if defined(GPIOHANDLE_GET_LINE_VALUES_IOCTL)
          struct gpiohandle_data data;
          std::memset(&data, 0, sizeof(data));
          if (ioctl(m_line_fd, GPIOHANDLE_GET_LINE_VALUES_IOCTL, &data) < 0)
            throw Error(errno, "unable to read GPIO value", String::str(m_offset));
          return data.values[0] != 0;
#endif
        }
#endif
        throw GPIOInterfaceUnavailable(c_error_unavailable);
      }

      void
      GPIOCharDevice::requestLine(GPIO::Direction direction)
      {
        (void)direction;
        int saved_errno = c_error_unavailable;

#if defined(DUNE_OS_LINUX) && defined(GPIO_V2_GET_LINE_IOCTL)
        struct gpio_v2_line_request v2_request;
        std::memset(&v2_request, 0, sizeof(v2_request));
        v2_request.offsets[0] = m_offset;
        v2_request.num_lines = 1;
        v2_request.config.flags = direction == GPIO::GPIO_DIR_INPUT ?
                                  GPIO_V2_LINE_FLAG_INPUT : GPIO_V2_LINE_FLAG_OUTPUT;
        if (direction == GPIO::GPIO_DIR_OUTPUT)
        {
          v2_request.config.num_attrs = 1;
          v2_request.config.attrs[0].attr.id = GPIO_V2_LINE_ATTR_ID_OUTPUT_VALUES;
          v2_request.config.attrs[0].mask = 1;
        }
        std::strncpy(v2_request.consumer, "DUNE Hardware GPIO",
                     sizeof(v2_request.consumer) - 1);
        if (ioctl(m_chip_fd, GPIO_V2_GET_LINE_IOCTL, &v2_request) == 0)
        {
          m_line_fd = v2_request.fd;
          m_version = VERSION_2;
          return;
        }
        saved_errno = errno;
        if (!isUnavailable(saved_errno))
          throw Error(saved_errno, "unable to request GPIO line", String::str(m_offset));
#endif

#if defined(DUNE_OS_LINUX) && defined(GPIO_GET_LINEHANDLE_IOCTL)
        struct gpiohandle_request v1_request;
        std::memset(&v1_request, 0, sizeof(v1_request));
        v1_request.lineoffsets[0] = m_offset;
        v1_request.lines = 1;
        v1_request.flags = direction == GPIO::GPIO_DIR_INPUT ?
                           GPIOHANDLE_REQUEST_INPUT : GPIOHANDLE_REQUEST_OUTPUT;
        std::strncpy(v1_request.consumer_label, "DUNE Hardware GPIO",
                     sizeof(v1_request.consumer_label) - 1);
        if (ioctl(m_chip_fd, GPIO_GET_LINEHANDLE_IOCTL, &v1_request) == 0)
        {
          m_line_fd = v1_request.fd;
          m_version = VERSION_1;
          return;
        }
        saved_errno = errno;
        if (!isUnavailable(saved_errno))
          throw Error(saved_errno, "unable to request GPIO line", String::str(m_offset));
#endif

        throw GPIOInterfaceUnavailable(saved_errno);
      }

      void
      GPIOCharDevice::configureLine(GPIO::Direction direction)
      {
        (void)direction;
#if defined(DUNE_OS_LINUX)
        if (m_version == VERSION_2)
        {
#if defined(GPIO_V2_LINE_SET_CONFIG_IOCTL)
          struct gpio_v2_line_config config;
          std::memset(&config, 0, sizeof(config));
          config.flags = direction == GPIO::GPIO_DIR_INPUT ?
                         GPIO_V2_LINE_FLAG_INPUT : GPIO_V2_LINE_FLAG_OUTPUT;
          if (direction == GPIO::GPIO_DIR_OUTPUT)
          {
            config.num_attrs = 1;
            config.attrs[0].attr.id = GPIO_V2_LINE_ATTR_ID_OUTPUT_VALUES;
            config.attrs[0].mask = 1;
          }
          if (ioctl(m_line_fd, GPIO_V2_LINE_SET_CONFIG_IOCTL, &config) < 0)
            throw Error(errno, "unable to configure GPIO line", String::str(m_offset));
          return;
#endif
        }

        if (m_version == VERSION_1)
        {
#if defined(GPIOHANDLE_SET_CONFIG_IOCTL)
          struct gpiohandle_config config;
          std::memset(&config, 0, sizeof(config));
          config.flags = direction == GPIO::GPIO_DIR_INPUT ?
                         GPIOHANDLE_REQUEST_INPUT : GPIOHANDLE_REQUEST_OUTPUT;
          if (ioctl(m_line_fd, GPIOHANDLE_SET_CONFIG_IOCTL, &config) == 0)
            return;
          if (errno != ENOTTY)
            throw Error(errno, "unable to configure GPIO line", String::str(m_offset));
#endif
          close(m_line_fd);
          m_line_fd = -1;
          m_version = VERSION_PENDING;
          requestLine(direction);
          return;
        }
#endif
        throw GPIOInterfaceUnavailable(c_error_unavailable);
      }
    }
  }
}
