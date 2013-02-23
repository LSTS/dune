//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: QuadTree.hpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

#ifndef SIMULATORS_ECHOSOUNDER_QUADTREE_HPP_INCLUDED_
#define SIMULATORS_ECHOSOUNDER_QUADTREE_HPP_INCLUDED_

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
