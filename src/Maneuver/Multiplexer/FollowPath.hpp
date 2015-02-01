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

#ifndef MANEUVER_MULTIPLEXER_FOLLOW_PATH_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_FOLLOW_PATH_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    //! FollowPath maneuver
    class FollowPath: public MuxedManeuver<IMC::FollowPath, void>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      FollowPath(Maneuvers::Maneuver* task):
        MuxedManeuver<IMC::FollowPath, void>(task)
      { }

      //! Destructor
      ~FollowPath(void)
      { }

      //! Reset function
      void
      reset(void)
      {
        m_wpts.clear();
        m_curr = 0;
      }

      //! Start maneuver function
      //! @param[in] maneuver followpath maneuver message
      void
      onStart(const IMC::FollowPath* maneuver)
      {
        reset();

        IMC::MessageList<IMC::PathPoint>::const_iterator itr = maneuver->points.begin();

        // Iterate point list
        for (; itr != maneuver->points.end(); itr++)
        {
          if ((*itr) == NULL)
            continue;

          Waypoint w;
          w.lat = maneuver->lat;
          w.lon = maneuver->lon;
          WGS84::displace((*itr)->x, (*itr)->y, &w.lat, &w.lon);
          w.z = maneuver->z + (*itr)->z;
          w.z_units = maneuver->z_units;

          m_wpts.push_back(w);
        }

        if (!m_wpts.size())
        {
          m_task->signalCompletion();
          return;
        }

        m_task->debug("starting path with %lu waypoints", (long unsigned int)m_wpts.size());

        m_task->setControl(IMC::CL_PATH);

        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        gotoNextPoint();
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        std::stringstream ss;
        ss << "waypoint=" << m_curr;

        m_task->signalProgress(pcs->eta, ss.str());

        if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
          return;

        if (m_curr + 1 == m_wpts.size())
        {
          m_task->signalCompletion();
          return;
        }

        ++m_curr;

        gotoNextPoint();
      }

      //! Routine to throw next waypoint
      void
      gotoNextPoint(void)
      {
        Waypoint& w = m_wpts[m_curr];
        m_path.end_lat = w.lat;
        m_path.end_lon = w.lon;
        m_path.flags = 0;
        m_path.end_z = w.z;
        m_path.end_z_units = w.z_units;
        m_task->dispatch(m_path);
      }

    private:
      //! Struct for waypoint
      struct Waypoint
      {
        double lat;
        double lon;
        double z;
        uint8_t z_units;
      };

      //! Desired path message.
      IMC::DesiredPath m_path;
      //! Vector of waypoints.
      std::vector<Waypoint> m_wpts;
      //! Current waypoint.
      unsigned int m_curr;
    };
  }
}

#endif
