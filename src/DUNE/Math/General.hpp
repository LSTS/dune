//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_MATH_GENERAL_HPP_INCLUDED_
#define DUNE_MATH_GENERAL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iostream>
#include <cstdio>
#include <stdexcept>
#include <cmath>
#include <vector>
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/Config.hpp>

// C99/POSIX headers.
#if defined(DUNE_SYS_HAS_MATH_H)
#  include <math.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_FLOAT_H)
#  include <float.h>
#endif

namespace DUNE
{
  namespace Math
  {
    //! Compute the next power of two of a value.
    //! @param val value.
    //! @return next power of two.
    inline uint32_t
    computeNextPowerOfTwo(uint32_t val)
    {
      uint32_t r = 1;

      while (r < val)
        r <<= 1;

      return r;
    }

    //! Computes the average value of a fixed size array.
    //! @param a array with values.
    //! @param size size of the array.
    //! @return average value of the array.
    template <typename Type>
    Type
    average(Type* a, uint32_t size)
    {
      Type t = 0;

      for (uint32_t i = 0; i < size; ++i)
        t += a[i];

      return (t / (Type)size);
    }

    //! Computes the norm between two points.
    //! @param a first point.
    //! @param b second point.
    //! @return norm between two points.
    template <typename Type>
    Type
    norm(const Type& a, const Type& b)
    {
      return std::sqrt(std::pow(a, 2) + std::pow(b, 2));
    }

    //! Insertion Sort algorithm.
    //! insertionSort algorithm implementation for zero based vectors
    //! better for lists with 8 to 20 elements
    //! This method sorts a vector in the ascending order using insertion sort algorithm
    template <typename Type>
    void
    insertionSort(Type* a, uint16_t size)
    {
      Type value;
      uint16_t j;
      uint16_t k;

      for (uint16_t i = 1; i < size; i++)
      {
        value = a[i];
        j = i - 1;
        k = j + 1;

        while (a[j] > value)
        {
          a[j + 1] = a[j];
          if (!j)
          {
            k = j;
            break;
          }
          else
          {
            --j;
            k = j + 1;
          }
        }
        a[k] = value;
      }
    }

    //! Computes the median value of a fixed size ORDERED array.
    //! @param a array with values.
    //! @param size size of the array.
    //! @return median value of the array.
    template <typename Type>
    Type
    medianOrdered(Type* a, uint16_t size)
    {
      if (size == 1)
        return a[0];

      if (size % 2)
        return a[(uint16_t)round(size / 2)];
      else
        return (a[(size / 2)] + a[(size / 2) - 1]) / (Type)2.0;
    }

    //! Computes the median value of a fixed size UNORDERED array.
    //! @param a array with values.
    //! @param size size of the array.
    //! @return median value of the array.
    template <typename Type>
    Type
    median(Type* a, uint16_t size)
    {
      Type* b = (Type*)std::malloc(sizeof(Type) * size);
      std::memcpy(b, a, sizeof(Type) * size);

      insertionSort(b, size);

      Type value = medianOrdered(b, size);

      std::free(b);

      return value;
    }

    //! Interpolates linearly between (t0,x0) and (t1,x1) for value t
    //! will also work if the point is outside of this interval
    //! @param p reference to object of struct type LinIntParam (below)
    //! @return corresponding interpolated point for x
    template <typename Type>
    struct LinIntParam
    {
      Type x0; // x0 lower value of the gap to interpolate
      Type x1; // x1 upper value of the gap to interpolate
      Type t0; // t0 lower value of the gap we're interpolating from
      Type t1; // t1 upper value of the gap we're interpolating from
      Type t; // t value lying between t0 and t1
      LinIntParam(Type val_x0, Type val_x1, Type val_t0, Type val_t1, Type val_t):
        x0(val_x0),
        x1(val_x1),
        t0(val_t0),
        t1(val_t1),
        t(val_t)
      { }
    };

    template <typename Type>
    Type
    linearInterpolation(const LinIntParam<Type>& p)
    {
      if (p.t1 - p.t0 == 0.0)
        return p.x0;

      return p.x0 + (p.t - p.t0) * (p.x1 - p.x0) / (p.t1 - p.t0);
    }

    //! Interpolates a point for a piecewise linear function
    //! If outside of the function's domain, returns the interpolation
    //! using closest points
    //! @param x_vec piecewise linear function value for the values of t_vec
    //! @param t_vec read line above. ASSUMED TO BE IN ASCENDING ORDER!
    //! @param t value for which the function is to be interpolated
    //! @return resuling value of the interpolation
    template <typename Type>
    Type
    piecewiseLI(const std::vector<Type>& x_vec, const std::vector<Type>& t_vec, Type t)
    {
      if (x_vec.size() != t_vec.size())
        throw std::runtime_error(DTR("piecewise linear interpolation needs equally sized vectors"));

      if (x_vec.size() == 1)
        return x_vec[0];

      if (t <= t_vec[0])
        return linearInterpolation(LinIntParam<Type>(x_vec[0],
                                                     x_vec[1],
                                                     t_vec[0],
                                                     t_vec[1],
                                                     t));

      for (unsigned i = 1; i < x_vec.size(); ++i)
      {
        if (t <= t_vec[i] && t > t_vec[i - 1])
          return linearInterpolation(LinIntParam<Type>(x_vec[i - 1],
                                                       x_vec[i],
                                                       t_vec[i - 1],
                                                       t_vec[i],
                                                       t));
      }

      // if it is beyond the domain of the function
      return linearInterpolation(LinIntParam<Type>(x_vec[x_vec.size() - 2],
                                                   x_vec[x_vec.size() - 1],
                                                   t_vec[x_vec.size() - 2],
                                                   t_vec[x_vec.size() - 1],
                                                   t));
    }

