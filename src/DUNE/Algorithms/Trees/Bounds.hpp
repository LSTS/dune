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

#ifndef SIMULATORS_ALGORITHMS_TREES_BOUNDS_HPP_INCLUDED_
#define SIMULATORS_ALGORITHMS_TREES_BOUNDS_HPP_INCLUDED_

// ISO C++ headers.
#include <iomanip>
#include <iostream>
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>

// Local headers.
#include "Point.hpp"

namespace DUNE
{
  namespace Algorithms
  {
    namespace Trees
    {
      struct Bounds
      {
        double min_x, max_x, min_y, max_y, min_z, max_z;

        Bounds(const Point& p, double r):
          min_x(p.x - r), max_x(p.x + r), min_y(p.y - r), max_y(p.y + r), min_z(p.z - r), max_z(p.z + r)
        { }

        Bounds(const Point& p):
          min_x(p.x), max_x(p.x), min_y(p.y), max_y(p.y), min_z(p.z), max_z(p.z)
        { }

        Bounds(const Bounds& parent, const Point& lim, int dir)
        {
          switch (dir)
          {
            case DIR_UNW:
              min_x = lim.x;
              max_x = parent.max_x;
              min_y = parent.min_y;
              max_y = lim.y;
              min_z = lim.z;
              max_z = parent.max_z;
              break;
            case DIR_UNE:
              min_x = lim.x;
              max_x = parent.max_x;
              min_y = lim.y;
              max_y = parent.max_y;
              min_z = lim.z;
              max_z = parent.max_z;
              break;
            case DIR_USW:
              min_x = parent.min_x;
              max_x = lim.x;
              min_y = parent.min_y;
              max_y = lim.y;
              min_z = lim.z;
              max_z = parent.max_z;
              break;
            case DIR_USE:
              min_x = parent.min_x;
              max_x = lim.x;
              min_y = lim.y;
              max_y = parent.max_y;
              min_z = lim.z;
              max_z = parent.max_z;
              break;
            case DIR_DNW:
              min_x = lim.x;
              max_x = parent.max_x;
              min_y = parent.min_y;
              max_y = lim.y;
              min_z = parent.min_z;
              max_z = lim.z;
              break;
            case DIR_DNE:
              min_x = lim.x;
              max_x = parent.max_x;
              min_y = lim.y;
              max_y = parent.max_y;
              min_z = parent.min_z;
              max_z = lim.z;
              break;
            case DIR_DSW:
              min_x = parent.min_x;
              max_x = lim.x;
              min_y = parent.min_y;
              max_y = lim.y;
              min_z = parent.min_z;
              max_z = lim.z;
              break;
            case DIR_DSE:
            default:
              min_x = parent.min_x;
              max_x = lim.x;
              min_y = lim.y;
              max_y = parent.max_y;
              min_z = parent.min_z;
              max_z = lim.z;
              break;
          }
        }

        Bounds
        octant(int dir) const
        {
          return Bounds(*this, midpoint(), dir);
        }

        template <typename T>
        std::pair<int, Bounds>
        octant(const T& p) const
        {
          Point lim = midpoint();
          int q = lim.direction(p);
          return std::pair<int, Bounds>(q, Bounds(*this, lim, q));
        }

        bool
        intersects(const Bounds& other) const
        {
          if (min_x > other.max_x || other.min_x > max_x)
            return false;
          if (min_y > other.max_y || other.min_y > max_y)
            return false;
          if (min_z > other.max_z || other.min_z > max_z)
            return false;
          return true;
        }

        //LV - Expand boundary limits based on added point
        template <typename T>
        void
        cover(const T& p)
        {
          if (p.x < min_x)
            min_x = p.x;
          else if (p.x > max_x)
            max_x = p.x;

          if (p.y < min_y)
            min_y = p.y;
          else if (p.y > max_y)
            max_y = p.y;

          if (p.z < min_z)
            min_z = p.z;
          else if (p.z > max_z)
            max_z = p.z;
        }

        template <typename T>
        bool
        contains(const T& p) const
        {
          return p.x >= min_x && p.x <= max_x &&
                  p.y >= min_y && p.y <= max_y &&
                  p.z >= min_z && p.z <= max_z;
        }

        Point
        midpoint() const
        {
          return Point(0.5 * (min_x + max_x), 0.5 * (min_y + max_y), 0.5 * (min_z + max_z));
        }

        double
        width() const
        {
          return max_x - min_x;
        }

        double
        lenght() const
        {
          return max_y - min_y;
        }

        double
        height() const
        {
          return max_z - min_z;
        }
      };

      std::ostream&
      operator<<(std::ostream& os, const Bounds& b);
    }
  }
}

#endif
