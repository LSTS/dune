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

// Local headers.
#include <DUNE/Navigation/autonaut.hpp>
#include <DUNE/Math.hpp>

static const double DEG2RAD = M_PI/180.0f;

namespace DUNE
{
  namespace Navigation
  {

    autonaut::autonaut(double T, double dt)
    : m_n_samp(T/dt)
    {
      m_x.resize(m_n_samp);
      m_y.resize(m_n_samp);
      m_psi.resize(m_n_samp);
      m_u.resize(m_n_samp);
      m_v.resize(m_n_samp);
      m_r.resize(m_n_samp);

      // Simulation parameters
      m_T = T;
      m_DT = dt;

      // Model parameters
      m_A = 2.5; // [m]
      m_B = 2.5; // [m]
      m_C = 0.4; // [m]
      m_D = 0.4; // [m]
      m_l = (m_A + m_B);
      m_w = (m_C + m_D); // this is the beam.

      calculate_position_offsets();
    }

    autonaut::~autonaut(){
    }

    void autonaut::linearPredictionInger(const std::vector<double>& state, double u_d, double psi_d)
    {
      m_psi(0) = normalize_angle(psi_d);
	    m_x(0) = state[0] + m_os_x*cos(state[2]) - m_os_y*sin(state[2]);
	    m_y(0) = state[1] + m_os_x*sin(state[2]) + m_os_y*cos(state[2]);
	    m_u(0) = state[3];
	    m_v(0) = state[4];
	    m_r(0) = state[5];

      double r11, r12, r21, r22;

      r11 = cos(psi_d);
      r12 = -sin(psi_d);
      r21 = sin(psi_d);
      r22 = cos(psi_d);

      for (int i = 0; i < m_n_samp-1; i++)
      {
        m_x(i+1) = m_x(i) + m_DT*(r11*m_u(i) + r12*m_v(i));
        m_y(i+1) = m_y(i) + m_DT*(r21*m_u(i) + r22*m_v(i));
        m_psi(i+1) = psi_d;
        m_u(i+1) = u_d;
        m_v(i+1) = 0;
	    }
    }


    Eigen::VectorXd autonaut::getX(){
      return m_x;
    }

    Eigen::VectorXd autonaut::getY(){
      return m_y;
    }

    Eigen::VectorXd autonaut::getPsi(){
      return m_psi;
    }

    Eigen::VectorXd autonaut::getU(){
      return m_u;
    }

    Eigen::VectorXd autonaut::getV(){
      return m_v;
    }

    Eigen::VectorXd autonaut::getR(){
      return m_r;
    }

    double autonaut::getA(){
      return m_A;
    }

    double autonaut::getB(){
      return m_B;
    }

    double autonaut::getC(){
      return m_C;
    }

    double autonaut::getD(){
      return m_D;
    }

    double autonaut::getL(){
      return m_l;
    }

    double autonaut::getW(){
      return m_w;
    }

    double autonaut::getT(){
      return m_T;
    }

    double autonaut::getDT(){
      return m_DT;	
    }

    double autonaut::getNsamp(){
      return m_n_samp;
    }

    void  autonaut::setA(double A){
      m_A = A;
    }

    void autonaut::setB(double B){
      m_B = B;
    }

    void autonaut::setC(double C){
      m_C = C;
    }

    void autonaut::setD(double D){
      m_D = D;
    }

    void autonaut::setT(double T){
      m_T = T;
    }

    void autonaut::setDT(double DT){
      m_DT = DT;
    }

    void autonaut::setNsamp(int n_samp){
      m_n_samp = n_samp;
    }


    void autonaut::calculate_position_offsets(){
      m_os_x = m_A-m_B;
      m_os_y = m_D-m_C;
    }

    // This is not needed, dune has it already.
    double autonaut::normalize_angle(double angle)
    {
      if( std::isinf(angle)) return angle;
      
      while(angle <= -M_PI){
        angle += 2*M_PI;
      }
      
      while (angle > M_PI){
        angle -= 2*M_PI;
      }

      return angle;
    }
  }
}