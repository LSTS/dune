//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/System/Environment.hpp>
#include <DUNE/Tasks/Context.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Time/Clock.hpp>

namespace DUNE
{
  namespace Tasks
  {
    Context::Context(void)
    {
      using FileSystem::Path;

      // Get the base directory of the application.
      dir_app = Path(Path::applicationFile()).dirname();
      dir_lib = dir_app / ".." / Path("lib");
      dir_cfg = dir_app / ".." / Path("etc");
      dir_www = dir_app / ".." / Path("www");
      dir_fmw = dir_app / ".." / Path("firmware");
      dir_i18n = dir_app / ".." / Path("i18n");
      dir_db = dir_app / ".." / Path("db");
      dir_log = dir_app / ".." / Path("log");

#if defined(DUNE_OS_WINDOWS)
      std::string appdata;
      System::Environment::get("APPDATA", appdata);
      Path base = Path(appdata) / DUNE_SHORT_NAME;
      dir_db = base / "db";
      dir_log = base / "log";
#endif

      // Check if we are running from the development build.
      if (!dir_cfg.isDirectory() || !dir_www.isDirectory() || !dir_lib.isDirectory() || !dir_fmw.isDirectory())
      {
        dir_lib = dir_app;
        dir_cfg = Path(DUNE_PATH_SRC) / Path("etc");
        dir_www = Path(DUNE_PATH_SRC) / Path("www");
        dir_i18n = Path(DUNE_PATH_SRC) / Path("i18n");
        dir_fmw = Path(DUNE_PATH_SRC) / Path("firmware");
        dir_log = dir_app / Path("log");
        dir_db = dir_app / Path("db");
      }

      // Initialize UID (this should do...).
      uid = Time::Clock::getNsec();
    }
  }
}
