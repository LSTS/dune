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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef DUNE_COLLISION_AVOIDANCE_HPP_INCLUDED_
#define DUNE_COLLISION_AVOIDANCE_HPP_INCLUDED_

// DUNE Headers.
#include <DUNE/CollisionAvoidance/BasicCollisionAvoidanceEntity.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace CollisionAvoidance
  {
    enum CollisionAvoidanceType : uint8_t
    {
      CA_DISABLED = 0
    };

    static constexpr const char* c_ca_disabled = "Disabled";
    static const std::vector<std::string> c_ca_type_names = {c_ca_disabled};
    static const std::string c_ca_type_names_str = Utils::String::join(c_ca_type_names.begin(), c_ca_type_names.end(), ",");
    static const std::map<std::string, CollisionAvoidanceType> c_ca_types = {{c_ca_disabled, CA_DISABLED}};

    class Factory
    {
    public:
      static BasicCollisionAvoidanceEntity*
      produce(Tasks::AbstractTask* owner, Tasks::Context& context, const std::string& type)
      {
        auto it = c_ca_types.find(type);
        if (it == c_ca_types.end())
          throw std::runtime_error("CollisionAvoidance::Factory : unknown Collision Avoidance type: " + type);

        switch (it->second)
        {
        case CA_DISABLED:
          return nullptr;

        default:
          throw std::runtime_error("CollisionAvoidance::Factory : not implemented Collision Avoidance type: " + type);
        }
      }
    };
  }
}

#endif
