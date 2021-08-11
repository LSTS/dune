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

// Auxiliary functions
template<typename Mat>
void
printMatrix(Mat& m)
{
#ifdef DEBUG
  std::stringstream ss;
  ss << m;
  std::cout << "Size: " << m.size() << "\n";
  std::cout << "Matrix:\n" << ss.str() << "\n";
#endif
}

int
main(void)
{
  Test test("Math::EigenMatrix");


  //==========================================
  // Test constructors
  //==========================================
  {
    bool passed = false;
    try
    {
      EigenMatrix eig_mat;
      passed = true;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix()", passed);

    passed = false;
    try
    {
      EigenMatrix eig_mat(3, 3);
      passed = true;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(double r, double c)", passed);

    passed = false;
    try
    {
      EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);
      Matrix std_mat(mat_3x3[POS_INT], 3, 3);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(double* data, double r, double c)", passed);

    passed = false;
    try
    {
      Matrix std_mat(mat_3x3[POS_INT], 3, 3);
      EigenMatrix input_mat(mat_3x3[POS_INT], 3, 3);
      EigenMatrix out_mat(input_mat);
      passed = memcmp(out_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(const EigenMatrix& m)", passed);

    passed = false;
    try
    {
      Matrix std_mat(3);
      EigenMatrix eig_mat(3);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(size_t n)", passed);

    passed = false;
    try
    {
      Matrix std_mat(mat_3x3[POS_INT], 9);
      EigenMatrix eig_mat(mat_3x3[POS_INT], 9);
      passed = memcmp(eig_mat.begin(), std_mat.begin(), 9) == 0;
    }
    catch (std::runtime_error& e)
    {
      std::cerr << e.what() << std::endl;
    }
    test.boolean("EigenMatrix::EigenMatrix(double* diag, size_t n)", passed);
  }

  //==========================================
  // Test pointer access
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);

    double* p;
    p = eig_mat.begin();
    test.boolean("EigenMatrix::begin()", *p == 1);
    p = eig_mat.end();
    test.boolean("EigenMatrix::end()", *p == 9);

    // Const pointer
    const double* begin_pointer = eig_mat.begin();
    test.boolean("EigenMatrix::begin()", *begin_pointer == 1);
    const double* end_pointer = eig_mat.end();
    test.boolean("EigenMatrix::end()", *end_pointer == 9);

    // Const pointer
    const double* begin_pointer2 = eig_mat.cbegin();
    test.boolean("EigenMatrix::cbegin()", *begin_pointer2 == 1);
    const double* end_pointer2 = eig_mat.cend();
    test.boolean("EigenMatrix::cend()", *end_pointer2 == 9);
  }

  //==========================================
  // Test sizes
  //==========================================
  {
    EigenMatrix eig_mat(rect_mat, 4, 3);

    test.boolean("EigenMatrix::rows()", eig_mat.rows() == 4);
    test.boolean("EigenMatrix::columns()", eig_mat.columns() == 3);
    test.boolean("EigenMatrix::size()", eig_mat.size() == 12);
  }

  //==========================================
  // Test element access
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);

    test.boolean("EigenMatrix::operator()(size_t i, size_t j) const", eig_mat(2, 0) == 7);
    test.boolean("EigenMatrix::operator()(size_t i)", eig_mat(6) == 7);

    test.boolean("EigenMatrix::element()(size_t i, size_t j) const", eig_mat.element(2, 0) == 7);
    test.boolean("EigenMatrix::element()(size_t i)", eig_mat.element(6) == 7);
  }

  //==========================================
  // Test operators
  //==========================================
  {
    EigenMatrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_B(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_C(mat_3x3[NEG_INT], 3, 3);
    test.boolean("EigenMatrix::operator==(const EigenMatrix& m) const", eig_mat_A == eig_mat_B && !(eig_mat_A == eig_mat_C));

    EigenMatrix eig_mat_A_cpy;
    eig_mat_A_cpy = eig_mat_A;
    test.boolean("EigenMatrix::operator=(const EigenMatrix& m)", eig_mat_A == eig_mat_A_cpy);
  }

  //==========================================
  // Test matrix types
  //==========================================
  {
    EigenMatrix eig_square_mat(3, 3, 7);
    EigenMatrix eig_row_vec(1, 3, 7);
    EigenMatrix eig_col_vec(3, 1, 7);
    EigenMatrix eig_empty_mat;

    test.boolean("EigenMatrix::isSquare()", eig_square_mat.isSquare());
    test.boolean("EigenMatrix::isVector()", eig_row_vec.isVector() && eig_col_vec.isVector());
    test.boolean("EigenMatrix::isRowVector()", eig_row_vec.isRowVector());
    test.boolean("EigenMatrix::isRowVector(size_t c)", eig_row_vec.isRowVector(3));
    test.boolean("EigenMatrix::isColumnVector()", eig_col_vec.isColumnVector());
    test.boolean("EigenMatrix::isColumnVector(size_t c)", eig_col_vec.isColumnVector(3));
    test.boolean("EigenMatrix::isEmpty()", eig_empty_mat.isEmpty());
  }

  //==========================================
  // Test limit values
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);
    bool passed = true;

    double min_limit = 2;
    double max_limit = 6;

    eig_mat.maxLimitValues(max_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) > max_limit)
        passed = false;
    }
    test.boolean("EigenMatrix::maxLimitValues(double max)", passed);

    passed = true;
    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.minLimitValues(min_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < min_limit)
        passed = false;
    }
    test.boolean("EigenMatrix::minLimitValues(double min)", passed);
    
    passed = true;
    eig_mat.fill(3, 3, mat_3x3[POS_INT]);
    eig_mat.trimValues(min_limit, max_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < min_limit || eig_mat(i) > max_limit)
        passed = false;
    }
    test.boolean("EigenMatrix::trimValues(double min, double max)", passed);
    
    passed = true;
    eig_mat.fill(3, 3, mat_3x3[NEG_INT]);
    eig_mat.trimValues(min_limit);
    for(size_t i = 0; i < eig_mat.size(); i++)
    {
      if (eig_mat(i) < -min_limit || eig_mat(i) > min_limit)
        passed = false;
    }
    test.boolean("EigenMatrix::trimValues(double lim)", passed);
  }

  //==========================================
  // Test block operations
  //==========================================
  {
    EigenMatrix eig_mat(mat_3x3[POS_INT], 3, 3);
    EigenMatrix block(2, 2);
    block = eig_mat.get(1, 2, 1, 2);

    double input_mat[] = {5, 6, 8, 9};
    EigenMatrix compare_mat(input_mat, 2, 2);
    test.boolean("EigenMatrix::get(size_t i1, size_t i2, size_t j1, size_t j2) const", block == compare_mat);

    eig_mat.set(0, 1, 0, 1, compare_mat);
    double input_mat2[] = {5, 6, 3, 8, 9, 6, 7, 8, 9};
    EigenMatrix compare_mat2(input_mat2, 3, 3);
    test.boolean("EigenMatrix::set(size_t i1, size_t i2, size_t j1, size_t j2, const EigenMatrix& m)", eig_mat == compare_mat2);


    EigenMatrix eig_mat_A(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_B(mat_3x3[NEG_INT], 3, 3);
    EigenMatrix eig_mat_res = eig_mat_A.blkDiag(eig_mat_B);
    double input_mat3[] = {1, 2, 3, 0, 0, 0, 
                           4, 5, 6, 0, 0, 0,
                           7, 8, 9, 0, 0, 0,
                           0, 0, 0, -4, -3, -2,
                           0, 0, 0, -1, 0, 1,
                           0, 0, 0, 2, 3, 4};
    EigenMatrix compare_mat3(input_mat3, 6, 6);
    test.boolean("EigenMatrix::blkDiag(const EigenMatrix& mx_in)", eig_mat_res == compare_mat3);

    EigenMatrix eig_mat_C(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_D(mat_3x3[NEG_INT], 3, 3);
    EigenMatrix eig_mat_res2 = eig_mat_C.vertCat(eig_mat_D);
    double input_mat4[] = {1, 2, 3, 
                           4, 5, 6,
                           7, 8, 9,
                          -4, -3, -2,
                          -1, 0, 1,
                           2, 3, 4};
    EigenMatrix compare_mat4(input_mat4, 6, 3);
    test.boolean("EigenMatrix::vertCat(const EigenMatrix& mx_in)", eig_mat_res2 == compare_mat4);

    EigenMatrix eig_mat_E(mat_3x3[POS_INT], 3, 3);
    EigenMatrix eig_mat_F(mat_3x3[NEG_INT], 3, 3);
    EigenMatrix eig_mat_res3 = eig_mat_E.horzCat(eig_mat_F);
    double input_mat5[] = {1, 2, 3, -4, -3, -2,
                           4, 5, 6, -1, 0, 1,
                           7, 8, 9, 2, 3, 4};                          
                          
                           
    EigenMatrix compare_mat5(input_mat5, 3, 6);
    test.boolean("EigenMatrix::horzCat(const EigenMatrix& mx_in)", eig_mat_res3 == compare_mat5);
  }

  return 0;
}
