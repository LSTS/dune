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
  namespace Trilateration
  {
    //! Return _x squared
    double sqr(double _x)
    {
      return pow(_x,2);
    }

    //! Point in 2D space
    struct Point3d
    {
      double x;
      double y;
      double z;

      Point3d(): x(0), y(0), z(0)
      {}

      Point3d(double _x, double _y, double _z): x(_x), y(_y), z(_z)
      {}

      //! Set point data
      void 
      set(double _x, double _y, double _z)
      {
        x = _x;
        y = _y;
        z = _z;
      }

      //! Exchange Points data
      void 
      exchange(Point3d& pt)
      {
        Point3d aux = *this;
        *this = pt;
        pt = aux;
      }

      //! Set values as Not a Number
      void 
      setNaN()
      {
        // gcc makes this a compile time const NaN
        x = __builtin_nan("");
        y = __builtin_nan("");
        z = __builtin_nan("");
      }

      //! Set values as Infinity
      void 
      setInf()
      {
        x = __builtin_inf();
        y = __builtin_inf();
        z = __builtin_inf();
      }

      //! Check if any value is Not a Number
      bool 
      isNaN() const
      {
        return isnan(x) || isnan(y) || isnan(z);
      }

      //! Check if any value is Infinity
      bool 
      isInf() const
      {
        return isinf(x) || isinf(y) || isinf(z);
      }

      //! Return norm between two points
      double 
      norm(const Point3d& point) const
      {
        if (isNaN() || point.isNaN())
          throw std::runtime_error("Is NaN");
        
        return sqrt(pow(x-point.x, 2) + pow(y-point.y, 2) + pow(z-point.z, 2));
      }

      //! Return norm between two points
      double 
      norm(double _x, double _y, double _z) const
      {
        return sqrt(pow(x-_x, 2) + pow(y-_y, 2) + pow(z-_z, 2));
      }

      //! Return norm of Point
      double 
      norm() const
      {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
      }

      //! Return norm between two points
      static double 
      norm(const Point3d& p1, const Point3d& p2)
      {
        return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2) + pow(p1.z-p2.z, 2));
      }

      //! Normalize point
      //! @return Previous Norm
      double 
      normalize()
      {
        double dst = norm();
        x /= dst;
        y /= dst;
        z /= dst;
        return dst;
      }

      //! Return θ angle in range [0-2π]
      double 
      getTheta() const
      {
        double angle = atan2(y, x);
        return (angle < 0 ) ? angle+2*M_PI: angle;
      }

      //! Return φ angle in range [0-π]
      double 
      getPhi() const
      {
        return acos(z/norm());
      }

      //! Check if Vectores are parallel
      bool 
      isParallel(const Point3d& vec) const
      {
        return (getTheta() == vec.getTheta()) && (getPhi() == vec.getPhi());
      }

      //! Return perpendicular between two points
      static Point3d 
      getPerpendicular(const Point3d& p1, const Point3d& p2)
      {
        if (p1.isParallel(p2))
          throw std::runtime_error("getPerpendicular() param invalid Vectors are parallel");

        return p1|p2;
      }

      //! Point sum arithmatics
      Point3d 
      operator+(const Point3d& to_add) const
      {
        return Point3d(x+to_add.x, y+to_add.y, z+to_add.z);
      }

      //! Point subtraction arithmatics
      Point3d 
      operator-(const Point3d& to_add) const
      {
        return Point3d(x-to_add.x, y-to_add.y, z-to_add.z);
      }

      //! Point sum arithmatics
      Point3d& 
      operator+=(const Point3d& to_add)
      {
        x += to_add.x;
        y += to_add.y;
        z += to_add.z; 
        return *this;
      }

      //! Point subtraction arithmatics
      Point3d& 
      operator-=(const Point3d& to_add)
      {
        x -= to_add.x;
        y -= to_add.y;
        z -= to_add.z;
        return *this;
      }

      //! Point division arithmatics
      Point3d 
      operator/(double ratio) const
      {
        return Point3d(x/ratio, y/ratio, z/ratio);
      }

      //! Point division arithmatics
      Point3d& 
      operator/=(double ratio)
      {
        x /= ratio;
        y /= ratio;
        z /= ratio;
        return *this;
      }

      //! Point multiplication with scalar
      Point3d 
      operator*(double ratio) const
      {
        return Point3d(x*ratio, y*ratio, z*ratio);
      }

      //! Dot product
      double 
      operator*(const Point3d& pt) const
      {
        return x*pt.x + y*pt.y + z*pt.z;
      }

      //! Cross product
      Point3d 
      operator|(const Point3d& pt) const
      {
        return Point3d(y*pt.z-z*pt.y, z*pt.x-x*pt.z, x*pt.y-y*pt.x);
      }

      //! Cross product
      Point3d& 
      operator|=(const Point3d& pt)
      {
        x = y*pt.z-z*pt.y;
        y = x*pt.z-z*pt.x;
        z = x*pt.y-y*pt.x;
        return *this;
      }

      //! Point multiplication arithmatics
      friend Point3d 
      operator*(double value, const Point3d& pt)
      {
        return Point3d(pt.x*value, pt.y*value, pt.z*value);
      }

      //! Point multiplication with scalar
      Point3d& 
      operator*=(double ratio)
      {
        x *= ratio;
        y *= ratio;
        z *= ratio;
        return *this;
      }

      //! Compare operation
      template<typename T>
      bool
      operator==(T var) const
      {
        if (var != 0)
          return false;

        return (x || y || z);
      }

      //! Compare operation
      bool 
      operator==(const Point3d& pt)
      {
        return (x==pt.x)&&(y==pt.y)&&(z==pt.z);
      }

      //! Print format
      friend std::ostream& 
      operator<<(std::ostream& os, const Point3d& to_print)
      {
        os << std::fixed << std::setprecision(5);
        os << "( " << to_print.x << " , " << to_print.y << " , " << to_print.z << " )";
        return os;
      }

      //! Print format
      const char*
      print() const
      {
        std::stringstream str;
        str << "Point " << this;
        return str.str().c_str();
      }
    };

    //! Sphere
    struct Sphere
    {
      Point3d point;
      double distance;

      Sphere(): point(), distance(0)
      {}

      Sphere(double _x, double _y, double _z, double _dst): point(_x, _y, _z), distance(_dst)
      {}

      //! Set data
      void
      setPoint(double _x, double _y, double _z)
      {
        point.x = _x;
        point.y = _y;
        point.z = _z;
      }

      //! Print format
      const char* 
      print() const
      {
        std::stringstream str;
        str << "Sphere with center " << point << " and distance " << distance;
        return str.str().c_str();
      }

      //! Print format
      static const char*
      print(double _x, double _y, double _z, double _dst)
      {
        std::stringstream str;
        str << "Sphere with center ";
        str << "( " << _x << " , " << _y << " , " << _z << " ) and distance " << _dst;
        return str.str().c_str();
      }
    };
  }
}

#endif