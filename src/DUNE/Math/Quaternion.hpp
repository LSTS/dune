#ifndef DUNE_MATH_QUATERNION_HPP_INCLUDED_
#define DUNE_MATH_QUATERNION_HPP_INCLUDED_

#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Math/EulerAnglesZyx.hpp>

#include <ostream>
#include <vector>

namespace DUNE
{
  namespace Math
  {
    struct EulerAnglesZyx;

    // Quaternions on the form (w + ix + jy + kz)
    // where w is the scalar part and v = (x, y, z) is the vector part.
    class Quaternion
    {
    public:
      // Initialize to the identity quaternion [1 0 0 0].
      Quaternion();

      // Initialize from individual elements.
      Quaternion(double qw, double qx, double qy, double qz);

      // Initialize from size 4 vector q = [w x y z].
      explicit Quaternion(const std::vector<double>& q);

      // Initialize from real element w and size 3 vector v = [x y z].
      Quaternion(double qw, const std::vector<double>& v);

      // Initialize from 4x1 Matrix q = [w x y z].
      explicit Quaternion(const Matrix& q);

      // Initialize from scalar element w and 3x1 Matrix v = [x y z].
      Quaternion(double qw, const Matrix& v);

      // Convert from ZYX-convention Euler angles.
      explicit Quaternion(const EulerAnglesZyx& euler);

      double w() const;
      double x() const;
      double y() const;
      double z() const;
      Matrix vec() const;

      Matrix matrix() const;
      double norm() const;
      Quaternion normalized() const;
      Matrix rotationMatrix() const;
      Matrix angVelTransform() const;

      void identity();
      void normalize();

      Quaternion operator-() const;
      Quaternion& operator+=(const Quaternion& rhs);
      Quaternion& operator-=(const Quaternion& rhs);
      Quaternion& operator*=(const Quaternion& rhs);
    private:
      Matrix m_matrix;
      enum Index {INDEX_W, INDEX_X, INDEX_Y, INDEX_Z};
    };

    Quaternion conjugate(const Quaternion& quat);
    Quaternion inverse(const Quaternion& quat);
    Matrix transpose(const Quaternion& quat);

    bool operator==(const Quaternion& lhs, const Quaternion& rhs);
    bool operator!=(const Quaternion& lhs, const Quaternion& rhs);
    Quaternion operator+(const Quaternion& lhs, const Quaternion& rhs);
    Quaternion operator+(const Quaternion& lhs, const Matrix& rhs);
    Quaternion operator+(const Matrix& lhs, const Quaternion& rhs);
    Quaternion operator*(const Quaternion& lhs, const Quaternion& rhs);
    Matrix operator*(const Quaternion& lhs, const Matrix& rhs);
    Matrix operator*(const Matrix& lhs, const Quaternion& rhs);
    std::ostream& operator<<(std::ostream& os, const Quaternion& quat);
  }
}

#endif
