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

#ifndef DUNE_TASKS_TASK_HPP_INCLUDED_
#define DUNE_TASKS_TASK_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>
#include <stack>
#include <cstdarg>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/Thread.hpp>
#include <DUNE/Concurrency/TSQueue.hpp>
#include <DUNE/Tasks/Recipient.hpp>
#include <DUNE/Tasks/Consumer.hpp>
#include <DUNE/IMC/Constants.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/Status/Codes.hpp>
#include <DUNE/Concurrency/TLS.hpp>
#include <DUNE/Parsers/BasicStringReader.hpp>
#include <DUNE/Parsers/BasicStringWriter.hpp>
#include <DUNE/Tasks/AbstractTask.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Tasks/BasicParameterParser.hpp>
#include <DUNE/Tasks/ParameterTable.hpp>
#include <DUNE/Entities/BasicEntity.hpp>
#include <DUNE/Entities/StatefulEntity.hpp>

#if defined(DUNE_SHARED)
#  define DUNE_TASK_EXPORT(class, mangled)                              \
  extern "C" DUNE_SYM_EXPORT DUNE::Tasks::Task *                        \
  dune_task_create(const std::string & n, DUNE::Tasks::Context & e)     \
  {                                                                     \
    return new class(n, e);                                             \
  }

#else
#  define DUNE_TASK_EXPORT(class, mangled)                              \
  DUNE::Tasks::Task *                                                   \
  create ## mangled(const std::string & n, DUNE::Tasks::Context & e)    \
  {                                                                     \
    return new class(n, e);                                             \
  }
