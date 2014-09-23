//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <map>
#include <sstream>
#include <cstddef>

// DUNE headers.
#include <DUNE/Daemon.hpp>
#include <DUNE/Version.hpp>
#include <DUNE/I18N.hpp>
#include <DUNE/Tasks/Factory.hpp>
#include <DUNE/Tasks/Manager.hpp>
#include <DUNE/FileSystem/Path.hpp>

namespace DUNE
{
  Daemon::Daemon(DUNE::Tasks::Context& ctx, const std::string& profiles):
    DUNE::Tasks::Task("Daemon", ctx),
    m_tman(NULL),
    m_fs_capacity(0)
  {
    // Retrieve known IMC addresses.
    std::vector<std::string> addrs = m_ctx.config.options("IMC Addresses");
    for (unsigned i = 0; i < addrs.size(); ++i)
    {
      unsigned id = IMC::AddressResolver::invalid();
      m_ctx.config.get("IMC Addresses", addrs[i], "", id);
      m_ctx.resolver.insert(addrs[i], id);
    }

    // Add commonly used profiles.
    m_ctx.profiles.add("Hardware", DTR("Pure Hardware"));
    m_ctx.profiles.add("Simulation", DTR("Pure Simulation"));
    m_ctx.profiles.add("Hardware/Simulation", DTR("Simulation with Hardware-in-the-loop"));

    // Add user defined profiles.
    std::vector<std::string> pros = m_ctx.config.options("Profiles");
    for (unsigned i = 0; i < pros.size(); ++i)
    {
      std::string desc;
      m_ctx.config.get("Profiles", pros[i], DTR("No description given"), desc);
      m_ctx.profiles.add(pros[i], desc);
    }

    m_ctx.mbus.pause();

    // Register system name.
    std::string sys_name;
    m_ctx.config.get("General", "Vehicle", "unknown", sys_name);
    m_ctx.resolver.name(sys_name);
    unsigned id = resolveSystemName(sys_name);
    m_ctx.resolver.id(id);
    setEntityLabel("Daemon");
    reserveEntities();

    // Load saved configuration parameters.
    m_scfg_file = (m_ctx.dir_cfg / (sys_name + "-saved.ini")).str();
    try
    {
      m_ctx.config.parseFile(m_scfg_file.c_str());
      m_scfg.parseFile(m_scfg_file.c_str());
    }
    catch (...)
    { }

    m_ctx.dir_log = m_ctx.dir_log / sys_name;
    m_ctx.dir_db = m_ctx.dir_db / sys_name;

    try
    {
      m_ctx.dir_db.create();
    }
    catch (std::exception& e)
    {
      err("%s", e.what());
    }

    try
    {
      m_ctx.dir_log.create();
      m_fs_capacity = FileSystem::Path::storageCapacity(m_ctx.dir_log);
    }
    catch (std::exception& e)
    {
      err("%s", e.what());
    }

    inf(DTR("system name: '%s' (%u)"), sys_name.c_str(), id);
    inf(DTR("registered tasks: %d"), Tasks::Factory::getRegisteredCount());
    inf(DTR("base folder: '%s'"), ctx.dir_app.c_str());
    inf(DTR("configuration folder: '%s'"), ctx.dir_cfg.c_str());
    inf(DTR("web server folder: '%s'"), ctx.dir_www.c_str());
    inf(DTR("log folder: '%s'"), ctx.dir_log.c_str());
    inf(DTR("library folder: '%s'"), ctx.dir_lib.c_str());
    inf(DTR("firmware folder: '%s'"), ctx.dir_fmw.c_str());
    if (!profiles.empty())
    {
      m_ctx.profiles.select(profiles);
      inf(DTR("execution profiles: %s"), profiles.c_str());
    }

    m_tman = new DUNE::Tasks::Manager(m_ctx);

    bind<IMC::RestartSystem>(this);
    bind<IMC::EntityList>(this);
    bind<IMC::SaveEntityParameters>(this);
    bind<IMC::EntityParameters>(this);
  }

  Daemon::~Daemon(void)
  {
    m_ctx.mbus.pause();
    delete m_tman;
    inf(DTR("clean shutdown"));
  }

