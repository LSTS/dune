//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratorio de Sistemas e Tecnologia Subaquatica (LSTS)                  *
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
// Author: Luís Venâncio                                                    *
//***************************************************************************

#ifndef MANEUVER_SAMPLING_DORIS_HPP_INCLUDED_
#define MANEUVER_SAMPLING_DORIS_HPP_INCLUDED_

// DUNE Headers
#include <DUNE/DUNE.hpp>

// Local Headers
#include "BasicSampler.hpp"

namespace Maneuver
{
  namespace Sampling
  {
    using DUNE_NAMESPACES;

    //! Doris sampler.
    class Doris: public BasicSampler
    {
    public:
      //! Sampling behavior.
      enum Type
      {
        TYPE_DRIFT,
        TYPE_MOVE
      };

      //! Maneuver arguments.
      struct Arguments
      {
        Type type = TYPE_DRIFT;
        float radius = -1.0f;
        float speed = -1.0f;
        float bearing = 0.0f;
      };

      //! Fixed sampler configuration.
      struct Configuration
      {
        float initial_wait_time = 0.0f;
        float setup_timeout = -1.0f;
        float sampling_timeout = -1.0f;
        float alignment_threshold = 15.0f;
      };

      //! State machine states.
      enum State
      {
        STATE_MOVING,
        STATE_WAITING,
        STATE_SETUP,
        STATE_SAMPLING,
        STATE_PAUSING,
        STATE_REPOSITIONING,
        STATE_RESUMING
      };

      //! Default constructor.
      Doris(Maneuvers::Maneuver* task,
            const std::string& args,
            const Configuration& config):
        BasicSampler(task, "Doris"),
        m_args(parseArguments(args)),
        m_config(config),
        m_state(STATE_MOVING),
        m_skeep(nullptr),
        m_target_lat(0.0),
        m_target_lon(0.0),
        m_next_point(0),
        m_alignment_threshold(0.0f),
        m_aligned(false)
      {
        if (m_config.initial_wait_time < 0.0f)
          throw std::runtime_error("Invalid initial wait time.");

        if (m_config.setup_timeout <= 0.0f)
          throw std::runtime_error("Invalid setup timeout.");

        if (m_config.sampling_timeout <= 0.0f)
          throw std::runtime_error("Invalid sampling timeout.");

        m_alignment_threshold = std::fabs(Angles::radians(m_config.alignment_threshold));
      }

      ~Doris()
      {
        Memory::clear(m_skeep);
      }

      void
      onReset(void) override
      {
        Memory::clear(m_skeep);
        m_state = STATE_MOVING;
        m_next_point = 0;
        m_aligned = false;
      }

      void
      onInit(const IMC::Sampling* msg) override
      {
        onReset();

        if (m_args.type == TYPE_DRIFT)
          initializeDrift(msg);
        else
          initializeMove(msg);

        debug("Moving to sampling point...");
      }

      void
      onPathControlState(const IMC::PathControlState* msg) override
      {
        if (m_args.type == TYPE_DRIFT)
        {
          if (m_skeep == nullptr)
            return;

          m_skeep->updatePathControl(msg);

          if (m_state == STATE_REPOSITIONING && m_skeep->isInside())
            requestResume();

          return;
        }

        switch (m_state)
        {
          case STATE_MOVING:
            if (msg->flags & IMC::PathControlState::FL_NEAR)
              startWaiting();
            break;

          case STATE_SAMPLING:
            if (msg->flags & IMC::PathControlState::FL_NEAR)
              requestPause(nullptr);
            break;

          case STATE_REPOSITIONING:
            if (!m_aligned && std::fabs(msg->course_error) < m_alignment_threshold)
            {
              m_aligned = true;
              requestResume();
            }
            break;

          default:
            break;
        }
      }

      void
      onEstimatedState(const IMC::EstimatedState* msg) override
      {
        if (m_args.type != TYPE_DRIFT || m_skeep == nullptr)
          return;

        // Detect the boundary before StationKeep sees the outside state.
        // Otherwise StationKeep would start returning before sampling pauses.
        if (m_state == STATE_SAMPLING && getDistanceToCenter(msg) > m_args.radius)
        {
          requestPause(msg);
          return;
        }

        // Keep StationKeep on station until the payload acknowledges PAUSE.
        if (m_state != STATE_PAUSING)
          m_skeep->update(msg);
      }

