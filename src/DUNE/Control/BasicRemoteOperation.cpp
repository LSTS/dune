//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/IMC/Bus.hpp>
#include <DUNE/Tasks/Periodic.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/Utils/TupleList.hpp>
#include <DUNE/Time/Clock.hpp>

// Local headers.
#include <DUNE/Control/BasicRemoteOperation.hpp>

namespace DUNE
{
  namespace Control
  {
    //! Constructor.
    BasicRemoteOperation::BasicRemoteOperation(const std::string& name, Tasks::Context& ctx):
      Tasks::Periodic(name, ctx),
      m_connection(false),
      m_connection_timeout(1.0),
      m_last_action(-1.0),
      m_scope_ref(0)
    {
      // Define configuration parameters.
      paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                  Tasks::Parameter::VISIBILITY_DEVELOPER,
                  false);

      param("Connection Timeout", m_connection_timeout)
          .defaultValue("1.0")
          .units(Units::Second);

      param("Additional Actions", m_additional_actions)
          .defaultValue("")
          .description("Actions to be added to remote actions list (comma separated in the form Action:Type)");

      m_actions_request.op = IMC::RemoteActionsRequest::OP_REPORT;

      // Register handler routines.
      bind<IMC::Teleoperation>(this);
      bind<IMC::RemoteActions>(this);
      bind<IMC::RemoteActionsRequest>(this);
      bind<IMC::ControlLoops>(this);
    }

    void
    BasicRemoteOperation::consume(const IMC::Teleoperation* msg)
    {
      m_teleop_src = Utils::TupleList(msg->custom).get("src", 0);
    }

    void
    BasicRemoteOperation::consume(const IMC::RemoteActions* msg)
    {
      updateConnectionState();
      m_last_action = DUNE::Time::Clock::get();

      if (isActive())
      {
        Utils::TupleList tuples(msg->actions);
        if (tuples.get("Exit", 0))
        {
          IMC::TeleoperationDone top;
          dispatch(top);
        }

        if (m_teleop_src == 0 || msg->getSource() == m_teleop_src)
          onRemoteActions(msg);
        else
          debug("ignoring remote control from %s", m_ctx.resolver.resolve(msg->getSource()));
      }
    }

    void
    BasicRemoteOperation::consume(const IMC::RemoteActionsRequest* msg)
    {

      if (msg->op == IMC::RemoteActionsRequest::OP_REPORT)
        return;

      else if (msg->op == IMC::RemoteActionsRequest::OP_QUERY)
      {
        //! Clear the previous message
        m_actions_request.actions.clear();

        setupAdditionalActions();
        inf("Dispatched actions: %s", m_actions_request.actions.c_str());
        dispatch(m_actions_request);
      }

      // In this case, save the new Additional Actions posted
      else if (msg->op == IMC::RemoteActionsRequest::OP_REGISTER)
      {
        inf("Register request received");

        //! Parse the received message FORMAT: (Verb=Type;Verb=Type)
        std::vector<std::string> parts;
        Utils::String::split(msg->actions, ";", parts);
        std::vector<Action> task_verbs;

        saveActions(parts, task_verbs, "=");
        compareActions(m_actions, task_verbs);
      }
    }

    void
    BasicRemoteOperation::consume(const IMC::ControlLoops* msg)
    {
      if (!(msg->mask & IMC::CL_TELEOPERATION))
        return;

      // If this scope is obsolete, ignore message
      if (msg->scope_ref < m_scope_ref)
        return;

      m_scope_ref = msg->scope_ref;

      if (msg->enable == isActive())
        return;

      if (msg->enable == IMC::ControlLoops::CL_ENABLE)
      {
        requestActivation();
        if (m_teleop_src != 0)
        {
          std::string state = Utils::String::str(DTR("teleoperation by %s"), m_ctx.resolver.resolve(m_teleop_src));
          setEntityState(IMC::EntityState::ESTA_NORMAL, state);
        }
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }
      else
      {
        requestDeactivation();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }
    }

    void 
    BasicRemoteOperation::compareActions(std::vector<Action>& actions, std::vector<Action> new_actions)
    {

      std::vector<Action> action_adder;

      //! Iterate through the list of actions and update old ones if necessary
      for (unsigned int i = 0; i < new_actions.size(); i++)
      {
        bool new_action = true;
        inf("Action: %s Type: %s", new_actions[i].name.c_str(), new_actions[i].type.c_str());
        for(unsigned int j = 0; j < actions.size(); j++)
        {
          //! Check if the action already exists
          if (!actions[j].name.compare(new_actions[i].name))
          { 
            new_action = false;
            war("Action %s already exists and can't be changed. ILLEGAL", actions[j].name.c_str());
            //! If it's a lock type, update it 
            if (!actions[j].lock && new_actions[i].lock)
            {
              war("Lock attempt on %s. ILLEGAL", actions[j].name.c_str());
            }
            //! If it isnt and the type is different, update it
            else if (actions[j].type.compare(new_actions[i].type) && new_actions[i].type.compare("lock"))
            {
              war("Attempt to update action %s from %s to %s", actions[j].name.c_str(),
                                                               actions[j].type.c_str(), new_actions[i].type.c_str());
              //m_verbs[j].type = task_verbs[i].type;
            } 
          }
        }
        //! Action doesnt exist, so add it
        if (new_action)
        {
          Action action;
          action = new_actions[i];
          action_adder.push_back(action);
          inf("Added new action %s of type %s with lock: %d", new_actions[i].name.c_str(),
                                                              new_actions[i].type.c_str(), new_actions[i].lock);
        }
      }
      if (!action_adder.empty()){
        for (unsigned int i = 0; i < action_adder.size(); i++)
        {
          actions.push_back(action_adder[i]);
        }
      }
    }

