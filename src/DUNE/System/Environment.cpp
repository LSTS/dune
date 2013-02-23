//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstdlib>

// Required by Sun Studio.
#include <stdlib.h>

// Local headers.
#include <DUNE/System/Environment.hpp>

namespace DUNE
{
  namespace System
  {
    bool
    Environment::get(std::string var, std::string& value)
    {
      const char* str = std::getenv(var.c_str());

      if (!str)
        return false;

      value = str;
      return true;
    }

    void
    Environment::set(std::string var, std::string value)
    {
      // POSIX implementation.
#if defined(DUNE_OS_POSIX)
      setenv(var.c_str(), value.c_str(), 1);

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      _putenv((var + '=' + value).c_str());

#endif
    }

    void
    Environment::unset(std::string var)
    {
      // POSIX implementation.
#if defined(DUNE_OS_POSIX)
      unsetenv(var.c_str());

      // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
      _putenv((var + '=').c_str());

#endif
    }
  }
}