      void
      onSamplingAction(const IMC::SamplingAction* msg) override
      {
        if (msg->action == IMC::SamplingAction::SA_COMMAND)
          return;

        if (msg->type == IMC::SamplingAction::SAT_STATE_ERROR)
        {
          m_task->signalError("Received sampling error report.");
          return;
        }

        switch (m_state)
        {
          case STATE_MOVING:
            if (msg->type != IMC::SamplingAction::SAT_STATE_IDLE)
              m_task->signalError("Received unexpected sampling state report while moving to sampling point.");
            break;

          case STATE_WAITING:
            if (msg->type != IMC::SamplingAction::SAT_STATE_IDLE)
              m_task->signalError("Received unexpected sampling state report while waiting to set up.");
            break;

          case STATE_SETUP:
            if (msg->type == IMC::SamplingAction::SAT_STATE_SAMPLING)
              startSampling();
            break;

          case STATE_SAMPLING:
            if (msg->type == IMC::SamplingAction::SAT_STATE_IDLE)
            {
              debug("Stopping sampling...");
              m_task->signalCompletion();
            }
            else if (msg->type == IMC::SamplingAction::SAT_STATE_SAMPLING ||
                     msg->type == IMC::SamplingAction::SAT_STATE_STOPPING)
            {
              m_timeout_timer.reset();
            }
            break;

          case STATE_PAUSING:
            if (msg->type == IMC::SamplingAction::SAT_STATE_PAUSED)
              startRepositioning();
            else if (msg->type == IMC::SamplingAction::SAT_STATE_IDLE)
              m_task->signalCompletion();
            break;

          case STATE_REPOSITIONING:
            if (msg->type == IMC::SamplingAction::SAT_STATE_IDLE)
              m_task->signalCompletion();
            break;

          case STATE_RESUMING:
            if (msg->type == IMC::SamplingAction::SAT_STATE_SAMPLING)
            {
              debug("Sampling resumed...");
              m_timeout_timer.setTop(m_config.sampling_timeout);
              setState(STATE_SAMPLING);
            }
            else if (msg->type == IMC::SamplingAction::SAT_STATE_IDLE)
            {
              m_task->signalCompletion();
            }
            break;

          default:
            break;
        }
      }

      void
      run(void) override
      {
        if (m_args.type == TYPE_DRIFT && m_skeep == nullptr)
          return;

        if (m_state == STATE_MOVING &&
            m_args.type == TYPE_DRIFT &&
            m_skeep->isInside())
        {
          m_skeep->setSpeed(m_args.speed, IMC::SpeedUnits::SUNITS_METERS_PS);
          startWaiting();
        }

        if (m_state == STATE_WAITING && m_timeout_timer.overflow())
          startSetup();

        if ((m_state == STATE_SETUP ||
             m_state == STATE_PAUSING ||
             m_state == STATE_RESUMING) &&
            m_timeout_timer.overflow())
        {
          m_task->signalError(String::str("Sampling %s timed out.",
                                          stateToString(m_state).c_str()));
          return;
        }

        if (m_state == STATE_SAMPLING && m_timeout_timer.overflow())
        {
          m_task->signalError("Sampling timed out.");
          return;
        }

        m_task->signalProgress();
      }

      std::string
      getEntityStateDescription(void) const override
      {
        return String::str("%s - %s",
                           Status::getString(Status::CODE_ACTIVE),
                           stateToString(m_state).c_str());
      }

    private:
      //! Maneuver arguments.
      Arguments m_args;
      //! Fixed sampler configuration.
      const Configuration m_config;
      //! Current state.
      State m_state;
      //! Station keeping maneuver used by drift behavior.
      Maneuvers::StationKeep* m_skeep;
      //! Timeout timer.
      Time::Counter<float> m_timeout_timer;
      //! Sampling area latitude.
      double m_target_lat;
      //! Sampling area longitude.
      double m_target_lon;
      //! State captured when the vehicle leaves the sampling area.
      IMC::EstimatedState m_outside_estate;
      //! Paths between the two sampling points used by move behavior.
      IMC::DesiredPath m_paths[2];
      //! Next sampling point index.
      uint8_t m_next_point;
      //! Alignment threshold for repositioning (radians).
      float m_alignment_threshold;
      //! Alignment flag for repositioning.
      bool m_aligned;

      static Arguments
      parseArguments(const std::string& args)
      {
        TupleList args_list(args);
        const auto args_map = args_list.getMapReversed();

        Arguments parsed_args;
        const std::string type = getRequiredArgument<std::string>(args_map, "Type");

        if (type == "Drift")
          parsed_args.type = TYPE_DRIFT;
        else if (type == "Move")
          parsed_args.type = TYPE_MOVE;
        else
          throw std::runtime_error("Invalid Doris type (expected Drift or Move).");

        parsed_args.radius = getRequiredArgument<float>(args_map, "Radius");
        if (parsed_args.radius <= 0.0f)
          throw std::runtime_error("Invalid sampling radius.");

        parsed_args.speed = getRequiredArgument<float>(args_map, "Speed");
        if (parsed_args.speed <= 0.0f)
          throw std::runtime_error("Invalid sampling speed.");

        if (parsed_args.type == TYPE_MOVE)
        {
          parsed_args.bearing = getRequiredArgument<float>(args_map, "Bearing");
          parsed_args.bearing = Angles::normalizeRadian(Angles::radians(parsed_args.bearing));
        }

        return parsed_args;
      }

      void
      initializeDrift(const IMC::Sampling* msg)
      {
        m_target_lat = msg->lat;
        m_target_lon = msg->lon;
        m_skeep = new Maneuvers::StationKeep(m_task,
                                             msg->lat,
                                             msg->lon,
                                             m_args.radius,
                                             msg->z,
                                             msg->z_units,
                                             msg->speed,
                                             msg->speed_units);
      }

