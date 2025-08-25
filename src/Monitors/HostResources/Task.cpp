//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Gonçalves                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <array>
#include <cstring>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
#include <iterator>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#include <unistd.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#include <windows.h>
#include <psapi.h>
#endif

#define IMC_RAM_USAGE_MESSAGE_EXISTS  (true)

namespace Monitors
{
  namespace HostResources
  {
    using DUNE_NAMESPACES;

    static const float c_time_between_ram_reads = 10.0f;
    static const float c_time_between_ram_cache_clean = 3600.0f; // 1 hour
    static const float c_time_between_cpu_reads = 2.0f;
    static const int c_max_cpu = 32;

    typedef struct CPUData
    {
      std::string cpu;
      size_t times[c_max_cpu + 6];
    } CPUData;

    enum CPUStates
    {
      S_USER = 0,
      S_NICE,
      S_SYSTEM,
      S_IDLE,
      S_IOWAIT,
      S_IRQ,
      S_SOFTIRQ,
      S_STEAL,
      S_GUEST,
      S_GUEST_NICE
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! CpuUsage message
      IMC::CpuUsage m_dune_cpu_usage[c_max_cpu + 1];
#if IMC_RAM_USAGE_MESSAGE_EXISTS
      //! RamUsage message
      IMC::RamUsage m_dune_ram_usage[2];
#endif
      //! state time to check usage of dune
      Time::Counter<float> m_ram_check;
      //! state time to clean cache
      Time::Counter<float> m_ram_cache_clean;
      //! Read timestamp.
      double m_tstamp;
      //! state time to check usage of cpus
      Time::Counter<float> m_cpu_check;
      //! Number of CPUs
      int m_num_cpus;
      //! Buffer for entity state
      std::string m_buffer_cpu_entity;
      //! Save pid of the process
#if defined(DUNE_OS_LINUX)
      pid_t m_pid;
#elif defined(DUNE_OS_WINDOWS)
      DWORD m_pid;
#endif
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_tstamp(0)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        m_num_cpus = sysconf(_SC_NPROCESSORS_ONLN);
        if (m_num_cpus <= 0 || m_num_cpus > c_max_cpu)
        {
          war("Invalid number of CPUs detected: %d. Using 1 CPU instead.", m_num_cpus);
          m_num_cpus = 1;
        }
      }

      void
      onDeactivation(void) override
      {
        Tasks::Task::onDeactivation();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        for(uint8_t i = 1 ; i <= m_num_cpus; i++)
        {
          std::string cpu_label = String::str("CPU%u", i);
          m_dune_cpu_usage[i - 1].setSourceEntity(getEid(cpu_label.c_str()));
        }
        m_dune_cpu_usage[m_num_cpus].setSourceEntity(getEid("DUNE-CPU"));
#if IMC_RAM_USAGE_MESSAGE_EXISTS
        m_dune_ram_usage[0].setSourceEntity(getEid("DUNE-RAM"));
        m_dune_ram_usage[1].setSourceEntity(getEid("DUNE-SWAP"));
#endif
      }

