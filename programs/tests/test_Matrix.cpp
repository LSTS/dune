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
// Author: Luís Venâncio                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <iostream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

// Local headers.
#include "Test.hpp"

// Options
#define DEBUG

// Test matrices
enum
{
  POS_INT = 0,
  NEG_INT = 1
};

double mat_3x3[2][9]={{1, 2, 3, 4, 5, 6, 7, 8, 9},
                      {-4, -3, -2, -1, 0, 1, 2, 3, 4}};
double rect_mat[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
double vec_3[2][3] = {{1, 2, 3}, {4, 5, 6}};
double mat_9x9[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,
                    10, 11, 12, 13, 14, 15, 16, 17, 18,
                    19, 20, 21, 22, 23, 24, 25, 26, 27,
                    28, 29, 30, 31, 32, 33, 34, 35, 36,
                    37, 38, 39, 40, 41, 42, 43, 44, 45,
                    46, 47, 48, 49, 50, 51, 52, 53, 54,
                    55, 56, 57, 58, 59, 60, 61, 62, 63,
                    64, 65, 66, 67, 68, 69, 70, 71, 72,
                    73, 74, 75, 76, 77, 78, 79, 80, 81};
double invertable_3x3[] = {1, 2, 3, 3, 2, 1, 2, 1, 3};

// Auxiliary functions
template<typename Mat>
void
printMatrix(Mat& m)
{
#ifdef DEBUG
  std::stringstream ss;
  ss << m;
  std::cout << "Size: " << m.size() << "\n";
  std::cout << "OldMatrix:\n" << ss.str() << "\n";
#endif
}

template<typename MatA, typename MatB>
bool
compareElements(MatA& mat_a, MatB& mat_b)
{
  if (mat_a.size() != mat_b.size())
    return 0;
  
  for (size_t i = 0; i < mat_a.size(); i++)
    if (mat_a(i) != mat_b(i))
    {
      std::cout << "Number failed: " << i << " | " << mat_a(i) << "!=" << mat_b(i) << "\n";
      return false;
    }
  
  return true;
}

int
main(void)
{
  Test test("Math::Matrix");


  //==========================================
  // Test constructors
  //==========================================
  {
    bool passed = false;
    try
    {
      Matrix eig_mat;
      passed = true;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("Matrix::Matrix()", passed);

    passed = false;
    try
    {
      Matrix eig_mat(3, 3);
      passed = true;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("Matrix::Matrix(double r, double c)", passed);

    passed = false;
    try
    {
      Matrix eig_mat(mat_3x3[POS_INT], 3, 3);
      OldMatrix std_mat(mat_3x3[POS_INT], 3, 3);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("Matrix::Matrix(double* data, double r, double c)", passed);

    passed = false;
    try
    {
      OldMatrix std_mat(mat_3x3[POS_INT], 3, 3);
      Matrix input_mat(mat_3x3[POS_INT], 3, 3);
      Matrix out_mat(input_mat);
      passed = memcmp(out_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("Matrix::Matrix(const Matrix& m)", passed);

    passed = false;
    try
    {
      OldMatrix std_mat(3);
      Matrix eig_mat(3);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("Matrix::Matrix(size_t n)", passed);

    passed = false;
    try
    {
      OldMatrix std_mat(mat_3x3[POS_INT], 9);
      Matrix eig_mat(mat_3x3[POS_INT], 9);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("Matrix::Matrix(double* diag, size_t n)", passed);
  }

  //==========================================
  // Test pointer access
  //==========================================
  {
    Matrix eig_mat(mat_3x3[POS_INT], 3, 3);

    double* p;
    p = eig_mat.begin();
    test.boolean("Matrix::begin()", *p == 1);
    p = eig_mat.end();
    test.boolean("Matrix::end()", *p == 9);

    // Const pointer
    const double* begin_pointer = eig_mat.begin();
    test.boolean("Matrix::begin()", *begin_pointer == 1);
    const double* end_pointer = eig_mat.end();
    test.boolean("Matrix::end()", *end_pointer == 9);

    // Const pointer
    const double* begin_pointer2 = eig_mat.cbegin();
    test.boolean("Matrix::cbegin()", *begin_pointer2 == 1);
    const double* end_pointer2 = eig_mat.cend();
    test.boolean("Matrix::cend()", *end_pointer2 == 9);
  }

  //==========================================
  // Test sizes
  //==========================================
  {
    Matrix eig_mat(rect_mat, 4, 3);

    test.boolean("Matrix::rows()", eig_mat.rows() == 4);
    test.boolean("Matrix::columns()", eig_mat.columns() == 3);
    test.boolean("Matrix::size()", eig_mat.size() == 12);
  }

  //==========================================
  // Test element access
  //==========================================
  {
    Matrix eig_mat(mat_3x3[POS_INT], 3, 3);

    test.boolean("Matrix::operator()(size_t i, size_t j) const", eig_mat(2, 0) == 7);
    test.boolean("Matrix::operator()(size_t i)", eig_mat(6) == 7);

    test.boolean("Matrix::element()(size_t i, size_t j) const", eig_mat.element(2, 0) == 7);
    test.boolean("Matrix::element()(size_t i)", eig_mat.element(6) == 7);
  }

  //==========================================
  // Test operators
  //==========================================
  {
    Matrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    Matrix eig_mat_B(mat_3x3[POS_INT], 3, 3);
    Matrix eig_mat_C(mat_3x3[NEG_INT], 3, 3);
    test.boolean("Matrix::operator==(const Matrix& m) const", eig_mat_A == eig_mat_B && !(eig_mat_A == eig_mat_C));

    Matrix eig_mat_A_cpy;
    eig_mat_A_cpy = eig_mat_A;
    test.boolean("Matrix::operator=(const Matrix& m)", eig_mat_A == eig_mat_A_cpy);

    Matrix eig_mat_D;
    eig_mat_D = eig_mat_A + eig_mat_B;
    double test_input_a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    Matrix eig_test_a(test_input_a, 3, 3);
    test.boolean("Matrix::operator+(const Matrix& m1, const Matrix& m2)", eig_mat_D == eig_test_a);

    eig_mat_D = eig_mat_A - eig_mat_B;
    Matrix eig_test_b(3, 3, 0);
    test.boolean("Matrix::operator-(const Matrix& m1, const Matrix& m2)", eig_mat_D == eig_test_b);

    eig_mat_D = eig_mat_A * eig_mat_B;
    double test_input_c[] = {30, 36, 42, 66, 81, 96, 102, 126, 150};
    Matrix eig_test_c(test_input_c, 3, 3);
    test.boolean("Matrix::operator*(const Matrix& m1, const Matrix& m2)", eig_mat_D == eig_test_c);

    eig_mat_D = eig_mat_A & eig_mat_B;
    double test_input_d[] = {1, 4, 9, 16, 25, 36, 49, 64, 81};
    Matrix eig_test_d(test_input_d, 3, 3);
    test.boolean("Matrix::operator&(const Matrix& m1, const Matrix& m2)", eig_mat_D == eig_test_d);

    eig_mat_D = eig_mat_A / eig_mat_B;
    double test_input_e[] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    Matrix eig_test_e(test_input_e, 3, 3);
    test.boolean("Matrix::operator/(const Matrix& a, const Matrix& b)", eig_mat_D == eig_test_e);

    eig_mat_D = eig_mat_A * 7;
    double test_input_f[] = {7, 14, 21, 28, 35, 42, 49, 56, 63};
    Matrix eig_test_f(test_input_f, 3, 3);
    test.boolean("Matrix::operator*(double x, const Matrix& a)", eig_mat_A * 7 == 7 * eig_mat_A && eig_mat_D == eig_test_f);

    eig_mat_D = eig_mat_A / 2;
    double test_input_g[] = {0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5};
    Matrix eig_test_g(test_input_g, 3, 3);
    test.boolean("Matrix::operator/(const Matrix& a, double x)", eig_mat_D == eig_test_g);

    OldMatrix mat_A(mat_3x3[POS_INT], 3, 3);
    OldMatrix mat_C(mat_3x3[NEG_INT], 3, 3);
    Matrix eig_test_h = eig_mat_A*eig_mat_C;
    OldMatrix test_h = mat_A*mat_C;
    test.boolean("Matrix::multiply(const Matrix& m2)", compareElements(eig_test_h, test_h));
  }

  //==========================================
  // Test matrix types
  //==========================================
  {
    Matrix eig_square_mat(3, 3, 7);
    Matrix eig_row_vec(1, 3, 7);
    Matrix eig_col_vec(3, 1, 7);
    Matrix eig_empty_mat;

    test.boolean("Matrix::isSquare()", eig_square_mat.isSquare());
    test.boolean("Matrix::isVector()", eig_row_vec.isVector() && eig_col_vec.isVector());
    test.boolean("Matrix::isRowVector()", eig_row_vec.isRowVector());
    test.boolean("Matrix::isRowVector(size_t c)", eig_row_vec.isRowVector(3));
    test.boolean("Matrix::isColumnVector()", eig_col_vec.isColumnVector());
    test.boolean("Matrix::isColumnVector(size_t c)", eig_col_vec.isColumnVector(3));
    test.boolean("Matrix::isEmpty()", eig_empty_mat.isEmpty());
  }

  //==========================================
  // Test limit values
  //==========================================
  {
    Matrix eig_mat(mat_3x3[POS_INT], 3, 3);
    bool passed = true;

    double min_limit = 2;
    double max_limit = 6;

    eig_mat.maxLimitValues(max_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) > max_limit)
        passed = false;
    }
    test.boolean("Matrix::maxLimitValues(double max)", passed);

    passed = true;
    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.minLimitValues(min_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < min_limit)
        passed = false;
    }
    test.boolean("Matrix::minLimitValues(double min)", passed);
    
    passed = true;
    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.trimValues(min_limit, max_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < min_limit || eig_mat(i) > max_limit)
        passed = false;
    }
    test.boolean("Matrix::trimValues(double min, double max)", passed);
    
    passed = true;
    eig_mat.fill(3, 3, mat_3x3[NEG_INT]);
    eig_mat.trimValues(min_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < -min_limit || eig_mat(i) > min_limit)
        passed = false;
    }
    test.boolean("Matrix::trimValues(double lim)", passed);
  }

  //==========================================
  // Test block operations
  //==========================================
  {
    Matrix eig_mat(mat_3x3[POS_INT], 3, 3);
    Matrix block(2, 2);
    block = eig_mat.get(1, 2, 1, 2);

    double input_mat[] = {5, 6, 8, 9};
    Matrix compare_mat(input_mat, 2, 2);
    test.boolean("Matrix::get(size_t i1, size_t i2, size_t j1, size_t j2) const", block == compare_mat);

    eig_mat.set(0, 1, 0, 1, compare_mat);
    double input_mat2[] = {5, 6, 3, 8, 9, 6, 7, 8, 9};
    Matrix compare_mat2(input_mat2, 3, 3);
    test.boolean("Matrix::set(size_t i1, size_t i2, size_t j1, size_t j2, const Matrix& m)", eig_mat == compare_mat2);


    Matrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    Matrix eig_mat_B(mat_3x3[NEG_INT], 3, 3);
    Matrix eig_mat_res = eig_mat_A.blkDiag(eig_mat_B);
    double input_mat3[] = {1, 2, 3, 0, 0, 0, 
                           4, 5, 6, 0, 0, 0,
                           7, 8, 9, 0, 0, 0,
                           0, 0, 0, -4, -3, -2,
                           0, 0, 0, -1, 0, 1,
                           0, 0, 0, 2, 3, 4};
    Matrix compare_mat3(input_mat3, 6, 6);
    test.boolean("Matrix::blkDiag(const Matrix& mx_in)", eig_mat_res == compare_mat3);

    Matrix eig_mat_C(mat_3x3[POS_INT], 3, 3);
    Matrix eig_mat_D(mat_3x3[NEG_INT], 3, 3);
    Matrix eig_mat_res2 = eig_mat_C.vertCat(eig_mat_D);
    double input_mat4[] = {1, 2, 3, 
                           4, 5, 6,
                           7, 8, 9,
                          -4, -3, -2,
                          -1, 0, 1,
                           2, 3, 4};
    Matrix compare_mat4(input_mat4, 6, 3);
    test.boolean("Matrix::vertCat(const Matrix& mx_in)", eig_mat_res2 == compare_mat4);

    Matrix eig_mat_E(mat_3x3[POS_INT], 3, 3);
    Matrix eig_mat_F(mat_3x3[NEG_INT], 3, 3);
    Matrix eig_mat_res3 = eig_mat_E.horzCat(eig_mat_F);
    double input_mat5[] = {1, 2, 3, -4, -3, -2,
                           4, 5, 6, -1, 0, 1,
                           7, 8, 9, 2, 3, 4};                          
                          
                           
    Matrix compare_mat5(input_mat5, 3, 6);
    test.boolean("Matrix::horzCat(const Matrix& mx_in)", eig_mat_res3 == compare_mat5);

    Matrix eig_mat_G(mat_3x3[POS_INT], 3, 3);
    double input_mat6[] = {1, 2, 3, 4, 0, 1, 7, 2, 3};
    Matrix eig_mat_H(input_mat5, 2, 2);
    eig_mat_G.put(1, 1, eig_mat_H);
    double input_mat7[] = {1, 2, 3, 4, 0, 1, 7, 2, 3};
    Matrix compare_mat7(input_mat7, 3, 3);
    test.boolean("Matrix::put(size_t i, size_t j, const Matrix& a)", eig_mat == compare_mat2);
  }

  //==========================================
  // Test resize
  //==========================================
  {
    OldMatrix std_mat(mat_3x3[POS_INT], 3, 3);
    Matrix eig_mat(mat_3x3[POS_INT], 3, 3);
    bool passed = false;

    std_mat.resizeAndKeep(2,2);
    eig_mat.resizeAndKeep(2,2);
    passed = compareElements(std_mat, eig_mat);

    std_mat.resizeAndKeep(4,4);
    eig_mat.resizeAndKeep(4,4);
    passed &= compareElements(std_mat, eig_mat);
    test.boolean("Matrix::resizeAndKeep(size_t r, size_t c)", passed);

    eig_mat.resizeAndFill(2, 5, 7);
    std_mat.resizeAndFill(2, 5, 7);
    passed = eig_mat.rows() == 2;
    passed &= eig_mat.columns() == 5;
    passed &= compareElements(std_mat, eig_mat);
    test.boolean("Matrix::resizeAndFill(size_t r, size_t c, double value)", passed);

    eig_mat.resize(7, 4);
    passed = eig_mat.rows() == 7;
    passed &= eig_mat.columns() == 4;
    test.boolean("Matrix::resize(size_t r, size_t c)", passed);
  }

  //==========================================
  // Test row/column operations
  //==========================================
  {
    Matrix eig_mat(mat_3x3[POS_INT], 3, 3);
    
    double test_input_a[] = {4, 5, 6};
    Matrix eig_test_a(test_input_a, 1, 3);
    test.boolean("Matrix::row(size_t i) const", eig_mat.row(1) == eig_test_a);

    double test_input_b[] = {2, 5, 8};
    Matrix eig_test_b(test_input_b, 3, 1);
    test.boolean("Matrix::column(size_t j) const", eig_mat.column(1) == eig_test_b);
    
    double test_input_c[] = {3, 2, 1, 6, 5, 4, 9, 8, 7};
    Matrix eig_test_c(test_input_c, 3, 3);
    eig_mat.swapColumns(0, 2);
    test.boolean("Matrix::swapColumns(size_t i, size_t j)", eig_mat == eig_test_c);

    double test_input_d[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    Matrix eig_test_d(test_input_d, 3, 3);
    eig_mat.swapRows(0, 2);
    test.boolean("Matrix::swapRows(size_t i, size_t j)", eig_mat == eig_test_d);

    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.to_row();
    bool passed = eig_mat.rows() == 1;
    passed &= eig_mat.columns() == 9;
    passed &= memcmp(mat_3x3[POS_INT], eig_mat.begin(), 9) == 0;
    test.boolean("Matrix::to_row(void)", passed);

    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.to_column();
    passed = eig_mat.rows() == 9;
    passed &= eig_mat.columns() == 1;
    passed &= memcmp(mat_3x3[POS_INT], eig_mat.begin(), 9) == 0;
    test.boolean("Matrix::to_column(void)", passed);
  }

  //==========================================
  // Test reductions
  //==========================================
  {
    Matrix eig_mat_a(mat_3x3[NEG_INT], 3, 3);
    double test_input_a[] = {4, 3, 2, 1, 0, 1, 2, 3, 4};
    Matrix eig_test_a(test_input_a, 3, 3);
    test.boolean("Matrix::abs(const Matrix& a)", eig_test_a == eig_test_a);

    Matrix eig_mat_b(mat_3x3[POS_INT], 3, 3);
    test.boolean("Matrix::max(const Matrix& a)", max(eig_mat_b) == 9);
    test.boolean("Matrix::min(const Matrix& a)", min(eig_mat_b) == 1);
    test.boolean("Matrix::sum(const Matrix& a)", sum(eig_mat_b) == 45);
    test.boolean("Matrix::squaresum(const Matrix& a)", squaresum(eig_mat_b) == 285);

    OldMatrix mat_b(mat_3x3[POS_INT], 3, 3);
    test.boolean("Matrix::median(void) const", eig_mat_b.median() == mat_b.median());
    test.boolean("Matrix::trace(void) const", eig_mat_b.trace() == 15);
  }

  //==========================================
  // Test matrix operations
  //==========================================
  {
    Matrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    OldMatrix mat_A(mat_3x3[POS_INT], 3, 3);

    Matrix eig_test_A = eig_mat_A.pow(3);
    OldMatrix test_A = mat_A.pow(3);
    test.boolean("Matrix::pow(unsigned int n)", compareElements(eig_test_A, test_A));

    Matrix eig_vec_A(vec_3[0], 3, 1);
    Matrix eig_vec_B(vec_3[1], 3, 1);
    OldMatrix vec_A(vec_3[0], 3, 1);
    OldMatrix vec_B(vec_3[1], 3, 1);
    test.boolean("Matrix::dot(const Matrix& a, const Matrix& b)", Matrix::dot(eig_vec_A, eig_vec_B) == OldMatrix::dot(vec_A, vec_B));

    Matrix eig_test_B = Matrix::cross(eig_vec_A, eig_vec_B);
    OldMatrix test_B = OldMatrix::cross(vec_A, vec_B);
    test.boolean("Matrix::cross(const Matrix& a, const Matrix& b)", compareElements(eig_test_B, test_B));

    Matrix eig_mat_B(mat_9x9, 9, 9);
    OldMatrix mat_B(mat_9x9, 9, 9);
    test.boolean("Matrix::det(void) const", eig_mat_A.det() == mat_A.det());

    Matrix eig_mat_C(rect_mat, 4, 3);
    double test_input_c[] = {1, 4, 7, 10, 2, 5, 8, 11, 3, 6, 9, 12};
    Matrix eig_test_C(test_input_c, 3, 4);
    test.boolean("Matrix::transpose(const Matrix& a)", transpose(eig_mat_C) == eig_test_C);

    Matrix eig_mat_D(mat_3x3[POS_INT], 3, 3);
    Matrix eig_mat_E(invertable_3x3, 3, 3);
    test.boolean("Matrix::isInvertible(void) const", !eig_mat_D.isInvertible() && eig_mat_E.isInvertible());

    OldMatrix mat_F(invertable_3x3, 3, 3);
    Matrix eig_mat_G(invertable_3x3, 3, 3);
    OldMatrix test_mat_F = inverse_lup(mat_F);
    Matrix test_eig_G = inverse_lup(eig_mat_G);
    test.boolean("Matrix::inverse_lup(const Matrix& a)", compareElements(test_mat_F, test_eig_G));

    Matrix eig_mat_H(invertable_3x3, 3, 3);
    double eig_data_I[] = {14, 10, 13};
    Matrix eig_mat_I(eig_data_I, 3, 1);
    Matrix test_eig_J = inverse_lup(eig_mat_H, eig_mat_I);
    double eig_data_K[] = {1, 2, 3};
    Matrix result_eig_K(eig_data_K ,3, 1);

    printMatrix(test_eig_J);
    printMatrix(result_eig_K);

    test.boolean("Matrix::inverse_lup(Matrix& a, Matrix& b)", compareElements(test_eig_J, result_eig_K));
  }

  //==========================================
  // Test matrix decompositions
  //==========================================
  {
    Matrix eig_mat_A(invertable_3x3, 3, 3);
    OldMatrix mat_A(invertable_3x3, 3, 3);

    Matrix eig_L(3, 3);
    Matrix eig_U(3, 3);
    Matrix eig_P(3, 3);

    OldMatrix mat_L(3, 3);
    OldMatrix mat_U(3, 3);
    OldMatrix mat_P(3, 3);

    eig_mat_A.lup(eig_L, eig_U, eig_P);
    mat_A.lup(mat_L, mat_U, mat_P);

    OldMatrix result = inverse(mat_P)*mat_L*mat_U;
    Matrix eig_result = inverse(eig_P)*eig_L*eig_U;

    test.boolean("Matrix::lup(Matrix& L, Matrix& U, Matrix& P) const", compareElements(result, eig_result));
  }

  //==========================================
  // Test norms
  //==========================================
  {
    Matrix eig_vec_A(vec_3[0], 3, 1);
    OldMatrix vec_A(vec_3[0], 3, 1);

    Matrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    OldMatrix mat_A(mat_3x3[POS_INT], 3, 3);

    bool passed = true;
    passed &= eig_vec_A.norm_p(1) == vec_A.norm_p(1);
    passed &= eig_vec_A.norm_p(2) == vec_A.norm_p(2);
    passed &= eig_mat_A.norm_p(2) == mat_A.norm_p(2);
    test.boolean("Matrix::norm_p(double p) const", passed);
    test.boolean("Matrix::norm_2(void) const", eig_vec_A.norm_2() == vec_A.norm_2() && eig_mat_A.norm_2() == mat_A.norm_2());
    test.boolean("Matrix::norm_inf(void) const", eig_vec_A.norm_inf() == vec_A.norm_inf() && eig_mat_A.norm_inf() == mat_A.norm_inf());
  }

  //==========================================
  // Test matrix exponential
  //==========================================
  {
    Matrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    OldMatrix mat_A(mat_3x3[POS_INT], 3, 3);

    Matrix eig_mat_test_A = eig_mat_A.expmts();
    OldMatrix mat_test_A = mat_A.expmts();
    test.boolean("Matrix::expmts(double tol) const", compareElements(eig_mat_test_A, mat_test_A));
  }

  return 0;
}
