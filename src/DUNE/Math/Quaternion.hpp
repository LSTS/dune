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

    // Quaternions on the form (w + ix + jy + kz).
    class Quaternion
    {
    public:
      // Initialize to the identity quaternion [1 0 0 0].
      Quaternion();

      // Initialize from individual elements.
      Quaternion(double w, double x, double y, double z);

      // Initialize from size 4 vector q = [w x y z].
      explicit Quaternion(const std::vector<double>& q);

      // Initialize from real element w and size 3 vector v = [x y z].
      Quaternion(double w, const std::vector<double>& v);

      // Initialize from 4x1 Matrix q = [w x y z].
      explicit Quaternion(const Matrix& q);

      // Initialize from scalar element w and 3x1 Matrix v = [x y z].
      Quaternion(double w, const Matrix& v);

      // Convert from ZYX-convention Euler angles.
      explicit Quaternion(const EulerAnglesZyx& euler);

      double w() const;
      double x() const;
      double y() const;
      double z() const;
      void identity();
      Matrix matrix() const;
      double norm() const;
      void normalize();
      Matrix rotationMatrix() const;
      Matrix angVelTransform() const;
      Quaternion& operator=(Matrix rhs);
      Quaternion operator-() const;
      Quaternion& operator+=(const Quaternion& rhs);
      Quaternion& operator+=(const Matrix& rhs);
      Quaternion& operator-=(const Quaternion& rhs);
      Quaternion& operator*=(const Quaternion& rhs);
      bool operator==(const Quaternion& rhs);
      bool operator!=(const Quaternion& rhs);
    private:
      Matrix m_matrix;
      enum Index {INDEX_W, INDEX_X, INDEX_Y, INDEX_Z};
    };

    std::ostream& operator<<(std::ostream& os, const Quaternion& q);
    Matrix transpose(const Quaternion& quat);
    Quaternion conjugate(const Quaternion& quat);
    Quaternion inverse(const Quaternion& quat);
    Quaternion operator+(Quaternion lhs, const Matrix& rhs);
    Quaternion operator+(Matrix lhs, const Quaternion& rhs);
    Quaternion operator*(Quaternion lhs, const Quaternion& rhs);
    Matrix operator*(Quaternion lhs, const Matrix& rhs);
    Matrix operator*(Matrix lhs, const Quaternion& rhs);
    bool operator==(const Quaternion& lhs, const Matrix& rhs);
    bool operator==(const Matrix& lhs, const Quaternion& rhs);
  }
}

#endif
