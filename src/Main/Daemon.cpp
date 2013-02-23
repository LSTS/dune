//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Daemon.cpp 12798 2013-01-30 03:59:36Z rasm                       $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <stdexcept>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <stack>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Memory.hpp"

// POSIX headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_SIGNAL_H)
#  include <signal.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_WAIT_H)
#  include <sys/wait.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_RESOURCE_H)
#  include <sys/resource.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

void
registerStaticTasks(void);

using DUNE_NAMESPACES;

static bool s_stop = false;
static const unsigned c_max_restarts = 5;
static const double c_restart_period = 30.0;

// POSIX implementation.
#if defined(DUNE_OS_POSIX)
extern "C" void
handleTerminate(int signo)
{
  switch (signo)
  {
    case SIGINT:
    case SIGTERM:
      s_stop = true;
      break;
  }
}

// Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
BOOL
handleTerminate(DWORD type)
{
  switch (type)
  {
    case CTRL_C_EVENT:
    case CTRL_CLOSE_EVENT:
    case WM_CLOSE:
      s_stop = true;
      return TRUE;
    default:
      return FALSE;
  }
}

#endif

void
setDaemonSignalHandlers(void)
{
  // POSIX implementation.
#if defined(DUNE_SYS_HAS_SIGACTION)

  // Install signal handlers.
  struct sigaction actions;

  std::memset(&actions, 0, sizeof(actions));
  sigemptyset(&actions.sa_mask);
  actions.sa_flags = 0;
  actions.sa_handler = handleTerminate;

  sigaction(SIGALRM, &actions, 0);
  sigaction(SIGHUP, &actions, 0);
  sigaction(SIGINT, &actions, 0);
  sigaction(SIGQUIT, &actions, 0);
  sigaction(SIGTERM, &actions, 0);
  sigaction(SIGCHLD, &actions, 0);
  sigaction(SIGCONT, &actions, 0);
  sigaction(SIGPIPE, &actions, 0);

  // Enable core dumps.
  struct rlimit rlim;
  rlim.rlim_cur = RLIM_INFINITY;
  rlim.rlim_max = RLIM_INFINITY;
  if (setrlimit(RLIMIT_CORE, &rlim) == -1)
    DUNE_WRN("Daemon", "core dumps will not be created");

  // Microsoft Windows implementation.
#elif defined(DUNE_OS_WINDOWS)
  SetConsoleCtrlHandler((PHANDLER_ROUTINE)handleTerminate, TRUE);

#endif
}

int
runDaemon(DUNE::Daemon& daemon)
{
  setDaemonSignalHandlers();

  bool call_abort = false;

  try
  {
    daemon.start();

    while (!s_stop)
    {
      if (!daemon.isRunning())
      {
        call_abort = true;
        break;
      }

      Delay::wait(1.0);
    }

    DUNE_WRN("Daemon", DTR("stopping tasks"));
    daemon.stopAndJoin();
  }
  catch (std::exception& e)
  {
    DUNE_ERR("Daemon", e.what());
    return 1;
  }
  catch (...)
  {
    DUNE_ERR("Daemon", DTR("unhandled exception"));
    return 1;
  }

  if (call_abort)
    std::abort();

  return 0;
}

int
main(int argc, char** argv)
{
  Tasks::Context context;
  I18N::setLanguage(context.dir_i18n);
  Scheduler::set(Scheduler::POLICY_RR);

  OptionParser options;
  options.executable("dune")
  .program(DUNE_SHORT_NAME)
  .copyright(DUNE_COPYRIGHT)
  .email(DUNE_CONTACT)
  .version(DUNE_COMPLETE_VERSION)
  .date(DUNE_BUILD_TIME)
  .arch(DUNE_SYSTEM_NAME)
  .add("-d", "--config-dir",
       "Configuration directory", "DIR")
  .add("-w", "--www-dir",
       "HTTP server base directory", "DIR")
  .add("-c", "--config-file",
       "Load configuration file CONFIG", "CONFIG")
  .add("-m", "--lock-memory",
       "Lock memory")
  .add("-p", "--profiles",
       "Execution Profiles", "PROFILES")
  .add("-V", "--vehicle",
       "Vehicle name override", "VEHICLE")
  .add("-X", "--dump-params-xml",
       "Dump parameters XML to folder DIR", "DIR");

  // Parse command line arguments.
  if (!options.parse(argc, argv))
  {
    if (options.bad())
      std::cerr << "ERROR: " << options.error() << std::endl;
    options.usage();
    return 1;
  }

  // If requested, lock memory.
  if (!options.value("--lock-memory").empty())
  {
#if defined(DUNE_USING_TLSF) && defined(DUNE_CLIB_GNU)
    Resources::lockMemory(c_memory, c_memory_size);
#else
    Resources::lockMemory();
#endif
  }

  // If requested, set alternate configuration directory.
  if (options.value("--config-dir") != "")
  {
    context.dir_cfg = options.value("--config-dir");
  }

  // If requested, set alternate HTTP server directory.
  if (options.value("--www-dir") != "")
  {
    context.dir_www = options.value("--www-dir");
  }

  DUNE::Tasks::Factory::registerDynamicTasks(context.dir_lib.c_str());
  registerStaticTasks();

  // Retrieve configuration file and try parsing it.
  if (options.value("--config-file") == "")
  {
    std::cerr << String::str(DTR("ERROR: no configuration file was given, "
                                 "see options --config-list and --config-file\n"))
              << std::endl;
    return 1;
  }

  Path cfg_file = context.dir_cfg / options.value("--config-file") + ".ini";
  try
  {
    context.config.parseFile(cfg_file.c_str());
  }
  catch (std::runtime_error& e)
  {
    std::cerr << String::str("ERROR: %s\n", e.what()) << std::endl;
    return 1;
  }

  if (!options.value("--vehicle").empty())
    context.config.set("General", "Vehicle", options.value("--vehicle"));

  DUNE::Daemon daemon(context, options.value("--profiles"));

  // Parameters XML.
  if (options.value("--dump-params-xml") != "")
  {
    std::string lang = I18N::getLanguage();
    std::string file = String::str("%s.%s.xml", daemon.getSystemName(), lang.c_str());
    Path path = Path(options.value("--dump-params-xml")) / file;
    std::ofstream ofs(path.c_str());
    if (!ofs.is_open())
    {
      std::cerr << "ERROR: failed to create file '" << path << "'" << std::endl;
      return 1;
    }

    daemon.writeParamsXML(ofs);
    return 0;
  }

  return runDaemon(daemon);
}
