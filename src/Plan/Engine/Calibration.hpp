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

#ifndef PLAN_ENGINE_CALIBRATION_HPP_INCLUDED_
#define PLAN_ENGINE_CALIBRATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    // Export DLL Symbol.
    class DUNE_DLL_SYM Calibration;

    //! Plan Specification parser
    class Calibration
    {
    public:
      //! Calibration state
      enum CalibrationState
      {
        //! Not available as in, no need for calibration
        CS_NONE,
        //! Must be done but has not started yet
        CS_NOT_STARTED,
        //! In progress
        CS_IN_PROGRESS,
        //! Calibration done
        CS_DONE,
        //! Calibration failed
        CS_FAILED
      };

      //! Default constructor.
      Calibration(void)
      {
        clear();
      }

      //! Set the calibration time
      //! @param[in] time time to set in calibration
      void
      setTime(float time)
      {
        m_time = time;

        if (m_time > 0)
          m_state = CS_NOT_STARTED;
        else
          m_state = CS_NONE;
      }

      //! Clear calibration
      void
      clear(void)
      {
        m_state = CS_NONE;
        m_time = -1.0;
      }

      //! Start calibration
      void
      start(void)
      {
        if (m_time >= 0.0)
        {
          m_state = CS_IN_PROGRESS;
          m_timer.setTop(m_time);
        }
        else
        {
          m_state = CS_NONE;
        }
      }

      //! Stop calibration
      void
      stop(void)
      {
        m_state = CS_DONE;
      }

      //! Flag as failed
      //! @param[in] info reason for failed calibration
      void
      setFailed(const std::string& info)
      {
        m_info = info;
        m_state = CS_FAILED;
      }

      //! Set new remaining time for calibration
      //! Calibration time cannot increase
      //! @param[in] time new calibration time
      void
      forceRemainingTime(float time)
      {
        if (time < 0.0)
          return;

        float elapsed = std::max(m_time - m_timer.getRemaining(), 0.0f);

        float new_top = std::min(m_timer.getRemaining(), time);

        m_timer.setTop(new_top);
        m_time = new_top + elapsed;
      }

      //! Get remaining time in calibration
      //! @return remaining time
      float
      getRemaining(void) const
      {
        return m_timer.getRemaining();
      }

      //! Get elapsed calibration time
      //! @return elapsed calibration time
      float
      getElapsedTime(void) const
      {
        return m_time - m_timer.getRemaining();
      }

      //! Check if calibration is in progress
      //! @return true if in progress
      bool
      inProgress(void) const
      {
        return CS_IN_PROGRESS == m_state;
      }

      //! Check if calibration has not yet started
      //! @return true if it has not yet started
      bool
      notStarted(void) const
      {
        return CS_NOT_STARTED == m_state;
      }

      //! Calibration is done
      //! @return true if calibration is done
      bool
      isDone(void) const
      {
        return CS_DONE == m_state;
      }

      //! Calibration has failed
      //! @return true if calibration has failed
      bool
      hasFailed(void) const
      {
        return CS_FAILED == m_state;
      }

      //! Get error message
      //! @return error string message
      const std::string&
      getInfo(void) const
      {
        return m_info;
      }

    private:
      //! Current plan's calibration time if any
      float m_time;
      //! Calibration state
      CalibrationState m_state;
      //! Timer to estimate time left in calibration
      Time::Counter<float> m_timer;
      //! Information regarding the calibration state
      std::string m_info;
    };
  }
}

#endif
