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
