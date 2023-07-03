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

#ifndef NAVIGATION_TRILATERATION_POINT_HPP_INCLUDED_
#define NAVIGATION_TRILATERATION_POINT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace trilateration
  {
    struct Point2d
    {
      double x;
      double y;

      Point2d(): x(0), y(0)
      {}

      Point2d(double _x, double _y): x(_x), y(_y)
      {}

      double norm(const Point2d& point)
      {
        return sqrt(pow(x-point.x, 2) + pow(y-point.y, 2));
      }

      double norm() const
      {
        return sqrt(pow(x, 2) + pow(y, 2));
      }

      static double norm(const Point2d& p1, const Point2d& p2)
      {
        return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2));
      }

      double normalize()
      {
        double dst = norm();
        x /= dst;
        y /= dst;
        return dst;
      }

      //! Return vector angle in range [0-2π]
      double angle() const
      {
        double angle = atan2(y, x);
        return (angle < 0 ) ? angle+2*M_PI: angle;
      }

      bool isParallel(const Point2d& vec) const
      {
        if ((x == 0 && vec.x == 0) || (y == 0 && vec.y == 0))
          return true;
        
        return (vec.x/x == vec.y/y);
      }

      Point2d getPerpendicular() const
      {
        return Point2d(-y, x);
      }

      Point2d operator+(const Point2d& to_add) const
      {
        return Point2d(x+to_add.x, y+to_add.y);
      }

      Point2d operator-(const Point2d& to_add) const
      {
        return Point2d(x-to_add.x, y-to_add.y);
      }

      Point2d& operator+=(const Point2d& to_add)
      {
        x += to_add.x;
        y += to_add.y;
        return *this;
      }

      Point2d& operator-=(const Point2d& to_add)
      {
        x -= to_add.x;
        y -= to_add.y;
        return *this;
      }

      Point2d operator/(double ratio) const
      {
        return Point2d(x/ratio, y/ratio);
      }

      Point2d& operator/=(double ratio)
      {
        x /= ratio;
        y /= ratio;
        return *this;
      }

      Point2d operator*(double ratio) const
      {
        return Point2d(x*ratio, y*ratio);
      }

      friend Point2d operator*(double value, const Point2d& pt)
      {
        return Point2d(pt.x*value, pt.y*value);
      }

      Point2d& operator*=(double ratio)
      {
        x *= ratio;
        y *= ratio;
        return *this;
      }

      friend std::ostream& operator<<(std::ostream& os, const Point2d& to_print)
      {
        os << std::fixed << std::setprecision(5);
        os << "( " << to_print.x << " , " << to_print.y << " )";
        return os;
      }
    };

    struct Point3d
    {
      double x;
      double y;
      double z;

      Point3d(): x(0), y(0), z(0)
      {}

      Point3d(double _x, double _y, double _z): x(_x), y(_y), z(_z)
      {}

      double norm(const Point3d& point)
      {
        return sqrt(pow(x-point.x, 2) + pow(y-point.y, 2) + pow(z-point.z, 2));
      }

      double norm() const
      {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
      }

      static double norm(const Point3d& p1, const Point3d& p2)
      {
        return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2) + pow(p1.z-p2.z, 2));
      }

      double normalize()
      {
        double dst = norm();
        x /= dst;
        y /= dst;
        z /= dst;
        return dst;
      }

      //! Return θ angle in range [0-2π]
      double getTheta() const
      {
        double angle = atan2(y, x);
        return (angle < 0 ) ? angle+2*M_PI: angle;
      }

      //! Return φ angle in range [0-π]
      double getPhi() const
      {
        return acos(z/norm());
      }

      bool isParallel(const Point3d& vec) const
      {
        return (getTheta() == vec.getTheta()) && (getPhi() == vec.getPhi());
      }

      //TODO:
      Point3d getPerpendicular() const
      {
        throw NotImplemented("Point3d::getPerpendicular()");
      }

      Point3d operator+(const Point3d& to_add) const
      {
        return Point3d(x+to_add.x, y+to_add.y, z+to_add.z);
      }

      Point3d operator-(const Point3d& to_add) const
      {
        return Point3d(x-to_add.x, y-to_add.y, z-to_add.z);
      }

      Point3d& operator+=(const Point3d& to_add)
      {
        x += to_add.x;
        y += to_add.y;
        z += to_add.z; 
        return *this;
      }

      Point3d& operator-=(const Point3d& to_add)
      {
        x -= to_add.x;
        y -= to_add.y;
        z -= to_add.z;
        return *this;
      }

      Point3d operator/(double ratio) const
      {
        return Point3d(x/ratio, y/ratio, z/ratio);
      }

      Point3d& operator/=(double ratio)
      {
        x /= ratio;
        y /= ratio;
        z /= ratio;
        return *this;
      }

      Point3d operator*(double ratio) const
      {
        return Point3d(x*ratio, y*ratio, z*ratio);
      }

      friend Point3d operator*(double value, const Point3d& pt)
      {
        return Point3d(pt.x*value, pt.y*value, pt.z*value);
      }

      Point3d& operator*=(double ratio)
      {
        x *= ratio;
        y *= ratio;
        z *= ratio;
        return *this;
      }

      friend std::ostream& operator<<(std::ostream& os, const Point3d& to_print)
      {
        os << std::fixed << std::setprecision(5);
        os << "( " << to_print.x << " , " << to_print.y << " , " << to_print.z << " )";
        return os;
      }
    };
  } 
}

#endif