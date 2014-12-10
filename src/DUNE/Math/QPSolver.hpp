//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Eduardo Marques (port)                                           *
//***************************************************************************

#ifndef DUNE_MATH_QP_SOLVER_HPP_INCLUDED_
#define DUNE_MATH_QP_SOLVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Math/Matrix.hpp>

namespace DUNE
{
  namespace Math
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM QPSolver;

    //! Quadratic programming solver.
    class QPSolver
    {
    public:
      //! Exception raised by QPSolver class.
      class Error: public std::runtime_error
      {
      public:
        Error(const std::string& msg):
          std::runtime_error("QP solver error: " + msg)
        { }
      };

      //! Minimize
      //!   0.5 x' H x + f' x
      //! subject to:
      //!   A x <= b
      static double
      solve(const Matrix& H, const Matrix& f, const Matrix& A, const Matrix& b, Matrix& x);

      //! Minimize
      //!   0.5 x' H x + f' x
      //! subject to:
      //!   A x <= b  and Aeq x = beq
      static double
      solve(const Matrix& H, const Matrix& f, const Matrix& Aeq, const Matrix& beq, const Matrix& A, const Matrix& b, Matrix& x);
    };
  }
}
#endif
