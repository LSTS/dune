//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// This file is subject to the terms and conditions defined in file         *
// 'LICENCE.md', which is part of this source code package.                 *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

namespace Power
{
  namespace PCTLv2
  {
    class LeakStateMachine
    {
    public:
      //! Constructor.
      LeakStateMachine():
        m_min_leak_duration(10.0),
        m_state(ST_PROBE),
        m_detected_first_time(0)
      { }

      //! Set the minimum amount of time that must elapse with continuous
      //! detection to consider a leak real.
      //!
      //! @param[in] min_duration_secs duration in seconds.
      void
      setMinimumLeakDuration(double min_duration_secs)
      {
        m_min_leak_duration = min_duration_secs;
      }

      //! Update state machine.
      //!
      //! @param[in] seconds current time in seconds.
      //! @param[in] detected true if a leak was detected, false otherwise.
      //!
      //! @return true if a real leak was detected, false otherwise.
      bool
      update(double seconds, bool detected)
      {
        bool rv = false;

        switch (m_state)
        {
          case ST_PROBE:
            if (detected)
            {
              m_detected_first_time = seconds;
              m_state = ST_FILTER;
            }
            break;

          case ST_FILTER:
            if (detected)
            {
              double leak_duration = seconds - m_detected_first_time;
              if (leak_duration >= m_min_leak_duration)
                rv = true;
            }
            else
            {
              m_state = ST_PROBE;
            }
            break;
        }

        return rv;
      }

    private:
      enum State
      {
        ST_PROBE,
        ST_FILTER
      };

      //! Minimum leak duration.
      double m_min_leak_duration;
      //! Current state.
      State m_state;
      //! Time at which a leak was first detected.
      double m_detected_first_time;
    };
  }
}
