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

// ISO C++ 98 headers.
#include <vector>
#include <iostream>
#include <climits>

// DUNE headers.
#include <DUNE/Casts.hpp>
#include <DUNE/Utils/String.hpp>
#include <DUNE/Tasks/Parameter.hpp>
#include <DUNE/Tasks/Exceptions.hpp>
#include <DUNE/Utils/XML.hpp>

namespace DUNE
{
  namespace Tasks
  {
    static const char* c_visibility_strs[] =
    {
      "user",
      "developer"
    };

    static const unsigned c_visibility_count = sizeof(c_visibility_strs) / sizeof(char*);

    static const char* c_scope_strs[] =
    {
      "global",
      "idle",
      "plan",
      "maneuver"
    };

    static const unsigned c_scope_count = sizeof(c_scope_strs) / sizeof(char*);

    Parameter::Visibility
    Parameter::visibilityFromString(const std::string& v)
    {
      for (unsigned i = 0; i < c_visibility_count; ++i)
      {
        if (v == c_visibility_strs[i])
          return static_cast<Visibility>(i);
      }

      throw std::runtime_error(DTR("invalid visibility string"));
    }

    const char*
    Parameter::visibilityToString(Visibility v)
    {
      return c_visibility_strs[v];
    }

    Parameter::Scope
    Parameter::scopeFromString(const std::string& s)
    {
      for (unsigned i = 0; i < c_scope_count; ++i)
      {
        if (s == c_scope_strs[i])
          return static_cast<Scope>(i);
      }

      throw std::runtime_error(DTR("invalid scope string"));
    }

    const char*
    Parameter::scopeToString(Scope s)
    {
      return c_scope_strs[s];
    }

    Parameter::Parameter(const std::string& param_name, const std::string& type_name):
      m_name(param_name),
      m_type_name(type_name),
      m_units(Units::None),
      m_min_size(UINT_MAX),
      m_max_size(UINT_MAX),
      m_reader(NULL),
      m_changed(true),
      m_visibility(VISIBILITY_DEVELOPER),
      m_scope(SCOPE_GLOBAL)
    { }

    Parameter::~Parameter(void)
    {
      if (m_reader != NULL)
        delete m_reader;

      for (unsigned i = 0; i < m_values_if.size(); ++i)
        delete m_values_if[i];
    }

    void
    Parameter::reader(AbstractParameterParser* r)
    {
      if (m_reader != NULL)
        delete m_reader;

      m_reader = r;
    }

    void
    Parameter::read(const std::string& val)
    {
      if (m_reader == NULL)
        throw std::runtime_error(DTR("no available reader"));

      try
      {
        m_reader->read(val);
      }
      catch (std::exception& e)
      {
        throw std::runtime_error(Utils::String::str("'%s': %s", m_name.c_str(), e.what()));
      }

      try
      {
        m_reader->validate();
        m_value = val;
      }
      catch (std::exception& e)
      {
        throw InvalidValue(m_name, val, e.what());
      }
    }

    Parameter&
    Parameter::visibility(const std::string& a_visibility)
    {
      m_visibility = visibilityFromString(a_visibility);
      return *this;
    }

    Parameter&
    Parameter::scope(const std::string a_scope)
    {
      m_scope = scopeFromString(a_scope);
      return *this;
    }

    void
    Parameter::writeXML(std::ostream& os) const
    {
      using Utils::XML;

      os << "<param";
      XML::writeAttr("name", m_name, os);
      os << ">\n";

      XML::writeTag("name-i18n", DTR(m_name.c_str()), os);
      XML::writeTag("type", m_type_name, os);
      XML::writeTag("visibility", visibilityToString(m_visibility), os);
      XML::writeTag("scope", scopeToString(m_scope), os);
      XML::writeTag("default", m_value.empty() ? m_default : m_value, os);
      XML::writeTag("units", Units::getAbbrev(m_units), os);
      if (m_desc.empty())
        XML::writeTag("desc", m_desc, os);
      else
        XML::writeTag("desc", DTR(m_desc.c_str()), os);

      if (!m_min_value.empty())
        XML::writeTag("min", m_min_value, os);

      if (!m_max_value.empty())
        XML::writeTag("max", m_max_value, os);

      if ((m_min_size == m_max_size) && m_min_size < UINT_MAX)
      {
        XML::writeTag("size", uncastLexical(m_min_size), os);
      }
      else
      {
        if (m_min_size < UINT_MAX)
          XML::writeTag("min-size", uncastLexical(m_min_size), os);

        if (m_max_size < UINT_MAX)
          XML::writeTag("max-size", uncastLexical(m_max_size), os);
      }

      if (!m_values.empty())
      {
        XML::writeTag("values", m_values, os);
        XML::writeTag("values-i18n", DTR(m_values.c_str()), os);
      }

      for (unsigned i = 0; i < m_values_if.size(); ++i)
      {
        os << "<values-if>\n";
        XML::writeTag("param", m_values_if[i]->name, os);
        XML::writeTag("equals", m_values_if[i]->equals, os);
        XML::writeTag("values", m_values_if[i]->values, os);
        os << "</values-if>\n";
      }

      os << "</param>\n";
    }
  }
}
