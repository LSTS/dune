//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Launcher.cpp 12667 2013-01-22 02:44:42Z rasm                     $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

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

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#  include <windows.h>
#endif

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
setLauncherSignalHandlers(void)
{
#if defined(DUNE_SYS_HAS_SIGACTION)
  struct sigaction actions;
  std::memset(&actions, 0, sizeof(actions));
  sigemptyset(&actions.sa_mask);
  actions.sa_flags = 0;
  actions.sa_handler = SIG_IGN;

  sigaction(SIGALRM, &actions, 0);
  sigaction(SIGHUP, &actions, 0);
  sigaction(SIGQUIT, &actions, 0);

  actions.sa_handler = handleTerminate;
  sigaction(SIGINT, &actions, 0);
  sigaction(SIGTERM, &actions, 0);
#endif
}

#if defined(DUNE_OS_POSIX)
int
waitForDaemon(pid_t pid)
{
  int stat = 0;

  while (1)
  {
    int rv = waitpid(pid, &stat, 0);

    if (rv != -1)
    {
      if (WIFSIGNALED(stat))
        return WTERMSIG(stat);
      return 0;
    }

    if (errno == EINTR)
      continue;

    if (errno == ECHILD)
      DUNE_ERR("Launcher", "daemon process no longer exists");
  }

  return 0;
}

#endif

int
main(int argc, char** argv)
{
  DUNE::Tasks::Context ctx;
  Path bin = ctx.dir_app / "dune";

#if defined(DUNE_OS_POSIX)
  setLauncherSignalHandlers();

  Counter<double> delta(c_restart_period);
  unsigned restarts = 0;

  while (!s_stop)
  {
    pid_t pid = fork();

    if (pid == 0)
    {
      char name[PATH_MAX] = {0};
      std::strcpy(name, bin.c_str());
      argv[0] = name;
      execv(argv[0], argv);
    }

    int rv = waitForDaemon(pid);
    if (rv == 0)
      break;

    if (rv == SIGABRT)
      DUNE_WRN("Launcher", "execution aborted");
    else
      DUNE_ERR("Launcher", "daemon crashed with signal " << rv);
    Delay::wait(2.0);
    ++restarts;

    if (restarts > c_max_restarts)
    {
      DUNE_ERR("Launcher", "too many crashes, DUNE needs to fixed!");
      return 1;
    }

    if (delta.overflow())
    {
      restarts = 0;
      delta.reset();
    }
  }
#endif

  return 0;
}
