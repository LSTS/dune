//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_STATION_KEEPING_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_STATION_KEEPING_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

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
        m_end_time(-1.0),
        m_paused_state(NULL)
      { }

      ~StationKeeping(void)
      {
        Memory::clear(m_skeep);
        Memory::clear(m_paused_state);
      }

      //! Start maneuver function
      //! @param[in] maneuver stationkeeping maneuver message
      void
      onStart(const IMC::StationKeeping* maneuver)
      {
        if (m_paused_state)
        {
          m_duration = m_paused_state->time_left;
          Memory::clear(m_paused_state);
          m_task->debug("Resuming StationKeeping -- time left: %.2f sec",
                        m_duration);
        }
        else
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
        if (m_skeep == NULL)
          return;

        if (m_skeep->isInside())
        {
          if (m_duration > 0 && m_end_time > 0)
          {
            double time_left = m_end_time - Clock::get();

            if (time_left <= 0)
              m_task->signalCompletion();
            else
              m_task->signalProgress((uint16_t)Math::round(time_left));
          }
        }
        else
        {
          if (m_duration > 0)
            m_task->signalProgress(m_pcs.eta + m_duration);
          else
            m_task->signalProgress();
        }
      }

      void
      onPause(void)
      {
        // If the StationKeeping is of infinite duration or we haven't
        // reached the safe region yet, no need to save any state.
        if (m_duration <= 0.0f || m_end_time < 0.0f)
          return;

        if (!m_paused_state)
          m_paused_state = new PausedState;

        m_paused_state->time_left = static_cast<float>(
            m_end_time - Clock::get());

        m_task->debug("Pausing StationKeeping -- time left: %.2f sec",
                      m_paused_state->time_left);
      }

    private:
      //! Data required to resume the maneuver.
      struct PausedState
      {
        //! Time left to station keep
        float time_left;
      };

      //! Station Keeping behavior
      Maneuvers::StationKeep* m_skeep;
      //! PathControlState message
      IMC::PathControlState m_pcs;
      //! Maneuver's duration
      float m_duration;
      //! End time for the maneuver
      double m_end_time;
      //! Persistent state for resuming after pause
      PausedState* m_paused_state;
    };
  }
}

#endif
