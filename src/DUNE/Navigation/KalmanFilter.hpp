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
// Author: Pedro Vaz Teixeira                                               *
// Author: José Braga                                                       *
//***************************************************************************
// Kalman filter implementation. Assumes the system is described by the     *
// following linear time-invariant model:                                   *
//   x(k+1) = A * x(k) + q(k)                                               *
//   P = cov(x)                                                             *
//   Q = cov(w)                                                             *
// This class can also handle extended Kalman filters, provided that the    *
// state matrix is updated accordingly, and that the predict method is not  *
// used, as it is not valid for non-linear systems. This is also the reason *
// why there isn't a method to predict the system output (measurement       *
// estimate)                                                                *
//***************************************************************************

#ifndef DUNE_NAVIGATION_KALMAN_FILTER_HPP_INCLUDED_
#define DUNE_NAVIGATION_KALMAN_FILTER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <stdexcept>
#include <string>
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Math.hpp>

namespace DUNE
{
  namespace Navigation
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM KalmanFilter;

    class KalmanFilter
    {
    public:
      //! Constructor.
      KalmanFilter(void);

      //! Constructor.
      //! @param A state-transition model.
      //! @param C observation model.
      //! @param P state covariance matrix.
      //! @param Q process noise covariance matrix.
      KalmanFilter(Math::Matrix& A, Math::Matrix& C, Math::Matrix& P, Math::Matrix& Q);

      //! Set initial conditions (state and covariance matrix).
      //! @param P0 covariance.
      //! @param x0 state.
      void
      initialize(Math::Matrix& P0, Math::Matrix& x0);

      //! Reset and resize all matrices.
      //! @param num_states number of filter states.
      //! @param num_outputs number of filter output states.
      void
      reset(short num_states, short num_outputs);

      //! Resize number of state outputs.
      //! @param num_outputs number of filter output states.
      //! @return true if resized, false otherwise.
      bool
      resize(short num_outputs);

      //! Keep the state covariance matrix symmetric.
      void
      normalize(void);

      //! Predict the state at the next timestep subject to control input.
      //! @param b control input matrix.
      //! @param u input matrix.
      void
      predict(Math::Matrix& b, Math::Matrix& u);

      //! Predict the state at the next timestep assuming no input.
      void
      predict(void);

      //! Kalman Filter update function.
      //! @param threshold threshold to reject large state innovations.
      //! @return 0 if update is successful, -1 otherwise.
      int
      update(float threshold);

      //! Get filter state value.
      //! @param pos matrix index.
      //! @return state matrix value.
      inline double
      getState(short pos) const
      {
        if ((size_t)pos >= m_state_count)
          throw std::runtime_error(DTR("invalid index"));

        return m_x(pos);
      }

      //! Get state matrix.
      //! @return state matrix.
      inline Math::Matrix
      getState(void) const
      {
        return m_x;
      }

      //! Set state matrix value.
      //! @param pos matrix index.
      //! @param value state matrix value.
      void
      setState(short pos, double value);

      //! Reset state matrix.
      void
      resetState(void);

      //! Get state transition matrix.
      //! @return state transition matrix.
      inline Math::Matrix
      getStateTransition(void) const
      {
        return m_ax;
      }

      //! Set state transition matrix.
      //! @param a state transition matrix.
      void
      setStateTransition(Math::Matrix a);

      //! Get state covariance transition matrix.
      //! @return state covariance transition matrix.
      inline Math::Matrix
      getCovarianceTransition(void) const
      {
        return m_ap;
      }

      //! Set state covariance transition matrix.
      //! @param a state covariance transition matrix.
      void
      setCovarianceTransition(Math::Matrix a);

      //! Set transition matrices.
      //! @param a state transition matrix.
      void
      setTransitions(Math::Matrix a);

      //! Reset output matrices.
      void
      resetOutputs(void);

      //! Get output matrix value.
      //! @param pos matrix index.
      //! @return output matrix value.
      inline double
      getOutput(short pos) const
      {
        if (pos >= m_y.rows())
          throw std::runtime_error(DTR("invalid index"));

        return m_y(pos);
      }

      //! Set output matrix value.
      //! @param pos matrix index.
      //! @param value output matrix value.
      void
      setOutput(short pos, double value);

      //! Get innovation matrix value.
      //! @param pos matrix index.
      //! @return innovation matrix value.
      inline double
      getInnovation(short pos) const
      {
        if ((size_t)pos >= m_state_count)
          throw std::runtime_error(DTR("invalid index"));

        return m_innov(pos);
      }

