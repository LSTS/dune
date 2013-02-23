//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: ParameterTypeName.hpp 12667 2013-01-22 02:44:42Z rasm            $:*
//***************************************************************************

#ifndef DUNE_TASK_PARAMETER_TYPE_NAME_HPP_INCLUDED_
#define DUNE_TASK_PARAMETER_TYPE_NAME_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Network/Address.hpp>

namespace DUNE
{
  namespace Tasks
  {
    class ParameterTypeName
    {
    public:
      template<typename T>
      static std::string
      get(const T& var)
      {
        (void)var;
        return "string";
      }

      static std::string
      get(const int& var)
      {
        (void)var;
        return "integer";
      }

      static std::string
      get(const unsigned& var)
      {
        (void)var;
        return "integer";
      }

      static std::string
      get(const bool& var)
      {
        (void)var;
        return "boolean";
      }

      static std::string
      get(const float& var)
      {
        (void)var;
        return "real";
      }

      static std::string
      get(const double& var)
      {
        (void)var;
        return "real";
      }

      static std::string
      get(const Network::Address& var)
      {
        (void)var;
        return "ipv4-address";
      }
    };
  }
}

#endif
