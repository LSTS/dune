//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Point.hpp 12667 2013-01-22 02:44:42Z rasm                        $:*
//***************************************************************************

#ifndef SIMULATORS_ECHOSOUNDER_POINT_HPP_INCLUDED_
#define SIMULATORS_ECHOSOUNDER_POINT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace Simulators
{
  namespace Environment
  {
    //! Directions for search/insertion
    enum
    {
      DIR_NW, DIR_NE, DIR_SW, DIR_SE
    };

    //! Point structure.
    struct Point
    {
      double x, y;

      Point(double x_, double y_):
        x(x_), y(y_) { }

      double
      distance(const Point& other) const
      {
        double dx = x - other.x;
        double dy = y - other.y;
        return std::sqrt(dx * dx + dy * dy);
      }

      template <typename T>
      int
      direction(const T& other) const
      {
        double dx = other.x - x;
        double dy = other.y - y;

        int dir = dx >= 0 ? DIR_NW : DIR_SW;

        if (dy > 0)
          dir++;      // other is East of this

        return dir;
      }
    };
  }
}

#endif