    void
    BasicRemoteOperation::setupAdditionalActions()
    {
      addRemoteAction("Exit", "Button");
      for (unsigned int i = 0; i < m_actions.size(); ++i)
      {
        //! Turn the first letter of "type" uppercase
        m_actions[i].type[0] = std::toupper(static_cast<unsigned char> (m_actions[i].type[0]));

        //! Add action and lock if it is required
        addRemoteAction(m_actions[i].name, m_actions[i].type);
        if (m_actions[i].lock) addRemoteAction(m_actions[i].name, "Lock");
      }      

      //! If a Range has been specified, send it
      m_range[0] = std::toupper(static_cast<unsigned char> (m_range[0]));
      if (!m_range.empty()) addRemoteAction("Ranges", m_range);
    }

    void 
    BasicRemoteOperation::parseActionType(const std::string& statement, const std::string seperator,
                                          std::string& action, std::string& type)
    {
        if (Utils::String::ltrim(statement).size() < 3)
          return;

        std::vector<std::string> parts;
        Utils::String::split(statement, seperator, parts);

        if (parts.size() != 2) return;
        
        action = parts[0];
        action = Utils::String::ltrim(action);
        action = Utils::String::rtrim(action);
        
        if (action.empty()) return;

        type = parts[1];
        type = Utils::String::ltrim(type);
        type = Utils::String::rtrim(type);
        Utils::String::toLowerCase(type);
         
    }
    void
    BasicRemoteOperation::saveActions(const std::vector<std::string> additional_actions,
                                      std::vector<Action>& verbs, const std::string seperator)
    {
      std::vector<std::string> locks;      
      for (unsigned int i = 0; i < additional_actions.size(); ++i)
      {
        std::string action_name;
        std::string type_lowercase; 
        Action action; 

        parseActionType(additional_actions[i], seperator, action_name, type_lowercase);

        //! If its not a lock or a range
        if (type_lowercase.compare("lock") && action_name.compare("Ranges"))
        {
          if (!type_lowercase.compare("button") || !type_lowercase.compare("axis") || !type_lowercase.compare("halfslider") || !type_lowercase.compare("slider"))
          {
          action.name = action_name;
          action.type = type_lowercase;
          verbs.push_back(action);
          }
          else war("Type %s is invalid. ILLEGAL", type_lowercase.c_str()); 
        }
        //! If its a lock
        else if (!type_lowercase.compare("lock"))
        {
          locks.push_back(action_name);
        }
        else if (!action_name.compare("Ranges"))
        {
          //! If its not a lock
          if (m_range.empty()) m_range = type_lowercase;
          else war("Attempt to change the Range was made by Register. ILLEGAL");
        }
      }
      //! Done to prevent a lock to be defined with no type associated with it
      for (unsigned int i = 0; i < locks.size(); ++i)
      {
        bool lock_valid = false;
        for (unsigned int j = 0; j < verbs.size(); ++j)
        {
          if(!locks[i].compare(verbs[j].name))
          {
           lock_valid = true;
           verbs[j].lock = true;
          }
        }
        if (!lock_valid)
        {
          war("Lock action for %s has no type associated with it. ILLEGAL", locks[i].c_str());
        }
      }
    }

    void
    BasicRemoteOperation::onResourceInitialization(void)
    {
      setupAdditionalActions(m_additional_actions);
      setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
    }

    void
    BasicRemoteOperation::updateConnectionState(bool state)
    {
      if (!isActive())
        return;

      if (state)
      {
        if (!m_connection && (m_last_action > 0.0))
        {
          debug("connection resumed");
          onConnectionResumed();
        }

        m_connection = true;
        m_last_action = DUNE::Time::Clock::get();
      }
      else
      {
        if (m_connection)
        {
          debug("connection timeout");
          onConnectionTimeout();
        }

        m_connection = false;
      }
    }

    void
    BasicRemoteOperation::configureControlLoops(uint8_t enable, uint32_t mask)
    {
      IMC::ControlLoops cloops;
      cloops.enable = enable;
      cloops.mask = mask;
      cloops.scope_ref = m_scope_ref;
      dispatch(cloops);
    }

    void
    BasicRemoteOperation::addRemoteAction(const std::string& action, const std::string& type)
    {
      std::string tuple = action + "=" + type;

      if (m_actions_request.actions.size() != 0)
        m_actions_request.actions.append(";");

      m_actions_request.actions.append(tuple);
    }

    void
    BasicRemoteOperation::task(void)
    {
      fp64_t delta = Time::Clock::get() - m_last_action;

      // Check for connection timeouts.
      if (delta > m_connection_timeout)
        updateConnectionState(false);

      if (isActive() && m_connection)
        actuate();
    }
  }
}
