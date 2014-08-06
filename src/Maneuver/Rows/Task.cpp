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

// ISO C++ 98 headers.
#include <iomanip>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace Rows
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Rows stages parser
      Maneuvers::RowsStages* m_parser;
      //! Desired path message
      IMC::DesiredPath m_path;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_parser(NULL)
      {
        bindToManeuver<Task, IMC::Rows>();
      }

      void
      onManeuverDeactivation(void)
      {
        Memory::clear(m_parser);
      }

      void
      consume(const IMC::Rows* maneuver)
      {
        Memory::clear(m_parser);

        m_parser = new Maneuvers::RowsStages(maneuver, this);

        // Get it started
        setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;

        double lat;
        double lon;

        if (m_parser->getFirstPoint(&lat, &lon))
        {
          signalCompletion();
          return;
        }

        sendPath(lat, lon);
      }

      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        std::stringstream ss;
        ss << "waypoint=" << m_parser->getIndex();

        signalProgress(pcs->eta, ss.str());

        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
          return;

        double lat;
        double lon;

        if (m_parser->getNextPoint(&lat, &lon))
        {
          signalCompletion();
          return;
        }

        sendPath(lat, lon);
      }

      //! Send new desired path
      //! @param[in] lat latitude for new desired path
      //! @param[in] lon longitude for new desired path
      void
      sendPath(double lat, double lon)
      {
        // Calculate WGS-84 coordinates and fill DesiredPath message
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.flags = 0;
        dispatch(m_path);
      }
    };
  }
}

DUNE_TASK
