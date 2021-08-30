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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MATH_EIGENMATRIX_HPP_INCLUDED_
#define DUNE_MATH_EIGENMATRIX_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <iostream>
#include <stdexcept>
// #include <string>
// #include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include "eigen/Dense"

namespace DUNE
{
  // Forward declarations.
  namespace Parsers { class Config; }

  namespace Math
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM EigenMatrix;

    class EigenMatrix
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
      EigenMatrix(void);

      //! Constructor.
      //! Create a Matrix of the same dimension of another Matrix. It
      //! simply sets the new data pointer to the old data and
      //! increases the copy counter.
      //! @param[in] m reference to matrix
      EigenMatrix(const EigenMatrix& m);

      //! Constructor.
      //! Create a Matrix of dimension (rows * columns)
      //! and fills it with the data pointed by 'data'.
      //! @param[in] data pointer to data to be copied to new matrix
      //! @param[in] r number of rows of new matrix
      //! @param[in] c number of columns of new matrix
      EigenMatrix(double* data, size_t r, size_t c);

      //! Constructor.
      //! Construct a matrix of size rows*columns.
      //! @param[in] r number of rows of new matrix
      //! @param[in] c number of columns of new matrix
      EigenMatrix(size_t r, size_t c);

      //! Constructor.
      //! Construct a matrix of size rows * columns filled with constant value.
      //! @param[in] r number of rows of new matrix
      //! @param[in] c number of rows of new matrix
      //! @param[in] v value used to initialize cells.
      EigenMatrix(size_t r, size_t c, double v);

      //! Constructor.
      //! Construct a square identity matrix of size n
      //! param[in] n size of new matrix (n * n)
      explicit EigenMatrix(size_t n);

      //! Constructor.
      //! Construct a diagonal matrix using the values in data
      //! param[in] diag pointer to data to be copied to diagonal matrix
      //! param[in] n size of new matrix (n * n)
      EigenMatrix(double* diag, size_t n);

      //! Destructor.
      //! Decrement the number of copies of a Matrix and frees the
      //! allocated memory if this number reaches zero.
      ~EigenMatrix(void);

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

      //! Fill the Matrix with a constant value.
      //! @param[in] value constant value to fill matrix with
      void
      fill(double value);

      //! Resize matrix and fill with new values.
      //! @param[in] r number of rows of resized matrix
      //! @param[in] c number of columns of resized matrix
      //! @param[in] data pointer to data to be copied to resized matrix
      void
      fill(size_t r, size_t c, double* data = 0);

      //! Turns the Matrix into an identity matrix if it is squared.
      void
      identity(void);

      //! Limit the maximum Matrix elements values
      //! @param[in] max maximum value
      void
      maxLimitValues(double max);

      //! Limit the minimum Matrix elements values
      //! @param[in] min minimum value
      void
      minLimitValues(double min);

      //! Limit the minimum and maximum Matrix elements' values
      //! @param[in] min minimum value
      //! @param[in] max maximum value
      void
      trimValues(double min, double max);

      //! Limit the minimum and maximum Matrix elements' values
      //! @param[in] lim absolute limit value
      void
      trimValues(double lim);

      //! Retrieve a submatrix.
      //! @param[in] i1 initial row
      //! @param[in] i2 final row
      //! @param[in] j1 initial column
      //! @param[in] j2 final column
      //! @return submatrix
      EigenMatrix
      get(unsigned i1, unsigned i2, unsigned j1, unsigned j2) const;

      //! Set a submatrix.
      //! @param[in] i1 initial row
      //! @param[in] i2 final row
      //! @param[in] j1 initial column
      //! @param[in] j2 final column
      //! @param[in] m_in reference to matrix to be copied into submatrix
      //! @return reference matrix
      EigenMatrix&
      set(unsigned i1, unsigned i2, unsigned j1, unsigned j2, const EigenMatrix& m_in);

