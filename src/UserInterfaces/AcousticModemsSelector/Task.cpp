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

#include <nlohmann-json/json.hpp>

namespace UserInterfaces
{
  //! Task responsible for handling selection of acoustic modems.
  //!
  //! Task receives requests as IMC:: and
  //! dispatches IMC::SetEntityParameters accordingly.
  //! @author Bernardo Gabriel
  namespace AcousticModemsSelector
  {
    using DUNE_NAMESPACES;
    using json = nlohmann::json;

    //! Request uri.
    constexpr const char* c_request_uri = "/dune/acoustics";
    //! Section id.
    constexpr const char* c_section_id = "Acoustics";

    struct AcousticModemInfo
    {
      //! Acoustic Modem type.
      std::string type;
      //! Acoustic Modem uri.
      std::string uri;
      //! Acoustic Modem selected state.
      bool selected;
    };

    struct AcousticModemTask
    {
      //! Acoustic Modem name.
      std::string name;
      //! Task state.
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

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Map of acoustic modems (name, info{type, uri, selected}).
      std::map<std::string, AcousticModemInfo> m_acoustic_modems;
      //! Map of activated acoustic modems (type, task{name, state}).
      std::map<std::string, AcousticModemTask> m_selected;
      //! Set of known types of acoustic modems.
      std::unordered_set<std::string> m_types;
      //! UAN acoustic modems configuration.
      std::unordered_set<std::string> m_uan_config;
      //! New acoustic modems configuration state.
      bool m_amodems_state;
      //! Targetable system names.
      std::unordered_set<std::string> m_sys;
      //! UAN Entity Id.
      uint8_t m_uan_id;
      //! Id for TransmissionRequest IMC message.
      uint16_t m_treqid;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_amodems_state(false),
        m_uan_id(255),
        m_treqid(0)
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

        bind<IMC::AcousticSystems>(this);
        bind<IMC::EntityParameters>(this);
        bind<IMC::EntityState>(this);
        bind<IMC::HTTPAction>(this);
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

