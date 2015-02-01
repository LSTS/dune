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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_PARAMETER_TYPE_NAME_HPP_INCLUDED_
#define DUNE_TASKS_PARAMETER_TYPE_NAME_HPP_INCLUDED_

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
      get(const int8_t& var)
      {
        (void)var;
        return "integer";
      }

      static std::string
      get(const int16_t& var)
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
      get(const uint8_t& var)
      {
        (void)var;
        return "integer";
      }

      static std::string
      get(const uint16_t& var)
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
