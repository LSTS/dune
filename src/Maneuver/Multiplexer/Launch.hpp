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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_LAUNCH_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_LAUNCH_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    //! Launch maneuver
    class Launch: public MuxedManeuver<IMC::Launch, void>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      Launch(Maneuvers::Maneuver* task):
        MuxedManeuver<IMC::Launch, void>(task),
        m_lstate(ST_INITIAL)
      { }

      //! Start maneuver function
      //! @param[in] maneuver goto maneuver message
      void
      onStart(const IMC::Launch* maneuver)
      {
        m_task->setControl(IMC::CL_NONE);

        m_lstate = ST_WATER;
        m_path.end_lat = maneuver->lat;
        m_path.end_lon = maneuver->lon;
        m_path.end_z = maneuver->z;
        m_path.end_z_units = maneuver->z_units;
        m_path.speed = maneuver->speed;
        m_path.speed_units = maneuver->speed_units;
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (m_lstate != ST_THRUST)
          return;

        if (pcs->flags & IMC::PathControlState::FL_NEAR)
          m_task->signalCompletion();
        else
          m_task->signalProgress(pcs->eta);
      }

      //! On message VehicleMedium
      //! @param[in] msg pointer to VehicleMedium message
      void
      onVehicleMedium(const IMC::VehicleMedium* msg)
      {
        switch (m_lstate)
        {
          case ST_WATER:
            if (msg->medium == IMC::VehicleMedium::VM_WATER ||
                msg->medium == IMC::VehicleMedium::VM_UNDERWATER)
            {
              m_task->setControl(IMC::CL_PATH);
              m_task->dispatch(m_path);
              m_lstate = ST_THRUST;
            }
            break;
          default:
            break;
        }
      }

      ~Launch(void)
      { }

    private:
      //! Maneuver states for the state machine
      enum LaunchState
      {
        //! Initial useless state.
        ST_INITIAL,
        //! Wait for water/underwater medium.
        ST_WATER,
        //! Go to point.
        ST_THRUST
      };

      // Desired destination.
      IMC::DesiredPath m_path;
      //! Launch maneuver state
      LaunchState m_lstate;
    };
  }
}

#endif
