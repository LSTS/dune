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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef SIMULATORS_ENVIRONMENT_QUAD_TREE_HPP_INCLUDED_
#define SIMULATORS_ENVIRONMENT_QUAD_TREE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iomanip>
#include <iostream>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>

// Local headers.
#include "Point.hpp"
#include "Bounds.hpp"

namespace Simulators
{
  namespace Environment
  {
    //! Forward declaration.
    struct Node;

    //! "Quad-tree" structure used to index spatial data in two dimensions.
    class QuadTree
    {
    public:
      //! Item datum.
      struct Item
      {
        double x, y, value;
      };

      //! Iteration handle.
      class Iteration
      {
      public:
        virtual void
        process(const Item& item) = 0;

        virtual
        ~Iteration(){ }
      };

      //! Constructor.
      QuadTree(const Bounds& bounds);

      ~QuadTree();

      //! Insert an item.
      //! Returns 'false' if item is out-of-bounds.
      bool
      insert(const Item& item);

      //! Iterate tree.
      void
      iterate(Iteration& iteration) const;

      //! Iterate tree over a given area.
      void
      iterate(Iteration& iteration, const Bounds& area) const;

      //! Clear entire tree.
      void
      clear(void);

      //! Remove items in a given area.
      void
      remove(const Bounds& area);

      //! Search for items in a given area.
      //! If any are found returns 'true' and adds results to 'item' vector.
      bool
      search(const Bounds& area, std::vector<Item>& items) const;

      //! Get number of elements in a given area.
      uint32_t
      size(const Bounds& area) const;

    private:
      Bounds m_bounds;     //!< Bounds.
      Node* m_root;     //!< Node handle providing actual implementation.
    };

    std::ostream&
    operator<<(std::ostream& os, const QuadTree& tree);
  }
}

#endif