      //! Returns the diagonal concatenation of a matrix
      //! Return a matrix of size (nrows + rows(m_in)) x (ncolumns +columns(m_in))
      //! and fills the remaining elements with zeros.
      //! @param[in] m_in reference to matrix
      //! @return reference to diagonal concatenation of matrix
      EigenMatrix&
      blkDiag(const EigenMatrix& m_in);

      //! Returns the vertical concatenation of a matrix
      //! Return a matrix of size (nrows + rows(m_in)) x (ncolumns)
      //! and fills the remaining elements with zeros.
      //! @param[in] m_in reference to matrix
      //! @return reference to vertical concatenation of matrix
      EigenMatrix&
      vertCat(const EigenMatrix& m_in);

      //! Returns the horizontal concatenation of a matrix
      //! Return a matrix of size (nrows x (ncolumns + columns(m_in)) )
      //! and fills the remaining elements with zeros.
      //! @param[in] m_in reference to matrix
      //! @return reference to vertical concatenation of matrix
      EigenMatrix&
      horzCat(const EigenMatrix& m_in);

    //   //! Returns the power matrix X^n.
    //   //! @param[in] n positive integer exponent to raise the matrix to
    //   //! @return reference to the power of the matrix
    //   EigenMatrix&
    //   pow(unsigned int n);

      //! Saves matrix to text file.
      //! @param[in] path file path string (eg: "E:\dir/x.txt").
      void
      toFile(const char* path);

      //! Loads a matrix from text file (must initialize matrix
      //! dimensions first).
      //! @param[in] path file path string (eg: "E:\dir/x.txt").
      void
      fromFile(const char* path);

    //   //! Read a matrix from a vector of strings
    //   //! The matrix dimensions must be defined a priori.
    //   //! @param[in] clines vector of strings containing the matrix data
    //   void
    //   readFromLines(const std::vector<std::string>& clines);

    //   //! Read a matrix from a configuration file.
    //   //! The matrix dimensions must be defined a priori.
    //   //! @param[in] cfg configuration parser
    //   //! @param[in] section configuration section
    //   //! @param[in] param configuration parameter
    //   void
    //   readFromConfig(DUNE::Parsers::Config& cfg, const std::string& section, const std::string& param);

      //! This method returns a row of the Matrix.
      //! @param[in] i row to be retrieved
      //! @return matrix of the returned row
      EigenMatrix
      row(size_t i) const;

      //! This method returns a column of the Matrix.
      //! @param[in] j column to be retrieved
      //! @return matrix of the returned column
      EigenMatrix
      column(size_t j) const;

      //! This method swaps two columns.
      //! @param[in] i index of column
      //! @param[in] j index of column
      void
      swapColumns(unsigned i, unsigned j);

      //! This method swaps two rows.
      //! @param[in] i index of row
      //! @param[in] j index of row
      void
      swapRows(unsigned i, unsigned j);

    //   //! This method sets the precision used when inverting a Matrix.
    //   //! @param[in] p value of the precision to be used when inverting
    //   static void
    //   set_precision(double p);

    //   //! This method returns the precision currently in use.
    //   //! @return value of the precision in use
    //   static double
    //   get_precision(void);

      //! This method resizes a Matrix to the same dimensions of other matrix.
      //! Note that no data copy is performed.
      //! @param[in] m reference to matrix
      void
      resize(const EigenMatrix& m);

      //! This method resizes a Matrix to the dimensions of (r * c).
      //! @param[in] r number of rows
      //! @param[in] c number of columns
      void
      resize(size_t r, size_t c);

      //! This method resizes a Matrix to the dimensions of (r * c)
      //! and keeps previous matrix values if/when possible.
      //! @param[in] r number of rows
      //! @param[in] c number of columns
      void
      resizeAndKeep(unsigned r, unsigned c);

