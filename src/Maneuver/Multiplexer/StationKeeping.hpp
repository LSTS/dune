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

#ifndef MANEUVER_MULTIPLEXER_STATION_KEEPING_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_STATION_KEEPING_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    struct StationKeepingArgs
    {
      //! Minimum radius to prevent incompatibility with path controller
      double min_radius;
    };

    //! StationKeeping maneuver
    class StationKeeping: public MuxedManeuver<IMC::StationKeeping, StationKeepingArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args stationkeeping arguments
      StationKeeping(Maneuvers::Maneuver* task, StationKeepingArgs* args):
        MuxedManeuver<IMC::StationKeeping, StationKeepingArgs>(task, args),
        m_skeep(NULL),
        m_end_time(-1.0)
      { }

      ~StationKeeping(void)
      {
        Memory::clear(m_skeep);
      }

      //! Start maneuver function
      //! @param[in] maneuver stationkeeping maneuver message
      void
      onStart(const IMC::StationKeeping* maneuver)
      {
        m_duration = maneuver->duration;

        Memory::clear(m_skeep);
        m_skeep = new Maneuvers::StationKeep(maneuver, m_task, m_args->min_radius);

        if (m_duration > 0)
          m_end_time = -1.0;
      }

      //! On EstimatedState message
      //! @param[in] msg EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        if (m_skeep == NULL)
          return;

        if (m_skeep->isInside() && (m_end_time < 0))
          m_end_time = Clock::get() + m_duration;

        m_skeep->update(msg);
      }

      //! On PathControlState message
      //! @param[in] pcs PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        m_pcs = *pcs;

        if (m_skeep == NULL)
          return;

        m_skeep->updatePathControl(pcs);
      }

      //! On state report function
      void
      onStateReport(void)
      {
        if (m_duration > 0 && m_end_time > 0)
        {
          double time_left = m_end_time - Clock::get();

          if (time_left <= 0)
            m_task->signalCompletion();
          else
            m_task->signalProgress((uint16_t)Math::round(time_left));
        }
        else if (m_skeep != NULL)
        {
          if (m_skeep->isMoving())
            m_task->signalProgress(m_pcs.eta);
        }
      }

    private:
      //! Station Keeping behavior
      Maneuvers::StationKeep* m_skeep;
      //! PathControlState message
      IMC::PathControlState m_pcs;
      //! Maneuver's duration
      float m_duration;
      //! End time for the maneuver
      double m_end_time;
    };
  }
}

#endif
