//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef DUNE_MONITORS_SERVO_POSITION_MONITOR_HPP_INCLUDED_
#define DUNE_MONITORS_SERVO_POSITION_MONITOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Utils/String.hpp>
#include <DUNE/Monitors/DelayedTrigger.hpp>

//! Minimum difference in degrees to account for accumulated change
static const float c_min_diff = Angles::radians(3.0);

namespace DUNE
{
  namespace Monitors
  {
    template <typename T>
    class ServoPositionMonitor
    {
    public:
      //! Constructor
      //! @param[in] error_threshold value above which a position fault detection will trigger
      //! @param[in] rate_factor factor to compare between accumulated difference in position and command sent to servo
      //! @param[in] detection_delay delay in seconds before a detection is triggered
      //! @param[in] average_samples number of samples to use in the delayed trigger
      //! @param[in] max_rotation maximum rotation rate of the servo in radians per second
      ServoPositionMonitor(const T error_threshold, const T rate_factor,
                           const double detection_delay, const unsigned average_samples,
                           const T max_rotation):
        c_error_threshold(error_threshold),
        c_rate_factor(rate_factor),
        c_rate_interval(detection_delay),
        c_max_rotation(max_rotation),
        m_valid_last(false)
      {
        m_pos_trigger = new DelayedTrigger<T>(error_threshold, detection_delay, average_samples);
      }

      //! Destructor
      ~ServoPositionMonitor(void)
      {
        Memory::clear(m_pos_trigger);
      }

      //! Update function with position and command values
      //! Describe fault detected
      //! @param[in] position position measurement to be used in the detection
      //! @param[in] command set position command to be used in the detection
      //! @param[out] description description of the fault detected, if any
      //! @return true if a fault was detected and false otherwise
      bool
      updateAndTest(const T position, const T command, std::string* description)
      {
        float now = Time::Clock::get();

        if (m_valid_last)
        {
          T max_rot = c_max_rotation * (now - m_rotation_timer);
          m_rotation_timer = now;

          m_accum_pos += std::fabs(position - m_last_position);
          m_accum_com += Math::trimValue(std::fabs(command - m_last_command),
                                         0.0, max_rot);

          if (now - m_rate_time > c_rate_interval)
          {
            if (m_accum_pos < c_rate_factor * m_accum_com &&
                std::fabs(position - command) > c_min_diff)
            {
              *description = Utils::String::str("position change is %.5f"
                                                "command change is %.5f",
                                                m_accum_pos, m_accum_com);
              return true;
            }

            m_valid_last = false;
          }
        }
        else
        {
          m_accum_pos = 0.0;
          m_accum_com = 0.0;
          m_last_position = position;
          m_last_command = command;
          m_rate_time = now;
          m_rotation_timer = now;

          m_valid_last = true;
        }

        if (m_pos_trigger->updateAndTest(std::fabs(position - command)))
        {
          *description = Utils::String::str("position error above %.2f", c_error_threshold);
          return true;
        }

        *description = "";
        return false;
      }

    private:
      //! DelayedTrigger object for position fault detection
      DelayedTrigger<T>* m_pos_trigger;
      //! Error threshold
      const T c_error_threshold;
      //! Rate factor
      const T c_rate_factor;
      //! Rate time interval for accumulating difference
      const double c_rate_interval;
      //! Maximum rotation rate
      const T c_max_rotation;
      //! Rate time reference
      double m_rate_time;
      //! Rotation rate counter
      double m_rotation_timer;
      //! "last" variables have significant values
      bool m_valid_last;
      //! Last position read
      T m_last_position;
      //! Last command sent
      T m_last_command;
      //! Accumulated position
      T m_accum_pos;
      //! Accumulated command
      T m_accum_com;
    };
  }
}

#endif
