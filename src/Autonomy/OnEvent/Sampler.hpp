//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef AUTONOMY_ON_EVENT_SAMPLER_HPP_INCLUDED_
#define AUTONOMY_ON_EVENT_SAMPLER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <ctime>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Autonomy
{
  namespace OnEvent
  {
    using DUNE_NAMESPACES;

    //! Data sampler for on event behavior launcher.
    class Sampler
    {
    public:
      //! Sampler state.
      enum SamplerState
      {
        // Nothing detected or reached the number of minimum samples for negative confirmation.
        ST_NOT_DETECTED,
        // One positive sample after a stream of negative samples and/or no detection.
        ST_RE_POSITIVE,
        // One continuous positive sample (below configurable threshold)
        ST_POSITIVE,
        // We've reached the number of minimum samples for positive confirmation.
        ST_DETECTED,
        // One negative sample after a stream of positive samples and/or detection.
        ST_FE_NEGATIVE,
        // One continuous negative sample (below configurable threshold)
        ST_NEGATIVE
      };

      //! Constructor.
      Sampler(void)
      {
        // Start state machine and use "standard" set of parameters.
        m_state = ST_NOT_DETECTED;
        m_counter = 0;

        // Positive/negative samples for confirmation.
        m_pos_samples = 2;
        m_neg_samples = 3;

        // Positive/negative thresholds (assuming 0-5 V).
        m_pos_tshd = 2.5;
        m_neg_tshd = 2.4;
      }

      //! Constructor with different parameters.
      //! @param[in] pos_thresh positive threshold for detection.
      //! @param[in] pos_samples minimum number of positive samples.
      //! @param[in] neg_thresh negative threshold for detection.
      //! @param[in] neg_samples minimum number of negative samples.
      Sampler(double pos_thresh, unsigned pos_samples, double neg_thresh, unsigned neg_samples)
      {
        m_state = ST_NOT_DETECTED;
        m_counter = 0;
        m_pos_samples = pos_samples;
        m_neg_samples = neg_samples;
        m_pos_tshd = pos_thresh;
        m_neg_tshd = neg_thresh;

      }

      //! Add new sample to the mix.
      //! @param[in] sample new sample.
      //! @return sampler state.
      SamplerState
      insert(double sample)
      {
        // run state machine.
        run(sample);
        return m_state;
      }

      //! Reset state machine.
      void
      reset(void)
      {
        m_state = ST_NOT_DETECTED;
        m_counter = 0;
      }

    private:
      //! Run state machine.
      //! @param[in] sample new sample.
      void
      run(double sample)
      {
        // State machine execution.
        switch (m_state)
        {
          case ST_NOT_DETECTED:
            check(sample, m_pos_tshd, false, true, ST_RE_POSITIVE);
            break;
          case ST_RE_POSITIVE:
            check(sample, m_pos_tshd, true, true, ST_POSITIVE);
            check(sample, m_neg_tshd, true, false, ST_FE_NEGATIVE);
            break;
          case ST_POSITIVE:
            check(sample, m_pos_tshd, true, true, ST_POSITIVE);
            check(sample, m_neg_tshd, true, false, ST_FE_NEGATIVE);
            break;
          case ST_DETECTED:
            check(sample, m_neg_tshd, true, false, ST_FE_NEGATIVE);
            break;
          case ST_FE_NEGATIVE:
            check(sample, m_neg_tshd, false, false, ST_NEGATIVE);
            check(sample, m_pos_tshd, false, true, ST_RE_POSITIVE);
            break;
          case ST_NEGATIVE:
            check(sample, m_neg_tshd, false, false, ST_NEGATIVE);
            check(sample, m_pos_tshd, false, true, ST_RE_POSITIVE);
            break;
          default:
            // impossible state.
            break;
        }
      }

      //! Check counter.
      //! @param[in] sample new sample.
      //! @param[in] threshold threshold value
      //! @param[in] previous current detection type
      //! @param[in] type true/false for positive/negative detection
      //! @param[in] next_state next state of state machine if check is validated.
      void
      check(double sample, double threshold, bool previous, bool type, SamplerState next_state)
      {
        if (type)
        {
          if (sample >= threshold)
          {
            if (!previous)
              m_counter = 0;

            m_counter++;
            m_state = next_state;
            confirmPositive();
          }
        }
        else
        {
          if (sample <= threshold)
          {
            if (previous)
              m_counter = 0;

            m_counter--;
            m_state = next_state;
            confirmNegative();
          }
        }
      }

      //! Confirm positive detection.
      void
      confirmPositive(void)
      {
        if (m_counter >= (int)m_pos_samples)
        {
          m_state = ST_DETECTED;
          m_counter = 0;
        }
      }

      //! Confirm negative detection.
      void
      confirmNegative(void)
      {
        if (m_counter <= -(int)m_neg_samples)
        {
          m_state = ST_NOT_DETECTED;
          m_counter = 0;
        }
      }

      //! State machine.
      SamplerState m_state;
      //! Sample counter.
      int m_counter;
      //! Minimum samples for positive confirmation.
      unsigned m_pos_samples;
      //! Minimum samples for negative confirmation.
      unsigned m_neg_samples;
      //! Positive detection threshold.
      double m_pos_tshd;
      //! Negative detection threshold.
      double m_neg_tshd;
    };
  }
}

#endif
