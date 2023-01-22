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
// Author: Maria Costa                                                      *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_LAND_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_LAND_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    //! Land maneuver
    class Land: public MuxedManeuver<IMC::Land, void>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      Land(Maneuvers::Maneuver* task):
        MuxedManeuver<IMC::Land, void>(task),
        m_ground(false),
        m_status(false)
      { }

      //! Start maneuver function
      //! @param[in] maneuver goto maneuver message
      void
      onStart(const IMC::Land* maneuver)
      {
        // Local variables
        float dist;
        double m_lat, m_lon;

        // Save touchdown desired coordinates
        m_land = *maneuver;

        // Enable Path Control
        m_task->setControl(IMC::CL_PATH);

        // Calculation of Glide Slope WP
        m_lat = maneuver->lat;
        m_lon = maneuver->lon;
        dist = maneuver->glide_slope * maneuver->glide_slope_alt;
        Coordinates::WGS84::displace(-std::cos(maneuver->bearing)*dist, -std::sin(maneuver->bearing)*dist, &m_lat, &m_lon);

        // Dispatch DesiredPath of Glide Slope WP
        m_path.end_lat = m_lat;
        m_path.end_lon = m_lon;
        m_path.end_z = maneuver->glide_slope_alt;
        m_path.end_z_units = maneuver->z_units;
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.lradius = 0;
        m_path.flags = DesiredPath::FL_3DTRACK;
        m_task->dispatch(m_path);

        m_task->debug("Sent DesiredPath of GlideSlope WP.");
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        // Maneuver doesn't complete until vehicle reports vehicle medium as ground
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          if (!m_status)
          {
            sendTouchdown(m_land.lat, m_land.lon, m_land.z);
            m_status = true;
          }
        }
        else
          m_task->signalProgress(pcs->eta);
      }

      //! On message VehicleMedium
      //! @param[in] msg pointer to VehicleMedium message
      void
      onVehicleMedium(const IMC::VehicleMedium* msg)
      {
        m_ground = (msg->medium == IMC::VehicleMedium::VM_GROUND);

        // Maneuver is complete only vehicle medium is GROUND
        if(m_ground && m_status)
        {
          m_task->signalCompletion();
          m_status = false;
        }
      }

      //! Send touchdown DesiredPath
      //! @param[in] lat latitude
      //! @param[in] lon longitude
      void
      sendTouchdown(double lat, double lon, double z)
      {
        // Dispatch new desired path
        m_path.end_lat = lat;
        m_path.end_lon = lon;
        m_path.end_z = z;
        m_path.flags = IMC::DesiredPath::FL_LAND;
        m_task->dispatch(m_path);
        m_task->debug("Sent Touchdown DesiredPath.");

        // Dispatch Land IMC message with order to perform landing approach
        m_task->dispatch(m_land);
      }

      ~Land(void)
      { }

    private:
      //! Desired Path message
      IMC::DesiredPath m_path;
      //! Land message
      IMC::Land m_land;
      //! Vehicle is on ground
      bool m_ground;
      //! Status flag
      bool m_status;
    };
  }
}

#endif
