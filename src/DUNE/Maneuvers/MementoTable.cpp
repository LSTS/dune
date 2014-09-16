//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
#include <sstream>

// DUNE headers.
#include <DUNE/Maneuvers/MementoTable.hpp>
#include <DUNE/Utils/TupleList.hpp>

namespace DUNE
{
  namespace Maneuvers
  {
    void
    MementoTable::fill(const std::string& str)
    {
      Utils::TupleList tl(str, "=", ",");

      if (!tl.getMap().size())
        throw std::runtime_error(DTR("no tuples found"));
        
      std::map<std::string, std::string>::const_iterator itr;
      itr = tl.getMapReversed().begin();

      for (; itr != tl.getMapReversed().end(); itr++)
        ParameterTable::set(itr->first, itr->second);
    }

    void
    MementoTable::writeTuples(std::string& str)
    {
      if (!ParameterTable::getParameterList().size())
        return;

      std::stringstream ss;

      std::map<std::string, Tasks::Parameter*>::const_iterator itr;

      for (itr = ParameterTable::begin(); itr != ParameterTable::end(); ++itr)
      {
        if (itr != ParameterTable::begin())
          ss << ",";
          
        ss << itr->first << "=" << itr->second->value();
      }

      str = ss.str();
    }
  }
}
