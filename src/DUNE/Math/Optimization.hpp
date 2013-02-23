//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_MATH_OPTIMIZATION_HPP_INCLUDED_
#define DUNE_MATH_OPTIMIZATION_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Math
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Optimization;

    class Optimization
    {
    public:
      //! Typedef for handles of functions to optimize.
      typedef double math_fun_t (double, const void*);

      //! Return code enumeration.
      enum Result
      {
        //! Converged.
        OPT_CONVERGED = 0,
        //! Did not converge.
        OPT_MAX_ITER,
        //! Function was found not be unimodal.
        OPT_NOT_UNIMODAL,
        //! Invalid arguments.
        OPT_INVALID_ARGUMENTS
      };

      //! Minimize a function.
      //! @param f Function to minimize.
      //! @param args Function parameters.
      //! @param a Beginning of interval for minimization.
      //! @param b End of interval for minimization.
      //! @param tol Max. absolute error.
      //! @param max_iter Max. allowed iterations or 0 for unbounded.
      //! @param min_out Found minimum.
      //! @param tol_out Final absolute error.
      static Result
      minimize(math_fun_t* f, const void* args, double a, double b, double tol, unsigned max_iter, double* min_out, double* tol_out);

      //! Maximize a function.
      //! @param f Function to maximize.
      //! @param args Function parameters.
      //! @param a Beginning of interval for maximization.
      //! @param b End of interval for maximization.
      //! @param tol Max. absolute error.
      //! @param max_iter Max. allowed iterations or 0 for unbounded.
      //! @param max_out Found maximum.
      //! @param tol_out Final absolute error.
      static Result
      maximize(math_fun_t* f, const void* args, double a, double b, double tol, unsigned max_iter, double* max_out, double* tol_out);
    };
  }
}

#endif
