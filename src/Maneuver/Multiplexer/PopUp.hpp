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
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_POP_UP_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_POP_UP_HPP_INCLUDED_

// DUNE headers
#include <DUNE/DUNE.hpp>

// Local headers
#include "Constants.hpp"
#include "MuxedManeuver.hpp"

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    //! Arguments
    struct PopUpArgs
    {
      //! Minimum number of satelites to accept fix
      unsigned min_sats;
      //! Minimum distance between gps_fix position and the estimated state
      float min_distance;
      //! Radius for the elevator behavior
      float elev_radius;
      //! Maximum distance from station keeping radial circle
      float max_sk_dist;
    };

    //! PopUp maneuver
    class PopUp: public MuxedManeuver<IMC::PopUp, PopUpArgs>
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      //! @param[in] args popup arguments
      PopUp(Maneuvers::Maneuver* task, PopUpArgs* args):
        MuxedManeuver<IMC::PopUp, PopUpArgs>(task, args),
        m_skeep(NULL),
        m_elevate(NULL),
        m_pstate(ST_INITIAL)
      { }

      //! Destructor
      ~PopUp(void)
      {
        Memory::clear(m_skeep);
        Memory::clear(m_elevate);
      }

      //! Start elevating up or down
      //! @param[in] z_value value of z to where we're elevating
      //! @param[in] z_units units for the z reference
      void
      elevate(float z_value, unsigned z_units)
      {
        IMC::Elevator elev;

        elev.flags = IMC::Elevator::FLG_CURR_POS;
        // Start z doesn't matter
        elev.start_z = 0;
        elev.start_z_units = IMC::Z_DEPTH;

        // End does however
        elev.end_z = z_value;
        elev.end_z_units = z_units;
        elev.radius = m_args->elev_radius;

        elev.lat = m_maneuver.lat;
        elev.lon = m_maneuver.lon;

        elev.speed = m_maneuver.speed;
        elev.speed_units = m_maneuver.speed_units;

        Memory::clear(m_elevate);
        m_elevate = new Maneuvers::Elevate(&elev, m_task, c_min_elev_radius);
      }

      //! Go up to the surface
      inline void
      goUp(void)
      {
        elevate(0.0, IMC::Z_DEPTH);
      }

      //! Go down to the maneuver's z reference
      inline void
      goDown(void)
      {
        elevate(m_maneuver.z, m_maneuver.z_units);
      }

      //! Start station keeping
      void
      startStationKeeping(void)
      {
        Memory::clear(m_skeep);

        // Deploy a station keeping right where the vehicle "thinks it is"
        Coordinates::toWGS84(m_state, m_sk_lat, m_sk_lon);
        m_skeep = new Maneuvers::StationKeep(m_task, m_sk_lat, m_sk_lon,
                                             m_args->elev_radius, 0.0, IMC::Z_DEPTH,
                                             m_maneuver.speed,
                                             m_maneuver.speed_units);
      }

      //! Check if the station keeping maneuver's center is too far
      //! @param[in] state pointer to EstimatedState message
      //! @return true if the center is indeed too far
      bool
      isSKeepTooFar(const IMC::EstimatedState* state)
      {
        double lat;
        double lon;
        Coordinates::toWGS84(*state, lat, lon);

        float dist = Coordinates::WGS84::distance(lat, lon, 0.0,
                                                  m_sk_lat, m_sk_lon, 0.0);

        return (dist > m_args->elev_radius + m_args->max_sk_dist);
      }

      //! Start maneuver function
      //! @param[in] maneuver rows maneuver message
      void
      onStart(const IMC::PopUp* maneuver)
      {
        m_maneuver = *maneuver;

        m_dur_timer.setTop(m_maneuver.duration);

        // Waiting or station keeping will be the same
        if (mustKeep() || mustWait())
          m_maneuver.flags |= IMC::PopUp::FLG_WAIT_AT_SURFACE | IMC::PopUp::FLG_STATION_KEEP;

        if (useCurr())
        {
          goUp();
          m_pstate = ST_GO_UP;
        }
        else
        {
          m_task->setControl(IMC::CL_PATH);

          IMC::DesiredPath path;
          path.end_lat = m_maneuver.lat;
          path.end_lon = m_maneuver.lon;
          path.end_z = m_maneuver.z;
          path.end_z_units = m_maneuver.z_units;
          path.speed = m_maneuver.speed;
          path.speed_units = m_maneuver.speed_units;

          m_task->dispatch(path);

          m_pstate = ST_GO_TO;
        }
      }

      //! On message VehicleMedium
      //! @param[in] msg pointer to VehicleMedium message
      void
      onVehicleMedium(const IMC::VehicleMedium* msg)
      {
        switch (m_pstate)
        {
          case ST_NEAR_SURFACE:
            if (msg->medium == IMC::VehicleMedium::VM_WATER)
            {
              if (mustKeep())
              {
                m_pstate = ST_SKEEP;
                m_dur_timer.reset();

                startStationKeeping();
              }
              else
              {
                m_pstate = ST_GET_FIX;
              }
            }
            break;
          default:
            break;
        }
      }

      //! On message GpsFix
      //! @param[in] msg pointer to GpsFix message
      void
      onGpsFix(const IMC::GpsFix* msg)
      {
        float dist;

        switch (m_pstate)
        {
          case ST_GET_FIX:
          case ST_SKEEP:
            if (!(msg->validity & IMC::GpsFix::GFV_VALID_POS))
              break;

            double lat;
            double lon;
            Coordinates::toWGS84(m_state, lat, lon);

            dist = Coordinates::WGS84::distance(lat, lon, 0.0,
                                                msg->lat, msg->lon, 0.0);

            if (msg->satellites >= m_args->min_sats &&
                dist < m_args->min_distance)
            {
              goDown();
              m_pstate = ST_GO_DOWN;
            }
            break;
          default:
            break;
        }
      }

      //! On message EstimatedState
      //! @param[in] msg pointer to EstimatedState message
      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        m_state = *msg;

        switch (m_pstate)
        {
          case ST_GO_UP:
          case ST_GO_DOWN:
            m_elevate->update(msg);
            break;
          case ST_SKEEP:
            if (isSKeepTooFar(msg))
            {
              startStationKeeping();
              m_task->inf(DTR("relocated station keeping"));
            }

            m_skeep->update(msg);
            if (m_dur_timer.overflow())
            {
              goDown();
              m_pstate = ST_GO_DOWN;
            }
            break;
          default:
            break;
        }
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        switch (m_pstate)
        {
          case ST_GO_TO:
            if (pcs->flags & IMC::PathControlState::FL_NEAR)
            {
              goUp();
              m_pstate = ST_GO_UP;
            }
            break;
          case ST_GO_UP:
            m_elevate->updatePathControl(pcs);

            // reached surface?
            if (m_elevate->isDone())
            {
              m_task->setControl(IMC::CL_NONE);
              m_pstate = ST_NEAR_SURFACE;
            }

            break;
          case ST_GO_DOWN:
            m_elevate->updatePathControl(pcs);

            // all done?
            if (m_elevate->isDone())
              m_pstate = ST_DONE;

            break;
          case ST_SKEEP:
            m_skeep->updatePathControl(pcs);
            break;
          case ST_DONE:
            m_task->signalCompletion();
            break;
          default:
            break;
        }
      }

      //! On state report
      void
      onStateReport(void)
      {
        computeETA();
      }

      //! Compute ETA
      inline void
      computeETA(void)
      {
        if (m_pstate == ST_SKEEP)
        {
          m_task->signalProgress((uint16_t)std::ceil(m_dur_timer.getRemaining()));
        }
        else if (m_pstate == ST_DONE)
        {
          m_task->signalProgress(0);
        }
        else
        {
          // TBD
        }
      }

      //! Will use current position
      //! @return true if must use current waypoint
      bool
      useCurr(void)
      {
        return (m_maneuver.flags & IMC::PopUp::FLG_CURR_POS) != 0;
      }

      //! Must wait some time at surface
      //! @return true if must wait when surface has been reached
      bool
      mustWait(void)
      {
        return (m_maneuver.flags & IMC::PopUp::FLG_WAIT_AT_SURFACE) != 0;
      }

      //! Must station keep while at surface
      //! @return true if position must be kept at surface
      bool
      mustKeep(void)
      {
        return (m_maneuver.flags & IMC::PopUp::FLG_STATION_KEEP) != 0;
      }

    private:
      //! Maneuver states for the state machine
      enum PopUpState
      {
        //! Initial useless state
        ST_INITIAL,
        //! Go to point
        ST_GO_TO,
        //! Go up
        ST_GO_UP,
        //! Reaching the surface
        ST_NEAR_SURFACE,
        //! Get a fix
        ST_GET_FIX,
        //! Station keep at the surface
        ST_SKEEP,
        //! Come back down
        ST_GO_DOWN,
        //! Maneuver is done
        ST_DONE
      };

      //! EstimatedState message
      IMC::EstimatedState m_state;
      //! PopUp maneuver message
      IMC::PopUp m_maneuver;
      //! Latitude where the stationkeep behavior was centered
      double m_sk_lat;
      //! Longitude where the stationkeep behavior was centered
      double m_sk_lon;
      //! Station keeping behavior in case it is necessary
      Maneuvers::StationKeep* m_skeep;
      //! Elevator behavior
      Maneuvers::Elevate* m_elevate;
      //! Timer counter for duration
      Time::Counter<float> m_dur_timer;
      //! PopUp maneuver state
      PopUpState m_pstate;
    };
  }
}

#endif
