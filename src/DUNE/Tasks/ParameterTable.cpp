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

// DUNE headers.
#include <DUNE/Tasks/ParameterTable.hpp>

namespace DUNE
{
  namespace Tasks
  {
    void
    ParameterTable::set(const std::string& name, const std::string& value)
    {
      std::map<std::string, Parameter*>::const_iterator itr = m_names.find(name);

      if (itr == m_names.end())
        throw std::runtime_error(DTR("invalid parameter"));

      Parameter* parameter = itr->second;
      if (!value.empty())
        parameter->read(value);
      else
        parameter->read(parameter->defaultValue());

      if (parameter->commit())
        parameter->setChanged();
    }

    ParameterTable::~ParameterTable(void)
    {
      for (unsigned i = 0; i < m_params.size(); ++i)
        delete m_params[i];
    }

    std::vector<std::string>
    ParameterTable::getParameterList(void)
    {
      std::vector<std::string> list;
      std::vector<Parameter*>::iterator itr = m_params.begin();

      for (; itr != m_params.end(); ++itr)
        list.push_back((*itr)->name());

      return list;
    }
  }
}
