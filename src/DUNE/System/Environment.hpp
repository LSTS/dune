//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
