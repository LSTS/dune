//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: test_Optimization.cpp 12667 2013-01-22 02:44:42Z rasm            $:*
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