      //! This method resizes a Matrix to the dimensions of (r * c)
      //! and fills the matrix with constant value
      //! @param[in] r number of rows
      //! @param[in] c number of columns
      //! @param[in] value constant value to fill matrix with
      void
      resizeAndFill(size_t r, size_t c, double value);

      //! This operator returns a reference to a given entry of a Matrix.
      //!
      //! As this methods makes possible to change the entries of a Matrix
      //! a spliting is necessary to avoid corrupting other matrices sharing
      //! the same data.
      //!
      //! Note: As this method returns a reference it is very powerful, and it can
      //!       be used to gain access to the pointer to the Matrix entries. This
      //!       use can be dangerous because the data of a given matrix can move
      //!       from place to place due to splitting.
      //!
      //! @param[in] i row index
      //! @param[in] j column index
      //! @return reference to entry of a matrix
      double&
      operator()(unsigned i, unsigned j);

      //! This routine returns a value of the matrix.
      //! @param[in] i row index
      //! @param[in] j column index
      //! @return value of matrix
      double
      operator()(unsigned i, unsigned j) const;

      //! This operator returns a reference to a given entry of a Matrix.
      //!
      //! As this methods makes possible to change the entries of a Matrix
      //! a spliting is necessary to avoid corrupting other matrices sharing
      //! the same data.
      //!
      //! Note: As this method returns a reference it is very powerful, and it can
      //!       be used to gain access to the pointer to the Matrix entries. This
      //!       use can be dangerous because the data of a given matrix can move
      //!       from place to place due to splitting.
      //!
      //! @param[in] i matrix index
      //! @return reference to entry of a matrix
      double&
      operator()(unsigned i);

      //! This routine returns a value of the matrix.
      //! @param[in] i matrix index
      //! @return value of matrix
      double
      operator()(unsigned i) const;

      //! This method returns the value of an entry of a Matrix.
      //! As this is a reading method it does not care if the data is shared by
      //! other matrices.
      //! @param[in] i row index
      //! @param[in] j column index
      //! @return value of matrix
      double
      element(unsigned i, unsigned j) const;

      //! This method returns the value of an entry of a Matrix.
      //! As this is a reading method it does not care if the data is shared by
      //! other matrices.
      //! @param[in] i matrix index
      //! @return value of matrix
      double
      element(unsigned i);

      //! This method changes the dimensions of a Matrix to a one row Matrix.
      //! The elements are not changed.
      void
      to_row(void);

      //! This method changes the dimensions of a Matrix to a one column Matrix.
      //! The elements are not changed.
      void
      to_column(void);

    //   //! Right-multiply a matrix with given matrix.
    //   //! @param[in] m matrix to be multiplied
    //   //! @return multiplied matrix
    //   EigenMatrix
    //   multiply(const EigenMatrix& m);

      //! Compare matrices for equality.
      //! @param[in] m matrix to compare.
      //! @return true if matrices are equal, false otherwise.
      bool
      operator==(const EigenMatrix& m) const;

      //! This method assigns a Matrix with another Matrix.
      //! The silly assignement 'a = a' is handled correctly (nothing is done!).
      //! @param[in] m reference to matrix to be assigned
      //! @return reference to resultant matrix
      EigenMatrix&
      operator=(const EigenMatrix& m);

    //   //! This methods adds to a Matrix the contents of another Matrix.
    //   //! @param[in] m reference to matrix to be added
    //   //! @return reference to resultant matrix
    //   EigenMatrix&
    //   operator+=(const EigenMatrix& m);

    //   //! This methods subtracts from a Matrix the contents of another Matrix.
    //   //! @param[in] m reference to matrix to be subtracted
    //   //! @return reference to resultant matrix
    //   EigenMatrix&
    //   operator-=(const EigenMatrix& m);

    //   //! This methods multiplies each entry of a Matrix by
    //   //! the corresponding entry of another Matrix.
    //   //! @param[in] m reference to matrix to be multiplied
    //   //! @return reference to resultant matrix
    //   EigenMatrix&
    //   operator&=(const EigenMatrix& m);