      unsigned
      getEid(std::string label)
      {
        unsigned eid = 0;
        try
        {
          eid = resolveEntity(label);
        }
        catch (Entities::EntityDataBase::NonexistentLabel& e)
        {
          (void)e;
          eid = reserveEntity(label);
        }

        return eid;
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_buffer_cpu_entity = "active | Cores Detected: " + std::to_string(m_num_cpus);
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
        m_ram_check.setTop(c_time_between_ram_reads);
        m_ram_cache_clean.setTop(c_time_between_ram_cache_clean);
        cleanRamCache();
#if defined(DUNE_OS_LINUX)
        m_pid = getpid();
#elif defined(DUNE_OS_WINDOWS)
        m_pid = GetCurrentProcessId();
#endif
        trace("PID: %d", m_pid);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      double
      getDUNECPUUsage(void)
      {
#if defined(DUNE_OS_LINUX)
        std::ifstream stat_file("/proc/self/stat");
        if (!stat_file)
          return 0.0;

        std::string line;
        std::getline(stat_file, line);
        std::istringstream iss(line);
        std::vector<std::string> tokens{std::istream_iterator<std::string>{iss},
                                        std::istream_iterator<std::string>{}};
        if (tokens.size() < 15)
          return 0.0;

        uint64_t total_time = 0;
        try {
          total_time = std::stoull(tokens[13]) + std::stoull(tokens[14]);
        } catch (...) {
          return 0.0;
        }

        std::ifstream uptime_file("/proc/uptime");
        if (!uptime_file)
          return 0.0;

        double uptime;
        uptime_file >> uptime;
        static uint64_t last_total = 0;
        static double last_uptime = 0.0;
        double delta_time = uptime - last_uptime;
        if (delta_time <= 0.0)
          return 0.0;

        double percent = (total_time - last_total) / delta_time / sysconf(_SC_CLK_TCK) * 100.0;
        last_total = total_time;
        last_uptime = uptime;

  #if (DUNE_LEGACY)
        if (percent < 0.0)
          return 0.0;
        if (percent > 100.0)
          return 100.0;
        return percent;
  #else
        return std::clamp(percent, 0.0, 100.0);
  #endif
#elif defined(DUNE_OS_WINDOWS)
        static ULARGE_INTEGER last_cpu_time, last_sys_time;
        FILETIME ft_proc_creation, ft_proc_exit, ft_proc_kernel, ft_proc_user;
        FILETIME ft_sys_idle, ft_sys_kernel, ft_sys_user;

        GetSystemTimes(&ft_sys_idle, &ft_sys_kernel, &ft_sys_user);
        GetProcessTimes(GetCurrentProcess(), &ft_proc_creation, &ft_proc_exit,
                        &ft_proc_kernel, &ft_proc_user);

        ULARGE_INTEGER cpu_time, sys_time;
        cpu_time.LowPart = ft_proc_kernel.dwLowDateTime + ft_proc_user.dwLowDateTime;
        cpu_time.HighPart = ft_proc_kernel.dwHighDateTime + ft_proc_user.dwHighDateTime;
        sys_time.LowPart = ft_sys_kernel.dwLowDateTime + ft_sys_user.dwLowDateTime;
        sys_time.HighPart = ft_sys_kernel.dwHighDateTime + ft_sys_user.dwHighDateTime;

        static double last_percent = 0.0;
        if (last_cpu_time.QuadPart != 0 && last_sys_time.QuadPart != 0)
        {
          uint64_t cpu_diff = cpu_time.QuadPart - last_cpu_time.QuadPart;
          uint64_t sys_diff = sys_time.QuadPart - last_sys_time.QuadPart;
          if (sys_diff > 0)
            last_percent = (cpu_diff * 100.0) / sys_diff;
        }
        last_cpu_time = cpu_time;
        last_sys_time = sys_time;
        // Ensure percent is between 0 and 100
        if (last_percent < 0.0)
          last_percent = 0.0;
        else if (last_percent > 100.0)
          last_percent = 100.0;

        return last_percent;
#else
        return 0.0;
#endif
      }

      double
      getDUNERAMUsage(void)
      {
#if defined(DUNE_OS_LINUX)
        std::ifstream status_file("/proc/self/status");
        std::string line;
        while (std::getline(status_file, line))
        {
          if (line.find("VmRSS:") == 0)
          {
            double rst = std::stod(line.substr(6)) / 1024.0; // kB -> MB
            if (rst < 0)
              rst = 0;

            return rst;
          }
        }
        return 0;
#elif defined(DUNE_OS_WINDOWS)
        PROCESS_MEMORY_COUNTERS pmc;
        double ram_usage = GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc)) ?
               pmc.WorkingSetSize / (1024.0 * 1024.0) : 0; // Bytes -> MB
        if (ram_usage < 0)
          ram_usage = 0;

        return ram_usage;
#endif
      }

      double
      getDUNESwapUsage(void)
      {
#if defined(DUNE_OS_LINUX)
        std::ifstream status_file("/proc/self/status");
        std::string line;
        while (std::getline(status_file, line))
        {
          if (line.find("VmSwap:") == 0)
          {
            double value = std::stod(line.substr(7)) / 1024.0; // kB -> MB
            if (value < 0)
              value = 0;

            return value;
          }
        }
        return 0;
#elif defined(DUNE_OS_WINDOWS)
        PROCESS_MEMORY_COUNTERS pmc;
        double swap_usage = GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc)) ?
               pmc.PagefileUsage / (1024.0 * 1024.0) : 1; // Bytes -> MB
        if (swap_usage < 0)
          swap_usage = 0;

        return swap_usage;