#endif

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Task;

    //! Debug level for human-readable messages.
    enum DebugLevel
    {
      //! No debug messages.
      DEBUG_LEVEL_NONE = 0,
      //! Debug messages.
      DEBUG_LEVEL_DEBUG = 1,
      //! Verbose or frequent debug messages.
      DEBUG_LEVEL_TRACE = 2,
      //! Very verbose or frequent debug message.
      DEBUG_LEVEL_SPEW = 3
    };

    //! Flags to change dispatching behaviour.
    enum DispatchFlags
    {
      //! Do not update timestamp.
      DF_KEEP_TIME = (1 << 0),
      //! Do not change the source entity id.
      DF_KEEP_SRC_EID = (1 << 1),
      //! Allow message to be delivered to the task that is
      //! dispatching it.
      DF_LOOP_BACK = (1 << 2)
    };

    //! Task.
    class Task: public AbstractTask
    {
    public:
      //! Construct a task object.
      //! @param[in] name name of the task.
      //! @param[in] context task context.
      Task(const std::string& name, Context& context);

      //! Destructor.
      virtual
      ~Task(void)
      {
        while (!m_entities.empty())
        {
          delete m_entities.back();
          m_entities.pop_back();
        }

        delete m_recipient;
      }

      //! Retrieve the task's name.
      //! @return name of the task.
      const char*
      getName(void) const
      {
        return m_name.c_str();
      }

      //! Retrieve the system's name.
      //! @return name of the system.
      const char*
      getSystemName(void) const
      {
        return m_ctx.resolver.name();
      }

      //! Retrieve the system's identifier.
      //! @return system identifier.
      unsigned int
      getSystemId(void) const
      {
        return m_ctx.resolver.id();
      }

      //! Retrieve the main entity identifier of the task.
      //! @return main entity identifier.
      unsigned int
      getEntityId(void) const
      {
        return m_entity->getId();
      }

      //! Retrieve the entity id of a given entity label.
      //! @param[in] label entity label.
      //! @throw NonexistentLabel if the label doesn't have an
      //! associated id.
      //! @return entity id.
      unsigned int
      resolveEntity(const std::string& label) const
      {
        return m_ctx.entities.resolve(label);
      }

      //! Retrieve the entity label of a given entity id.
      //! @param[in] id entity id.
      //! @throw NonexistentId if the id doesn't have an
      //! associated label.
      //! @return entity label.
      std::string
      resolveEntity(unsigned int id) const
      {
        return m_ctx.entities.resolve(id);
      }

      //! Get current debug level.
      //! @return debug level.
      DebugLevel
      getDebugLevel(void) const
      {
        return m_debug_level;
      }

      //! Retrieve the task's activation time.
      //! @return activation time of the task.
      uint16_t
      getActivationTime(void) const
      {
        return m_args.act_time;
      }

      //! Retrieve the task's deactivation time.
      //! @return deactivation time of the task.
      uint16_t
      getDeactivationTime(void) const
      {
        return m_args.deact_time;
      }

      //! Retrieve the identifier associated with a given system name.
      //! @param[in] name system name.
      //! @return system identifier.
      unsigned int
      resolveSystemName(const std::string& name) const
      {
        return m_ctx.resolver.resolve(name);
      }

      //! Retrieve the name associated with a given system identifier.
      //! @return system name.
      const char*
      resolveSystemId(unsigned int id) const
      {
        return m_ctx.resolver.resolve(id);
      }

      //! Load parameters from context's configuration.
      void
      loadConfig(void);

      //! Set scheduling priority programatically. The priority of a
      //! task might change when configuration parameters are updated.
      //! @param[in] value desired scheduling priority.
      void
      setPriority(unsigned int value)
      {
        m_args.priority = value;
      }

      //! Get scheduling priority. The priority of a task might change
      //! when configuration parameters are updated.
      //! @return task priority.
      unsigned int
      getPriority(void) const
      {
        return m_args.priority;
      }

      //! Send an human-readable informational message to all
      //! configured output channels and files.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      void
      inf(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3);

      //! Send an human-readable warning message to all
      //! configured output channels and files.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      void
      war(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3);

      //! Send an human-readable error message to all
      //! configured output channels and files.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      void
      err(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3);

      //! Send an human-readable critical error message to all
      //! configured output channels and files.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      void
      cri(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3);

      //! Send an human-readable debug message to all configured
      //! output channels and files. The message will only be
      //! processed if the configured log level is DEBUG_LEVEL_DEBUG
      //! or greater.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      void
      debug(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3);

      //! Send a verbose or frequent human-readable debug message to
      //! all configured output channels and files. The message will
      //! only be processed if the configured log level is
      //! DEBUG_LEVEL_TRACE or greater.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      void
      trace(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3);

      //! Send a very verbose or frequent human-readable debug message
      //! to all configured output channels and files. The message
      //! will only be processed if the configured log level is
      //! DEBUG_LEVEL_SPEW.
      //! @param format string format (similar to printf(3)).
      //! @param ... arguments.
      void
      spew(const char* format, ...) DUNE_PRINTF_FORMAT(2, 3);

      //! Dispatch message to the message bus.
      //! @param[in] msg message pointer.
      //! @param[in] flags bitfield with flags (see DispatchFlags).
      void
      dispatch(IMC::Message* msg, unsigned int flags = 0);

      //! Dispatch message to the message bus.
      //! @param[in] msg message reference.
      //! @param[in] flags bitfield with flags (see DispatchFlags).
      void
      dispatch(IMC::Message& msg, unsigned int flags = 0)
      {
        dispatch(&msg, flags);
      }

      //! Dispatch message to the message bus in reply to another
      //! message.
      //! @param[in] original original message.
      //! @param[in] msg message reference.
      //! @param[in] flags bitfield with flags (see DispatchFlags).
      void
      dispatchReply(const IMC::Message& original, IMC::Message& msg, unsigned int flags = 0)
      {
        msg.setDestination(original.getSource());
        msg.setDestinationEntity(original.getSourceEntity());
        dispatch(msg, flags);
      }

      //! Queue a message for later consumption.
      //! @param msg message object.
      void
      receive(const IMC::Message* msg)
      {
        m_recipient->put(msg);
      }

      //! Instruct task to reserve all entity identifiers that it
      //! needs for normal execution.
      void
      reserveEntities(void);

      //! Instruct task to resolve all entity identifiers that it
      //! needs for normal execution.
      void
      resolveEntities(void);

      //! Acquire resources whose configuration depends on dynamic
      //! parameters.
      void
      acquireResources(void);

      //! Free all resources acquired in acquireResources().
      void
      releaseResources(void);

      //! Instruct task to initialize the resources acquired in
      //! acquireResources().
      void
      initializeResources(void);

      //! Instruct task to update its run-time parameters.
      //! @param[in] act_deact if true this function will request
      //! activation/deactivation if the 'Active' parameter changed.
      void
      updateParameters(bool act_deact = true);

      //! Write task parameters in XML format.
      //! @param[in] os output stream.
      void
      writeParamsXML(std::ostream& os) const;

    protected:
      //! Context.
      Context& m_ctx;
      //! Owned entity list
      std::vector<Entities::BasicEntity*> m_entities;

      //! Retrieve the main entity label of the task.
      //! @return main entity label.
      const char*
      getEntityLabel(void) const
      {
        return m_entity->getLabel().c_str();
      }

      //! Set the main entity label of the task.
      //! @param[in] label main entity label.
      void
      setEntityLabel(const std::string& label)
      {
        m_entity->setLabel(label);
      }

      //! Set current entity state with an optional pre-defined
      //! description. If a status code is not given, then the
      //! existing description will be kept.
      //! @param[in] state entity state.
      //! @param[in] code status code.
      void
      setEntityState(IMC::EntityState::StateEnum state,
                     Status::Code code)
      {
        m_entity->setState(state, code);
      }

      //! Set current entity state with a custom description.
      //! @param[in] state entity state.
      //! @param[in] description custom state description.
      void
      setEntityState(IMC::EntityState::StateEnum state,
                     const std::string& description)
      {
        m_entity->setState(state, description);
      }

      //! Retrieve the current entity state.
      //! @return entity state.
      IMC::EntityState::StateEnum
      getEntityState(void) const
      {
        return m_entity->getState();
      }

      //! Associate an entity label with an automatically generated
      //! number (entity id).
      //! @param[in] label entity name/label.
      //! @return entity id.
      unsigned int
      reserveEntity(const std::string& label);

      //! Associate an entity label with an internally stored entity
      //! object, and retrieve a pointer to the object.
      //! @param[in] label entity name/label.
      //! @return pointer to entity object.
      template <typename E>
      E*
      reserveEntity(const std::string& label)
      {
        E* entity = new E(this, m_ctx);
        m_entities.push_back(static_cast<Entities::BasicEntity*>(entity));

        entity->setLabel(label);
        entity->setId(m_ctx.entities.reserve(label, getName()));
        entity->setBindings(m_recipient);
        return entity;
      }

      //! Test if task is stopping.
      //! @return true if task is stopping, false otherwise.
      bool
      stopping(void)
      {
        return isStopping();
      }

      //! Test if task is active.
      //! @return true if task is active, false otherwise.
      bool
      isActive(void) const
      {
        return m_entity->isActive();
      }

      //! Test if task is activating.
      //! @return true if task is activating, false otherwise.
      bool
      isActivating(void) const
      {
        return m_entity->isActivating();
      }

      //! Test if task is deactivating.
      //! @return true if task is deactivating, false otherwise.
      bool
      isDeactivating(void) const
      {
        return m_entity->isDeactivating();
      }

      //! Wait for the receiving queue to contain at least one message
      //! and then call the consumer functions for all the messages
      //! currently in it.
      //! @param[in] timeout wait for timeout seconds.
      void
      waitForMessages(double timeout)
      {
        m_recipient->waitForMessages(timeout);
      }

      //! Call the consumers of all messages currently in the
      //! receiving queue.
      void
      consumeMessages(void)
      {
        m_recipient->runCallBacks();
      }

      //! Declare a configuration parameter that can be parsed using
      //! the basic parameter parser.
      //! @tparam T type of the destination variable.
      //! @param[in] name parameter name.
      //! @param[in] var variable that will hold the parameter value.
      //! @return Parameter object.
      template <typename T>
      Parameter&
      param(const std::string& name, T& var)
      {
        return param<BasicParameterParser<T> >(name, var);
      }

      //! Declare a configuration parameter that can be parsed using
      //! a custom parameter reader.
      //! @tparam Y type of the custom parameter reader.
      //! @tparam T type of the destination variable.
      //! @param[in] name parameter name.
      //! @param[in] var variable that will hold the parameter value.
      //! @return Parameter object.
      template <typename Y, typename T>
      Parameter&
      param(const std::string& name, T& var)
      {
        Y* parser = new Y(var);
        return m_params.add(name, &var, parser);
      }

      template <typename T>
      bool
      paramChanged(T& var)
      {
        return m_params.changed(&var);
      }

      //! Declare parameter 'Active' and associated parameters 'Active
      //! - Scope' and 'Active - Visibility'. These parameters allows
      //! the task to be activated/deactivated using the message
      //! SetEntityParameters.
      //! @param[in] def_scope default scope of 'Active' parameter.
      //! @param[in] def_visibility default visibility of 'Active' parameter.
      //! @param[in] def_value default value of 'Active' parameter.
      void
      paramActive(Parameter::Scope def_scope,
                  Parameter::Visibility def_visibility,
                  bool def_value = false);

      //! Set the name of the parameter editor that should be used to
      //! interact with the parameters of the task.
      //! @param[in] name editor name (free-form string).
      void
      setParamSectionEditor(const std::string& name)
      {
        m_param_editor = name;
      }

      //! Bind a message to a consumer method.
      //! @param task_obj consumer task.
      //! @param consumer consumer method.
      template <typename M, typename T>
      void
      bind(T* task_obj, void (T::* consumer)(const M*) = &T::consume)
      {
        bind(M::getIdStatic(), new Consumer<T, M>(*task_obj, consumer));
      }

      //! Bind multiple messages to a default consumer method.
      //! @param task_obj consumer object.
      //! @param list list of message identifiers.
      template <typename T>
      void
      bind(T* task_obj, const std::vector<uint32_t>& list)
      {
        void (T::* func)(const IMC::Message*) = &T::consume;
        for (unsigned int i = 0; i < list.size(); ++i)
          bind(list[i], new Consumer<T, IMC::Message>(*task_obj, func));
      }

      //! Bind multiple messages to a consumer method.
      //! @param task_obj consumer object.
      //! @param list list of message identifiers.
      //! @param consumer consumer method.
      template <typename T, typename M>
      void
      bind(T* task_obj, const std::vector<uint32_t>& list,
           void (T::* consumer)(const M*) = &T::consume)
      {
        for (unsigned int i = 0; i < list.size(); ++i)
          bind(list[i], new Consumer<T, M>(*task_obj, consumer));
      }

      //! Bind multiple messages to a default consumer method.
      //! @param task_obj consumer task.
      //! @param list list of message abbreviations.
      template <typename T>
      void
      bind(T* task_obj, const std::vector<std::string>& list)
      {
        void (T::* func)(const IMC::Message*) = &T::consume;
        for (unsigned int i = 0; i < list.size(); ++i)
          bind(IMC::Factory::getIdFromAbbrev(list[i]),
               new Consumer<T, IMC::Message>(*task_obj, func));
      }

      //! Request task to start/resume normal execution.
      void
      requestActivation(void);

      //! Request task to stop normal execution and enter an idleness
      //! state.
      void
      requestDeactivation(void);

      //! Derived classes should use this function to signal that
      //! activation was completed successfully.
      void
      activate(void);

      //! Derived classes should use this function to signal that
      //! activation failed.
      //! @param[in] reason reason for activation failure.
      void
      activationFailed(const std::string& reason);

      //! Derived classes should use this function to signal that
      //! deactivation was completed successfully.
      void
      deactivate(void);

      //! Derived classes should use this function to signal that
      //! deactivation failed.
      //! @param[in] reason reason for deactivation failure.
      void
      deactivationFailed(const std::string& reason);

      //! Called when the task is instructed to reserve all the entity
      //! identifiers it needs for normal execution. See
      //! reserveEntity(). Derived classes that need to reserve entity
      //! identifiers other than that of the main entity should
      //! override this function.
      virtual void
      onEntityReservation(void)
      { }

      //! Called when the task is instructed to resolve all the entity
      //! identifiers it needs for normal execution. See
      //! resolveEntity(). Derived classes that need to resolve entity
      //! identifiers should override this function.
      virtual void
      onEntityResolution(void)
      { }

      //! Called when the task is instructed to report the state of
      //! its entities. Derived classes that need to report the state
      //! of entities other than the main entity should override this
      //! function to dispatch the EntityState of those entities.
      virtual void
      onReportEntityState(void)
      { }

      //! Called when the task is instructed to acquire resources
      //! whose configuration is defined by run-time parameters.
      virtual void
      onResourceAcquisition(void)
      { }

      //! Called when the task is instructed to release resources.
      //! Derived classes that override this function must not assume
      //! that any resource was previously acquired. This function
      //! must be implemented in such a way that it can be called at
      //! any time.
      virtual void
      onResourceRelease(void)
      { }

      //! Called when the task is instructed to initialize resources
      //! acquired previously or whose initialization depends on
      //! run-time parameters.
      virtual void
      onResourceInitialization(void)
      { }

      //! Called when the task is instructed to update its run-time
      //! parameters. Derived classes that need to compute auxiliary
      //! values based on run-time parameters should override this
      //! function.
      virtual void
      onUpdateParameters(void)
      { }

      //! Called when an external activation request is
      //! received. Derived classes that need to perform extra steps
      //! to prepare normal execution should replace the default
      //! behaviour of immediate activation with calls to activate()
      //! when the request is completed or activationFailed() if the
      //! request cannot be honoured.
      virtual void
      onRequestActivation(void)
      {
        spew("on request activation");
        activate();
      }

      //! Called when an external deactivation request is
      //! received. Derived classes that need to perform extra steps
      //! to prepare normal execution should replace the default
      //! behaviour of immediate deactivation with calls to deactivate()
      //! when the request is completed or deactivationFailed() if the
      //! request cannot be honoured.
      virtual void
      onRequestDeactivation(void)
      {
        spew("on request deactivation");
        deactivate();
      }

      //! Called when the task starts/resumes normal execution.
      virtual void
      onActivation(void)
      {
        spew("on activation");
      }

      //! Called when the task stops normal execution and enters an
      //! idleness state.
      virtual void
      onDeactivation(void)
      {
        spew("on deactivation");
      }

      virtual void
      onMain(void) = 0;

    private:
      struct BasicArguments
      {
        //! Main entity label.
        std::string elabel;
        //! Activation time.
        uint16_t act_time;
        //! Deactivation time.
        uint16_t deact_time;
        //! Scheduling priority.
        unsigned int priority;
        //! True if task is active.
        bool active;
        //! Scope of 'Active' parameter.
        std::string active_scope;
        //! Visibility of 'Active' parameter.
        std::string active_visibility;
      };

      //! Message recipient (queue).
      Recipient* m_recipient;
      //! Task name.
      std::string m_name;
      //! Task parameters.
      ParameterTable m_params;
      //! Main Entity
      Entities::StatefulEntity* m_entity;
      //! Debug level (as a string).
      std::string m_debug_level_string;
      //! Debug level.
      DebugLevel m_debug_level;
      //! Arguments.
      BasicArguments m_args;
      //! Parameters stack.
      std::stack<std::map<std::string, std::string> > m_params_stack;
      //! True if task honours changes to 'Active' parameter.
      bool m_honours_active;
      //! Name of parameter section editor.
      std::string m_param_editor;

      //! Report current entity states by dispatching EntityState
      //! messages. This function will at least report the state of
      //! the main entity.
      void
      reportEntityState(void);

      void
      log(IMC::LogBookEntry::TypeEnum type, const char* format, std::va_list arg_list);

      void
      run(void);

      //! Register a consumer for a given message identifier.
      //! @param[in] message_id message identifier.
      //! @param[in] consumer consumer object.
      void
      bind(unsigned int message_id, AbstractConsumer* consumer)
      {
        spew("registering consumer for '%s'",
             IMC::Factory::getAbbrevFromId(message_id).c_str());
        m_recipient->bind(message_id, consumer);
      }

      //! Consume QueryEntityState messages and reply accordingly.
      //! @param[in] msg QueryEntityState message.
      void
      consume(const IMC::QueryEntityState* msg);

      void
      consume(const IMC::QueryEntityParameters* msg);

      void
      consume(const IMC::SetEntityParameters* msg);

      void
      consume(const IMC::PushEntityParameters* msg);

      void
      consume(const IMC::PopEntityParameters* msg);
    };
  }
}

#endif
