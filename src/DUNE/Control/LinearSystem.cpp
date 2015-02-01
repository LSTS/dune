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
// Author: Rui Gomes                                                        *
//***************************************************************************

#include <DUNE/Control/LinearSystem.hpp>

using namespace DUNE::Math;

namespace DUNE
{
  namespace Control
  {
    static const unsigned int c_ds = 1000; // Number of discretization steps

    // Default Constructor for a null system
    LinearSystem::LinearSystem(void):
      m_n_in(0),
      m_n_out(0),
      m_n_st(0)
    { }

    // Constructor for continuous system
    LinearSystem::LinearSystem(const Matrix& a, const Matrix& b, const Matrix& c, const Matrix& d, double Ts)
    {
      if (a.rows() != b.rows())
        throw Error("The number of rows of A and B must be the same");
      if (c.rows() != d.rows())
        throw Error("The number of rows of C and D must be the same");
      if (a.columns() != c.columns())
        throw Error("The number of columns of A and C must be the same");
      if (b.columns() != d.columns())
        throw Error("The number of columns of B and D must be the same");

      m_A = a;
      m_B = b;
      m_C = c;
      m_D = d;
      m_Ts = Ts;   // 0 for continuous system, discrete system otherwise
      m_n_in = b.columns();
      m_n_out = c.rows();
      m_n_st = a.rows();
      m_X0.resizeAndFill(m_n_st, 1, 0);
      m_Y0.resizeAndFill(m_n_out, 1, 0);
    }

    // Converts a continuous system to it's discrete representation
    LinearSystem&
    LinearSystem::c2d(double Ts)
    {
      LinearSystem old = *this;

      m_Ts = Ts;

      // Adisc=expmatrix(A*Ts)
      m_A = (old.m_A * Ts).expmts();

      //int(expmatrix(A*tau)*B,dtau,0,Ts)
      double dtau = m_Ts / c_ds;
      m_B = old.m_B * dtau;

      for (unsigned int i = 1; i < c_ds; i++)
        m_B = m_B + (old.m_A * i * dtau).expmts() * old.m_B * dtau;

      // Maintain the rest os the variables
      m_C = old.m_C;
      m_D = old.m_D;
      m_X0 = old.m_X0;
      m_Y0 = old.m_Y0;
      m_n_in = old.m_n_in;
      m_n_out = old.m_n_out;
      m_n_st = old.m_n_st;

      return *this;
    }

    // Append a linear systems n times (increasing it's dimention)
    LinearSystem&
    LinearSystem::append(const LinearSystem& a_sys, short n)
    {
      // Expanding system model
      Matrix A_f;
      Matrix B_f;
      Matrix C_f;
      Matrix D_f;
      Matrix X0;
      Matrix Y0;

      for (int i = 0; i < n; i++)
      {
        A_f.blkDiag(a_sys.getA());
        B_f.blkDiag(a_sys.getB());
        C_f.blkDiag(a_sys.getC());
        D_f.blkDiag(a_sys.getD());
        X0.vertCat(a_sys.getX0());
        Y0.vertCat(a_sys.getY0());
      }

      m_A = A_f;
      m_B = B_f;
      m_C = C_f;
      m_D = D_f;
      m_X0 = X0;
      m_Y0 = Y0;
      m_n_in = a_sys.getIn() * n;
      m_n_out = a_sys.getOut() * n;
      m_n_st = a_sys.getSt() * n;
      m_Ts = a_sys.getTs();

      return (*this);
    }

    // Simulates a linear systems at the current time step
    Matrix
    LinearSystem::simLinearSystem(const Matrix& a_u, double threshold)
    {
      if (m_Ts == 0)
        throw Error("This system is continuous. Please discretize first.");
      if (m_B.columns() != a_u.rows())
        throw Error("The number of rows of a_u and the number of columns of B must be the same");

      if (threshold != 0 && a_u.rows() == 1)
      {
        if (std::abs((double)(a_u - m_C * m_X0 + m_D * a_u)(0)) < threshold)
          m_X0 = m_A * m_X0 + m_B * a_u;
      }
      else
      {
        m_X0 = m_A * m_X0 + m_B * a_u;
      }

      m_Y0 = m_C * m_X0 + m_D * a_u;

      return m_Y0;
    }

    std::ostream&
    operator<<(std::ostream& os, const LinearSystem& sys)
    {
      if (sys.m_Ts == 0)
        os << "Continuous System:" << std::endl;
      else
        os << "Discrete System (Ts=" << sys.m_Ts << "s):" << std::endl;
      os << "A:" << std::endl << sys.m_A << std::endl;
      os << "B:" << std::endl << sys.m_B << std::endl;
      os << "C:" << std::endl << sys.m_C << std::endl;
      os << "D:" << std::endl << sys.m_D << std::endl;
      os << "X0:" << std::endl << sys.m_X0 << std::endl;
      os << "Y0:" << std::endl << sys.m_Y0 << std::endl;
      os << "States=" << sys.m_n_st << ", Inputs=" << sys.m_n_in << ", Outpus=" << sys.m_n_out << std::endl;
      return os;
    }
  }
}
