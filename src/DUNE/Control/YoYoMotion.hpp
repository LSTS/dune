//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
    //! Acceptable distance to reference to consider target reached.
    static const float c_dist_to_ref = 0.2f;
    //! Safety depth margin.
    static const float c_depth_margin = 3.0f;

    class YoYoMotion
    {
    public:
      //! Constructor
      //! @param[in] task pointer to calling task
      //! @param[in] pitch pitch angle to use in motion
      //! @param[in] z_ref z reference for yoyo motion
      //! @param[in] z_units z reference units for yoyo motion
      //! @param[in] amplitude z reference amplitude for yoyo motion
      //! @param[in] variation maximum variation for the pitch angle
      //! @param[in] min_alt minimum altitude reference admissible
      YoYoMotion(DUNE::Tasks::Task* task, float pitch, float z_ref,
                 IMC::ZUnits zunits, float amplitude, float variation,
                 float min_alt = 5.0f, float max_depth = 50.0f):
        m_task(task),
        m_pitch_ref(pitch),
        m_z_ref(z_ref),
        m_zunits(zunits),
        m_amplitude(amplitude),
        m_variation(variation),
        m_min_alt(min_alt),
        m_max_depth(max_depth),
        m_dir(DIR_NONE),
        m_invert(false)
      { }

      //! Update yoyo motion
      //! @param[in] startup whether or not the yoyo motion is starting now
      //! @param[in] depth current depth position
      //! @param[in] altitude current altitude position
      //! @param[in] pitch current pitch angle
      //! @return new pitch command
      float
      update(bool startup, float depth, float alt, float pitch)
      {
        float state_z;
        if (m_zunits == IMC::Z_DEPTH)
          state_z = depth;
        else
          state_z = alt;

        if (m_invert)
        {
          m_dir = -m_dir;
          m_source_z = m_target_z;
          m_invert = false;
          m_task->debug("ascending due to brake");
        }
        else if (!startup)
        {
          double t_dist;
          if (m_zunits == IMC::Z_DEPTH)
          {
            // special case for yoyo at surface.
            if (m_z_ref + m_amplitude < c_dist_to_ref)
            {
              m_old_pitch = trimPitch(m_dir * m_pitch_ref, pitch);
              return m_old_pitch;
            }

            t_dist = m_dir * (state_z - m_target_z);
          }
          else
          {
            t_dist = m_dir * (m_target_z - state_z);
          }

          if (t_dist >= std::min(m_amplitude, c_dist_to_ref)
              && withinLimits(depth, alt))
          {
            m_old_pitch = trimPitch(m_dir * m_pitch_ref, pitch);
            return m_old_pitch;
          }

          m_dir = -m_dir;
          m_source_z = m_target_z;
        }
        else if (m_dir == DIR_NONE)
        {
          // Start *or* resume (after being off-track)
          // yoyo mode by figuring out whether to go up or down
          double min_z = m_z_ref - m_amplitude;
          double max_z = m_z_ref + m_amplitude;
          double dmin = std::fabs(state_z - min_z);
          double dmax = std::fabs(state_z - max_z);

          if (m_zunits == IMC::Z_DEPTH)
          {
            if (max_z > c_dist_to_ref)
              m_dir = dmin < dmax ? DIR_DOWN : DIR_UP;
            else
              m_dir = DIR_UP;
          }
          else
          {
            m_dir = dmin < dmax ? DIR_UP : DIR_DOWN;
          }

          m_source_z = state_z;
        }

        // update target
        if (m_zunits == IMC::Z_DEPTH)
        {
          // keep vehicle within surface and maximum absolute depth
          if (m_dir == DIR_UP)
            m_target_z = std::max(0.0f, m_z_ref - m_amplitude);
          else
            m_target_z = std::min(m_max_depth - c_depth_margin, m_z_ref + m_amplitude);
        }
        else
        {
          // keep the vehicle above minimum altitude
          if (m_dir == DIR_UP)
            m_target_z = m_z_ref + m_amplitude;
          else
            m_target_z = std::max(m_min_alt, m_z_ref - m_amplitude);
        }

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

      //! System is now braking.
      void
      startedBraking(void)
      {
        if (m_invert)
          return;

        if (m_dir == DIR_DOWN)
          m_invert = true;
      }

    private:
      //! Current direction
      enum Direction
      {
        DIR_DOWN = -1,
        DIR_NONE = 0,
        DIR_UP = 1
      };

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

      //! Check if vehicle is within limits.
      //! @param[in] depth current depth position
      //! @param[in] altitude current altitude position
      //! @return true if vehicle is within limits, false otherwise.
      bool
      withinLimits(float depth, float alt)
      {
        if (m_dir == DIR_UP && depth < c_dist_to_ref)
          return false;

        if (m_dir == DIR_DOWN)
        {
          if (alt > 0 && alt <= m_min_alt)
            return false;

          if (depth > m_max_depth - c_depth_margin)
            return false;
        }

        return true;
      }

      //! Pointer to task to call debug()
      DUNE::Tasks::Task* m_task;
      //! Pitch angle to use
      float m_pitch_ref;
      //! Z middle reference
      float m_z_ref;
      //! Z reference units.
      IMC::ZUnits m_zunits;
      //! Amplitude for yoyo motion
      float m_amplitude;
      //! Target z reference
      float m_target_z;
      //! Source z reference
      float m_source_z;
      //! Maximum variation in pitch
      float m_variation;
      //! Minimum allowed altitude reference.
      float m_min_alt;
      //! Maximum allowed depth reference.
      float m_max_depth;
      //! Direction
      int m_dir;
      //! Invert direction
      bool m_invert;
      //! Last pitch angle sent
      float m_old_pitch;
    };
  }
}

#endif
