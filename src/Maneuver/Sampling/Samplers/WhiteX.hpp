//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luís Venâncio                                                    *
//***************************************************************************

#ifndef MANEUVER_SAMPLING_WHITEX_HPP_INCLUDED_
#define MANEUVER_SAMPLING_WHITEX_HPP_INCLUDED_

// DUNE Headers
#include <DUNE/DUNE.hpp>

// Local Headers
#include "BasicSampler.hpp"

namespace Maneuver
{
  namespace Sampling
  {
    using DUNE_NAMESPACES;

    //! Basic sampler
    class WhiteX: public BasicSampler
    {
    public:
      //! Maneuver arguments.
      struct Arguments
      {
        float radius = -1.0f;
        float speed = -1.0f;
      };

      //! Fixed sampler configuration.
      struct Configuration
      {
        float setup_timeout = -1.0f;
        float sampling_timeout = -1.0f;
      };

      //! Maneuver arguments.
      Arguments m_args;
      //! Fixed sampler configuration.
      const Configuration m_config;
      //! Station keeping maneuver.
      Maneuvers::StationKeep* m_skeep;
      //! Timeout timer.
      Time::Counter<float> m_timeout_timer;

      //! State machine states.
      enum WhitexState
      {
        //! Moving to target point.
        WS_MOVING,
        //! Sampling setup.
        WS_SETUP,
        //! Sampling.
        WS_SAMPLING
      };
      //! Current state.
      WhitexState m_state;

      //! Default constructor.
      WhiteX(Maneuvers::Maneuver* task,
             const std::string& args,
             const Configuration& config):
        BasicSampler(task, "WhiteX"),
        m_args(parseArguments(args)),
        m_config(config),
        m_skeep(nullptr),
        m_state(WS_MOVING)
      {
        if (m_config.setup_timeout <= 0.0f)
          throw std::runtime_error("Invalid setup timeout.");

        if (m_config.sampling_timeout <= 0.0f)
          throw std::runtime_error("Invalid sampling timeout.");
      }

      ~WhiteX()
      {
        DUNE::Memory::clear(m_skeep);
      }

      void
      onReset(void)
      {
        DUNE::Memory::clear(m_skeep);
      }

      void
      onInit(const IMC::Sampling* msg)
      {
        Memory::clear(m_skeep);
        m_skeep = new Maneuvers::StationKeep(m_task,
                                             msg->lat,
                                             msg->lon,
                                             m_args.radius,
                                             msg->z,
                                             msg->z_units,
                                             msg->speed,
                                             msg->speed_units);
        
        
        debug("Moving to sampling point...");
      }

      void
      onPathControlState(const IMC::PathControlState* msg)
      {
        if (m_skeep == nullptr)
          return;

        m_skeep->updatePathControl(msg);
      }

      void
      onEstimatedState(const IMC::EstimatedState* msg)
      {
        if (m_skeep == nullptr)
          return;

        m_skeep->update(msg);
      }

      void
      onSamplingAction(const IMC::SamplingAction* msg)
      {
        if (m_skeep == nullptr)
          return;
          
        if (msg->action == IMC::SamplingAction::SA_COMMAND)
          return;

        if (msg->type == IMC::SamplingAction::SAT_STATE_ERROR)
        {
          m_task->signalError("Received sampling error report.");
          return;
        }

        switch (m_state)
        {
          case WS_MOVING:
            if (msg->type != IMC::SamplingAction::SAT_STATE_IDLE)
            {
              m_task->signalError("Received unexpected sampling state report while moving to sampling point.");
              return;
            }
            break;

          case WS_SETUP:
            if (msg->type == IMC::SamplingAction::SAT_STATE_SAMPLING)
            {
              debug("Starting sampling...");
              m_timeout_timer.setTop(m_config.sampling_timeout);
              m_state = WS_SAMPLING;
            }
            break;

          case WS_SAMPLING:
            if (msg->type == IMC::SamplingAction::SAT_STATE_IDLE)
            {
              debug("Stopping sampling...");
              m_task->signalCompletion();
              return;
            }
            else if (msg->type == IMC::SamplingAction::SAT_STATE_SAMPLING ||
                     msg->type == IMC::SamplingAction::SAT_STATE_STOPPING)
            {
              m_timeout_timer.reset();
            }
            break;
        
          default:
            break;
        }
      }

      void
      run(void)
      {
        if (m_skeep == nullptr)
          return;

        switch (m_state)
        {
          case WS_MOVING:
            if (m_skeep->isInside())
            {
              debug("Reached sampling point, setting up...");
              m_skeep->setSpeed(m_args.speed, IMC::SpeedUnits::SUNITS_METERS_PS);
              m_state = WS_SETUP;
              m_timeout_timer.setTop(m_config.setup_timeout);
              sendSamplingActionCmd(IMC::SamplingAction::SAT_CMD_START);
            }
            break;

          case WS_SETUP:
            if (m_timeout_timer.overflow())
            {
              debug("Sampling setup timeout, stopping...");
              m_task->signalError("Sampling setup timed out.");
              return;
            }
            break;

          case WS_SAMPLING:
            if (m_timeout_timer.overflow())
            {
              debug("Sampling timeout, stopping...");
              m_task->signalError("Sampling timed out.");
              return;
            }
            break;
        
          default:
            break;
        }

        m_task->signalProgress();
      }

    private:
      static Arguments
      parseArguments(const std::string& args)
      {
        Utils::TupleList args_list(args);
        auto args_map = args_list.getMapReversed();

        Arguments parsed_args;
        
        parsed_args.radius = getRequiredArgument<float>(args_map, "Radius");
        if (parsed_args.radius <= 0.0f)
          throw std::runtime_error("Invalid sampling radius.");

        parsed_args.speed = getRequiredArgument<float>(args_map, "Speed");
        if (parsed_args.speed <= 0.0f)
          throw std::runtime_error("Invalid sampling speed.");

        return parsed_args;
      }
    };
  }
}

#endif
