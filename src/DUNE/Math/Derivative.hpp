//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_MATH_DERIVATIVE_HPP_INCLUDED_
#define DUNE_MATH_DERIVATIVE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Delta.hpp>

namespace DUNE
{
  namespace Math
  {
    // %Derivative applies Newton's difference quotient.
    template <typename Type>
    class Derivative
    {
    public:
      //! Constructor.
      Derivative(void)
      {
        clear();
      }

      //! Clear data.
      void
      clear(void)
      {
        m_val_latest = 0;
        m_val_previous = 0;
        m_derivative = 0;
        m_delta.clear();
      }

      //! Update with new value.
      Type
      update(const Type& value)
      {
        m_val_previous = m_val_latest;
        m_val_latest = value;

        double tstep = m_delta.getDelta();

        if (tstep <= 0.0)
          return 0;

        m_derivative = (m_val_latest - m_val_previous) / tstep;

        return m_derivative;
      }

      //! Check current derivative.
      Type
      check(void) const
      {
        return m_derivative;
      }

    private:
      //! Latest value.
      Type m_val_latest;
      //! Previous value.
      Type m_val_previous;
      //! Derivative.
      Type m_derivative;
      //! Time window between values.
      DUNE::Time::Delta m_delta;
    };
  }
}

#endif
