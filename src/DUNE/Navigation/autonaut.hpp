//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Alberto Dallolio                                                 *
//***************************************************************************

#ifndef DUNE_NAVIGATION_AUTONAUT_HPP_INCLUDED_
#define DUNE_NAVIGATION_AUTONAUT_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <Eigen/Dense>

namespace DUNE
{
  namespace Navigation
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM autonaut;

    class autonaut
    {
      public:

      /// Constructor
      autonaut(double T, double dt);

      /// Destructor
      ~autonaut();

      void linearPredictionInger(const std::vector<double>& state, double u_d, double psi_d);

      Eigen::VectorXd getX();
      Eigen::VectorXd getY();
      Eigen::VectorXd getPsi();
      Eigen::VectorXd getU();
      Eigen::VectorXd getV();
      Eigen::VectorXd getR();

      double getA();
      double getB();
      double getC();
      double getD();

      double getL();
      double getW();

      double getT();
      double getDT();
      double getNsamp();

      void setT(double T);
      void setDT(double DT);
      void setNsamp(int n_samp);

      void setA(double A);
      void setB(double B);
      void setC(double C);
      void setD(double D);

      Eigen::VectorXd m_x;
      Eigen::VectorXd m_y;
      Eigen::VectorXd m_psi;
      Eigen::VectorXd m_u;
      Eigen::VectorXd m_v;
      Eigen::VectorXd m_r;

      double m_A, m_B, m_C, m_D, m_l, m_w;
      double m_os_x, m_os_y;

      private:

      // Calculates the offsets according to the position of the GPS receiver
      void calculate_position_offsets();

      // Assures that angle is between [-PI, PI)
      double normalize_angle(double angle);

      // Simulation parameters
      double m_DT;
      double m_T;
      //const int n_samp_;
      int m_n_samp; // possibility to set from sb_mpc
                
    };
  }  
}  
  
#endif /* AUTONAUT_HPP_ */