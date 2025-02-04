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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// POSIX headers.
#if defined(DUNE_SYS_HAS_UNISTD_H)
#include <unistd.h>
#endif

// Microsoft Windows headers.
#if defined(DUNE_SYS_HAS_WINDOWS_H)
#include <windows.h>
#endif

namespace Monitors
{
  namespace DUNEResources
  {
    using DUNE_NAMESPACES;

    static const float c_time_between_reads = 1.0f;
    static const float c_time_between_ram_cache_clean = 3600.0f; // 1 hour

    struct Task: public DUNE::Tasks::Task
    {
      //! CpuUsage message
      IMC::CpuUsage m_dune_usage;
      //! state time to check usage of dune
      Time::Counter<float> m_cpu_check;
      //! state time to clean cache
      Time::Counter<float> m_ram_cache_clean;
      //! Read timestamp.
      double m_tstamp;
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
      { }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_dune_usage.setSourceEntity(reserveEntity("DUNECPU"));
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_cpu_check.setTop(c_time_between_reads);
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
        const std::string command = "ps -p " + std::to_string(m_pid) + " -o %cpu --no-headers";
#elif defined(DUNE_OS_WINDOWS)
        const std::string command = "wmic path Win32_PerfFormattedData_PerfProc_Process where \"IDProcess=" + std::to_string(m_pid) + "\" get PercentProcessorTime";
#endif
        try
        {
          std::string result = executeCommand(command);
          return std::stod(trim(result));
        }
        catch (const std::exception& e)
        {
          trace("Error getDUNECPUUsage: %s", e.what());
          return -1;
        }
      }

      double
      getDUNERAMUsage(void)
      {
#if defined(DUNE_OS_LINUX)
        const std::string command = "ps -p " + std::to_string(m_pid) + " -o rss --no-headers";
#elif defined(DUNE_OS_WINDOWS)
        const std::string command = "wmic process where ProcessId=" + std::to_string(m_pid) + " get WorkingSetSize";
#endif
        try
        {
          std::string result = executeCommand(command);
          return std::stod(trim(result)) / 1024.0; // Convert to MB
        }
        catch (const std::exception& e)
        {
          trace("Error getDUNERAMUsage: %s", e.what());
          return -1;
        }
      }

      void
      cleanRamCache(void)
      {
        inf("Cleaning RAM cache");
#if defined(DUNE_OS_LINUX)
        if (std::system("sync; echo 1 > /proc/sys/vm/drop_caches") != 0)
        {
          inf("Error cleanRamCache: Failed to clean cache");
        }
#elif defined(DUNE_OS_WINDOWS)
        std::system("powershell.exe -Command \"Clear-DnsClientCache; Remove-Item -Path C:\\Windows\\Temp\\* -Recurse -Force\"");
#endif
      }

      //! Execute a command and capture the output.
      std::string
      executeCommand(const std::string& command)
      {
        std::array<char, 128> buffer;
        std::stringstream result;
        std::shared_ptr<FILE> pipe(popen(command.c_str(), "r"), pclose);

        if (!pipe)
        {
          throw std::runtime_error("Failed to open pipe for command: " + command);
        }

        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
        {
          result << buffer.data();
        }

        return result.str();
      }

      //! Trim whitespace from both ends of a string.
      std::string
      trim(const std::string& str)
      {
        const auto start = str.find_first_not_of(" \t\n\r");
        const auto end = str.find_last_not_of(" \t\n\r");
        return (start == std::string::npos || end == std::string::npos) ? "" : str.substr(start, end - start + 1);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01);
          if (m_cpu_check.overflow())
          {
            m_cpu_check.reset();
            m_tstamp = Clock::get();
            double percentage = getDUNECPUUsage();
            double ram_usage = getDUNERAMUsage();
            trace("DUNE USAGE: CPU: %d %% | RAM: %d MB", (int)percentage, (int)ram_usage);
            std::string entity_state_text = "active | CPU: " + std::to_string((int)percentage) + " % | RAM: " + std::to_string((int)ram_usage) + " MB";
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(entity_state_text.c_str())));
            m_dune_usage.value = (uint8_t)percentage;
            m_dune_usage.setTimeStamp(m_tstamp);
            dispatch(m_dune_usage, DF_KEEP_TIME | DF_LOOP_BACK);
          }
          if (m_ram_cache_clean.overflow())
          {
            m_ram_cache_clean.reset();
            cleanRamCache();
          }
        }
      }
    };
  }
}

DUNE_TASK
