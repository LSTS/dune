//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: ServoCurrentMonitor.hpp 12667 2013-01-22 02:44:42Z rasm          $:*
//***************************************************************************

#ifndef DUNE_MONITORS_SERVO_CURRENT_MONITOR_HPP_INCLUDED_
#define DUNE_MONITORS_SERVO_CURRENT_MONITOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Time.hpp>

namespace DUNE
{
  namespace Monitors
  {
    template <typename T>
    class ServoCurrentMonitor
    {
    public:
      //! Constructor.
      //! @param lower_limit current lower limit to trigger detection
      //! @param upper_limit current upper limit to trigger detection
      //! @param max_lfaults maximum number of lower faults
      //! @param max_ufaults maximum number of upper faults
      //! @param fault_cooldown cooldown time after a detection has been done
      ServoCurrentMonitor(const T lower_limit, const T upper_limit, const unsigned max_lfaults, const unsigned max_ufaults, const double fault_cooldown):
        c_lower_limit(lower_limit),
        c_upper_limit(upper_limit),
        c_max_lfaults(max_lfaults),
        c_max_ufaults(max_ufaults),
        c_fault_cooldown(fault_cooldown)
      {
        m_upper_faults = 0;
        m_lower_faults = 0;
        m_last_fault = Time::Clock::get() - c_fault_cooldown;
      }

      //! Destructor
      ~ServoCurrentMonitor(void)
      { }

      //! Update function
      //! @param value current measurement to be used in the detection
      //! @return value of the exceeded current (if <= 0 then no fault was detected)
      T
      updateAndTest(const T& value)
      {
        if (Time::Clock::get() - m_last_fault > c_fault_cooldown)
        {
          // Reset the cooldown counter
          m_last_fault = Time::Clock::get();
          // and reset the fault counters
          m_upper_faults = 0;
          m_lower_faults = 0;
        }

        // Check if there is faulty behavior in the electric currents
        if (value > c_lower_limit)
        {
          ++m_lower_faults;
          m_last_fault = Time::Clock::get();
        }

        if (value > c_upper_limit)
          ++m_upper_faults;

        // If a potential fault is detected throw the exceeded current limit
        // Reset counters after that to avoid spamming the output
        if (m_upper_faults > c_max_ufaults)
        {
          m_upper_faults = 0;
          m_lower_faults = 0;

          return c_upper_limit;
        }
        else if (m_lower_faults > c_max_lfaults)
        {
          m_lower_faults = 0;

          return c_lower_limit;
        }
        else
        {
          return -1.0;
        }
      }

    private:
      //! number of upper faults
      unsigned m_upper_faults;
      //! number of lower faults
      unsigned m_lower_faults;
      //! Time of the last fault
      double m_last_fault;
      //! Lower current limit
      const T c_lower_limit;
      //! Upper current limit
      const T c_upper_limit;
      //! Maximum number of lower faults
      const unsigned c_max_lfaults;
      //! Maximum number of upper faults
      const unsigned c_max_ufaults;
      //! Cooldown time of current faults
      const double c_fault_cooldown;
    };
  }
}

#endif
