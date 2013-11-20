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
      float min_radius;
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
      //! Current depth
      float m_depth;
      //! Current altitude
      float m_altitude;
      //! Current pitch
      float m_pitch;
      //! Current forward speed
      float m_u_speed;
      //! Elevator mechanism
      Maneuvers::Elevate* m_elevate;
      //! Vertical monitor
      VMonitor* m_vmon;
      //! Task parameters
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_depth(0.0),
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

        param("Minimum Radius", m_args.min_radius)
        .defaultValue("10.0")
        .description("Minimum radius to prevent incompatibility with path controller");

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

        m_elevate = new Maneuvers::Elevate(maneuver, this,
                                           m_args.min_radius, m_args.depth_tolerance);

        if (m_args.vmonitor_speed > 0.0)
        {
          Memory::clear(m_vmon);
          m_vmon = new VMonitor(m_args.vmonitor_timeout, m_depth);
        }
      }

      void
      consume(const IMC::EstimatedState* state)
      {
        m_depth = state->depth;
        m_altitude = state->alt;
        m_pitch = state->theta;
        m_u_speed = state->u;
        m_elevate->update(state);
      }

      void
      consume(const IMC::PathControlState* pcs)
      {
        m_elevate->updatePathControl(pcs);

        if (m_elevate->isDone())
        {
          signalCompletion();
          return;
        }

        float vertical_error = m_elevate->getVerticalError(m_depth, m_altitude);

        if (pcs->flags & IMC::PathControlState::FL_LOITERING)
        {
          if (m_args.vmonitor_speed > 0.0)
            checkVerticalProgress();

          float time_left = vertical_error / (m_u_speed * std::sin(m_pitch));
          signalProgress((unsigned)std::fabs(time_left));
        }
        else
        {
          float diagonal_length = vertical_error / std::sin(Plans::c_rated_pitch);
          float loiter;

          if (m_u_speed)
            loiter = diagonal_length / m_u_speed;
          else
            loiter = Plans::c_max_eta;

          signalProgress((uint16_t)Math::round(pcs->eta + loiter));
        }
      }

      //! Check vertical progress
      void
      checkVerticalProgress(void)
      {
        // compute vertical rate
        // (multiply by minus direction for absolute value)
        float vrate = - m_elevate->getElevatorDirection() * (m_depth - m_vmon->last_depth) / (Clock::get() - m_vmon->last_time);

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
        m_vmon->last_depth = m_depth;
      }
    };
  }
}

DUNE_TASK
