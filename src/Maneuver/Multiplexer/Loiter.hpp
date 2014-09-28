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
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_LOITER_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_LOITER_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    struct LoiterArgs
    {
      //! Minimum radius to prevent incompatibility with path controller
      double min_radius;
    };

    //! Loiter maneuver
    class Loiter: public MuxedManeuver<IMC::Loiter, LoiterArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args loiter arguments
      Loiter(Maneuvers::Maneuver* task, LoiterArgs* args):
        MuxedManeuver<IMC::Loiter, LoiterArgs>(task, args)
      { }

      //! Start maneuver function
      //! @param[in] maneuver loiter maneuver message
      void
      onStart(const IMC::Loiter* maneuver)
      {
        m_task->setControl(IMC::CL_PATH);

        float radius = maneuver->radius;

        if (radius < m_args->min_radius)
        {
          m_task->war(DTR("forcing minimum radius of %.1f"), m_args->min_radius);
          radius = m_args->min_radius;
        }

        IMC::DesiredPath path;
        path.end_lat = maneuver->lat;
        path.end_lon = maneuver->lon;
        path.end_z = maneuver->z;
        path.end_z_units = maneuver->z_units;
        path.lradius = radius;

        if (maneuver->direction == IMC::Loiter::LD_CCLOCKW)
          path.flags = IMC::DesiredPath::FL_CCLOCKW;
        else
          path.flags = 0;  // clockwise by default

        path.speed = maneuver->speed;
        path.speed_units = maneuver->speed_units;
        m_task->dispatch(path);

        m_duration = maneuver->duration;
        m_end_time = -1;
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_LOITERING)
        {
          if (m_duration)
          {
            double now = Clock::get();

            if (m_end_time < 0)
            {
              m_task->debug("will now loiter for %d seconds", m_duration);
              m_end_time = now + m_duration;
            }
            else if (now >= m_end_time)
            {
              m_task->signalCompletion();
            }
            else
            {
              m_task->signalProgress((uint16_t)Math::round(m_end_time - now));
            }
          }
        }
        else
        {
          if (m_duration > 0)
            m_task->signalProgress(pcs->eta + m_duration);
          else
            m_task->signalProgress();
        }
      }

      ~Loiter(void)
      { }

    private:
      //! Loiter: End time
      double m_end_time;
      //! Loiter: Duration in seconds
      uint16_t m_duration;
    };
  }
}

#endif
