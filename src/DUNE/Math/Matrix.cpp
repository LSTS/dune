//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/Matrix.hpp>
#include <DUNE/Math/General.hpp>
#include <DUNE/Parsers/Config.hpp>

#define ALLOCD(count) (double*)std::malloc(sizeof(double) * (count))
#define ALLOCI(count) (int*)std::malloc(sizeof(int) * (count))

namespace DUNE
{
  namespace Math
  {
    //! The value used to test for zero in matrix inversion
    double Matrix::precision = 1e-10;

    Matrix::Matrix(void):
      m_nrows(0),
      m_ncols(0),
      m_size(0),
      m_data(NULL),
      m_counter(NULL)
    { }

    Matrix::Matrix(size_t r, size_t c)
    {
      if (!r || !c)
        throw Error("Invalid dimension!");

      m_nrows = r;
      m_ncols = c;
      m_size = r * c;
      m_data = ALLOCD(m_size + 1);

      m_counter = m_data + m_size;
      *m_counter = 1;
    }

    Matrix::Matrix(size_t r, size_t c, double value)
    {
      if (!r || !c)
        throw Error("Invalid dimension!");

      m_nrows = r;
      m_ncols = c;
      m_size = r * c;
      m_data = ALLOCD(m_size + 1);

      m_counter = m_data + m_size;
      *m_counter = 1;

      fill(value);
    }

    Matrix::Matrix(const Matrix& m)
    {
      m_nrows = m.m_nrows;
      m_ncols = m.m_ncols;
      m_size = m.m_size;

      if (m_size)
      {
        m_data = m.m_data;
        m_counter = m.m_counter;
        ++(*m_counter);
      }
      else
      {
        m_data = NULL;
        m_counter = NULL;
      }
    }

    Matrix::Matrix(const double* data, size_t r, size_t c)
    {
      if (!r || !c)
        throw Error("Invalid dimension!");

      m_nrows = r;
      m_ncols = c;
      m_size = r * c;
      m_data = ALLOCD(m_size + 1);

      m_counter = m_data + m_size;
      *m_counter = 1;

      std::memcpy(m_data, data, m_size * sizeof(double));
    }


    Matrix::Matrix(size_t n)
    {
      if (!n)
        throw Error("Invalid dimension!");

      m_nrows = n;
      m_ncols = n;
      m_size = n * n;
      m_data = ALLOCD(m_size + 1);

      m_counter = m_data + m_size;
      *m_counter = 1;

      identity();
    }

    Matrix::Matrix(const double* diag, size_t n)
    {
      m_nrows = n;
      m_ncols = n;
      m_size = n * n;
      m_data = ALLOCD(m_size + 1);
      m_counter = m_data + m_size;
      *m_counter = 1;

      fill(0);

      for (size_t i = 0; i < n; i++)
        m_data[i * (n + 1)] = diag[i];
    }

    Matrix::~Matrix(void)
    {
      erase();
    }

    void
    Matrix::erase(void)
    {
      if (m_size != 0 && m_counter != NULL)
      {
        if (--(*m_counter) == 0)
        {
          std::free(m_data);
          m_data = NULL;
          m_counter = NULL;
          m_nrows = 0;
          m_ncols = 0;
          m_size = 0;
        }
      }
    }

    void
    Matrix::split(void)
    {
      if (!m_size)
        return;

      if ((*m_counter) == 1)
        return;

      (*m_counter)--;

      double* newdata = ALLOCD(m_size + 1);
      std::memcpy(newdata, m_data, m_size * sizeof(double));
      m_data = newdata;
      m_counter = m_data + m_size;
      *m_counter = 1;
    }

    double*
    Matrix::begin(void)
    {
      return m_data;
    }

    double*
    Matrix::end(void)
    {
      return m_data + m_size;
    }

    const double*
    Matrix::begin(void) const
    {
      return m_data;
    }

    const double*
    Matrix::end(void) const
    {
      return m_data + m_size;
    }

    const double*
    Matrix::cbegin(void) const
    {
      return m_data;
    }

    const double*
    Matrix::cend(void) const
    {
      return m_data + m_size;
    }

    int
    Matrix::rows(void) const
    {
      return m_nrows;
    }

    int
    Matrix::columns(void) const
    {
      return m_ncols;
    }

    int
    Matrix::size(void) const
    {
      return m_size;
    }

    bool
    Matrix::isSquare(void) const
    {
      return m_nrows == m_ncols;
    }

    bool
    Matrix::isVector(void) const
    {
      return m_nrows == 1 || m_ncols == 1;
    }

    bool
    Matrix::isRowVector(void) const
    {
      return m_nrows == 1;
    }

    bool
    Matrix::isRowVector(size_t c) const
    {
      return m_nrows == 1 && m_ncols == c;
    }

    bool
    Matrix::isColumnVector(void) const
    {
      return m_ncols == 1;
    }

    bool
    Matrix::isColumnVector(size_t r) const
    {
      return m_ncols == 1 && m_nrows == r;
    }

    bool
    Matrix::isEmpty(void) const
    {
      return m_size == 0;
    }

    void
    Matrix::fill(size_t r, size_t c, const double* data)
    {
      erase();
      resize(r, c);
      std::memcpy(m_data, data, m_size * sizeof(double));
    }

    void
    Matrix::fill(double x)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      split();

      double* p = m_data;

      for (size_t i = 0; i < m_size; i++)
        *(p++) = x;
    }

    void
    Matrix::identity(void)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Error("Matrix is not square!");

      fill(0);

