//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef DUNE_ENTITIES_ENTITY_DATA_BASE_HPP_INCLUDED_
#define DUNE_ENTITIES_ENTITY_DATA_BASE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <map>

// DUNE headers.
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Utils/String.hpp>

namespace DUNE
{
  namespace Entities
  {
    class EntityDataBase
    {
    public:
      //! Data base entry.
      struct Entity
      {
        // Label.
        std::string label;
        // Label.
        std::string task_name;
        // Id.
        unsigned int id;
      };

      struct InvalidLabel: public std::runtime_error
      {
        InvalidLabel(const std::string& label):
          std::runtime_error(DTR("invalid entity label: ") + label)
        { }

        InvalidLabel(void):
          std::runtime_error(DTR("entity labels cannot be empty"))
        { }
      };

      struct NonexistentLabel: public std::runtime_error
      {
        NonexistentLabel(const std::string& label):
          std::runtime_error(DTR("nonexistent entity label: ") + label)
        { }
      };

      struct InvalidId: public std::runtime_error
      {
        InvalidId(unsigned int id):
          std::runtime_error(DTR("invalid entity id: ") + Utils::String::str(id))
        { }
      };

      struct ReservedUnique: public std::runtime_error
      {
        ReservedUnique(const std::string& label):
          std::runtime_error(DTR("an unique id was already reserved for entity label: ") + label)
        { }
      };

      EntityDataBase(void):
        m_next_id(0)
      {
      }

      ~EntityDataBase(void)
      {
        Concurrency::ScopedMutex l(m_lock);

        EntitiesById::iterator itr = m_by_id.begin();
        for (; itr != m_by_id.end(); ++itr)
          delete itr->second;
      }

      bool
      labelExists(const std::string& name)
      {
        Concurrency::ScopedMutex l(m_lock);
        EntitiesByLabel::iterator itr = m_by_label.find(name);
        return (itr != m_by_label.end());
      }

      bool
      idExists(unsigned int id)
      {
        Concurrency::ScopedMutex l(m_lock);
        EntitiesById::iterator itr = m_by_id.find(id);
        return (itr != m_by_id.end());
      }

      unsigned int
      reserve(const std::string& label, const std::string& task_name)
      {
        if (label.size() == 0)
          throw InvalidLabel();

        Concurrency::ScopedMutex l(m_lock);
        EntitiesByLabel::iterator itr = m_by_label.find(label);

        if (itr != m_by_label.end())
          throw ReservedUnique(label);

        unsigned int id = m_next_id++;
        Entity* entry = new Entity;
        entry->label = label;
        entry->id = id;
        entry->task_name = task_name;
        m_by_id[id] = entry;
        m_by_label[label] = entry;

        return id;
      }

      unsigned int
      resolve(const std::string& label)
      {
        Concurrency::ScopedMutex l(m_lock);

        EntitiesByLabel::iterator itr = m_by_label.find(label);

        if (itr == m_by_label.end())
          throw NonexistentLabel(label);

        return itr->second->id;
      }

      std::string
      resolveTaskName(const std::string& label)
      {
        Concurrency::ScopedMutex l(m_lock);

        EntitiesByLabel::iterator itr = m_by_label.find(label);

        if (itr == m_by_label.end())
          throw NonexistentLabel(label);

        return itr->second->task_name;
      }

      const std::string&
      resolve(unsigned int id)
      {
        Concurrency::ScopedMutex l(m_lock);

        EntitiesById::iterator itr = m_by_id.find(id);

        if (itr == m_by_id.end())
          throw InvalidId(id);

        return itr->second->label;
      }

      void
      contents(std::vector<Entity*>& devs)
      {
        Concurrency::ScopedMutex l(m_lock);

        for (EntitiesById::iterator itr = m_by_id.begin(); itr != m_by_id.end(); ++itr)
          devs.push_back(itr->second);
      }

      std::map<unsigned, std::string>
      entries(void)
      {
        std::map<unsigned, std::string> ent;

        Concurrency::ScopedMutex l(m_lock);

        for (EntitiesById::iterator itr = m_by_id.begin(); itr != m_by_id.end(); ++itr)
          ent[itr->first] = itr->second->label;

        return ent;
      }

    private:
      Concurrency::Mutex m_lock;
      unsigned int m_next_id;
      typedef std::map<unsigned, Entity*> EntitiesById;
      EntitiesById m_by_id;
      typedef std::map<std::string, Entity*> EntitiesByLabel;
      EntitiesByLabel m_by_label;
    };
  }
}

#endif
