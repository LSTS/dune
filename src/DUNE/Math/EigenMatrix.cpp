//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Aníbal Matos                                                     *
// Author: Ricardo Martins                                                  *
// Author: Pedro Vaz Teixeira (Attitude rep. functions, enhancements)       *
// Author: Rui Gomes (Matrix concatenation)                                 *
// Author: Eduardo Marques (misc. enhancements)                             *
// Author: Pedro Calado                                                     *
// Author: José Braga                                                       *
//***************************************************************************

// ISO C++ 98 headers.
// #include <cstdlib>
// #include <cmath>
// #include <cstring>
// #include <string>
#include <vector>
// #include <iostream>
#include <fstream>
// #include <cctype>
// #include <algorithm>

// DUNE headers.
// #include <DUNE/Utils/String.hpp>
// #include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/EigenMatrix.hpp>
#include <DUNE/Math/General.hpp>
// #include <DUNE/Parsers/Config.hpp>
// #include "eigen/Dense"

#define ALLOCD(count) (double*)std::malloc(sizeof(double) * (count))
// #define ALLOCI(count) (int*)std::malloc(sizeof(int) * (count))

namespace DUNE
{
  namespace Math
  {
    //! The value used to test for zero in matrix inversion
    double EigenMatrix::precision = 1e-9;

    EigenMatrix::EigenMatrix(void)
    { }

    EigenMatrix::EigenMatrix(size_t r, size_t c)
    {
      if (!r || !c)
        throw Error("Invalid dimension!");

      m_data.resize(r, c);
    }

    EigenMatrix::EigenMatrix(size_t r, size_t c, double value):
    EigenMatrix(r, c)
    {
      fill(value);
    }

    EigenMatrix::EigenMatrix(const EigenMatrix& m)
    {
      m_data = m.m_data;
    }

    EigenMatrix::EigenMatrix(double* data, size_t r, size_t c)
    {
      if (!r || !c)
        throw Error("Invalid dimension!");

      fill(r, c, data);
    }


    EigenMatrix::EigenMatrix(size_t n):
    EigenMatrix(n, n)
    {
      if (!n)
        throw Error("Invalid dimension!");

      identity();
    }

    EigenMatrix::EigenMatrix(double* diag, size_t n):
    EigenMatrix(n, n)
    {
      m_data = Eigen::Map<RowMajorMatrix>(diag, n, 1).asDiagonal();
    }

    EigenMatrix::~EigenMatrix(void)
    {
    }

    double*
    EigenMatrix::begin(void)
    {
      return &m_data(0);
    }

    double*
    EigenMatrix::end(void)
    {
      return &m_data(m_data.size()-1);
    }

    const double*
    EigenMatrix::begin(void) const
    {
      return &m_data(0);
    }

    const double*
    EigenMatrix::end(void) const
    {
      return &m_data(m_data.size()-1);
    }

    const double*
    EigenMatrix::cbegin(void) const
    {
      return &m_data(0);
    }

    const double*
    EigenMatrix::cend(void) const
    {
      return &m_data(m_data.size()-1);
    }

    int
    EigenMatrix::rows(void) const
    {
      return m_data.rows();
    }

    int
    EigenMatrix::columns(void) const
    {
      return m_data.cols();
    }

    int
    EigenMatrix::size(void) const
    {
      return m_data.size();
    }

    bool
    EigenMatrix::isSquare(void) const
    {
      return m_data.cols() == m_data.rows();
    }

    bool
    EigenMatrix::isVector(void) const
    {
      return m_data.rows() == 1 || m_data.cols() == 1;
    }

    bool
    EigenMatrix::isRowVector(void) const
    {
      return m_data.rows() == 1;
    }

    bool
    EigenMatrix::isRowVector(size_t c) const
    {
      return m_data.rows() == 1 && (size_t)m_data.cols() == c;
    }

    bool
    EigenMatrix::isColumnVector(void) const
    {
      return m_data.cols() == 1;
    }

    bool
    EigenMatrix::isColumnVector(size_t r) const
    {
      return m_data.cols() == 1 && (size_t)m_data.rows() == r;
    }

    bool
    EigenMatrix::isEmpty(void) const
    {
      return m_data.size() == 0;
    }

    void
    EigenMatrix::fill(size_t r, size_t c, double* data)
    {
      resize(r, c);
      m_data = Eigen::Map<RowMajorMatrix>(data, r, c);
    }

    void
    EigenMatrix::fill(double x)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      m_data.fill(x);
    }

    void
    EigenMatrix::identity(void)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (!isSquare())
        throw Error("Matrix is not square!");

