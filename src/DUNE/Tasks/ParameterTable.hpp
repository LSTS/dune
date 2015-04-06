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
          throw std::runtime_error(DTR("variable does not exist"));

        return itr->second->changed();
      }

      void
      setChanged(bool enabled)
      {
        std::map<void*, Parameter*>::iterator itr = m_pointers.begin();
        for (; itr != m_pointers.end(); ++itr)
          itr->second->setChanged(enabled);
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

      std::map<std::string, Parameter*>::iterator
      find(const std::string& name)
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