  void
  Daemon::onResourceInitialization(void)
  {
    m_ctx.mbus.resume();
    m_tman->start();
    m_periodic_counter.setTop(1.0);
    setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
  }

  void
  Daemon::consume(const DUNE::IMC::EntityParameters* msg)
  {
    if (msg->getDestination() != getSystemId())
      return;

    if (msg->getDestinationEntity() != getEntityId())
      return;

    std::string task_name;
    try
    {
      task_name = m_ctx.entities.resolveTaskName(msg->name);
    }
    catch (...)
    {
      return;
    }

    IMC::MessageList<IMC::EntityParameter>::const_iterator itr = msg->params.begin();
    for ( ; itr != msg->params.end(); ++itr)
    {
      if (m_ctx.config.get(task_name, (*itr)->name) != (*itr)->value)
        m_scfg.set(task_name, (*itr)->name, (*itr)->value);
    }

    m_scfg.writeToFile(m_scfg_file.c_str());
  }

  void
  Daemon::consume(const DUNE::IMC::SaveEntityParameters* msg)
  {
    IMC::QueryEntityParameters query;
    query.name = msg->name;
    dispatch(query);
  }

  void
  Daemon::consume(const IMC::RestartSystem* msg)
  {
    (void)msg;
    stop();
  }

  void
  Daemon::consume(const IMC::EntityList* msg)
  {
    if (msg->op != IMC::EntityList::OP_QUERY)
      return;

    std::vector<DUNE::Entities::EntityDataBase::Entity*> devs;
    m_ctx.entities.contents(devs);

    if (devs.size() == 0)
      return;

    std::ostringstream stream;
    stream << devs[0]->label << "=" << devs[0]->id;

    for (unsigned int i = 1; i < devs.size(); ++i)
      stream << ";" << devs[i]->label << "=" << devs[i]->id;

    IMC::EntityList list;
    list.op = IMC::EntityList::OP_REPORT;
    list.list = stream.str();
    dispatch(list);
  }

  void
  Daemon::writeParamsXML(std::ostream& os) const
  {
    os << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\n"
       << "<config"
       << " format=\"1\""
       << " version=\"" << getFullVersion() << "\""
       << " system=\"" << getSystemName() << "\""
       << " i18n=\"" << I18N::getLanguage() << "\">\n";

    m_tman->writeParamsXML(os);

    os << "</config>\n";
  }

  void
  Daemon::dispatchPeriodic(void)
  {
    // Dispatch global CPU usage.
    IMC::CpuUsage cpu_usage;
    int value = m_sys_resources.getProcessorUsage();
    if (value >= 0 && value <= 100)
    {
      cpu_usage.value = value;
      dispatch(cpu_usage);
    }

    // Dispatch per thread CPU usage.
    std::map<std::string, Task*>::iterator itr = m_tman->begin();
    for ( ; itr != m_tman->end(); ++itr)
    {
      value = itr->second->getProcessorUsage();
      if (value >= 0 && value <= 100)
      {
        cpu_usage.setSourceEntity(itr->second->getEntityId());
        cpu_usage.value = value;
        dispatch(cpu_usage);
      }
    }

    // Dispatch available storage.
    if (m_fs_capacity > 0)
    {
      uint64_t avail = FileSystem::Path::storageAvailable(m_ctx.dir_log);
      IMC::StorageUsage sto_usage;
      sto_usage.available = (uint64_t)avail / (uint64_t)1048576;
      sto_usage.value = 100 - (100 * (uint64_t)avail / (uint64_t)m_fs_capacity);
      dispatch(sto_usage);
    }

    // Dispatch heartbeat.
    IMC::Heartbeat hb;
    dispatch(hb);

    // Dispatch query entity state.
    IMC::QueryEntityState qes;
    dispatch(qes, Tasks::DF_LOOP_BACK);

    // Dispatch query power channel state.
    IMC::QueryPowerChannelState qpcs;
    dispatch(qpcs);
  }

  void
  Daemon::onMain(void)
  {
    while (!stopping())
    {
      waitForMessages(1.0);

      if (m_periodic_counter.overflow())
      {
        m_periodic_counter.reset();
        dispatchPeriodic();
      }
    }
  }
}
