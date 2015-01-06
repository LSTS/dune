//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
// Author: Renato Caldas                                                    *
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
#include <DUNE/Utils/XML.hpp>

#if defined(DUNE_OS_LINUX)
#  include <sys/prctl.h>
#endif

namespace DUNE
{
  namespace Tasks
  {
    //! Maximum size of a log book entry message.
    const static size_t c_log_message_max_size = 1024;

    Task::Task(const std::string& n, Context& ctx):
      m_ctx(ctx),
      m_recipient(0),
      m_name(n),
      m_entity(NULL),
      m_debug_level(DEBUG_LEVEL_NONE),
      m_honours_active(false)
    {
      m_args.priority = 10;
      m_args.act_time = 0;
      m_args.deact_time = 0;
      m_args.active = false;

      param(DTR_RT("Entity Label"), m_args.elabel)
      .defaultValue("")
      .description(DTR("Main entity label"));

      param(DTR_RT("Execution Priority"), m_args.priority)
      .defaultValue("10")
      .description(DTR("Execution priority"));

      param(DTR_RT("Activation Time"), m_args.act_time)
      .defaultValue("0");

      param(DTR_RT("Deactivation Time"), m_args.deact_time)
      .defaultValue("0");

      param(DTR_RT("Debug Level"), m_debug_level_string)
      .defaultValue("None")
      .values("None, Debug, Trace, Spew");

      m_recipient = new Recipient(this, ctx);
      m_entity = new Entities::StatefulEntity(this, m_ctx);
      m_entities.push_back(m_entity);

      bind<IMC::QueryEntityParameters>(this);
      bind<IMC::SetEntityParameters>(this);
      bind<IMC::PushEntityParameters>(this);
      bind<IMC::PopEntityParameters>(this);
      bind<IMC::QueryEntityState>(this);
    }

    unsigned int
    Task::reserveEntity(const std::string& label)
    {
      Entities::BasicEntity* e = new Entities::BasicEntity(this, m_ctx);
      e->setLabel(label);
      e->setId(m_ctx.entities.reserve(label, getName()));
      e->setBindings(m_recipient);

      m_entities.push_back(e);
      return e->getId();
    }

    void
    Task::reserveEntities(void)
    {
      if (m_entity->getLabel().empty())
        throw std::runtime_error(DTR("entity label is not configured"));

      m_entity->setId(m_ctx.entities.reserve(m_entity->getLabel(), getName()));
      m_entity->setBindings(m_recipient);
      onEntityReservation();
    }

    void
    Task::resolveEntities(void)
    {
      onEntityResolution();
    }

    void
    Task::reportEntityState(void)
    {
      m_entity->reportState();
      onReportEntityState();
    }

    void
    Task::consume(const IMC::QueryEntityState* msg)
    {
      (void)msg;
      // Make sure onReportEntityState() is called for tasks that report entity states manually.
      onReportEntityState();
    }