            param(modem.first, m_acoustic_modems[modem.first].selected)
            .visibility(Tasks::Parameter::VISIBILITY_USER)
            .scope(Tasks::Parameter::SCOPE_GLOBAL)
            .defaultValue("false")
            .description(DTR(String::str("True if acoustic modem %s is selected, false otherwise. "
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
            updateSelectedAcousticModem(selected);
            m_uan_config.insert(type);
          }
          else
          {
            m_selected.erase(type);
            m_uan_config.erase(type);
          }

          dispatchAcousticModems(type);
        }

        updateSelectedTypes(String::join(m_uan_config.begin(), m_uan_config.end(), ","));
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
        try
        {
          m_uan_id = resolveEntity(m_args.uan_elabel);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          war(DTR("%s"), e.what());
        }
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
        registerWebpageSection();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      registerWebpageSection(void)
      {
        IMC::HTTPAction action;
        action.op = IMC::HTTPAction::OP_REGISTER;
        action.data.assign(c_section_id, c_section_id + std::strlen(c_section_id));
        dispatch(action);
      }

      bool
      matchURL(const char* url, const char* str, bool fragment = false)
      {
        if (fragment)
        {
          int size = std::strlen(str);
          return (std::strncmp(url, str, size) == 0);
        }

        return (std::strcmp(url, str) == 0);
      }

      std::string
      acousticsJSON(void)
      {
        json j;
        j["acoustic_modems_types"] = m_types.empty() ? "" : Utils::String::join(m_types.begin(), m_types.end(), ",");
        if (!m_sys.empty())
          j["acoustic_targets"] = Utils::String::join(m_sys.begin(), m_sys.end(), ",");

        auto& acoustic_modems = j["acoustic_modems"];
        for (const auto& entry : m_acoustic_modems)
        {
          const auto& key = entry.first;
          const auto& modem = entry.second;
          int value = static_cast<int>(modem.selected);
          auto it_selected = m_selected.find(modem.type);
          if (it_selected != m_selected.end() && modem.selected && (modem.selected != it_selected->second.state))
            value = 2;
          
          acoustic_modems[key] = value;
        }

        return j.dump();
      }

      uint16_t
      getInternalId(void)
      {
        m_treqid = (m_treqid + 1) * (m_treqid != UINT16_MAX);
        return m_treqid;
      }

      void
      dispatchAction(std::string action, std::string dest)
      {
        IMC::TransmissionRequest treq;
        treq.setDestination(getSystemId());
        treq.comm_mean = IMC::TransmissionRequest::CMEAN_ACOUSTIC;
        treq.req_id = getInternalId();
        treq.destination = dest;
        treq.data_mode = (action == "ping") ?
                          IMC::TransmissionRequest::DMODE_RANGE:
                          IMC::TransmissionRequest::DMODE_ABORT;
        dispatch(treq);
      }

      void
      receivedAcousticModemsSelection(std::string selection)
      {
        IMC::SetEntityParameters sep;
        sep.setDestination(getSystemId());
        sep.name = getEntityLabel();

        std::unordered_set<std::string> lst;
        Utils::String::split(selection, "&", lst);
        for (const auto& amodem: m_acoustic_modems)
        {
          IMC::EntityParameter p;
          p.name = amodem.first;
          bool value = lst.find(amodem.first) != lst.end();
          p.value =  uncastLexical(value);
          sep.params.push_back(p);
        }

        dispatch(sep, DF_LOOP_BACK);
      }

      void
      consume(const IMC::AcousticSystems* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getSourceEntity() != m_uan_id)
          return;
        
        if (msg->list.empty())
          m_sys.clear();
        else
          String::split(msg->list, ",", m_sys);
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

          for (const auto& it: msg->params)
          {
            if (it->name == m_args.uan_modems_param)
            {
              std::unordered_set<std::string> config;
              String::split(it->value, ",", config);
              for (const auto& type: config)
              {
                if (m_types.find(type) != m_types.end())
                {
                  m_acoustic_modems[m_selected[type].name].selected = true;
                  IMC::EntityParameter p;
                  p.name = m_selected[type].name;
                  p.value = uncastLexical(m_acoustic_modems[m_selected[type].name].selected);
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
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (m_selected.empty())
          return;
        
        if (msg->getSource() != getSystemId())
          return;

        try
        {
          for (auto& it: m_selected)
          {
            unsigned id = resolveEntity(it.first);
            if (id == msg->getSourceEntity())
              it.second.state = msg->state == IMC::EntityState::ESTA_NORMAL;
          }
        }
        catch(...)
        { }
      }

      void
      consume(const IMC::HTTPAction* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
        
        if (msg->op != IMC::HTTPAction::OP_REQUEST)
          return;
        
        if (matchURL(msg->data.data(), c_request_uri))
        {
          IMC::HTTPAction action;
          action.setDestination(msg->getSource());
          action.setDestinationEntity(msg->getSourceEntity());
          action.id = msg->id;
          action.op = IMC::HTTPAction::OP_REPLY;
          std::string text = acousticsJSON();
          action.data.assign(text.begin(), text.end());
          dispatch(action);
        }
        else if (matchURL(msg->data.data(), c_request_uri, true))
        {
          std::vector<std::string> parts;
          Utils::String::split(msg->data.data(), "/", parts);
          if (parts.size() == 5)
          {
            if (parts[3] == "ping" || parts[3] == "abort")
              dispatchAction(parts[3], parts[4]);
            else if (parts[3] == "selection")
            {
              if (parts[4] == "save")
                saveParameters();
              else
                receivedAcousticModemsSelection(parts[4]);
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

          if (!modem.second.selected)
            continue;

          if (first)
          {
            result = modem.first;
            first = false;
            continue;
          }

          modem.second.selected = false;
          needed = true;

          IMC::EntityParameter p;
          p.name = modem.first;
          p.value = uncastLexical(modem.second.selected);
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
          p.value = uncastLexical(modem.second.selected);
          params.params.push_back(p);
        }

        if (params.params.size() != 0)
          dispatch(params);
      }

      //! Set UAN acoutics modems configuration.
      void
      updateSelectedTypes(const std::string& list)
      {
        if (list.empty())
          debug("erasing UAN config");
        else
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
      updateSelectedAcousticModem(const std::string& selected)
      {
        const std::string type = m_acoustic_modems[selected].type;
        const std::string uri = m_acoustic_modems[selected].uri;
        m_selected[type].name = selected;
        m_selected[type].state = false;
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

      void
      saveParameters(void)
      {
        debug("saving entity parameters");
        IMC::SaveEntityParameters sp;
        sp.setDestination(getSystemId());
        sp.name = getEntityLabel();
        dispatch(sp);
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
