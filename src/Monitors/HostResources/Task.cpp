//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
#include <inttypes.h>

#include <DUNE/DUNE.hpp>

#define IMC_RAM_USAGE_MESSAGE_EXISTS (true)

namespace Monitors
{
  namespace HostResources
  {
    using DUNE_NAMESPACES;

    static const float c_time_between_reads = 2.0f;
    static const float c_time_between_ram_cache_clean = 3600.0f;  // 1 hour
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
      //! state time to read data host/dune resources
      Time::Counter<float> m_reads_check;
      //! state time to clean cache
      Time::Counter<float> m_ram_cache_clean;
      //! Read timestamp.
      double m_tstamp;
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
        m_reads_check.setTop(c_time_between_reads);
        m_ram_cache_clean.setTop(c_time_between_ram_cache_clean);
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
        // --- CPU (process) robust version, safe for 32/64-bit, single or multi-core ---
        try
        {
          // Helper: read total jiffies from /proc/stat
          auto readTotalJiffies = []() -> std::uint64_t {
            std::ifstream statFile("/proc/stat");
            if (!statFile.is_open())
              return 0ULL;
            std::string line;
            if (!std::getline(statFile, line))
              return 0ULL;
            std::istringstream ss(line);
            std::string cpuLabel;
            if (!(ss >> cpuLabel))
              return 0ULL;
            std::uint64_t val = 0, sum = 0;
            while (ss >> val)
              sum += val;
            return sum;
          };

          // Helper: read process jiffies (utime+stime) from /proc/self/stat
          auto readProcJiffies = []() -> std::uint64_t {
            std::ifstream selfStat("/proc/self/stat");
            if (!selfStat.is_open())
              return 0ULL;

            std::string pid, comm, state;
            // Read first three fields separately
            selfStat >> pid >> comm >> state;

            // Now read the rest into a vector
            std::vector<std::string> fields;
            std::string value;
            while (selfStat >> value)
            {
              fields.push_back(value);
            }

            if (fields.size() < 15)
            {
              return 0ULL;
            }

            // utime is field 14 overall -> index 11 here
            // stime is field 15 overall -> index 12 here
            std::uint64_t utime = std::stoull(fields[11]);
            std::uint64_t stime = std::stoull(fields[12]);

            return utime + stime;
          };

          // First read
          std::uint64_t total1 = readTotalJiffies();
          debug("Total jiffies 1: %" PRIu64 , total1);
          std::uint64_t proc1 = readProcJiffies();
          debug("Proc jiffies 1: %" PRIu64 , proc1);

          // Interval (1000ms, can be tuned)
          std::this_thread::sleep_for(std::chrono::milliseconds(1000));

          // Second read
          std::uint64_t total2 = readTotalJiffies();
          debug("Total jiffies 2: %" PRIu64 , total2);
          std::uint64_t proc2 = readProcJiffies();
          debug("Proc jiffies 2: %" PRIu64 , proc2);

          std::uint64_t deltaTotal = (total2 > total1) ? (total2 - total1) : 0ULL;
          std::uint64_t deltaProc = (proc2 > proc1) ? (proc2 - proc1) : 0ULL;

          if (deltaTotal > 0)
          {
            long numCpus = 1;
            if (m_num_cpus > 0)
            {
              numCpus = m_num_cpus;  // use cached value if available
            }
            else
            {
              long tmp = sysconf(_SC_NPROCESSORS_ONLN);
              if (tmp > 0)
                numCpus = tmp;
            }

            if (numCpus < 1)
              numCpus = 1;

            // Result in "top" format: 100% = one core fully used
            double usage = 100.0
                           * (static_cast<double>(deltaProc) / static_cast<double>(deltaTotal))
                           * static_cast<double>(m_num_cpus);

            trace("CPU usage: %.2f%% (proc %" PRIu64 ", total %" PRIu64 ") on %ld CPUs\n", usage, deltaProc, deltaTotal, numCpus);
            // Allow >100% for multithreaded processes (e.g. 200% = 2 cores fully used)
            // Clamp only to fit inside uint8_t (0..255)
            if (std::isnan(usage) || usage < 0.0)
              usage = 0.0;
            double maxAllowed = 255.0;
            if (usage > maxAllowed)
              usage = maxAllowed;

            cpuUsage = static_cast<uint8_t>(std::lround(usage));
          }
          else
          {
            cpuUsage = 0;
          }
        }
        catch (...)
        {
          war("CPU read failed (robust)");
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
      getDuneUsageResources(double tstamp)
      {
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
          m_dune_cpu_usage[m_num_cpus].setTimeStamp(tstamp);
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
          m_dune_ram_usage[0].setTimeStamp(tstamp);
          dispatch(m_dune_ram_usage[0]);
          m_dune_ram_usage[1].value = static_cast<float>(procSwap * 1024.0f);
          m_dune_ram_usage[1].setTimeStamp(tstamp);
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
          std::string msg = String::str("%s | DC:%u%%, DR:%.1fMB, DS:%.1fMB | HRF:%.1f of %.1f(GB),"
                                        " HSF:%.1f of %.1f(GB)",
                                        entity.c_str(), static_cast<unsigned>(cpuUsage), procRam,
                                        procSwap, freeRam, totalRam, freeSwap, totalSwap);
          setEntityState(IMC::EntityState::ESTA_NORMAL, msg);
        }
        catch (...)
        {
          war("Failed to set entity state");
        }
      }

      void
      getUsageOfCPU(double tstamp)
      {
        std::vector<CpuTimes> prev = readCpuTimes();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::vector<CpuTimes> curr = readCpuTimes();
        for (size_t i = 0; i < prev.size() - 1; ++i)
        {
          int usage = static_cast<int>(calculateUsage(prev[i], curr[i]));
          m_dune_cpu_usage[i].setTimeStamp(tstamp);
          m_dune_cpu_usage[i].value = usage;
          trace("CPU%lu: %d%%", (unsigned long)(i + 1), usage);
          dispatch(m_dune_cpu_usage[i], DF_KEEP_TIME | DF_LOOP_BACK);
        }
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

          if (m_reads_check.overflow())
          {
            m_reads_check.reset();
            m_tstamp = Clock::getSinceEpoch();
            getDuneUsageResources(m_tstamp);
            getUsageOfCPU(m_tstamp);
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
        }
      }
    };
  }
}

DUNE_TASK