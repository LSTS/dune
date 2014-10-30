//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_PLAN_ENGINE_ACTIVATION_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_ACTIVATION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    //! Activation state class
    class Activation
    {
    public:
      //! Activation state
      enum ActivationState
      {
        //! Not available as in, no need for activation
        AS_NONE,
        //! Must be done but has not started yet
        AS_NOT_STARTED,
        //! In progress
        AS_IN_PROGRESS,
        //! Activation done
        AS_DONE,
        //! Activation failed
        AS_FAILED
      };

      //! Default constructor.
      Activation(void)
      {
        clear();
      }

      //! Set the activation time
      //! @param[in] time time to set in activation
      void
      setTime(float time)
      {
        m_time = time;

        if (m_time > 0)
          m_state = AS_NOT_STARTED;
        else
          m_state = AS_NONE;
      }

      //! Clear activation
      void
      clear(void)
      {
        m_state = AS_NONE;
        m_time = -1.0;
      }

      //! Start activation
      void
      start(void)
      {
        if (m_time >= 0.0)
        {
          m_state = AS_IN_PROGRESS;
          m_timer.setTop(m_time);
        }
        else
        {
          m_state = AS_NONE;
        }
      }

      //! Stop activation
      void
      stop(void)
      {
        m_state = AS_DONE;
      }

      //! Flag as failed
      //! @param[in] info reason for failed activation
      void
      setFailed(const std::string& info)
      {
        m_info = info;
        m_state = AS_FAILED;
      }

      //! Set new remaining time for activation
      //! Activation time cannot increase
      //! @param[in] time new activation time
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

      //! Get remaining time in activation
      //! @return remaining time
      float
      getRemaining(void) const
      {
        return m_timer.getRemaining();
      }

      //! Get elapsed activation time
      //! @return elapsed activation time
      float
      getElapsedTime(void) const
      {
        return m_time - m_timer.getRemaining();
      }

      //! Check if timer has overflown
      //! @return true if has overflown
      inline bool
      overflow(void)
      {
        return m_timer.overflow();
      }

      //! Check if activation is in progress
      //! @return true if in progress
      bool
      inProgress(void) const
      {
        return AS_IN_PROGRESS == m_state;
      }

      //! Check if activation has not yet started
      //! @return true if it has not yet started
      bool
      notStarted(void) const
      {
        return AS_NOT_STARTED == m_state;
      }

      //! Activation is done
      //! @return true if activation is done
      bool
      isDone(void) const
      {
        return AS_DONE == m_state;
      }

      //! Activation has failed
      //! @return true if activation has failed
      bool
      hasFailed(void) const
      {
        return AS_FAILED == m_state;
      }

      //! Get error message
      //! @return error string message
      const std::string&
      getInfo(void) const
      {
        return m_info;
      }

    private:
      //! Current plan's activation time if any
      float m_time;
      //! Activation state
      ActivationState m_state;
      //! Timer to estimate time left in activation
      Time::Counter<float> m_timer;
      //! Information regarding the activation state
      std::string m_info;
    };
  }
}

#endif
