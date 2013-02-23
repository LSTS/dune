//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <sstream>
#include <cstddef>

// DUNE headers.
#include <DUNE/IMC/Constants.hpp>
#include <DUNE/IMC/Bus.hpp>
#include <DUNE/Time/Delay.hpp>
#include <DUNE/Time/PeriodicDelay.hpp>
#include <DUNE/Time/Counter.hpp>
#include <DUNE/Status/Messages.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Tasks/Exceptions.hpp>
#include <DUNE/Tasks/Task.hpp>

#if defined(DUNE_OS_LINUX)
#  include <sys/prctl.h>
#endif

//! Maximum size of a log book entry message.
const static size_t c_log_message_max_size = 1024;

namespace DUNE
{
  namespace Tasks
  {
    Task::Task(const std::string& n, Context& ctx):
      m_ctx(ctx),
      m_recipient(0),
      m_name(n),
      m_priority(10),
      m_eid(DUNE_IMC_CONST_UNK_EID),
      m_debug_level(DEBUG_LEVEL_NONE),
      m_entity_state_code(-1),
      m_is_active(true)
    {
      param(DTR_RT("Entity Label"), m_elabel)
      .defaultValue("")
      .description(DTR("Main entity label"));

      param(DTR_RT("Debug Level"), m_debug_level_string)
      .defaultValue("None")
      .values("None, Debug, Trace, Spew");

      param(DTR_RT("Execution Priority"), m_priority)
      .defaultValue("10");

      m_recipient = new Recipient(this, ctx);

      // Initialize main entity state.
      setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);

      bind<IMC::QueryEntityState>(this);
      bind<IMC::QueryEntityParameters>(this);
      bind<IMC::SetEntityParameters>(this);
    }

    unsigned int
    Task::reserveEntity(const std::string& label)
    {
      debug("reserving entity '%s'", label.c_str());
      return m_ctx.entities.reserve(label, getName());
    }

    unsigned int
    Task::resolveEntity(const std::string& label) const
    {
      return m_ctx.entities.resolve(label);
    }

    void
    Task::reserveEntities(void)
    {
      if (m_elabel.empty())
        throw std::runtime_error(DTR("entity label is not configured"));

      m_eid = m_ctx.entities.reserve(m_elabel, getName());
      debug("reserving main entity '%s' -> '%u'", m_elabel.c_str(), m_eid);
      onEntityReservation();
    }

    void
    Task::resolveEntities(void)
    {
      onEntityResolution();
    }

    void
    Task::setEntityState(IMC::EntityState::StateEnum state,
                         Status::Code code)
    {
      bool new_state = (state != m_entity_state.state);

      m_entity_state.state = state;
      if (code != m_entity_state_code)
        m_entity_state.description = DTR(Status::getString(code));
      m_entity_state_code = code;

      if (new_state && (m_eid != DUNE_IMC_CONST_UNK_EID))
        dispatch(m_entity_state);
    }

    void
    Task::setEntityState(IMC::EntityState::StateEnum state,
                         const std::string& message)
    {
      bool new_state = (state != m_entity_state.state);

      m_entity_state.state = state;
      m_entity_state.description = message;
      m_entity_state_code = -1;

      if (new_state && (m_eid != DUNE_IMC_CONST_UNK_EID))
        dispatch(m_entity_state);
    }

    void
    Task::reportEntityState(void)
    {
      dispatch(m_entity_state);
      onReportEntityState();
    }

    void
    Task::acquireResources(void)
    {
      onResourceAcquisition();
    }

    void
    Task::releaseResources(void)
    {
      onResourceRelease();
    }

    void
    Task::initializeResources(void)
    {
      while (!stopping())
      {
        try
        {
          onResourceInitialization();
          return;
        }
        catch (std::exception& e)
        {
          err("%s", e.what());
          Time::Delay::wait(1.0);
        }
      }
    }

