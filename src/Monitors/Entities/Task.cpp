//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: Task.cpp 12695 2013-01-23 22:54:41Z rasm                         $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <set>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace Entities
  {
    using DUNE_NAMESPACES;

    // Entity state description labels.
    static const char* c_state_desc[] =
    {
      DTR("Boot"), DTR("Normal"), DTR("Fault"), DTR("Error"), DTR("Failure")
    };

    // Datum for monitoring information per entity.
    struct ESRecord
    {
      //! Label.
      std::string label;
      //! Time of last update.
      double time;
      //! State.
      uint8_t state;
      //! Monitored flag.
      bool monitor;

      ESRecord(std::string& l, double t):
        label(l),
        time(t),
        state(IMC::EntityState::ESTA_BOOT),
        monitor(false)
      { }
    };

    struct Arguments
    {
      double report_timeout;
      std::vector<std::string> defmon;
      std::vector<std::string> defmon_hw;
      bool trace;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Entity Monitoring State message.
      IMC::EntityMonitoringState m_ems;
      //! Type to store all Entity Ids.
      typedef std::set<uint8_t> EIdSet;
      //! Record of all available entity information.
      std::vector<ESRecord> m_record;
      //! Ids of all currently monitored entities.
      EIdSet m_current;
      //! Ids of monitored entities for default settings.
      EIdSet m_defaults;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Report Timeout", m_args.report_timeout)
        .units(Units::Second)
        .minimumValue("2")
        .defaultValue("5")
        .description("Timeout threshold to report Entity error");

        param("Default Monitoring", m_args.defmon)
        .defaultValue("")
        .description("Default entities to monitor");

        param("Default Monitoring -- Hardware", m_args.defmon_hw)
        .defaultValue("")
        .description("Additional default entities to monitor in Hardware profile");

        param("Trace", m_args.trace)
        .defaultValue("false")
        .description("Enable verbose output");

        bind<IMC::EntityState>(this);
        bind<IMC::MonitorEntityState>(this);
      }

      void
      onResourceInitialization(void)
      {
        // Initialize entity state.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onEntityResolution(void)
      {
        // Mark default settings, so we can get back to them.
        setupDefaults(m_args.defmon);

        if (m_ctx.profiles.isSelected("Hardware"))
          setupDefaults(m_args.defmon_hw);

        // Build entity state record
        std::vector<Tasks::EntityDataBase::Entity*> ents;
        m_ctx.entities.contents(ents);

        double now = Clock::get();

        for (unsigned int i = 0; i < ents.size(); ++i)
        {
          m_record.push_back(ESRecord(ents[i]->label, now));

          trace("%d %s", i, ents[i]->label.c_str());
        }

        // Enable the defaults initially
        enableDefaults();
        reportState();
      }

      //! Fill default entities vector
      //! @param[in] ents vector of entity labels
      void
      setupDefaults(const std::vector<std::string>& ents)
      {
        for (unsigned int i = 0; i < ents.size(); ++i)
        {
          try
          {
            uint8_t eid = (uint8_t)resolveEntity(ents[i]);
            m_defaults.insert(eid);
          }
          catch (std::runtime_error& e)
          {
            err(DTR("can not monitor %s (%s), is there a task failure or a configuration error?"),
                ents[i].c_str(), e.what());
          }

        }
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->getSourceEntity() == DUNE_IMC_CONST_UNK_EID)
        {
          err(DTR("EntityState message without source entity"));
          return;
        }

        ESRecord& r = m_record[msg->getSourceEntity()];

        bool noteworthy = r.monitor && r.state != msg->state;

        if (m_args.trace)
          msg->toText(std::cerr);

        if (noteworthy)
        {
          war(DTR("%s : %s -> %s | %s"), r.label.c_str(), c_state_desc[r.state],
              c_state_desc[msg->state], msg->description.c_str());
        }

        r.time = Clock::get();
        r.state = msg->state;

        if (noteworthy)
        {
          if (r.state != IMC::EntityState::ESTA_NORMAL)
            setLastError(r.label + ": " + msg->description);
          reportState();
        }
      }

      void
      onReportEntityState(void)
      {
        onTimeoutCheck();
        reportState();
      }

      void
      consume(const IMC::MonitorEntityState* mes)
      {
        inf(DTR("reconfiguration command issued"));

        switch (mes->command)
        {
          case IMC::MonitorEntityState::MES_RESET:
            enableDefaults();
            break;
          case IMC::MonitorEntityState::MES_ENABLE:
          case IMC::MonitorEntityState::MES_ENABLE_EXCLUSIVE:
          case IMC::MonitorEntityState::MES_DISABLE:
            activate(mes->entities, mes->command);
            break;
          default:
            err(DTR("invalid reconfiguration command"));
        }
        reportState();
      }

      //! Enable configuration defaults
      void
      enableDefaults(void)
      {
        inf(DTR("setting up configuration defaults"));

        if (m_current.size() > 0)
        {
          EIdSet old = m_current;

          for (EIdSet::iterator it = old.begin(); it != old.end(); ++it)
          {
            if (m_defaults.find(*it) == m_defaults.end())
              disable(*it);
          }
        }

        for (EIdSet::iterator it = m_defaults.begin(); it != m_defaults.end(); ++it)
          enable(*it);
      }

      //! Enable monitoring for an entity
      //! @param[in] eid entity ID
      void
      enable(uint8_t eid)
      {
        ESRecord& r = m_record[eid];

        if (!r.monitor)
        {
          inf(DTR("%s - monitoring enabled"), r.label.c_str());

          m_current.insert(eid);
          r.monitor = true;

          if (r.state != IMC::EntityState::ESTA_NORMAL)
            err(DTR("%s - current state not normal - %s"), r.label.c_str(), c_state_desc[r.state]);
        }
        else
        {
          inf(DTR("%s - monitoring previously enabled"), r.label.c_str());
        }
      }

      //! Disable monitoring for an entity
      //! @param[in] eid entity ID
      void
      disable(uint8_t eid)
      {
        ESRecord& r = m_record[eid];

        if (r.monitor)
        {
          inf(DTR("%s - monitoring disabled"), r.label.c_str());

          m_current.erase(eid);
          r.monitor = false;
        }
        else
        {
          inf(DTR("%s - monitoring previously disabled"), r.label.c_str());
        }
      }

      //! Activate monitorings
      //! @param[in] enames entity names
      //! @param[in] cmd entity state monitoring command
      void
      activate(const std::string& enames, uint8_t cmd)
      {
        std::vector<std::string> lst;
        DUNE::Utils::String::split(enames, ",", lst);

        EIdSet eset;
        EIdSet::iterator itr;

        for (unsigned int i = 0; i < lst.size(); ++i)
        {
          try
          {
            eset.insert(resolveEntity(lst[i]));
          }
          catch (std::exception& e)
          {
            inf(DTR("entity %s: %s"), lst[i].c_str(), e.what());
          }
        }

        if (cmd != IMC::MonitorEntityState::MES_DISABLE)
        {
          if (cmd == IMC::MonitorEntityState::MES_ENABLE_EXCLUSIVE)
          {
            for (itr = m_current.begin(); itr != m_current.end(); ++itr)
              if (eset.find(*itr) == eset.end())
                disable(*itr);
          }

          for (itr = eset.begin(); itr != eset.end(); ++itr)
            enable(*itr);
        }
        else
        {
          for (itr = eset.begin(); itr != eset.end(); ++itr)
            disable(*itr);
        }
      }

      //! Dispatch Entity Monitoring State
      void
      reportState(void)
      {
        m_ems.mcount = m_ems.ecount = m_ems.ccount = 0;
        m_ems.mnames = m_ems.enames = m_ems.cnames = "";

        for (EIdSet::iterator itr = m_current.begin(); itr != m_current.end(); ++itr)
        {
          ESRecord& r = m_record[*itr];

          if (m_ems.mcount++ > 0)
            m_ems.mnames += ',';

          m_ems.mnames += r.label;

          switch (r.state)
          {
            case IMC::EntityState::ESTA_NORMAL:
              break;
            case IMC::EntityState::ESTA_FAILURE:
              if (m_ems.ccount++ > 0)
                m_ems.cnames += ',';
              m_ems.cnames += r.label;
              break;
            default:
              if (m_ems.ecount++ > 0)
                m_ems.enames += ',';
              m_ems.enames += r.label;
              break;
          }
        }
        dispatch(m_ems);

        if (m_args.trace)
          m_ems.toText(std::cerr);
      }

      //! Check if any entity has timedout
      void
      onTimeoutCheck(void)
      {
        double now = Clock::get();

        for (unsigned int i = 0; i < m_record.size(); i++)
        {
          ESRecord& r = m_record[i];
          if (now - r.time > m_args.report_timeout &&
              r.state != IMC::EntityState::ESTA_FAILURE)
          {
            if (r.monitor)
            {
              err(DTR("%s -- status not reported after %0.2f seconds"), r.label.c_str(),
                  m_args.report_timeout);

              setLastError(r.label + ": entity state timeout");
            }

            r.time = now;
            r.state = IMC::EntityState::ESTA_FAILURE;
          }
        }
      }

      //! Setting last monitoring state error
      //! @param[in] msg error message
      void
      setLastError(std::string msg)
      {
        m_ems.last_error = msg;
        m_ems.last_error_time = Clock::getSinceEpoch();
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
