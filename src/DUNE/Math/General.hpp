//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
    
    //! @param val value 
    //! @return the factorial of val, i.e. val! = val*(val-1)*(val-2)*(val-3)*....
    //! implementation based on matlab
    inline double
    factorial(int val)
    {
      double ret;
      static const double dv0[170] = { 1.0, 2.0, 6.0, 24.0, 120.0, 720.0, 5040.0,
        40320.0, 362880.0, 3.6288E+6, 3.99168E+7, 4.790016E+8, 6.2270208E+9,
        8.71782912E+10, 1.307674368E+12, 2.0922789888E+13, 3.55687428096E+14,
        6.402373705728E+15, 1.21645100408832E+17, 2.43290200817664E+18,
        5.109094217170944E+19, 1.1240007277776077E+21, 2.5852016738884978E+22,
        6.2044840173323941E+23, 1.5511210043330986E+25, 4.0329146112660565E+26,
        1.0888869450418352E+28, 3.0488834461171384E+29, 8.8417619937397008E+30,
        2.6525285981219103E+32, 8.2228386541779224E+33, 2.6313083693369352E+35,
        8.6833176188118859E+36, 2.9523279903960412E+38, 1.0333147966386144E+40,
        3.7199332678990118E+41, 1.3763753091226343E+43, 5.23022617466601E+44,
        2.0397882081197442E+46, 8.1591528324789768E+47, 3.3452526613163803E+49,
        1.4050061177528798E+51, 6.0415263063373834E+52, 2.6582715747884485E+54,
        1.1962222086548019E+56, 5.5026221598120885E+57, 2.5862324151116818E+59,
        1.2413915592536073E+61, 6.0828186403426752E+62, 3.0414093201713376E+64,
        1.5511187532873822E+66, 8.0658175170943877E+67, 4.2748832840600255E+69,
        2.3084369733924138E+71, 1.2696403353658276E+73, 7.1099858780486348E+74,
        4.0526919504877221E+76, 2.3505613312828789E+78, 1.3868311854568986E+80,
        8.3209871127413916E+81, 5.0758021387722484E+83, 3.1469973260387939E+85,
        1.98260831540444E+87, 1.2688693218588417E+89, 8.2476505920824715E+90,
        5.4434493907744307E+92, 3.6471110918188683E+94, 2.4800355424368305E+96,
        1.711224524281413E+98, 1.197857166996989E+100, 8.5047858856786218E+101,
        6.1234458376886077E+103, 4.4701154615126834E+105, 3.3078854415193856E+107,
        2.4809140811395391E+109, 1.8854947016660498E+111, 1.4518309202828584E+113,
        1.1324281178206295E+115, 8.9461821307829729E+116, 7.1569457046263779E+118,
        5.7971260207473655E+120, 4.75364333701284E+122, 3.9455239697206569E+124,
        3.314240134565352E+126, 2.8171041143805494E+128, 2.4227095383672724E+130,
        2.1077572983795269E+132, 1.8548264225739836E+134, 1.6507955160908452E+136,
        1.4857159644817607E+138, 1.3520015276784023E+140, 1.24384140546413E+142,
        1.1567725070816409E+144, 1.0873661566567424E+146, 1.0329978488239052E+148,
        9.916779348709491E+149, 9.6192759682482062E+151, 9.426890448883242E+153,
        9.33262154439441E+155, 9.33262154439441E+157, 9.4259477598383536E+159,
        9.6144667150351211E+161, 9.9029007164861754E+163, 1.0299016745145622E+166,
        1.0813967582402903E+168, 1.1462805637347078E+170, 1.2265202031961373E+172,
        1.3246418194518284E+174, 1.4438595832024928E+176, 1.5882455415227421E+178,
        1.7629525510902437E+180, 1.9745068572210728E+182, 2.2311927486598123E+184,
        2.5435597334721862E+186, 2.9250936934930141E+188, 3.3931086844518965E+190,
        3.969937160808719E+192, 4.6845258497542883E+194, 5.5745857612076033E+196,
        6.6895029134491239E+198, 8.09429852527344E+200, 9.8750442008335976E+202,
        1.2146304367025325E+205, 1.5061417415111404E+207, 1.8826771768889254E+209,
        2.3721732428800459E+211, 3.0126600184576582E+213, 3.8562048236258025E+215,
        4.9745042224772855E+217, 6.4668554892204716E+219, 8.4715806908788174E+221,
        1.1182486511960039E+224, 1.4872707060906852E+226, 1.9929427461615181E+228,
        2.6904727073180495E+230, 3.6590428819525472E+232, 5.01288874827499E+234,
        6.9177864726194859E+236, 9.6157231969410859E+238, 1.346201247571752E+241,
        1.89814375907617E+243, 2.6953641378881614E+245, 3.8543707171800706E+247,
        5.5502938327393013E+249, 8.0479260574719866E+251, 1.17499720439091E+254,
        1.7272458904546376E+256, 2.5563239178728637E+258, 3.8089226376305671E+260,
        5.7133839564458505E+262, 8.6272097742332346E+264, 1.3113358856834518E+267,
        2.0063439050956811E+269, 3.0897696138473489E+271, 4.7891429014633912E+273,
        7.47106292628289E+275, 1.1729568794264138E+278, 1.8532718694937338E+280,
        2.9467022724950369E+282, 4.714723635992059E+284, 7.5907050539472148E+286,
        1.2296942187394488E+289, 2.0044015765453015E+291, 3.2872185855342945E+293,
        5.423910666131586E+295, 9.0036917057784329E+297, 1.5036165148649983E+300,
        2.5260757449731969E+302, 4.2690680090047027E+304, 7.257415615307994E+306 };

      if ( (val > 170) || (val < 0))
      {
        ret = 0.0;
        throw std::out_of_range(DTR("Value out of range for finding factorial"));
      } else if (val < 1.0) {
        ret = 1.0;
      } else {
        ret = dv0[(int)val - 1];
      }

      return ret;
    }
  }
}

#endif