      void
      initializeMove(const IMC::Sampling* msg)
      {
        m_task->setControl(IMC::CL_PATH);

        IMC::DesiredPath path;
        path.end_lat = msg->lat;
        path.end_lon = msg->lon;
        path.end_z = 0.0;
        path.end_z_units = ZUnits::Z_DEPTH;
        path.speed = msg->speed;
        path.speed_units = msg->speed_units;
        path.flags |= IMC::DesiredPath::FL_DIRECT;
        m_task->dispatch(path);

        double point_lat[2] = {msg->lat, msg->lat};
        double point_lon[2] = {msg->lon, msg->lon};
        const double north = m_args.radius * std::cos(m_args.bearing);
        const double east = m_args.radius * std::sin(m_args.bearing);

        WGS84::displace(north, east, &point_lat[0], &point_lon[0]);
        WGS84::displace(-north, -east, &point_lat[1], &point_lon[1]);

        for (unsigned i = 0; i < 2; ++i)
        {
          m_paths[i].end_lat = point_lat[i];
          m_paths[i].end_lon = point_lon[i];
          m_paths[i].end_z = 0.0;
          m_paths[i].end_z_units = ZUnits::Z_DEPTH;
          m_paths[i].speed = m_args.speed;
          m_paths[i].speed_units = SpeedUnits::SUNITS_METERS_PS;
        }
      }

      double
      getDistanceToCenter(const IMC::EstimatedState* state) const
      {
        double lat = state->lat;
        double lon = state->lon;
        Coordinates::toWGS84(*state, lat, lon);

        double north;
        double east;
        WGS84::displacement(lat, lon, 0.0,
                            m_target_lat, m_target_lon, 0.0,
                            &north, &east);

        return Math::norm(north, east);
      }

      void
      startWaiting(void)
      {
        m_task->setControl(IMC::CL_NONE);

        if (m_config.initial_wait_time == 0.0f)
        {
          startSetup();
          return;
        }

        debug("Reached sampling point, waiting %.1f seconds before setup...",
              m_config.initial_wait_time);
        m_timeout_timer.setTop(m_config.initial_wait_time);
        setState(STATE_WAITING);
      }

      void
      startSetup(void)
      {
        debug("Setting up...");
        m_task->setControl(IMC::CL_NONE);
        m_timeout_timer.setTop(m_config.setup_timeout);
        setState(STATE_SETUP);
        sendSamplingActionCmd(IMC::SamplingAction::SAT_CMD_START);
      }

      void
      startSampling(void)
      {
        debug("Starting sampling...");

        if (m_args.type == TYPE_MOVE)
          sendToNextPoint();

        m_timeout_timer.setTop(m_config.sampling_timeout);
        setState(STATE_SAMPLING);
      }

      void
      requestPause(const IMC::EstimatedState* state)
      {
        debug("Repositioning required, requesting pause...");

        if (state != nullptr)
          m_outside_estate = *state;

        m_task->setControl(IMC::CL_NONE);
        m_timeout_timer.setTop(m_config.setup_timeout);
        setState(STATE_PAUSING);
        sendSamplingActionCmd(IMC::SamplingAction::SAT_CMD_PAUSE);
      }

      void
      startRepositioning(void)
      {
        debug("Sampling paused, repositioning...");
        setState(STATE_REPOSITIONING);

        if (m_args.type == TYPE_DRIFT)
        {
          // This is the first outside state seen by StationKeep, so it now
          // starts the path back to the sampling center.
          m_skeep->update(&m_outside_estate);
        }
        else
        {
          sendToNextPoint();
          m_aligned = false;
        }
      }

      void
      requestResume(void)
      {
        debug("Repositioned, requesting resume...");
        m_timeout_timer.setTop(m_config.setup_timeout);
        setState(STATE_RESUMING);
        sendSamplingActionCmd(IMC::SamplingAction::SAT_CMD_RESUME);
      }

      void
      sendToNextPoint(void)
      {
        debug("Switching point...");
        m_task->setControl(IMC::CL_PATH);
        m_task->dispatch(m_paths[m_next_point]);
        m_next_point = (m_next_point + 1) % 2;
      }

      void
      setState(State state)
      {
        debug("State changed: %s -> %s",
              stateToString(m_state).c_str(),
              stateToString(state).c_str());
        m_state = state;
      }

      static std::string
      stateToString(State state)
      {
        switch (state)
        {
          case STATE_MOVING:
            return "Moving to target";
          case STATE_WAITING:
            return "Waiting to set up";
          case STATE_SETUP:
            return "Setting up";
          case STATE_SAMPLING:
            return "Sampling";
          case STATE_PAUSING:
            return "Pausing";
          case STATE_REPOSITIONING:
            return "Repositioning";
          case STATE_RESUMING:
            return "Resuming";
          default:
            return "Unknown";
        }
      }
    };
  }
}

#endif
