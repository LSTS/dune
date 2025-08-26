//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
// Author: Pedro Gonçalves (adapted for Linux-only, safe version)            *
//***************************************************************************
//
// This version now reads:
// - CPU usage (system-wide average)
// - RAM and SWAP usage for this process (VmRSS and VmSwap)
// - Total and free RAM and SWAP for the system (/proc/meminfo)
//***************************************************************************

#include <array>
#include <chrono>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include <iterator>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <thread>
#include <unistd.h>
#include <vector>

#include <DUNE/DUNE.hpp>

#define IMC_RAM_USAGE_MESSAGE_EXISTS (true)

namespace Monitors
{
  namespace HostResources
  {
    using DUNE_NAMESPACES;

    static const float c_time_between_ram_reads = 10.0f;
    static const float c_time_between_ram_cache_clean = 3600.0f;  // 1 hour
    static const float c_time_between_cpu_reads = 2.0f;
    static const int c_max_cpu = 32;

    struct CpuTimes
    {
      unsigned long long user = 0;
      unsigned long long nice = 0;
      unsigned long long system = 0;
      unsigned long long idle = 0;
      unsigned long long iowait = 0;
      unsigned long long irq = 0;
      unsigned long long softirq = 0;
      unsigned long long steal = 0;

      unsigned long long
      total() const
      {
        return user + nice + system + idle + iowait + irq + softirq + steal;
      }

      unsigned long long
      active() const
      {
        return total() - idle - iowait;
      }
    };

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
      pid_t m_pid;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_tstamp(0)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL, Tasks::Parameter::VISIBILITY_USER);
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

      void
      onEntityReservation(void)
      {
        for (uint8_t i = 1; i <= m_num_cpus; i++)
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
        catch (...)
        {
          eid = reserveEntity(label);
        }
        return eid;
      }

      void
      onResourceAcquisition(void)
      {
        m_buffer_cpu_entity = "active | C:" + std::to_string(m_num_cpus);
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
        m_ram_check.setTop(c_time_between_ram_reads);
        m_ram_cache_clean.setTop(c_time_between_ram_cache_clean);
        m_cpu_check.setTop(c_time_between_cpu_reads);
        m_pid = getpid();
        trace("PID: %d", m_pid);
      }

      void
      onResourceRelease(void)
      { }

      // Reads CPU usage (system-wide), RAM/SWAP usage for this process, and total/free system memory
      void
      readCPUAndMemory(uint8_t& cpuUsage, double& procRam, double& procSwap, double& totalRam,
                       double& freeRam, double& totalSwap, double& freeSwap)
      {
        cpuUsage = 0;
        procRam = 0.0;
        procSwap = 0.0;
        totalRam = 0.0;
        freeRam = 0.0;
        totalSwap = 0.0;
        freeSwap = 0.0;

        // CPU usage (system-wide average)
        try
        {
          unsigned long long user1 = 0, nice1 = 0, system1 = 0, idle1 = 0;
          {
            std::ifstream statFile("/proc/stat");
            std::string line;
            std::getline(statFile, line);
            std::istringstream ss(line);
            std::string cpuLabel;
            ss >> cpuLabel >> user1 >> nice1 >> system1 >> idle1;
          }
          std::this_thread::sleep_for(std::chrono::milliseconds(200));
          unsigned long long user2 = 0, nice2 = 0, system2 = 0, idle2 = 0;
          {
            std::ifstream statFile("/proc/stat");
            std::string line;
            std::getline(statFile, line);
            std::istringstream ss(line);
            std::string cpuLabel;
            ss >> cpuLabel >> user2 >> nice2 >> system2 >> idle2;
          }
          unsigned long long total1 = user1 + nice1 + system1 + idle1;
          unsigned long long total2 = user2 + nice2 + system2 + idle2;
          unsigned long long deltaTotal = total2 > total1 ? total2 - total1 : 0ULL;
          unsigned long long deltaIdle = idle2 > idle1 ? idle2 - idle1 : 0ULL;
          if (deltaTotal > 0)
          {
            double usage = 100.0 * (static_cast<double>(deltaTotal - deltaIdle) / deltaTotal);
            if (usage < 0.0)
              usage = 0.0;
            if (usage > 100.0)
              usage = 100.0;
            cpuUsage = static_cast<uint8_t>(std::lround(usage));
            if (m_num_cpus > 1 && cpuUsage > 0)
              cpuUsage /= m_num_cpus;
          }
        }
        catch (...)
        {
          war("CPU read failed");
          cpuUsage = 0;
        }

        // RAM and SWAP usage for this process
        try
        {
          std::ifstream statusFile("/proc/self/status");
          std::string line;
          while (std::getline(statusFile, line))
          {
            if (line.rfind("VmRSS:", 0) == 0)
            {
              std::istringstream iss(line.substr(6));
              double value;
              std::string unit;
              iss >> value >> unit;
              procRam = value / 1024.0;  // kB to MB
            }
            else if (line.rfind("VmSwap:", 0) == 0)
            {
              std::istringstream iss(line.substr(7));
              double value;
              std::string unit;
              iss >> value >> unit;
              procSwap = value / 1024.0;  // kB to MB
            }
          }
        }
        catch (...)
        {
          war("Process memory read failed");
          procRam = 0.0;
          procSwap = 0.0;
        }

        // Total and free RAM/SWAP for the system
        try
        {
          std::ifstream meminfo("/proc/meminfo");
          std::string line;
          long memTotal = -1, memFree = -1, swapTotal = -1, swapFree = -1;
          while (std::getline(meminfo, line))
          {
            std::istringstream iss(line);
            std::string key;
            long value;
            std::string unit;
            iss >> key >> value >> unit;
            if (!iss || unit != "kB")
              continue;
            if (key == "MemTotal:")
              memTotal = value;
            else if (key == "MemFree:")
              memFree = value;
            else if (key == "SwapTotal:")
              swapTotal = value;
            else if (key == "SwapFree:")
              swapFree = value;
          }
          if (memTotal > 0)
            totalRam = memTotal / 1024.0 / 1024.0;  // GB
          if (memFree >= 0)
            freeRam = memFree / 1024.0 / 1024.0;  // GB
          if (swapTotal > 0)
            totalSwap = swapTotal / 1024.0 / 1024.0;  // GB
          if (swapFree >= 0)
            freeSwap = swapFree / 1024.0 / 1024.0;  // GB
        }
        catch (...)
        {
          war("System memory read failed");
          totalRam = 0.0;
          freeRam = 0.0;
          totalSwap = 0.0;
          freeSwap = 0.0;
        }
      }

