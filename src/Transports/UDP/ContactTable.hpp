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
