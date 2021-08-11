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

  return 0;
}
