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
// Author: Pedro Calado                                                     *
// Author: Eduardo Marques (original maneuver implementation)               *
// Author: Maria Costa ("Keep Safe" behaviour)                              *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_STATION_KEEPING_EXTENDED_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_STATION_KEEPING_EXTENDED_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

// Local headers
#include "MuxedManeuver.hpp"
#include "Constants.hpp"
#include <DUNE/Time/Counter.hpp>

namespace Maneuver
{
  namespace Multiplexer
  {
    using DUNE_NAMESPACES;

    struct StationKeepingExtendedArgs
    {
      //! Minimum radius to prevent incompatibility with path controller
      double min_radius;
    };

    //! StationKeepingExtended maneuver
    class StationKeepingExtended: public MuxedManeuver<IMC::StationKeepingExtended, StationKeepingExtendedArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args stationkeepingextended arguments
      StationKeepingExtended(Maneuvers::Maneuver* task, StationKeepingExtendedArgs* args):
        MuxedManeuver<IMC::StationKeepingExtended, StationKeepingExtendedArgs>(task, args),
        m_skeep(NULL),
        m_elevate(NULL),
        m_end_time(-1.0),
        m_ks(KS_UNKNOWN)
      { }

      ~StationKeepingExtended(void)
      {
        Memory::clear(m_skeep);
        Memory::clear(m_elevate);
      }

      //! Start maneuver function
      //! @param[in] maneuver stationkeepingextended maneuver message
      void
      onStart(const IMC::StationKeepingExtended* maneuver)
      {
        m_maneuver = *maneuver;
        m_duration = maneuver->duration;

        Memory::replace(m_skeep, new Maneuvers::StationKeep(m_task, maneuver->lat, maneuver->lon,
        		        m_args->min_radius, maneuver->z, maneuver->z_units, maneuver->speed, maneuver->speed_units));

        if (m_duration > 0)
          m_end_time = -1.0;

        if(keepSafe())
        {
          m_ks = KS_STATION;
          m_end_time = -1.0;
        }
        else
          m_ks = KS_UNKNOWN;

        m_timer.reset();
      }

      //! On EstimatedState message
      //! @param[in] msg EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        if (m_skeep == NULL)
          return;

        if (m_skeep->isInside() && (m_end_time < 0))
        {
          m_end_time = Clock::get() + m_duration;
          m_pos = *msg;
          if (keepSafe() && m_ks != KS_LOITER)
            startLoiter();
        }

        switch(m_ks)
        {
          case KS_STATION:
            m_skeep->update(msg);
            break;
          case KS_POPUP:
            m_elevate->update(msg);
            break;
          case KS_LOITER:
            m_skeep->update(&m_pos);
            break;
          case KS_UNKNOWN:
            m_skeep->update(msg);
            break;
        }
      }

      //! On PathControlState message
      //! @param[in] pcs PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        m_pcs = *pcs;

        if (m_skeep == NULL)
          return;

        if (m_ks != KS_POPUP)
          m_skeep->updatePathControl(pcs);
        else
        {
          m_elevate->updatePathControl(pcs);
          if (m_elevate->isDone())
          {
            m_ks = KS_STATION;
            m_timer.setTop(m_maneuver.popup_duration);
            m_task->setControl(IMC::CL_NONE);
          }
        }
      }

      //! On state report function
      void
      onStateReport(void)
      {
        if (m_skeep == NULL)
          return;

        if (m_duration > 0 && m_end_time > 0)
        {
          double time_left = m_end_time - Clock::get();

          if (time_left <= 0)
            m_task->signalCompletion();
          else
            m_task->signalProgress((uint16_t)Math::round(time_left));
        }
        else if (m_duration > 0 && m_end_time < 0)
            m_task->signalProgress(m_pcs.eta + m_duration);

        // Check if KEEP_SAFE option enabled
        if(keepSafe() && m_skeep->isInside() && m_timer.overflow())
        {
          if (m_ks != KS_LOITER)
            startLoiter();
          else if (m_ks != KS_POPUP)
            doPopUp();
        }
      }

      //! Must adopt safe behavior (loiter underwater and popup periodically to report position)
      //! @return true if KEEP_SAFE option is enabled
      bool
      keepSafe(void)
      {
        return (m_maneuver.flags & IMC::StationKeepingExtended::FLG_KEEP_SAFE) != 0;
      }

      //! Starts Loiter on current position
      void
      startLoiter(void)
      {
        m_task->debug("\n\tStart LOITER!");
        m_task->setControl(IMC::CL_PATH);

        m_timer.reset();
        m_timer.setTop(m_maneuver.popup_period);

        IMC::DesiredPath dpath;
        dpath.lradius = m_maneuver.radius;
        dpath.speed = m_maneuver.speed;
        dpath.speed_units = m_maneuver.speed_units;
        dpath.end_z = m_maneuver.z;
        dpath.end_z_units = m_maneuver.z_units;
        dpath.end_lat = m_maneuver.lat;
        dpath.end_lon = m_maneuver.lon;
        m_task->dispatch(dpath);

        m_ks = KS_LOITER;
      }

      //! Surfaces to report position
      void
      doPopUp(void)
      {
        m_task->debug("\n\tStart ELEVATOR!");
        m_task->setControl(IMC::CL_PATH);

        m_timer.reset();
        m_timer.setTop(m_maneuver.popup_duration);

        IMC::Elevator elev;
        elev.flags = IMC::Elevator::FLG_CURR_POS;

        elev.end_z = 0;
        elev.end_z_units = IMC::Z_DEPTH;
        elev.speed = m_maneuver.speed;
        elev.speed_units = m_maneuver.speed_units;

        elev.radius = m_maneuver.radius;
        elev.lat = m_maneuver.lat;
        elev.lon = m_maneuver.lon;

        Memory::replace(m_elevate, new Maneuvers::Elevate(&elev, m_task, c_min_elev_radius));
        m_ks = KS_POPUP;
      }

    private:
      enum KeepSafeState
      {
        //! Unknown state
        KS_UNKNOWN,
        //! Station Keeping
        KS_STATION,
        //! Loitering
        KS_LOITER,
        //! Poping up to surface
        KS_POPUP
      };

      //! Station Keeping behavior
      Maneuvers::StationKeep* m_skeep;
      //! PathControlState message
      IMC::PathControlState m_pcs;
      //! EstimatedState message of position inside SK radius
      IMC::EstimatedState m_pos;
      //! StationKeeping maneuver message
      IMC::StationKeepingExtended m_maneuver;
      //! Elevate maneuver message (for KEEP_SAFE behavior)
      Maneuvers::Elevate* m_elevate;
      //! Maneuver's duration
      float m_duration;
      //! End time for the maneuver
      double m_end_time;
      KeepSafeState m_ks;
      //! Timer (for KEEP_SAFE behavior)
      Time::Counter<float> m_timer;
    };
  }
}

#endif
