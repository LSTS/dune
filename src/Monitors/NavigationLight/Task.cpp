//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! @author Bernardo Gabriel
  namespace NavigationLight
  {
    using DUNE_NAMESPACES;

    //! Timeout for general monitor restart message.
    constexpr double c_timeout_tx_request = 120.0;

    struct Arguments
    {
      //! Light state with no targets in proximity.
      int light_state_no_targets;
      //! Light state with targets in proximity.
      int light_state_with_targets;
      //! Light entity label.
      std::string light_entity;
      //! Light parameter label.
      std::string light_parameter_label;
      //! Send updates over satellite.
      bool send_satellite;
    };

    struct Task: public DUNE::Monitors::AISProximity
    {
      //! Task Arguments
      Arguments m_args;
      //! Current light state.
      int m_state;
      //! Light state before activation.
      int m_idle_state;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Monitors::AISProximity(name, ctx),
        m_state(INT_MAX),
        m_idle_state(INT_MAX)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Light State No Targets", m_args.light_state_no_targets)
        .minimumValue("-1")
        .defaultValue("-1")
        .description("State of the light when no targets are in proximity.");

        param("Light State With Targets", m_args.light_state_with_targets)
        .minimumValue("-1")
        .defaultValue("0")
        .description("State of the light when targets are in proximity.");

        param("Light Entity", m_args.light_entity)
        .editable("false")
        .defaultValue("")
        .description("Entity label for the light.");

        param("Light Parameter Label", m_args.light_parameter_label)
        .editable("false")
        .defaultValue("")
        .description("Parameter label for the light state.");

        param("Send Satellite Updates", m_args.send_satellite)
        .defaultValue("false")
        .description("Send updates over satellite.");

        bind<IMC::EntityParameters>(this);
      }

      void
      consume(const IMC::EntityParameters* msg)
      {
        if (msg->name != m_args.light_entity)
          return;

        for (const auto& param : msg->params)
        {
          if (param->name == m_args.light_parameter_label)
          {
            try
            {
              castLexical(param->value, m_state);
              if (!isActive())
                m_idle_state = m_state;
            }
            catch (const std::exception& e)
            {
              err("Invalid light state value: %s", e.what());
            }
            break;
          }
        }
      }

      void
      onUpdateParameters(void)
      {
        AISProximity::onUpdateParameters();

        if (!isActive())
          return;

        if (paramChanged(m_args.light_state_no_targets) && !targetsInProximity())
          setNavigationLight(m_args.light_state_no_targets);

        if (paramChanged(m_args.light_state_with_targets) && targetsInProximity())
          setNavigationLight(m_args.light_state_with_targets);
      }

      void
      sendMessageOverSatellite(const std::string& message)
      {
        if (!m_args.send_satellite)
          return;

        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());
        tr.setSourceEntity(getEntityId());
        tr.destination = "broadcast";
        tr.deadline = Time::Clock::getSinceEpoch() + c_timeout_tx_request;  // seconds
        tr.req_id = std::rand() % 0xFFFF;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
        std::string msg = std::string(getName()) + " - " + message;
        tr.txt_data = msg;
        dispatch(tr);
      }

      void
      setNavigationLight(int state)
      {
        if (m_state == state)
          return;

        m_state = state;
        debug("setting light state to %d", state);
        IMC::SetEntityParameters sep;
        sep.name = m_args.light_entity;
        IMC::EntityParameter param;
        param.name = m_args.light_parameter_label;
        param.value = std::to_string(state);
        sep.params.push_back(param);
        dispatch(sep);
        sendMessageOverSatellite(String::str("Set light state: %d", state));
      }

      void
      onActivation(void) override
      {
        if (targetsInProximity())
          setNavigationLight(m_args.light_state_with_targets);
        else
          setNavigationLight(m_args.light_state_no_targets);

        setEntityState(IMC::EntityState::ESTA_NORMAL, CODE_ACTIVE);
      }

      void
      onDeactivation(void) override
      {
        if (m_idle_state != INT_MAX)
          setNavigationLight(m_idle_state);

        setEntityState(IMC::EntityState::ESTA_NORMAL, CODE_IDLE);
      }

      void
      onTargetsInProximity(void) override
      {
        if (!isActive())
          return;

        war("Proximity alert triggered for AIS targets."); 
        setNavigationLight(m_args.light_state_with_targets);
      }

      void
      onNoTargetsInProximity(void) override
      {
        if (!isActive())
          return;

        inf("No AIS targets in the area.");
        setNavigationLight(m_args.light_state_no_targets);
      }
    };
  }
}

DUNE_TASK
