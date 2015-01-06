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
