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
      dir_usr_cfg = dir_app / ".." / Path("user") / Path("etc");
      dir_www = dir_app / ".." / Path("www");
      dir_fmw = dir_app / ".." / Path("firmware");
      dir_i18n = dir_app / ".." / Path("i18n");
      dir_db = dir_app / ".." / Path("db");
      dir_log = dir_app / ".." / Path("log");
      dir_scripts = dir_app / ".." / Path("scripts");

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
        dir_usr_cfg = Path(DUNE_PATH_SRC) / Path("user") / Path("etc");
        dir_www = Path(DUNE_PATH_SRC) / Path("www");
        dir_i18n = Path(DUNE_PATH_BUILD) / Path("DUNEGeneratedFiles") / Path("i18n");
        dir_fmw = Path(DUNE_PATH_SRC) / Path("firmware");
        dir_log = dir_app / Path("log");
        dir_db = dir_app / Path("db");
        dir_scripts = Path(DUNE_PATH_SRC) / Path("programs") / Path("scripts");
      }

      // Initialize UID (this should do...).
      uid = Time::Clock::getNsec();
    }
  }
}
