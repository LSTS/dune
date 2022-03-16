//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
      fp32_t dispatch_period;
      bool log_events;
      bool compressed;
      std::string ctd_label;
      // Rate limits.
      std::vector<std::string> msgs_rates;
      //! Entities to take into account when collecting the messages
      std::vector<std::string> filtered_entities;
    };

    struct Task: public DUNE::Tasks::Task
    {
      Arguments m_args;

      IMC::EstimatedState* m_state;
      IMC::HistoricCTD m_ctd;
      IMC::HistoricSonarData m_sonar;
      IMC::HistoricData m_data;
      IMC::CompressedHistory m_comp;

      Time::Counter<fp64_t> m_dispatch_counter;
      Time::Counter<fp64_t> m_ctd_counter;
      Time::Counter<fp64_t> m_sss_counter;
      Time::Counter<fp64_t> m_tel_counter;
      int m_ctd_entity;
      bool m_got_ctd;
      //! Message Filter
      MessageFilter m_filter;
      GzipCompressor m_compressor;
      std::vector<std::string> m_registred_msgs;

      Task(const std::string& name, Tasks::Context& ctx) :
        DUNE::Tasks::Task(name, ctx),
        m_state(nullptr),
        m_ctd_entity(-1),
        m_got_ctd(false)
      {
        param("CTD Sample Period", m_args.ctd_period)
        .defaultValue("-1")
        .description("Time, in seconds, between CTD samples. Values lower than 0 will disable these samples.")
        .scope(Parameter::SCOPE_GLOBAL);
        
        param("CTD Entity Name", m_args.ctd_label)
        .defaultValue("CTD")
        .description("Entity to use for getting temperature and conductivity. If defined will generate a separated log messages.");

        param("Telemetry Sample Period", m_args.telemetry_period)
        .defaultValue("-1")
        .description("Time, in seconds, between telemetry samples. Values lower than 0 will disable these samples.")
        .scope(Parameter::SCOPE_GLOBAL);

        param("Sonar Sample Period", m_args.sss_period)
        .defaultValue("-1")
        .description("Time, in seconds, between sidescan sonar samples. Values lower than 0 will disable these samples.")
        .scope(Parameter::SCOPE_GLOBAL);

        param("Dispatch Period", m_args.dispatch_period)
        .defaultValue("60")
        .description("Time period, in seconds, between stored historic samples dissemination.")
        .scope(Parameter::SCOPE_GLOBAL);

        param("Log Events", m_args.log_events)
        .defaultValue("false")
        .description("Whether to log historic events")
        .scope(Parameter::SCOPE_GLOBAL);

        param("Compress Data", m_args.compressed)
        .defaultValue("false")
        .description("Compress logged data.")
        .scope(Parameter::SCOPE_GLOBAL);

        param("Messages Rate", m_args.msgs_rates)
        .defaultValue("")
        .description("List of <Message>:<Frequency>. Messages to use when creating time-series and their associated rate.");

        param("Discarded Entities", m_args.filtered_entities)
        .defaultValue("")
        .description("List of <Message>:<Entity>+<Entity> that define the source entities to avoid log.");

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
        if(paramChanged(m_args.ctd_period))
          m_ctd_counter.setTop(m_args.ctd_period);

        if(paramChanged(m_args.telemetry_period))
          m_tel_counter.setTop(m_args.telemetry_period);

        if(paramChanged(m_args.sss_period))
          m_sss_counter.setTop(m_args.sss_period);

        if(paramChanged(m_args.dispatch_period))
          m_dispatch_counter.setTop(m_args.dispatch_period);

        if (paramChanged(m_args.filtered_entities))
          m_filter.setupEntities(m_args.filtered_entities, this);

        if(paramChanged(m_args.msgs_rates))
        {
          m_filter.setupRates(m_args.msgs_rates);
          std::vector<std::string>::iterator it = m_args.msgs_rates.begin();
          while( it != m_args.msgs_rates.end()) {
              std::vector<std::string> parts;
              parts.clear();
              Utils::String::split(it->c_str(), ":", parts);
              if (parts.size() == 2)
              {
                m_registred_msgs.push_back(parts[0]);
                trace(DTR("Registering Message: %s to DataStore"),parts[0].c_str());
              }
              else {
                setEntityState(IMC::EntityState::ESTA_FAILURE, Status::CODE_INTERNAL_ERROR);
                throw std::runtime_error(Utils::String::str(DTR("invalid format: %s"), it->c_str()));
              }
            ++it;
          }
        }

        bool active = false;
        if (m_args.ctd_period > 0)
          active = true;
        if (m_args.telemetry_period > 0)
          active = true;
        if (m_args.sss_period > 0)
          active = true;
        if (m_args.dispatch_period > 0)
          active = true;
        if (m_args.log_events)
          active = true;
        if(!m_args.msgs_rates.empty())
            active = true;

        if (active)
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onEntityResolution(void)
      {
          if(m_args.ctd_period < 0)
            return;
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
      onResourceAcquisition(void)
      {
        // Register requested messages to create time-series
        if(!m_registred_msgs.empty())
          bind(this, m_registred_msgs);
      }

      void
      onResourceRelease(void)
      {
        if(stopping()){
          sendHistoricMessages(); // send out last recorded messages
        }
      }

      /**
       *
       * @param base_timestamp in seconds
       * @param base_lat latitude in radians
       * @param base_lon longitude in radians
       */
      void
      fillBaselines(fp32_t base_timestamp, fp64_t base_lat, fp64_t base_lon)
      {
          if(!m_args.compressed) {
            m_data.base_lat  = Angles::degrees(base_lat); //degrees
            m_data.base_lon  = Angles::degrees(base_lon); //degrees
            m_data.base_time = base_timestamp; //seconds
          }
          else {
            m_comp.base_lat  = Angles::degrees(base_lat); //degrees
            m_comp.base_lon  = Angles::degrees(base_lon); //degrees
            m_comp.base_time = base_timestamp; //seconds
          }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if(m_state == nullptr){
          fp64_t lat = msg->lat, lon = msg->lon;
          WGS84::displace(msg->x, msg->y, &lat, &lon);
          fillBaselines(msg->getTimeStamp(), lat, lon); //update base lat and lon
        }
        m_state = msg->clone();
      }

      void
      consume(const IMC::Temperature* msg)
      {
        auto search = std::find(m_registred_msgs.begin(),m_registred_msgs.end(),msg->getName());
        if(search != m_registred_msgs.end() && !m_filter.filter(msg)) { //found and not filtered (entity and rate)
          addSample(msg);
        }

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
        auto search = std::find(m_registred_msgs.begin(),m_registred_msgs.end(),msg->getName());
        if(search != m_registred_msgs.end() && !m_filter.filter(msg)) { //found and not filtered (entity and rate)
          addSample(msg);
        }
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
        auto search = std::find(m_registred_msgs.begin(),m_registred_msgs.end(),msg->getName());
        if(search != m_registred_msgs.end() && !m_filter.filter(msg)) { //found and not filtered (entity and rate)
          addSample(msg);
        }

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
        auto search = std::find(m_registred_msgs.begin(),m_registred_msgs.end(),msg->getName());
        if(search != m_registred_msgs.end() && !m_filter.filter(msg)) { //found and not filtered (entity and rate)
          addSample(msg);
        }

        // TODO
        (void)msg;
      }

      void
      addSample(const Message *msg)
      {
        if(m_state == nullptr)
          return;

        HistoricSample* sample = new HistoricSample();
        int16_t x,y;
        fp64_t lat = Angles::radians(m_data.base_lat), lon = Angles::radians(m_data.base_lon), lat_src = m_state->lat,
        lon_src = m_state->lon;
        WGS84::displace(m_state->x, m_state->y, &lat_src, &lon_src);
        WGS84::displacement(lat, lon, 0.0f, lat_src, lon_src, 0, &x, &y);
        sample->x = x;
        sample->y = y;
        sample->z = m_state->depth != -1 ? -10 * m_state->depth : m_state->alt * 10; //units: dm
        sample->t = msg->getTimeStamp() - m_data.base_time;
        sample->sample.set(*msg);
        sample->sys_id = getSystemId();

        if(m_args.compressed)
          {
            ByteBuffer buff;
            sample->t = msg->getTimeStamp() - m_comp.base_time;
            Packet::serialize(sample, buff);
            char* data = m_compressor.compress(buff).getBufferSigned();
              //verifySize(m_compressor.compress(buff).getBufferSigned().); //TODO
            m_comp.data.push_back(*data);
            Memory::clear(sample);
          }
        else
        {
          m_data.data.push_back(sample);
        }
      }

      void
      consume(const IMC::Message* msg)
      {
        if(m_filter.filter(msg)) {
          trace(DTR("Filtering message %s with entity %s"),msg->getName(),resolveEntity(msg->getSourceEntity()).c_str());
          return; //filter entities and rate
        }

        if(msg->getSource() != getSystemId())
          return;

        if(m_state == nullptr) {
          trace(DTR("Discarding Sample due to missing navigation data."));
          return;
        }
        addSample(msg);
      }

      void
      sendHistoricMessages()
      {
        if(m_state == nullptr)
          return;

        if(m_dispatch_counter.overflow()) {
          //The sample rate of specific IMC Messages is filtered before
          if (!m_data.data.empty() && !m_args.compressed) {
            dispatch(m_data.clone());
            trace(DTR("Dispatching Historic Samples with %lu messages"),m_data.data.size());
            m_data.data.clear();
          } else if (!m_comp.data.empty() && m_args.compressed) {
            dispatch(m_comp.clone());
            m_comp.data.clear();
          }
          fp64_t lat = m_state->lat, lon = m_state->lon;
          WGS84::displace(m_state->x, m_state->y, &lat, &lon);
          fillBaselines(m_state->getTimeStamp(), lat, lon); //update base lat and lon
          m_dispatch_counter.reset();
        }

          if (m_args.ctd_period > 0 && m_got_ctd && m_ctd_counter.overflow()) {
            m_ctd.depth = m_state->depth;
            debug("Generated new HistoricCTD.");
            dispatch(m_ctd);
            m_ctd_counter.reset();
            m_got_ctd = false;
          }

        if (m_args.telemetry_period > 0 && m_tel_counter.overflow())
        {
          IMC::HistoricTelemetry msg;
          msg.altitude = m_state->alt;
          msg.speed = Math::norm(m_state->u, m_state->v) * 10;
          double attitude[3];
          attitude[0] = Angles::normalizeRadian(m_state->phi);
          attitude[1] = Angles::normalizeRadian(m_state->theta);
          attitude[2] = Angles::normalizeRadian(m_state->psi);
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
          //TODO
          m_sss_counter.reset();
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          sendHistoricMessages();
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
