//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Resources.cpp 12667 2013-01-22 02:44:42Z rasm                    $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <limits>
#include <fstream>
#include <cerrno>
#include <cstring>

// DUNE headers.
#include <DUNE/System/Resources.hpp>
#include <DUNE/Time/Constants.hpp>
#include <DUNE/System/Error.hpp>

// Platform headers.
#if defined(DUNE_SYS_HAS_SYS_TYPES_H)
#  include <sys/types.h>
#endif

#if defined(DUNE_SYS_HAS_UNISTD_H)
#  include <unistd.h>
#endif

#if defined(DUNE_SYS_HAS_FCNTL_H)
#  include <fcntl.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_TIME_H)
#  include <sys/time.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_RESOURCE_H)
#  include <sys/resource.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_PROCFS_H)
#  include <sys/procfs.h>
#endif

#if defined(DUNE_SYS_HAS_DEVCTL_H)
#  include <devctl.h>
#endif

#if defined(DUNE_SYS_HAS_SYS_MMAN_H)
#  include <sys/mman.h>
#endif

#if defined(DUNE_OS_RTEMS)
extern "C" int
getrusage(int who, struct rusage* r_usage);
#endif

namespace DUNE
{
  namespace System
  {
#if defined(DUNE_OS_LINUX)
    //! Number of useful fields in /proc/stat.
    static const unsigned c_proc_stat_values = 8;
    //! Number of fields to discard /proc/stat
    static const unsigned c_proc_stat_skips = 1;
    //! Number of useful fields in /proc/self/stat.
    static const unsigned c_proc_self_stat_values = 2;
    //! Number of fields to discard /proc/self/stat
    static const unsigned c_proc_self_stat_skips = 13;
#endif

    Resources::Resources(void):
      m_last_proc_time(0),
      m_last_global_time(0)
    {
      // Force update of m_last_proc_time and m_last_global_time
      // variables.
      getProcessorUsage();
    }

    int
    Resources::getProcessorUsage(void)
    {
      uint64_t global_time = 0;
      uint64_t global_delta = 0;
      uint64_t proc_time = 0;
      uint64_t proc_delta = 0;

      // Linux v2.6 implementation.
#if defined(DUNE_OS_LINUX)
      // Scratch variable.
      uint64_t tmp;

      // Retrieve global CPU delta.
      {
        std::ifstream ifs("/proc/stat");
        for (unsigned i = 0; i < c_proc_stat_skips; ++i)
          ifs.ignore(std::numeric_limits<std::streamsize>::max(), ' ');

        for (unsigned i = 0; i < c_proc_stat_values; ++i)
        {
          ifs >> tmp;
          global_time = global_time + tmp;
        }
      }

      // Retrieve process's CPU time.
      {
        std::ifstream ifs("/proc/self/stat");
        for (unsigned i = 0; i < c_proc_self_stat_skips; ++i)
          ifs.ignore(std::numeric_limits<std::streamsize>::max(), ' ');

        for (unsigned i = 0; i < c_proc_self_stat_values; ++i)
        {
          ifs >> tmp;
          proc_time = proc_time + tmp;
        }
      }

      // QNX v6.x implementation.
#elif defined(DUNE_OS_QNX6)
      procfs_info info;
      int fd = open("/proc/self/as", O_RDONLY);
      devctl(fd, DCMD_PROC_INFO, &info, sizeof(info), 0);
      close(fd);

      timespec ts;
      clock_gettime(CLOCK_REALTIME, &ts);
      global_time = (uint64_t)ts.tv_sec * Time::c_nsec_per_sec + (uint64_t)ts.tv_nsec;
      proc_time = info.utime + info.stime;

      // POSIX implementation.
#elif defined(DUNE_OS_POSIX)
      struct rusage ru;
      getrusage(RUSAGE_SELF, &ru);

      timeval tv;
      gettimeofday(&tv, 0);
      global_time = (uint64_t)tv.tv_sec * Time::c_usec_per_sec + (uint64_t)tv.tv_usec;
      proc_time = (uint64_t)(ru.ru_utime.tv_sec + ru.ru_stime.tv_sec) * Time::c_usec_per_sec
                  + (ru.ru_utime.tv_usec + ru.ru_stime.tv_usec);

#else
      return -1;
#endif

      // Update global delta.
      global_delta = global_time - m_last_global_time;
      m_last_global_time = global_time;

      // Update process delta.
      proc_delta = proc_time - m_last_proc_time;
      m_last_proc_time = proc_time;

      if (global_delta == 0)
        return -1;

      return proc_delta * 100 / global_delta;
    }

    void
    Resources::lockMemory(void)
    {
#if defined(DUNE_SYS_HAS_SYS_MMAN_H)
      mlockall(MCL_CURRENT | MCL_FUTURE);
#endif
    }

    void
    Resources::unlockMemory(void)
    {
#if defined(DUNE_SYS_HAS_SYS_MMAN_H)
      munlockall();
#endif
    }

    void
    Resources::lockMemory(void* addr, size_t length)
    {
#if defined(DUNE_SYS_HAS_SYS_MMAN_H)
      int rv = mlock((char*)addr, length);
      if (rv == 0)
        return;

      throw Error(errno, "failed to lock memory area");
#else
      (void)addr;
      (void)length;
#endif
    }

    void
    Resources::unlockMemory(const void* addr, size_t length)
    {
#if defined(DUNE_SYS_HAS_SYS_MMAN_H)
      int rv = munlock((char*)addr, length);
      if (rv == 0)
        return;

      throw Error(errno, "failed to unlock memory area");
#else
      (void)addr;
      (void)length;
#endif
    }
  }
}
