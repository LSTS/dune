//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef NAVIGATION_TRILATERATION_GAUSS_NEWTON_HPP_INCLUDED_
#define NAVIGATION_TRILATERATION_GAUSS_NEWTON_HPP_INCLUDED_

//#include <eigen3/Eigen/Dense>

#include "Point.hpp"

// TODO: insert class in namespace
using namespace Navigation::trilateration;

class Approx
{
public:
  Approx():
    gamma(0.5),
    factor_low(0.8),
    factor_high(1.1)
  { }

  ~Approx()
  { }

  void
  set_start(double _x, double _y, double _z)
  {
    solution.set(_x, _y, _z);
  }

  Point3d 
  run(unsigned iter)
  {
    gamma = 0.5;
    double curr_loss, old_loss;
    Point3d new_sol = solution;
    while (iter--)
    {
      old_loss = loss(solution);
      Point3d grad = gradient();

      new_sol = solution - gamma*grad;
      curr_loss = loss(new_sol);

      if (curr_loss >= old_loss)
      {
        int i = 0;
        while (curr_loss >= old_loss)
        {
          gamma *= factor_low;
          new_sol = solution - gamma*grad;
          curr_loss = loss(new_sol);
          if (i > 100)
            return new_sol;
          i++;
        }
      }
      else
      {
        int i = 0;
        while (1)
        {
          gamma *= factor_high;
          Point3d next_sol = solution - gamma*grad;
          double next_loss = loss(next_sol);

          if ( next_loss >= curr_loss)
            break;

          new_sol = next_sol;
          curr_loss = next_loss;
          if (i > 100)
            return new_sol;
          i++;
        }
      }
      solution = new_sol;
    }
    return solution;
  }

  void
  push_back(Sphere& n_data)
  {
    points.push_back(n_data);
  }

  void
  emplace_back(double _x, double _y, double _z, double _rd)
  {
    points.emplace_back(_x, _y, _z, _rd);
  }

private:

  Point3d
  gradient()
  {
    Point3d g_k;
    for (size_t i = 0; i < points.size(); i++)
    {
      double B_ki = solution.norm(points[i].point);
      g_k += 2*(B_ki-points[i].distance) * (points[i].point - solution)/B_ki;
    }
    return g_k;
  }

  double
  loss(Point3d& pt)
  {
    double sum = 0;
    for (size_t i = 0; i < points.size(); i++)
    {
      sum += sqr(pt.norm(points[i].point) - points[i].distance);
    }
    return sum;
  }

  std::vector<Sphere> points;
  Point3d solution;
  double gamma;
  double factor_low;
  double factor_high;
};



#endif