    //   //! This methods divides each entry of Matrix by the
    //   //! correspondig entry of another Matrix.
    //   //! @param[in] m reference to matrix to be divided
    //   //! @return reference to resultant matrix
    //   EigenMatrix&
    //   operator/=(const EigenMatrix& m);

    //   //! This method implements the unary minus operator.
    //   //! @return resultant matrix
    //   EigenMatrix
    //   operator-(void) const;

    //   //! This method multiplies a Matrix by a real number.
    //   //! @param[in] x real number
    //   //! @return reference to resultant matrix
    //   EigenMatrix&
    //   operator*=(double x);

    //   //! This method divides a Matrix by a real number.
    //   //! Care must be taken to avoid divisions by zero.
    //   //! @param[in] x real number
    //   //! @return reference to resultant matrix
    //   EigenMatrix&
    //   operator/=(double x);

    //   //! This method fills a submatrix of a given Matrix.
    //   //! @param[in] i row index
    //   //! @param[in] j column index
    //   //! @param[in] a submatrix
    //   void
    //   put(size_t i, size_t j, const EigenMatrix& a);

    //   //! This routine returns the (i, j) minor Matrix.
    //   //! @param[in] i row index
    //   //! @param[in] j column index
    //   //! @return matrix
    //   EigenMatrix
    //   mminor(size_t i, size_t j) const;

    //   //! LUP decomposition (P * A = L * U).
    //   //! This method returns the number of permutations.
    //   //! @param[in] L lower triangular matrix
    //   //! @param[in] U upper triangular matrix
    //   //! @param[in] P permutation matrix
    //   //! @return number of permutations
    //   unsigned int
    //   lup(EigenMatrix& L, EigenMatrix& U, EigenMatrix& P) const;

    //   // LU decomposition (Doolittle Decomposition of a Matrix).
    //   // NOTE: A(i,i) == 0 isn't handled
    //   //! @param[in] L lower triangular matrix
    //   //! @param[in] U upper triangular matrix
    //   void
    //   lu(EigenMatrix& L, EigenMatrix& U) const;

    //   //! Matrix determinant through Laplace expansion
    //   //! Recursive technique O(n!).
    //   //! @return matrix determinant
    //   double
    //   detr(void) const;

    //   //! Matrix determinant through LUP decomposition
    //   //! Iterative technique O(n^3).
    //   //! @return matrix determinant
    //   double
    //   det(void) const;

    //   //! Sylvester's criterion implementation
    //   //! @return true if success, false otherwise
    //   bool
    //   Sylvester(void) const;

    //   //! Convert from Euler angles or quaternions to
    //   //! Direction Cosines Matrix attitude representation.
    //   //! Used to transform vectors in the body frame to the fixed frame.
    //   //! @return DCM matrix
    //   EigenMatrix
    //   toDCM(void) const;

    //   //! Convert from DCM or Euler angles to Quaternion attitude representation.
    //   //! @return Quaternion representation
    //   EigenMatrix
    //   toQuaternion(void) const;

    //   //! Convert from DCM or Quaternion to Euler angles attitude representation.
    //   //! @return Euler Angles representation
    //   EigenMatrix
    //   toEulerAngles(void) const;

    //   //! Compute matrix exponential of a square matrix
    //   //! through Taylor series expansion technique.
    //   //!
    //   //! Revised according to:
    //   //! "Nineteen dubious ways to compute the exponential of a matrix, twenty-five years later"
    //   //! SIAM Review, 2003 (pages 12-13 - "Scale and squaring method").
    //   //! @param[in] tol tolerance value
    //   //! @return resultant matrix
    //   EigenMatrix
    //   expmts(double tol = 1e-05) const;

