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

#ifndef MANEUVER_SAMPLING_REDX_HPP_INCLUDED_
#define MANEUVER_SAMPLING_REDX_HPP_INCLUDED_

// DUNE Headers
#include <DUNE/DUNE.hpp>

// Local Headers
#include "BasicSampler.hpp"

namespace Maneuver
{
  namespace Sampling
  {
    //! Basic sampler
    class RedX: public BasicSampler
    {
    public:
      //! Maneuver arguments as tuple list.
      DUNE::Utils::TupleList m_args;
      //! Station keeping maneuver.
      DUNE::Maneuvers::StationKeep* m_skeep;
      //! Arguments
      float m_radius;
      float m_speed;
      //! Timeout timer.
      DUNE::Time::Counter<float> m_timeout_timer;
      //! Setup timeout.
      const float m_setup_timeout = 10.0f;
      //! Sampling timeout.
      const float m_sampling_timeout = 5.0f;

      //! State machine states.
      enum RedxState
      {
        //! Moving to target point.
        RS_MOVING,
        //! Sampling setup.
        RS_SETUP,
        //! Sampling.
        RS_SAMPLING
      };
      //! Current state.
      RedxState m_state;

      //! Default constructor.
      RedX(DUNE::Maneuvers::Maneuver* task, std::string args):
        BasicSampler(task, "RedX"),
        m_skeep(nullptr),
        m_radius(-1.0f),
        m_state(RS_MOVING)
      {
        m_args = DUNE::Utils::TupleList(args);

        auto args_map = m_args.getMapReversed();
        for (const auto& arg : m_required_args)
          if (args_map.find(arg) == args_map.end())
            throw std::runtime_error(DUNE::Utils::String::str("Missing required argument: %s", arg.c_str()));

        m_radius = m_args.get<float>("Radius", -1.0f);
        m_speed = m_args.get<float>("Speed", -1.0f);

        if (m_radius <= 0.0f)
          throw std::runtime_error("Invalid sampling radius.");

        if (m_speed <= 0.0f)
          throw std::runtime_error("Invalid sampling speed.");
      }

      ~RedX()
      {
        DUNE::Memory::clear(m_skeep);
      }

      void
      onReset(void)
      {
        DUNE::Memory::clear(m_skeep);
      }

      void
      onInit(const DUNE::IMC::Sampling* msg)
      {
        DUNE::Memory::clear(m_skeep);
        m_skeep = new DUNE::Maneuvers::StationKeep(m_task,
                                                   msg->lat,
                                                   msg->lon,
                                                   m_radius,
                                                   msg->z,
                                                   msg->z_units,
                                                   msg->speed,
                                                   msg->speed_units);
        
        
        debug("Moving to sampling point...");
      }

      void
      onPathControlState(const DUNE::IMC::PathControlState* msg)
      {
        if (m_skeep == nullptr)
          return;

        m_skeep->updatePathControl(msg);
      }

      void
      onEstimatedState(const DUNE::IMC::EstimatedState* msg)
      {
        if (m_skeep == nullptr)
          return;

        m_skeep->update(msg);
      }

      void
      onSamplingAction(const DUNE::IMC::SamplingAction* msg)
      {
        if (m_skeep == nullptr)
          return;
          
        if (msg->action == DUNE::IMC::SamplingAction::SA_COMMAND)
          return;

        switch (m_state)
        {
          case RS_MOVING:
            if (msg->type != DUNE::IMC::SamplingAction::SAT_STATE_IDLE)
              m_task->signalError("Received unexpected sampling state report while moving to sampling point.");
            break;

          case RS_SETUP:
            if (msg->type == DUNE::IMC::SamplingAction::SAT_STATE_STARTING)
            {
              debug("Starting sampling...");
              m_timeout_timer.setTop(m_sampling_timeout);
              m_state = RS_SAMPLING;
            }
            break;

          case RS_SAMPLING:
            if (msg->type == DUNE::IMC::SamplingAction::SAT_STATE_STOPPING)
            {
              debug("Stopping sampling...");
              m_task->signalCompletion();
            }
            else if (msg->type == DUNE::IMC::SamplingAction::SAT_STATE_SAMPLING)
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
          case RS_MOVING:
            if (m_skeep->isInside())
            {
              debug("Reached sampling point, setting up...");
              m_skeep->setSpeed(m_speed, DUNE::IMC::SpeedUnits::SUNITS_METERS_PS);
              m_state = RS_SETUP;
              m_timeout_timer.setTop(m_setup_timeout);
              sendSamplingActionCmd(DUNE::IMC::SamplingAction::SAT_CMD_START);
            }
            break;

          case RS_SETUP:
            if (m_timeout_timer.overflow())
            {
              debug("Sampling setup timeout, stopping...");
              m_task->signalError("Sampling setup timed out.");
            }
            break;

          case RS_SAMPLING:
            if (m_timeout_timer.overflow())
            {
              debug("Sampling timeout, stopping...");
              m_task->signalError("Sampling timed out.");
            }
            break;
        
          default:
            break;
        }

        m_task->signalProgress();
      }

    private:
      const std::vector<std::string> m_required_args = {"Radius",
                                                        "Speed"};
    };
  }
}

#endif
