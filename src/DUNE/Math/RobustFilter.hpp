//***************************************************************************
// Copyright 2007-2026 OceanScan - Marine Systems & Technology, Lda.        *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Jose Pinto                                                       *
//***************************************************************************

#ifndef DUNE_MATH_ROBUST_FILTER_HPP_INCLUDED_
#define DUNE_MATH_ROBUST_FILTER_HPP_INCLUDED_

// ISO C++ 11 headers.
#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>

namespace DUNE
{
  namespace Math
  {
    //! Robust M-estimator filter for scalar sensor signals.
    //!
    //! Maintains a sliding window of recent measurements and at each update
    //! returns a weighted mean whose weights are derived from either the
    //! Huber or Tukey bisquare (biweight) influence function.
    //!
    //! Outlier detection is based on the standardised residual
    //!   r = (x - median) / (1.4826 * MAD)
    //! where MAD is the Median Absolute Deviation of the current window.
    //! The 1.4826 constant is the consistency factor that makes the MAD a
    //! consistent estimator of sigma under a Gaussian distribution.
    //!
    //! Typical tuning constants (k) for ~95% Gaussian efficiency:
    //!   - Huber    : k = 1.345  (down-weights proportionally to 1/|r|)
    //!   - Bisquare : k = 4.685  (completely rejects |r| >= k)
    template <typename T>
    class RobustFilter
    {
    public:
      //! Weight function type.
      enum Type
      {
        //! Huber M-estimator: weight is 1 for |r| <= k, k/|r| otherwise.
        TYPE_HUBER,
        //! Tukey bisquare (biweight): weight is (1-(r/k)^2)^2 for |r| < k,
        //! 0 otherwise. Completely rejects extreme outliers.
        TYPE_BISQUARE
      };

      //! Default constructor: window = 7, Huber, k = 1.345.
      RobustFilter():
        m_window_size(7),
        m_type(TYPE_HUBER),
        m_tuning(T(1.345)),
        m_oldest(0),
        m_estimate(T(0))
      { }

      //! Constructor.
      //! @param[in] window_size number of samples in the sliding window.
      //! @param[in] type        weight function type (default: TYPE_HUBER).
      //! @param[in] tuning      tuning constant k (default: 1.345).
      RobustFilter(unsigned window_size,
                   Type type   = TYPE_HUBER,
                   T    tuning = T(1.345)):
        m_window_size(window_size),
        m_type(type),
        m_tuning(tuning),
        m_oldest(0),
        m_estimate(T(0))
      { }

      //! Clear the filter state.
      void
      clear()
      {
        m_window.clear();
        m_oldest      = 0;
        m_estimate    = T(0);
        m_last_weight = T(1);
        m_last_raw    = T(0);
      }

      //! Add a new measurement and return the robust filtered estimate.
      //! @param[in] value raw sensor measurement.
      //! @return robust weighted-mean estimate.
      T
      update(const T& value)
      {
        m_last_raw = value;
        if ((unsigned)m_window.size() < m_window_size)
          m_window.push_back(value);
        else
        {
          m_window[m_oldest] = value;
          m_oldest = (m_oldest + 1) % m_window_size;
        }
        return compute();
      }

      //! Return the most recent filtered estimate without updating.
      T
      value() const
      {
        return m_estimate;
      }

      //! Return the weight assigned to the most recently inserted sample.
      //! 1.0 = fully trusted, 0.0 = fully rejected (bisquare only),
      //! values in between indicate proportional down-weighting.
      T
      lastWeight() const
      {
        return m_last_weight;
      }

      //! Return the raw (unfiltered) value of the most recent sample.
      T
      lastRaw() const
      {
        return m_last_raw;
      }

      //! Current number of samples held in the window.
      unsigned
      sampleSize() const
      {
        return (unsigned)m_window.size();
      }

      //! Change the weight function type (clears the window).
      void
      setType(Type type)
      {
        m_type = type;
        clear();
      }

      //! Change the tuning constant k (clears the window).
      void
      setTuning(T k)
      {
        m_tuning = k;
        clear();
      }

      //! Change the window size (clears the window).
      void
      resize(unsigned window_size)
      {
        m_window_size = window_size;
        clear();
      }

    private:
      //! Compute the robust weighted-mean estimate from the current window.
      T
      compute()
      {
        unsigned n = sampleSize();
        if (n == 0)
          return T(0);
        if (n == 1)
        {
          m_last_weight = T(1);
          m_estimate = m_window[0];
          return m_estimate;
        }

        // Sorted copy for median / MAD (preserves circular-buffer order).
        std::vector<T> s(m_window.begin(), m_window.end());
        std::sort(s.begin(), s.end());

        T med = (n & 1u) ? s[n / 2]
                         : (s[n / 2 - 1] + s[n / 2]) / T(2);

        // Median Absolute Deviation.
        std::vector<T> dev(n);
        for (unsigned i = 0; i < n; ++i)
          dev[i] = std::abs(m_window[i] - med);
        std::sort(dev.begin(), dev.end());

        T mad = (n & 1u) ? dev[n / 2]
                         : (dev[n / 2 - 1] + dev[n / 2]) / T(2);

        // 1.4826 * MAD is a consistent estimator of sigma for Gaussian data.
        T scale = T(1.4826) * mad;

        // If all window values are nearly identical, return median directly.
        if (scale < std::numeric_limits<T>::epsilon() * T(100))
        {
          m_last_weight = T(1);
          m_estimate = med;
          return m_estimate;
        }

        // Weighted mean using M-estimator influence weights.
        // Track the weight of the newest sample (last inserted).
        T wsum = T(0), wxsum = T(0);
        unsigned newest = (m_oldest == 0) ? n - 1 : m_oldest - 1;
        for (unsigned i = 0; i < n; ++i)
        {
          T r = (m_window[i] - med) / scale;
          T w = weight(r);
          if (i == newest)
            m_last_weight = w;
          wsum  += w;
          wxsum += w * m_window[i];
        }

        m_estimate = (wsum > T(0)) ? wxsum / wsum : med;
        return m_estimate;
      }

      //! Evaluate the M-estimator influence weight for normalised residual r.
      T
      weight(T r) const
      {
        switch (m_type)
        {
          case TYPE_HUBER:
          {
            T ar = std::abs(r);
            return (ar <= m_tuning) ? T(1) : m_tuning / ar;
          }
          case TYPE_BISQUARE:
          {
            if (std::abs(r) >= m_tuning)
              return T(0);
            T u = T(1) - (r / m_tuning) * (r / m_tuning);
            return u * u;
          }
        }
        return T(1);
      }

      //! Maximum number of samples in the sliding window.
      unsigned m_window_size;
      //! Weight function type.
      Type m_type;
      //! Tuning constant k.
      T m_tuning;
      //! Circular-buffer storage.
      std::vector<T> m_window;
      //! Index of the oldest entry in the circular buffer.
      unsigned m_oldest;
      //! Most recent filtered estimate.
      T m_estimate;
      //! Weight assigned to the most recently inserted sample.
      T m_last_weight = T(1);
      //! Raw value of the most recently inserted sample.
      T m_last_raw = T(0);
    };
  }
}

#endif
