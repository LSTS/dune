//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: André Pinto                                                      *
// Author: Eduardo Marques                                                  *
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
