//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Parameter.cpp 12935 2013-02-15 19:43:06Z rasm                    $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>
#include <iostream>
#include <climits>

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Tasks/Parameter.hpp>

namespace DUNE
{
  namespace Tasks
  {
    static const char* c_visibility_strs[] =
    {
      "user",
      "developer"
    };

    static const char* c_scope_strs[] =
    {
      "global",
      "plan",
      "maneuver"
    };

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

      m_reader->validate();
      m_value = val;
    }

    void
    Parameter::writeXML(std::ostream& os) const
    {
      os << "<param name=\"" << m_name << "\""
         << " i18n-name=\"" << DTR(m_name.c_str()) << "\""
         << " type=\"" << m_type_name << "\""
         << " visibility=\"" << c_visibility_strs[m_visibility] << "\""
         << " scope=\"" << c_scope_strs[m_scope] << "\"";

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