      //! Set innovation matrix value.
      //! @param pos matrix index.
      //! @param value innovation matrix value.
      void
      setInnovation(short pos, double value);

      //! Get observation model submatrix.
      //! @param i1 lower row index.
      //! @param i2 upper row index.
      //! @param j1 lower column index.
      //! @param j2 upper column index.
      //! @return output transition submatrix.
      inline Math::Matrix
      getObservation(size_t i1, size_t i2, size_t j1, size_t j2) const
      {
        return m_c.get(i1, i2, j1, j2);
      }

      //! Get output transition matrix.
      //! @return output transition matrix.
      inline Math::Matrix
      getObservation(void) const
      {
        return m_c;
      }

      //! Set observation model matrix value.
      //! @param ln row index.
      //! @param cl column index.
      //! @param value output transition matrix value.
      void
      setObservation(short ln, short cl, double value);

      //! Get covariance matrix value.
      //! @param ln row index.
      //! @param cl column index.
      //! @return covariance matrix value.
      inline double
      getCovariance(short ln, short cl) const
      {
        if (ln >= m_p.rows() || cl >= m_p.columns())
          throw std::runtime_error(DTR("invalid index"));

        return m_p(ln, cl);
      }

      //! Get covariance matrix value.
      //! @param in row and column index.
      //! @return covariance matrix value.
      inline double
      getCovariance(short in) const
      {
        if ((size_t)in >= m_state_count)
          throw std::runtime_error(DTR("invalid index"));

        return m_p(in, in);
      }

      //! Get state covariance matrix.
      //! @param i1 lower row index.
      //! @param i2 upper row index.
      //! @param j1 lower column index.
      //! @param j2 upper column index.
      //! @return state covariance submatrix.
      inline Math::Matrix
      getCovariance(size_t i1, size_t i2, size_t j1, size_t j2) const
      {
        return m_p.get(i1, i2, j1, j2);
      }

      //! Get state covariance matrix.
      //! @return state covariance matrix.
      inline Math::Matrix
      getCovariance(void) const
      {
        return m_p;
      }

      //! Set state covariance matrix value.
      //! @param ln row index.
      //! @param cl column index.
      //! @param value state covariance matrix value.
      void
      setCovariance(short ln, short cl, double value);

      //! Set state covariance matrix value.
      //! @param in row and column index.
      //! @param value state covariance matrix value.
      void
      setCovariance(short in, double value);

      //! Set state covariance matrix value.
      //! @param value state covariance matrix value.
      void
      setCovariance(double value);

      //! Reset covariance values.
      void
      resetCovariance(short in);

      //! Set process noise covariance matrix value.
      //! @param ln row index.
      //! @param cl column index.
      //! @param value process noise covariance matrix value.
      void
      setProcessNoise(short ln, short cl, double value);

      //! Set process noise covariance matrix value.
      //! @param in row and column index.
      //! @param value process noise covariance matrix value.
      void
      setProcessNoise(short in, double value);

      //! Set process noise covariance matrix value.
      //! @param value process noise covariance matrix value.
      void
      setProcessNoise(double value);

      //! Set measurement noise covariance matrix value.
      //! @param ln row index.
      //! @param cl column index.
      //! @param value measurement noise covariance matrix value.
      void
      setMeasurementNoise(short ln, short cl, double value);

      //! Set measurement noise covariance matrix value.
      //! @param in row and column index.
      //! @param value measurement noise covariance matrix value.
      void
      setMeasurementNoise(short in, double value);

      //! Set measurement noise covariance matrix value.
      //! @param value measurement noise covariance matrix value.
      void
      setMeasurementNoise(double value);

    private:
      //! Kalman filter state count.
      size_t m_state_count;
      //! State vector.
      Math::Matrix m_x;
      //! Output vector.
      Math::Matrix m_y;
      //! State transition matrix.
      Math::Matrix m_ax;
      //! State covariance transition matrix.
      Math::Matrix m_ap;
      //! Output transition matrix.
      Math::Matrix m_c;
      //! State covariance matrix.
      Math::Matrix m_p;
      //! Pprocess noise covariance matrix
      Math::Matrix m_q;
      //! Measurement noise covariance matrix
      Math::Matrix m_r;
      //! Innovation vector.
      Math::Matrix m_innov;
    };
  }
}

#endif
