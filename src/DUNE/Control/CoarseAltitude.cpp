//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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

// Local headers.
#include <DUNE/Control/CoarseAltitude.hpp>
#include <DUNE/Memory.hpp>

namespace DUNE
{
  namespace Control
  {
    CoarseAltitude::CoarseAltitude(const Arguments* args):
      m_active(false),
      m_args(args)
    {
      if (m_args->sample_limit == 0)
        std::runtime_error("coarse altitude: samples per second cannot be zero");

      m_mmav = new Math::MultiMovingAverage<float>(args->wsizes);
      reset();
    }

    CoarseAltitude::~CoarseAltitude(void)
    {
      Memory::clear(m_mmav);
    }

    void
    CoarseAltitude::reset(void)
    {
      m_corridor = 0;
      m_tracking = false;
      m_mmav->clear();
      m_last_check = 0.0;
      m_time_outside = 0.0;
      m_since_last = 0.0;
    }

    void
    CoarseAltitude::activate(void)
    {
      m_active = true;
    }

    void
    CoarseAltitude::deactivate(void)
    {
      m_active = false;
      reset();
    }

    bool
    CoarseAltitude::isInCorridor(float depth, float desired_depth)
    {
      if (desired_depth > depth)
      {
        if (desired_depth - depth <= m_args->upper_gap[m_corridor])
          return true;
      }
      else
      {
        if (depth - desired_depth <= m_args->upper_gap[m_corridor] / 2.0)
          return true;
      }

      return false;
    }

    void
    CoarseAltitude::measurePerformance(void)
    {
      // See if it's time to check
      if (m_last_check < m_args->period)
        return;

      if (m_time_outside / m_args->period * 100.0 > m_args->max_outside)
        m_corridor = std::min(m_corridor + 1, (unsigned)m_args->wsizes.size() - 1);
      else if (m_corridor)
        --m_corridor;

      m_last_check = 0.0;
      m_time_outside = 0.0;
    }

    float
    CoarseAltitude::update(float timestep, float depth, float desired_depth)
    {
      bool in_corridor = isInCorridor(depth, desired_depth);

      if (!m_tracking)
      {
        if (!in_corridor)
        {
          m_depth_ref = desired_depth;
          return m_depth_ref;
        }

        m_tracking = true;
        m_last_check = 0.0;
      }

      if (!in_corridor)
        m_time_outside += timestep;

      m_last_check += timestep;

      // check if we need to change corridor
      measurePerformance();

      m_since_last += timestep;

      if (m_since_last > 1.0 / (float)m_args->sample_limit)
      {
        m_since_last = 0.0;
        m_mmav->update(desired_depth);

        m_depth_ref = m_mmav->mean(m_corridor);
      }

      return m_depth_ref;
    }
  }
}
