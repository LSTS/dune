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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef DUNE_ENTITIES_PARAMETERIZED_ENTITY_HPP_INCLUDED_
#define DUNE_ENTITIES_PARAMETERIZED_ENTITY_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>
#include <map>
#include <stack>

// DUNE Headers.
#include <DUNE/Entities/BasicEntity.hpp>
#include <DUNE/Status/Messages.hpp>
#include <DUNE/Tasks/Parameter.hpp>
#include <DUNE/Tasks/BasicParameterParser.hpp>
#include <DUNE/Tasks/ParameterTable.hpp>

namespace DUNE
{
  namespace Entities
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM BasicEntity;

    //! Parameterized Entity class, derived from BasicEntity, and also handling EntityParameters.
    class ParameterizedEntity: public BasicEntity
    {
    public:
      //! Constructor.
      //! @param[in] owner pointer to the task containing the entity.
      //! @param[in] context entity context.
      ParameterizedEntity(Tasks::AbstractTask* owner, Tasks::Context& context):
        BasicEntity(owner, context)
      { }

      void
      setBindings(Tasks::Recipient* recipient) override
      {
        BasicEntity::setBindings(recipient);
        bind<IMC::QueryEntityParameters, ParameterizedEntity>(recipient, this);
        bind<IMC::SetEntityParameters, ParameterizedEntity>(recipient, this);
        bind<IMC::PushEntityParameters, ParameterizedEntity>(recipient, this);
        bind<IMC::PopEntityParameters, ParameterizedEntity>(recipient, this);
      }

      virtual void
      setLabel(const std::string& label) override
      {
        BasicEntity::setLabel(label);
        m_section = std::string(m_owner->getName()) + ":" + label;
      }

      //! Consume QueryEntityParameters messages and reply accordingly.
      //! @param[in] msg QueryEntityParameters message.
      void
      consume(const IMC::QueryEntityParameters* msg);

      //! Consume SetEntityParameters messages and reply accordingly.
      //! @param[in] msg SetEntityParameters message.
      void
      consume(const IMC::SetEntityParameters* msg);

      //! Consume PushEntityParameters messages and reply accordingly.
      //! @param[in] msg PushEntityParameters message.
      void
      consume(const IMC::PushEntityParameters* msg);

      //! Consume PopEntityParameters messages and reply accordingly.
      //! @param[in] msg PopEntityParameters message.
      void
      consume(const IMC::PopEntityParameters* msg);

      //! Load parameters from context's configuration.
      void
      loadConfig(void);

      //! Write entity parameters in XML format.
      //! @param[in] os output stream.
      void
      writeParamsXML(std::ostream& os) const;

    protected:
      void
      setParameterScope(const std::string& name, const Tasks::Parameter::Scope& scope)
      {
        m_params.setScope(name, scope);
      }

      void
      setParameterScope(void* ptr, const Tasks::Parameter::Scope& scope)
      {
        m_params.setScope(ptr, scope);
      }

      Tasks::Parameter::Scope
      getParameterScope(const std::string& name)
      {
        return m_params.getScope(name);
      }

      Tasks::Parameter::Scope
      getParameterScope(void* ptr)
      {
        return m_params.getScope(ptr);
      }

      void
      setParameterVisibility(const std::string& name, const Tasks::Parameter::Visibility& visibility)
      {
        m_params.setVisibility(name, visibility);
      }

      void
      setParameterVisibility(void* ptr, const Tasks::Parameter::Visibility& visibility)
      {
        m_params.setVisibility(ptr, visibility);
      }

      Tasks::Parameter::Visibility
      getParameterVisibility(const std::string& name)
      {
        return m_params.getVisibility(name);
      }

      Tasks::Parameter::Visibility
      getParameterVisibility(void* ptr)
      {
        return m_params.getVisibility(ptr);
      }

      //! Declare a configuration parameter that can be parsed using
      //! the basic parameter parser.
      //! @tparam T type of the destination variable.
      //! @param[in] name parameter name.
      //! @param[in] var variable that will hold the parameter value.
      //! @return Parameter object.
      template <typename T>
      Tasks::Parameter&
      param(const std::string& name, T& var)
      {
        return param<Tasks::BasicParameterParser<T>>(name, var);
      }

      //! Declare a configuration parameter that can be parsed using
      //! a custom parameter reader.
      //! @tparam Y type of the custom parameter reader.
      //! @tparam T type of the destination variable.
      //! @param[in] name parameter name.
      //! @param[in] var variable that will hold the parameter value.
      //! @return Parameter object.
      template <typename Y, typename T>
      Tasks::Parameter&
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

      //! Declare parameter 'Active'. This parameter allows
      //! the task to be activated/deactivated using the message
      //! SetEntityParameters.
      //! @param[in] def_scope default scope of 'Active' parameter.
      //! @param[in] def_visibility default visibility of 'Active' parameter.
      //! @param[in] def_value default value of 'Active' parameter.
      void
      paramActive(Tasks::Parameter::Scope def_scope,
                  Tasks::Parameter::Visibility def_visibility,
                  bool def_value = false);

      //! Set the name of the parameter editor that should be used to
      //! interact with the parameters of the task.
      //! @param[in] name editor name (free-form string).
      void
      setParamSectionEditor(const std::string& name)
      {
        m_param_editor = name;
      }

    private:
      //! Parameter section name.
      std::string m_section;
      //! Entity parameters.
      Tasks::ParameterTable m_params;
      //! Parameters stack.
      std::stack<std::map<std::string, std::string>> m_params_stack;
      //! Name of parameter section editor.
      std::string m_param_editor;

      virtual void
      onQueryEntityParameters(const IMC::QueryEntityParameters* msg);

      virtual void
      onSetEntityParameters(const IMC::SetEntityParameters* msg);

      virtual void
      onPushEntityParameters(const IMC::PushEntityParameters* msg);

      virtual void
      onPopEntityParameters(const IMC::PopEntityParameters* msg);

      //! Called when the entity is instructed to update its run-time
      //! parameters. Derived classes that need to compute auxiliary
      //! values based on run-time parameters should override this
      //! function.
      virtual void
      onUpdateParameters(void)
      { }

      //! Instruct entity to update its run-time parameters.
      void
      updateParameters(void)
      {
        onUpdateParameters();
        m_params.setChanged(false);
      }
    };
  }
}

#endif
