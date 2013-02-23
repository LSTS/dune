//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_PARAMETER_TABLE_HPP_INCLUDED_
#define DUNE_TASKS_PARAMETER_TABLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>
#include <map>
#include <sstream>

// DUNE headers.
#include <DUNE/Tasks/AbstractParameterParser.hpp>
#include <DUNE/Tasks/Parameter.hpp>
#include <DUNE/Parsers/Config.hpp>

namespace DUNE
{
  namespace Tasks
  {
    class ParameterTable
    {
    public:
      ParameterTable(void)
      { }

      ~ParameterTable(void);

      Parameter&
      add(const std::string& name, void* ptr, AbstractParameterParser* reader)
      {
        Parameter* p = new Parameter(name, reader->getTypeName());
        p->reader(reader);
        m_params.push_back(p);
        m_pointers[ptr] = p;
        m_names[name] = p;
        return *p;
      }

      void
      set(const std::string& name, const std::string& value);

      void
      writeXML(std::ostream& os) const
      {
        for (unsigned i = 0; i < m_params.size(); ++i)
          m_params[i]->writeXML(os);
      }

      bool
      changed(void* ptr)
      {
        std::map<void*, Parameter*>::iterator itr = m_pointers.find(ptr);
        if (itr == m_pointers.end())
          throw std::runtime_error("variable does not exist");

        return itr->second->changed();
      }

      //! Retrieve the list of registered parameters.
      //! @return list with the labels of registered parameters.
      std::vector<std::string>
      getParameterList(void);

      std::map<std::string, Parameter*>::const_iterator
      begin(void) const
      {
        return m_names.begin();
      }

      std::map<std::string, Parameter*>::const_iterator
      end(void) const
      {
        return m_names.end();
      }

      std::map<std::string, Parameter*>::const_iterator
      find(const std::string& name) const
      {
        return m_names.find(name);
      }

    private:
      std::vector<Parameter*> m_params;
      std::map<void*, Parameter*> m_pointers;
      std::map<std::string, Parameter*> m_names;
    };
  }
}

#endif
