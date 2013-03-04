//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace Elevator
  {
    using DUNE_NAMESPACES;

    //! Minimum radius admissible for loitering or helicoiding
    static const float c_min_radius = 5.0f;
    //! Number of samples for vertical monitor moving average
    static const unsigned c_vsamples = 10;
    //! Value to be consider at surface
    static const float c_depth_tol = 0.3;

    //! Task arguments
    struct Arguments
    {
      float depth_tolerance;
      float radius_tolerance;
      float vmonitor_speed;
      float vmonitor_timeout;
    };

    //! Vertical monitor data
    struct VMonitor
    {
      //! Timer counter for timeout
      Time::Counter<float> timer;
      //! Last value of depth
      float last_depth;
      //! Last time checked
      double last_time;
      //! Progress below minimum
      bool slow_progress;
      //! Moving average for progress samples
      MovingAverage<float>* mave;

      VMonitor(float timeout, float depth):
        last_depth(depth),
        last_time(Clock::get()),
        slow_progress(false),
        mave(NULL)
      {
        timer.setTop(timeout);
        mave = new MovingAverage<float>(c_vsamples);
      };

      ~VMonitor(void)
      {
        Memory::clear(mave);
      }
    };

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Desired path message
      IMC::DesiredPath m_path;
      //! Elevator Maneuver message
      IMC::Elevator m_maneuver;
      //! Estimated state
      IMC::EstimatedState m_estate;
      //! Pointer to zed that matters
      float* m_state_z;
      //! true if the target depth has been reached
      bool m_done;
      //! True if loitering
      bool m_loitering;
      //! direction up or down (1 or -1)
      int m_dir;
      //! Vertical monitor
      VMonitor* m_vmon;
      //! Task parameters
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_vmon(NULL)
      {
        param("Depth Tolerance", m_args.depth_tolerance)
        .defaultValue("1.0")
        .units(Units::Meter)
        .description("Depth tolerance when elevating towards a new depth");

        param("Radius Tolerance", m_args.radius_tolerance)
        .defaultValue("2.0")
        .units(Units::Meter)
        .description("Distance tolerance to start loitering near elevator's location");

        param("Vertical Monitor -- Minimum Speed", m_args.vmonitor_speed)
        .defaultValue("-1.0")
        .units(Units::MeterPerSecond)
        .description("Negative values will disable vertical progress monitor");

        param("Vertical Monitor -- Timeout", m_args.vmonitor_timeout)
        .defaultValue("15.0")
        .description("Timeout when progress is below the specified value");

        bindToManeuver<Task, IMC::Elevator>();
        bind<IMC::PathControlState>(this);
        bind<IMC::EstimatedState>(this);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_vmon);
      }

      void
      consume(const IMC::Elevator* maneuver)
      {
        m_maneuver = *maneuver;
        m_path.clear();

        if (m_maneuver.radius < c_min_radius)
        {
          war(DTR("invalid loiter radius, forcing a minimum of %0.2f"), c_min_radius);
          m_maneuver.radius = c_min_radius;
        }

        // Enable movement
        setControl(IMC::CL_PATH);

        // either start helicoid right away or get to the waypoint first
        if (maneuver->flags & IMC::Elevator::FLG_CURR_POS)
        {
          m_path.flags = IMC::DesiredPath::FL_LOITER_CURR;
          m_path.end_z = m_maneuver.end_z;
          m_path.end_z_units = m_maneuver.end_z_units;
        }
        else
        {
          m_path.end_z = m_maneuver.start_z;
          m_path.end_z_units = m_maneuver.start_z_units;
        }

        m_path.end_lat = m_maneuver.lat;
        m_path.end_lon = m_maneuver.lon;
        m_path.lradius = m_maneuver.radius;

        // If we are going down then loiter counter-clockwise
        if (m_maneuver.end_z_units == IMC::Z_DEPTH)
        {
          if (m_estate.depth < m_maneuver.end_z)
            m_path.flags |= IMC::DesiredPath::FL_CCLOCKW;
        }
        else if (m_estate.alt > m_maneuver.end_z)
        {
          m_path.flags |= IMC::DesiredPath::FL_CCLOCKW;
        }

        // Set speed
        m_path.speed = m_maneuver.speed;
        m_path.speed_units = m_maneuver.speed_units;

        dispatch(m_path);

        if (m_args.vmonitor_speed > 0.0)
        {
          Memory::clear(m_vmon);
          m_vmon = new VMonitor(m_args.vmonitor_timeout, m_estate.depth);
        }

        // init
        m_dir = 0;
        m_done = false;
        m_loitering = false;
      }

      void
      consume(const IMC::EstimatedState* state)
      {
        m_estate = *state;

        bool was_dir = m_dir;

        // a direction has not been defined yet
        if (!m_dir)
        {
          // variable state_z will hold the vehicle's depth or altitude
          if (m_maneuver.end_z_units == IMC::Z_DEPTH)
          {
            // Depth
            m_state_z = &m_estate.depth;
            m_dir = (*m_state_z > m_maneuver.end_z) ? 1 : -1;
          }
          else if ((m_maneuver.end_z_units == IMC::Z_ALTITUDE) &&
                   (m_estate.alt >= 0))
          {
            // Altitude.
            m_state_z = &m_estate.alt;
            m_dir = (*m_state_z > m_maneuver.end_z) ? -1 : 1;
          }
          else
          {
            signalNoAltitude();
            return;
          }

          debug("%s to %0.2f meters of depth/altitude",
                (m_dir < 0) ? "descending" : "ascending",
                m_maneuver.end_z);
        }

        // If we have set the direction for the first time
        if (!was_dir && m_dir)
        {
          if (m_maneuver.flags & IMC::Elevator::FLG_CURR_POS)
            return;

          m_path.end_z = m_maneuver.end_z;
          m_path.end_z_units = m_maneuver.end_z_units;
        }
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        // if direction has not been defined yet then do not proceed
        if (!m_dir)
          return;

        if (pcs->flags & IMC::PathControlState::FL_LOITERING)
        {
          // If it's not supposed to use the current location then path
          // reference to dive has yet to be fired
          if (!m_loitering && (m_maneuver.flags & IMC::Elevator::FLG_CURR_POS) == 0)
            dispatch(m_path);

          m_loitering = true;

          // check if it is in the neighborhood of the desired depth
          if (std::fabs(*m_state_z - m_maneuver.end_z) <= m_args.depth_tolerance)
          {
            m_done = true;
            debug("Reached target depth/altitude of %0.2f meters.", m_maneuver.end_z);
          }

          // Check if water column is not deep enough for desired altitude
          if (m_maneuver.end_z_units == IMC::Z_ALTITUDE)
          {
            if ((m_maneuver.end_z > m_estate.depth + m_estate.alt)
                && m_estate.depth < c_depth_tol)
            {
              // water column is not deep enough so we bail
              m_done = true;
              war("water column is not deep enough so the maneuver will not proceed.");
            }
          }

          // signal as complete
          if (m_done)
          {
            signalCompletion();
            return;
          }

          if (m_args.vmonitor_speed > 0.0)
            checkVerticalProgress();

          float time_left = getVerticalError() / (m_estate.u * std::sin(m_estate.theta));
          signalProgress((unsigned)std::fabs(time_left));
        }
        else
        {
          float diagonal_length = getVerticalError() / std::sin(Plans::c_rated_pitch);
          float loiter;
          if (m_estate.u)
            loiter = diagonal_length / m_estate.u;
          else
            loiter = Plans::c_max_eta;

          signalProgress(pcs->eta + loiter);
        }
      }

      //! Get absolute difference between current zed and target one
      //! @return the vertical error for the desiredZ
      float
      getVerticalError(void) const
      {
        return std::fabs(m_maneuver.end_z - *m_state_z);
      }

      //! Check vertical progress
      void
      checkVerticalProgress(void)
      {
        // compute vertical rate
        // (multiply by minus direction for absolute value)
        float vrate = - m_dir * (m_estate.depth - m_vmon->last_depth) / (Clock::get() - m_vmon->last_time);

        if ((m_args.vmonitor_speed > vrate) ||
            (m_args.vmonitor_speed > m_vmon->mave->update(vrate)))
        {
          if (m_vmon->slow_progress)
          {
            if (m_vmon->timer.overflow())
              signalError(DTR("vertical progress is too slow"));
          }
          else
          {
            m_vmon->slow_progress = true;
            m_vmon->timer.reset();
          }

          trace("progress is slow: %.2f", vrate);
        }
        else
        {
          m_vmon->slow_progress = false;
          trace("progress ok: %.2f", vrate);
        }

        m_vmon->last_time = Clock::get();
        m_vmon->last_depth = m_estate.depth;
      }
    };
  }
}

DUNE_TASK
