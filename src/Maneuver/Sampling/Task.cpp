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
// Author: Luis Venâncio                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "SamplerFactory.hpp"

namespace Maneuver
{
  namespace Sampling
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Maneuvers::Maneuver
    {
      //! Supported sampler types.
      std::vector<std::string> m_supported_samplers;
      //! Sampler handle.
      std::unique_ptr<BasicSampler> m_sampler;
      //! Fixed sampler configurations.
      Sampler::Configurations m_sampler_config;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Maneuvers::Maneuver(name, ctx),
        m_sampler(nullptr)
      {
        param("Supported Sampler Types", m_supported_samplers)
        .defaultValue("")
        .description("List of supported sampler types");

        param("DriftingDoris -- Setup Timeout", m_sampler_config.drifting_doris.setup_timeout)
        .defaultValue("10.0")
        .minimumValue("0.1")
        .units(Units::Second)
        .description("Maximum time allowed for sampling setup");

        param("DriftingDoris -- Sampling Timeout", m_sampler_config.drifting_doris.sampling_timeout)
        .defaultValue("5.0")
        .minimumValue("0.1")
        .units(Units::Second)
        .description("Maximum time without a sampling state update");

        param("MovingDoris -- Setup Timeout", m_sampler_config.moving_doris.setup_timeout)
        .defaultValue("10.0")
        .minimumValue("0.1")
        .units(Units::Second)
        .description("Maximum time allowed for sampling setup");

        param("MovingDoris -- Sampling Timeout", m_sampler_config.moving_doris.sampling_timeout)
        .defaultValue("5.0")
        .minimumValue("0.1")
        .units(Units::Second)
        .description("Maximum time without a sampling state update");

        param("RedX -- Setup Timeout", m_sampler_config.redx.setup_timeout)
        .defaultValue("10.0")
        .minimumValue("0.1")
        .units(Units::Second)
        .description("Maximum time allowed for sampling setup");

        param("RedX -- Sampling Timeout", m_sampler_config.redx.sampling_timeout)
        .defaultValue("5.0")
        .minimumValue("0.1")
        .units(Units::Second)
        .description("Maximum time without a sampling state update");

        param("WhiteX -- Setup Timeout", m_sampler_config.whitex.setup_timeout)
        .defaultValue("10.0")
        .minimumValue("0.1")
        .units(Units::Second)
        .description("Maximum time allowed for sampling setup");

        param("WhiteX -- Sampling Timeout", m_sampler_config.whitex.sampling_timeout)
        .defaultValue("5.0")
        .minimumValue("0.1")
        .units(Units::Second)
        .description("Maximum time without a sampling state update");

        bindToManeuver<Task, IMC::Sampling>();
        bind<IMC::EstimatedState>(this);
        bind<IMC::SamplingAction>(this);
        bind<IMC::RemoteActions>(this);
      }

      void
      onResourceInitialization(void)
      {
        Maneuver::onResourceInitialization();

        // Add button to pause and resume sampling.
        IMC::RemoteActionsRequest action_register;
        action_register.op = DUNE::IMC::RemoteActionsRequest::OP_REGISTER;
        action_register.actions = "Pause Sampler=Button;Resume Sampler=Button";
        dispatch(action_register);
      }
      
      void
      onManeuverDeactivation(void)
      {
        if (!m_sampler)
          return;
        
        m_sampler->onReset();
        m_sampler.reset();
      }

      void
      consume(const IMC::Sampling* msg)
      {
        // Check if the requested sampler type is supported by the vehicle.
        if (std::find(m_supported_samplers.begin(), m_supported_samplers.end(), msg->sampling_type) == m_supported_samplers.end())
        {
          signalError(String::str("Unsupported sampler type: %s", msg->sampling_type.c_str()));
          return;
        }

        try
        {
          m_sampler = Sampler::factory(this, msg, m_sampler_config);
        }
        catch(const std::runtime_error& e)
        {
          signalError(String::str("Failed to create sampler: %s", e.what()));
          return;
        }

        m_sampler->onInit(msg);
      }

      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (!m_sampler)
          return;

        m_sampler->onPathControlState(pcs);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (!m_sampler)
          return;

        m_sampler->onEstimatedState(msg);
      }

      void
      consume(const IMC::SamplingAction* msg)
      {
        if (!m_sampler)
          return;

        m_sampler->onSamplingAction(msg);
      }

      void
      consume(const IMC::RemoteActions* msg)
      {
        if (!m_sampler)
          return;

        TupleList tuples(msg->actions);
        if (tuples.get("Pause Sampler", 0))
        {
          m_sampler->onPause();
        }

        if (tuples.get("Resume Sampler", 0))
        {
          m_sampler->onResume();
        }
      }

      void
      onStateReport(void)
      {
        if (!m_sampler)
          return;

        m_sampler->run();
      }
    };
  }
}

DUNE_TASK
