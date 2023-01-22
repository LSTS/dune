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

#ifndef MANEUVER_MULTIPLEXER_TAKEOFF_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_TAKEOFF_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    //! Takeoff maneuver
    class Takeoff: public MuxedManeuver<IMC::Takeoff, void>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      Takeoff(Maneuvers::Maneuver* task):
        MuxedManeuver<IMC::Takeoff, void>(task),
        m_status(false),
        m_height(0)
      { }

      //! Start maneuver function
      //! @param[in] maneuver goto maneuver message
      void
      onStart(const IMC::Takeoff* maneuver)
      {
        // Enable Path Control
        m_task->setControl(IMC::CL_PATH);

        // Update DesiredPath
        m_path.end_lat = maneuver->lat;
        m_path.end_lon = maneuver->lon;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
        m_path.lradius = 0;
        m_path.flags = DesiredPath::FL_3DTRACK;
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
        {
          m_task->signalCompletion();
          m_status = false;
        }
        else
          m_task->signalProgress(pcs->eta);
      }

      //! On message EstimatedState
      //! @param[in] msg pointer to EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        m_height = msg->height;
      }

      //! On message VehicleMedium
      //! @param[in] msg pointer to VehicleMedium message
      void
      onVehicleMedium(const IMC::VehicleMedium* msg)
      {
        // Dispatch DesiredPath after launch
        if(msg->medium == IMC::VehicleMedium::VM_AIR && !m_status)
        {
          if (m_height >= m_path.end_z)
          {
            m_task->dispatch(m_path);
            m_task->debug("Takeoff: Launch Successful - DesiredPath sent.");

            m_status = true;
          }
        }
      }

      ~Takeoff(void)
      { }

    private:
      //! Desired Path message
      IMC::DesiredPath m_path;
      //! Status flag
      bool m_status;
      //! Current vehicle height
      float m_height;
    };
  }
}

#endif
