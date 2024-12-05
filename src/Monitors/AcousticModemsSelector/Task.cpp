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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  //! Task responsible for handling selection of acoustic modems.
  //!
  //! Task receives requests as IMC:: and
  //! dispatches IMC::SetEntityParameters accordingly.
  //! @author Bernardo Gabriel
  namespace AcousticModemsSelector
  {
    struct AcosuticModemInfo
    {
      //! Acoustic Modem type.
      std::string type;
      //! Acoustic Modem uri.
      std::string uri;
      //! Acoustic Modem state.
      bool state;
    };

    struct Arguments
    {
      //! Acoustic Modems list label.
      std::string am_list;
      //! UAN entity label.
      std::string uan_elabel;
      //! UAN acoustic modems list parameter.
      std::string uan_modems_param;
      //! Acoustic modems task URI parameter.
      std::string am_uri_param;
      //! Manta Core entity label.
      std::string manta_elabel;
    };

    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Map of acoustic modems (name, info{type, uri, state}).
      std::map<std::string, AcosuticModemInfo> m_acoustic_modems;
      //! Map of activated acoustic modems (type, name).
      std::map<std::string, std::string> m_selected;
      //! Set of known types of acoustic modems.
      std::unordered_set<std::string> m_types;
      //! UAN acoustic modems configuration.
      std::unordered_set<std::string> m_uan_config;
      //! New acoustic modems configuration state.
      bool m_amodems_state;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_amodems_state(false)
      {
        param("Acoustic Modems List Label", m_args.am_list)
        .defaultValue("Acoustic Modems")
        .description("Label for the Acoustic Modems List");

        param("UAN - Entity Label", m_args.uan_elabel)
        .defaultValue("Acoustic Access Controller")
        .description("UAN entity label.");

        param("UAN - Acoustic Modems List Parameter", m_args.uan_modems_param)
        .defaultValue("Modems")
        .description("UAN acoustic modems list parameter.");

        param("Acoustic Modems - URI Parameter", m_args.am_uri_param)
        .defaultValue("IO Port - Device")
        .description("Acoustic modems task URI parameter.");

        param("Manta Core - Entity Label", m_args.manta_elabel)
        .defaultValue("Manta Core")
        .description("Manta Core entity label.");

        bind<IMC::EntityParameters>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.am_list))
        {
          std::map<std::string, std::string> modems = m_ctx.config.getSection(m_args.am_list);
          for (auto& modem: modems)
          {
            if (m_acoustic_modems.find(modem.first) != m_acoustic_modems.end())
              continue;
            
            m_acoustic_modems[modem.first] = {getAcousticModemType(modem.first), modem.second, false};
            m_types.insert(m_acoustic_modems[modem.first].type);

            param(modem.first, m_acoustic_modems[modem.first].state)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .scope(Tasks::Parameter::SCOPE_GLOBAL)
            .defaultValue("false")
            .description(DTR(String::str("Acoustic modem %s state. "
                                         "Only one modem of the type %s can be selected. "
                                         "If multiple modems of the same type are selected, "
                                         "only the first, in alphabetical order, will be considered.",
                                          modem.first.c_str(),
                                          m_acoustic_modems[modem.first].type.c_str()).c_str()));
          }
          
          loadConfig();
        }

        for (const auto& type: m_types)
        {
          std::string selected = avoidTypeMultiSelection(type);
          if (!selected.empty())
          {
            updateSelectedAcousticModem(type, m_acoustic_modems[selected].uri);
            m_selected[type] = selected;
            m_uan_config.insert(type);
          }
          else
            m_uan_config.erase(type);

          dispatchAcousticModems(type);
        }

        updateSelectedTypes(String::join(m_uan_config.begin(), m_uan_config.end(), ","));

        IMC::SaveEntityParameters sp;
        sp.setDestination(getSystemId());
        sp.name = getEntityLabel();
        dispatch(sp);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::EntityParameters* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        
        if (msg->name == m_args.uan_elabel)
        {
          IMC::SetEntityParameters sep;
          sep.setDestination(getSystemId());
          sep.name = getEntityLabel();

          for (const auto& param: msg->params)
          {
            if (param->name == m_args.uan_modems_param)
            {
              std::unordered_set<std::string> config;
              String::split(param->value, ",", config);
              for (const auto& type: config)
              {
                if (m_types.find(type) != m_types.end())
                {
                  m_acoustic_modems[m_selected[type]].state = true;
                  IMC::EntityParameter p;
                  p.name = m_selected[type];
                  p.value = m_acoustic_modems[m_selected[type]].state ? "true" : "false";
                  sep.params.push_back(p);
                  m_amodems_state = false;
                }

                if (m_uan_config.find(type) != m_uan_config.end())
                  m_uan_config.insert(type);
              }

              if (sep.params.size())
                dispatch(sep, DF_LOOP_BACK);

              break;
            }
          }
        }
        else if (m_types.find(msg->name) != m_types.end())
        {
          for (const auto& param: msg->params)
          {
            if (param->name == m_args.am_uri_param)
            {
              m_selected[param->name] = param->value;
              break;
            }
          }
        }
      }

      //! Avoid selecting more than one modem of the same type.
      std::string
      avoidTypeMultiSelection(const std::string& type)
      {
        IMC::SetEntityParameters sep;
        sep.setDestination(getSystemId());
        sep.name = getEntityLabel();

        bool first = true;
        bool needed = false;
        std::string result;
        for (auto& modem: m_acoustic_modems)
        {
          if (modem.second.type != type)
            continue;

          if (!modem.second.state)
            continue;

          if (first)
          {
            result = modem.first;
            first = false;
            continue;
          }

          modem.second.state = false;
          needed = true;

          IMC::EntityParameter p;
          p.name = modem.first;
          p.value = modem.second.state ? "true" : "false";
          sep.params.push_back(p);
        }

        if (needed)
          dispatchAcousticModems(type);

        if (sep.params.size())
          dispatch(sep, DF_LOOP_BACK);

        return result;
      }

      //! Query entity parameters.
      void
      queryEntityParameters(const std::string& entity)
      {
        IMC::QueryEntityParameters qep;
        qep.setDestination(getSystemId());
        qep.name = entity;
        dispatch(qep);
      }

      //! Dispatch Entity Parameters related to the acoustic modems selection.
      void
      dispatchAcousticModems(const std::string& type)
      {
        IMC::EntityParameters params;
        params.name = getEntityLabel();
        for (const auto& modem: m_acoustic_modems)
        {
          if (modem.second.type != type)
            continue;

          IMC::EntityParameter p;
          p.name = modem.first;
          p.value = modem.second.state;
          params.params.push_back(p);
        }

        if (params.params.size() != 0)
          dispatch(params);
      }

      //! Set UAN acoutics modems configuration.
      void
      updateSelectedTypes(const std::string& list)
      {
        debug("setting UAN config: %s", list.c_str());
        IMC::SetEntityParameters sep;
        sep.setDestination(getSystemId());
        sep.name = m_args.uan_elabel;
        IMC::EntityParameter p;
        p.name = m_args.uan_modems_param;
        p.value = list;
        sep.params.push_back(p);
        dispatch(sep);
      }

      //! Set selected acoustic modem for respective task.
      void
      updateSelectedAcousticModem(const std::string& type, const std::string& uri)
      {
        debug("setting acoustic modem %s URI: %s", type.c_str(), uri.c_str());
        IMC::SetEntityParameters sep;
        sep.setDestination(getSystemId());
        sep.name = type;
        IMC::EntityParameter ep;
        ep.name = m_args.am_uri_param;
        ep.value = uri;
        sep.params.push_back(ep);
        dispatch(sep);
      }

      //! Get acoustic modem type.
      std::string
      getAcousticModemType(const std::string& modem)
      {
        size_t pos = 0;
        while (pos < modem.size() && !std::isdigit(modem[pos]))
          ++pos;
        return modem.substr(0, pos);
      }

      //! Main loop.
      void
      onMain(void)
      {
        queryEntityParameters(m_args.uan_elabel);
        for (const auto& type: m_types)
          queryEntityParameters(type);

        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
