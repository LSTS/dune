//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venâncio                                                    *
//***************************************************************************

#ifndef DUNE_CONTROL_INTEGRAL_CONTROL_HPP_INCLUDED_
#define DUNE_CONTROL_INTEGRAL_CONTROL_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Import namespaces.
using DUNE_NAMESPACES;

namespace Control
{
  namespace Path
  {
    namespace CAS
    {
      // Export DLL Symbol.
      class DUNE_DLL_SYM IntegralControl;

      class IntegralControl
      {
      public:
        /// Constructor
        IntegralControl(Tasks::Task* task, double execution_period = 300, double gain = 0.001,
                        double integral_limit = Math::c_half_pi):
          m_task(task),
          m_execution_period(execution_period),
          m_gain(gain),
          m_integral(0.0),
          m_integral_limit(integral_limit)
        {
          m_timer.setTop(execution_period);
        }

        /// Destructor
        ~IntegralControl()
        { }

        void
        reset()
        {
          m_timer.reset();
          m_integral = 0.0;
        }

        void
        setGain(double gain)
        {
          m_gain = gain;
        }

        void
        setExecutionPeriod(double period)
        {
          m_execution_period = period;
          m_timer.setTop(period);
        }

        void
        setIntegralLimit(double limit)
        {
          m_integral_limit = limit;
        }

        double
        update(double error)
        {
          if (!m_timer.overflow())
            return m_integral;

          // Integrate
          m_integral += m_gain * error;
          m_timer.reset();

          // Limit total value
          if (m_integral > m_integral_limit)
            m_integral = m_integral_limit;
          else if (m_integral < -m_integral_limit)
            m_integral = -m_integral_limit;

          m_task->war(DTR("Updated integral term: %f"), Angles::degrees(m_integral));
          return m_integral;
        }

      private:
        Tasks::Task* m_task;
        double m_execution_period;
        Time::Counter<double> m_timer;
        double m_gain;
        double m_integral;
        double m_integral_limit;

      };
    }
  }
}

#endif /* AUTONAUT_HPP_ */