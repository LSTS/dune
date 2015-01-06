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
