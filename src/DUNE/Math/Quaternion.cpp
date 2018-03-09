#include "Quaternion.hpp"

#include <cmath>
#include <stdexcept>

namespace DUNE
{
  namespace Math
  {
    Quaternion::Quaternion()
    : m_matrix(4, 1)
    {
      this->identity();
    }

    Quaternion::Quaternion(const std::vector<double>& vector)
    : m_matrix(4, 1)
    {
      if (vector.size() != 4)
        throw std::invalid_argument("vector must have length 4");

      m_matrix(INDEX_W) = vector[INDEX_W];
      m_matrix(INDEX_X) = vector[INDEX_X];
      m_matrix(INDEX_Y) = vector[INDEX_Y];
      m_matrix(INDEX_Z) = vector[INDEX_Z];
    }

    Quaternion::Quaternion(const Matrix& matrix)
    : m_matrix(4, 1)
    {
      if (matrix.rows() != 4 || matrix.columns() != 1)
        throw std::invalid_argument("matrix must have size 4x1");

      m_matrix = matrix;
    }

    Quaternion::Quaternion(double w, double x, double y, double z)
    : m_matrix(4, 1)
    {
      m_matrix(INDEX_W) = w;
      m_matrix(INDEX_X) = x;
      m_matrix(INDEX_Y) = y;
      m_matrix(INDEX_Z) = z;
    }

    Quaternion::Quaternion(const EulerAnglesZyx& euler)
    : m_matrix(4, 1)
    {
      const double cr = std::cos(euler.roll / 2);
      const double sr = std::sin(euler.roll / 2);
      const double cp = std::cos(euler.pitch / 2);
      const double sp = std::sin(euler.pitch / 2);
      const double cy = std::cos(euler.yaw / 2);
      const double sy = std::sin(euler.yaw / 2);

      m_matrix(INDEX_W) = cr*cp*cy + sr*sp*sy;
      m_matrix(INDEX_X) = sr*cp*cy - cr*sp*sy;
      m_matrix(INDEX_Y) = cr*sp*cy + sr*cp*sy;
      m_matrix(INDEX_Z) = cr*cp*sy - sr*sp*cy;
    }

    void Quaternion::identity()
    {
      m_matrix(INDEX_W) = 1.0;
      m_matrix(INDEX_X) = 0.0;
      m_matrix(INDEX_Y) = 0.0;
      m_matrix(INDEX_Z) = 0.0;
    }

    Matrix Quaternion::matrix() const
    {
      return m_matrix;
    }

    double Quaternion::w() const { return m_matrix(INDEX_W); }
    double Quaternion::x() const { return m_matrix(INDEX_X); }
    double Quaternion::y() const { return m_matrix(INDEX_Y); }
    double Quaternion::z() const { return m_matrix(INDEX_Z); }

    double Quaternion::norm() const
    {
      return m_matrix.norm_2();
    }

    void Quaternion::normalize()
    {
      m_matrix /= this->norm();
    }

    Matrix Quaternion::rotationMatrix() const
    {
      return (m_matrix / this->norm()).toDCM();
    }

    Matrix Quaternion::angVelTransform() const
    {
      double data[12] = {
        -x(), -y(), -z(),
         w(), -z(),  y(),
         z(),  w(), -x(),
        -y(),  x(),  w(),
      };

      return 0.5 * Matrix(data, 4, 3);
    }

    Quaternion Quaternion::operator-() const
    {
      return Quaternion(-this->matrix());
    }

    Quaternion& Quaternion::operator=(Matrix rhs)
    {
      if (rhs.rows() != 4 || rhs.columns() != 1)
        throw std::invalid_argument("matrix must have size 4x1");

      m_matrix = rhs;
      return *this;
    }

    Quaternion& Quaternion::operator+=(const Quaternion& rhs)
    {
      m_matrix += rhs.matrix();
      return *this;
    }

    Quaternion& Quaternion::operator+=(const Matrix& rhs)
    {
      if (rhs.rows() != 4 || rhs.columns() != 1)
        throw std::invalid_argument("matrix must have size 4x1");

      m_matrix += rhs;
      return *this;
    }

    Quaternion& Quaternion::operator-=(const Quaternion& rhs)
    {
      m_matrix -= rhs.matrix();
      return *this;
    }

    Quaternion& Quaternion::operator*=(const Quaternion& rhs)
    {
      // Based on http://mathworld.wolfram.com/Quaternion.html.
      const double _w = rhs.w()*w() - rhs.x()*x() - rhs.y()*y() - rhs.z()*z();
      const double _x = rhs.w()*x() + rhs.x()*w() - rhs.y()*z() + rhs.z()*y();
      const double _y = rhs.w()*y() + rhs.x()*z() + rhs.y()*w() - rhs.z()*x();
      const double _z = rhs.w()*z() - rhs.x()*y() + rhs.y()*x() + rhs.z()*w();

      m_matrix(INDEX_W) = _w;
      m_matrix(INDEX_X) = _x;
      m_matrix(INDEX_Y) = _y;
      m_matrix(INDEX_Z) = _z;

      return *this;
    }

    bool Quaternion::operator==(const Quaternion& rhs)
    {
      return m_matrix == rhs.matrix();
    }

    bool Quaternion::operator!=(const Quaternion& rhs)
    {
      return !(*this == rhs);
    }



    std::ostream& operator<<(std::ostream& os, const Quaternion& quat)
    {
      os << quat.matrix();
      return os;
    }

    Matrix transpose(const Quaternion& quat)
    {
      return transpose(quat.matrix());
    }

    Quaternion conjugate(const Quaternion& quat)
    {
      return Quaternion(quat.w(), -quat.x(), -quat.y(), -quat.z());
    }

    Quaternion inverse(const Quaternion& quat)
    {
      return conjugate(quat);
    }

    Quaternion operator+(Quaternion lhs, const Matrix& rhs)
    {
      return Quaternion(lhs.matrix() + rhs);
    }

    Quaternion operator+(Matrix lhs, const Quaternion& rhs)
    {
      return Quaternion(lhs + rhs.matrix());
    }

    Quaternion operator*(Quaternion lhs, const Quaternion& rhs)
    {
      return lhs *= rhs;
    }

    Matrix operator*(Quaternion lhs, const Matrix& rhs)
    {
      return lhs.matrix() * rhs;
    }

    Matrix operator*(Matrix lhs, const Quaternion& rhs)
    {
      return lhs * rhs.matrix();
    }

    bool operator==(const Quaternion& lhs, const Matrix& rhs)
    {
      return lhs.matrix() == rhs;
    }

    bool operator==(const Matrix& lhs, const Quaternion& rhs)
    {
      return rhs == lhs;
    }
  }
}
