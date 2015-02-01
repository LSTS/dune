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
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_ROWS_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_ROWS_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    //! Rows maneuver
    class Rows: public MuxedManeuver<IMC::Rows, void>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      Rows(Maneuvers::Maneuver* task):
        MuxedManeuver<IMC::Rows, void>(task),
        m_parser(NULL)
      { }

      //! Destructor
      ~Rows(void)
      {
        Memory::clear(m_parser);
      }

      //! Start maneuver function
      //! @param[in] maneuver rows maneuver message
      void
      onStart(const IMC::Rows* maneuver)
      {
        Memory::clear(m_parser);

        m_parser = new Maneuvers::RowsStages(maneuver, m_task);

        // Get it started
        m_task->setControl(IMC::CL_PATH);
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;

        double lat;
        double lon;

        if (m_parser->getFirstPoint(&lat, &lon))
        {
          m_task->signalCompletion();
          return;
        }

        sendPath(lat, lon);
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        std::stringstream ss;
        ss << "waypoint=" << m_parser->getIndex();

        m_task->signalProgress(pcs->eta, ss.str());

        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
          return;

        double lat;
        double lon;

        if (m_parser->getNextPoint(&lat, &lon))
        {
          m_task->signalCompletion();
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
        m_task->dispatch(m_path);
      }

    private:
      //! Rows stages parser
      Maneuvers::RowsStages* m_parser;
      //! Desired path message
      IMC::DesiredPath m_path;
    };
  }
}

#endif
