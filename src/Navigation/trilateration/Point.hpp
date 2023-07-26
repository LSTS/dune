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

#include <functional>

#include "Error.hpp"

#ifndef MAX
# define MAX(x,y) ((x)>(y)?(x):(y))
#endif

namespace Navigation
{
  namespace trilateration
  {
    double sqr(double _x)
    {
      return pow(_x,2);
    }

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

      void set(double _x, double _y, double _z)
      {
        x = _x;
        y = _y;
        z = _z;
      }

      void exchange(Point3d& pt)
      {
        Point3d aux = *this;
        *this = pt;
        pt = aux;
      }

      void setNaN()
      {
        // gcc makes this a compile time const NaN
        x = __builtin_nan("");
        y = __builtin_nan("");
        z = __builtin_nan("");
      }

      void setInf()
      {
        x = __builtin_inf();
        y = __builtin_inf();
        z = __builtin_inf();
      }

      bool isNaN() const
      {
        return isnan(x) || isnan(y) || isnan(z);
      }

      bool isInf() const
      {
        return isinf(x) || isinf(y) || isinf(z);
      }

      double norm(const Point3d& point)
      {
        if (isInf() || point.isInf())
          return __builtin_inf();
        
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

      double norm(double _x, double _y, double _z)
      {
        return sqrt(pow(x-_x, 2) + pow(y-_y, 2) + pow(z-_z, 2));
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
        throw DUNE::NotImplemented("Point3d::getPerpendicular()");
      }

      static Point3d getPerpendicular(const Point3d& p1, const Point3d& p2)
      {
        if (p1.isParallel(p2))
          throw std::runtime_error("getPerpendicular() param invalid Vectors are parallel");

        return p1|p2;
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

      //! Dot product
      double operator*(const Point3d& pt) const
      {
        return x*pt.x + y*pt.y + z*pt.z;
      }

      Point3d operator|(const Point3d& pt) const
      {
        return Point3d(y*pt.z-z*pt.y, z*pt.x-x*pt.z, x*pt.y-y*pt.x);
      }

      Point3d& operator|=(const Point3d& pt)
      {
        x = y*pt.z-z*pt.y;
        y = x*pt.z-z*pt.x;
        z = x*pt.y-y*pt.x;
        return *this;
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

      template<typename T>
      bool operator==(T var) const
      {
        if (var != 0)
          return false;
        
        return (x || y || z);
      }

      bool operator==(const Point3d& pt)
      {
        return (x==pt.x)&&(y==pt.y)&&(z==pt.z);
      }

      friend std::ostream& operator<<(std::ostream& os, const Point3d& to_print)
      {
        os << std::fixed << std::setprecision(5);
        os << "( " << to_print.x << " , " << to_print.y << " , " << to_print.z << " )";
        return os;
      }
    };

    //3x3 Matrix
    struct Matrix
    {
      Point3d x;
      Point3d y;
      Point3d z;

      Matrix()
      {}

      void setRow(int index, double _1, double _2, double _3)
      {
        switch (index)
        {
        case 1:
          x.set(_1, _2, _3);
          return;

        case 2:
          y.set(_1, _2, _3);
          return;

        case 3:
          z.set(_1, _2, _3);
          return;

        default:
          throw std::runtime_error("Invalid index");
        }
      }

      void set(const Point3d& vec_n, double theta)
      {
        double c_theta = cos(theta);
        double s_theta = sin(theta);

        x.x = c_theta + pow(vec_n.x,2)*(1-c_theta);
        x.y = vec_n.x*vec_n.y*(1-c_theta) - vec_n.z*s_theta;
        x.z = vec_n.x*vec_n.z*(1-c_theta) + vec_n.y*s_theta;

        y.x = vec_n.x*vec_n.y*(1-c_theta) + vec_n.z*s_theta;
        y.y = c_theta + pow(vec_n.y, 2)*(1-c_theta);
        y.z = vec_n.y*vec_n.z*(1-c_theta) - vec_n.x*s_theta;

        z.x = vec_n.x*vec_n.z*(1-c_theta) - vec_n.y*s_theta;
        z.y = vec_n.y*vec_n.z*(1-c_theta) + vec_n.x*s_theta;
        z.z = c_theta + pow(vec_n.z,2)*(1-c_theta);
      }

      Point3d operator*(const Point3d& vec) const
      {
        return Point3d(x*vec, y*vec, z*vec);
      }
    };

    typedef Point3d Point;

    //! Sphere
    struct Sphere
    {
      Point point;
      double distance;

      Sphere(): point(), distance(0)
      {}

      Sphere(double _x, double _y, double _z, double _dst): point(_x, _y, _z), distance(_dst)
      {}

      void
      setPoint(double _x, double _y, double _z)
      {
        point.x = _x;
        point.y = _y;
        point.z = _z;
      }
    };

    struct Circle2d
    {
      Point2d center;
      double radius;

      Circle2d(double x_pos, double y_pos, double _dst) 
        : center(x_pos, y_pos),
          radius(_dst)
      { }
    };
    
    struct Circle
    {
      Point center;
      double radius;
      Point vector_n; // vector normal to the circle plan
      Point vector_i; // vector perpendicular to normal
    };

    struct Plane
    {
      Point pt;
      Point vec; // normal to the plane

      Plane()
      {}

      Plane(const Point3d& p1, const Point3d& p2, const Point3d& p3)
      {
        vec = Point::getPerpendicular(p1-p2, p1-p3);
        pt = p1;
      }

      Plane(const Point& _pt, const Point& _vec)
        : pt(_pt),
          vec(_vec)
      {}
    };

    struct Line
    {
      Point pt;
      Point vec;
    };

    
    template<typename>
    struct member_function;

    template<typename Return, typename Obj, typename...Args>
    struct member_function<Return (Obj ::*)(Args...)>
    {};
    
    template<typename>
    class Bind;

    template<typename Return, typename Obj>
    class Bind<Return (Obj ::*)(const char*, ...)>
    {
    public:
      typedef Return (Obj ::*Callable)(const char*, ...);

      template<typename T>
      Bind(Obj& instance, void (T::*func)(const char*, ...)) :
        obj(instance),
        member(func)
      {

      }

      template<typename ...Args>
      Return call(Args... args)
      {
        return (obj.*member)(args...);
      }

      template<typename ...Args>
      void operator()(Args... args)
      {
        return (obj.*member)(args...);
      }

      Obj& obj;
      Callable member;
    };

    // template<typename Obj, typename Return, typename T>
    // Bind*<Return (T::*)(const char*, ...)> bind_member(Obj* obj, Return (T::*func)(const char*, ...))
    // {
    //   return new Bind<func>(obj, func);
    // }

    
    template<typename T>
    void 
    debug_Point(const char* string, const Point& pt, Bind<T>&& tmp)
    {
      std::stringstream str;
      str << string << "Point " << pt;
      tmp.call("%s", str.str().c_str());
    }

    template<typename T>
    void 
    debug_Point(const char* string, const Point2d& pt, Bind<T>&& tmp)
    {
      std::stringstream str;
      str << string << "Point2d " << pt;
      tmp.call("%s", str.str().c_str());
    }

    template<typename T>
    void 
    debug_Point(const char* string, const Circle& cl, Bind<T>&& tmp)
    {
      std::stringstream str;
      str << string ;
      str << "Circle with center " << cl.center << " and radius " << cl.radius;
      str << " and n^: " << cl.vector_n;
      tmp("%s", str.str().c_str());
    }

    template<typename T>
    void 
    debug_Point(const char* string, const Sphere& pt, Bind<T>&& tmp)
    {
      std::stringstream str;
      str << string << "Sphere with center " << pt.point << " and distance " << pt.distance;
      tmp("%s", str.str().c_str());
    }

    template<typename T>
    void 
    debug_Point(const char* string, const Plane& pt, Bind<T>&& tmp)
    {
      std::stringstream str;
      str << string << "Plane with point " << pt.pt << " and normal vector " << pt.vec;
      tmp("%s", str.str().c_str());
    }

    template<typename T>
    void 
    debug_Point(const char* string, const Line& ln, Bind<T>&& tmp)
    {
      std::stringstream str;
      str << string << "Line with point " << ln.pt << " and normal vector " << ln.vec;
      tmp("%s", str.str().c_str());
    }


    bool checkIntersection(const Sphere& data_1, const Sphere& data_2)
    {
      double dst = Point::norm(data_1.point, data_2.point);

      if (data_1.distance+data_2.distance < dst)
        return false;

      if (dst < abs(data_1.distance-data_2.distance))
        return false;

      return true;
    }

    void
    getIntersection(const Circle2d& circle1, const Circle2d& circle2, Point2d& out1, Point2d& out2)
    {
      Point2d vector = circle1.center - circle2.center;
      double dst = vector.normalize();

      if (circle1.radius+circle2.radius < dst)
        throw NoInterception("Points too far apart");

      if (dst < abs(circle1.radius-circle2.radius))
        throw NoInterception("Circle contains Circle");

      double delta_x = dst/2.0f + (sqr(circle1.radius) - sqr(circle2.radius))/(2*dst);
      double delta_y = sqrt(sqr(circle1.radius) - sqr(delta_x));
      
      Point2d vector_y = vector.getPerpendicular();
      
      out1 = circle1.center + delta_x*vector + vector_y*delta_y;
      out2 = circle1.center + delta_x*vector + vector_y*delta_y;
    }

    void
    getIntersection(const Sphere& data_1, const Sphere& data_2, Circle& out)
    {   
      Point vector = data_2.point - data_1.point;
      double dst = vector.normalize();

      if (data_1.distance+data_2.distance < dst)
        throw NoInterception("Points too far apart");

      if (data_1.distance+data_2.distance == dst)
        throw SinglePoint();

      if (dst < abs(data_1.distance-data_2.distance))
        throw NoInterception("Sphere contains Sphere");

      double delta_x = dst/2.0f + (pow(data_1.distance,2) - pow(data_2.distance,2))/(2*dst);
      out.center = data_1.point + delta_x*vector;
      out.radius = sqrt(pow(data_1.distance,2) - pow(delta_x,2));
      out.vector_n = vector;
    }

    void
    getIntersection(const Sphere& data_1, const Sphere& data_2, Plane& pln)
    {
      Point vector_n = data_2.point - data_1.point;
      double dst = vector_n.normalize();

      if (data_1.distance+data_2.distance < dst)
        throw NoInterception("Centers too far apart");

      if (dst < abs(data_1.distance-data_2.distance))
        throw NoInterception("Sphere contains Sphere");

      double delta_x = dst/2.0f + (pow(data_1.distance,2) - pow(data_2.distance,2))/(2*dst);
      pln.pt = data_1.point + delta_x*vector_n;
      pln.vec = vector_n;
    }

    void
    getIntersection(const Plane& plane_1, const Plane& plane_2, Line& out)
    {
      out.vec = Point::getPerpendicular(plane_1.vec, plane_2.vec);
      double det = out.vec.normalize();

      double d1 = -1*(plane_1.vec*plane_1.pt);
      double d2 = -1*(plane_2.vec*plane_2.pt);
      out.pt = ((out.vec|plane_2.vec)*d1 + (plane_1.vec|out.vec)*d2)/det ;
    }

    void
    getIntersection(const Line& line, const Plane& plane, Point& out)
    {
      if (plane.vec*line.vec == 0)
        throw NoInterception("Line is parallel to plane");

      float delta_x = (plane.vec*plane.pt - plane.vec*line.pt)/(plane.vec*line.vec);
      out = line.pt + line.vec*delta_x;
    }

  }
}

#endif