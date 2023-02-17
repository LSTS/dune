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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_MATH_ANGLES_HPP_INCLUDED_
#define DUNE_MATH_ANGLES_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>
#include <cstdlib>

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
        return a - c_two_pi * std::floor((a + c_pi) / c_two_pi);
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
        fp64_t result = std::abs(degrees) + (std::abs(minutes) / 60.0) + (std::abs(seconds) / 3600.0);
        return (degrees < 0) ? -result : result;
      }

      //! Convert Degrees, Minutes to Decimal Format.
      //! @param degrees degrees.
      //! @param minutes minutes.
      //! @return degrees in decimal format.
      inline static fp64_t
      convertDMSToDecimal(int degrees, double minutes)
      {
        fp64_t result = std::abs(degrees) + (std::fabs(minutes) / 60.0);
        return (degrees < 0) ? -result : result;
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
        double minutes_fp = std::fabs((value - degrees) * 60.0);
        minutes = std::abs((int)(minutes_fp));
        seconds = std::fabs((minutes_fp - minutes) * 60.0);
      }

      //! Convert decimal degrees to Degrees, Minutes.
      //! @param value degrees in decimal format.
      //! @param degrees computed degrees.
      //! @param minutes computed minutes.
      inline static void
      convertDecimalToDM(double value, int& degrees, double& minutes)
      {
        degrees = (int)value;
        minutes = std::fabs((value - degrees) * 60.0);
      }

      //! XY Coordinate conversion considering a rotation angle.
      //! @param[in] angle angle in radian.
      //! @param[in] clockwise true for a clockwise rotation, false for counterclockwise.
      //! @param[in,out] x original x value on entry, rotated x value on exit.
      //! @param[in,out] y original y value on entry, rotated y value on exit.
      //! @author Eduardo Marques
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

      //! Computes the smallest signed angle between two angles (radians).
      //! @param source reference angle.
      //! @param target target angle.
      //! @return smallest signed angle.
      inline static fp64_t
      minSignedAngle(fp64_t source, fp64_t target)
      {
        return std::atan2(std::sin(target - source), std::cos(target - source));
      }
    };
  }
}

#endif