    //   //! This method implements the p-norm for both matrices and vectors.
    //   //!
    //   //! The following values of p yield particular cases:
    //   //! Vectors:
    //   //! p = 1: Manhattan/taxicab norm;
    //   //! p = 2: Euclidean norm;
    //   //! very large values of p: infinity/maximum norm;
    //   //! Matrices:
    //   //! p = 2: Froebnius norm;
    //   //! very large values of p: maximum norm;
    //   //! @param[in] p norm value
    //   //! @result resultant norm
    //   double
    //   norm_p(double p) const;

    //   //! This implements the (element-wise) 2-norm, corresponding to the Euclidean norm
    //   //! for vectors and Froebnius norm for matrices.
    //   //! @return resultant norm
    //   double
    //   norm_2(void) const;

    //   //! This implements the infinity-norm.
    //   //! @return resultant norm
    //   double
    //   norm_inf(void) const;

    //   //! Compute the median value of the ordered data of the matrix.
    //   //! (does not assume the data is already ordered)
    //   //! @return median of the matrix
    //   double
    //   median(void) const;

    //   //! Compute matrix trace (sum of diagonal elements for a square matrix).
    //   //! @return trace of matrix
    //   double
    //   trace(void) const;

    //   //! This routine checks if matrix is invertible.
    //   //! @return true if it is invertible, false otherwise
    //   bool
    //   isInvertible(void) const;

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

    //   //! Calculate dot product.
    //   //! Arguments must be equally sized column or row vectors.
    //   //! @param[in] a matrix.
    //   //! @param[in] b matrix.
    //   //! @return resultant matrix of dot product
    //   static double
    //   dot(const EigenMatrix& a, const EigenMatrix& b);

    //   //! Calculate cross product.
    //   //! Arguments must be 3D column or row vectors.
    //   //! @param[in] a matrix.
    //   //! @param[in] b matrix.
    //   //! @return resultant matrix of cross product
    //   static EigenMatrix
    //   cross(const EigenMatrix& a, const EigenMatrix& b);

    //   //! This method returns the sum of two matrices.
    //   //! @param[in] m1 matrix to be summed.
    //   //! @param[in] m2 matrix to be summed.
    //   //! @return resultant matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   operator+(const EigenMatrix& m1, const EigenMatrix& m2);

    //   //! This method returns the difference of two matrices.
    //   //! @param[in] m1 matrix to be subtracted.
    //   //! @param[in] m2 matrix to subtract.
    //   //! @return resultant matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   operator-(const EigenMatrix& m1, const EigenMatrix& m2);

    //   //! This method returns the product of two matrices.
    //   //! Note on optimization by Eduardo Marques - Sep 8 2010
    //   //! ====================================================
    //   //! Applied loop interchange to achieve memory stride 1
    //   //! (better data locality) in iterations of the innermost loop,
    //   //! This makes for better cache behavior (i.e. less cache misses),
    //   //! particularly as matrix dimensions increase.
    //   //! For those interested, see papers or books by M J Wolfe.
    //   //!
    //   //! @param[in] m1 matrix to be summed.
    //   //! @param[in] m2 matrix to be summed.
    //   //! @return resultant matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   operator*(const EigenMatrix& m1, const EigenMatrix& m2);

    //   //! This method returns the element-element product of two matrices.
    //   //! @param[in] m1 matrix to be multiplied (element-element).
    //   //! @param[in] m2 matrix to be multiplied (element-element).
    //   //! @return resultant matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   operator&(const EigenMatrix& m1, const EigenMatrix& m2);

    //   //! This method returns the element-element quocient of two matrices.
    //   //! @param[in] a matrix for element-element quocient.
    //   //! @param[in] b matrix for element-element quocient.
    //   //! @return resultant matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   operator/(const EigenMatrix& a, const EigenMatrix& b);

    //   //! This function multiplies a Matrix by a real number.
    //   //! @param[in] x real number.
    //   //! @param[in] a matrix to be multiplied.
    //   //! @return resultant matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   operator*(double x, const EigenMatrix& a);

