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
#if defined(DUNE_SYS_HAS_MLOCKALL)
      mlockall(MCL_CURRENT | MCL_FUTURE);
#endif
    }

    void
    Resources::unlockMemory(void)
    {
#if defined(DUNE_SYS_HAS_MUNLOCKALL)
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
