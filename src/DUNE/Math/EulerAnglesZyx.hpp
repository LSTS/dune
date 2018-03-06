#ifndef DUNE_MATH_EULER_ANGLES_ZYX_HPP_INCLUDED_
#define DUNE_MATH_EULER_ANGLES_ZYX_HPP_INCLUDED_

#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Math/Quaternion.hpp>

#include <ostream>

namespace DUNE
{
  namespace Math
  {
    class Quaternion;

    // Euler angles in radians following the ZYX convention.
    // Roll and yaw are valid from -pi to pi, pitch from -pi/2 to pi/2.
    struct EulerAnglesZyx
    {
      EulerAnglesZyx();
      EulerAnglesZyx(double roll, double pitch, double yaw);
      EulerAnglesZyx(const Quaternion& quat);
      friend std::ostream& operator<<(std::ostream& os, const EulerAnglesZyx& eul);
      double roll;
      double pitch;
      double yaw;
    };
  }
}

#endif