#endif
      }

      void
      cleanRamCache(void)
      {
        inf("Cleaning RAM cache...");
#if defined(DUNE_OS_LINUX)
        int ret = std::system("sync; echo 1 > /proc/sys/vm/drop_caches");
        if (ret != 0)
          war("RAM cache clean command failed with code %d", ret);
#elif defined(DUNE_OS_WINDOWS)
        std::system("powershell.exe -Command \"Clear-DnsClientCache\"");
#endif
      }

      std::string
      getMemoryUsage()
      {
        long memTotal = -1, memFree = -1, swapTotal = -1, swapFree = -1;
        std::ifstream meminfo("/proc/meminfo");
        if (!meminfo)
        {
          return "";
        }
        std::string line, key, unit;
        long value;
        while (std::getline(meminfo, line))
        {
          std::istringstream  iss(line);
          iss >> key >> value >> unit;
          //check if the value is a number
          if (unit != "kB" || value < 0)
          {
            continue; // skip lines that do not have kB or have negative values
          }

          if (key == "MemTotal:")
            memTotal = value;
          else if (key == "MemFree:")
            memFree = value;
          else if (key == "SwapTotal:")
            swapTotal = value;
          else if (key == "SwapFree:")
            swapFree = value;
        }

        meminfo.close();
        // check if we have valid values
        if (memTotal <= 0 || memFree < 0 || swapTotal < 0 || swapFree < 0)
        {
          return "unknown, failed to read memory info";
        }
        else
        {
          double memSpentGB = (memTotal - memFree) / 1024.0 / 1024.0;
          double memTotalGB = memTotal / 1024.0 / 1024.0;
          double swapSpentGB = (swapTotal - swapFree) / 1024.0 / 1024.0;
          double swapTotalGB = swapTotal / 1024.0 / 1024.0;
          int memAvailablePercent = static_cast<int>(100 * memFree / static_cast<double>(memTotal));
          int swapAvailablePercent = swapTotal > 0 ? static_cast<int>(100 * swapFree / static_cast<double>(swapTotal)) : 0;

          std::ostringstream oss;
          oss << "MF:" << memAvailablePercent << "% (" << std::fixed << std::setprecision(1) << memSpentGB
              << "GB of " << memTotalGB << "GB) | SF:" << swapAvailablePercent << "% (" << swapSpentGB
              << "GB of " << swapTotalGB << "GB)";

          return oss.str();
        }
      }

      void
      readStatsCPU(std::vector<CPUData> &entries)
      {
        std::ifstream fileStat("/proc/stat");
        std::string line;
        while (std::getline(fileStat, line))
        {
          if (line.compare(0, 3, "cpu") != 0)
            continue;

          std::istringstream ss(line);
          entries.emplace_back(CPUData());
          CPUData& entry = entries.back();
          ss >> entry.cpu;
          if (entry.cpu.size() > 3)
            entry.cpu.erase(0, 3);
          else
            entry.cpu = "tot";

          for (int i = 0; i < S_GUEST_NICE; ++i)
          {
            if (!(ss >> entry.times[i]))
            {
              war("Failed to read CPU stat for core %d", i);
              break;
            }
          }
        }
      }

      size_t
      getActiveTime(const CPUData &e)
      {
        return e.times[S_USER] +
               e.times[S_NICE] +
               e.times[S_SYSTEM] +
               e.times[S_IRQ] +
               e.times[S_SOFTIRQ] +
               e.times[S_STEAL] +
               e.times[S_GUEST] +
               e.times[S_GUEST_NICE];
      }

      size_t
      getIdleTime(const CPUData &e)
      {
        return e.times[S_IDLE] + e.times[S_IOWAIT];
      }

      void
      dispatchStatus(const std::vector<CPUData> &entries1, const std::vector<CPUData> &entries2)
      {
        const size_t NUM_ENTRIES = entries1.size();
        std::vector<uint8_t> cpu_usage(m_num_cpus);
        for (size_t i = 1; i < NUM_ENTRIES; ++i)
        {
          const CPUData &e1 = entries1[i];
          const CPUData &e2 = entries2[i];
          const float ACTIVE_TIME = static_cast<float>(getActiveTime(e2) - getActiveTime(e1));
          const float IDLE_TIME = static_cast<float>(getIdleTime(e2) - getIdleTime(e1));
          const float TOTAL_TIME = ACTIVE_TIME + IDLE_TIME;
          cpu_usage[i-1] = (100.f * ACTIVE_TIME / TOTAL_TIME);
        }
        for(uint8_t id = 0; id < m_num_cpus; id++)
        {
          m_dune_cpu_usage[id].setTimeStamp(m_tstamp);
          m_dune_cpu_usage[id].value = cpu_usage[id];
          debug("CPU%u: %d%%", id + 1, cpu_usage[id]);
          dispatch(m_dune_cpu_usage[id], DF_KEEP_TIME | DF_LOOP_BACK);
        }
      }

      double
      getSingleCoreUsage(void)
      {
        char buffer[128] = {0};
        FILE* fp = popen("grep 'cpu ' /proc/stat", "r");
        if (!fp || !fgets(buffer, sizeof(buffer) - 1, fp))
        {
          if (fp) pclose(fp);
          return 0.0;
        }

        unsigned long long user1 = 0, nice1 = 0, system1 = 0, idle1 = 0;
        if (sscanf(buffer, "cpu %llu %llu %llu %llu", &user1, &nice1, &system1, &idle1) != 4)
        {
          pclose(fp);
          return 0.0;
        }
        pclose(fp);
        Delay::waitMsec(1000);

        fp = popen("grep 'cpu ' /proc/stat", "r");
        if (!fp || !fgets(buffer, sizeof(buffer) - 1, fp))
        {
          if (fp) pclose(fp);
          return 0.0;
        }

        unsigned long long user2 = 0, nice2 = 0, system2 = 0, idle2 = 0;
        if (sscanf(buffer, "cpu %llu %llu %llu %llu", &user2, &nice2, &system2, &idle2) != 4)
        {
          pclose(fp);
          return 0.0;
        }
        pclose(fp);

        unsigned long long total1 = user1 + nice1 + system1 + idle1;
        unsigned long long total2 = user2 + nice2 + system2 + idle2;
        unsigned long long delta_total = total2 > total1 ? total2 - total1 : 1;
        unsigned long long delta_idle = idle2 > idle1 ? idle2 - idle1 : 0;

        double usage = 100.0 * (delta_total - delta_idle) / delta_total;

#if (DUNE_LEGACY)
        if (usage < 0.0)
          return 0.0;
        if (usage > 100.0)
          return 100.0;
        return usage;
#else
        return std::clamp(usage, 0.0, 100.0);
#endif
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01);

          if (!isActive())
            continue;

          if (m_ram_check.overflow())
          {
            m_ram_check.reset();
            m_tstamp = Clock::get();
            uint8_t cpu = 0;
            try
            {
              cpu = (uint8_t)getDUNECPUUsage();
              if(m_num_cpus > 1 && cpu > 0)
                cpu /= m_num_cpus;
            }
            catch (std::exception& e)
            {
              war("Failed to get CPU usage: %s", e.what());
              cpu = 0;
            }
            catch (...)
            {
              war("Failed to get CPU usage: unknown error");
              cpu = 0;
            }

            double ram = 0.0;
            try
            {
              ram = getDUNERAMUsage();
            }
            catch (std::exception& e)
            {
              war("Failed to get RAM usage: %s", e.what());
              ram = 0;
            }
            catch (...)
            {
              war("Failed to get RAM usage: unknown error");
              ram = 0;
            }

            double swap = 0.0;
            try
            {
              swap = getDUNESwapUsage();
            }
            catch (std::exception& e)
            {
              war("Failed to get Swap usage: %s", e.what());
              swap = 0;
            }
            catch (...)
            {
              war("Failed to get Swap usage: unknown error");
              swap = 0;
            }

            //dispatch CPU and RAM usage
            try{
              m_dune_cpu_usage[m_num_cpus].value = cpu;
              m_dune_cpu_usage[m_num_cpus].setTimeStamp(m_tstamp);
              dispatch(m_dune_cpu_usage[m_num_cpus]);
            }
            catch (std::exception& e)
            {
              war("Failed to dispatch CPU usage: %s", e.what());
            }
            catch (...)
            {
              war("Failed to dispatch CPU usage: unknown error");
            }
#if IMC_RAM_USAGE_MESSAGE_EXISTS
            try{
              m_dune_ram_usage[0].value = ram * 1024.0f; // KB -> MB
              m_dune_ram_usage[0].setTimeStamp(m_tstamp);
              dispatch(m_dune_ram_usage[0]);
              m_dune_ram_usage[1].value = swap * 1024.0f; // KB -> MB
              m_dune_ram_usage[1].setTimeStamp(m_tstamp);
              dispatch(m_dune_ram_usage[1]);
            }
            catch (std::exception& e)
            {
              war("Failed to dispatch RAM usage: %s", e.what());
            }
            catch (...)
            {
              war("Failed to dispatch RAM usage: unknown error");
            }
#endif
            try{
              //check if m_buffer_cpu_entity is empty
              const char* entity = m_buffer_cpu_entity.empty() ? "unknown" : m_buffer_cpu_entity.c_str();
              //set entity state with CPU, RAM and Swap usage
              trace("DUNE Process: CPU: %d%%, RAM: %.1fMB, Swap: %.1fMB | %s", cpu, ram, swap, entity);
              std::string msg = String::str("%s | DUNE (C:%d%%, R:%.1fMB, S:%.1fMB)", entity, cpu, ram, swap);
              setEntityState(IMC::EntityState::ESTA_NORMAL, msg);
            }
            catch (std::exception& e)
            {
              war("Failed to set entity state: %s", e.what());
            }
            catch (...)
            {
              war("Failed to set entity state: unknown error");
            }
          }
          else if (m_cpu_check.overflow())
          {
            m_cpu_check.reset();
            m_tstamp = Clock::getSinceEpoch();
            if(m_num_cpus > 1)
            {
              try
              {
                std::vector<CPUData> entries1;
                std::vector<CPUData> entries2;
                readStatsCPU(entries1);
                Delay::waitMsec(100);
                readStatsCPU(entries2);
                dispatchStatus(entries1, entries2);
              }
              catch (std::exception& e)
              {
                war("Failed to read CPU stats: %s", e.what());
              }
              catch (...)
              {
                war("Failed to read CPU stats: unknown error");
              }
            }
            else
            {
              try
              {
                m_dune_cpu_usage[0].setTimeStamp(m_tstamp);
                uint8_t usage = (uint8_t) getSingleCoreUsage();
                m_dune_cpu_usage[0].value = usage;
                debug("CPU0: %d%%", usage);
                dispatch(m_dune_cpu_usage[0], DF_KEEP_TIME | DF_LOOP_BACK);
              }
              catch (std::exception& e)
              {
                war("Failed to read Single CPU usage: %s", e.what());
              }
              catch (...)
              {
                war("Failed to read Single CPU usage: unknown error");
              }
            }
            std::string memory_text = "unknown";
            try
            {
              memory_text = getMemoryUsage();
            }
            catch (std::exception& e)
            {
              war("Failed to get memory usage: %s", e.what());
              memory_text = "unknown";
            }
            catch (...)
            {
              war("Failed to get memory usage: unknown error");
              memory_text = "unknown";
            }
            m_buffer_cpu_entity = String::str("active | C:%d | %s", m_num_cpus, memory_text.c_str());
          }
          else if (m_ram_cache_clean.overflow())
          {
            m_ram_cache_clean.reset();
            try
            {
              cleanRamCache();
            }
            catch (std::exception& e)
            {
              war("Failed to clean RAM cache: %s", e.what());
            }
            catch (...)
            {
              war("Failed to clean RAM cache: unknown error");
            }
          }
        }
      }
    };
  }
}

DUNE_TASK