    //! Computes the intersection point between two line segments
    //! @param p reference to struct object of type LinSegParam (below)
    //! @param coord_x x coordinate of the intersection point
    //! @param coord_y y coordinate of the intersection point
    //! @return true if the lines intersect, false otherwise
    template <typename Type>
    struct LineSegParam
    {
      Type line_a_x1; // line_a_x1 x coordinate of line "a" first point
      Type line_a_y1; // line_a_y1 y coordinate of line "a" first point
      Type line_a_x2; // line_a_x2 x coordinate of line "a" second point
      Type line_a_y2; // line_a_y2 y coordinate of line "a" second point
      Type line_b_x1; // line_b_x1 x coordinate of line "b" first point
      Type line_b_y1; // line_b_y1 y coordinate of line "b" first point
      Type line_b_x2; // line_b_x2 x coordinate of line "b" second point
      Type line_b_y2; // line_b_y2 y coordinate of line "b" second point
      LineSegParam(Type point_a_x1, Type point_a_y1, Type point_a_x2, Type point_a_y2, Type point_b_x1, Type point_b_y1, Type point_b_x2, Type point_b_y2):
        line_a_x1(point_a_x1),
        line_a_y1(point_a_y1),
        line_a_x2(point_a_x2),
        line_a_y2(point_a_y2),
        line_b_x1(point_b_x1),
        line_b_y1(point_b_y1),
        line_b_x2(point_b_x2),
        line_b_y2(point_b_y2)
      { }
    };

    template <typename Type>
    bool
    lineSegmentIntersect(const LineSegParam<Type>& p, Type* coord_x, Type* coord_y)
    {
      double den = (p.line_b_y2 - p.line_b_y1) * (p.line_a_x2 - p.line_a_x1) - (p.line_b_x2 - p.line_b_x1) * (p.line_a_y2 - p.line_a_y1);

      if (den == 0.0)
        return false;

      double ua = ((p.line_b_x2 - p.line_b_x1) * (p.line_a_y1 - p.line_b_y1) - (p.line_b_y2 - p.line_b_y1) * (p.line_a_x1 - p.line_b_x1)) / den;
      double ub = ((p.line_a_x2 - p.line_a_x1) * (p.line_a_y1 - p.line_b_y1) - (p.line_a_y2 - p.line_a_y1) * (p.line_a_x1 - p.line_b_x1)) / den;

      if (ua >= 0 && ua <= 1 && ub >= 0 && ub <= 1)
      {
        *coord_x = p.line_a_x1 + ua * (p.line_a_x2 - p.line_a_x1);
        *coord_y = p.line_a_y1 + ua * (p.line_a_y2 - p.line_a_y1);
        return true;
      }
      else
      {
        return false;
      }
    }

    template <typename Ta, typename Tb, typename Tc>
    inline Ta
    trimValue(Ta v, Tb min, Tc max)
    {
      if (v > max)
        v = max;
      else if (v < min)
        v = min;

      return v;
    }

    template <typename Ta, typename Tb, typename Tc>
    inline bool
    trimValueMod(Ta& value, Tb min, Tc max)
    {
      if (value > max)
        value = max;
      else if (value < min)
        value = min;
      else
        return false;

      return true;
    }

    //! Computes the character representing the signal of a number.
    //! @param v number.
    //! @return ASCII character representing the number signal.
    //! Space ' ' is returned in the case of the number beeing 0.0.
    inline char
    getSignalChar(fp64_t v)
    {
      if (v == 0.0)
        return ' ';
      return (v > 0.0) ? '+' : '-';
    }

    //! Computes the signal of a number.
    //! @param v number.
    //! @return 1 or -1.
    //! If the number is 0.0 1 is returned.
    inline int
    getSignal(float v)
    {
      return (v < 0) ? -1 : 1;
    }

    inline double
    round(double value)
    {
#if defined(DUNE_SYS_HAS_ROUND)
      return ::round(value);
#else
      long int tru = static_cast<long int>(value);
      return ((value - tru) >= 0.5) ? tru + 1.0 : tru;
#endif
    }

    inline long int
    roundToInteger(double value)
    {
#if defined(DUNE_SYS_HAS_LROUND)
      return ::lround(value);
#else
      return static_cast<long int>(round(value));
#endif
    }

    //! Convert a number in Binary Coded Decimal (BCD) format to
    //! decimal.
    //! @param value BCD encoded value.
    //! @return decimal representation of value.
    inline uint8_t
    fromBCD(uint8_t value)
    {
      return uint8_t(((value >> 4) * 10) + (value & 0x0f));
    }

    //! Convert a number in decimal format to Binary Coded Decimal
    //! (BCD) format.
    //! @param value decimal value.
    //! @return BCD encoded value.
    inline uint8_t
    toBCD(uint8_t value)
    {
      return uint8_t(((value / 10) << 4) | ((value % 10) & 0x0f));
    }

    template <typename T>
    T
    gcd(T a, T b)
    {
      while (b != 0)
      {
        T aux = b;
        b = a % b;
        a = aux;
      }
      return a;
    }

    //! Test if a floating point variable holds a value that is not a
    //! number.
    //! @return true if variable is not a number, false otherwise.
    template <typename T> bool
    isNaN(const T& var)
    {
#if defined(DUNE_SYS_HAS_ISNAN_CXX)
      return std::isnan(var) != 0;

#elif defined(DUNE_SYS_HAS_ISNAN_POSIX)
      return isnan(var) != 0;

#elif defined(DUNE_SYS_HAS__ISNAN)
      return _isnan(var) != 0;

#endif
    }
  }
}

#endif
