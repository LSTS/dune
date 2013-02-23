//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques (port)                                           *
//***************************************************************************
// $Id:: QPSolver.hpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

#ifndef DUNE_MATH_QPSOLVER_HPP_INCLUDED_
#define DUNE_MATH_QPSOLVER_HPP_INCLUDED_

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
