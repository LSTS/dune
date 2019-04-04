#include "EulerAnglesZyx.hpp"

#include <cmath>

namespace DUNE
{
  namespace Math
  {
    EulerAnglesZyx::EulerAnglesZyx()
    : roll(0), pitch(0), yaw(0) {}

    EulerAnglesZyx::EulerAnglesZyx(double _roll, double _pitch, double _yaw)
    : roll(_roll), pitch(_pitch), yaw(_yaw) {}

    EulerAnglesZyx::EulerAnglesZyx(const Quaternion& q)
    {
      const double& w = q.w();
      const double& x = q.x();
      const double& y = q.y();
      const double& z = q.z();

      roll  = std::atan2(2*(w*x + y*z), 1 - 2*(x*x + y*y));
      pitch = std::asin( 2*(w*y - x*z));
      yaw   = std::atan2(2*(w*z + x*y), 1 - 2*(y*y + z*z));
    }

    std::ostream& operator<<(std::ostream& os, const EulerAnglesZyx& eul)
    {
      os << eul.roll << std::endl << eul.pitch << std::endl << eul.yaw << std::endl;
      return os;
    }
  }
}
