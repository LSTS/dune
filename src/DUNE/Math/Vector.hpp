//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: André Pinto                                                      *
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Vector.hpp 12667 2013-01-22 02:44:42Z rasm                       $:*
//***************************************************************************

#ifndef DUNE_MATH_VECTOR_HPP_INCLUDED_
#define DUNE_MATH_VECTOR_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Math
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Vector;

    class Vector
    {
    public:
      class Error: public std::runtime_error
      {
      public:
        Error(const std::string& msg):
          std::runtime_error("vector error: " + msg)
        { }
      };

      Vector(unsigned int sz = 0):
        m_data(0),
        m_size(0)
      {
        resize(sz);
      }

      //! Set all elements to 0.
      void
      zero(void);

      //! Set all elements to a given value.
      void
      fill(double v);

      Vector&
      operator=(const Vector& o);

      inline double&
      operator()(unsigned int index)
      {
        return m_data[index];
      }

      inline double
      operator()(unsigned int index) const
      {
        return m_data[index];
      }

      Vector
      operator+(const Vector& o) const;

      Vector
      operator/(double t) const;

      Vector
      operator-(const Vector& o) const;

      Vector
      normalize() const;

      static double
      sqrLen(const Vector& a);

      static double
      dot(const Vector& a, const Vector& b);

      void
      resize(unsigned int sz);

      inline unsigned
      size(void) const
      {
        return m_size;
      }

      friend std::istream&
      operator>>(std::istream&, Vector& v);
      friend std::ostream&
      operator<<(std::ostream&, const Vector& v);

    protected:
      double* m_data;
      unsigned int m_size;
    };
  }
}

#endif