    void
    Task::acquireResources(void)
    {
      std::map<std::string, Parameter*>::iterator aitr = m_params.find("Active");
      if (aitr != m_params.end())
      {
        if (aitr->second->getScope() == Parameter::SCOPE_MANEUVER)
        {
          aitr->second->read("false");
          aitr->second->commit();
          aitr->second->setChanged(false);
        }
      }

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
    Task::paramActive(Parameter::Scope def_scope, Parameter::Visibility def_visibility, bool def_value)
    {
      m_honours_active = true;

      std::string scope_str = Parameter::scopeToString(def_scope);
      param(DTR_RT("Active - Scope"), m_args.active_scope)
      .visibility(Parameter::VISIBILITY_DEVELOPER)
      .scope(Parameter::SCOPE_GLOBAL)
      .defaultValue(scope_str)
      .description(DTR("Scoped of the 'Active' parameter"));

      std::string visibility_str = Parameter::visibilityToString(def_visibility);
      param(DTR_RT("Active - Visibility"), m_args.active_visibility)
      .visibility(Parameter::VISIBILITY_DEVELOPER)
      .scope(Parameter::SCOPE_GLOBAL)
      .defaultValue(visibility_str)
      .description(DTR("Visibility of the 'Active' parameter"));

      param(DTR_RT("Active"), m_args.active)
      .visibility(def_visibility)
      .scope(def_scope)
      .defaultValue(uncastLexical(def_value))
      .description(DTR("True to activate task, false otherwise"));
    }

    void
    Task::updateParameters(bool act_deact)
    {
      if (m_entity->getLabel().empty())
        m_entity->setLabel(m_args.elabel);
      if (m_args.elabel != m_entity->getLabel())
        m_params.set(DTR_RT("Entity Label"), m_entity->getLabel());
      m_entity->setActTimes(m_args.act_time, m_args.deact_time);
      m_entity->reportInfo();

      if (m_debug_level_string == "Debug")
        m_debug_level = DEBUG_LEVEL_DEBUG;
      else if (m_debug_level_string == "Trace")
        m_debug_level = DEBUG_LEVEL_TRACE;
      else if (m_debug_level_string == "Spew")
        m_debug_level = DEBUG_LEVEL_SPEW;
      else
        m_debug_level = DEBUG_LEVEL_NONE;

      onUpdateParameters();

      if (m_honours_active)
      {
        std::map<std::string, Parameter*>::iterator itr = m_params.find("Active");

        if (paramChanged(m_args.active_scope))
          itr->second->scope(m_args.active_scope);

        if (paramChanged(m_args.active_visibility))
          itr->second->visibility(m_args.active_visibility);

        if (act_deact)
        {
          if (paramChanged(m_args.active))
          {
            if (m_args.active)
              requestActivation();
            else
              requestDeactivation();
          }
          else
          {
            m_entity->reportActivationState();
          }
        }
      }

      m_params.setChanged(false);
    }

    void
    Task::requestActivation(void)
    {
      spew("request activation");
      m_entity->requestActivation();

      if (m_entity->isActivating())
      {
        spew("calling on request activation");
        onRequestActivation();
      }
    }

    void
    Task::activate(void)
    {
      if (m_entity->getActivationState() != IMC::EntityActivationState::EAS_ACT_IP)
        throw std::runtime_error(DTR("activation is not in progress"));

      spew("activate");

      if (m_honours_active)
        m_params.set("Active", "true");

      spew("calling on activation");
      onActivation();

      m_entity->succeedActivation();
      if (m_entity->hasPendingDeactivation())
        requestDeactivation();
    }

    void
    Task::activationFailed(const std::string& reason)
    {
      spew("activation failed: %s", reason.c_str());
      m_args.active = false;
      m_entity->failActivation(reason);
    }

    void
    Task::requestDeactivation(void)
    {
      spew("request deactivation");
      m_entity->requestDeactivation();

      if (m_entity->isDeactivating())
      {
        spew("calling on request deactivation");
        onRequestDeactivation();
      }
    }

    void
    Task::deactivate(void)
    {
      if (m_entity->getActivationState() != IMC::EntityActivationState::EAS_DEACT_IP)
        throw std::runtime_error(DTR("deactivation is not in progress"));

      spew("deactivate");

      if (m_honours_active)
        m_params.set("Active", "false");

      spew("calling on deactivation");
      onDeactivation();

      m_entity->succeedDeactivation();
      if (m_entity->hasPendingActivation())
        requestActivation();
    }

    void
    Task::deactivationFailed(const std::string& reason)
    {
      spew("deactivation failed");
      m_entity->failDeactivation(reason);
    }

    void
    Task::run(void)
    {
#if defined(DUNE_OS_LINUX)
      prctl(PR_SET_NAME, getName(), 0, 0, 0);
#endif

      try
      {
        Thread::setPriority(Concurrency::Scheduler::POLICY_RR, m_args.priority);
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

          if (m_honours_active)
          {
            Parameter::Scope active_scope = Parameter::scopeFromString(m_args.active_scope);
            if (m_args.active && ((active_scope == Parameter::SCOPE_GLOBAL) || (active_scope == Parameter::SCOPE_IDLE)))
              requestActivation();
          }

          onMain();
          releaseResources();
        }
        catch (RestartNeeded& e)
        {
          if (e.isError())
          {
            setEntityState(IMC::EntityState::ESTA_FAILURE, DTR("restarting"));
            err(DTR("restarting in %u seconds due to error: %s"),
                e.getDelay(), e.getError());
          }
          Time::Counter<unsigned int> counter(e.getDelay());
          while (!stopping() && !counter.overflow())
          {
            double remaining = counter.getRemaining();
            Time::Delay::wait((remaining < 1.0) ? remaining : 1.0);
            reportEntityState();
          }

          try
          {
            updateParameters();
          }
          catch (std::runtime_error& pe)
          {
            err(DTR("failed to update parameters: %s"), pe.what());
          }
        }
        catch (std::exception& e)
        {
          IMC::EntityState estate;
          setEntityState(IMC::EntityState::ESTA_FAILURE, e.what());
          dispatch(estate);
          err(DTR("task died with uncaught exception: %s: restarting"), e.what());
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
      {
        try
        {
          m_params.set((*itr)->name, (*itr)->value);
        }
        catch (std::runtime_error& e)
        {
          err(DTR("updating entity parameters: %s: '%s'"), e.what(),
              (*itr)->name.c_str());
        }
      }

      updateParameters();
    }

    void
    Task::consume(const IMC::PushEntityParameters* msg)
    {
      if (msg->name != getEntityLabel())
        return;

      std::map<std::string, std::string> map;
      std::map<std::string, Parameter*>::const_iterator itr = m_params.begin();
      for (; itr != m_params.end(); ++itr)
      {
        if (itr->second->getScope() != Parameter::SCOPE_GLOBAL)
          map[itr->second->name()] = itr->second->value();
      }

      m_params_stack.push(map);
    }

    void
    Task::consume(const IMC::PopEntityParameters* msg)
    {
      if (msg->name != getEntityLabel())
        return;

      if (m_params_stack.empty())
        return;

      std::map<std::string, std::string>& map = m_params_stack.top();
      std::map<std::string, std::string>::const_iterator itr = map.begin();
      for (; itr != map.end(); ++itr)
        m_params.set(itr->first, itr->second);
      m_params_stack.pop();

      updateParameters();
    }

    void
    Task::writeParamsXML(std::ostream& os) const
    {
      using Utils::XML;

      os << "<section";
      XML::writeAttr("name", getEntityLabel(), os);
      XML::writeAttr("name-i18n", DTR(getEntityLabel()), os);
      if (!m_param_editor.empty())
        XML::writeAttr("editor", m_param_editor, os);
      os << ">\n";

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
          DUNE_DEV(getName(), bfr);
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

      updateParameters(false);
    }
  }
}
