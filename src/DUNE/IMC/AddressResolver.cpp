//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: AddressResolver.cpp 12667 2013-01-22 02:44:42Z rasm              $:*
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
