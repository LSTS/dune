//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// Test program for DUNE::Math::Optimization class.                         *
//***************************************************************************
#include <cmath>
#include "Test.hpp"
#include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/Optimization.hpp>

using namespace DUNE::Math;

// Minimum in [0, pi] is at pi/2.
static double
f1(double x, const void* args)
{
  return -std::sin(x);
}

// Maximum in [0, pi] is at pi/2.
static double
inv_f1(double x, const void* args)
{
  return std::sin(x);
}

// Minimum is at 1.
static double
f2(double x, const void* args)
{
  return (x - 1) * (x - 1);
}

// Maximum is at 1.
static double
inv_f2(double x, const void* args)
{
  return -(x - 1) * (x - 1);
}

int
main(int argc, char** argv)
{
  Test test("DUNE::Math::Optimization");

  struct TestInstance
  {
    Optimization::math_fun_t* f;
    double a;
    double b;
    double m;
  };

  TestInstance min_tests[] =
  {
    {f1, c_pi / 4, c_pi, c_half_pi},
    {f2, -20,      50,   1        }
  };

  TestInstance max_tests[] =
  {
    {inv_f1, c_pi / 4, c_pi, c_half_pi},
    {inv_f2, -20,      50,   1        }
  };

  for (unsigned i = 0; i < sizeof(min_tests) / sizeof(TestInstance); ++i)
  {
    TestInstance* tst = &min_tests[i];
    double min = 0;
    double tol = 0;

    Optimization::Result r =
      Optimization::minimize(tst->f, 0, tst->a, tst->b, 0.1, 100, &min, &tol);
    test.boolean("minimize()", r == Optimization::OPT_CONVERGED && std::fabs(min - tst->m) < tol);
  }

  for (unsigned i = 0; i < sizeof(max_tests) / sizeof(TestInstance); ++i)
  {
    TestInstance* tst = &max_tests[i];
    double min = 0;
    double tol = 0;

    Optimization::Result r =
      Optimization::maximize(tst->f, 0, tst->a, tst->b, 0.1, 100, &min, &tol);
    test.boolean("maximize()", r == Optimization::OPT_CONVERGED && std::fabs(min - tst->m) < tol);
  }

  return 0;
}
