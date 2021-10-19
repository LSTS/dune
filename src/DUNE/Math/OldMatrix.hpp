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
// Author: Rui Gomes (OldMatrix concatenation)                                 *
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MATH_OLDMATRIX_HPP_INCLUDED_
#define DUNE_MATH_OLDMATRIX_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  // Forward declarations.
  namespace Parsers { class Config; }

  namespace Math
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM OldMatrix;

    class OldMatrix
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(const std::string& msg):
          std::runtime_error("matrix error: " + msg)
        { }
      };

      //! Constructor.
      //! Construct a zero sized matrix.
      OldMatrix(void);

      //! Constructor.
      //! Create a OldMatrix of the same dimension of another OldMatrix. It
      //! simply sets the new data pointer to the old data and
      //! increases the copy counter.
      //! @param[in] m reference to matrix
      OldMatrix(const OldMatrix& m);

      //! Constructor.
      //! Create a OldMatrix of dimension (rows * columns)
      //! and fills it with the data pointed by 'data'.
      //! @param[in] data pointer to data to be copied to new matrix
      //! @param[in] r number of rows of new matrix
      //! @param[in] c number of columns of new matrix
      OldMatrix(const double* data, size_t r, size_t c);

      //! Constructor.
      //! Construct a matrix of size rows*columns.
      //! @param[in] r number of rows of new matrix
      //! @param[in] c number of columns of new matrix
      OldMatrix(size_t r, size_t c);

      //! Constructor.
      //! Construct a matrix of size rows * columns filled with constant value.
      //! @param[in] r number of rows of new matrix
      //! @param[in] c number of rows of new matrix
      //! @param[in] v value used to initialize cells.
      OldMatrix(size_t r, size_t c, double v);

      //! Constructor.
      //! Construct a square identity matrix of size n
      //! param[in] n size of new matrix (n * n)
      explicit OldMatrix(size_t n);

      //! Constructor.
      //! Construct a diagonal matrix using the values in data
      //! param[in] diag pointer to data to be copied to diagonal matrix
      //! param[in] n size of new matrix (n * n)
      OldMatrix(const double* diag, size_t n);

      //! Destructor.
      //! Decrement the number of copies of a OldMatrix and frees the
      //! allocated memory if this number reaches zero.
      ~OldMatrix(void);

      //! Pointer to first element.
      double*
      begin(void);

      //! Pointer to element after last element.
      double*
      end(void);

      //! Const pointer to first element.
      const double*
      begin(void) const;

      //! Const pointer to element after last element.
      const double*
      end(void) const;

      //! Const pointer to first element.
      const double*
      cbegin(void) const;

      //! Const pointer to element after last element.
      const double*
      cend(void) const;

      //! Retrieve the number of rows of the matrix.
      //! @return number of rows of the matrix.
      int
      rows(void) const;

      //! Retrieve the number of columns of the matrix.
      //! @return number of columns of the matrix.
      int
      columns(void) const;

      //! Retrieve the size of the matrix
      //! @return size of the matrix.
      int
      size(void) const;

      //! Return true for empty matrices.
      //! @return return true for empty matrices, false
      //! otherwise.
      bool
      isEmpty(void) const;

      //! Fill the OldMatrix with a constant value.
      //! @param[in] value constant value to fill matrix with
      void
      fill(double value);

      //! Resize matrix and fill with new values.
      //! @param[in] r number of rows of resized matrix
      //! @param[in] c number of columns of resized matrix
      //! @param[in] data pointer to data to be copied to resized matrix
      void
      fill(size_t r, size_t c, const double* data = 0);

      //! Turns the OldMatrix into an identity matrix if it is squared.
      void
      identity(void);

      //! Limit the maximum OldMatrix elements values
      //! @param[in] max maximum value
      void
      maxLimitValues(double max);

      //! Limit the minimum OldMatrix elements values
      //! @param[in] min minimum value
      void
      minLimitValues(double min);

      //! Limit the minimum and maximum OldMatrix elements' values
      //! @param[in] min minimum value
      //! @param[in] max maximum value
      void
      trimValues(double min, double max);

      //! Limit the minimum and maximum OldMatrix elements' values
      //! @param[in] lim absolute limit value
      void
      trimValues(double lim);

      //! Retrieve a submatrix.
      //! @param[in] i1 initial row
      //! @param[in] i2 final row
      //! @param[in] j1 initial column
      //! @param[in] j2 final column
      //! @return submatrix
      OldMatrix
      get(size_t i1, size_t i2, size_t j1, size_t j2) const;

      //! Set a submatrix.
      //! @param[in] i1 initial row
      //! @param[in] i2 final row
      //! @param[in] j1 initial column
      //! @param[in] j2 final column
      //! @param[in] m_in reference to matrix to be copied into submatrix
      //! @return reference matrix
      OldMatrix&
      set(size_t i1, size_t i2, size_t j1, size_t j2, const OldMatrix& m_in);

      //! Returns the diagonal concatenation of a matrix
      //! Return a matrix of size (nrows + rows(m_in)) x (ncolumns +columns(m_in))
      //! and fills the remaining elements with zeros.
      //! @param[in] m_in reference to matrix
      //! @return reference to diagonal concatenation of matrix
      OldMatrix&
      blkDiag(const OldMatrix& m_in);

      //! Returns the vertical concatenation of a matrix
      //! Return a matrix of size (nrows + rows(m_in)) x (ncolumns)
      //! and fills the remaining elements with zeros.
      //! @param[in] m_in reference to matrix
      //! @return reference to vertical concatenation of matrix
      OldMatrix&
      vertCat(const OldMatrix& m_in);

      //! Returns the horizontal concatenation of a matrix
      //! Return a matrix of size (nrows x (ncolumns + columns(m_in)) )
      //! and fills the remaining elements with zeros.
      //! @param[in] m_in reference to matrix
      //! @return reference to vertical concatenation of matrix
      OldMatrix&
      horzCat(const OldMatrix& m_in);

      //! Returns the power matrix X^n.
      //! @param[in] n positive integer exponent to raise the matrix to
      //! @return reference to the power of the matrix
      OldMatrix&
      pow(unsigned int n);

      //! Saves matrix to text file.
      //! @param[in] path file path string (eg: "E:\dir/x.txt").
      void
      toFile(const char* path);

      //! Loads a matrix from text file (must initialize matrix
      //! dimensions first).
      //! @param[in] path file path string (eg: "E:\dir/x.txt").
      void
      fromFile(const char* path);

      //! Read a matrix from a vector of strings
      //! The matrix dimensions must be defined a priori.
      //! @param[in] clines vector of strings containing the matrix data
      void
      readFromLines(const std::vector<std::string>& clines);

      //! Read a matrix from a configuration file.
      //! The matrix dimensions must be defined a priori.
      //! @param[in] cfg configuration parser
      //! @param[in] section configuration section
      //! @param[in] param configuration parameter
      void
      readFromConfig(DUNE::Parsers::Config& cfg, const std::string& section, const std::string& param);

      //! This method returns a row of the OldMatrix.
      //! @param[in] i row to be retrieved
      //! @return matrix of the returned row
      OldMatrix
      row(size_t i) const;

      //! This method returns a column of the OldMatrix.
      //! @param[in] j column to be retrieved
      //! @return matrix of the returned column
      OldMatrix
      column(size_t j) const;

      //! This method swaps two columns.
      //! @param[in] i index of column
      //! @param[in] j index of column
      void
      swapColumns(size_t i, size_t j);

      //! This method swaps two rows.
      //! @param[in] i index of row
      //! @param[in] j index of row
      void
      swapRows(size_t i, size_t j);

      //! This method sets the precision used when inverting a OldMatrix.
      //! @param[in] p value of the precision to be used when inverting
      static void
      set_precision(double p);

      //! This method returns the precision currently in use.
      //! @return value of the precision in use
      static double
      get_precision(void);

      //! This method resizes a OldMatrix to the same dimensions of other matrix.
      //! Note that no data copy is performed.
      //! @param[in] m reference to matrix
      void
      resize(const OldMatrix& m);

      //! This method resizes a OldMatrix to the dimensions of (r * c).
      //! @param[in] r number of rows
      //! @param[in] c number of columns
      void
      resize(size_t r, size_t c);

      //! This method resizes a OldMatrix to the dimensions of (r * c)
      //! and keeps previous matrix values if/when possible.
      //! @param[in] r number of rows
      //! @param[in] c number of columns
      void
      resizeAndKeep(size_t r, size_t c);

      //! This method resizes a OldMatrix to the dimensions of (r * c)
      //! and fills the matrix with constant value
      //! @param[in] r number of rows
      //! @param[in] c number of columns
      //! @param[in] value constant value to fill matrix with
      void
      resizeAndFill(size_t r, size_t c, double value);

      //! This operator returns a reference to a given entry of a OldMatrix.
      //!
      //! As this methods makes possible to change the entries of a OldMatrix
      //! a spliting is necessary to avoid corrupting other matrices sharing
      //! the same data.
      //!
      //! Note: As this method returns a reference it is very powerful, and it can
      //!       be used to gain access to the pointer to the OldMatrix entries. This
      //!       use can be dangerous because the data of a given matrix can move
      //!       from place to place due to splitting.
      //!
      //! @param[in] i row index
      //! @param[in] j column index
      //! @return reference to entry of a matrix
      double&
      operator()(size_t i, size_t j);

      //! This routine returns a value of the matrix.
      //! @param[in] i row index
      //! @param[in] j column index
      //! @return value of matrix
      double
      operator()(size_t i, size_t j) const;

      //! This operator returns a reference to a given entry of a OldMatrix.
      //!
      //! As this methods makes possible to change the entries of a OldMatrix
      //! a spliting is necessary to avoid corrupting other matrices sharing
      //! the same data.
      //!
      //! Note: As this method returns a reference it is very powerful, and it can
      //!       be used to gain access to the pointer to the OldMatrix entries. This
      //!       use can be dangerous because the data of a given matrix can move
      //!       from place to place due to splitting.
      //!
      //! @param[in] i matrix index
      //! @return reference to entry of a matrix
      double&
      operator()(size_t i);

      //! This routine returns a value of the matrix.
      //! @param[in] i matrix index
      //! @return value of matrix
      double
      operator()(size_t i) const;

      //! This method returns the value of an entry of a OldMatrix.
      //! As this is a reading method it does not care if the data is shared by
      //! other matrices.
      //! @param[in] i row index
      //! @param[in] j column index
      //! @return value of matrix
      double
      element(size_t i, size_t j) const;

      //! This method returns the value of an entry of a OldMatrix.
      //! As this is a reading method it does not care if the data is shared by
      //! other matrices.
      //! @param[in] i matrix index
      //! @return value of matrix
      double
      element(size_t i);

      //! This method changes the dimensions of a OldMatrix to a one row OldMatrix.
      //! The elements are not changed.
      void
      to_row(void);

      //! This method changes the dimensions of a OldMatrix to a one column OldMatrix.
      //! The elements are not changed.
      void
      to_column(void);

      //! Right-multiply a matrix with given matrix.
      //! @param[in] m matrix to be multiplied
      //! @return multiplied matrix
      OldMatrix
      multiply(const OldMatrix& m);

      //! Compare matrices for equality.
      //! @param[in] m matrix to compare.
      //! @return true if matrices are equal, false otherwise.
      bool
      operator==(const OldMatrix& m) const;

      //! This method assigns a OldMatrix with another OldMatrix.
      //! The silly assignement 'a = a' is handled correctly (nothing is done!).
      //! @param[in] m reference to matrix to be assigned
      //! @return reference to resultant matrix
      OldMatrix&
      operator=(const OldMatrix& m);

      //! This methods adds to a OldMatrix the contents of another OldMatrix.
      //! @param[in] m reference to matrix to be added
      //! @return reference to resultant matrix
      OldMatrix&
      operator+=(const OldMatrix& m);

      //! This methods subtracts from a OldMatrix the contents of another OldMatrix.
      //! @param[in] m reference to matrix to be subtracted
      //! @return reference to resultant matrix
      OldMatrix&
      operator-=(const OldMatrix& m);

      //! This methods multiplies each entry of a OldMatrix by
      //! the corresponding entry of another OldMatrix.
      //! @param[in] m reference to matrix to be multiplied
      //! @return reference to resultant matrix
      OldMatrix&
      operator&=(const OldMatrix& m);

      //! This methods divides each entry of OldMatrix by the
      //! correspondig entry of another OldMatrix.
      //! @param[in] m reference to matrix to be divided
      //! @return reference to resultant matrix
      OldMatrix&
      operator/=(const OldMatrix& m);

      //! This method implements the unary minus operator.
      //! @return resultant matrix
      OldMatrix
      operator-(void) const;

      //! This method multiplies a OldMatrix by a real number.
      //! @param[in] x real number
      //! @return reference to resultant matrix
      OldMatrix&
      operator*=(double x);

      //! This method divides a OldMatrix by a real number.
      //! Care must be taken to avoid divisions by zero.
      //! @param[in] x real number
      //! @return reference to resultant matrix
      OldMatrix&
      operator/=(double x);

      //! This method fills a submatrix of a given OldMatrix.
      //! @param[in] i row index
      //! @param[in] j column index
      //! @param[in] a submatrix
      void
      put(size_t i, size_t j, const OldMatrix& a);

      //! This routine returns the (i, j) minor OldMatrix.
      //! @param[in] i row index
      //! @param[in] j column index
      //! @return matrix
      OldMatrix
      mminor(size_t i, size_t j) const;

      //! LUP decomposition (P * A = L * U).
      //! This method returns the number of permutations.
      //! @param[in] L lower triangular matrix
      //! @param[in] U upper triangular matrix
      //! @param[in] P permutation matrix
      //! @return number of permutations
      unsigned int
      lup(OldMatrix& L, OldMatrix& U, OldMatrix& P) const;

      // LU decomposition (Doolittle Decomposition of a OldMatrix).
      // NOTE: A(i,i) == 0 isn't handled
      //! @param[in] L lower triangular matrix
      //! @param[in] U upper triangular matrix
      void
      lu(OldMatrix& L, OldMatrix& U) const;

      //! OldMatrix determinant through Laplace expansion
      //! Recursive technique O(n!).
      //! @return matrix determinant
      double
      detr(void) const;

      //! OldMatrix determinant through LUP decomposition
      //! Iterative technique O(n^3).
      //! @return matrix determinant
      double
      det(void) const;

      //! Sylvester's criterion implementation
      //! @return true if success, false otherwise
      bool
      Sylvester(void) const;

      //! Convert from Euler angles or quaternions to
      //! Direction Cosines OldMatrix attitude representation.
      //! Used to transform vectors in the body frame to the fixed frame.
      //! @return DCM matrix
      OldMatrix
      toDCM(void) const;

      //! Convert from DCM or Euler angles to Quaternion attitude representation.
      //! @return Quaternion representation
      OldMatrix
      toQuaternion(void) const;

      //! Convert from DCM or Quaternion to Euler angles attitude representation.
      //! @return Euler Angles representation
      OldMatrix
      toEulerAngles(void) const;

      //! Compute matrix exponential of a square matrix
      //! through Taylor series expansion technique.
      //!
      //! Revised according to:
      //! "Nineteen dubious ways to compute the exponential of a matrix, twenty-five years later"
      //! SIAM Review, 2003 (pages 12-13 - "Scale and squaring method").
      //! @param[in] tol tolerance value
      //! @return resultant matrix
      OldMatrix
      expmts(double tol = 1e-05) const;

      //! This method implements the p-norm for both matrices and vectors.
      //!
      //! The following values of p yield particular cases:
      //! Vectors:
      //! p = 1: Manhattan/taxicab norm;
      //! p = 2: Euclidean norm;
      //! very large values of p: infinity/maximum norm;
      //! Matrices:
      //! p = 2: Froebnius norm;
      //! very large values of p: maximum norm;
      //! @param[in] p norm value
      //! @result resultant norm
      double
      norm_p(double p) const;

      //! This implements the (element-wise) 2-norm, corresponding to the Euclidean norm
      //! for vectors and Froebnius norm for matrices.
      //! @return resultant norm
      double
      norm_2(void) const;

      //! This implements the infinity-norm.
      //! @return resultant norm
      double
      norm_inf(void) const;

      //! Compute the median value of the ordered data of the matrix.
      //! (does not assume the data is already ordered)
      //! @return median of the matrix
      double
      median(void) const;

      //! Compute matrix trace (sum of diagonal elements for a square matrix).
      //! @return trace of matrix
      double
      trace(void) const;

      //! This routine checks if matrix is invertible.
      //! @return true if it is invertible, false otherwise
      bool
      isInvertible(void) const;

      //! This routine checks if matrix is square.
      //! @return true if it is squared, false otherwise
      bool
      isSquare(void) const;

      //! This routine checks if matrix is a vector.
      //! @return true if it is a vector, false otherwise
      bool
      isVector(void) const;

      //! This routine checks if matrix is a column vector.
      //! @return true if it is a column vector, false otherwise
      bool
      isColumnVector(void) const;

      //! This routine checks if matrix is a column vector with certain size.
      //! @param[in] rows size of the vector
      //! @return true if it is a column vector, false otherwise
      bool
      isColumnVector(size_t rows) const;

      //! This routine checks if matrix is a row vector.
      //! @return true if it is a row vector, false otherwise
      bool
      isRowVector(void) const;

      //! This routine checks if matrix is a row vector with certain size.
      //! @param[in] columns size of the vector
      //! @return true if it is a row vector, false otherwise
      bool
      isRowVector(size_t columns) const;

      //! Calculate dot product.
      //! Arguments must be equally sized column or row vectors.
      //! @param[in] a matrix.
      //! @param[in] b matrix.
      //! @return resultant matrix of dot product
      static double
      dot(const OldMatrix& a, const OldMatrix& b);

      //! Calculate cross product.
      //! Arguments must be 3D column or row vectors.
      //! @param[in] a matrix.
      //! @param[in] b matrix.
      //! @return resultant matrix of cross product
      static OldMatrix
      cross(const OldMatrix& a, const OldMatrix& b);

      //! This method returns the sum of two matrices.
      //! @param[in] m1 matrix to be summed.
      //! @param[in] m2 matrix to be summed.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM OldMatrix
      operator+(const OldMatrix& m1, const OldMatrix& m2);

      //! This method returns the difference of two matrices.
      //! @param[in] m1 matrix to be subtracted.
      //! @param[in] m2 matrix to subtract.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM OldMatrix
      operator-(const OldMatrix& m1, const OldMatrix& m2);

      //! This method returns the product of two matrices.
      //! Note on optimization by Eduardo Marques - Sep 8 2010
      //! ====================================================
      //! Applied loop interchange to achieve memory stride 1
      //! (better data locality) in iterations of the innermost loop,
      //! This makes for better cache behavior (i.e. less cache misses),
      //! particularly as matrix dimensions increase.
      //! For those interested, see papers or books by M J Wolfe.
      //!
      //! @param[in] m1 matrix to be summed.
      //! @param[in] m2 matrix to be summed.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM OldMatrix
      operator*(const OldMatrix& m1, const OldMatrix& m2);

      //! This method returns the element-element product of two matrices.
      //! @param[in] m1 matrix to be multiplied (element-element).
      //! @param[in] m2 matrix to be multiplied (element-element).
      //! @return resultant matrix.
      friend DUNE_DLL_SYM OldMatrix
      operator&(const OldMatrix& m1, const OldMatrix& m2);

      //! This method returns the element-element quocient of two matrices.
      //! @param[in] a matrix for element-element quocient.
      //! @param[in] b matrix for element-element quocient.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM OldMatrix
      operator/(const OldMatrix& a, const OldMatrix& b);

      //! This function multiplies a OldMatrix by a real number.
      //! @param[in] x real number.
      //! @param[in] a matrix to be multiplied.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM OldMatrix
      operator*(double x, const OldMatrix& a);

      //! This function multiplies a OldMatrix by a real number.
      //! @param[in] a matrix to be multiplied.
      //! @param[in] x real number.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM OldMatrix
      operator*(const OldMatrix& a, double x);

      //! This function divides a OldMatrix by a real number.
      //! @param[in] a matrix to be divided.
      //! @param[in] x real number.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM OldMatrix
      operator/(const OldMatrix& a, double x);

      //! This method sends a OldMatrix to an 'ostream'.
      //! Each row of the OldMatrix is put on a different line.
      //! @param[in] os output stream.
      //! @param[in] a matrix to be outputted.
      friend DUNE_DLL_SYM std::ostream&
      operator<<(std::ostream& os, const OldMatrix& a);

      //! This method reads a OldMatrix from an 'istream'.
      //! The OldMatrix is filled row by row.
      //! @param[in] is input stream.
      //! @param[in] a matrix to be filled.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM std::istream&
      operator>>(std::istream& is, OldMatrix& a);

      //! This method returns the transpose of a OldMatrix.
      //! @param[in] a to be transposed.
      //! @return transposed matrix.
      friend DUNE_DLL_SYM OldMatrix
      transpose(const OldMatrix& a);

      //! This methods calculates the inverse of a OldMatrix.
      //! The inverse is calculated using Gauss elimination with total
      //! pivoting.
      //!
      //! If OldMatrix 'a' is singular (with current precision) a zero
      //! OldMatrix with the same dimension of 'a' is returned and the
      //! variable 'dOldMatrix::inversionerror' is set to 1. Otherwise it
      //! is set to 0.
      //!
      //! @param[in] a matrix to be inverted.
      //!
      //! @return inverted matrix
      friend DUNE_DLL_SYM OldMatrix
      inverse(const OldMatrix& a);

      //! This methods calculates the OldMatrix 'x' that solves
      //! the linear system of equations 'a.x=b'.
      //!
      //! The system is solved using Gauss elimination with total pivoting.
      //!
      //! If OldMatrix 'a' is singular (with current precision) a zero OldMatrix with
      //! the same dimension of 'b' is returned and the variable
      //! 'dOldMatrix::inversionerror' is set to 1. Otherwise it is set to 0.
      //! @param[in] a matrix
      //! @param[in] b matrix
      //! @return resultant matrix
      friend DUNE_DLL_SYM OldMatrix
      inverse(const OldMatrix& a, const OldMatrix& b);

      // //! This function returns a 3x3 skew symmetrical
      // //! matrix using a matrix (3x1 or 1x3)
      // //! @param[in] a row or column vector with 3 elements
      // //! @return skewed matrix
      // friend OldMatrix
      // skew(const OldMatrix& a);

      //! This methods calculates the inverse of a OldMatrix.
      //! The inverse is calculated using Gauss elimination with partial pivoting.
      //!
      //! If OldMatrix is singular (with current precision) a zero OldMatrix with
      //! the same dimension is returned and the variable.
      //! 'dOldMatrix::inversionerror' is set to 1. Otherwise is is set to 0.
      //! @param[in] a reference to matrix to be inverted
      //! @return inverted matrix
      friend OldMatrix
      inverse_pp(const OldMatrix& a);

      //! This methods calculates the OldMatrix 'x' that solves
      //! the linear system of equations 'a.x=b'.
      //!
      //! The system is solved using Gauss elimination with partial pivoting.
      //!
      //! If OldMatrix 'a' is singular (with current precision) a zero OldMatrix with
      //! the same dimension of 'b' is returned and the variable.
      //! 'dOldMatrix::inversionerror' is set to 1. Otherwise it is set to 0.
      //! @param[in] a matrix
      //! @param[in] b matrix
      //! @return resultant matrix
      friend OldMatrix
      inverse_pp(const OldMatrix&, const OldMatrix&);

      //! This function computes the OldMatrix inverse
      //! using LU or LUP decomposition.
      //! @param[in] a reference to matrix to be inverted
      //! @return inverted matrix
      friend OldMatrix
      inverse_lup(const OldMatrix& a);

      //! This function returns a OldMatrix with the absolute
      //! values of the entries of a given OldMatrix.
      //! @param[in] a matrix
      //! @return matrix with absolute values
      friend OldMatrix
      abs(const OldMatrix& a);

      //! This function returns the maximum value of a OldMatrix.
      //! @param[in] a matrix
      //! @return maximum value of matrix
      friend double
      max(const OldMatrix& a);

      //! This function returns the minimum value of a OldMatrix.
      //! @param[in] a matrix
      //! @return minimum value of matrix
      friend double
      min(const OldMatrix& a);

      //! This function returns the sum of the elements of a given OldMatrix.
      //! @param[in] a matrix
      //! @return sum of the elements of matrix
      friend double
      sum(const OldMatrix& a);

      //! This function returns the sum of the squares
      //! of the elements of a given OldMatrix.
      //! @param[in] a matrix
      //! @return squared sum of the elements of matrix
      friend double
      squaresum(const OldMatrix& a);

      //! This function tranforms a OldMatrix 'M' (n*m) into an upper triangular
      //! OldMatrix using Gauss elimination with partial pivoting.
      //!
      //! 'm' should be >= 'n'.
      //!
      //! @param[out] M matrix to be transformed
      //! @param[in] m number of columns
      //! @param[in] n number of rows
      //! @param[in] tolerance small positive constant used to test for
      //! zero entries in 'M'
      //! @return 0 if elimination done successfully,
      //! -1 if OldMatrix M is not full rank (elimination impossible)
      static int
      upper_triangular_pp(double* M, int n, int m, double tolerance);

      //! This function tranforms a OldMatrix 'M' (n*m) into an upper triangular
      //! OldMatrix using Gauss elimination with total pivoting.
      //!
      //! 'm' should be >= 'n'.
      //!
      //! The parameter 'index' is a pointer to an array of 'n' integers that
      //! indicates the permutations that are done during total pivotation.
      //! When this function is called the 'index' array must be properly
      //! initialized, i.e. ind[0]=0, ind[1]=1, ..., ind[n-1]=n-1.
      //!
      //! @param[out] M matrix to be transformed
      //! @param[out] index pointer to array that indicates permutations
      //! @param[in] m number of columns
      //! @param[in] n number of rows
      //! @param[in] tolerance small positive constant used to test for
      //! zero entries in 'M'
      //! @return 0 if elimination done successfully,
      //! -1 if matrix is not full rank (elimination impossible)
      static int
      upper_triangular_tp(double* M, int* index, int n, int m, double tolerance);

    private:
      static double precision;

      size_t m_nrows;
      size_t m_ncols;
      size_t m_size;
      double* m_data;
      double* m_counter;

      //! This method acts as destructor.
      void
      erase(void);

      //! This method creates a unique copy of the data of a OldMatrix.
      void
      split(void);
    };

    // //! This function returns a 3x3 skew symmetrical
    // //! matrix using an array with 3 elements.
    // //! @param[in] data array with 3 elements
    // //! @return skewed matrix
    // OldMatrix
    // skew(const double data[3]);
  }
}

#endif
