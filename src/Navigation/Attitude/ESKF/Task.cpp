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
    namespace ESKF
    {
      using DUNE_NAMESPACES;

      //! Error-state indexes: [dtheta, db] (attitude and gyro-bias errors).
      enum StateIndexes
      {
        //! Attitude error about body x (rad).
        ES_DTX = 0,
        //! Attitude error about body y (rad).
        ES_DTY = 1,
        //! Attitude error about body z (rad).
        ES_DTZ = 2,
        //! Gyro-bias error about x (rad/s).
        ES_DBX = 3,
        //! Gyro-bias error about y (rad/s).
        ES_DBY = 4,
        //! Gyro-bias error about z (rad/s).
        ES_DBZ = 5,
        //! Number of states.
        NUM_STATE = 6
      };

      //! Filter output (measurement) indexes.
      enum OutputIndexes
      {
        //! Gravity direction along body x.
        OUT_GX = 0,
        //! Gravity direction along body y.
        OUT_GY = 1,
        //! Gravity direction along body z.
        OUT_GZ = 2,
        //! Magnetometer yaw.
        OUT_PSI = 3,
        //! Number of outputs.
        NUM_OUT = 4
      };

      //! %Task arguments.
      struct Arguments
      {
        //! Gyro noise density (rad/sqrt(s)).
        double sig_gyro;
        //! Gyro-bias random walk (rad/s/sqrt(s)).
        double sig_bias;
        //! Accelerometer gravity-direction noise (unit-vector sigma).
        double sig_acc_dir;
        //! Magnetometer yaw measurement noise (rad^2).
        double r_mag;
        //! Specific force gate: |‖f‖ - g| above this inflates accel noise.
        double accel_gate;
        //! Nominal update period (s), used until timestamps provide a delta.
        double dt_nominal;
        //! Label of the entity producing the inertial/magnetic measurements.
        //! Empty disables source filtering.
        std::string elabel_imu;
        //! Hard-iron offset subtracted from the body x/y/z field.
        std::vector<double> hi_offset;
        //! Apply full-coverage hard-iron fits (otherwise only monitor).
        bool hi_apply;
        //! Heading bins needed for a fit.
        unsigned hi_min_bins;
        //! Time after which an unused heading bin is forgotten (s).
        double hi_window;
        //! Opposite-heading field mismatch that requests a calibration.
        double hi_threshold;
        //! Depth beyond which the field is monitored (m).
        double hi_depth;
        //! Label of the depth source, empty for any.
        std::string elabel_depth;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Estimated Euler angles output.
        IMC::EulerAngles m_euler;
        //! Error-state Kalman filter (error state is zero outside update).
        DUNE::Navigation::KalmanFilter m_kal;
        //! Nominal attitude quaternion (body to NED).
        Math::Quaternion m_quat;
        //! Nominal gyro bias (rad/s).
        double m_bias[3];
        //! Latest specific force (accelerometer) sample.
        double m_spf[3];
        //! Latest integrated delta angle sample.
        double m_dtheta[3];
        //! Latest magnetic field sample.
        double m_mag[3];
        //! Hard-iron monitor: checks the offset in use against the heading
        //! dependence of the field and requests a calibration when it is wrong.
        DUNE::Navigation::HardIronEstimator m_hi;
        //! Latest depth (m), negative until one arrives.
        double m_depth;
        //! Entity id of the depth source, UINT_MAX for any.
        unsigned m_depth_eid;
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
        bool m_have_dtheta;
        bool m_have_mag;
        //! Task arguments.
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_depth(-1.0),
          m_depth_eid(std::numeric_limits<unsigned>::max()),
          m_dt_meas(0.0),
          m_last_time(-1.0),
          m_imu_eid(std::numeric_limits<unsigned>::max()),
          m_filter(false),
          m_setup(false),
          m_have_accel(false),
          m_have_dtheta(false),
          m_have_mag(false)
        {
          param("Gyro Noise Density", m_args.sig_gyro)
            .defaultValue("0.005")
            .description("Gyro white-noise density, drives the attitude "
                         "random walk (rad/sqrt(s))");

          param("Gyro Bias Random Walk", m_args.sig_bias)
            .defaultValue("1e-5")
            .description("Gyro-bias random-walk density (rad/s/sqrt(s))");

          param("Accelerometer Direction Noise", m_args.sig_acc_dir)
            .defaultValue("0.02")
            .description("Standard deviation of the measured gravity unit "
                         "vector components");

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
            .description("Label of the entity producing the acceleration, delta "
                         "angle and magnetic field measurements. Leave empty to "
                         "accept measurements from any source");

          param("Hard-Iron Offset", m_args.hi_offset)
            .defaultValue("0.0, 0.0, 0.0")
            .size(3)
            .description("Hard-iron offset (body x, y, z) subtracted from the magnetic "
                         "field, on top of any calibration the sensor applies (sensors "
                         "such as the LIMU correct x/y only: put the gyro-aided z of the "
                         "compass calibration here); the starting point of the monitor");

          param("Hard-Iron Apply Estimate", m_args.hi_apply)
            .defaultValue("false")
            .description("Replace the hard-iron offset with the online circle fit once "
                         "enough headings are covered. Off: only monitor and request a "
                         "compass calibration (experimental when on)");

          param("Hard-Iron Minimum Heading Bins", m_args.hi_min_bins)
            .defaultValue("18")
            .minimumValue("3")
            .maximumValue("24")
            .description("Heading bins (of 24, 15 degrees each) needed to fit the "
                         "hard-iron offset");

          param("Hard-Iron Window", m_args.hi_window)
            .units(Units::Second)
            .defaultValue("600")
            .minimumValue("10")
            .description("A heading bin not visited for this long is forgotten");

          param("Hard-Iron Calibration Threshold", m_args.hi_threshold)
            .defaultValue("0.04")
            .minimumValue("0.0")
            .description("Relative field magnitude difference between opposite "
                         "headings above which a compass calibration is requested");

          param("Hard-Iron Monitor Depth", m_args.hi_depth)
            .units(Units::Meter)
            .defaultValue("1.0")
            .minimumValue("0.0")
            .description("Only samples deeper than this feed the hard-iron monitor: "
                         "on deck, near the support boat and in surface waves the "
                         "levelled field is disturbed and raised false requests");

          param("Entity Label - Depth", m_args.elabel_depth)
            .defaultValue("")
            .description("Label of the depth source for the hard-iron monitor. "
                         "Empty: any source");

          std::memset(m_bias, 0, sizeof(m_bias));
          std::memset(m_spf, 0, sizeof(m_spf));
          std::memset(m_dtheta, 0, sizeof(m_dtheta));
          std::memset(m_mag, 0, sizeof(m_mag));

          // The filter carries only the 6-state error, whose mean is zero
          // outside the update. reset() leaves the state transition as
          // identity, so predict() propagates the covariance alone; the
          // observation model is time-varying and rebuilt every step.
          m_kal.reset(NUM_STATE, NUM_OUT);

          bind<IMC::Acceleration>(this);
          bind<IMC::EulerAnglesDelta>(this);
          bind<IMC::MagneticField>(this);
          bind<IMC::Depth>(this);
        }

        void
        onEntityResolution(void)
        {
          m_depth_eid = std::numeric_limits<unsigned>::max();
          if (!m_args.elabel_depth.empty())
          {
            try
            {
              m_depth_eid = resolveEntity(m_args.elabel_depth);
            }
            catch (...)
            {
              war(DTR("failed to resolve depth entity '%s', using any depth source"),
                  m_args.elabel_depth.c_str());
            }
          }

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
        onUpdateParameters(void)
        {
          DUNE::Navigation::HardIronEstimator::Config cfg;
          cfg.min_bins = m_args.hi_min_bins;
          cfg.window = m_args.hi_window;
          cfg.threshold = m_args.hi_threshold;
          m_hi = DUNE::Navigation::HardIronEstimator(cfg);
          m_hi.setOffset(m_args.hi_offset[0], m_args.hi_offset[1]);
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
        consume(const IMC::Depth* msg)
        {
          if (m_depth_eid == std::numeric_limits<unsigned>::max()
              || msg->getSourceEntity() == m_depth_eid)
            m_depth = msg->value;
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
          if (!(m_have_accel && m_have_dtheta && m_have_mag))
            return;

          step(tstamp);
          m_have_accel = m_have_dtheta = m_have_mag = false;
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

        //! Quaternion from a rotation vector (axis-angle in vector form).
        static Math::Quaternion
        quatFromRotVec(const double v[3])
        {
          double ang = std::sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
          if (ang < 1e-12)
            return Math::Quaternion(1.0, 0.5 * v[0], 0.5 * v[1], 0.5 * v[2]);

          double s = std::sin(ang / 2.0) / ang;
          return Math::Quaternion(std::cos(ang / 2.0), s * v[0], s * v[1], s * v[2]);
        }

        //! Magnetic field with the hard-iron offset in use removed.
        void
        correctedField(double mc[3]) const
        {
          mc[0] = m_mag[0] - m_hi.offsetX();
          mc[1] = m_mag[1] - m_hi.offsetY();
          mc[2] = m_mag[2] - m_args.hi_offset[2];
        }

        //! Feed the hard-iron estimator and report what it concluded.
        void
        updateHardIron(double tstamp, double phi, double theta, double psi)
        {
          // Only submerged samples: on deck, near the support boat and in surface
          // waves the levelled field is disturbed (false requests on lab replays).
          if (m_depth <= m_args.hi_depth)
            return;

          // The monitor checks x/y; z is the configured one.
          double mz[3] = {m_mag[0], m_mag[1], m_mag[2] - m_args.hi_offset[2]};
          double hx, hy;
          DUNE::Navigation::HardIronEstimator::level(mz, phi, theta, hx, hy);
          switch (m_hi.process(tstamp, hx, hy, psi, m_args.hi_apply))
          {
            case DUNE::Navigation::HardIronEstimator::EV_OFFSET_UPDATED:
              inf(DTR("hard-iron offset estimated: %.4f, %.4f (%u heading bins, "
                      "fit residual %.1f%%)"),
                  m_hi.offsetX(), m_hi.offsetY(), m_hi.lastFit().bins,
                  100.0 * m_hi.lastFit().rms);
              break;
            case DUNE::Navigation::HardIronEstimator::EV_CALIBRATION_NEEDED:
              if (m_hi.hasFit())
                war(DTR("magnetometer calibration needed: the field differs by %.1f%% "
                        "between opposite headings, fitted hard-iron %.4f, %.4f (in use "
                        "%.4f, %.4f); perform a compass calibration maneuver"),
                    100.0 * m_hi.lastMismatch(), m_hi.lastFit().x, m_hi.lastFit().y,
                    m_hi.offsetX(), m_hi.offsetY());
              else
                war(DTR("magnetometer calibration needed: the field differs by %.1f%% "
                        "between opposite headings; perform a compass calibration "
                        "maneuver"),
                    100.0 * m_hi.lastMismatch());
              break;
            case DUNE::Navigation::HardIronEstimator::EV_CALIBRATION_RESOLVED:
              inf(DTR("magnetometer calibration consistent again"));
              break;
            default:
              break;
          }
        }

        //! Seed the nominal state from the first sample.
        void
        initialize(double tstamp)
        {
          double phi, theta;
          accelAngles(m_spf, phi, theta);
          double mc[3];
          correctedField(mc);
          m_quat = Math::Quaternion(Math::EulerAnglesZyx(phi, theta, magYaw(mc, phi, theta)));
          std::memset(m_bias, 0, sizeof(m_bias));

          m_kal.setCovariance(ES_DTX, 0.1);
          m_kal.setCovariance(ES_DTY, 0.1);
          m_kal.setCovariance(ES_DTZ, 0.3);
          m_kal.setCovariance(ES_DBX, 1e-4);
          m_kal.setCovariance(ES_DBY, 1e-4);
          m_kal.setCovariance(ES_DBZ, 1e-4);

          m_last_time = tstamp;
          m_setup = true;
        }

        //! Run one ESKF predict/update/inject cycle and dispatch the result.
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

          // Nominal propagation with the bias-corrected delta angle:
          // w * dt == dtheta - bias * dt.
          double wdt[3] = { m_dtheta[0] - m_bias[0] * dt,
                            m_dtheta[1] - m_bias[1] * dt,
                            m_dtheta[2] - m_bias[2] * dt };
          Math::Quaternion dq = quatFromRotVec(wdt);
          m_quat = m_quat * dq;
          m_quat.normalize();

          // Error covariance transition: attitude errors rotate with the body
          // (R(w dt)^T) and integrate the bias error (-I dt).
          Math::Matrix F(NUM_STATE);
          F.put(0, 0, transpose(dq.rotationMatrix()));
          for (unsigned i = 0; i < 3; ++i)
            F(i, ES_DBX + i) = -dt;
          m_kal.setCovarianceTransition(F);

          // Process noise (continuous densities integrated over dt).
          m_kal.setProcessNoise(ES_DTX, m_args.sig_gyro * m_args.sig_gyro * dt);
          m_kal.setProcessNoise(ES_DTY, m_args.sig_gyro * m_args.sig_gyro * dt);
          m_kal.setProcessNoise(ES_DTZ, m_args.sig_gyro * m_args.sig_gyro * dt);
          m_kal.setProcessNoise(ES_DBX, m_args.sig_bias * m_args.sig_bias * dt);
          m_kal.setProcessNoise(ES_DBY, m_args.sig_bias * m_args.sig_bias * dt);
          m_kal.setProcessNoise(ES_DBZ, m_args.sig_bias * m_args.sig_bias * dt);

          // Propagate covariance (error mean stays zero since Ax = I).
          m_kal.predict();

          // Joint measurement update: accel gravity direction (gated) plus
          // tilt-compensated mag yaw. The observation matrix is rebuilt from
          // the predicted nominal attitude every step.
          m_kal.resetOutputs();

          // Accel rows: h = R^T * down is the predicted gravity direction in
          // the body frame, and the error Jacobian is skew(h).
          Math::Matrix R = m_quat.rotationMatrix();
          double fnorm = std::sqrt(m_spf[0] * m_spf[0] + m_spf[1] * m_spf[1]
                                   + m_spf[2] * m_spf[2]);
          double sig = m_args.sig_acc_dir;
          if (fnorm > 1e-6)
          {
            if (std::fabs(fnorm - c_gravity) >= m_args.accel_gate)
              sig *= 10.0;

            double h[3] = { -R(2, 0), -R(2, 1), -R(2, 2) };
            m_kal.setObservation(OUT_GX, ES_DTY, -h[2]);
            m_kal.setObservation(OUT_GX, ES_DTZ, h[1]);
            m_kal.setObservation(OUT_GY, ES_DTX, h[2]);
            m_kal.setObservation(OUT_GY, ES_DTZ, -h[0]);
            m_kal.setObservation(OUT_GZ, ES_DTX, -h[1]);
            m_kal.setObservation(OUT_GZ, ES_DTY, h[0]);

            for (unsigned i = 0; i < 3; ++i)
              m_kal.setInnovation(OUT_GX + i, m_spf[i] / fnorm - h[i]);
          }
          m_kal.setMeasurementNoise(OUT_GX, sig * sig);
          m_kal.setMeasurementNoise(OUT_GY, sig * sig);
          m_kal.setMeasurementNoise(OUT_GZ, sig * sig);

          // Mag row: scalar yaw with Jacobian dpsi/d(dtheta_body).
          Math::EulerAnglesZyx euler(m_quat);
          double s_phi = std::sin(euler.roll);
          double c_phi = std::cos(euler.roll);
          double c_th = std::cos(euler.pitch);
          if (c_th < 1e-3)
            c_th = 1e-3;
          m_kal.setObservation(OUT_PSI, ES_DTY, s_phi / c_th);
          m_kal.setObservation(OUT_PSI, ES_DTZ, c_phi / c_th);
          updateHardIron(tstamp, euler.roll, euler.pitch, euler.yaw);
          double mc[3];
          correctedField(mc);
          m_kal.setInnovation(OUT_PSI, wrap(magYaw(mc, euler.roll, euler.pitch) - euler.yaw));
          m_kal.setMeasurementNoise(OUT_PSI, m_args.r_mag);

          m_kal.update(0.0);

          // Inject the error estimate into the nominal state and reset it.
          double dth[3] = { m_kal.getState(ES_DTX), m_kal.getState(ES_DTY),
                            m_kal.getState(ES_DTZ) };
          m_quat = m_quat * quatFromRotVec(dth);
          m_quat.normalize();
          for (unsigned i = 0; i < 3; ++i)
            m_bias[i] += m_kal.getState(ES_DBX + i);
          m_kal.resetState();

          dispatchEuler(tstamp);
        }

        void
        dispatchEuler(double tstamp)
        {
          Math::EulerAnglesZyx euler(m_quat);
          m_euler.setTimeStamp(tstamp);
          m_euler.time = tstamp;
          m_euler.phi = euler.roll;
          m_euler.theta = euler.pitch;
          m_euler.psi = euler.yaw;
          m_euler.psi_magnetic = euler.yaw;
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
