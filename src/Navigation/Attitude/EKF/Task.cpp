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

// ISO C++ 98 headers.
#include <cmath>
#include <cstring>
#include <limits>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Navigation
{
  //! %Attitude estimation.
  namespace Attitude
  {
    namespace EKF
    {
      using DUNE_NAMESPACES;

      //! Filter state indexes: [phi, theta, psi, bp, bq, br].
      enum StateIndexes
      {
        //! Roll (rad).
        ST_PHI = 0,
        //! Pitch (rad).
        ST_THETA = 1,
        //! Yaw (rad).
        ST_PSI = 2,
        //! Gyro bias about x (rad/s).
        ST_BP = 3,
        //! Gyro bias about y (rad/s).
        ST_BQ = 4,
        //! Gyro bias about z (rad/s).
        ST_BR = 5,
        //! Number of states.
        NUM_STATE = 6
      };

      //! Filter output (measurement) indexes.
      enum OutputIndexes
      {
        //! Accelerometer roll.
        OUT_PHI = 0,
        //! Accelerometer pitch.
        OUT_THETA = 1,
        //! Magnetometer yaw.
        OUT_PSI = 2,
        //! Number of outputs.
        NUM_OUT = 3
      };

      //! %Task arguments.
      struct Arguments
      {
        //! Angle random-walk PSD (rad^2/s).
        double q_angle;
        //! Gyro-bias random-walk PSD ((rad/s)^2/s).
        double q_bias;
        //! Accelerometer roll/pitch measurement noise (rad^2).
        double r_acc;
        //! Magnetometer yaw measurement noise (rad^2).
        double r_mag;
        //! Specific force gate: |‖f‖ - g| above this inflates accel noise.
        double accel_gate;
        //! Nominal update period (s), used until timestamps provide a delta.
        double dt_nominal;
        //! Label of the entity producing the inertial/magnetic measurements.
        std::string elabel_imu;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Estimated Euler angles output.
        IMC::EulerAngles m_euler;
        //! Extended Kalman filter.
        DUNE::Navigation::KalmanFilter m_kal;
        //! Latest specific force (accelerometer) sample.
        double m_spf[3];
        //! Latest angular velocity (gyro) sample.
        double m_omega[3];
        //! Latest integrated delta angle sample.
        double m_dtheta[3];
        //! Latest magnetic field sample.
        double m_mag[3];
        //! Time step reported with the latest delta angle (s), 0 if unavailable.
        double m_dt_meas;
        //! Time stamp of the previous filter step.
        double m_last_time;
        //! Entity id of the measurement source, UINT_MAX if unresolved.
        unsigned m_imu_eid;
        //! Filter measurements by source entity.
        bool m_filter;
        //! Filter initialized flag.
        bool m_setup;
        //! Received-input flags for the current time step.
        bool m_have_accel;
        bool m_have_omega;
        bool m_have_dtheta;
        bool m_have_mag;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_dt_meas(0.0),
          m_last_time(-1.0),
          m_imu_eid(std::numeric_limits<unsigned>::max()),
          m_filter(false),
          m_setup(false),
          m_have_accel(false),
          m_have_omega(false),
          m_have_dtheta(false),
          m_have_mag(false)
        {
          param("Angle Random-Walk PSD", m_args.q_angle)
            .defaultValue("2.5e-5")
            .description("Attitude process-noise PSD (rad^2/s)");

          param("Gyro Bias Random-Walk PSD", m_args.q_bias)
            .defaultValue("1e-10")
            .description("Gyro-bias process-noise PSD ((rad/s)^2/s)");

          param("Accelerometer Noise", m_args.r_acc)
            .defaultValue("0.0012")
            .description("Accelerometer roll/pitch measurement noise variance (rad^2)");

          param("Magnetometer Noise", m_args.r_mag)
            .defaultValue("0.0076")
            .description("Magnetometer yaw measurement noise variance (rad^2)");

          param("Accelerometer Gate", m_args.accel_gate)
            .defaultValue("0.5")
            .description("Specific-force deviation from gravity above which the "
                         "accelerometer noise is inflated (m/s^2)");

          param("Nominal Update Period", m_args.dt_nominal)
            .units(Units::Second)
            .defaultValue("0.02")
            .description("Fallback filter period, used until timestamps provide a "
                         "valid delta");

          param("Entity Label - IMU", m_args.elabel_imu)
            .defaultValue("")
            .description("Label of the entity producing the acceleration, angular "
                         "velocity, delta angle and magnetic field measurements. "
                         "Leave empty to accept measurements from any source");

          std::memset(m_spf, 0, sizeof(m_spf));
          std::memset(m_omega, 0, sizeof(m_omega));
          std::memset(m_dtheta, 0, sizeof(m_dtheta));
          std::memset(m_mag, 0, sizeof(m_mag));

          // Filter has a linear, constant observation model: each measurement
          // maps directly onto one attitude state. reset() leaves the state
          // transition matrix as identity, which the prediction step relies on.
          m_kal.reset(NUM_STATE, NUM_OUT);
          m_kal.setObservation(OUT_PHI, ST_PHI, 1.0);
          m_kal.setObservation(OUT_THETA, ST_THETA, 1.0);
          m_kal.setObservation(OUT_PSI, ST_PSI, 1.0);

          bind<IMC::Acceleration>(this);
          bind<IMC::AngularVelocity>(this);
          bind<IMC::EulerAnglesDelta>(this);
          bind<IMC::MagneticField>(this);
        }

        void
        onEntityResolution(void)
        {
          m_imu_eid = std::numeric_limits<unsigned>::max();
          m_filter = false;

          // Without a configured label there is assumed to be a single producer
          // of each measurement, so anything that arrives is used as is.
          if (m_args.elabel_imu.empty())
          {
            inf(DTR("no measurement source configured, accepting any entity"));
            return;
          }

          // A configured label that cannot be resolved keeps filtering on, so no
          // measurement is silently taken from an unintended source.
          m_filter = true;
          try
          {
            m_imu_eid = resolveEntity(m_args.elabel_imu);
          }
          catch (...)
          {
            err(DTR("failed to resolve entity '%s'"), m_args.elabel_imu.c_str());
          }
        }

        void
        onResourceInitialization(void)
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }

        //! Reject anything not produced by the configured measurement source.
        bool
        rejected(const IMC::Message* msg) const
        {
          return m_filter && msg->getSourceEntity() != m_imu_eid;
        }

        void
        consume(const IMC::Acceleration* msg)
        {
          if (rejected(msg))
            return;

          m_spf[0] = msg->x;
          m_spf[1] = msg->y;
          m_spf[2] = msg->z;
          m_have_accel = true;
          trySample(msg->getTimeStamp());
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (rejected(msg))
            return;

          m_omega[0] = msg->x;
          m_omega[1] = msg->y;
          m_omega[2] = msg->z;
          m_have_omega = true;
          trySample(msg->getTimeStamp());
        }

        void
        consume(const IMC::EulerAnglesDelta* msg)
        {
          if (rejected(msg))
            return;

          m_dtheta[0] = msg->x;
          m_dtheta[1] = msg->y;
          m_dtheta[2] = msg->z;
          m_dt_meas = msg->timestep;
          m_have_dtheta = true;
          trySample(msg->getTimeStamp());
        }

        void
        consume(const IMC::MagneticField* msg)
        {
          if (rejected(msg))
            return;

          m_mag[0] = msg->x;
          m_mag[1] = msg->y;
          m_mag[2] = msg->z;
          m_have_mag = true;
          trySample(msg->getTimeStamp());
        }

        //! Run a filter step once a full set of input samples is available,
        //! regardless of the order in which they arrived.
        void
        trySample(double tstamp)
        {
          if (!(m_have_accel && m_have_omega && m_have_dtheta && m_have_mag))
            return;

          step(tstamp);
          m_have_accel = m_have_omega = m_have_dtheta = m_have_mag = false;
        }

        //! Wrap angle to [-pi, pi].
        static double
        wrap(double a)
        {
          return Angles::normalizeRadian(a);
        }

        //! Roll/pitch from specific force (notebook convention: a = -f).
        static void
        accelAngles(const double f[3], double& phi, double& theta)
        {
          double ax = -f[0], ay = -f[1], az = -f[2];
          phi = std::atan2(ay, std::sqrt(ax * ax + az * az));
          theta = std::atan2(-ax, az);
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

        //! Seed the filter from the first sample.
        void
        initialize(double tstamp)
        {
          double phi, theta;
          accelAngles(m_spf, phi, theta);
          m_kal.setState(ST_PHI, phi);
          m_kal.setState(ST_THETA, theta);
          m_kal.setState(ST_PSI, magYaw(m_mag, phi, theta));
          m_kal.setState(ST_BP, 0.0);
          m_kal.setState(ST_BQ, 0.0);
          m_kal.setState(ST_BR, 0.0);

          m_kal.setCovariance(ST_PHI, 0.1);
          m_kal.setCovariance(ST_THETA, 0.1);
          m_kal.setCovariance(ST_PSI, 0.3);
          m_kal.setCovariance(ST_BP, 1e-4);
          m_kal.setCovariance(ST_BQ, 1e-4);
          m_kal.setCovariance(ST_BR, 1e-4);

          m_last_time = tstamp;
          m_setup = true;
        }

        //! Run one EKF predict/update cycle and dispatch the result.
        void
        step(double tstamp)
        {
          if (!m_setup)
          {
            initialize(tstamp);
            dispatchEuler(tstamp);
            return;
          }

          // Prefer the time step reported with the delta angle; fall back to the
          // stamp difference and finally to the nominal period.
          double dt = m_dt_meas;
          if (dt <= 0.0 || dt > 1.0)
            dt = tstamp - m_last_time;
          if (dt <= 0.0 || dt > 1.0)
            dt = m_args.dt_nominal;
          m_last_time = tstamp;

          double phi = m_kal.getState(ST_PHI);
          double theta = m_kal.getState(ST_THETA);
          double psi = m_kal.getState(ST_PSI);
          // sin phi
          double s_phi = std::sin(phi);
          // cos phi
          double c_phi = std::cos(phi);
          // cos theta, with a floor to avoid singularity.
          double c_th = std::cos(theta);
          if (c_th < 1e-3)
            c_th = 1e-3;
          // tan theta
          double t_th = std::tan(theta);

          // Bias-corrected body rates (Jacobian) and delta angle (mean update).
          // The roll rate (omega x) does not appear in the Euler-kinematics
          // Jacobian, so only the pitch/yaw rates are needed there.
          double q = m_omega[1] - m_kal.getState(ST_BQ);
          double r = m_omega[2] - m_kal.getState(ST_BR);
          double dth[3] = { m_dtheta[0] - m_kal.getState(ST_BP) * dt,
                            m_dtheta[1] - m_kal.getState(ST_BQ) * dt,
                            m_dtheta[2] - m_kal.getState(ST_BR) * dt };

          double T[3][3] = { { 1.0, s_phi * t_th, c_phi * t_th },
                             { 0.0, c_phi, -s_phi },
                             { 0.0, s_phi / c_th, c_phi / c_th } };

          // Deterministic attitude increment: raw integrated delta mapped by T.
          double incr[3];
          for (unsigned i = 0; i < 3; ++i)
            incr[i] = T[i][0] * dth[0] + T[i][1] * dth[1] + T[i][2] * dth[2];

          // Covariance transition F = I + A * dt, with A the Euler-kinematics
          // Jacobian. The state transition stays identity (set by reset), so the
          // linear predict() only propagates the covariance; the nonlinear mean
          // is applied by hand afterwards.
          Math::Matrix F(NUM_STATE);
          F(ST_PHI, ST_PHI) += ((c_phi * q - s_phi * r) * t_th) * dt;
          F(ST_PHI, ST_THETA) += ((s_phi * q + c_phi * r) / (c_th * c_th)) * dt;
          F(ST_THETA, ST_PHI) += (-s_phi * q - c_phi * r) * dt;
          F(ST_PSI, ST_PHI) += ((c_phi * q - s_phi * r) / c_th) * dt;
          F(ST_PSI, ST_THETA) += ((s_phi * q + c_phi * r) * t_th / c_th) * dt;
          for (unsigned i = 0; i < 3; ++i)
            for (unsigned j = 0; j < 3; ++j)
              F(i, ST_BP + j) += -T[i][j] * dt;
          m_kal.setCovarianceTransition(F);

          // Process noise (continuous PSD integrated over dt).
          m_kal.setProcessNoise(ST_PHI, m_args.q_angle * dt);
          m_kal.setProcessNoise(ST_THETA, m_args.q_angle * dt);
          m_kal.setProcessNoise(ST_PSI, m_args.q_angle * dt);
          m_kal.setProcessNoise(ST_BP, m_args.q_bias * dt);
          m_kal.setProcessNoise(ST_BQ, m_args.q_bias * dt);
          m_kal.setProcessNoise(ST_BR, m_args.q_bias * dt);

          // Propagate covariance (mean unchanged since Ax = I).
          m_kal.predict();

          // Apply the nonlinear mean propagation.
          m_kal.setState(ST_PHI, phi + incr[0]);
          m_kal.setState(ST_THETA, theta + incr[1]);
          m_kal.setState(ST_PSI, wrap(psi + incr[2]));

          // Measurements: accel roll/pitch (gated) + tilt-compensated mag yaw,
          // all formed from the predicted attitude.
          double phi_a, th_a;
          accelAngles(m_spf, phi_a, th_a);
          double fnorm = std::sqrt(m_spf[0] * m_spf[0] + m_spf[1] * m_spf[1] + m_spf[2] * m_spf[2]);
          double r_a = (std::fabs(fnorm - c_gravity) < m_args.accel_gate) ? m_args.r_acc
                                                                          : m_args.r_acc * 100.0;
          double psi_m = magYaw(m_mag, m_kal.getState(ST_PHI), m_kal.getState(ST_THETA));

          m_kal.setMeasurementNoise(OUT_PHI, r_a);
          m_kal.setMeasurementNoise(OUT_THETA, r_a);
          m_kal.setMeasurementNoise(OUT_PSI, m_args.r_mag);

          // Innovations are wrapped to [-pi, pi] to keep the yaw update sane.
          m_kal.setInnovation(OUT_PHI, wrap(phi_a - m_kal.getState(ST_PHI)));
          m_kal.setInnovation(OUT_THETA, wrap(th_a - m_kal.getState(ST_THETA)));
          m_kal.setInnovation(OUT_PSI, wrap(psi_m - m_kal.getState(ST_PSI)));

          m_kal.update(0.0);
          m_kal.setState(ST_PSI, wrap(m_kal.getState(ST_PSI)));

          dispatchEuler(tstamp);
        }

        void
        dispatchEuler(double tstamp)
        {
          m_euler.setTimeStamp(tstamp);
          m_euler.time = tstamp;
          m_euler.phi = m_kal.getState(ST_PHI);
          m_euler.theta = m_kal.getState(ST_THETA);
          m_euler.psi = m_kal.getState(ST_PSI);
          m_euler.psi_magnetic = m_kal.getState(ST_PSI);
          dispatch(m_euler, DF_KEEP_TIME);
        }

        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0);
          }
        }
      };
    }
  }
}

DUNE_TASK
