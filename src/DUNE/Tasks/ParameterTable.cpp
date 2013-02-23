//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
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
        throw std::runtime_error("invalid parameter");

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
