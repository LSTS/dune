//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Vaz Teixeira                                               *
// Author: José Braga                                                       *
//***************************************************************************
// $Id:: KalmanFilter.cpp 12693 2013-01-23 22:15:44Z jbraga               $:*
//***************************************************************************

// DUNE headers.
#include <DUNE/Navigation/KalmanFilter.hpp>

namespace DUNE
{
  namespace Navigation
  {
    KalmanFilter::KalmanFilter(void)
    {
      m_state_count = 1;
      Math::Matrix I(1);
      I(0) = 0;
      m_x = m_y = m_ax = m_ap = m_c = m_p = m_q = m_r = m_innov = I;
    }

    KalmanFilter::KalmanFilter(Math::Matrix& A, Math::Matrix& C, Math::Matrix& P, Math::Matrix& Q)
    {
      m_ax = A;
      m_ap = A;
      m_c = C;
      m_p = P;
      m_q = Q;
      m_state_count = m_ax.rows();
      m_x.resizeAndFill(m_state_count, 1, 0.0);
    }

    void
    KalmanFilter::reset(short num_states, short num_outputs)
    {
      m_x.resizeAndFill(num_states, 1, 0.0);
      m_y.resizeAndFill(num_outputs, 1, 0.0);
      m_ax.resizeAndFill(num_states, num_states, 0.0);
      m_ap.resizeAndFill(num_states, num_states, 0.0);
      m_c.resizeAndFill(num_outputs, num_states, 0.0);
      m_p.resizeAndFill(num_states, num_states, 0.0);
      m_q.resizeAndFill(num_states, num_states, 0.0);
      m_r.resizeAndFill(num_outputs, num_outputs, 0.0);
      m_innov.resizeAndFill(num_outputs, 1, 0.0);
      m_state_count = m_ax.rows();
    }

    bool
    KalmanFilter::resize(short num_outputs)
    {
      if (num_outputs != m_y.rows())
      {
        short num_states = m_state_count;
        m_y.resizeAndKeep(num_outputs, 1);
        m_c.resizeAndKeep(num_outputs, num_states);
        m_r.resizeAndKeep(num_outputs, num_outputs);
        m_innov.resizeAndKeep(num_outputs, 1);
        return true;
      }
      else
        return false;
    }

    void
    KalmanFilter::initialize(Math::Matrix& x0, Math::Matrix& P0)
    {
      if ((unsigned)P0.rows() != m_state_count || (unsigned)P0.columns() != m_state_count)
        throw std::runtime_error("initialize(): P0 has incompatible dimensions");

      if ((unsigned)x0.rows() != m_state_count || (unsigned)x0.columns() != 1)
        throw std::runtime_error("initialize(): x0 has incompatible dimensions");

      m_x = x0;
      m_p = P0;
    }

    void
    KalmanFilter::normalize(void)
    {
      m_p = 0.5 * (m_p + transpose(m_p));
    }

    void
    KalmanFilter::predict(Math::Matrix& b, Math::Matrix& u)
    {
      if (u.rows() != b.columns() || u.columns() != 1)
        throw std::runtime_error("predict(): u has incompatible dimensions");

      m_x = m_ax * m_x + b * u;
      m_p = m_ap * m_p * transpose(m_ap) + m_q;
    }

    void
    KalmanFilter::predict(void)
    {
      m_x = m_ax * m_x;
      m_p = m_ap * m_p * transpose(m_ap) + m_q;
    }

    int
    KalmanFilter::update(float threshold)
    {
      if (m_c.rows() != m_innov.rows())
        throw std::runtime_error("update(): C and Diff have incompatible dimensions");

      if (m_c.columns() != m_x.rows())
        throw std::runtime_error("update(): C and X have incompatible dimensions");

      if (m_innov.columns() != 1)
        throw std::runtime_error("update(): Diff is not a vector");

      if (m_r.rows() != m_r.columns() || m_r.rows() != m_innov.rows())
        throw std::runtime_error("update(): R has incompatible dimensions");

      // Measurement prediction covariance.
      Math::Matrix S = (m_c * m_p * transpose(m_c)) + m_r;
      Math::Matrix S_1;

      // Inverse of the measurement prediction covariance.
      try
      {
        S_1 = inverse(S);
      }
      catch (...)
      {
        throw std::runtime_error("update(): matrix inversion error");
      }

      // Check if innovation is above a threshold value.
      // Set threshold to 0 to accept everything.
      double level = (transpose(m_innov) * S_1 * m_innov)(0);

      if ((threshold != 0) && (level >= threshold))
        return -1;

      // Kalman Gain.
      Math::Matrix K = m_p * transpose(m_c) * S_1;

      // State update.
      m_x = m_x + K * m_innov;

      // State Covariance update.
      m_p = m_p - K * m_c * m_p;

      return 0;
    }

    void
    KalmanFilter::setState(short pos, double value)
    {
      m_x(pos) = value;
    }

    void
    KalmanFilter::resetState(void)
    {
      m_x.fill(0.0);
    }

    void
    KalmanFilter::resetOutputs(void)
    {
      m_y.fill(0.0);
      m_innov.fill(0.0);
      m_c.fill(0.0);
    }

    void
    KalmanFilter::setTransitions(Math::Matrix a)
    {
      m_ax = a;
      m_ap = a;
    }

    void
    KalmanFilter::setStateTransition(Math::Matrix a)
    {
      m_ax = a;
    }

    void
    KalmanFilter::setCovarianceTransition(Math::Matrix a)
    {
      m_ap = a;
    }

    void
    KalmanFilter::setOutput(short pos, double value)
    {
      m_y(pos) = value;
    }

    void
    KalmanFilter::setInnovation(short pos, double value)
    {
      m_innov(pos) = value;
    }

    void
    KalmanFilter::setObservation(short ln, short cl, double value)
    {
      m_c(ln, cl) = value;
    }

    void
    KalmanFilter::setProcessNoise(short ln, short cl, double value)
    {
      m_q(ln, cl) = value;
    }

    void
    KalmanFilter::setProcessNoise(double value)
    {
      for (size_t i = 0; i < m_state_count; ++i)
        m_q(i, i) = value;
    }

    void
    KalmanFilter::setMeasurementNoise(short ln, short cl, double value)
    {
      m_r(ln, cl) = value;
    }

    void
    KalmanFilter::setMeasurementNoise(double value)
    {
      for (int i = 0; i < m_r.rows(); ++i)
        m_r(i, i) = value;
    }

    void
    KalmanFilter::setCovariance(short ln, short cl, double value)
    {
      m_p(ln, cl) = value;
    }

    void
    KalmanFilter::setCovariance(double value)
    {
      for (size_t i = 0; i < m_state_count; ++i)
        m_p(i, i) = value;
    }
  }
}
