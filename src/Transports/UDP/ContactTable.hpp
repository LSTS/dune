//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: ContactTable.hpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************

#ifndef TRANSPORTS_UDP_CONTACT_TABLE_HPP_INCLUDED_
#define TRANSPORTS_UDP_CONTACT_TABLE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <map>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Contact.hpp"

namespace Transports
{
  namespace UDP
  {
    using DUNE_NAMESPACES;

    class ContactTable
    {
    public:
      ContactTable(float tout):
        m_tout(tout)
      { }

      void
      getContacts(std::vector<Contact>& list)
      {
        list.clear();
        for (Table::iterator itr = m_table.begin(); itr != m_table.end(); ++itr)
          list.push_back(itr->second);
      }

      void
      update(unsigned id, const Address& addr)
      {
        Table::iterator itr = m_table.find(id);

        if (itr == m_table.end())
        {
          std::pair<Table::iterator, bool> rv = m_table.insert(Entry(id, Contact(id, addr)));
          itr = rv.first;
          itr->second.setTimeout(m_tout);
        }

        // Address has changed... update it.
        if (itr->second.getAddress() != addr)
        {
          itr->second = Contact(id, addr);
          itr->second.setTimeout(m_tout);
        }

        itr->second.update();
      }

    private:
      // Table type.
      typedef std::map<unsigned, Contact> Table;
      // Map entry.
      typedef std::pair<unsigned, Contact> Entry;
      // Table.
      Table m_table;
      // Timeout value to deactivate a contact.
      float m_tout;
    };
  }
}

#endif
