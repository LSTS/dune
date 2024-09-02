//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//                                                                          *
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_MONITORS_SERVO_POSITION_MONITOR_HPP_INCLUDED_
#define DUNE_MONITORS_SERVO_POSITION_MONITOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math/Angles.hpp>
#include <DUNE/Time/Counter.hpp>
#include <DUNE/Time/Delta.hpp>
#include <DUNE/Utils/String.hpp>

//! Maximum timestep for evaluation.
static const float c_max_delta = 1.0f;
//! Maximum timestep for delay evaluation.
static const float c_delay = 1.0f;
//! Allowed actuation difference.
static const float c_error = (float)DUNE::Math::Angles::radians(5.0);
//! Minimum position for range checks.
static const float c_min_position = (float)DUNE::Math::Angles::radians(10.0);

namespace DUNE
{
  namespace Monitors
  {
    template<typename T> class ServoPositionMonitor
    {
    public:
      //! Constructor
      ServoPositionMonitor() : m_timer_zero(c_delay), m_timer_range(c_delay), m_tracking(false) {}

      //! Update function with position and command values
      //! Describe fault detected
      //! @param[in] position position measurement to be used in the detection
      //! @param[in] command set position command to be used in the detection
      //! @param[out] description description of the fault detected, if any
      //! @return true if a fault was detected and false otherwise
      bool
      updateAndTest(const T position, const T command, std::string* description)
      {
        double tstep = m_delta.getDelta();

        if (tstep < 0)
          return false;

        // too much time has passed for a proper evaluation.
        if (tstep > c_max_delta)
        {
          reset();
          return false;
        }

        if (zeroFeedback(position, command))
        {
          *description = DTR("unable to center servo");
          return true;
        }

        if (rangeFeedback(position, command))
        {
          *description = DTR("unable to reach position");
          return true;
        }

        *description = "";
        return false;
      }

    private:
      //! Check if servo fails to reply when zeroed.
      //! @param[in] position position measurement to be used in the detection
      //! @param[in] command set position command to be used in the detection
      //! @return true if servo fails to reply, false otherwise.
      bool
      zeroFeedback(const T position, const T command)
      {
        // command is not near zero.
        if (std::fabs(command) > c_error / 2)
          m_timer_zero.reset();

        // position is near zero.
        if (std::fabs(position - command) <= c_error)
          m_timer_zero.reset();

        if (m_timer_zero.overflow())
          return true;

        return false;
      }

      //! Check if servo fails to reply to position.
      //! @param[in] position position measurement to be used in the detection
      //! @param[in] command set position command to be used in the detection
      //! @return true if servo fails to reply, false otherwise.
      bool
      rangeFeedback(const T position, const T command)
      {
        // command is below range.
        if (std::fabs(command) < c_min_position)
        {
          resetRange();
          return false;
        }

        // setup values.
        if (!m_tracking)
        {
          m_tracking = true;
          m_command = command;
        }

        // command is no longer near reference.
        if (std::fabs(command - m_command) > c_error / 2)
          resetRange();

        // position is near reference.
        if (std::fabs(position - m_command) < c_error)
          resetRange();

        // unable to follow position.
        if (m_timer_range.overflow())
          return true;

        return false;
      }

      void
      reset()
      {
        m_timer_zero.reset();
        resetRange();
      }

      void
      resetRange()
      {
        m_command = 0.0;
        m_tracking = false;
        m_timer_range.reset();
      }

      //! Update timestep.
      Time::Delta m_delta;
      //! Zero Response Counter.
      Time::Counter<float> m_timer_zero;
      //! Range Response Counter.
      Time::Counter<float> m_timer_range;
      //! Range command reference.
      T m_command;
      //! Now tracking range.
      bool m_tracking;
    };
  }
}

#endif