    void
    Task::updateParameters(void)
    {
      if (m_debug_level_string == "Debug")
        m_debug_level = DEBUG_LEVEL_DEBUG;
      else if (m_debug_level_string == "Trace")
        m_debug_level = DEBUG_LEVEL_TRACE;
      else if (m_debug_level_string == "Spew")
        m_debug_level = DEBUG_LEVEL_SPEW;
      else
        m_debug_level = DEBUG_LEVEL_NONE;

      onUpdateParameters();
    }

    bool
    Task::activate(void)
    {
      if (m_is_active)
        return false;

      m_is_active = true;
      onActivation();
      return true;
    }

    bool
    Task::deactivate(void)
    {
      if (!m_is_active)
        return false;

      m_is_active = false;
      onDeactivation();
      return true;
    }

    void
    Task::run(void)
    {
#if defined(DUNE_OS_LINUX)
      prctl(PR_SET_NAME, getName(), 0, 0, 0);
#endif

      try
      {
        Thread::setPriority(Concurrency::Scheduler::POLICY_RR, m_priority);
      }
      catch (...)
      { }

      while (!stopping())
      {
        try
        {
          resolveEntities();
          releaseResources();
          acquireResources();
          initializeResources();
          onMain();
          releaseResources();
        }
        catch (RestartNeeded& e)
        {
          setEntityState(IMC::EntityState::ESTA_FAILURE, DTR("restarting"));
          err(DTR("restarting in %u seconds due to error: %s"),
              e.getDelay(), e.getError());
          Time::Counter<unsigned int> counter(e.getDelay());
          while (!stopping() && !counter.overflow())
            Time::Delay::wait(1.0);

          updateParameters();
        }
        catch (std::exception& e)
        {
          IMC::EntityState estate;
          setEntityState(IMC::EntityState::ESTA_FAILURE, e.what());
          dispatch(estate);
          err(DTR("task died with uncaught exception: %s"), e.what());
          break;
        }
      }
    }

    void
    Task::dispatch(IMC::Message* msg, unsigned int flags)
    {
      if (!IMC::AddressResolver::isValid(msg->getSource()))
        msg->setSource(getSystemId());

      if ((flags & DF_KEEP_TIME) == 0)
        msg->setTimeStamp();

      if ((flags & DF_KEEP_SRC_EID) == 0)
      {
        if (msg->getSourceEntity() == DUNE_IMC_CONST_UNK_EID)
          msg->setSourceEntity(getEntityId());
      }

      if ((flags & DF_LOOP_BACK) == 0)
        m_ctx.mbus.dispatch(msg, this);
      else
        m_ctx.mbus.dispatch(msg);
    }

    void
    Task::consume(const IMC::QueryEntityState* msg)
    {
      (void)msg;
      reportEntityState();
    }

    void
    Task::consume(const IMC::QueryEntityParameters* msg)
    {
      if (msg->name != getEntityLabel())
        return;

      IMC::EntityParameters params;
      params.name = getEntityLabel();

      std::map<std::string, Parameter*>::const_iterator itr = m_params.begin();
      for (; itr != m_params.end(); ++itr)
      {
        IMC::EntityParameter p;
        p.name = itr->second->name();
        p.value = itr->second->value();
        params.params.push_back(p);
      }

      dispatchReply(*msg, params);
    }

    void
    Task::consume(const IMC::SetEntityParameters* msg)
    {
      if (msg->name != getEntityLabel())
        return;

      IMC::MessageList<IMC::EntityParameter>::const_iterator itr = msg->params.begin();
      for (; itr != msg->params.end(); ++itr)
        m_params.set((*itr)->name, (*itr)->value);

      updateParameters();
    }

    void
    Task::writeParamsXML(std::ostream& os) const
    {
      os << "<section name=\"" << getEntityLabel()
         << "\" i18n-name=\"" << DTR(getEntityLabel()) << "\">"
         << "\n";

      m_params.writeXML(os);

      os << "</section>\n";
    }

