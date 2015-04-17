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
// Author: Pedro Calado                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>

// Local headers.
#include <DUNE/Control/AUVModel.hpp>

namespace DUNE
{
  namespace Control
  {
    using namespace Math;
    using std::sin;
    using std::cos;

    //! Constructor.
    AUVModel::AUVModel(const ModelParameters& param):
      m_mass(param.mass),
      m_density(param.density),
      m_volume(param.volume),
      m_motor_friction(param.motor_friction),
      m_max_thrust(param.max_thrust),
      m_cog(param.cog),
      m_addedmass(param.addedmass),
      m_inertia(param.inertia),
      m_ldrag(param.linear_drag),
      m_qdrag(param.quadratic_drag),
      m_lift(param.lift),
      m_fin_lift(param.fin_lift)
    {
      // compute matrix M which does not change with time
      m_matrix_mass = computeM();
    }

    //! Destructor.
    AUVModel::~AUVModel(void)
    { }

    Matrix
    AUVModel::step(const Matrix& nu_dot, const Matrix& nu, const Matrix& eta)
    {
      return m_matrix_mass * nu_dot + computeC(nu) * nu + computeD(nu) * nu + computeL(nu) * nu + computeG(eta);
    }

    Matrix
    AUVModel::stepInv(const Matrix& tau, const Matrix& nu, const Matrix& eta)
    {
      return inverse(m_matrix_mass) * (tau - computeC(nu) * nu - computeD(nu) * nu - computeL(nu) * nu - computeG(eta));
    }

    Matrix
    AUVModel::stepInv(const Matrix& xyz, const Matrix& deflections, const Matrix& nu, const Matrix& eta)
    {
      Matrix tau(6, 1, 0.0);

      tau(0) = xyz(0);
      tau(1) = xyz(1) + m_fin_lift(0) * nu(0) * nu(0) * deflections(2);
      tau(2) = xyz(2) + m_fin_lift(1) * nu(0) * nu(0) * deflections(1);

      tau(3) = m_fin_lift(2) * nu(0) * nu(0) * deflections(0);
      tau(4) = m_fin_lift(3) * nu(0) * nu(0) * deflections(1);
      tau(5) = m_fin_lift(4) * nu(0) * nu(0) * deflections(2);

      return stepInv(tau, nu, eta);
    }

    Matrix
    AUVModel::stepInv(double thruster_act, const Matrix& servo_pos, const Matrix& nu, const Matrix& eta)
    {
      Matrix tau = computeTau(nu(0), thruster_act, servo_pos);
      return stepInv(tau, nu, eta);
    }

    //! Computes matrix of added mass and inertia
    Matrix
    AUVModel::computeM(void)
    {
      // added mass matrix
      Matrix Ma = -Matrix(&m_addedmass(0), 6);

      // mass and cog submatrix
      Matrix cog = -skew(m_cog) * m_mass;

      // inertia submatrix
      Matrix I(&m_inertia(0), 3);

      Matrix Mrb = Matrix(3) * m_mass;
      Mrb.vertCat(-cog);
      Mrb.horzCat(cog.vertCat(I));

      return Mrb + Ma;
    }

    //! Computes coriolis and centripetal matrix in the skew symmetric form
    Matrix
    AUVModel::computeC(const Matrix& nu)
    {
      // CA
      Matrix a = (m_addedmass & nu).get(0, 2, 0, 0);
      Matrix b = (m_addedmass & nu).get(3, 5, 0, 0);

      Matrix ca = Matrix(3, 3, 0.0).horzCat(skew(a));
      ca.vertCat(skew(a).horzCat(skew(b)));

      // CRB
      Matrix skew_cog = skew(m_cog);

      Matrix skew_v1 = skew(nu.get(0, 2, 0, 0));
      Matrix skew_v2 = skew(nu.get(3, 5, 0, 0));

      Matrix crb(3, 3, 0.0);
      crb.vertCat(-m_mass * skew_v1 + m_mass * skew_cog * skew_v2);

      Matrix crb2 = -m_mass * skew_v1 - m_mass * skew_v2 * skew_cog;
      crb2.vertCat(-skew(Matrix(&m_inertia(0), 3) * nu.get(3, 5, 0, 0)));

      crb.horzCat(crb2);

      return ca + crb;
    }

