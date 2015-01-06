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
