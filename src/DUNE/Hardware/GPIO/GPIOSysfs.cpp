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
// (based on original implementation by Ricardo Martins)
//***************************************************************************

// ISO C++ 98 headers.
#include <cerrno>
#include <cstdio>

// DUNE headers.
#include <DUNE/System/Error.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Hardware/GPIO/GPIOSysfs.hpp>

// POSIX headers.
#if defined(DUNE_OS_LINUX)
#  include <fcntl.h>
#  include <unistd.h>
#endif

namespace DUNE
{
  namespace Hardware
  {
    namespace GPIOInternals
    {
      using System::Error;
      using Utils::String;

      GPIOSysfs::GPIOSysfs(unsigned int number):
        m_number(number),
        m_exported(false)
      {
#if defined(DUNE_OS_LINUX)
        int fd = open("/sys/class/gpio/export", O_WRONLY);
        if (fd < 0)
          throw Error(errno, "unable to open GPIO export control");

        std::string value = String::str(number);
        ssize_t rv = write(fd, value.c_str(), value.size());
        int saved_errno = errno;
        close(fd);
        if (rv != (ssize_t)value.size() && saved_errno != EBUSY)
          throw Error(saved_errno == 0 ? EIO : saved_errno,
                      "unable to export GPIO", value);

        m_exported = rv == (ssize_t)value.size();
        std::string prefix = std::string("/sys/class/gpio/gpio") + value;
        m_file_val = prefix + "/value";
        m_file_dir = prefix + "/direction";
#else
        throw Error("unimplemented feature", "GPIO sysfs backend");
#endif
      }

      GPIOSysfs::~GPIOSysfs(void)
      {
#if defined(DUNE_OS_LINUX)
        if (!m_exported)
          return;

        try
        {
          writeToFile("/sys/class/gpio/unexport", m_number);
        }
        catch (std::exception& error)
        {
          DUNE_ERR("DUNE::Hardware::GPIO", error.what());
        }
#endif
      }

      void
      GPIOSysfs::setDirection(GPIO::Direction direction)
      {
#if defined(DUNE_OS_LINUX)
        writeToFile(m_file_dir, direction == GPIO::GPIO_DIR_INPUT ? "in" : "out");
#else
        (void)direction;
#endif
      }

      void
      GPIOSysfs::setValue(bool value)
      {
#if defined(DUNE_OS_LINUX)
        writeToFile(m_file_val, value ? "1" : "0");
#else
        (void)value;
#endif
      }

      bool
      GPIOSysfs::getValue(void)
      {
#if defined(DUNE_OS_LINUX)
        std::FILE* fd = std::fopen(m_file_val.c_str(), "r");
        if (fd == 0)
          throw Error(errno, "unable to read GPIO value", String::str(m_number));

        int value = std::fgetc(fd);
        int saved_errno = errno;
        if (std::fclose(fd) != 0 || value == EOF)
          throw Error(value == EOF ? (saved_errno == 0 ? EIO : saved_errno) : errno,
                      "unable to read GPIO value", String::str(m_number));
        return value == '1';
#else
        return false;
#endif
      }

      void
      GPIOSysfs::writeToFile(const std::string& file, int value)
      {
        writeToFile(file, String::str(value));
      }

      void
      GPIOSysfs::writeToFile(const std::string& file, const std::string& value)
      {
        std::FILE* fd = std::fopen(file.c_str(), "w");
        if (fd == 0)
          throw Error(errno, "unable to write GPIO control file", file);
        if (std::fputs(value.c_str(), fd) == EOF)
        {
          int saved_errno = errno;
          std::fclose(fd);
          throw Error(saved_errno == 0 ? EIO : saved_errno,
                      "unable to write GPIO control file", file);
        }
        if (std::fclose(fd) != 0)
          throw Error(errno, "unable to write GPIO control file", file);
      }
    }
  }
}
