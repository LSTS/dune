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

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace Dubin
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      IMC::DesiredSpeed m_speed;
      IMC::DesiredHeading m_heading;
      bool m_got_href;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_got_href(false)
      {
        bindToManeuver<Task, IMC::Dubin>();
        bind<IMC::EstimatedState>(this);
      }

      void
      consume(const IMC::Dubin* maneuver)
      {
        setControl(IMC::CL_DEPTH | IMC::CL_SPEED | IMC::CL_YAW);

        if ((maneuver->z_units == IMC::Z_DEPTH) || (maneuver->z_units == IMC::Z_ALTITUDE))
        {
          IMC::DesiredZ zref;
          zref.value = maneuver->z;
          zref.z_units = maneuver->z_units;
          dispatch(zref);
        }
        else
        {
          signalError(DTR("vertical control type not supported"));
        }

        m_speed.value = maneuver->speed;
        m_speed.speed_units = maneuver->speed_units;
        dispatch(m_speed);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (!m_got_href)
        {
          m_heading.value = msg->psi;
          dispacth(m_heading);

          m_got_href = true;
        }
      }
    };
  }
}

DUNE_TASK
