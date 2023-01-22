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
// Author: José Pinto                                                       *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace DataStore
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      fp32_t ctd_period;
      fp32_t telemetry_period;
      fp32_t sss_period;
      bool log_events;
      std::string ctd_label;
    };

    struct Task: public DUNE::Tasks::Task
    {
      Arguments m_args;

      IMC::EstimatedState m_state;
      IMC::HistoricCTD m_ctd;
      IMC::HistoricSonarData m_sonar;
      Time::Counter<fp64_t> m_ctd_counter;
      Time::Counter<fp64_t> m_sss_counter;
      Time::Counter<fp64_t> m_tel_counter;
      int m_ctd_entity;
      bool m_got_ctd;

      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx),
        m_ctd_entity(-1),
        m_got_ctd(false)
      {
        param("CTD Sample Period", m_args.ctd_period)
        .defaultValue("-1")
        .description("Time, in seconds, between CTD samples. Values lower than 0 will disable these samples.")
        .scope(Parameter::SCOPE_GLOBAL);

        param("CTD Entity Name", m_args.ctd_label)
        .defaultValue("CTD")
        .description("Entity to use for getting temperature and conductivity.");

        param("Telemetry Sample Period", m_args.telemetry_period)
        .defaultValue("-1")
        .description("Time, in seconds, between telemetry samples. Values lower than 0 will disable these samples.")
        .scope(Parameter::SCOPE_GLOBAL);

        param("Sonar Sample Period", m_args.sss_period)
        .defaultValue("-1")
        .description("Time, in seconds, between sidescan sonar samples. Values lower than 0 will disable these samples.")
        .scope(Parameter::SCOPE_GLOBAL);

        param("Log Events", m_args.log_events)
        .defaultValue("false")
        .description("Whether to log historic events")
        .scope(Parameter::SCOPE_GLOBAL);

        bind<const IMC::EstimatedState>(this);
        bind<const IMC::Temperature>(this);
        bind<const IMC::Conductivity>(this);
        bind<const IMC::LogBookEntry>(this);
        bind<const IMC::SonarData>(this);
        bind<const IMC::PlanControl>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_ctd_counter.setTop(m_args.ctd_period);
        m_tel_counter.setTop(m_args.telemetry_period);
        m_sss_counter.setTop(m_args.sss_period);

        bool active = false;
        if (m_args.ctd_period > 0)
          active = true;
        if (m_args.telemetry_period > 0)
          active = true;
        if (m_args.sss_period > 0)
          active = true;
        if (m_args.log_events)
          active = true;

        if (active)
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onEntityResolution(void)
      {
    	  try
    	  {
            m_ctd_entity = m_ctx.entities.resolve(m_args.ctd_label);
    	  }
    	  catch (std::exception& what)
    	  {
            war("Error resolving CTD entity");
            m_ctd_entity = -1;
          }
      }

      //! On resource initialization
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_state = *msg;
      }

      void
      consume(const IMC::Temperature* msg)
      {
        if (msg->getSourceEntity() != m_ctd_entity)
          return;

        m_ctd.temperature = msg->value;
        m_got_ctd = true;
      }

      void
      consume(const IMC::Conductivity* msg)
      {
        if (msg->getSourceEntity() != m_ctd_entity)
          return;

        m_ctd.conductivity = msg->value;
        m_got_ctd = true;
      }

      void
      consume(const IMC::LogBookEntry* msg)
      {
        if (!m_args.log_events)
          return;

        if (msg->type == IMC::LogBookEntry::LBET_ERROR
            || msg->type == IMC::LogBookEntry::LBET_CRITICAL)
        {
          IMC::HistoricEvent event;
          event.text = msg->text;
          event.type = IMC::HistoricEvent::EVTYPE_ERROR;
          dispatch(event);
        }
      }

      void
      consume(const IMC::PlanControl* msg)
      {
        if (!m_args.log_events)
          return;

        IMC::HistoricEvent event;
        event.type = IMC::HistoricEvent::EVTYPE_INFO;
        std::string srcname = m_ctx.resolver.resolve(msg->getSource());

        if (msg->type == IMC::PlanControl::PC_REQUEST
            && msg->op == IMC::PlanControl::PC_START)
        {
          event.text = Utils::String::str("Request to start plan '%s' issued by '%s'.",
                                          msg->plan_id.c_str(), srcname.c_str());
        }
        else if (msg->type == IMC::PlanControl::PC_REQUEST
            && msg->op == IMC::PlanControl::PC_STOP)
        {
          event.text = Utils::String::str("Request to stop plan '%s' issued by '%s'.",
                                          msg->plan_id.c_str(), srcname.c_str());
        }
        else if (msg->type == IMC::PlanControl::PC_SUCCESS
            && msg->op == IMC::PlanControl::PC_START)
        {
          event.text = Utils::String::str("Successfully finished executing plan '%s'.",
                                          msg->plan_id.c_str());
        }
        else if (msg->type == IMC::PlanControl::PC_FAILURE
            && msg->op == IMC::PlanControl::PC_START)
        {
          event.text = Utils::String::str("Execution of plan '%s' was interrupted.",
                                          msg->plan_id.c_str());
        }

        dispatch(event);
      }

      void
      consume(const IMC::SonarData* msg)
      {
        if (m_args.sss_period < 0)
          return;

        // TODO
        (void)msg;
      }

      void
      sendHistoricMessages()
      {
        if (m_args.ctd_period > 0 && m_got_ctd && m_ctd_counter.overflow())
        {
          m_ctd.depth = m_state.depth;
          debug("Generated new HistoricCTD.");
          dispatch(m_ctd);
          m_ctd_counter.reset();
          m_got_ctd = false;
        }

        if (m_args.telemetry_period > 0 && m_tel_counter.overflow())
        {
          IMC::HistoricTelemetry msg;
          msg.altitude = m_state.alt;
          msg.speed = Math::norm(m_state.u, m_state.v) * 10;
          double attitude[3];
          attitude[0] = Angles::normalizeRadian(m_state.phi);
          attitude[1] = Angles::normalizeRadian(m_state.theta);
          attitude[2] = Angles::normalizeRadian(m_state.psi);
          for (int i = 0; i < 3; i++)
          {
            if (attitude[i] < 0)
              attitude[i] += (Math::c_pi * 2);
            attitude[i] *= (0xFFFF / (Math::c_pi * 2));
          }
          msg.roll = attitude[0];
          msg.pitch = attitude[1];
          msg.yaw = attitude[2];
          debug("Generated new HistoricTelemetry.");
          dispatch(msg);

          m_tel_counter.reset();
        }

        if (m_args.sss_period > 0 && m_sss_counter.overflow())
        {
          // TODO
          m_sss_counter.reset();
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          sendHistoricMessages();
        }
      }
    };
  }
}

DUNE_TASK
