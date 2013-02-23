//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Bounds.hpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

#ifndef SIMULATORS_ECHOSOUNDER_BOUNDS_HPP_INCLUDED_
#define SIMULATORS_ECHOSOUNDER_BOUNDS_HPP_INCLUDED_

// ISO C++ headers.
#include <iomanip>
#include <iostream>
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>

// Local headers.
#include "Point.hpp"

namespace Simulators
{
  namespace Environment
  {
    struct Bounds
    {
      double min_x, max_x, min_y, max_y;

      Bounds(const Point& p, double r):
        min_x(p.x - r), max_x(p.x + r), min_y(p.y - r), max_y(p.y + r)
      { }

      Bounds(const Point& p):
        min_x(p.x), max_x(p.x), min_y(p.y), max_y(p.y)
      { }

      Bounds(const Bounds& parent, const Point& lim, int dir)
      {
        switch (dir)
        {
          case DIR_NW:
            min_x = lim.x;
            max_x = parent.max_x;
            min_y = parent.min_y;
            max_y = lim.y;
            break;
          case DIR_NE:
            min_x = lim.x;
            max_x = parent.max_x;
            min_y = lim.y;
            max_y = parent.max_y;
            break;
          case DIR_SW:
            min_x = parent.min_x;
            max_x = lim.x;
            min_y = parent.min_y;
            max_y = lim.y;
            break;
          case DIR_SE:
          default:
            min_x = parent.min_x;
            max_x = lim.x;
            min_y = lim.y;
            max_y = parent.max_y;
            break;
        }
      }

      Bounds
      quadrant(int dir) const
      {
        return Bounds(*this, midpoint(), dir);
      }

      template <typename T>
      std::pair<int, Bounds>
      quadrant(const T& p) const
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
        return true;
      }

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
      }

      template <typename T>
      bool
      contains(const T& p) const
      {
        return p.x >= min_x && p.x <= max_x && p.y >= min_y && p.y <= max_y;
      }

      Point
      midpoint() const
      {
        return Point(0.5 * (min_x + max_x), 0.5 * (min_y + max_y));
      }

      double
      width() const
      {
        return max_x - min_x;
      }

      double
      height() const
      {
        return max_y - min_y;
      }
    };

    std::ostream&
    operator<<(std::ostream& os, const Bounds& b);
  }
}

#endif
