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

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Entities/ParameterizedEntity.hpp>
#include <DUNE/Utils/XML.hpp>

namespace DUNE
{
  namespace Entities
  {
    void
    ParameterizedEntity::consume(const IMC::QueryEntityParameters* msg)
    {
      onQueryEntityParameters(msg);
    }

    void
    ParameterizedEntity::onQueryEntityParameters(const IMC::QueryEntityParameters* msg)
    {
      if (msg->name != getLabel())
        return;

      IMC::EntityParameters params;
      params.name = msg->name;

      std::map<std::string, Tasks::Parameter*>::const_iterator itr = m_params.begin();
      for (; itr != m_params.end(); ++itr)
      {
        IMC::EntityParameter p;
        p.name = itr->second->name();
        p.value = itr->second->value();
        params.params.push_back(p);
      }

      dispatchReply(*msg, params);
    }

    void
    ParameterizedEntity::consume(const IMC::SetEntityParameters* msg)
    {
      onSetEntityParameters(msg);
    }

    void
    ParameterizedEntity::onSetEntityParameters(const IMC::SetEntityParameters* msg)
    {
      if (msg->name != getLabel())
        return;

      IMC::EntityParameters params;
      params.name = msg->name;

      IMC::MessageList<IMC::EntityParameter>::const_iterator itr = msg->params.begin();
      for (; itr != msg->params.end(); ++itr)
      {
        try
        {
          const auto pit = m_params.find((*itr)->name);
          if (pit == m_params.end())
            throw std::runtime_error("invalid parameter");

          auto p = m_params.apply(&(pit->second), (*itr)->value);
          params.params.push_back(p);
          m_ctx.config.set(m_owner->getName(), (*itr)->name, (*itr)->value);
        }
        catch (std::runtime_error& e)
        {
          m_owner->err(DTR("updating %s parameters: %s: '%s'"), msg->name.c_str(), e.what(),
                          (*itr)->name.c_str());
        }
      }

      if (!params.params.empty())
        dispatchReply(*msg, params);

      updateParameters();
    }

    void
    ParameterizedEntity::consume(const IMC::PushEntityParameters* msg)
    {
      onPushEntityParameters(msg);
    }

    void
    ParameterizedEntity::onPushEntityParameters(const IMC::PushEntityParameters* msg)
    {
      if (msg->name != getLabel())
        return;

      std::map<std::string, std::string> map;
      std::map<std::string, Tasks::Parameter*>::const_iterator itr = m_params.begin();
      for (; itr != m_params.end(); ++itr)
      {
        if (itr->second->getScope() != Tasks::Parameter::SCOPE_GLOBAL)
          map[itr->second->name()] = itr->second->value();
      }

      m_params_stack.push(map);
    }

    void
    ParameterizedEntity::consume(const IMC::PopEntityParameters* msg)
    {
      onPopEntityParameters(msg);
    }

    void
    ParameterizedEntity::onPopEntityParameters(const IMC::PopEntityParameters* msg)
    {
      if (msg->name != getLabel())
        return;

      if (m_params_stack.empty())
        return;

      std::map<std::string, std::string>& map = m_params_stack.top();
      std::map<std::string, std::string>::const_iterator itr = map.begin();
      for (; itr != map.end(); ++itr)
        m_params.set(itr->first, itr->second);
      m_params_stack.pop();

      updateParameters();
    }

    void
    ParameterizedEntity::writeParamsXML(std::ostream& os) const
    {
      using Utils::XML;

      os << "<section";
      XML::writeAttr("name", getLabel(), os);
      XML::writeAttr("name-i18n", DTR(getLabel().c_str()), os);
      if (!m_param_editor.empty())
        XML::writeAttr("editor", m_param_editor, os);
      os << ">\n";

      m_params.writeXML(os);

      os << "</section>\n";
    }

    void
    ParameterizedEntity::loadConfig(void)
    {
      if (m_section.empty())
        return;

      std::map<std::string, Tasks::Parameter*>::const_iterator itr = m_params.begin();
      for (; itr != m_params.end(); ++itr)
      {
        std::string value = m_ctx.config.get(m_section, itr->second->name());
        m_params.set(itr->second->name(), value);
      }

      // Check for invalid parameter names.
      std::map<std::string, std::string> options = m_ctx.config.getSection(m_section);
      std::map<std::string, std::string>::const_iterator pitr = options.begin();
      for (; pitr != options.end(); ++pitr)
      {
        if (m_params.find(pitr->first) == m_params.end())
          m_owner->err(DTR("invalid parameter '%s'"), pitr->first.c_str());
      }

      updateParameters();
    }
  }
}
