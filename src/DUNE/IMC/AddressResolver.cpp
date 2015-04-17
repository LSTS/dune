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
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/IMC/AddressResolver.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Name of the unknown address.
    static const char* c_unknown = "unknown";

    AddressResolver::AddressResolver(void):
      m_name(c_unknown),
      m_id(invalid())
    { }

    const char*
    AddressResolver::name(void)
    {
      Concurrency::ScopedMutex m(m_mutex);
      return m_name.c_str();
    }

    void
    AddressResolver::name(const std::string& a_name)
    {
      Concurrency::ScopedMutex m(m_mutex);
      m_name = a_name;
    }

    unsigned
    AddressResolver::id(void)
    {
      Concurrency::ScopedMutex m(m_mutex);
      return m_id;
    }

    void
    AddressResolver::id(unsigned a_id)
    {
      Concurrency::ScopedMutex m(m_mutex);
      m_id = a_id;
    }

    void
    AddressResolver::insert(const std::string& a_name, unsigned a_id)
    {
      Concurrency::ScopedMutex m(m_mutex);

      m_ids[a_id] = a_name;
      m_names[a_name] = a_id;
    }

    bool
    AddressResolver::isUnknown(unsigned a_id)
    {
      Concurrency::ScopedMutex m(m_mutex);
      IdToName::const_iterator itr = m_ids.find(a_id);
      return (itr == m_ids.end());
    }

    const char*
    AddressResolver::resolve(unsigned a_id)
    {
      Concurrency::ScopedMutex m(m_mutex);

      IdToName::const_iterator itr = m_ids.find(a_id);

      if (itr == m_ids.end())
        return c_unknown;

      return itr->second.c_str();
    }

    unsigned
    AddressResolver::resolve(const std::string& a_name)
    {
      Concurrency::ScopedMutex m(m_mutex);

      NameToId::const_iterator itr = m_names.find(a_name);

      if (itr == m_names.end())
        return invalid();

      return itr->second;
    }
  }
}
