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
        ILOS(Tasks::Task* task, double gain = 0.1,
             double look_ahead_distance = 200.0,
             double max_ct_heading = Angles::radians(75.0)):
          m_task(task),
          m_gain(gain),
          m_integral(0.0),
          m_look_ahead(look_ahead_distance),
          m_max_ct_heading(max_ct_heading),
          m_saturation_hysteresis(Angles::radians(5.0)),
          m_saturated(false)
        { }

        /// Destructor
        ~ILOS()
        { }

        void
        reset()
        {
          m_integral = 0.0;
          m_saturated = false;
          m_last_step.reset();
        }

        //! Set integral gain
        //! @param gain integral gain
        void
        setGain(const double gain)
        {
          m_gain = gain;
        }

        // Set look ahead distance
        //! @param look_ahead_distance look ahead distance (in meters)
        void
        setLookAheadDistance(const double look_ahead_distance)
        {
          m_look_ahead = look_ahead_distance;
        }

        //! Set maximum cross track heading
        //! @param limit maximum cross track heading (radians)
        void
        setMaxCrossTrackHeading(const double limit)
        {
          m_max_ct_heading = limit;
        }

        //! Set saturation exit margin below the heading limit (radians).
        void
        setSaturationHysteresis(const double margin)
        {
          m_saturation_hysteresis = margin;
        }

        //! Update guidance and return the complete desired heading.
        //! @param error signed cross-track error (meters)
        //! @param track_bearing reference track bearing (radians)
        //! @return normalized desired heading (radians)
        double
        updateHeading(const double error, const double track_bearing)
        {
          // Invalid timesteps must not change the integral.
          const double timestep = m_last_step.getDelta();
          double new_integral = m_integral;
          if (timestep > 0.0)
            new_integral += getIntegralSlope(error, m_integral) * timestep;

          // Compute heading offset relative to the track bearing
          double offset = - std::atan((error + m_gain * new_integral) / m_look_ahead);

          if (!m_saturated && std::fabs(offset) > m_max_ct_heading)
          {
            m_saturated = true;
            m_task->debug(DTR("ILOS entered saturation"));
          }

          if (m_saturated)
          {
            const double exit_limit = m_max_ct_heading - m_saturation_hysteresis;
            const double reset_offset = - std::atan(error / m_look_ahead);
            // Both corrections must clear the exit threshold so resetting the
            // integral cannot immediately put guidance back into saturation.
            if (std::fabs(offset) <= exit_limit && std::fabs(reset_offset) <= exit_limit)
            {
              m_integral = 0.0;
              m_saturated = false;
              offset = reset_offset;
              m_task->debug(DTR("ILOS left saturation: integral reset"));
            }
            else
            {
              // Retain unwinding while the saturation state is latched.
              const double previous_offset = - std::atan((error + m_gain * m_integral) / m_look_ahead);
              if (std::fabs(offset) < std::fabs(previous_offset))
                m_integral = new_integral;
            }
          }
          else
          {
            m_integral = new_integral;
          }

          // Hysteresis affects state transitions, never the hard heading limit.
          offset = Math::trimValue(offset, -m_max_ct_heading, m_max_ct_heading);
          m_debug_parcel.p = Angles::degrees(offset);
          m_debug_parcel.i = m_integral;
          m_task->dispatch(m_debug_parcel);
          
          return Angles::normalizeRadian(track_bearing + offset);
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
        //! Look ahead distance
        double m_look_ahead;
        //! Maximum cross track heading 
        //!< (maximum angle possible, relative to track bearing)
        double m_max_ct_heading;
        //! Margin below the heading limit required to leave saturation.
        double m_saturation_hysteresis;
        //! Saturation state, retained within the hysteresis band.
        bool m_saturated;
        //! Debug parcel
        IMC::ControlParcel m_debug_parcel;

        double
        getIntegralSlope(const double error, const double integral)
        {
          return  (m_look_ahead * error) /
                  ((error + m_gain * integral) * (error + m_gain * integral) +
                    m_look_ahead * m_look_ahead);
        }
      };
    }
  }
}

#endif
