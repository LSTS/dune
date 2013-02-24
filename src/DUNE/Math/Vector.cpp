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

// ISO C++ 98 headers.
#include <cstring>
#include <iostream>

// DUNE headers.
#include <DUNE/Math/Vector.hpp>

namespace DUNE
{
  namespace Math
  {
    Vector&
    Vector::operator=(const Vector& o)
    {
      resize(o.m_size);
      std::memcpy(m_data, o.m_data, m_size * sizeof(double));
      return *this;
    }

    Vector
    Vector::operator+(const Vector& o) const
    {
      if (m_size != o.m_size)
        throw Error("differently sized vectors in vector addition");

      Vector r(m_size);

      for (unsigned int i = 0; i < m_size; i++)
        r.m_data[i] = m_data[i] + o.m_data[i];

      return r;
    }

    Vector
    Vector::operator/(double t) const
    {
      Vector r(m_size);
      for (unsigned int i = 0; i < m_size; i++)
        r.m_data[i] = m_data[i] / t;
      return r;
    }

    Vector
    Vector::operator-(const Vector& o) const
    {
      if (m_size != o.m_size)
        throw Error("differently sized vectors in vector subtraction");

      Vector r(m_size);

      for (unsigned int i = 0; i < m_size; i++)
        r.m_data[i] = m_data[i] - o.m_data[i];

      return r;
    }

    Vector
    Vector::normalize() const
    {
      return *this / std::sqrt(sqrLen(*this));
    }

    double
    Vector::sqrLen(const Vector& a)
    {
      double v = 0;
      double* p = a.m_data;
      double* end = p + a.m_size;
      while (p != end)
      {
        v += (*p) * (*p);
        ++p;
      }
      return v;
    }

    double
    Vector::dot(const Vector& a, const Vector& b)
    {
      if (a.m_size != b.m_size)
        throw Error("Different sizes in dot product calculation");

      double v = 0;
      double* pa = a.m_data, * pb = b.m_data, * end = pa + a.m_size;

      while (pa != end)
      {
        v += (*pa) * (*pb);
        ++pa; ++pb;
      }

      return v;
    }

    void
    Vector::resize(unsigned int sz)
    {
      if (sz == m_size)
        return;
      if (m_data)
        delete m_data;
      m_size = sz;
      m_data = sz ? new double[sz] : 0;
    }

    void
    Vector::zero(void)
    {
      if (m_size)
        std::memset(m_data, 0, m_size * sizeof(double));
    }

    void
    Vector::fill(double v)
    {
      double* p = m_data;
      double* p_e = p + m_size;
      while (p != p_e)
      {
        *p = v;
        ++p;
      }
    }

    std::istream&
    operator>>(std::istream& is, Vector& v)
    {
      double* p = v.m_data;
      double* p_e = p + v.m_size;

      while (p != p_e)
      {
        is >> *p;
        ++p;
      }
      return is;
    }

    std::ostream&
    operator<<(std::ostream& os, const Vector& v)
    {
      double* p = v.m_data;
      double* p_e = p + v.m_size;

      while (p != p_e)
      {
        os << *p;
        ++p;
        if (p != p_e)
          os << ' ';
      }
      return os;
    }
  }
}
