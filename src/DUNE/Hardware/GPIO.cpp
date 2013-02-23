//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: GPIO.cpp 12667 2013-01-22 02:44:42Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cerrno>

// DUNE headers.
#include <DUNE/System/Error.hpp>
#include <DUNE/Streams/Terminal.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Hardware/GPIO.hpp>

namespace DUNE
{
  namespace Hardware
  {
    using System::Error;
    using Utils::String;

    GPIO::GPIO(unsigned int number):
      m_number(number),
      m_direction(GPIO_DIR_INPUT)
    {
      // Linux 2.6 implementation.
#if defined(DUNE_OS_LINUX)
      writeToFile("/sys/class/gpio/export", m_number);

      std::string prefix = std::string("/sys/class/gpio/gpio") +
                           String::str(m_number);
      m_file_val = prefix + std::string("/value");
      m_file_dir = prefix + std::string("/direction");

      // Lacking implementation.
#else
      throw Error("unimplemented feature", "DUNE::Hardware::GPIO");
#endif
    }

    GPIO::~GPIO(void)
    {
      // Linux 2.6 implementation.
#if defined(DUNE_OS_LINUX)
      try
      {
        writeToFile("/sys/class/gpio/unexport", m_number);
      }
      catch (std::exception& e)
      {
        DUNE_ERR("DUNE::Hardware::GPIO", e.what());
      }
#endif
    }

    void
    GPIO::setDirection(Direction direction)
    {
      if (direction == GPIO_DIR_INPUT)
      {
#if defined(DUNE_OS_LINUX)
        writeToFile(m_file_dir, "in");
#endif
      }
      else
      {
#if defined(DUNE_OS_LINUX)
        writeToFile(m_file_dir, "out");
#endif
      }

      m_direction = direction;
    }

    void
    GPIO::setDirection(const std::string& direction)
    {
      if (direction == "input")
        setDirection(GPIO_DIR_INPUT);
      else if (direction == "output")
        setDirection(GPIO_DIR_OUTPUT);
      else
        throw Error(direction, "GPIO direction must be either 'input' or 'output'");
    }

    void
    GPIO::setValue(bool value)
    {
      if (m_direction != GPIO_DIR_OUTPUT)
        throw Error("GPIO is not configured as output", String::str(m_number));

#if defined(DUNE_OS_LINUX)
      writeToFile(m_file_val, value ? "1" : "0");
#else
      (void)value;
#endif
    }

    bool
    GPIO::getValue(void)
    {
      if (m_direction != GPIO_DIR_INPUT)
        throw Error("GPIO is not configured as input", String::str(m_number));

#if defined(DUNE_OS_LINUX)
      std::FILE* fd = std::fopen(m_file_val.c_str(), "r");
      if (fd == 0)
        throw Error(errno, "unable to read GPIO value");
      unsigned value = std::fgetc(fd);
      std::fclose(fd);
      return value == '1';
#endif

      return false;
    }

#if defined(DUNE_OS_LINUX)
    void
    GPIO::writeToFile(const std::string& file, int value)
    {
      writeToFile(file, String::str(value));
    }

    void
    GPIO::writeToFile(const std::string& file, const std::string& value)
    {
      std::FILE* fd = std::fopen(file.c_str(), "w");
      if (fd == 0)
        throw Error(errno, "unable to export GPIO", value);
      std::fputs(value.c_str(), fd);
      std::fclose(fd);
    }

#endif
  }
}