      double
      calculateUsage(const CpuTimes& prev, const CpuTimes& curr)
      {
        unsigned long long activeDiff = curr.active() - prev.active();
        unsigned long long totalDiff = curr.total() - prev.total();
        if (totalDiff == 0)
          return 0.0;
        return 100.0 * activeDiff / totalDiff;
      }

      std::vector<CpuTimes>
      readCpuTimes()
      {
        std::ifstream file("/proc/stat");
        std::string line;
        std::vector<CpuTimes> cpus;

        while (std::getline(file, line))
        {
          if (line.substr(0, 3) != "cpu")
            break;

          std::istringstream ss(line);
          std::string cpuLabel;
          CpuTimes times;

          ss >> cpuLabel >> times.user >> times.nice >> times.system >> times.idle >> times.iowait
            >> times.irq >> times.softirq >> times.steal;

          cpus.push_back(times);
        }
        return cpus;
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          try
          {
            waitForMessages(0.01);
          }
          catch (...)
          {
            war("waitForMessages error");
          }
          if (!isActive())
            continue;

          if (m_ram_check.overflow())
          {
            m_ram_check.reset();
            m_tstamp = Clock::get();
            uint8_t cpuUsage;
            double procRam;
            double procSwap;
            double totalRam;
            double freeRam;
            double totalSwap;
            double freeSwap;
            readCPUAndMemory(cpuUsage, procRam, procSwap, totalRam, freeRam, totalSwap, freeSwap);

            try
            {
              m_dune_cpu_usage[m_num_cpus].value = cpuUsage;
              m_dune_cpu_usage[m_num_cpus].setTimeStamp(m_tstamp);
              dispatch(m_dune_cpu_usage[m_num_cpus]);
            }
            catch (...)
            {
              war("Failed to dispatch CPU usage");
            }

#if IMC_RAM_USAGE_MESSAGE_EXISTS
            try
            {
              m_dune_ram_usage[0].value = static_cast<float>(procRam * 1024.0f);
              m_dune_ram_usage[0].setTimeStamp(m_tstamp);
              dispatch(m_dune_ram_usage[0]);
              m_dune_ram_usage[1].value = static_cast<float>(procSwap * 1024.0f);
              m_dune_ram_usage[1].setTimeStamp(m_tstamp);
              dispatch(m_dune_ram_usage[1]);
            }
            catch (...)
            {
              war("Failed to dispatch RAM/SWAP usage");
            }
#endif

            try
            {
              std::string entity = m_buffer_cpu_entity.empty() ? "unknown" : m_buffer_cpu_entity;
              std::string msg =
                String::str("%s | DC:%u%%, DR:%.1fMB, DS:%.1fMB | HRF:%.1f of %.1f(GB),"
                            " HSF:%.1f of %.1f(GB)",
                            entity.c_str(), static_cast<unsigned>(cpuUsage), procRam, procSwap,
                            freeRam, totalRam, freeSwap, totalSwap);
              setEntityState(IMC::EntityState::ESTA_NORMAL, msg);
            }
            catch (...)
            {
              war("Failed to set entity state");
            }
          }
          else if (m_ram_cache_clean.overflow())
          {
            m_ram_cache_clean.reset();
            try
            {
              int ret = std::system("sync; echo 1 > /proc/sys/vm/drop_caches");
              if (ret != 0)
                war("RAM cache clean failed with code %d", ret);
            }
            catch (...)
            {
              war("RAM cache clean unknown error");
            }
          }
          else if (m_cpu_check.overflow())
          {
            m_cpu_check.reset();
            m_tstamp = Clock::getSinceEpoch();
            std::vector<CpuTimes> prev = readCpuTimes();
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::vector<CpuTimes> curr = readCpuTimes();

            for (size_t i = 0; i < prev.size(); ++i)
            {
              if (i == 0)
                continue;

              int usage = static_cast<int>(calculateUsage(prev[i], curr[i]));
              m_dune_cpu_usage[i].setTimeStamp(m_tstamp);
              m_dune_cpu_usage[i].value = usage;
              trace("CPU%lu: %d%%", i + 1, usage);
              dispatch(m_dune_cpu_usage[i], DF_KEEP_TIME | DF_LOOP_BACK);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK