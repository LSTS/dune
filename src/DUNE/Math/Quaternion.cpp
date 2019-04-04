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

    Quaternion::Quaternion(double qw, double qx, double qy, double qz)
    : m_matrix(4, 1)
    {
      m_matrix(INDEX_W) = qw;
      m_matrix(INDEX_X) = qx;
      m_matrix(INDEX_Y) = qy;
      m_matrix(INDEX_Z) = qz;
    }

    Quaternion::Quaternion(const std::vector<double>& q)
    : m_matrix(4, 1)
    {
      if (q.size() != 4)
        throw std::invalid_argument("vector must have length 4");

      m_matrix(INDEX_W) = q[0];
      m_matrix(INDEX_X) = q[1];
      m_matrix(INDEX_Y) = q[2];
      m_matrix(INDEX_Z) = q[3];
    }

    Quaternion::Quaternion(const double qw, const std::vector<double>& v)
    : m_matrix(4, 1)
    {
      if (v.size() != 3)
        throw std::invalid_argument("vector must have length 3");

      m_matrix(INDEX_W) = qw;
      m_matrix(INDEX_X) = v[0];
      m_matrix(INDEX_Y) = v[1];
      m_matrix(INDEX_Z) = v[2];
    }

    Quaternion::Quaternion(const Matrix& q)
    : m_matrix(4, 1)
    {
      if (!q.isColumnVector() || q.size() != 4)
        throw std::invalid_argument("matrix must have size 4x1");

      m_matrix = q;
    }

    Quaternion::Quaternion(double qw, const Matrix& v)
    : m_matrix(4, 1)
    {
      if (!v.isColumnVector() || v.size() != 3)
        throw std::invalid_argument("matrix must have size 3x1");

      m_matrix(INDEX_W) = qw;
      m_matrix(INDEX_X) = v(0);
      m_matrix(INDEX_Y) = v(1);
      m_matrix(INDEX_Z) = v(2);
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

    double Quaternion::w() const { return m_matrix(INDEX_W); }
    double Quaternion::x() const { return m_matrix(INDEX_X); }
    double Quaternion::y() const { return m_matrix(INDEX_Y); }
    double Quaternion::z() const { return m_matrix(INDEX_Z); }
    Matrix Quaternion::vec() const { return m_matrix.get(INDEX_X, INDEX_Z, 0, 0); }

    Matrix Quaternion::matrix() const
    {
      return m_matrix;
    }

    double Quaternion::norm() const
    {
      return m_matrix.norm_2();
    }

    Quaternion Quaternion::normalized() const
    {
      Quaternion q = *this;
      q.normalize();
      return q;
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

    void Quaternion::identity()
    {
      m_matrix.fill(0.0);
      m_matrix(INDEX_W) = 1.0;
    }

    void Quaternion::normalize()
    {
      m_matrix /= this->norm();
    }

    Quaternion Quaternion::operator-() const
    {
      return Quaternion(-this->matrix());
    }

    Quaternion& Quaternion::operator+=(const Quaternion& rhs)
    {
      m_matrix += rhs.matrix();
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

    Quaternion conjugate(const Quaternion& quat)
    {
      return Quaternion(quat.w(), -quat.x(), -quat.y(), -quat.z());
    }

    Quaternion inverse(const Quaternion& quat)
    {
      return conjugate(quat);
    }

    Matrix transpose(const Quaternion& quat)
    {
      return transpose(quat.matrix());
    }

    bool operator==(const Quaternion& lhs, const Quaternion& rhs)
    {
      return lhs.matrix() == rhs.matrix();
    }

    bool operator!=(const Quaternion& lhs, const Quaternion& rhs)
    {
      return !(lhs == rhs);
    }

    Quaternion operator+(const Quaternion& lhs, const Quaternion& rhs)
    {
      Quaternion temp(lhs);
      temp += rhs;
      return temp;
    }

    Quaternion operator+(const Quaternion& lhs, const Matrix& rhs)
    {
      if (!rhs.isColumnVector() || rhs.size() != 4)
        throw std::invalid_argument("matrix must have size 4x1");

      return Quaternion(lhs.matrix() + rhs);
    }

    Quaternion operator+(const Matrix& lhs, const Quaternion& rhs)
    {
      if (lhs.isColumnVector() || lhs.size() != 4)
        throw std::invalid_argument("matrix must have size 4x1");

      return Quaternion(lhs + rhs.matrix());
    }

    Quaternion operator*(const Quaternion& lhs, const Quaternion& rhs)
    {
      Quaternion temp(lhs);
      temp *= rhs;
      return temp;
    }

    Matrix operator*(const Quaternion& lhs, const Matrix& rhs)
    {
      if (rhs.rows() != 1)
        throw std::invalid_argument("matrix must have 1 row");

      return lhs.matrix() * rhs;
    }

    Matrix operator*(const Matrix& lhs, const Quaternion& rhs)
    {
      if (lhs.columns() != 4)
        throw std::invalid_argument("matrix must have 4 columns");

      return lhs * rhs.matrix();
    }

    std::ostream& operator<<(std::ostream& os, const Quaternion& quat)
    {
      os << quat.matrix();
      return os;
    }
  }
}
