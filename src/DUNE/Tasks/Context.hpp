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

#ifndef DUNE_TASKS_CONTEXT_HPP_INCLUDED_
#define DUNE_TASKS_CONTEXT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>

// DUNE headers.
#include <DUNE/Parsers/Config.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Entities/EntityDataBase.hpp>
#include <DUNE/Utils/ByteBuffer.hpp>
#include <DUNE/Tasks/Profiles.hpp>
#include <DUNE/IMC/Bus.hpp>
#include <DUNE/IMC/AddressResolver.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    struct DUNE_DLL_SYM Context;

    //! This structure serves the purpose of joining useful objects,
    //! usually shared by a large number of classes (namely Tasks).
    struct Context
    {
      Context(void);

      //! Configuration directives.
      Parsers::Config config;
      //! Message bus.
      IMC::Bus mbus;
      //! IMC address resolver.
      IMC::AddressResolver resolver;
      //! Label data base.
      Entities::EntityDataBase entities;
      //! Execution profiles.
      Profiles profiles;
      //! DUNE's directory.
      FileSystem::Path dir_app;
      //! Path to configuration directory.
      FileSystem::Path dir_cfg;
      //! Path to user configuration directory.
      FileSystem::Path dir_usr_cfg;
      //! Path to HTTP server directory.
      FileSystem::Path dir_www;
      //! Path to log directory.
      FileSystem::Path dir_log;
      //! Path to libraries directory.
      FileSystem::Path dir_lib;
      //! Path to firmware directory.
      FileSystem::Path dir_fmw;
      //! Path to internationalization directory.
      FileSystem::Path dir_i18n;
      //! Path to database directory.
      FileSystem::Path dir_db;
      //! Path to scripts directory.
      FileSystem::Path dir_scripts;
      //! UID of this instance.
      uint64_t uid;
    };
  }
}

#endif
