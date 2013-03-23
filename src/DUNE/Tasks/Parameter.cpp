//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <iostream>
#include <climits>

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Tasks/Parameter.hpp>
#include <DUNE/Tasks/Exceptions.hpp>

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

      throw std::runtime_error("invalid visibility string");
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

      throw std::runtime_error("invalid scope string");
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
      m_reader(0),
      m_changed(true),
      m_visibility(VISIBILITY_DEVELOPER),
      m_scope(SCOPE_GLOBAL)
    { }

    Parameter::~Parameter(void)
    {
      if (m_reader)
        delete m_reader;

      for (unsigned i = 0; i < m_values_if.size(); ++i)
        delete m_values_if[i];
    }

    void
    Parameter::reader(AbstractParameterParser* r)
    {
      if (m_reader)
        delete m_reader;

      m_reader = r;
    }

    void
    Parameter::read(const std::string& val)
    {
      if (m_reader == 0)
        throw std::runtime_error("no available reader");

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
        throw InvalidValue(m_name, val);
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
      os << "<param name=\"" << m_name << "\""
         << " i18n-name=\"" << DTR(m_name.c_str()) << "\""
         << " type=\"" << m_type_name << "\""
         << " visibility=\"" << visibilityToString(m_visibility) << "\""
         << " scope=\"" << scopeToString(m_scope) << "\"";

      if (!m_min_value.empty())
        os << " min=\"" << m_min_value << "\"";

      if (!m_max_value.empty())
        os << " max=\"" << m_max_value << "\"";

      if ((m_min_size == m_max_size) && m_min_size < UINT_MAX)
      {
        os << " size=\"" << m_min_size << "\"";
      }
      else
      {
        if (m_min_size < UINT_MAX)
          os << " min-size=\"" << m_min_size << "\"";

        if (m_max_size < UINT_MAX)
          os << " max-size=\"" << m_max_size << "\"";
      }

      if (!m_default.empty())
        os << " default=\"" << m_default << "\"";

      if (m_units != Units::None)
        os << " units=\"" << Units::getAbbrev(m_units) << "\"";

      os << ">\n";

      if (!m_desc.empty())
      {
        os << "<desc>\n"
           << "<![CDATA["
           << DTR(m_desc.c_str())
           << "]]>\n"
           << "</desc>\n";
      }

      if (!m_values.empty())
      {
        os << "<values>\n"
           << "<![CDATA["
           << m_values
           << "]]>\n"
           << "</values>\n";

        os << "<values-i18n>\n"
           << "<![CDATA["
           << DTR(m_values.c_str())
           << "]]>\n"
           << "</values-i18n>\n";
      }

      for (unsigned i = 0; i < m_values_if.size(); ++i)
      {
        os << "<values-if>\n"
           << "<param>" << m_values_if[i]->name << "</param>\n"
           << "<equals>" << m_values_if[i]->equals << "</equals>\n"
           << "<values><![CDATA[" << m_values_if[i]->values << "]]></values>\n"
           << "</values-if>\n";
      }

      os << "</param>\n";
    }
  }
}
