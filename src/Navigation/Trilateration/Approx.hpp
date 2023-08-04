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

#include "Point.hpp"

namespace Navigation
{
  namespace Trilateration
  {
    class Approx
    {
    public:
      Approx(unsigned max_size = 7):
        m_max_size(max_size),
        m_gamma(0.5),
        m_factor_low(0.8),
        m_factor_high(1.1)
      { }

      ~Approx()
      { }

      //! Set the starting point
      void
      setStart(double _x = 0, double _y = 0, double _z = 0)
      {
        m_solution.set(_x, _y, _z);
      }


      //! @brief Run the Gradient Descent algorithm
      //! @param Iter Number of iterations
      //! @return Solution
      Point3d 
      run(unsigned iter)
      {
        m_gamma = 0.1;
        double curr_loss, old_loss;
        Point3d new_sol = m_solution;
        while (iter--)
        {
          old_loss = loss(m_solution);
          Point3d grad = gradient();
          new_sol = m_solution - m_gamma*grad;
          curr_loss = loss(new_sol);

          if (curr_loss >= old_loss)
          {
            int i = 0;
            while (curr_loss >= old_loss)
            {
              m_gamma *= m_factor_low;
              new_sol = m_solution - m_gamma*grad;
              curr_loss = loss(new_sol);
              if (i > 100)
                return new_sol;
              i++;
            }
          }
          else
          {
            int i = 0;
            while (true)
            {
              m_gamma *= m_factor_high;
              Point3d next_sol = m_solution - m_gamma*grad;
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
          m_solution = new_sol;
        }
        return m_solution;
      }

      //! Insert ping data
      void
      push(Sphere& n_data)
      {
        if (size() < m_max_size)
          m_points.push_back(n_data);
        else
        {
          m_points.pop_back();
          m_points.insert(m_points.begin(), n_data);
        }        
      }

      //! Insert ping data
      void
      emplace(double _x, double _y, double _z, double _rd)
      {
        if (size() < m_max_size)
          m_points.emplace_back(_x, _y, _z, _rd);
        else
        {
          m_points.pop_back();
          m_points.emplace(m_points.begin(), _x, _y, _z, _rd);
        }
      }

      //! Current number of Spheres
      size_t 
      size()
      {
        return m_points.size();
      }

    private:

      //! Calculate Gradient
      Point3d
      gradient()
      {
        Point3d g_k;
        for (size_t i = 0; i < m_points.size(); i++)
        {
          double B_ki = m_solution.norm(m_points[i].point);
          g_k += 2*(B_ki-m_points[i].distance) * (m_solution - m_points[i].point)/B_ki;
        }
        return g_k;
      }

      //! Calculate Loss function (Square Error)
      //! @param pt Point to calculate loss around
      //! @return Value of loss
      double
      loss(Point3d& pt)
      {
        double sum = 0;
        for (size_t i = 0; i < m_points.size(); i++)
        {
          sum += sqr(pt.norm(m_points[i].point) - m_points[i].distance);
        }
        return sum;
      }

      //! Max points in vector
      unsigned m_max_size;
      //! Vector containing all ping the data
      std::vector<Sphere> m_points;
      //! Current solution
      Point3d m_solution;
      //! Learning rate
      double m_gamma;
      //! Learning rate decreasing factor
      double m_factor_low;
      //! Learning rate increasing factor
      double m_factor_high;
    };

  }
}


#endif