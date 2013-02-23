//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_MATH_ANGLES_HPP_INCLUDED_
#define DUNE_MATH_ANGLES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Math/Constants.hpp>

namespace DUNE
{
  namespace Math
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Angles;

    //! Angle manipulation and conversion methods.
    class Angles
    {
    public:
      //! Normalize radian so that the value falls between -pi and +pi.
      //! @param a angle in radian.
      //! @return normalized angle.
      inline static fp64_t
      normalizeRadian(fp64_t a)
      {
        while (a <= -c_pi)
          a += c_two_pi;
        while (a > c_pi)
          a -= c_two_pi;

        return a;
      }

      //! Convert a value given in degree to radian.
      //! @param d value in degree.
      //! @return value converted to radian.
      inline static fp64_t
      radians(fp64_t d)
      {
        return d * c_pi / 180.0;
      }

      //! Convert a value given in radian to degree.
      //! @param r value in radian.
      //! @return value converted to degree.
      inline static fp64_t
      degrees(fp64_t r)
      {
        return r * c_degrees_per_radian;
      }

      //! Convert Degrees, Minutes, Seconds to Decimal Format.
      //! @param degrees degrees.
      //! @param minutes minutes.
      //! @param seconds seconds.
      //! @return degrees in decimal format.
      inline static fp64_t
      convertDMSToDecimal(int degrees, int minutes, int seconds)
      {
        return degrees + (minutes / 60.0) + (seconds / 3600.0);
      }

      //! Convert Degrees, Minutes to Decimal Format.
      //! @param degrees degrees.
      //! @param minutes minutes.
      //! @return degrees in decimal format.
      inline static fp64_t
      convertDMSToDecimal(int degrees, double minutes)
      {
        return degrees + (minutes / 60.0);
      }

      //! Convert decimal degrees to Degrees, Minutes, Seconds.
      //! @param value degrees in decimal format.
      //! @param degrees computed degrees.
      //! @param minutes computed minutes.
      //! @param seconds computed seconds.
      inline static void
      convertDecimalToDMS(double value, int& degrees, int& minutes, double& seconds)
      {
        degrees = (int)value;
        double minutes_fp = (value - degrees) * 60.0;
        minutes = (int)(minutes_fp);
        seconds = (minutes_fp - minutes) * 60.0;
      }

      //! Convert decimal degrees to Degrees, Minutes.
      //! @param value degrees in decimal format.
      //! @param degrees computed degrees.
      //! @param minutes computed minutes.
      inline static void
      convertDecimalToDM(double value, int& degrees, double& minutes)
      {
        degrees = (int)value;
        minutes = (value - degrees) * 60.0;
      }

      //! XY Coordinate conversion considering a rotation angle.
      //! (Eduardo Marques)
      //! @param angle angle
      //! @param clockwise clockwise rotation or not
      //! @param x original x value on entry, rotated x value on exit.
      //! @param y original y value on entry, rotated y value on exit.
      inline static void
      rotate(double angle, bool clockwise, double& x, double& y)
      {
        double x0 = x, y0 = y, sina = std::sin(angle), cosa = std::cos(angle);

        if (clockwise)
        {
          x = x0 * cosa + y0 * sina;
          y = -x0 * sina + y0 * cosa;
        }
        else
        {
          x = x0 * cosa - y0 * sina;
          y = x0 * sina + y0 * cosa;
        }
      }


      //! Computes the smallest signed angle between two angles in radians.
      //! @param a angle in radian.
      //! @param b angle in radian.
      //! @return smallest angle in radian.
      inline static fp64_t
      minimumSignedAngle(fp64_t a, fp64_t b)
      {
        // Absolute angle defined between 0 and 2*pi.
        double angle = std::fmod(std::fabs(a - b), c_two_pi);

        double ca = std::cos(a);
        double sa = std::sin(a);
        double cb = std::cos(b);
        double sb = std::sin(b);

        // Normalize angle to fall between 0 and pi.
        if (angle > c_pi)
          angle = c_two_pi - angle;

        double d = std::atan2(ca, sa) - std::atan2(cb, sb);

        // Correct sign while avoiding division by zero.
        if (std::fabs(d) > 1e-3)
        {
          // Check quadrants.
          if (((ca < 0) && (sa < 0) && (cb > 0) && (sb < 0)) ||
              ((cb < 0) && (sb < 0) && (ca > 0) && (sa < 0)))
            d = -d;
          return (d / std::fabs(d)) * angle;
        }
        else
          return 0;
      }
    };
  }
}

#endif
