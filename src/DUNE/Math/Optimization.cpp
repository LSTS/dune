//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Optimization.cpp 12667 2013-01-22 02:44:42Z rasm                 $:*
//***************************************************************************
// == Implementation notes ==
//
// This is an implementation of the classic Golden Section minimization
// algorithm.
//
// The code is close to that found in the GNU Scientific Library (GSL)
// (see min/golden.c in the GSL source code - ftp://ftp.gnu.org/gnu/gsl)
//
// Some things can be improved if found necessary in the future:
// - Termination criteria based on relative error too or computation time.
// - Use Brent's minimization algorithm since it converges faster.
//***************************************************************************

#include <DUNE/Math/Constants.hpp>
#include <DUNE/Math/Optimization.hpp>

namespace DUNE
{
  namespace Math
  {
    // Wrapper structure to allow conversion of calls to maximize() to
    // calls to minimize().
    struct FuncWrapper
    {
      Optimization::math_fun_t* f;
      const void* args;
    };

    // Optimization algorithm (see explanation in file header).
    Optimization::Result
    Optimization::minimize(math_fun_t* f, const void* args, double a, double b, double tol, unsigned max_iter, double* min_out, double* tol_out)
    {
      if (a > b || tol <= 0)
        return OPT_INVALID_ARGUMENTS;

      const double g = 2.0 - c_golden_ratio;

      double m, m1;
      double fa, fb, fm, fm1;
      double w_lower, w_upper;

      m = 0.5 * (a + b); // the initial guess

      fa = f(a, args);
      fb = f(b, args);
      fm = f(m, args);

      unsigned iter = 0;
      do
      {
        w_lower = m - a,
        w_upper = b - m;
        m1 = m + g * (w_upper > w_lower ? w_upper : -w_lower);
        fm1 = f(m1, args);

        if (fm1 < fm)
        {
          m = m1;
          fm = fm1;
        }
        else if (m1 < m && fm1 < fa)
        {
          a = m1;
          fa = fm1;
        }
        else if (m1 > m && fm1 < fb)
        {
          b = m1;
          fb = fm1;
        }
        else
        {
          // Function is not unimodal
          return OPT_NOT_UNIMODAL;
        }
        *tol_out = b - a;
      }
      while (*tol_out > tol && ++iter != max_iter);

      *min_out = m;
      return iter != max_iter ? OPT_CONVERGED : OPT_MAX_ITER;
    }

    // Wrapper function for maximize() to use.
    static double
    max_function_wrapper(double x, const void* args)
    {
      const FuncWrapper* w = reinterpret_cast<const FuncWrapper*>(args);
      return -(w->f)(x, w->args);
    }

    Optimization::Result
    Optimization::maximize(math_fun_t* f, const void* args, double a, double b, double tol, unsigned max_iter, double* min_out, double* tol_out)
    {
      FuncWrapper fw = {f, args};

      return minimize(&max_function_wrapper, &fw, a, b, tol, max_iter, min_out, tol_out);
    }
  }
}