    //   //! This function multiplies a Matrix by a real number.
    //   //! @param[in] a matrix to be multiplied.
    //   //! @param[in] x real number.
    //   //! @return resultant matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   operator*(const EigenMatrix& a, double x);

    //   //! This function divides a Matrix by a real number.
    //   //! @param[in] a matrix to be divided.
    //   //! @param[in] x real number.
    //   //! @return resultant matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   operator/(const EigenMatrix& a, double x);

      //! This method sends a Matrix to an 'ostream'.
      //! Each row of the Matrix is put on a different line.
      //! @param[in] os output stream.
      //! @param[in] a matrix to be outputted.
      friend DUNE_DLL_SYM std::ostream&
      operator<<(std::ostream& os, const EigenMatrix& a);

      //! This method reads a Matrix from an 'istream'.
      //! The Matrix is filled row by row.
      //! @param[in] is input stream.
      //! @param[in] a matrix to be filled.
      //! @return resultant matrix.
      friend DUNE_DLL_SYM std::istream&
      operator>>(std::istream& is, EigenMatrix& a);

    //   //! This method returns the transpose of a Matrix.
    //   //! @param[in] a to be transposed.
    //   //! @return transposed matrix.
    //   friend DUNE_DLL_SYM EigenMatrix
    //   transpose(const EigenMatrix& a);

    //   //! This methods calculates the inverse of a Matrix.
    //   //! The inverse is calculated using Gauss elimination with total
    //   //! pivoting.
    //   //!
    //   //! If Matrix 'a' is singular (with current precision) a zero
    //   //! Matrix with the same dimension of 'a' is returned and the
    //   //! variable 'dMatrix::inversionerror' is set to 1. Otherwise it
    //   //! is set to 0.
    //   //!
    //   //! @param[in] a matrix to be inverted.
    //   //!
    //   //! @return inverted matrix
    //   friend DUNE_DLL_SYM EigenMatrix
    //   inverse(const EigenMatrix& a);

    //   //! This methods calculates the Matrix 'x' that solves
    //   //! the linear system of equations 'a.x=b'.
    //   //!
    //   //! The system is solved using Gauss elimination with total pivoting.
    //   //!
    //   //! If Matrix 'a' is singular (with current precision) a zero Matrix with
    //   //! the same dimension of 'b' is returned and the variable
    //   //! 'dMatrix::inversionerror' is set to 1. Otherwise it is set to 0.
    //   //! @param[in] a matrix
    //   //! @param[in] b matrix
    //   //! @return resultant matrix
    //   friend DUNE_DLL_SYM EigenMatrix
    //   inverse(const EigenMatrix& a, const EigenMatrix& b);

    //   //! This function returns a 3x3 skew symmetrical
    //   //! matrix using a matrix (3x1 or 1x3)
    //   //! @param[in] a row or column vector with 3 elements
    //   //! @return skewed matrix
    //   friend EigenMatrix
    //   skew(const EigenMatrix& a);

    //   //! This methods calculates the inverse of a Matrix.
    //   //! The inverse is calculated using Gauss elimination with partial pivoting.
    //   //!
    //   //! If Matrix is singular (with current precision) a zero Matrix with
    //   //! the same dimension is returned and the variable.
    //   //! 'dMatrix::inversionerror' is set to 1. Otherwise is is set to 0.
    //   //! @param[in] a reference to matrix to be inverted
    //   //! @return inverted matrix
    //   friend EigenMatrix
    //   inverse_pp(const EigenMatrix& a);

    //   //! This methods calculates the Matrix 'x' that solves
    //   //! the linear system of equations 'a.x=b'.
    //   //!
    //   //! The system is solved using Gauss elimination with partial pivoting.
    //   //!
    //   //! If Matrix 'a' is singular (with current precision) a zero Matrix with
    //   //! the same dimension of 'b' is returned and the variable.
    //   //! 'dMatrix::inversionerror' is set to 1. Otherwise it is set to 0.
    //   //! @param[in] a matrix
    //   //! @param[in] b matrix
    //   //! @return resultant matrix
    //   friend EigenMatrix
    //   inverse_pp(const EigenMatrix&, const EigenMatrix&);