    //! Routine to compute matrix D using state nu
    Matrix
    AUVModel::computeD(const Matrix& nu)
    {
      double u = nu(0);
      double v = nu(1);
      double w = nu(2);
      double p = nu(3);
      double q = nu(4);
      double r = nu(5);

      // initialize linear drag matrix with diagonal terms
      Matrix dl = Matrix(&m_ldrag(0), 6);
      // initialize quadratic drag matrix
      Matrix dq = Matrix(6);

      // linear drag coupling terms
      dl(1, 5) = m_ldrag(6);
      dl(2, 4) = m_ldrag(7);
      dl(4, 2) = m_ldrag(8);
      dl(5, 1) = m_ldrag(9);

      // quadratic diagonal terms
      dq(0, 0) = m_qdrag(0) * std::abs(u);
      dq(1, 1) = m_qdrag(1) * std::abs(v);
      dq(2, 2) = m_qdrag(2) * std::abs(w);
      dq(3, 3) = m_qdrag(3) * std::abs(p);
      dq(4, 4) = m_qdrag(4) * std::abs(q);
      dq(5, 5) = m_qdrag(5) * std::abs(r);
      // quadratic coupling terms
      dq(1, 5) = m_qdrag(6) * std::abs(v);
      dq(2, 4) = m_qdrag(7) * std::abs(w);
      dq(4, 2) = m_qdrag(8) * std::abs(q);
      dq(5, 1) = m_qdrag(9) * std::abs(r);

      return -(dl + dq);
    }

    //! Routine to compute lift forces matrix
    Matrix
    AUVModel::computeL(const Matrix& nu)
    {
      Matrix lift(6, 6, 0.0);

      lift(1, 1) = m_lift(0);
      lift(2, 2) = m_lift(1);
      lift(4, 4) = m_lift(2);
      lift(5, 5) = m_lift(3);
      lift(1, 5) = m_lift(4);
      lift(2, 4) = m_lift(5);
      lift(4, 2) = m_lift(6);
      lift(5, 1) = m_lift(7);

      return -lift * nu(0);
    }

    //! Routine to compute vector of restoring forces g
    Matrix
    AUVModel::computeG(const Matrix& eta)
    {
      double phi = eta(3);
      double theta = eta(4);
      double W = m_mass * Math::c_gravity;
      double B = m_density * Math::c_gravity * m_volume;
      double g[6] =
      {
        (W - B) * sin(theta),
        -(W - B) * cos(theta) * sin(phi),
        -(W - B) * cos(theta) * cos(phi),
        -m_cog(1) * W * cos(theta) * cos(phi) + m_cog(2) * W * cos(theta) * sin(phi),
        m_cog(2) * W * sin(theta) + m_cog(0) * W * cos(theta) * cos(phi),
        -m_cog(0) * W * cos(theta) * sin(phi) - m_cog(1) * W * sin(theta)
      };

      return Matrix(g, 6, 1);
    }

    Matrix
    AUVModel::computeTau(double speed_u, double thruster_act, const Matrix& servo_pos)
    {
      Matrix tau(6, 1, 0.0);
      Matrix deflections(3, 1, 0.0);

      deflections(0) = servo_pos(3) - servo_pos(0) + servo_pos(1) - servo_pos(2);
      deflections(1) = servo_pos(1) + servo_pos(2);
      deflections(2) = servo_pos(0) + servo_pos(3);

      tau(0) = thruster_act * m_max_thrust;
      tau(1) = m_fin_lift(0) * speed_u * speed_u * deflections(2);
      tau(2) = m_fin_lift(1) * speed_u * speed_u * deflections(1);
      tau(3) = m_fin_lift(2) * speed_u * speed_u * deflections(0) + m_motor_friction * tau(0);
      tau(4) = m_fin_lift(3) * speed_u * speed_u * deflections(1);
      tau(5) = m_fin_lift(4) * speed_u * speed_u * deflections(2);

      return tau;
    }
  }
}