      m_data = Eigen::MatrixXd::Identity(m_data.rows(), m_data.cols());
    }

    void
    EigenMatrix::maxLimitValues(double max)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      for (unsigned i = 0; i < m_data.size(); i++)
      {
        if (m_data(i) >= max)
          m_data(i) = max;
      }
    }

    void
    EigenMatrix::minLimitValues(double min)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      for (unsigned i = 0; i < m_data.size(); i++)
      {
        if (m_data(i) <= min)
          m_data(i) = min;
      }
    }

    void
    EigenMatrix::trimValues(double min, double max)
    {
      maxLimitValues(max);
      minLimitValues(min);
    }

    void
    EigenMatrix::trimValues(double lim)
    {
      maxLimitValues(lim);
      minLimitValues(- lim);
    }

    EigenMatrix
    EigenMatrix::get(unsigned i1, unsigned i2, unsigned j1, unsigned j2) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i1 > i2 || j1 > j2)
        throw Error("Invalid index!");

      if (i2 >= m_data.rows() || j2 >= m_data.cols())
        throw Error("Invalid index!");

      int r = i2 - i1 + 1;
      int c = j2 - j1 + 1;

      EigenMatrix s;
      s.m_data = m_data.block(i1, j1, r, c);

      return s;
    }

    EigenMatrix&
    EigenMatrix::set(unsigned i1, unsigned i2, unsigned j1, unsigned j2, const EigenMatrix& m)
    {
      if (isEmpty() || m.isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i1 > i2 || j1 > j2)
        throw Error("Invalid index!");

      if (i2 >= m_data.rows() || j2 >= m_data.cols())
        throw Error("Invalid index!");

      // If data is already shared: there is nothing to do
      if (m_data == m.m_data)
        return *this;

      unsigned int r = i2 - i1 + 1;
      unsigned int c = j2 - j1 + 1;

      m_data.block(i1, j1, r, c) = m.m_data;

      return *this;
    }

    EigenMatrix&
    EigenMatrix::blkDiag(const EigenMatrix& mx_in)
    {
      EigenMatrix old = *this;
      EigenMatrix mx_in_ = mx_in;
      resizeAndFill(m_data.rows() + mx_in_.rows(), m_data.cols() + mx_in_.columns(), 0);

      if (!old.isEmpty())
        set(0, old.rows() - 1, 0, old.columns() - 1, old);
      set(old.rows(), old.rows() + mx_in_.rows() - 1, old.columns(), old.columns() + mx_in_.columns() - 1, mx_in_);

      return *this;
    }

    EigenMatrix&
    EigenMatrix::vertCat(const EigenMatrix& mx_in)
    {
      if (m_data.cols() != mx_in.m_data.cols() && !isEmpty())
        throw Error("Invalid index!");

      EigenMatrix old = *this;
      EigenMatrix mx_in_ = mx_in;
      resizeAndFill(old.rows() + mx_in_.rows(), mx_in_.columns(), 0);

      if (!old.isEmpty())
        set(0, old.rows() - 1, 0, old.columns() - 1, old);
      set(old.rows(), old.rows() + mx_in_.rows() - 1, 0, mx_in_.columns() - 1, mx_in_);

      return *this;
    }

    EigenMatrix&
    EigenMatrix::horzCat(const EigenMatrix& mx_in)
    {
      if (m_data.rows() != mx_in.m_data.rows() && !isEmpty())
        throw Error("Invalid index!");

      EigenMatrix old = *this; //  <=> Matrix old(*this);
      EigenMatrix mx_in_ = mx_in;
      resizeAndFill(mx_in_.rows(), m_data.cols() + mx_in.columns(), 0);

      if (!old.isEmpty())
        set(0, old.rows() - 1, 0, old.columns() - 1, old);
      set(0, mx_in_.rows() - 1, old.columns(), old.columns() + mx_in_.columns() - 1, mx_in_);

      return *this;
    }

    EigenMatrix&
    EigenMatrix::pow(unsigned int n)
    {
      if (m_data.rows() != m_data.cols())
        throw Error("Matrix is not square!");

      EigenMatrix power(m_data.rows());

      if (n == 0)
      {
        *this = power;
      }
      else if (n > 1)
      {
        for (unsigned int i = 0; i < n; i++)
          power = power * (*this);
        *this = power;
      }

      return *this;
    }

    void
    EigenMatrix::toFile(const char* path)
    {
      std::ofstream ofs(path);
      ofs << *this;
      ofs.close();
    }

    void
    EigenMatrix::fromFile(const char* path)
    {
      std::ifstream ifs(path);
      ifs >> *this;
      ifs.close();
    }

    EigenMatrix
    EigenMatrix::row(size_t i) const
    {
      EigenMatrix r;
      r.m_data = m_data.row(i);

      return r;
    }

    EigenMatrix
    EigenMatrix::column(size_t j) const
    {
      EigenMatrix c;
      c.m_data = m_data.col(j);
      
      return c;
    }

    void
    EigenMatrix::swapColumns(unsigned i, unsigned j)
    {
      if (i >= m_data.cols() || j >= m_data.cols())
        throw Error("Invalid index!");

      if (i == j)
        return;

      m_data.col(i).swap(m_data.col(j));
    }

    void
    EigenMatrix::swapRows(unsigned i, unsigned j)
    {
      if (i >= m_data.rows() || j >= m_data.rows())
        throw Error("Invalid index!");

      if (i == j)
        return;

      m_data.row(i).swap(m_data.row(j));
    }

    void
    EigenMatrix::set_precision(double p)
    {
      if (p > 0)
        precision = p;
    }

    double
    EigenMatrix::get_precision(void)
    {
      return precision;
    }

    void
    EigenMatrix::resize(size_t r, size_t c)
    {
      if ((!r && c) || (r && !c))
        throw Error("Invalid dimension!");

      m_data.resize(r, c);
    }

    void
    EigenMatrix::resizeAndKeep(unsigned r, unsigned c)
    {
      if (r == m_data.rows() && c == m_data.cols())
        return;

      if (!isEmpty())
      {
        if ((!r && c) || (r && !c))
          throw Error("Invalid dimension!");

        m_data.conservativeResize(r, c);
      }
      else
      {
        resize(r, c);
      }
    }

    void
    EigenMatrix::resizeAndFill(size_t r, size_t c, double value)
    {
      resize(r, c);
      fill(value);
    }

    void
    EigenMatrix::resize(const EigenMatrix& m)
    {
      resize(m.m_data.rows(), m.m_data.cols());
    }

    double&
    EigenMatrix::operator()(unsigned i, unsigned j)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_data.rows() || j >= m_data.cols())
        throw Error("Invalid index!");

      return m_data(i, j);
    }

    double
    EigenMatrix::operator()(unsigned i, unsigned j) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_data.rows() || j >= m_data.cols())
        throw Error("Invalid index!");

      return m_data(i, j);
    }

    double&
    EigenMatrix::operator()(unsigned i)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_data.size())
        throw Error("Invalid index!");

      return m_data(i);
    }

    double
    EigenMatrix::operator()(unsigned i) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_data.size())
        throw Error("Invalid index!");

      return m_data(i);
    }

    double
    EigenMatrix::element(unsigned i, unsigned j) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_data.rows() || j >= m_data.cols())
        throw Error("Invalid index!");

      return m_data(i, j);
    }

    double
    EigenMatrix::element(unsigned i)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_data.size())
        throw Error("Invalid index!");

      return m_data(i);
    }

    void
    EigenMatrix::to_row(void)
    {
      if (!m_data.size())
        return;

      fill(1, m_data.size(), m_data.data());
    }

    void
    EigenMatrix::to_column(void)
    {
      if (!m_data.size())
        return;

      fill(m_data.size(), 1, m_data.data());
    }

    bool
    EigenMatrix::operator==(const EigenMatrix& m) const
    {
      if (m_data.size() != m.m_data.size())
        return false;

      if (m_data.rows() != m.m_data.rows())
        return false;

      if (m_data.cols() != m.m_data.cols())
        return false;

      if (&m_data(0) == NULL)
      {
        if (&m.m_data(0) == NULL)
          return true;
        else
          return false;
      }
      else if (&m.m_data(0) == NULL)
        return false;

      return std::memcmp(&m_data(0), &m.m_data(0), m_data.size() * sizeof(double)) == 0;
    }

    EigenMatrix&
    EigenMatrix::operator=(const EigenMatrix& m)
    {
      m_data = m.m_data;
      return *this;
    }

    EigenMatrix&
    EigenMatrix::operator+=(const EigenMatrix& m)
    {
      if (rows() != m.rows() || columns() != m.columns())
        throw Error("Incompatible dimensions!");

      m_data += m.m_data;

      return *this;
    }

    EigenMatrix&
    EigenMatrix::operator-=(const EigenMatrix& m)
    {
      if (rows() != m.rows() || columns() != m.columns())
        throw Error("Incompatible dimensions!");

      m_data -= m.m_data;

      return *this;
    }

    EigenMatrix&
    EigenMatrix::operator&=(const EigenMatrix& m)
    {
      if (rows() != m.rows() || columns() != m.columns())
        throw Error("Incompatible dimensions!");

      m_data = m_data.array() * m.m_data.array();

      return *this;
    }

    EigenMatrix&
    EigenMatrix::operator/=(const EigenMatrix& m)
    {
      if (rows() != m.rows() || columns() != m.columns())
        throw Error("Incompatible dimensions!");

      m_data = m_data.array() / m.m_data.array();

      return *this;
    }

    EigenMatrix
    EigenMatrix::operator-(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      EigenMatrix tmp = -1 * *this;
      return tmp;
    }

    EigenMatrix&
    EigenMatrix::operator*=(double x)
    {
      m_data *= x;

      return *this;
    }

    EigenMatrix&
    EigenMatrix::operator/=(double x)
    {
      m_data /= x;

      return *this;
    }

    void
    EigenMatrix::put(size_t i, size_t j, const EigenMatrix& a)
    {
      if (a.isEmpty())
        return;

      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      size_t r = i + a.rows();
      size_t c = j + a.columns();

      if (r > m_data.rows() || c > m_data.cols())
        throw Error("Invalid dimensions!");

      m_data.block(i, j, a.rows(), a.columns()) = a.m_data;

      return;
    }

    EigenMatrix
    EigenMatrix::mminor(size_t i, size_t j) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_data.rows() != m_data.cols())
        throw Error("Matrix is not square!");

      if (i >= m_data.rows() || j >= m_data.cols())
        throw Error("Invalid dimensions!");

      EigenMatrix mi;
      size_t n = m_data.rows() - 1;
      mi.resizeAndFill(n, n, 0.0);
      if (0 == i && 0 == j)
        mi = this->get(1, n, 1, n);
      else if (n == i && n == j)
        mi = this->get(0, n - 1, 0, n - 1);
      else if (0 == i && n == j)
        mi = this->get(1, n, 0, n - 1);
      else if (n == i && 0 == j)
        mi = this->get(0, n - 1, 1, n);
      else if (0 == i)
      {
        mi.put(0, 0, this->get(1, n, 0, j - 1));
        mi.put(0, j, this->get(1, n, j + 1, n));
      }
      else if (0 == j)
      {
        mi.put(0, 0, this->get(0, i - 1, 1, n));
        mi.put(i, 0, this->get(i + 1, n, 1, n));
      }
      else if (n == i)
      {
        mi.put(0, 0, this->get(0, n - 1, 0, j - 1));
        mi.put(0, j, this->get(0, n - 1, j + 1, n));
      }
      else if (n == j)
      {
        mi.put(0, 0, this->get(0, i - 1, 0, n - 1));
        mi.put(i, 0, this->get(i + 1, n, 0, n - 1));
      }
      else
      {
        mi.put(0, 0, this->get(0, i - 1, 0, j - 1));
        mi.put(i, 0, this->get(i + 1, n, 0, j - 1));
        mi.put(0, j, this->get(0, i - 1, j + 1, n));
        mi.put(i, j, this->get(i + 1, n, j + 1, n));
      }

      return mi;
    }

    // void
    // EigenMatrix::lu(EigenMatrix& L, EigenMatrix& U) const
    // {
    //   if (isEmpty())
    //     throw Error("Trying to access an empty matrix!");

    //   if (m_nrows != m_ncols)
    //     throw Error(" matrix is not square!");

    //   EigenMatrix A = *this;
    //   EigenMatrix Lf(m_nrows), dI(m_nrows), P(m_nrows);
    //   dI = dI + dI;

    //   for (size_t i = 0; i < m_nrows - 1; i++)
    //   {
    //     /*
    //     // check if pivot == 0
    //     // if so, try to find a valid pivot
    //     // if no valid pivot found, matrix isn't invertible (quit)
    //     // update permutation matrix
    //     //
    //     */
    //     EigenMatrix Lt(m_nrows);
    //     for (size_t j = i + 1; j < m_nrows; j++)
    //       Lt(j, i) = -A(j, i) / A(i, i);

    //     A = Lt * A;
    //     Lf = Lf * (dI - Lt);
    //   }

    //   U = A;
    //   L = Lf;
    // }

    // unsigned int
    // EigenMatrix::lup(EigenMatrix& L, EigenMatrix& U, EigenMatrix& P) const
    // {
    //   if (isEmpty())
    //     throw Error("Trying to access an empty matrix!");

    //   if (m_nrows != m_ncols)
    //     throw Error(" matrix is not square!");

    //   unsigned int permutations = 0;
    //   EigenMatrix A = *this;
    //   EigenMatrix Lf(m_nrows), dI(m_nrows), Per(m_nrows);
    //   dI = dI + dI;

    //   for (size_t i = 0; i < m_nrows - 1; i++)
    //   {
    //     if (EigenMatrix::precision >= std::fabs(A(i, i)))
    //     {
    //       bool p = 0;
    //       for (size_t k = i + 1; k < m_nrows; k++)
    //         if (EigenMatrix::precision >= std::fabs(A(k, i)))
    //         {
    //           A.swapRows(i, k);
    //           Per.swapRows(i, k);
    //           p = true;
    //           break;
    //         }
    //       if (!p)
    //         throw Error("Matrix is not invertible!");
    //       else
    //         permutations++;
    //     }

    //     EigenMatrix Lt(m_nrows); // gaussian matrix
    //     for (size_t j = i + 1; j < m_nrows; j++)
    //       Lt(j, i) = -A(j, i) / A(i, i);

    //     /*
    //       A = Lt * A;
    //       Lf = Lf * (dI - Lt);
    //     */
    //     A = Lt.multiply(A);
    //     Lf = Lf.multiply((dI - Lt)); // dI-Lt is the inverse of Lt (gaussian matrix)
    //   }

    //   P = Per;
    //   U = A;
    //   L = Lf;

    //   return permutations;
    // }

    double
    EigenMatrix::detr(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (!isSquare())
        throw Error("Matrix is not square!");

      if (m_data.rows() == 1)
        return this->element(0, 0);
      else if (m_data.rows() == 2)
        return this->element(0, 0) * this->element(1, 1) - this->element(1, 0) * this->element(0, 1);
      else if (m_data.rows() == 3)
        return (this->element(0, 0) * this->element(1, 1) * this->element(2, 2)
                + this->element(0, 1) * this->element(1, 2) * this->element(2, 0)
                + this->element(0, 2) * this->element(1, 0) * this->element(2, 1)
                - this->element(2, 0) * this->element(1, 1) * this->element(0, 2)
                - this->element(2, 1) * this->element(1, 2) * this->element(0, 0)
                - this->element(2, 2) * this->element(1, 0) * this->element(0, 1));
      else
      {
        double d = 0;
        for (size_t j = 0; j < m_data.cols(); j++)
        {
          d += element(0, j) * std::pow(-1.0, (double)j) * (mminor(0, j)).detr();
        }
        return d;
      }
    }

    double
    EigenMatrix::det(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (!isSquare())
        throw Error("Matrix is not square!");

      return m_data.determinant() < precision ? 0 : m_data.determinant();
    }

    bool
    EigenMatrix::Sylvester(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (!isSquare())
        throw Error("Matrix is not square!");

      if (m_data.rows() < 1)
        throw Error("Invalid dimensions!");

      EigenMatrix m = *this;

      for (size_t i = m_data.rows() - 1; i > 0; i--)
      {
        if (m.det() <= 0)
          return false;
        else
          m = m.mminor(i, i);
      }

      return true;
    }

    // EigenMatrix
    // EigenMatrix::toDCM(void) const
    // {
    //   if (isEmpty())
    //     throw Error("Trying to access an empty matrix!");

    //   // quaternion form to DCM
    //   if (m_nrows == 4 && m_ncols == 1)
    //   {
    //     double vals[4] = {element(0, 0), element(1, 0), element(2, 0), element(3, 0)};
    //     double v[9] =
    //     {
    //       vals[0] * vals[0] + vals[1] * vals[1] - vals[2] * vals[2] - vals[3] * vals[3],
    //       2 * (vals[1] * vals[2] - vals[0] * vals[3]),
    //       2 * (vals[1] * vals[3] + vals[0] * vals[2]),
    //       2 * (vals[1] * vals[2] + vals[0] * vals[3]),
    //       vals[0] * vals[0] - vals[1] * vals[1] + vals[2] * vals[2] - vals[3] * vals[3],
    //       2 * (vals[2] * vals[3] - vals[0] * vals[1]),
    //       2 * (vals[1] * vals[3] - vals[0] * vals[2]),
    //       2 * (vals[2] * vals[3] + vals[0] * vals[1]),
    //       vals[0] * vals[0] - vals[1] * vals[1] - vals[2] * vals[2] + vals[3] * vals[3]
    //     };

    //     return EigenMatrix(v, 3, 3);
    //   }

    //   // Euler angles to DCM
    //   if (m_nrows == 3 && m_ncols == 1)
    //   {
    //     double vals[3] = {element(0, 0), element(1, 0), element(2, 0)};
    //     double cr = std::cos(vals[0]);
    //     double sr = std::sin(vals[0]);
    //     double cp = std::cos(vals[1]);
    //     double sp = std::sin(vals[1]);
    //     double cy = std::cos(vals[2]);
    //     double sy = std::sin(vals[2]);

    //     double rx[9] = {1, 0, 0, 0, cr, sr, 0, -sr, cr};
    //     double ry[9] = {cp, 0, -sp, 0, 1, 0, sp, 0, cp};
    //     double rz[9] = {cy, sy, 0, -sy, cy, 0, 0, 0, 1};

    //     return transpose(EigenMatrix(rx, 3, 3) * EigenMatrix(ry, 3, 3) * EigenMatrix(rz, 3, 3));
    //   }

    //   throw Error("source matrix is neither in quaternion or Euler angle form!");
    // }

    // EigenMatrix
    // EigenMatrix::toQuaternion(void) const
    // {
    //   if (isEmpty())
    //     throw Error("Trying to access an empty matrix!");

    //   // Euler angles to quaternion
    //   if (3 == m_nrows && 1 == m_ncols)
    //   {
    //     double ea[3] = {element(0, 0), element(1, 0), element(2, 0)};

    //     double cr = std::cos(ea[0] / 2);
    //     double sr = std::sin(ea[0] / 2);
    //     double cp = std::cos(ea[1] / 2);
    //     double sp = std::sin(ea[1] / 2);
    //     double cy = std::cos(ea[2] / 2);
    //     double sy = std::sin(ea[2] / 2);

    //     double q[4] = {cr * cp * cy + sr * sp * sy,
    //                    sr * cp * cy - cr * sp * sy,
    //                    cr * sp * cy + sr * cp * sy,
    //                    cr * cp * sy - sr * sp * cy};

    //     return EigenMatrix(q, 4, 1);
    //   }

    //   // DCM to quaternion
    //   if (3 == m_nrows && 3 == m_ncols)
    //   {
    //     double q4 = 0.5 * std::sqrt(1 + element(0, 0) + element(1, 1) + element(2, 2));
    //     double k = 1 / (4 * q4);
    //     double q[4] =
    //     {
    //       k * (element(1, 2) - element(2, 1)),
    //       k * (element(2, 0) - element(0, 2)),
    //       k * (element(0, 1) - element(1, 0)),
    //       q4
    //     };

    //     return EigenMatrix(q, 4, 1);
    //   }

    //   throw Error("source matrix is neither in quaternion or Euler angle form!");
    // }

    // EigenMatrix
    // EigenMatrix::toEulerAngles(void) const
    // {
    //   if (isEmpty())
    //     throw Error("Trying to access an empty matrix!");

    //   // DCM to Euler angles
    //   if (m_nrows == 3 && m_ncols == 3)
    //   {
    //     double k = element(2, 0);

    //     double ea[3] =
    //     {
    //       std::atan2(element(2, 1), element(2, 2)),
    //       -std::atan(k / std::sqrt(1 - k * k)),
    //       std::atan2(element(1, 0), element(0, 0))
    //     };

    //     return EigenMatrix(ea, 3, 1);
    //   }

    //   // Quaternion to Euler angles
    //   if (m_nrows == 4 && m_ncols == 1)
    //   {
    //     double norm = norm_p(2);
    //     double q[4] = {element(0, 0) / norm,
    //                    element(1, 0) / norm,
    //                    element(2, 0) / norm,
    //                    element(3, 0) / norm};

    //     double roll = std::atan2(2 * (q[0] * q[1] + q[2] * q[3]), 1 - 2 * (q[1] * q[1] + q[2] * q[2]));

    //     double pitch = 2 * (q[0] * q[2] - q[3] * q[1]);
    //     if (std::fabs(pitch) >= 1)
    //       pitch = c_half_pi * pitch / std::fabs(pitch);
    //     else
    //       pitch = std::asin(pitch);

    //     double yaw =  std::atan2(2 * (q[0] * q[3] + q[1] * q[2]), 1 - 2 * (q[2] * q[2] + q[3] * q[3]));

    //     double ea[3] = { roll, pitch, yaw };

    //     return EigenMatrix(ea, 3, 1);
    //   }

    //   throw Error("source matrix is neither in quaternion or Euler angle form!");
    // }

    // EigenMatrix
    // EigenMatrix::expmts(double tol) const
    // {
    //   if (isEmpty())
    //     throw Error("Trying to access an empty matrix!");

    //   if (m_nrows != m_ncols)
    //     throw Error("source matrix is not square!");

    //   double n2 = norm_p(2);

    //   unsigned int m = computeNextPowerOfTwo((uint32_t)n2);

    //   if (m > 1)
    //   {
    //     EigenMatrix eA = *this;
    //     eA *= (1.0 / m);
    //     eA = eA.expmts(); // scaling

    //     for (unsigned int i = 1; i < m; i = i << 1)
    //       eA = eA * eA;  // squaring
    //     return eA;
    //   }

    //   EigenMatrix eA(m_nrows);
    //   EigenMatrix A(m_nrows);
    //   n2 = 1;
    //   double inv_f = 1;
    //   int i = 0;

    //   while (true)
    //   {
    //     inv_f = inv_f * (1.0 / ++i);
    //     A = A * (*this);
    //     eA = eA + inv_f * A;

    //     double n2b = eA.norm_p(2);

    //     if (std::fabs(n2b - n2) < tol)
    //       break;
    //     n2 = n2b;
    //   }
    //   return eA;
    // }

    double
    EigenMatrix::norm_p(double p) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (p < 1)
        throw Error("Incompatible value for p!");

      if (p == 1)
        return m_data.lpNorm<1>();
      if (p == 2)
        return m_data.lpNorm<2>();
    }

    double
    EigenMatrix::norm_2(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      return m_data.lpNorm<2>();
    }

    double
    EigenMatrix::norm_inf(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      return m_data.lpNorm<Eigen::Infinity>();
    }

    double
    EigenMatrix::median(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      double* p = ALLOCD(m_data.size());
      Eigen::Map<RowMajorMatrix>(p, m_data.rows(), m_data.cols()) = m_data;

      return DUNE::Math::median(p, m_data.size());
    }

    double
    EigenMatrix::trace(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (!isSquare())
        throw Error("not a square matrix!");

      return m_data.trace();
    }

    EigenMatrix
    EigenMatrix::multiply(const EigenMatrix& m2)
    {
      if (isEmpty() || m2.isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_data.cols() != m2.m_data.cols())
        throw EigenMatrix::Error("Incompatible dimensions!");

      EigenMatrix s(m_data.rows(), m2.m_data.cols());
      s.m_data = m_data * m2.m_data;
      
      return s;
    }

    EigenMatrix
    operator+(const EigenMatrix& m1, const EigenMatrix& m2)
    {
      if (m1.isEmpty() || m2.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      if (m1.rows() != m2.rows() || m1.columns() != m2.columns())
        throw EigenMatrix::Error("Incompatible dimensions!");

      EigenMatrix s;
      s.m_data = m1.m_data + m2.m_data;

      return s;
    }

    EigenMatrix
    operator-(const EigenMatrix& m1, const EigenMatrix& m2)
    {
      if (m1.isEmpty() || m2.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      if (m1.rows() != m2.rows() || m1.columns() != m2.columns())
        throw EigenMatrix::Error("Incompatible dimensions!");

      EigenMatrix s;
      s.m_data = m1.m_data - m2.m_data;

      return s;
    }

    EigenMatrix
    operator*(const EigenMatrix& m1, const EigenMatrix& m2)
    {
      if (m1.isEmpty() || m2.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      if (m1.columns() != m2.rows())
        throw EigenMatrix::Error("Incompatible dimensions!");

      EigenMatrix s;
      s.m_data = m1.m_data * m2.m_data;

      return s;
    }

    EigenMatrix
    operator&(const EigenMatrix& m1, const EigenMatrix& m2)
    {
      if (m1.isEmpty() || m2.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      if (m1.rows() != m2.rows() || m1.columns() != m2.columns())
        throw EigenMatrix::Error("Incompatible dimensions!");

      EigenMatrix s(m1.rows(), m1.columns());
      s.m_data = m1.m_data.array() * m2.m_data.array();

      return s;
    }

    EigenMatrix
    operator/(const EigenMatrix& a, const EigenMatrix& b)
    {
      if (a.isEmpty() || b.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      if (a.rows() != b.rows() || a.columns() != b.columns())
        throw EigenMatrix::Error("Incompatible dimensions!");

      EigenMatrix s(a.rows(), a.columns());
      s.m_data = a.m_data.array() / b.m_data.array();

      return s;
    }

    EigenMatrix
    operator*(double x, const EigenMatrix& a)
    {
      EigenMatrix s(a);

      s.m_data *= x;

      return s;
    }

    EigenMatrix
    operator*(const EigenMatrix& a, double x)
    {
      EigenMatrix s(a);

      s.m_data *= x;

      return s;
    }

    EigenMatrix
    operator/(const EigenMatrix& a, double x)
    {
      EigenMatrix s(a);

      s.m_data /= x;

      return s;
    }

    std::ostream&
    operator<<(std::ostream& os, const EigenMatrix& a)
    {
      os << a.m_data;

      return os;
    }

    std::istream&
    operator>>(std::istream& is, EigenMatrix& a)
    {
      std::vector<double> elements;

      while (!is.eof())
      {
        char b;
        b = is.peek();

        if (b == ',')
        {
          is >> b;

          if (elements.size())
          {
            a.vertCat(EigenMatrix(&elements[0], 1, elements.size()));
            elements.clear();
          }
        }
        else if (std::isspace(b))
        {
          // dump character
          char s[1];
          is.read(s, 1);
        }
        else
        {
          double d;
          is >> d;

          elements.push_back(d);

          if (is.eof())
            break;
        }
      }

      if (elements.size())
        a.vertCat(EigenMatrix(&elements[0], 1, elements.size()));

      return is;
    }

    EigenMatrix
    transpose(const EigenMatrix& a)
    {
      if (a.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      EigenMatrix t(a.columns(), a.rows());
      t.m_data = a.m_data.transpose();

      return t;
    }

    bool
    EigenMatrix::isInvertible(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (rows() != columns())
        throw EigenMatrix::Error("Inversion of a nonsquare Matrix!");

      return m_data.fullPivLu().isInvertible();
    }

    // EigenMatrix
    // inverse_pp(const EigenMatrix& a)
    // {
    //   if (a.isEmpty())
    //     throw EigenMatrix::Error("Trying to access an empty matrix!");

    //   if (a.m_nrows != a.m_ncols)
    //     throw EigenMatrix::Error("Inversion of a nonsquare Matrix!");

    //   int n = a.m_nrows;
    //   double* M = ALLOCD(2 * n * n);
    //   double* p1 = M;
    //   double* p2 = a.m_data;

    //   for (int i = 0; i < n; i++)
    //   {
    //     for (int j = 0; j < n; j++)
    //     {
    //       *p1 = *p2;
    //       *(p1 + n) = (i == j) ? 1 : 0;
    //       p1++;
    //       p2++;
    //     }
    //     p1 += n;
    //   }

    //   int result = Math::EigenMatrix::upper_triangular_pp(M, n, n + n, EigenMatrix::precision);

    //   EigenMatrix s(n, n);

    //   if (result)  // singular Matrix
    //   {
    //     std::free(M);
    //     throw EigenMatrix::Error("Inversion error!");
    //   }

    //   p1 = s.m_data;
    //   p2 = M;
    //   int n2 = n + n;

    //   for (int j = 0; j < n; j++)
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //       double* p = p1 + n * i + j;
    //       *p = p2[i * n2 + n + j];
    //       for (int ii = i + 1; ii < n; ii++)
    //         *p -= p2[n2 * i + ii] * p1[n * ii + j];
    //       *p /= p2[n2 * i + i];
    //     }

    //   std::free(M);
    //   return s;
    // }

    // EigenMatrix
    // inverse_pp(const EigenMatrix& a, const EigenMatrix& b)
    // {
    //   if (a.isEmpty() || b.isEmpty())
    //     throw EigenMatrix::Error("Trying to access an empty matrix!");

    //   if (a.m_nrows != a.m_ncols)
    //     throw EigenMatrix::Error("Inversion of a nonsquare Matrix!");

    //   if (a.m_nrows != b.m_nrows)
    //     throw EigenMatrix::Error("Incompatible dimensions!");

    //   int n = a.m_nrows;
    //   int m = b.m_ncols;
    //   double* M = ALLOCD(n * (n + m));

    //   double* p1 = M;
    //   double* p2 = a.m_data;
    //   double* p3 = b.m_data;
    //   for (int i = 0; i < n; i++)
    //   {
    //     for (int j = 0; j < n; j++)
    //       *(p1++) = *(p2++);

    //     for (int j = 0; j < m; j++)
    //       *(p1++) = *(p3++);
    //   }

    //   int result = Math::EigenMatrix::upper_triangular_pp(M, n, n + m, EigenMatrix::precision);

    //   EigenMatrix s(n, m);

    //   if (result)  // singular Matrix
    //   {
    //     std::free(M);
    //     throw EigenMatrix::Error("Inversion error!");
    //   }

    //   p1 = s.m_data;
    //   p2 = M;
    //   int n2 = n + m;

    //   for (int j = 0; j < m; j++)
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //       double* p = p1 + m * i + j;
    //       *p = p2[i * n2 + n + j];
    //       for (int ii = i + 1; ii < n; ii++)
    //         *p -= p2[n2 * i + ii] * p1[m * ii + j];
    //       *p /= p2[n2 * i + i];
    //     }

    //   std::free(M);
    //   return s;
    // }

    // EigenMatrix
    // inverse(const EigenMatrix& a)
    // {
    //   if (a.isEmpty())
    //     throw EigenMatrix::Error("Trying to access an empty matrix!");

    //   if (a.m_nrows != a.m_ncols)
    //     throw EigenMatrix::Error("Inversion of a nonsquare Matrix!");

    //   int n = a.m_nrows;
    //   double* M = ALLOCD(2 * n * n);
    //   int* index = ALLOCI(n);

    //   double* p1 = M;
    //   double* p2 = a.m_data;

    //   for (int i = 0; i < n; i++)
    //   {
    //     for (int j = 0; j < n; j++)
    //     {
    //       *p1 = *p2;
    //       *(p1 + n) = (i == j) ? 1 : 0;
    //       p1++;
    //       p2++;
    //     }
    //     p1 += n;
    //     index[i] = i;
    //   }

    //   int result = Math::EigenMatrix::upper_triangular_tp(M, index, n, n + n, EigenMatrix::precision);

    //   EigenMatrix s(n, n);

    //   if (result)  // singular Matrix
    //   {
    //     std::free(index);
    //     std::free(M);
    //     throw EigenMatrix::Error("Inversion error!");
    //   }

    //   p1 = s.m_data;
    //   p2 = M;
    //   int n2 = n + n;

    //   for (int j = 0; j < n; j++)
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //       double* p = p1 + n * index[i] + j;
    //       *p = p2[i * n2 + n + j];
    //       for (int ii = i + 1; ii < n; ii++)
    //         *p -= p2[n2 * i + ii] * p1[n * index[ii] + j];
    //       *p /= p2[n2 * i + i];
    //     }

    //   std::free(index);
    //   std::free(M);
    //   return s;
    // }

    // EigenMatrix
    // inverse(const EigenMatrix& a, const EigenMatrix& b)
    // {
    //   if (a.isEmpty() || b.isEmpty())
    //     throw EigenMatrix::Error("Trying to access an empty matrix!");

    //   if (a.m_nrows != a.m_ncols)
    //     throw EigenMatrix::Error("Inversion of a nonsquare Matrix!");

    //   if (a.m_nrows != b.m_nrows)
    //     throw EigenMatrix::Error("Incompatible dimensions!");

    //   int n = a.m_nrows;
    //   int m = b.m_ncols;
    //   double* M = ALLOCD(n * (n + m));
    //   int* index = ALLOCI(n);

    //   double* p1 = M;
    //   double* p2 = a.m_data;
    //   double* p3 = b.m_data;
    //   for (int i = 0; i < n; i++)
    //   {
    //     for (int j = 0; j < n; j++)
    //       *(p1++) = *(p2++);
    //     for (int j = 0; j < m; j++)
    //       *(p1++) = *(p3++);
    //     index[i] = i;
    //   }

    //   int result = Math::EigenMatrix::upper_triangular_tp(M, index, n, n + m, EigenMatrix::precision);

    //   EigenMatrix s(n, m);

    //   if (result)  // singular Matrix
    //   {
    //     std::free(index);
    //     std::free(M);
    //     throw EigenMatrix::Error("Inversion error!");
    //   }

    //   p1 = s.m_data;
    //   p2 = M;
    //   int n2 = n + m;

    //   for (int j = 0; j < m; j++)
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //       double* p = p1 + m * index[i] + j;
    //       *p = p2[i * n2 + n + j];
    //       for (int ii = i + 1; ii < n; ii++)
    //         *p -= p2[n2 * i + ii] * p1[m * index[ii] + j];
    //       *p /= p2[n2 * i + i];
    //     }

    //   std::free(index);
    //   std::free(M);
    //   return s;
    // }

    // EigenMatrix
    // skew(const double data[3])
    // {
    //   EigenMatrix m(3, 3, 0.0);
    //   m(0, 1) = -data[2];
    //   m(0, 2) = data[1];
    //   m(1, 0) = data[2];
    //   m(1, 2) = -data[0];
    //   m(2, 0) = -data[1];
    //   m(2, 1) = data[0];

    //   return m;
    // }

    // EigenMatrix
    // skew(const EigenMatrix& a)
    // {
    //   if (a.isEmpty())
    //     throw EigenMatrix::Error("Trying to access an empty matrix!");

    //   if (!((a.m_nrows == 1 && a.m_ncols == 3) || (a.m_nrows == 3 && a.m_ncols == 1)))
    //     throw EigenMatrix::Error("Matrix must be 3x1 or 1x3 to create a skew symmetrical!");

    //   double data[3] = {a(0), a(1), a(2)};

    //   return skew(data);
    // }

    // EigenMatrix
    // inverse_lup(const EigenMatrix& a)
    // {
    //   if (a.isEmpty())
    //     throw EigenMatrix::Error("Trying to access an empty matrix!");

    //   if (a.m_nrows != a.m_ncols)
    //     throw EigenMatrix::Error("Inversion of a nonsquare Matrix!");

    //   int n = a.m_nrows;

    //   EigenMatrix L(n);
    //   EigenMatrix U(n);
    //   EigenMatrix P(n);

    //   a.lup(L, U, P);

    //   double* y = ALLOCD(n);
    //   double* l = L.m_data;
    //   double* u = U.m_data;
    //   double* p = P.m_data;

    //   EigenMatrix Minv(n, n);
    //   double* m = Minv.m_data;

    //   for (int k = 0; k < n; k++)
    //   {
    //     for (int j = 0; j < n; j++)
    //     {
    //       y[j] = p[j * n + k];

    //       for (int i = 0; i < j; i++)
    //         y[j] -= l[j * n + i] * y[i];

    //       y[j] /= l[j * n + j];
    //     }

    //     for (int j = n - 1; j >= 0; j--)
    //     {
    //       m[j * n + k] = y[j];
    //       for (int i = j + 1; i < n; i++)
    //         m[j * n + k] -= u[j * n + i] * m[i * n + k];

    //       if (EigenMatrix::precision >= std::fabs(u[j * n + j]))
    //         throw EigenMatrix::Error("Matrix is not invertible!");
    //       else
    //         m[j * n + k] /= u[j * n + j];
    //     }
    //   }

    //   std::free(y);

    //   return Minv;
    // }

    EigenMatrix
    abs(const EigenMatrix& a)
    {
      if (a.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      EigenMatrix s(a);

      s.m_data.cwiseAbs();

      return s;
    }

    double
    max(const EigenMatrix& a)
    {
      if (a.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      return a.m_data.maxCoeff();
    }

    double
    min(const EigenMatrix& a)
    {
      if (a.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      return a.m_data.minCoeff();
    }

    double
    sum(const EigenMatrix& a)
    {
      if (a.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      return a.m_data.sum();
    }

    double
    squaresum(const EigenMatrix& a)
    {
      if (a.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      EigenMatrix s(a);

      return s.m_data.array().square().sum();
    }

    // int
    // EigenMatrix::upper_triangular_pp(double* M, int n, int m, double tolerance)
    // {
    //   for (int i = 0; i < n; i++)
    //   {
    //     int ii = i;
    //     double p = std::fabs(M[i * m + i]);

    //     for (int j = i + 1; j < n; j++)
    //     {
    //       double t;

    //       if ((t = std::fabs(M[j * m + i])) > p)
    //       {
    //         p = t;
    //         ii = j;
    //       }
    //     }

    //     if (p <= tolerance)
    //       return -1;

    //     if (i != ii)
    //       for (int j = i; j < m; j++)
    //       {
    //         double t = M[i * m + j];
    //         M[i * m + j] = M[ii * m + j];
    //         M[ii * m + j] = t;
    //       }

    //     for (ii = i + 1; ii < n; ii++)
    //     {
    //       double f = M[ii * m + i] / M[i * m + i];
    //       for (int j = i + 1; j < m; j++)
    //         M[ii * m + j] -= f * M[i * m + j];
    //     }
    //   }

    //   return 0;
    // }

    // int
    // EigenMatrix::upper_triangular_tp(double* M, int* index, int n, int m, double tolerance)
    // {
    //   for (int i = 0; i < n; i++)
    //   {
    //     int ii = i;
    //     int jj = i;
    //     double p = std::fabs(M[i * m + i]);

    //     for (int k = i; k < n; k++)
    //       for (int j = i; j < n; j++)
    //       {
    //         double t;
    //         if ((t = std::fabs(M[k * m + j])) > p)
    //         {
    //           p = t;
    //           ii = k;
    //           jj = j;
    //         }
    //       }

    //     if (p <= tolerance)
    //       return -1;

    //     if (i != ii)
    //       for (int j = i; j < m; j++)
    //       {
    //         double t = M[i * m + j];
    //         M[i * m + j] = M[ii * m + j];
    //         M[ii * m + j] = t;
    //       }

    //     if (i != jj)
    //     {
    //       for (int k = 0; k < n; k++)
    //       {
    //         double t = M[k * m + i];
    //         M[k * m + i] = M[k * m + jj];
    //         M[k * m + jj] = t;
    //       }

    //       int k = index[i];
    //       index[i] = index[jj];
    //       index[jj] = k;
    //     }

    //     for (ii = i + 1; ii < n; ii++)
    //     {
    //       double f = M[ii * m + i] / M[i * m + i];
    //       for (int j = i + 1; j < m; j++)
    //         M[ii * m + j] -= f * M[i * m + j];
    //     }
    //   }

    //   return 0;
    // }

    double
    EigenMatrix::dot(const EigenMatrix& a, const EigenMatrix& b)
    {
      if (a.isEmpty() || b.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      // Check if a and b are both column vectors or row vectors
      if (!a.isVector() || a.rows() != b.rows() || a.columns() != b.columns())
        throw Error("Invalid arguments for dot product!");

      Eigen::VectorXd a_vec = toEigenVector(a.m_data);
      Eigen::VectorXd b_vec = toEigenVector(b.m_data);

      return a_vec.dot(b_vec);
    }

    EigenMatrix
    EigenMatrix::cross(const EigenMatrix& a, const EigenMatrix& b)
    {
      if (a.isEmpty() || a.isEmpty())
        throw EigenMatrix::Error("Trying to access an empty matrix!");

      // Check if a and b are both column vectors or row vectors
      if (!a.isVector() || !b.isVector())
        throw Error("unable cross product matrices that are not vectors!");

      if (a.size() != 3 || b.size() != 3)
        throw Error("vectors are not 3D!");

      Eigen::Vector3d a_vec(a(0), a(1), a(2));
      Eigen::Vector3d b_vec(b(0), b(1), b(2));

      Eigen::VectorXd v = a_vec.cross(b_vec);

      EigenMatrix m;
      m.m_data = toEigenMatrix(v);
      return m;
    }

    // void
    // EigenMatrix::readFromLines(const std::vector<std::string>& clines)
    // {
    //   if (isEmpty())
    //     throw Error("dimensions of the matrix must be defined first!");

    //   if (clines.size() != m_nrows)
    //     throw Error("Invalid number of rows in configuration!");

    //   std::vector<double> rvalues;

    //   double* p = m_data;

    //   for (size_t r = 0; r < clines.size(); ++r)
    //   {
    //     // Parse row in configuration line
    //     DUNE::Utils::String::split(clines[r], " ", rvalues);

    //     if (rvalues.size() != m_ncols)
    //       throw Error(Utils::String::str("Invalid number of columns in configuration - row: %d", r));

    //     for (size_t c = 0; c < m_ncols; ++c)
    //       *p++ = rvalues[c];
    //     rvalues.clear();
    //   }
    // }

    // void
    // EigenMatrix::readFromConfig(DUNE::Parsers::Config& cfg, const std::string& section, const std::string& param)
    // {
    //   // Read configuration lines, each defining a matrix row.
    //   std::vector<std::string> clines;
    //   cfg.get(section, param, "", clines);

    //   this->readFromLines(clines);
    // }

    Eigen::VectorXd 
    EigenMatrix::toEigenVector(const RowMajorMatrix &m)
    {
      double* p = ALLOCD(m.size());
      Eigen::Map<RowMajorMatrix>(p, m.rows(), m.cols()) = m;
      Eigen::VectorXd v(Eigen::Map<Eigen::VectorXd>(p, m.cols()*m.rows()));

      return v;
    }

    EigenMatrix::RowMajorMatrix
    EigenMatrix::toEigenMatrix(const Eigen::VectorXd &v)
    {
      double* p = ALLOCD(v.size());
      Eigen::Map<Eigen::VectorXd>(p, v.size()) = v;
      RowMajorMatrix m(Eigen::Map<RowMajorMatrix>(p, 1, v.size()));

      return m;
    }
  }
}
