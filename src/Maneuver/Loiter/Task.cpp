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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace Loiter
  {
    using DUNE_NAMESPACES;

    //! Task arguments
    struct Arguments
    {
      //! Minimum radius to prevent incompatibility with path controller
      double min_radius;
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Desired path message
      IMC::DesiredPath m_path;
      //! End time of the loiter
      double m_end_time;
      //! Duration of the loiter in seconds
      uint16_t m_duration;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx)
      {
        param("Minimum Radius", m_args.min_radius)
        .defaultValue("10.0")
        .description("Minimum radius to prevent incompatibility with path controller");

        bindToManeuver<Task, IMC::Loiter>();
      }

      void
      consume(const IMC::Loiter* maneuver)
      {
        setControl(IMC::CL_PATH);

        float radius = maneuver->radius;

        if (radius < m_args.min_radius)
        {
          war(DTR("forcing minimum radius of %.1f"), m_args.min_radius);
          radius = m_args.min_radius;
        }

        m_path.end_lat = maneuver->lat;
        m_path.end_lon = maneuver->lon;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;
        m_path.lradius = radius;

        if (maneuver->direction == IMC::Loiter::LD_CCLOCKW)
          m_path.flags = IMC::DesiredPath::FL_CCLOCKW;
        else
          m_path.flags = 0;  // clockwise by default

        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        dispatch(m_path);

        m_duration = maneuver->duration;
        m_end_time = -1;
      }

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
              debug("will now loiter for %d seconds", m_duration);
              m_end_time = now + m_duration;
            }
            else if (now >= m_end_time)
            {
              signalCompletion();
            }
            else
            {
              signalProgress((uint16_t)Math::round(m_end_time - now));
            }
          }
        }
        else
        {
          if (m_duration > 0)
            signalProgress(pcs->eta + m_duration);
          else
            signalProgress();
        }
      }
    };
  }
}

DUNE_TASK
