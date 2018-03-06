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
      Quaternion();
      explicit Quaternion(const std::vector<double>& vector_4);
      explicit Quaternion(const Matrix& matrix_4_by_1);
      Quaternion(double w, double x, double y, double z);
      Quaternion(const EulerAnglesZyx& euler);
      double w() const;
      double x() const;
      double y() const;
      double z() const;
      void identity();
      Matrix matrix() const;
      Matrix conjugate() const;
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
      friend std::ostream& operator<<(std::ostream& os, const Quaternion& q);
    private:
      Matrix m_matrix;
      enum Index {INDEX_W, INDEX_X, INDEX_Y, INDEX_Z};
    };

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
