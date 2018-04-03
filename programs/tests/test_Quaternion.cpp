#include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Math/Quaternion.hpp>
#include <DUNE/Math/EulerAnglesZyx.hpp>

#include "Test.hpp"

#include <cmath>
#include <string>
#include <vector>
#include <sstream>



using DUNE::Math::c_pi;
using DUNE::Math::c_half_pi;
using DUNE::Math::Matrix;
using DUNE::Math::Quaternion;
using DUNE::Math::EulerAnglesZyx;



bool almostEqual(double a, double b, double max_error = 1e-12);
bool almostEqual(const Matrix& a, const Matrix& b, double max_error = 1e-12);
bool almostEqual(const Quaternion& a, const Quaternion& b, double max_error = 1e-12);
bool almostEqual(const EulerAnglesZyx& a, const EulerAnglesZyx& b, double max_error = 1e-12);



int main()
{
  Test test("Math::Quaternion");

  {
    // Test default constructor.
    const Quaternion quat;
    const double data[] = {1, 0, 0, 0};
    const Matrix matrix(data, 4, 1);
    test.boolean("Quaternion()", quat.matrix() == matrix);
  }

  {
    // Test std::vector constructor.
    const double data[] = {-1, 2, -3, 4};
    const std::vector<double> vector(data, data + sizeof(data) / sizeof(double));
    const Quaternion quat(vector);
    const Matrix matrix(data, 4, 1);
    test.boolean("Quaternion(std::vector)", quat.matrix() == matrix);
  }

  {
    // Test std::vector constructor (bad vector length).
    const double data[] = {1, 2, 3, 4, 5};
    const std::vector<double> vector(data, data + sizeof(data) / sizeof(double));
    std::string error_message("");
    try
    {
      Quaternion quat(vector);
    }
    catch (std::invalid_argument& e)
    {
      error_message = e.what();
    }
    test.boolean("Quaternion(std::vector) exception",
                 error_message == "vector must have length 4");
  }

  {
    // Test Matrix constructor.
    const double data[] = {1, 2, 3, 4};
    const Matrix matrix(data, 4, 1);
    const Quaternion quat(matrix);
    test.boolean("Quaternion(Matrix)", quat.matrix() == matrix);
  }

  {
    // Test Matrix constructor (bad matrix size).
    const Matrix matrix(5, 1);
    std::string error_message("");
    try
    {
      Quaternion quat(matrix);
    }
    catch (std::invalid_argument& e)
    {
      error_message = e.what();
    }
    test.boolean("Quaternion(Matrix) exception", error_message == "matrix must have size 4x1");
  }

  {
    // Test w, x, y z constructor and getters.
    const double data[] = {-1, 2, -3, 4};
    const std::vector<double> vector(data, data + sizeof(data) / sizeof(double));
    const Quaternion quat(vector);
    const Matrix matrix(data, 4, 1);
    test.boolean("Quaternion(w, x, y, z)", quat.matrix() == matrix);
    test.boolean("w()", quat.w() == data[0]);
    test.boolean("x()", quat.x() == data[1]);
    test.boolean("y()", quat.y() == data[2]);
    test.boolean("z()", quat.z() == data[3]);
  }

  {
    // Test vec() getter.
    const double data[] = {2, -3, 4};
    const Quaternion quat(-1, data[0], data[1], data[2]);
    const Matrix vec(data, 3, 1);
    test.boolean("vec()", quat.vec() == vec);
  }

  {
    // Test EulerAnglesZyx constructor.
    const EulerAnglesZyx euler(0.1, -0.1, -2.7);
    const Quaternion quat_from_euler(euler);
    const Quaternion quat_expected(0.2209, -0.0378, -0.0596, -0.9727);
    test.boolean("Quaternion(EulerAnglesZyx)", almostEqual(quat_from_euler, quat_expected, 0.0001));
  }

  {
    // Test identity().
    const Quaternion quat_identity;
    Quaternion quat_arbitrary(-1, 2, -3, 4);
    const bool not_identity = quat_arbitrary != quat_identity;
    quat_arbitrary.identity();
    const bool is_identity = quat_arbitrary == quat_identity;
    test.boolean("identity()", not_identity && is_identity);
  }

  {
    // Test operator<<.
    const Quaternion q;
    std::stringstream ss;
    ss << q;
    test.boolean("operator<<", ss.str() == "1 \n0 \n0 \n0 \n");
  }

  {
    // Test transpose().
    const Quaternion quat(-1, 2, -3, 4);
    const Matrix quat_transpose = transpose(quat);
    test.boolean("transpose()", transpose(quat.matrix()) == quat_transpose);
  }

  {
    // Test conjugate().
    const Quaternion quat(-1, 2, -3, 4);
    const Quaternion result = conjugate(quat);
    const Quaternion expected = Quaternion(-1, -2, 3, -4);
    test.boolean("conjugate()", result == expected);
  }

  {
    // Test inverse().
    const Quaternion quat(1, -2, 3, -4);
    const Quaternion result = inverse(quat);
    const Quaternion expected = Quaternion(1, 2, -3, 4);
    test.boolean("inverse()", result == expected);
  }

  {
    // Test norm().
    const Quaternion quat(-1, 2, -3, 4);
    const double norm = 5.47722557505166113457;
    test.boolean("norm()", almostEqual(quat.norm(), norm));
  }

  {
    // Test normalize().
    Quaternion quat(-1, 2, -3, 4);
    quat.normalize();
    test.boolean("normalize()", almostEqual(quat.norm(), 1.0));
  }

  {
    // Test normalized().
    const Quaternion quat(1, 1, 1, 1);
    const Quaternion quat_normalized = quat.normalized();
    test.boolean("normalized()", almostEqual(quat_normalized.norm(), 1.0));
  }

  {
    // Test rotationMatrix().
    const Quaternion quat(1, 2, -3, -4);
    const double data[] = {
      -.6667, -.1333, -.7333,
      -.6667, -.3333,  .6667,
      -.3333,  .9333,  .1333,
    };
    const Matrix R_from_quat = quat.rotationMatrix();
    const Matrix R_expected = Matrix(data, 3, 3);
    test.boolean("rotationMatrix()", almostEqual(R_from_quat, R_expected, 0.0001));
  }

  {
    // Test angVelTransform().
    const Quaternion quat(2, 4, 6, 8);
    const double data[] = {
      -2, -3, -4,
       1, -4,  3,
       4,  1, -2,
      -3,  2,  1,
    };
    const Matrix T(data, 4, 3);
    test.boolean("angVelTransform()", quat.angVelTransform() == T);
  }

  {
    // Test operator*=.
    const Quaternion factor1(-1, 2, -3, 4);
    const Quaternion factor2(-5, 6, -7, 8);
    const Quaternion product(-60, -12, 30, -24);
    test.boolean("operator*=", factor1 * factor2 == product);
  }

  {
    // Test operator==.
    const Quaternion q1(-1, 2, -3, 4);
    Quaternion q2(-5, 6, -7, 8);
    const bool are_inequal = !(q1 == q2);
    q2 = q1;
    const bool are_equal = q1 == q2;
    test.boolean("operator==", are_inequal && are_equal);
  }

  {
    // Test operator!=.
    const Quaternion q1(-1, 2, -3, 4);
    Quaternion q2(-5, 6, -7, 8);
    const bool are_inequal = q1 != q2;
    q2 = q1;
    const bool are_equal = !(q1 != q2);
    test.boolean("operator!=", are_inequal && are_equal);
  }

  {
    // Test operator*(Quaternion, Matrix).
    const Quaternion factor1(-1, 2, -3, 4);
    const double data1[] = {-5, 6, -7, 8};
    const Matrix factor2(data1, 1, 4);
    const double data2[] = {
        5,  -6,   7,  -8,
      -10,  12, -14,  16,
       15, -18,  21, -24,
      -20,  24, -28,  32,
    };
    const Matrix product(data2, 4, 4);
    test.boolean("operator*(Quaternion, Matrix)", factor1 * factor2 == product);
  }

  {
    // Test operator*(Matrix, Quaternion).
    const double data1[] = {
       1,  2,  3,  4,
       5,  6,  7,  8,
       9, 10, 11, 12,
      13, 14, 15, 16,
    };
    const Matrix factor1(data1, 4, 4);
    const Quaternion factor2(1, -2, 3, -4);
    const double data2[] = {-10, -18, -26, -34};
    const Matrix product(data2, 4, 1);
    test.boolean("operator*(Matrix, Quaternion)", factor1 * factor2 == product);
  }

  {
    // Test EulerAnglesZyx(Quaternion).
    const Quaternion quat(0.8453, -0.1785, 0.2583, 0.4322);
    const EulerAnglesZyx eul_from_quat(quat);
    const EulerAnglesZyx eul_expected(-0.09748, 0.63234, 0.91338);
    test.boolean("EulerAnglesZyx(Quaternion)", almostEqual(eul_from_quat, eul_expected, 0.0001));
  }

  {
    // Test conversion from quaternion to euler angles to quaternion.
    bool all_good = true;
    const double step = 0.3;  // With step = 0.3, the below code runs roughly 2000 iterations.

    for (double w = -1; w <= 1; w += step)
    {
      for (double x = -1; x <= 1; x += step)
      {
        for (double y = -1; y <= 1; y += step)
        {
          for (double z = -1; z <= 1; z += step)
          {
            const Quaternion q1 = Quaternion(w, x, y, z).normalized();
            const EulerAnglesZyx eul(q1);

            // Euler angle conversion invalid for pitch near +/- pi/2.
            if (almostEqual(std::fabs(eul.pitch), c_half_pi, 1e-6))
              continue;

            const Quaternion q2(eul);

            const bool equivalent_quaternions = almostEqual(q1, q2) || almostEqual(q1, -q2);
            if (!equivalent_quaternions)
              all_good = false;
          }
        }
      }
    }
    test.boolean("quat -> eul -> quat", all_good);
  }

  {
    // Test conversion from euler angles to quaternion to euler angles.
    bool all_good = true;
    const double step = c_pi/8;

    for (double yaw = -c_pi + step; yaw < c_pi; yaw += step)
    {
      for (double pitch = -c_half_pi + step; pitch < c_half_pi; pitch += step)
      {
        for (double roll = -c_pi + step; roll < c_pi; roll += step)
        {
          const EulerAnglesZyx eul1(roll, pitch, yaw);
          const Quaternion quat(eul1);
          const EulerAnglesZyx eul2(quat);
          if (!almostEqual(eul1, eul2))
            all_good = false;
        }
      }
    }
    test.boolean("eul -> quat -> eul", all_good);
  }

  {
    // Test that a quaternion and its negation represent the same rotation.
    const Quaternion q1 = Quaternion(1, 2, 3, 4).normalized();
    const EulerAnglesZyx eul1(q1);
    const EulerAnglesZyx eul2(-q1);
    test.boolean("q == -q", almostEqual(eul1, eul2));
  }

  return 0;
}



bool almostEqual(double a, double b, double max_error)
{
  return std::fabs(a - b) < max_error;
}

bool almostEqual(const Matrix& a, const Matrix& b, double max_error)
{
  if (a.rows() != b.rows() || a.columns() != b.columns())
    return false;

  Matrix diff = a - b;
  for (int i = 0; i < diff.size(); ++i)
    if (std::fabs(diff(i)) > max_error)
      return false;

  return true;
}

bool almostEqual(const Quaternion& a, const Quaternion& b, double max_error)
{
  return almostEqual(a.matrix(), b.matrix(), max_error);
}

bool almostEqual(const EulerAnglesZyx& a, const EulerAnglesZyx& b, double max_error)
{
  return almostEqual(a.roll, b.roll, max_error)
         && almostEqual(a.pitch, b.pitch, max_error)
         && almostEqual(a.yaw, b.yaw, max_error);
}
