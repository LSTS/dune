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

#ifndef SIMULATORS_ENVIRONMENT_POINT_HPP_INCLUDED_
#define SIMULATORS_ENVIRONMENT_POINT_HPP_INCLUDED_

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
