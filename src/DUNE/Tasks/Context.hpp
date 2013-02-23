//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Context.hpp 12667 2013-01-22 02:44:42Z rasm                      $:*
//***************************************************************************

#ifndef DUNE_TASKS_CONTEXT_HPP_INCLUDED_
#define DUNE_TASKS_CONTEXT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>

// DUNE headers.
#include <DUNE/Parsers/Config.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Tasks/EntityDataBase.hpp>
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
      EntityDataBase entities;
      //! Execution profiles.
      Profiles profiles;
      //! DUNE's directory.
      FileSystem::Path dir_app;
      //! Path to configuration directory.
      FileSystem::Path dir_cfg;
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
      //! UID of this instance.
      uint64_t uid;
    };
  }
}

#endif