    //   //! This function computes the Matrix inverse
    //   //! using LU or LUP decomposition.
    //   //! @param[in] a reference to matrix to be inverted
    //   //! @return inverted matrix
    //   friend EigenMatrix
    //   inverse_lup(const EigenMatrix& a);

    //   //! This function returns a Matrix with the absolute
    //   //! values of the entries of a given Matrix.
    //   //! @param[in] a matrix
    //   //! @return matrix with absolute values
    //   friend EigenMatrix
    //   abs(const EigenMatrix& a);

    //   //! This function returns the maximum value of a Matrix.
    //   //! @param[in] a matrix
    //   //! @return maximum value of matrix
    //   friend double
    //   max(const EigenMatrix& a);

    //   //! This function returns the minimum value of a Matrix.
    //   //! @param[in] a matrix
    //   //! @return minimum value of matrix
    //   friend double
    //   min(const EigenMatrix& a);

    //   //! This function returns the sum of the elements of a given Matrix.
    //   //! @param[in] a matrix
    //   //! @return sum of the elements of matrix
    //   friend double
    //   sum(const EigenMatrix& a);

    //   //! This function returns the sum of the squares
    //   //! of the elements of a given Matrix.
    //   //! @param[in] a matrix
    //   //! @return squared sum of the elements of matrix
    //   friend double
    //   squaresum(const EigenMatrix& a);

    //   //! This function tranforms a Matrix 'M' (n*m) into an upper triangular
    //   //! Matrix using Gauss elimination with partial pivoting.
    //   //!
    //   //! 'm' should be >= 'n'.
    //   //!
    //   //! @param[out] M matrix to be transformed
    //   //! @param[in] m number of columns
    //   //! @param[in] n number of rows
    //   //! @param[in] tolerance small positive constant used to test for
    //   //! zero entries in 'M'
    //   //! @return 0 if elimination done successfully,
    //   //! -1 if Matrix M is not full rank (elimination impossible)
    //   static int
    //   upper_triangular_pp(double* M, int n, int m, double tolerance);

    //   //! This function tranforms a Matrix 'M' (n*m) into an upper triangular
    //   //! Matrix using Gauss elimination with total pivoting.
    //   //!
    //   //! 'm' should be >= 'n'.
    //   //!
    //   //! The parameter 'index' is a pointer to an array of 'n' integers that
    //   //! indicates the permutations that are done during total pivotation.
    //   //! When this function is called the 'index' array must be properly
    //   //! initialized, i.e. ind[0]=0, ind[1]=1, ..., ind[n-1]=n-1.
    //   //!
    //   //! @param[out] M matrix to be transformed
    //   //! @param[out] index pointer to array that indicates permutations
    //   //! @param[in] m number of columns
    //   //! @param[in] n number of rows
    //   //! @param[in] tolerance small positive constant used to test for
    //   //! zero entries in 'M'
    //   //! @return 0 if elimination done successfully,
    //   //! -1 if matrix is not full rank (elimination impossible)
    //   static int
    //   upper_triangular_tp(double* M, int* index, int n, int m, double tolerance);

    private:
      static double precision;
      typedef Eigen::Matrix<double, 
                            Eigen::Dynamic, 
                            Eigen::Dynamic, 
                            Eigen::RowMajor> RowMajorMatrix;
      RowMajorMatrix m_data;
    };

    // //! This function returns a 3x3 skew symmetrical
    // //! matrix using an array with 3 elements.
    // //! @param[in] data array with 3 elements
    // //! @return skewed matrix
    // EigenMatrix
    // skew(const double data[3]);
  }
}

#endif
