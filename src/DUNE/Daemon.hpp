//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Daemon.hpp 12799 2013-01-30 03:59:51Z rasm                       $:*
//***************************************************************************

#ifndef DUNE_DAEMON_HPP_INCLUDED_
#define DUNE_DAEMON_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Tasks/Periodic.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/System/Resources.hpp>
#include <DUNE/Time/Counter.hpp>

namespace DUNE
{
  // Forward declarations.
  namespace Tasks { class Manager; }

  // Export DLL Symbol.
  class DUNE_DLL_SYM Daemon;

  class Daemon: public Tasks::Task
  {
  public:
    Daemon(Tasks::Context& ctx, const std::string& profiles);

    ~Daemon(void);

    void
    onResourceInitialization(void);

    void
    consume(const DUNE::IMC::RestartSystem* msg);

    void
    consume(const DUNE::IMC::QueryEntityInfo* msg);

    void
    consume(const DUNE::IMC::EntityList* msg);

    void
    consume(const DUNE::IMC::EntityParameters* msg);

    void
    consume(const DUNE::IMC::SaveEntityParameters* msg);

    void
    onMain(void);

    void
    writeParamsXML(std::ostream& os) const;

  private:
    //! System resources.
    System::Resources m_sys_resources;
    //! Task manager.
    Tasks::Manager* m_tman;
    //! Filesystem capacity.
    uint64_t m_fs_capacity;
    //! Periodic counter.
    Time::Counter<double> m_periodic_counter;
    //! Save configuration file name.
    std::string m_scfg_file;
    //! Saved configuration parameters.
    Parsers::Config m_scfg;

    void
    dispatchPeriodic(void);
  };
}

#endif
