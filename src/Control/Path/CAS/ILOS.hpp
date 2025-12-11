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

#ifndef DUNE_CONTROL_ILOS_HPP_INCLUDED_
#define DUNE_CONTROL_ILOS_HPP_INCLUDED_

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
      class DUNE_DLL_SYM ILOS;

      class ILOS
      {
      public:
        /// Constructor
        ILOS(Tasks::Task* task, double gain = 0.001,
             double look_ahead_distance = 70.0,
             double integral_limit = 50.0):
          m_task(task),
          m_gain(gain),
          m_integral(0.0),
          m_integral_limit(integral_limit),
          m_look_ahead(look_ahead_distance)
        { }

        /// Destructor
        ~ILOS()
        { }

        void
        reset()
        {
          m_integral = 0.0;
        }

        void
        setGain(double gain)
        {
          m_gain = gain;
        }

        void
        setIntegralLimit(double limit)
        {
          m_integral_limit = limit;
        }

        double
        update(double error)
        {
          double timestep = m_last_step.getDelta();

          // Integrate using rectangle rule and clamp integral
          m_integral += error * timestep;
          m_integral = Math::trimValue(m_integral, -m_integral_limit, m_integral_limit);

          double offset = - std::atan((error + m_gain * m_integral) / m_look_ahead);


          m_task->war(DTR("Updated ILOS offset: %f | Integral: %f"), Angles::degrees(offset), m_integral);
          m_debug_parcel.p = Angles::degrees(offset);
          m_debug_parcel.i = m_integral;
          m_task->dispatch(m_debug_parcel);
          
          return offset;
        }

      private:
        //! Task handler
        Tasks::Task* m_task;
        //! Time of last path controller step
        Delta m_last_step;
        //! Integral gain
        double m_gain;
        //! Integral term
        double m_integral;
        //! Integral limit
        double m_integral_limit;
        //! Look ahead distance
        double m_look_ahead;
        IMC::ControlParcel m_debug_parcel;

      };
    }
  }
}

#endif