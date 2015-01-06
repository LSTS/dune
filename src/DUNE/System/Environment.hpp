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

#ifndef DUNE_SYSTEM_ENVIRONMENT_HPP_INCLUDED_
#define DUNE_SYSTEM_ENVIRONMENT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <sstream>

// Local headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace System
  {
    class Environment
    {
    public:
      //! Get an environment variable.
      //! Note: call may not be thread-safe on some OSes.
      //! @param[in] var the name of the environment variable.
      //! @param[out] value set to the value of environment variable,
      //! if the call is successful.
      //! @return true if successful, false otherwise.
      static bool
      get(std::string var, std::string& value);

      //! Get an environment variable, template version.
      //! @param[in] var the name of the environment variable.
      //! @param[out] value set to the value of environment variable,
      //! if the call is successful.
      //! @return true if successful, false otherwise.
      template <typename T>
      static bool
      get(std::string var, T& value)
      {
        std::string val;

        if (!get(var, val))
          return false;

        std::stringstream ss(val);
        ss >> value;

        return (!ss.fail());
      }

      //! Set an environment variable.
      //! Note: call may not be thread-safe on some OSes.
      //! @param[in] var the name of the environment variable.
      //! @param[in] value new value for the environment variable.
      static void
      set(std::string var, std::string value);

      //! Set an environment variable, template version.
      //! @param[in] var the name of the environment variable.
      //! @param[in] value new value for the environment variable.
      template <typename T>
      static void
      set(std::string var, T value)
      {
        std::stringstream ss;
        ss << value;
        set(var, ss.str());
      }

      //! Unset an environment variable.
      //! Note: call may not be thread-safe on some OSes.
      //! @param[in] var the name of the environment variable.
      static void
      unset(std::string var);
    };
  }
}

#endif
