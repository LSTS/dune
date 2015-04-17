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

#ifndef DUNE_CONTROL_YO_YO_MOTION_HPP_INCLUDED_
#define DUNE_CONTROL_YO_YO_MOTION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <sstream>

// DUNE headers.
#include <DUNE/Math.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Control
  {
    class YoYoMotion
    {
    public:
      //! Constructor
      //! @param[in] task pointer to calling task
      //! @param[in] pitch pitch angle to use in motion
      //! @param[in] z_ref amplitude z reference for yoyo motion (negative if altitude)
      //! @param[in] amplitude z reference amplitude for yoyo motion
      //! @param[in] variation maximum variation for the pitch angle
      YoYoMotion(DUNE::Tasks::Task* task, float pitch, float z_ref,
                 float amplitude, float variation):
        m_task(task),
        m_pitch_ref(pitch),
        m_z_ref(z_ref),
        m_amplitude(amplitude),
        m_variation(variation),
        m_dir(0)
      { }

      //! Update yoyo motion
      //! @param[in] startup whether or not the yoyo motion is starting now
      //! @param[in] state_z current z position (negative if altitude)
      //! @param[in] pitch current pitch angle
      //! @return new pitch command
      float
      update(bool startup, float state_z, float pitch)
      {
        if (!startup)
        {
          double t_dist = m_dir * (state_z - m_target_z);

          if (t_dist >= 0)
          {
            m_old_pitch = trimPitch(m_dir * m_pitch_ref, pitch);
            return m_old_pitch;
          }

          m_dir = -m_dir;
          m_source_z = m_target_z;
        }
        else if (!m_dir)
        {
          // Start *or* resume (after being off-track)
          // yoyo mode by figuring out whether to go up or down
          double min_z = m_z_ref - m_amplitude;
          double max_z = m_z_ref + m_amplitude;
          double dmin = std::fabs(state_z - min_z);
          double dmax = std::fabs(state_z - max_z);

          m_dir = dmin < dmax ? -1 : 1;
          m_source_z = state_z;
        }

        m_target_z = m_z_ref - m_dir * m_amplitude;

        std::stringstream ss;
        ss << (m_dir < 0 ? "descending " : "ascending ")
           << m_source_z << " --> " <<  m_target_z;
        m_task->debug("%s", ss.str().c_str());

        // Trim pitch value for more smooth control
        // (this is an optional measure, in principle pitch controller
        //  should "know" how to proceed smoothly)
        m_old_pitch = trimPitch(m_dir * m_pitch_ref, pitch);

        return m_old_pitch;
      }

      //! Stabilize pitch in a certain value
      //! @param[in] desired_pitch pitch angle at which to stabilize
      //! @param[in] current_pitch current pitch angle
      //! @return pitch angle to command
      inline float
      stabilize(float desired_pitch, float current_pitch)
      {
        return trimPitch(desired_pitch, current_pitch);
      }

      //! Check if vehicle is between yoyo bounds
      //! @param[in] state_z current z state
      //! @return true if so, false otherwise
      bool
      isBetweenBounds(float state_z)
      {
        return ((state_z < m_z_ref + m_amplitude) && (state_z > m_z_ref - m_amplitude));
      }

    private:
      //! Trim pitch value between configured bounds
      //! @param[in] desired_pitch pitch angle at which to stabilize
      //! @param[in] current_pitch current pitch angle
      //! @return trimmed pitch value
      inline float
      trimPitch(float desired_pitch, float current_pitch)
      {
        if (m_variation > 0.0)
          return Math::trimValue(desired_pitch,
                                 current_pitch - m_variation,
                                 current_pitch + m_variation);
        else
          return desired_pitch;
      }

      //! Pointer to task to call debug()
      DUNE::Tasks::Task* m_task;
      //! Pitch angle to use
      float m_pitch_ref;
      //! Z middle reference
      float m_z_ref;
      //! Amplitude for yoyo motion
      float m_amplitude;
      //! Target z reference
      float m_target_z;
      //! Source z reference
      float m_source_z;
      //! Maximum variation in pitch
      float m_variation;
      //! Direction
      int m_dir;
      //! Flag will be true if reference is altitude
      bool m_is_altitude;
      //! Last pitch angle sent
      float m_old_pitch;
    };
  }
}

#endif
