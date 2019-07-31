//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <iomanip>
#include <cstring>

// DUNE headers.
#include <DUNE/Config.hpp>

// Local headers.
#include "OcTree.hpp"

namespace DUNE
{
  namespace Algorithms
  {
    namespace Trees
    {
      // The actual implementation
      struct Node
      {
        union
        {
          OcTree::Item item;
          Node* children[8];
        } m_data;

        bool m_leaf;

        Node(const OcTree::Item& item)
        {
          m_data.item = item;
          m_leaf = true;
        }

        ~Node(void)
        {
          if (!m_leaf)
          {
            for (int i = 0; i < 8; ++i)
            {
              if (m_data.children[i])
                delete m_data.children[i];
            }
          }
        }

        void
        insert(const OcTree::Item& item, Bounds& b)
        {
          if (m_leaf)
          {
            m_leaf = false;
            OcTree::Item prev_item = m_data.item;
            std::memset(m_data.children, 0, sizeof(m_data.children));
            insert(prev_item, b);   // Split
          }
          std::pair<int, Bounds> bq = b.octant(item);
          Node** c = m_data.children + bq.first;
          if (*c)
            (*c)->insert(item, bq.second);   // Branch
          else
            *c = new Node(item);    // New leaf
        }

        bool
        isLeaf(void) const
        {
          return m_leaf;
        }

        bool
        remove(const Bounds& area, const Bounds& b)
        {
          if (m_leaf)
            return area.contains(m_data.item);

          int cdel = 0;

          for (int i = 0; i < 8; ++i)
          {
            Node** c = m_data.children + i;

            if (!*c)
              continue;

            Bounds cb = b.octant(i);

            if (area.intersects(cb) && (*c)->remove(area, cb))
            {
              delete *c;
              * c = 0;
              ++cdel;
            }
          }
          return cdel == 8;   // true if all sub-nodes were removed
        }

        void
        iterate(OcTree::Iteration& iter, const Bounds& area, const Bounds& b) const
        {
          if (m_leaf && b.contains(m_data.item))
          {
            iter.process(m_data.item);
          }
          else
            for (int i = 0; i < 8; ++i)
            {
              if (m_data.children[i])
              {
                Bounds cb = b.octant(i);
                if (area.intersects(cb))
                  m_data.children[i]->iterate(iter, area, cb);
              }
            }
        }
      };

      OcTree::OcTree(const Bounds& bounds):
        m_bounds(bounds), m_root(0)
      { }

      OcTree::~OcTree()
      {
        clear();
      }

      void
      OcTree::iterate(Iteration& iter) const
      {
        iterate(iter, m_bounds);
      }

      void
      OcTree::iterate(Iteration& iter, const Bounds& area) const
      {
        if (!m_root)
          return;

        m_root->iterate(iter, area, m_bounds);
      }

      void
      OcTree::clear()
      {
        if (m_root)
        {
          delete m_root;
          m_root = 0;
        }
      }

      void
      OcTree::remove(const Bounds& area)
      {
        if (m_root && m_root->remove(area, m_bounds))
          clear();   // entire contents were deleted
      }

      bool
      OcTree::insert(const OcTree::Item& item)
      {
        //LV - if item is not in bounds -> discard
        if (!m_bounds.contains(item))
          return false;

        //LV - if root is not initialized -> initialize
        //else -> insert item
        if (!m_root)
          m_root = new Node(item);
        else
          m_root->insert(item, m_bounds);

        return true;
      }

      bool
      OcTree::search(const Bounds& search_area, std::vector<OcTree::Item>& v) const
      {
        class Search: public OcTree::Iteration
        {
        public:
          Search(std::vector<OcTree::Item>& vector): m_vector(vector) { }

          ~Search(){ }

          void
          process(const OcTree::Item& item)
          {
            m_vector.push_back(item);
          }

        private:
          std::vector<OcTree::Item>& m_vector;
        };

        v.clear();
        Search iter(v);

        if (m_root)
          m_root->iterate(iter, search_area, m_bounds);

        return v.size() != 0;
      }

      uint32_t
      OcTree::size(const Bounds& area) const
      {
        class count: public OcTree::Iteration
        {
        public:
          count(): m_elems(0) { }

          ~count(){ }

          void
          process(const OcTree::Item& item)
          {
            (void)item;
            ++m_elems;
          }

          uint32_t
          result(void)
          {
            return m_elems;
          }

        private:
          uint32_t m_elems;
        };

        count iter;
        iterate(iter, area);
        return iter.result();
      }

      class Dump: public OcTree::Iteration
      {
      public:
        Dump(std::ostream& stream):
          m_stream(stream)
        { }

        ~Dump(void)
        { }

        void
        process(const OcTree::Item& item)
        {
          m_stream << item.x << ' ' << item.y << ' ' << item.z;
          m_stream << ' ' << item.value;
          m_stream << std::endl;
        }

      private:
        std::ostream& m_stream;
      };

      std::ostream&
      operator<<(std::ostream& os, const OcTree& tree)
      {
        Dump iter(os);
        tree.iterate(iter);
        return os;
      }

      std::ostream&
      operator<<(std::ostream& os, const Bounds& b)
      {
        return
        os << std::fixed << std::setprecision(2) <<
        b.min_x << ' ' << b.max_x << " | " <<
        b.min_y << ' ' << b.max_y << " | " <<
        b.min_z << ' ' << b.max_z << " | " <<
        b.width() << " x " << b.lenght() << " x " << b.height();
      }
    }
  }
}