    void
    Task::inf(const char* format, ...)
    {
      std::va_list ap;
      va_start(ap, format);
      log(IMC::LogBookEntry::LBET_INFO, format, ap);
      va_end(ap);
    }

    void
    Task::war(const char* format, ...)
    {
      std::va_list ap;
      va_start(ap, format);
      log(IMC::LogBookEntry::LBET_WARNING, format, ap);
      va_end(ap);
    }

    void
    Task::err(const char* format, ...)
    {
      std::va_list ap;
      va_start(ap, format);
      log(IMC::LogBookEntry::LBET_ERROR, format, ap);
      va_end(ap);
    }

    void
    Task::cri(const char* format, ...)
    {
      std::va_list ap;
      va_start(ap, format);
      log(IMC::LogBookEntry::LBET_CRITICAL, format, ap);
      va_end(ap);
    }

    void
    Task::debug(const char* format, ...)
    {
      if (m_debug_level < DEBUG_LEVEL_DEBUG)
        return;

      std::va_list ap;
      va_start(ap, format);
      log(IMC::LogBookEntry::LBET_DEBUG, format, ap);
      va_end(ap);
    }

    void
    Task::trace(const char* format, ...)
    {
      if (m_debug_level < DEBUG_LEVEL_TRACE)
        return;

      std::va_list ap;
      va_start(ap, format);
      log(IMC::LogBookEntry::LBET_DEBUG, format, ap);
      va_end(ap);
    }

    void
    Task::spew(const char* format, ...)
    {
      if (m_debug_level < DEBUG_LEVEL_SPEW)
        return;

      std::va_list ap;
      va_start(ap, format);
      log(IMC::LogBookEntry::LBET_DEBUG, format, ap);
      va_end(ap);
    }

    void
    Task::log(IMC::LogBookEntry::TypeEnum type, const char* format, std::va_list arg_list)
    {
      char bfr[c_log_message_max_size] = {0};

#if defined(DUNE_SYS_HAS_VSNPRINTF)
      vsnprintf(bfr, sizeof(bfr), format, arg_list);

#elif defined(DUNE_SYS_HAS_VSNPRINTF_S)
      vsnprintf_s(bfr, sizeof(bfr), sizeof(bfr) - 1, format, arg_list);

#else
      std::vsprintf(bfr, format, arg_list);
#endif

      IMC::LogBookEntry log_entry;
      log_entry.setSourceEntity(getEntityId());
      log_entry.type = type;
      log_entry.text = bfr;
      log_entry.context = getName();
      log_entry.htime = Time::Clock::getSinceEpoch();

      dispatch(log_entry);

      switch (type)
      {
        case IMC::LogBookEntry::LBET_INFO:
          DUNE_MSG(getName(), bfr);
          break;

        case IMC::LogBookEntry::LBET_WARNING:
          DUNE_WRN(getName(), bfr);
          break;

        case IMC::LogBookEntry::LBET_ERROR:
          DUNE_ERR(getName(), bfr);
          break;

        case IMC::LogBookEntry::LBET_CRITICAL:
          DUNE_ERR(getName(), bfr);
          break;

        case IMC::LogBookEntry::LBET_DEBUG:
          DUNE_MSG(getName(), bfr);
          break;
      }
    }

    void
    Task::loadConfig(void)
    {
      std::map<std::string, Parameter*>::const_iterator itr = m_params.begin();
      for (; itr != m_params.end(); ++itr)
      {
        std::string value = m_ctx.config.get(getName(), itr->second->name());
        m_params.set(itr->second->name(), value);
      }

      // Check for invalid parameter names.
      std::map<std::string, std::string> options = m_ctx.config.getSection(getName());
      std::map<std::string, std::string>::const_iterator pitr = options.begin();
      for (; pitr != options.end(); ++pitr)
      {
        if (pitr->first == "Enabled")
          continue;

        if (m_params.find(pitr->first) == m_params.end())
          err(DTR("invalid parameter '%s'"), pitr->first.c_str());
      }

      updateParameters();
    }
  }
}