      for (size_t i = 0; i < m_nrows; i++)
        m_data[i * (m_nrows + 1)] = 1;
    }

    void
    Matrix::maxLimitValues(double max)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      split();

      double* p = m_data;

      for (size_t i = 0; i < m_size; i++)
      {
        if (*p >= max)
          *p = max;
        p++;
      }
    }

    void
    Matrix::minLimitValues(double min)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      split();

      double* p = m_data;

      for (size_t i = 0; i < m_size; i++)
      {
        if (*p <= min)
          *p = min;
        p++;
      }
    }

    void
    Matrix::trimValues(double min, double max)
    {
      maxLimitValues(max);
      minLimitValues(min);
    }

    void
    Matrix::trimValues(double lim)
    {
      maxLimitValues(lim);
      minLimitValues(- lim);
    }

    Matrix
    Matrix::get(size_t i1, size_t i2, size_t j1, size_t j2) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i1 > i2 || j1 > j2)
        throw Error("Invalid index!");

      if (i2 >= m_nrows || j2 >= m_ncols)
        throw Error("Invalid index!");

      int r = i2 - i1 + 1;
      int c = j2 - j1 + 1;

      Matrix s(r, c);

      for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
          s.m_data[i * c + j] = m_data[(i1 + i) * m_ncols + j1 + j];

      return s;
    }

    Matrix&
    Matrix::set(size_t i1, size_t i2, size_t j1, size_t j2, const Matrix& m)
    {
      if (isEmpty() || m.isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i1 > i2 || j1 > j2)
        throw Error("Invalid index!");

      if (i2 >= m_nrows || j2 >= m_ncols)
        throw Error("Invalid index!");

      // If data is already shared: there is nothing to do
      if (m_data == m.m_data)
        return *this;

      unsigned int r = i2 - i1 + 1;
      unsigned int c = j2 - j1 + 1;

      for (unsigned int i = 0; i < r; i++)
        for (unsigned int j = 0; j < c; j++)
          (*this)(i1 + i, j1 + j) = m.element(i, j);

      return *this;
    }

    Matrix&
    Matrix::blkDiag(const Matrix& mx_in)
    {
      Matrix old = *this;
      Matrix mx_in_ = mx_in;
      resizeAndFill(m_nrows + mx_in_.rows(), m_ncols + mx_in_.columns(), 0);

      if (!old.isEmpty())
        set(0, old.rows() - 1, 0, old.columns() - 1, old);
      set(old.rows(), old.rows() + mx_in_.rows() - 1, old.columns(), old.columns() + mx_in_.columns() - 1, mx_in_);

      return *this;
    }

    Matrix&
    Matrix::vertCat(const Matrix& mx_in)
    {
      if (m_ncols != mx_in.m_ncols && !isEmpty())
        throw Error("Invalid index!");

      Matrix old = *this;
      Matrix mx_in_ = mx_in;
      resizeAndFill(old.rows() + mx_in_.rows(), mx_in_.columns(), 0);

      if (!old.isEmpty())
        set(0, old.rows() - 1, 0, old.columns() - 1, old);
      set(old.rows(), old.rows() + mx_in_.rows() - 1, 0, mx_in_.columns() - 1, mx_in_);

      return *this;
    }

    Matrix&
    Matrix::horzCat(const Matrix& mx_in)
    {
      if (m_nrows != mx_in.m_nrows && !isEmpty())
        throw Error("Invalid index!");

      Matrix old = *this; //  <=> Matrix old(*this);
      Matrix mx_in_ = mx_in;
      resizeAndFill(mx_in_.rows(), m_ncols + mx_in.columns(), 0);

      if (!old.isEmpty())
        set(0, old.rows() - 1, 0, old.columns() - 1, old);
      set(0, mx_in_.rows() - 1, old.columns(), old.columns() + mx_in_.columns() - 1, mx_in_);

      return *this;
    }

    Matrix&
    Matrix::pow(unsigned int n)
    {
      if (m_nrows != m_ncols)
        throw Error("Matrix is not square!");

      Matrix power(m_nrows);

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
    Matrix::toFile(const char* path)
    {
      std::ofstream ofs(path);
      ofs << *this;
      ofs.close();
    }

    void
    Matrix::fromFile(const char* path)
    {
      std::ifstream ifs(path);
      ifs >> *this;
      ifs.close();
    }

    Matrix
    Matrix::row(size_t i) const
    {
      return get(i, i, 0, m_ncols - 1);
    }

    Matrix
    Matrix::column(size_t j) const
    {
      return get(0, m_nrows - 1, j, j);
    }

    void
    Matrix::swapColumns(size_t i, size_t j)
    {
      if (i >= m_ncols || j >= m_ncols)
        throw Error("Invalid index!");

      if (i == j)
        return;

      Matrix tmp = this->column(i);
      this->put(0, i, this->column(j));
      this->put(0, j, tmp);
    }

    void
    Matrix::swapRows(size_t i, size_t j)
    {
      if (i >= m_nrows || j >= m_nrows)
        throw Error("Invalid index!");

      if (i == j)
        return;

      Matrix tmp = this->row(i);
      this->put(i, 0, this->row(j));
      this->put(j, 0, tmp);
    }

    void
    Matrix::set_precision(double p)
    {
      if (p > 0)
        precision = p;
    }

    double
    Matrix::get_precision(void)
    {
      return precision;
    }

    void
    Matrix::resize(size_t r, size_t c)
    {
      erase();

      if ((!r && c) || (r && !c))
        throw Error("Invalid dimension!");

      m_nrows = r;
      m_ncols = c;
      m_size = r * c;
      m_data = ALLOCD(m_size + 1);

      m_counter = m_data + m_size;
      *m_counter = 1;
    }

    void
    Matrix::resizeAndKeep(size_t r, size_t c)
    {
      if (r == m_nrows && c == m_ncols)
        return;

      if (!isEmpty())
      {
        if ((!r && c) || (r && !c))
          throw Error("Invalid dimension!");

        // Row and Column values that will be kept.
        int nrows = std::min(m_nrows, r);
        int ncols = std::min(m_ncols, c);

        // Column difference.
        int clm_diff = c - m_ncols;

        // Matrix copy.
        double* newdata =  ALLOCD(m_size + 1);
        std::memcpy(newdata, m_data, m_size * sizeof(double));

        erase();

        m_nrows = r;
        m_ncols = c;
        m_size = r * c;
        m_data = ALLOCD(m_size + 1);

        m_counter = m_data + m_size;
        *m_counter = 1;

        fill(0);

        int itr = 0, icr = 0;
        for (int i = 0; i < nrows; ++i)
        {
          for (int j = 0; j < ncols; ++j)
          {
            m_data[(i * ncols + j) + icr] = newdata[itr];
            ++itr;
          }
          clm_diff > 0 ? icr += clm_diff : itr -= clm_diff;
        }

        std::free(newdata);
      }
      else
      {
        resize(r, c);
      }
    }

    void
    Matrix::resizeAndFill(size_t r, size_t c, double value)
    {
      resize(r, c);
      fill(value);
    }

    void
    Matrix::resize(const Matrix& m)
    {
      resize(m.m_nrows, m.m_ncols);
    }

    double&
    Matrix::operator()(size_t i, size_t j)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_nrows || j >= m_ncols)
        throw Error("Invalid index!");

      split();

      return m_data[i * m_ncols + j];
    }

    double
    Matrix::operator()(size_t i, size_t j) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_nrows || j >= m_ncols)
        throw Error("Invalid index!");

      return m_data[i * m_ncols + j];
    }

    double&
    Matrix::operator()(size_t i)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_size)
        throw Error("Invalid index!");

      split();

      return m_data[i];
    }

    double
    Matrix::operator()(size_t i) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_size)
        throw Error("Invalid index!");

      return m_data[i];
    }

    double
    Matrix::element(size_t i, size_t j) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_nrows || j >= m_ncols)
        throw Error("Invalid index!");

      return m_data[i * m_ncols + j];
    }

    double
    Matrix::element(size_t i)
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (i >= m_size)
        throw Error("Invalid index!");

      return m_data[i];
    }

    void
    Matrix::to_row(void)
    {
      if (!m_size)
        return;

      split();

      m_nrows = 1;
      m_ncols = m_size;
    }

    void
    Matrix::to_column(void)
    {
      if (!m_size)
        return;

      split();

      m_ncols = 1;
      m_nrows = m_size;
    }

    bool
    Matrix::operator==(const Matrix& m) const
    {
      if (m_size != m.m_size)
        return false;

      if (m_nrows != m.m_nrows)
        return false;

      if (m_ncols != m.m_ncols)
        return false;

      if (m_data == NULL)
      {
        if (m.m_data == NULL)
          return true;
        else
          return false;
      }
      else if (m.m_data == NULL)
        return false;

      return std::memcmp(m_data, m.m_data, m_size * sizeof(double)) == 0;
    }

    Matrix&
    Matrix::operator=(const Matrix& m)
    {
      if (m.m_size) // 'b' is valid
      {
        // 'a' is valid and data is already shared: there is nothing to do
        if (m_size && (m_data == m.m_data))
          return *this;

        // 'a' is invalid or data is not shared: "delete" 'a' and increase counter
        erase();

        m_nrows = m.m_nrows;
        m_ncols = m.m_ncols;
        m_size = m.m_size;
        m_data = m.m_data;
        m_counter = m.m_counter;
        (*m_counter)++;

        return *this;
      }
      else  // 'b' is invalid: "delete" 'a' and mark it invalid
      {
        erase();
        m_nrows = m_ncols = m_size = 0;
        return *this;
      }
    }

    Matrix&
    Matrix::operator+=(const Matrix& m)
    {
      if (m_nrows != m.m_nrows || m_ncols != m.m_ncols)
        throw Error("Incompatible dimensions!");

      split();

      double* p1 = m_data;
      double* p2 = m.m_data;

      for (size_t i = 0; i < m_size; i++)
        *(p1++) += *(p2++);

      return *this;
    }

    Matrix&
    Matrix::operator-=(const Matrix& m)
    {
      if (m_nrows != m.m_nrows || m_ncols != m.m_ncols)
        throw Error("Incompatible dimensions!");
      split();

      double* p1 = m_data;
      double* p2 = m.m_data;

      for (size_t i = 0; i < m_size; i++)
        *(p1++) -= *(p2++);

      return *this;
    }

    Matrix&
    Matrix::operator&=(const Matrix& m)
    {
      if (m_nrows != m.m_nrows || m_ncols != m.m_ncols)
        throw Error("Incompatible dimensions!");

      split();

      double* p1 = m_data;
      double* p2 = m.m_data;

      for (size_t i = 0; i < m_size; i++)
        *(p1++) *= *(p2++);

      return *this;
    }

    Matrix&
    Matrix::operator/=(const Matrix& m)
    {
      if (m_nrows != m.m_nrows || m_ncols != m.m_ncols)
        throw Error("Incompatible dimensions!");

      split();

      double* p1 = m_data;
      double* p2 = m.m_data;

      for (size_t i = 0; i < m_size; i++)
        *(p1++) /= *(p2++);

      return *this;
    }

    Matrix
    Matrix::operator-(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      Matrix tmp = -1 * *this;
      return tmp;
    }

    Matrix&
    Matrix::operator*=(double x)
    {
      split();

      double* p = m_data;

      for (size_t i = 0; i < m_size; i++)
        *(p++) *= x;

      return *this;
    }

    Matrix&
    Matrix::operator/=(double x)
    {
      split();

      double* p = m_data;

      for (size_t i = 0; i < m_size; i++)
        *(p++) /= x;

      return *this;
    }

    void
    Matrix::put(size_t i, size_t j, const Matrix& a)
    {
      if (a.isEmpty())
        return;

      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      split();

      size_t r = i + a.m_nrows;
      size_t c = j + a.m_ncols;

      if (r > m_nrows || c > m_ncols)
        throw Error("Invalid dimensions!");

      double* p = a.m_data;

      for (size_t ii = i; ii < r; ii++)
        for (size_t jj = j; jj < c; jj++)
          m_data[ii * m_ncols + jj] = *(p++);

      return;
    }

    Matrix
    Matrix::mminor(size_t i, size_t j) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Error("Matrix is not square!");

      if (i >= m_nrows || j >= m_ncols)
        throw Error("Invalid dimensions!");

      Matrix mi;
      size_t n = m_nrows - 1;
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

    void
    Matrix::lu(Matrix& L, Matrix& U) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Error(" matrix is not square!");

      Matrix A = *this;
      Matrix Lf(m_nrows), dI(m_nrows), P(m_nrows);
      dI = dI + dI;

      for (size_t i = 0; i < m_nrows - 1; i++)
      {
        /*
        // check if pivot == 0
        // if so, try to find a valid pivot
        // if no valid pivot found, matrix isn't invertible (quit)
        // update permutation matrix
        //
        */
        Matrix Lt(m_nrows);
        for (size_t j = i + 1; j < m_nrows; j++)
          Lt(j, i) = -A(j, i) / A(i, i);

        A = Lt * A;
        Lf = Lf * (dI - Lt);
      }

      U = A;
      L = Lf;
    }

    unsigned int
    Matrix::lup(Matrix& L, Matrix& U, Matrix& P) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Error(" matrix is not square!");

      unsigned int permutations = 0;
      Matrix A = *this;
      Matrix Lf(m_nrows), dI(m_nrows), Per(m_nrows);
      dI = dI + dI;

      for (size_t i = 0; i < m_nrows - 1; i++)
      {
        if (Matrix::precision >= std::fabs(A(i, i)))
        {
          bool p = 0;
          for (size_t k = i + 1; k < m_nrows; k++)
            if (Matrix::precision >= std::fabs(A(k, i)))
            {
              A.swapRows(i, k);
              Per.swapRows(i, k);
              p = true;
              break;
            }
          if (!p)
            throw Error("Matrix is not invertible!");
          else
            permutations++;
        }

        Matrix Lt(m_nrows); // gaussian matrix
        for (size_t j = i + 1; j < m_nrows; j++)
          Lt(j, i) = -A(j, i) / A(i, i);

        /*
          A = Lt * A;
          Lf = Lf * (dI - Lt);
        */
        A = Lt.multiply(A);
        Lf = Lf.multiply((dI - Lt)); // dI-Lt is the inverse of Lt (gaussian matrix)
      }

      P = Per;
      U = A;
      L = Lf;

      return permutations;
    }

    double
    Matrix::detr(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Error("Matrix is not square!");

      if (m_nrows == 1)
        return this->element(0, 0);
      else if (m_nrows == 2)
        return this->element(0, 0) * this->element(1, 1) - this->element(1, 0) * this->element(0, 1);
      else if (m_nrows == 3)
        return (this->element(0, 0) * this->element(1, 1) * this->element(2, 2)
                + this->element(0, 1) * this->element(1, 2) * this->element(2, 0)
                + this->element(0, 2) * this->element(1, 0) * this->element(2, 1)
                - this->element(2, 0) * this->element(1, 1) * this->element(0, 2)
                - this->element(2, 1) * this->element(1, 2) * this->element(0, 0)
                - this->element(2, 2) * this->element(1, 0) * this->element(0, 1));
      else
      {
        double d = 0;
        for (size_t j = 0; j < m_ncols; j++)
        {
          d += element(0, j) * std::pow(-1.0, (double)j) * (mminor(0, j)).detr();
        }
        return d;
      }
    }

    double
    Matrix::det(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Error("Matrix is not square!");

      if (m_nrows == 1)
        return this->element(0, 0);
      else if (m_nrows == 2)
        return this->element(0, 0) * this->element(1, 1) - this->element(1, 0) * this->element(0, 1);
      else if (m_nrows == 3)
        return (this->element(0, 0) * this->element(1, 1) * this->element(2, 2)
                + this->element(0, 1) * this->element(1, 2) * this->element(2, 0)
                + this->element(0, 2) * this->element(1, 0) * this->element(2, 1)
                - this->element(2, 0) * this->element(1, 1) * this->element(0, 2)
                - this->element(2, 1) * this->element(1, 2) * this->element(0, 0)
                - this->element(2, 2) * this->element(1, 0) * this->element(0, 1));
      else
      {
        Matrix L(m_nrows), U(m_nrows), P(m_nrows);
        unsigned int exp = this->lup(L, U, P);
        double dl = 1, du = 1;
        for (size_t i = 0; i < m_nrows; i++)
        {
          // if LUP is implemented using Doolittle's algorithm, dl = 1.
          dl = dl * L(i, i);
          du = du * U(i, i);
        }
        return std::pow(-1.0, (double)exp) * dl * du;
      }
    }

    bool
    Matrix::Sylvester(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Error("Matrix is not square!");

      if (m_nrows < 1)
        throw Error("Invalid dimensions!");

      Matrix m = *this;

      for (size_t i = m_nrows - 1; i > 0; i--)
      {
        if (m.det() <= 0)
          return false;
        else
          m = m.mminor(i, i);
      }

      return true;
    }

    Matrix
    Matrix::toDCM(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      // quaternion form to DCM
      if (m_nrows == 4 && m_ncols == 1)
      {
        double vals[4] = {element(0, 0), element(1, 0), element(2, 0), element(3, 0)};
        double v[9] =
        {
          vals[0] * vals[0] + vals[1] * vals[1] - vals[2] * vals[2] - vals[3] * vals[3],
          2 * (vals[1] * vals[2] - vals[0] * vals[3]),
          2 * (vals[1] * vals[3] + vals[0] * vals[2]),
          2 * (vals[1] * vals[2] + vals[0] * vals[3]),
          vals[0] * vals[0] - vals[1] * vals[1] + vals[2] * vals[2] - vals[3] * vals[3],
          2 * (vals[2] * vals[3] - vals[0] * vals[1]),
          2 * (vals[1] * vals[3] - vals[0] * vals[2]),
          2 * (vals[2] * vals[3] + vals[0] * vals[1]),
          vals[0] * vals[0] - vals[1] * vals[1] - vals[2] * vals[2] + vals[3] * vals[3]
        };

        return Matrix(v, 3, 3);
      }

      // Euler angles to DCM
      if (m_nrows == 3 && m_ncols == 1)
      {
        double vals[3] = {element(0, 0), element(1, 0), element(2, 0)};
        double cr = std::cos(vals[0]);
        double sr = std::sin(vals[0]);
        double cp = std::cos(vals[1]);
        double sp = std::sin(vals[1]);
        double cy = std::cos(vals[2]);
        double sy = std::sin(vals[2]);

        double rx[9] = {1, 0, 0, 0, cr, sr, 0, -sr, cr};
        double ry[9] = {cp, 0, -sp, 0, 1, 0, sp, 0, cp};
        double rz[9] = {cy, sy, 0, -sy, cy, 0, 0, 0, 1};

        return transpose(Matrix(rx, 3, 3) * Matrix(ry, 3, 3) * Matrix(rz, 3, 3));
      }

      throw Error("source matrix is neither in quaternion or Euler angle form!");
    }

    Matrix
    Matrix::toQuaternion(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      // Euler angles to quaternion
      if (3 == m_nrows && 1 == m_ncols)
      {
        double ea[3] = {element(0, 0), element(1, 0), element(2, 0)};

        double cr = std::cos(ea[0] / 2);
        double sr = std::sin(ea[0] / 2);
        double cp = std::cos(ea[1] / 2);
        double sp = std::sin(ea[1] / 2);
        double cy = std::cos(ea[2] / 2);
        double sy = std::sin(ea[2] / 2);

        double q[4] = {cr * cp * cy + sr * sp * sy,
                       sr * cp * cy - cr * sp * sy,
                       cr * sp * cy + sr * cp * sy,
                       cr * cp * sy - sr * sp * cy};

        return Matrix(q, 4, 1);
      }

      // DCM to quaternion
      if (3 == m_nrows && 3 == m_ncols)
      {
        double q4 = 0.5 * std::sqrt(1 + element(0, 0) + element(1, 1) + element(2, 2));
        double k = 1 / (4 * q4);
        double q[4] =
        {
          k * (element(1, 2) - element(2, 1)),
          k * (element(2, 0) - element(0, 2)),
          k * (element(0, 1) - element(1, 0)),
          q4
        };

        return Matrix(q, 4, 1);
      }

      throw Error("source matrix is neither in quaternion or Euler angle form!");
    }

    Matrix
    Matrix::toEulerAngles(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      // DCM to Euler angles
      if (m_nrows == 3 && m_ncols == 3)
      {
        double k = element(2, 0);

        double ea[3] =
        {
          std::atan2(element(2, 1), element(2, 2)),
          -std::atan(k / std::sqrt(1 - k * k)),
          std::atan2(element(1, 0), element(0, 0))
        };

        return Matrix(ea, 3, 1);
      }

      // Quaternion to Euler angles
      if (m_nrows == 4 && m_ncols == 1)
      {
        double norm = norm_p(2);
        double q[4] = {element(0, 0) / norm,
                       element(1, 0) / norm,
                       element(2, 0) / norm,
                       element(3, 0) / norm};

        double roll = std::atan2(2 * (q[0] * q[1] + q[2] * q[3]), 1 - 2 * (q[1] * q[1] + q[2] * q[2]));

        double pitch = 2 * (q[0] * q[2] - q[3] * q[1]);
        if (std::fabs(pitch) >= 1)
          pitch = c_half_pi * pitch / std::fabs(pitch);
        else
          pitch = std::asin(pitch);

        double yaw =  std::atan2(2 * (q[0] * q[3] + q[1] * q[2]), 1 - 2 * (q[2] * q[2] + q[3] * q[3]));

        double ea[3] = { roll, pitch, yaw };

        return Matrix(ea, 3, 1);
      }

      throw Error("source matrix is neither in quaternion or Euler angle form!");
    }

    Matrix
    Matrix::expmts(double tol) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Error("source matrix is not square!");

      double n2 = norm_p(2);

      unsigned int m = computeNextPowerOfTwo((uint32_t)n2);

      if (m > 1)
      {
        Matrix eA = *this;
        eA *= (1.0 / m);
        eA = eA.expmts(); // scaling

        for (unsigned int i = 1; i < m; i = i << 1)
          eA = eA * eA;  // squaring
        return eA;
      }

      Matrix eA(m_nrows);
      Matrix A(m_nrows);
      n2 = 1;
      double inv_f = 1;
      int i = 0;

      while (true)
      {
        inv_f = inv_f * (1.0 / ++i);
        A = A * (*this);
        eA = eA + inv_f * A;

        double n2b = eA.norm_p(2);

        if (std::fabs(n2b - n2) < tol)
          break;
        n2 = n2b;
      }
      return eA;
    }

    double
    Matrix::norm_p(double p) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (p < 1)
        throw Error("Incompatible value for p!");

      double n = 0;
      for (unsigned int i = 0; i < m_size; i++)
        n += std::pow(std::abs(m_data[i]), p);
      return std::pow(n, 1 / p);
    }

    double
    Matrix::norm_2(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      double n = 0;
      for (unsigned int i = 0; i < m_size; i++)
        n += m_data[i] * m_data[i];
      return std::sqrt(n);
    }

    double
    Matrix::norm_inf(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      double m = 0;
      for (unsigned int i = 0; i < m_size; i++)
        m = std::max(std::abs(m_data[i]), m);

      return m;
    }

    double
    Matrix::median(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      double* p = m_data;
      return DUNE::Math::median(p, m_size);
    }

    double
    Matrix::trace(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (!isSquare())
        throw Error("not a square matrix!");

      double v = 0;
      for (size_t i = 0; i < m_nrows; i++)
        v += m_data[i * (m_nrows + 1)];
      return v;
    }

    Matrix
    Matrix::multiply(const Matrix& m2)
    {
      if (isEmpty() || m2.isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_ncols != m2.m_nrows)
        throw Matrix::Error("Incompatible dimensions!");

      Matrix s(m_nrows, m2.m_ncols);

      int n = m_nrows;
      int m = m_ncols;
      int r = m2.m_ncols;

      double* m1_p = m_data;

      for (int i = 0; i < n; i++)
      {
        for (int k = 0; k < m; k++)
        {
          double v = *m1_p++; // <-> v = m1(i,k)
          double* m2_p = m2.m_data + k * r;
          double* s_p = s.m_data + i * r;

          // not pretty, but hopefully faster
          if (std::fabs(v) <= precision)
          {
            if (!k)
            {
              for (int j = 0; j < r; j++)
              {
                *s_p = 0;
                s_p++;
              }
            }
          }
          else
            for (int j = 0; j < r; j++)
            {
              if (!k)
                *s_p = 0;
              *s_p += v * (*m2_p); // <-> s(i,j) += m1(i,k) * m2(k,j)
              s_p++;
              m2_p++;
            }
        }
      }
      return s;
    }

    Matrix
    operator+(const Matrix& m1, const Matrix& m2)
    {
      if (m1.isEmpty() || m2.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (m1.m_nrows != m2.m_nrows || m1.m_ncols != m2.m_ncols)
        throw Matrix::Error("Incompatible dimensions!");

      Matrix s(m1.m_nrows, m1.m_ncols);

      int size = s.m_size;
      double* p = s.m_data;
      double* p1 = m1.m_data;
      double* p2 = m2.m_data;

      for (int i = 0; i < size; i++)
        *(p++) = *(p1++) + *(p2++);

      return s;
    }

    Matrix
    operator-(const Matrix& m1, const Matrix& m2)
    {
      if (m1.isEmpty() || m2.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (m1.m_nrows != m2.m_nrows || m1.m_ncols != m2.m_ncols)
        throw Matrix::Error("Incompatible dimensions!");

      Matrix s(m1.m_nrows, m1.m_ncols);

      int size = s.m_size;
      double* p = s.m_data;
      double* p1 = m1.m_data;
      double* p2 = m2.m_data;

      for (int i = 0; i < size; i++)
        *(p++) = *(p1++) - *(p2++);

      return s;
    }

    Matrix
    operator*(const Matrix& m1, const Matrix& m2)
    {
      if (m1.isEmpty() || m2.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (m1.m_ncols != m2.m_nrows)
        throw Matrix::Error("Incompatible dimensions!");

      Matrix s(m1.m_nrows, m2.m_ncols);

      int n = m1.m_nrows;
      int m = m1.m_ncols;
      int r = m2.m_ncols;

      double* m1_p = m1.m_data;

      for (int i = 0; i < n; i++)
      {
        for (int k = 0; k < m; k++)
        {
          double v = *m1_p++; // <-> v = m1(i,k)
          double* m2_p = m2.m_data + k * r;
          double* s_p = s.m_data + i * r;

          for (int j = 0; j < r; j++)
          {
            if (!k)
              *s_p = 0;
            *s_p += v * (*m2_p); // <-> s(i,j) += m1(i,k) * m2(k,j)
            s_p++;
            m2_p++;
          }
        }
      }
      return s;
    }

    Matrix
    operator&(const Matrix& m1, const Matrix& m2)
    {
      if (m1.isEmpty() || m2.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (m1.m_nrows != m2.m_nrows || m1.m_ncols != m2.m_ncols)
        throw Matrix::Error("Incompatible dimensions!");

      Matrix s(m1.m_nrows, m1.m_ncols);

      int size = s.m_size;
      double* p = s.m_data;
      double* p1 = m1.m_data;
      double* p2 = m2.m_data;

      for (int i = 0; i < size; i++)
        *(p++) = *(p1++) * *(p2++);

      return s;
    }

    Matrix
    operator/(const Matrix& a, const Matrix& b)
    {
      if (a.isEmpty() || b.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (a.m_nrows != b.m_nrows || a.m_ncols != b.m_ncols)
        throw Matrix::Error("Incompatible dimensions!");

      Matrix s(a.m_nrows, a.m_ncols);

      int size = s.m_size;
      double* p = s.m_data;
      double* p1 = a.m_data;
      double* p2 = b.m_data;

      for (int i = 0; i < size; i++)
        *(p++) = *(p1++) / *(p2++);

      return s;
    }

    Matrix
    operator*(double x, const Matrix& a)
    {
      Matrix s(a);

      s *= x;

      return s;
    }

    Matrix
    operator*(const Matrix& a, double x)
    {
      Matrix s(a);

      s *= x;

      return s;
    }

    Matrix
    operator/(const Matrix& a, double x)
    {
      Matrix s(a);

      s /= x;

      return s;
    }

    std::ostream&
    operator<<(std::ostream& os, const Matrix& a)
    {
      int n = a.m_nrows;
      int m = a.m_ncols;
      double* p = a.m_data;

      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
          os << *(p++) << " ";
        os << std::endl;
      }

      return os;
    }

    std::istream&
    operator>>(std::istream& is, Matrix& a)
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
            a.vertCat(Matrix(&elements[0], 1, elements.size()));
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
        a.vertCat(Matrix(&elements[0], 1, elements.size()));

      return is;
    }

    Matrix
    transpose(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      int n = a.m_nrows;
      int m = a.m_ncols;

      Matrix t(m, n);

      for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
          (t.m_data + j * n)[i] = (a.m_data + i * m)[j];

      return t;
    }

    bool
    Matrix::isInvertible(void) const
    {
      if (isEmpty())
        throw Error("Trying to access an empty matrix!");

      if (m_nrows != m_ncols)
        throw Matrix::Error("Inversion of a nonsquare Matrix!");

      int n = m_nrows;
      double* M = ALLOCD(2 * n * n);
      double* p1 = M;
      double* p2 = m_data;

      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
          *p1 = *p2;
          *(p1 + n) = (i == j) ? 1 : 0;
          p1++;
          p2++;
        }

        p1 += n;
      }

      int rv = upper_triangular_pp(M, n, n + n, Matrix::precision);

      std::free(M);

      return rv == 0;
    }

    Matrix
    inverse_pp(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (a.m_nrows != a.m_ncols)
        throw Matrix::Error("Inversion of a nonsquare Matrix!");

      int n = a.m_nrows;
      double* M = ALLOCD(2 * n * n);
      double* p1 = M;
      double* p2 = a.m_data;

      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
          *p1 = *p2;
          *(p1 + n) = (i == j) ? 1 : 0;
          p1++;
          p2++;
        }
        p1 += n;
      }

      int result = Math::Matrix::upper_triangular_pp(M, n, n + n, Matrix::precision);

      Matrix s(n, n);

      if (result)  // singular Matrix
      {
        std::free(M);
        throw Matrix::Error("Inversion error!");
      }

      p1 = s.m_data;
      p2 = M;
      int n2 = n + n;

      for (int j = 0; j < n; j++)
        for (int i = n - 1; i >= 0; i--)
        {
          double* p = p1 + n * i + j;
          *p = p2[i * n2 + n + j];
          for (int ii = i + 1; ii < n; ii++)
            *p -= p2[n2 * i + ii] * p1[n * ii + j];
          *p /= p2[n2 * i + i];
        }

      std::free(M);
      return s;
    }

    Matrix
    inverse_pp(const Matrix& a, const Matrix& b)
    {
      if (a.isEmpty() || b.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (a.m_nrows != a.m_ncols)
        throw Matrix::Error("Inversion of a nonsquare Matrix!");

      if (a.m_nrows != b.m_nrows)
        throw Matrix::Error("Incompatible dimensions!");

      int n = a.m_nrows;
      int m = b.m_ncols;
      double* M = ALLOCD(n * (n + m));

      double* p1 = M;
      double* p2 = a.m_data;
      double* p3 = b.m_data;
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
          *(p1++) = *(p2++);

        for (int j = 0; j < m; j++)
          *(p1++) = *(p3++);
      }

      int result = Math::Matrix::upper_triangular_pp(M, n, n + m, Matrix::precision);

      Matrix s(n, m);

      if (result)  // singular Matrix
      {
        std::free(M);
        throw Matrix::Error("Inversion error!");
      }

      p1 = s.m_data;
      p2 = M;
      int n2 = n + m;

      for (int j = 0; j < m; j++)
        for (int i = n - 1; i >= 0; i--)
        {
          double* p = p1 + m * i + j;
          *p = p2[i * n2 + n + j];
          for (int ii = i + 1; ii < n; ii++)
            *p -= p2[n2 * i + ii] * p1[m * ii + j];
          *p /= p2[n2 * i + i];
        }

      std::free(M);
      return s;
    }

    Matrix
    inverse(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (a.m_nrows != a.m_ncols)
        throw Matrix::Error("Inversion of a nonsquare Matrix!");

      int n = a.m_nrows;
      double* M = ALLOCD(2 * n * n);
      int* index = ALLOCI(n);

      double* p1 = M;
      double* p2 = a.m_data;

      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
          *p1 = *p2;
          *(p1 + n) = (i == j) ? 1 : 0;
          p1++;
          p2++;
        }
        p1 += n;
        index[i] = i;
      }

      int result = Math::Matrix::upper_triangular_tp(M, index, n, n + n, Matrix::precision);

      Matrix s(n, n);

      if (result)  // singular Matrix
      {
        std::free(index);
        std::free(M);
        throw Matrix::Error("Inversion error!");
      }

      p1 = s.m_data;
      p2 = M;
      int n2 = n + n;

      for (int j = 0; j < n; j++)
        for (int i = n - 1; i >= 0; i--)
        {
          double* p = p1 + n * index[i] + j;
          *p = p2[i * n2 + n + j];
          for (int ii = i + 1; ii < n; ii++)
            *p -= p2[n2 * i + ii] * p1[n * index[ii] + j];
          *p /= p2[n2 * i + i];
        }

      std::free(index);
      std::free(M);
      return s;
    }

    Matrix
    inverse(const Matrix& a, const Matrix& b)
    {
      if (a.isEmpty() || b.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (a.m_nrows != a.m_ncols)
        throw Matrix::Error("Inversion of a nonsquare Matrix!");

      if (a.m_nrows != b.m_nrows)
        throw Matrix::Error("Incompatible dimensions!");

      int n = a.m_nrows;
      int m = b.m_ncols;
      double* M = ALLOCD(n * (n + m));
      int* index = ALLOCI(n);

      double* p1 = M;
      double* p2 = a.m_data;
      double* p3 = b.m_data;
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
          *(p1++) = *(p2++);
        for (int j = 0; j < m; j++)
          *(p1++) = *(p3++);
        index[i] = i;
      }

      int result = Math::Matrix::upper_triangular_tp(M, index, n, n + m, Matrix::precision);

      Matrix s(n, m);

      if (result)  // singular Matrix
      {
        std::free(index);
        std::free(M);
        throw Matrix::Error("Inversion error!");
      }

      p1 = s.m_data;
      p2 = M;
      int n2 = n + m;

      for (int j = 0; j < m; j++)
        for (int i = n - 1; i >= 0; i--)
        {
          double* p = p1 + m * index[i] + j;
          *p = p2[i * n2 + n + j];
          for (int ii = i + 1; ii < n; ii++)
            *p -= p2[n2 * i + ii] * p1[m * index[ii] + j];
          *p /= p2[n2 * i + i];
        }

      std::free(index);
      std::free(M);
      return s;
    }

    Matrix
    skew(const double data[3])
    {
      Matrix m(3, 3, 0.0);
      m(0, 1) = -data[2];
      m(0, 2) = data[1];
      m(1, 0) = data[2];
      m(1, 2) = -data[0];
      m(2, 0) = -data[1];
      m(2, 1) = data[0];

      return m;
    }

    Matrix
    skew(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (!((a.m_nrows == 1 && a.m_ncols == 3) || (a.m_nrows == 3 && a.m_ncols == 1)))
        throw Matrix::Error("Matrix must be 3x1 or 1x3 to create a skew symmetrical!");

      double data[3] = {a(0), a(1), a(2)};

      return skew(data);
    }

    Matrix
    inverse_lup(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      if (a.m_nrows != a.m_ncols)
        throw Matrix::Error("Inversion of a nonsquare Matrix!");

      int n = a.m_nrows;

      Matrix L(n);
      Matrix U(n);
      Matrix P(n);

      a.lup(L, U, P);

      double* y = ALLOCD(n);
      double* l = L.m_data;
      double* u = U.m_data;
      double* p = P.m_data;

      Matrix Minv(n, n);
      double* m = Minv.m_data;

      for (int k = 0; k < n; k++)
      {
        for (int j = 0; j < n; j++)
        {
          y[j] = p[j * n + k];

          for (int i = 0; i < j; i++)
            y[j] -= l[j * n + i] * y[i];

          y[j] /= l[j * n + j];
        }

        for (int j = n - 1; j >= 0; j--)
        {
          m[j * n + k] = y[j];
          for (int i = j + 1; i < n; i++)
            m[j * n + k] -= u[j * n + i] * m[i * n + k];

          if (Matrix::precision >= std::fabs(u[j * n + j]))
            throw Matrix::Error("Matrix is not invertible!");
          else
            m[j * n + k] /= u[j * n + j];
        }
      }

      std::free(y);

      return Minv;
    }

    Matrix
    abs(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      Matrix s(a.m_nrows, a.m_ncols);

      for (size_t i = 0; i < a.m_size; i++)
      {
        s.m_data[i] = std::fabs(a.m_data[i]);
      }

      return s;
    }

    double
    max(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      double* p = a.m_data;
      double m = *(p++);
      int size = a.m_size;

      for (int i = 1; i < size; i++)
      {
        double m1;
        if ((m1 = *(p++)) > m)
          m = m1;
      }

      return m;
    }

    double
    min(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      double* p = a.m_data;
      double m = *(p++);
      int size = a.m_size;

      for (int i = 1; i < size; i++)
      {
        double m1;
        if ((m1 = *(p++)) < m)
          m = m1;
      }

      return m;
    }

    double
    sum(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      double* p = a.m_data;
      double s = 0;
      int size = a.m_size;

      for (int i = 0; i < size; i++)
        s += *(p++);

      return s;
    }

    double
    squaresum(const Matrix& a)
    {
      if (a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      double* p = a.m_data;
      double ss = 0;
      int size = a.m_size;

      for (int i = 0; i < size; i++)
      {
        double s = *(p++); ss += s * s;
      }

      return ss;
    }

    int
    Matrix::upper_triangular_pp(double* M, int n, int m, double tolerance)
    {
      for (int i = 0; i < n; i++)
      {
        int ii = i;
        double p = std::fabs(M[i * m + i]);

        for (int j = i + 1; j < n; j++)
        {
          double t;

          if ((t = std::fabs(M[j * m + i])) > p)
          {
            p = t;
            ii = j;
          }
        }

        if (p <= tolerance)
          return -1;

        if (i != ii)
          for (int j = i; j < m; j++)
          {
            double t = M[i * m + j];
            M[i * m + j] = M[ii * m + j];
            M[ii * m + j] = t;
          }

        for (ii = i + 1; ii < n; ii++)
        {
          double f = M[ii * m + i] / M[i * m + i];
          for (int j = i + 1; j < m; j++)
            M[ii * m + j] -= f * M[i * m + j];
        }
      }

      return 0;
    }

    int
    Matrix::upper_triangular_tp(double* M, int* index, int n, int m, double tolerance)
    {
      for (int i = 0; i < n; i++)
      {
        int ii = i;
        int jj = i;
        double p = std::fabs(M[i * m + i]);

        for (int k = i; k < n; k++)
          for (int j = i; j < n; j++)
          {
            double t;
            if ((t = std::fabs(M[k * m + j])) > p)
            {
              p = t;
              ii = k;
              jj = j;
            }
          }

        if (p <= tolerance)
          return -1;

        if (i != ii)
          for (int j = i; j < m; j++)
          {
            double t = M[i * m + j];
            M[i * m + j] = M[ii * m + j];
            M[ii * m + j] = t;
          }

        if (i != jj)
        {
          for (int k = 0; k < n; k++)
          {
            double t = M[k * m + i];
            M[k * m + i] = M[k * m + jj];
            M[k * m + jj] = t;
          }

          int k = index[i];
          index[i] = index[jj];
          index[jj] = k;
        }

        for (ii = i + 1; ii < n; ii++)
        {
          double f = M[ii * m + i] / M[i * m + i];
          for (int j = i + 1; j < m; j++)
            M[ii * m + j] -= f * M[i * m + j];
        }
      }

      return 0;
    }

    double
    Matrix::dot(const Matrix& a, const Matrix& b)
    {
      if (a.isEmpty() || a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      // Check if a and b are both column vectors or row vectors
      if (!a.isVector() || a.m_nrows != b.m_nrows || a.m_ncols != b.m_ncols)
        throw Error("Invalid arguments for dot product!");

      double v = 0;
      double* pa = a.m_data, * pb = b.m_data, * end = pa + a.m_size;

      while (pa != end)
      {
        v += (*pa) * (*pb);
        ++pa;
        ++pb;
      }

      return v;
    }

    Matrix
    Matrix::cross(const Matrix& a, const Matrix& b)
    {
      if (a.isEmpty() || a.isEmpty())
        throw Matrix::Error("Trying to access an empty matrix!");

      // Check if a and b are both column vectors or row vectors
      if (!a.isVector() || !b.isVector())
        throw Error("unable cross product matrices that are not vectors!");

      if (a.size() != 3 || b.size() != 3)
        throw Error("vectors are not 3D!");

      Matrix v;
      v.resizeAndFill(a.rows(), a.columns(), 0.0);

      v(0) = a(1) * b(2) - a(2) * b(1);
      v(1) = a(2) * b(0) - a(0) * b(2);
      v(2) = a(0) * b(1) - a(1) * b(0);

      return v;
    }

    void
    Matrix::readFromLines(const std::vector<std::string>& clines)
    {
      if (isEmpty())
        throw Error("dimensions of the matrix must be defined first!");

      if (clines.size() != m_nrows)
        throw Error("Invalid number of rows in configuration!");

      std::vector<double> rvalues;

      double* p = m_data;

      for (size_t r = 0; r < clines.size(); ++r)
      {
        // Parse row in configuration line
        DUNE::Utils::String::split(clines[r], " ", rvalues);

        if (rvalues.size() != m_ncols)
          throw Error(Utils::String::str("Invalid number of columns in configuration - row: %d", r));

        for (size_t c = 0; c < m_ncols; ++c)
          *p++ = rvalues[c];
        rvalues.clear();
      }
    }

    void
    Matrix::readFromConfig(DUNE::Parsers::Config& cfg, const std::string& section, const std::string& param)
    {
      // Read configuration lines, each defining a matrix row.
      std::vector<std::string> clines;
      cfg.get(section, param, "", clines);

      this->readFromLines(clines);
    }
  }
}
