//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_ATTITUDE_ESKF_HPP_INCLUDED_
#define DUNE_NAVIGATION_ATTITUDE_ESKF_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>
#include <cstring>

// DUNE headers.
#include <DUNE/Math/Constants.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! Attitude and gyro bias from an IMU and a magnetometer: quaternion
    //! error-state Kalman filter.
    //!
    //! Nominal state: attitude quaternion q (body to NED, Hamilton, scalar
    //! first) and gyro bias b. Error state: [dtheta, db], dtheta a small
    //! body-frame rotation, so q = q_nominal (x) exp(dtheta). Nothing in the
    //! filter goes through Euler angles except the magnetometer innovation,
    //! so it has no singularity at +-90 deg pitch.
    //!
    //! - Predict: q <- q (x) exp(dtheta_gyro - b dt).
    //! - Accelerometer: 3-vector update on the specific force, predicted
    //!   h = -g R^T e3, noise (g sig_acc_dir)^2, inflated when |f| is far from g.
    //! - Magnetometer: scalar update on yaw, Jacobian R row 2 (rotation about
    //!   NED down), no 1/cos(theta).
    //! - Joseph-form covariance updates, symmetrised every step.
    //! - Reset guard: if the predicted gravity stays far from the measured
    //!   specific force while |f| is about g, the filter is re-initialised
    //!   (see Config::reset_full).
    class AttitudeEskf
    {
    public:
      struct Config
      {
        //! Gyro white-noise density (rad/sqrt(s)).
        double sig_gyro;
        //! Gyro-bias random-walk density (rad/s/sqrt(s)).
        double sig_bias;
        //! Standard deviation of the measured gravity direction (about rad).
        double sig_acc_dir;
        //! Magnetometer yaw noise variance (rad^2).
        double r_mag;
        //! | |f| - g | at or above this inflates the accelerometer noise (m/s^2).
        double accel_gate;
        //! Variance factor applied beyond the gate.
        double gate_inflation;
        //! Predicted vs measured gravity angle that arms the reset guard (rad).
        double reset_angle;
        //! Time the angle must persist before a reset (s); <= 0 disables it.
        double reset_hold;
        //! A reset re-initialises the filter: tilt from the accelerometer, yaw
        //! from the magnetometer, gyro bias as it was when the guard armed,
        //! covariance as at start. While the tilt is wrong the bias states
        //! absorb fake rate (1-2 deg/s in 2 s) and the integrated yaw is just as
        //! wrong; kept, they pull the re-levelled tilt off again by several
        //! degrees. False: re-level roll and pitch only, keep yaw and bias.
        bool reset_full;
        //! Added to the magnetic heading (rad); 0 outputs magnetic yaw.
        double declination;

        Config(void):
          sig_gyro(0.005),
          sig_bias(1e-5),
          sig_acc_dir(0.02),
          r_mag(0.0076),
          accel_gate(0.5),
          gate_inflation(100.0),
          reset_angle(60.0 * Math::c_pi / 180.0),
          reset_hold(2.0),
          reset_full(true),
          declination(0.0)
        { }
      };

      AttitudeEskf(const Config& cfg = Config()):
        m_cfg(cfg),
        m_off_for(0.0),
        m_resets(0)
      {
        m_q[0] = 1.0;
        m_q[1] = m_q[2] = m_q[3] = 0.0;
        std::memset(m_b, 0, sizeof(m_b));
        std::memset(m_b_armed, 0, sizeof(m_b_armed));
        std::memset(m_p, 0, sizeof(m_p));
      }

      void
      setConfig(const Config& cfg)
      {
        m_cfg = cfg;
      }

      const Config&
      getConfig(void) const
      {
        return m_cfg;
      }

      //! Seed from one sample: tilt from the specific force, yaw from the
      //! field, bias as given (rad/s).
      void
      initialize(const double f[3], const double m[3], const double bias[3])
      {
        double phi, theta;
        tiltFromAccel(f, phi, theta);
        fromEuler(phi, theta, magYaw(m, phi, theta) + m_cfg.declination, m_q);
        for (unsigned i = 0; i < 3; ++i)
          m_b[i] = bias[i];

        std::memset(m_p, 0, sizeof(m_p));
        m_p[0][0] = m_p[1][1] = 0.1;
        m_p[2][2] = 0.3;
        m_p[3][3] = m_p[4][4] = m_p[5][5] = 1e-4;
        m_off_for = 0.0;
        m_resets = 0;
      }

      //! One predict / update cycle.
      //! @param[in] dt time step (s).
      //! @param[in] dtheta integrated gyro over dt, bias not removed (rad).
      //! @param[in] f specific force (m/s^2).
      //! @param[in] m magnetic field, calibrated (any unit).
      //! @return true if the reset guard fired.
      bool
      step(double dt, const double dtheta[3], const double f[3], const double m[3])
      {
        predict(dt, dtheta);

        double fn = std::sqrt(dot(f, f));
        bool quiet = std::fabs(fn - Math::c_gravity) < m_cfg.accel_gate;

        double h[3];
        gravityBody(h);
        bool fired = guard(dt, f, m, fn, quiet, h);

        // A zero vector is a dropout, not a measurement.
        if (fn > 1e-6)
          updateAccel(f, h, quiet);
        updateMag(m);
        return fired;
      }

      //! Attitude quaternion (body to NED, scalar first).
      const double*
      quaternion(void) const
      {
        return m_q;
      }

      //! Gyro bias (rad/s).
      const double*
      bias(void) const
      {
        return m_b;
      }

      //! Error covariance element.
      double
      covariance(unsigned i, unsigned j) const
      {
        return m_p[i][j];
      }

      //! Times the reset guard fired since initialize().
      unsigned
      resets(void) const
      {
        return m_resets;
      }

      //! ZYX Euler angles of the attitude (rad); theta in [-pi/2, pi/2].
      void
      euler(double& phi, double& theta, double& psi) const
      {
        toEuler(m_q, phi, theta, psi);
      }

      //! Gravity as the accelerometer should see it: R^T (0, 0, -g).
      void
      gravityBody(double h[3]) const
      {
        double r[3][3];
        toDcm(m_q, r);
        for (unsigned i = 0; i < 3; ++i)
          h[i] = -Math::c_gravity * r[2][i];
      }

      //! Roll and pitch from the specific force alone (at rest it reads
      //! (g sin(theta), -g cos(theta) sin(phi), -g cos(theta) cos(phi))).
      static void
      tiltFromAccel(const double f[3], double& phi, double& theta)
      {
        phi = std::atan2(-f[1], -f[2]);
        theta = std::atan2(f[0], std::sqrt(f[1] * f[1] + f[2] * f[2]));
      }

      //! Tilt-compensated magnetic heading.
      static double
      magYaw(const double m[3], double phi, double theta)
      {
        double c_phi = std::cos(phi);
        double s_phi = std::sin(phi);
        double c_th = std::cos(theta);
        double s_th = std::sin(theta);
        return std::atan2(m[2] * s_phi - m[1] * c_phi,
                          m[0] * c_th + m[1] * s_th * s_phi + m[2] * s_th * c_phi);
      }

      //! Body-to-NED rotation matrix of a unit quaternion.
      static void
      toDcm(const double q[4], double r[3][3])
      {
        double w = q[0], x = q[1], y = q[2], z = q[3];
        r[0][0] = 1 - 2 * (y * y + z * z);
        r[0][1] = 2 * (x * y - w * z);
        r[0][2] = 2 * (x * z + w * y);
        r[1][0] = 2 * (x * y + w * z);
        r[1][1] = 1 - 2 * (x * x + z * z);
        r[1][2] = 2 * (y * z - w * x);
        r[2][0] = 2 * (x * z - w * y);
        r[2][1] = 2 * (y * z + w * x);
        r[2][2] = 1 - 2 * (x * x + y * y);
      }

      //! Quaternion of ZYX Euler angles.
      static void
      fromEuler(double phi, double theta, double psi, double q[4])
      {
        double cr = std::cos(phi / 2), sr = std::sin(phi / 2);
        double cp = std::cos(theta / 2), sp = std::sin(theta / 2);
        double cy = std::cos(psi / 2), sy = std::sin(psi / 2);
        q[0] = cr * cp * cy + sr * sp * sy;
        q[1] = sr * cp * cy - cr * sp * sy;
        q[2] = cr * sp * cy + sr * cp * sy;
        q[3] = cr * cp * sy - sr * sp * cy;
      }

      //! ZYX Euler angles of a unit quaternion.
      static void
      toEuler(const double q[4], double& phi, double& theta, double& psi)
      {
        double w = q[0], x = q[1], y = q[2], z = q[3];
        double s = 2 * (w * y - z * x);
        if (s > 1.0)
          s = 1.0;
        else if (s < -1.0)
          s = -1.0;
        phi = std::atan2(2 * (w * x + y * z), 1 - 2 * (x * x + y * y));
        theta = std::asin(s);
        psi = std::atan2(2 * (w * z + x * y), 1 - 2 * (y * y + z * z));
      }

      //! Unit quaternion of a rotation vector.
      static void
      expRotVec(const double v[3], double q[4])
      {
        double a = std::sqrt(dot(v, v));
        if (a < 1e-12)
        {
          q[0] = 1.0;
          q[1] = 0.5 * v[0];
          q[2] = 0.5 * v[1];
          q[3] = 0.5 * v[2];
          return;
        }
        double s = std::sin(a / 2) / a;
        q[0] = std::cos(a / 2);
        q[1] = s * v[0];
        q[2] = s * v[1];
        q[3] = s * v[2];
      }

    private:
      typedef double Mat6[6][6];

      Config m_cfg;
      //! Nominal attitude (body to NED, scalar first).
      double m_q[4];
      //! Nominal gyro bias (rad/s).
      double m_b[3];
      //! Error covariance.
      Mat6 m_p;
      //! Time the reset condition has held (s).
      double m_off_for;
      //! Gyro bias when the reset condition started (rad/s).
      double m_b_armed[3];
      //! Reset count.
      unsigned m_resets;

      static double
      dot(const double a[3], const double b[3])
      {
        return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
      }

      static double
      wrap(double a)
      {
        while (a > Math::c_pi)
          a -= 2.0 * Math::c_pi;
        while (a < -Math::c_pi)
          a += 2.0 * Math::c_pi;
        return a;
      }

      //! a <- a (x) b, renormalised.
      static void
      rotate(double a[4], const double b[4])
      {
        double w = a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3];
        double x = a[0] * b[1] + a[1] * b[0] + a[2] * b[3] - a[3] * b[2];
        double y = a[0] * b[2] - a[1] * b[3] + a[2] * b[0] + a[3] * b[1];
        double z = a[0] * b[3] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0];
        double n = std::sqrt(w * w + x * x + y * y + z * z);
        a[0] = w / n;
        a[1] = x / n;
        a[2] = y / n;
        a[3] = z / n;
      }

      //! c = a b^T-style products are spelled out where used; this is a b.
      static void
      mul(const Mat6 a, const Mat6 b, Mat6 c)
      {
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 6; ++j)
          {
            double s = 0.0;
            for (unsigned k = 0; k < 6; ++k)
              s += a[i][k] * b[k][j];
            c[i][j] = s;
          }
      }

      //! P <- A P A^T.
      void
      congruence(const Mat6 a)
      {
        Mat6 ap;
        mul(a, m_p, ap);
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 6; ++j)
          {
            double s = 0.0;
            for (unsigned k = 0; k < 6; ++k)
              s += ap[i][k] * a[j][k];
            m_p[i][j] = s;
          }
      }

      //! Inject an error estimate into the nominal state.
      void
      inject(const double dx[6])
      {
        double dq[4];
        expRotVec(dx, dq);
        rotate(m_q, dq);
        for (unsigned i = 0; i < 3; ++i)
          m_b[i] += dx[3 + i];
      }

      void
      predict(double dt, const double dtheta[3])
      {
        double wdt[3];
        for (unsigned i = 0; i < 3; ++i)
          wdt[i] = dtheta[i] - m_b[i] * dt;

        double dq[4];
        expRotVec(wdt, dq);
        rotate(m_q, dq);

        // F = [[I - [w dt]x, -I dt], [0, I]].
        Mat6 f;
        std::memset(f, 0, sizeof(f));
        for (unsigned i = 0; i < 6; ++i)
          f[i][i] = 1.0;
        f[0][1] = wdt[2];
        f[0][2] = -wdt[1];
        f[1][0] = -wdt[2];
        f[1][2] = wdt[0];
        f[2][0] = wdt[1];
        f[2][1] = -wdt[0];
        for (unsigned i = 0; i < 3; ++i)
          f[i][3 + i] = -dt;
        congruence(f);

        double qa = m_cfg.sig_gyro * m_cfg.sig_gyro * dt;
        double qb = m_cfg.sig_bias * m_cfg.sig_bias * dt;
        for (unsigned i = 0; i < 3; ++i)
        {
          m_p[i][i] += qa;
          m_p[3 + i][3 + i] += qb;
        }
      }

      //! Reset guard. Updates h when it fires.
      bool
      guard(double dt, const double f[3], const double m[3], double fn, bool quiet,
            double h[3])
      {
        double c = dot(f, h) / (fn * Math::c_gravity + 1e-12);
        if (c > 1.0)
          c = 1.0;
        else if (c < -1.0)
          c = -1.0;
        bool off = quiet && std::acos(c) > m_cfg.reset_angle;
        if (off && m_off_for == 0.0)
          std::memcpy(m_b_armed, m_b, sizeof(m_b));
        m_off_for = off ? m_off_for + dt : 0.0;
        if (m_cfg.reset_hold <= 0.0 || m_off_for <= m_cfg.reset_hold)
          return false;

        if (m_cfg.reset_full)
        {
          double armed[3];
          std::memcpy(armed, m_b_armed, sizeof(armed));
          unsigned resets = m_resets;
          initialize(f, m, armed);
          m_resets = resets;
        }
        else
        {
          double phi, theta, phi_n, theta_n, psi;
          tiltFromAccel(f, phi, theta);
          toEuler(m_q, phi_n, theta_n, psi);
          fromEuler(phi, theta, psi, m_q);
          for (unsigned i = 0; i < 3; ++i)
            for (unsigned j = 3; j < 6; ++j)
              m_p[i][j] = m_p[j][i] = 0.0;
          double p_yaw = m_p[2][2];
          for (unsigned i = 0; i < 3; ++i)
            for (unsigned j = 0; j < 3; ++j)
              m_p[i][j] = 0.0;
          m_p[0][0] = m_p[1][1] = 0.1;
          m_p[2][2] = p_yaw;
        }
        m_off_for = 0.0;
        ++m_resets;
        gravityBody(h);
        return true;
      }

      //! Accelerometer tilt anchor (3-vector, Joseph form).
      void
      updateAccel(const double f[3], const double h[3], bool quiet)
      {
        double sig = Math::c_gravity * m_cfg.sig_acc_dir;
        double r = sig * sig;
        if (!quiet)
          r *= m_cfg.gate_inflation;

        // H = [[h]x, 0]: only the first three columns are nonzero.
        double hs[3][3] = { { 0.0, -h[2], h[1] }, { h[2], 0.0, -h[0] }, { -h[1], h[0], 0.0 } };

        // PH^T (6x3) and S = H P H^T + r I (3x3).
        double pht[6][3];
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 3; ++j)
            pht[i][j] = m_p[i][0] * hs[j][0] + m_p[i][1] * hs[j][1] + m_p[i][2] * hs[j][2];

        double s[3][3];
        for (unsigned i = 0; i < 3; ++i)
          for (unsigned j = 0; j < 3; ++j)
            s[i][j] = hs[i][0] * pht[0][j] + hs[i][1] * pht[1][j] + hs[i][2] * pht[2][j]
                      + (i == j ? r : 0.0);

        double si[3][3];
        invert3(s, si);

        double k[6][3];
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 3; ++j)
            k[i][j] = pht[i][0] * si[0][j] + pht[i][1] * si[1][j] + pht[i][2] * si[2][j];

        double y[3] = { f[0] - h[0], f[1] - h[1], f[2] - h[2] };
        double dx[6];
        for (unsigned i = 0; i < 6; ++i)
          dx[i] = k[i][0] * y[0] + k[i][1] * y[1] + k[i][2] * y[2];

        // P <- (I - K H) P (I - K H)^T + r K K^T.
        Mat6 ikh;
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 6; ++j)
          {
            double kh = 0.0;
            if (j < 3)
              kh = k[i][0] * hs[0][j] + k[i][1] * hs[1][j] + k[i][2] * hs[2][j];
            ikh[i][j] = (i == j ? 1.0 : 0.0) - kh;
          }
        congruence(ikh);
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 6; ++j)
            m_p[i][j] += r * (k[i][0] * k[j][0] + k[i][1] * k[j][1] + k[i][2] * k[j][2]);

        inject(dx);
      }

      //! Magnetometer yaw (scalar, Joseph form, then symmetrised).
      void
      updateMag(const double m[3])
      {
        double phi, theta, psi;
        toEuler(m_q, phi, theta, psi);
        double z = wrap(magYaw(m, phi, theta) + m_cfg.declination - psi);

        double r[3][3];
        toDcm(m_q, r);
        double hm[6] = { r[2][0], r[2][1], r[2][2], 0.0, 0.0, 0.0 };

        double ph[6];
        double s = m_cfg.r_mag;
        for (unsigned i = 0; i < 6; ++i)
        {
          ph[i] = 0.0;
          for (unsigned j = 0; j < 6; ++j)
            ph[i] += m_p[i][j] * hm[j];
        }
        for (unsigned i = 0; i < 6; ++i)
          s += hm[i] * ph[i];

        double k[6];
        double dx[6];
        for (unsigned i = 0; i < 6; ++i)
        {
          k[i] = ph[i] / s;
          dx[i] = k[i] * z;
        }

        Mat6 ikh;
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 6; ++j)
            ikh[i][j] = (i == j ? 1.0 : 0.0) - k[i] * hm[j];
        congruence(ikh);
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = 0; j < 6; ++j)
            m_p[i][j] += m_cfg.r_mag * k[i] * k[j];

        // Rounding asymmetry builds up over a day until P turns indefinite
        // (seen on lauv-seacon-1, 2023-07-20).
        for (unsigned i = 0; i < 6; ++i)
          for (unsigned j = i + 1; j < 6; ++j)
            m_p[i][j] = m_p[j][i] = 0.5 * (m_p[i][j] + m_p[j][i]);

        inject(dx);
      }

      //! Inverse of a 3x3 matrix (cofactors; S is symmetric positive definite).
      static void
      invert3(const double a[3][3], double b[3][3])
      {
        double c00 = a[1][1] * a[2][2] - a[1][2] * a[2][1];
        double c01 = a[1][2] * a[2][0] - a[1][0] * a[2][2];
        double c02 = a[1][0] * a[2][1] - a[1][1] * a[2][0];
        double det = a[0][0] * c00 + a[0][1] * c01 + a[0][2] * c02;
        b[0][0] = c00 / det;
        b[1][0] = c01 / det;
        b[2][0] = c02 / det;
        b[0][1] = (a[0][2] * a[2][1] - a[0][1] * a[2][2]) / det;
        b[1][1] = (a[0][0] * a[2][2] - a[0][2] * a[2][0]) / det;
        b[2][1] = (a[0][1] * a[2][0] - a[0][0] * a[2][1]) / det;
        b[0][2] = (a[0][1] * a[1][2] - a[0][2] * a[1][1]) / det;
        b[1][2] = (a[0][2] * a[1][0] - a[0][0] * a[1][2]) / det;
        b[2][2] = (a[0][0] * a[1][1] - a[0][1] * a[1][0]) / det;
      }
    };
  }
}

#endif
