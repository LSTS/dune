//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Gonçalves                                                  *
//***************************************************************************
//***************************************************************************
//
// This version now reads:
// - CPU usage (system-wide average)
// - RAM and SWAP usage for this process (VmRSS and VmSwap)
// - Total and free RAM and SWAP for the system (/proc/meminfo)
//***************************************************************************

#include <DUNE/DUNE.hpp>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "Proc.hpp"

namespace Monitors
{
  namespace HostResources
  {
    using DUNE_NAMESPACES;

    static const float c_time_between_reads = 2.0f;
    static const float c_time_between_ram_cache_clean = 3600.0f;
    static const unsigned c_max_cpu = 32;

    struct Task: public Tasks::Task
    {
      struct CpuMessage
      {
        unsigned id;
        IMC::CpuUsage message;
      };

      std::vector<CpuMessage> m_cpus;
      IMC::CpuUsage m_process_cpu;
      IMC::RamUsage m_ram[2];
      Time::Counter<float> m_reads_check;
      Time::Counter<float> m_ram_cache_clean;
      CpuSnapshot m_previous;
      std::uint64_t m_previous_process = 0;
      bool m_have_cpu = false;
      bool m_have_process = false;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL, Tasks::Parameter::VISIBILITY_USER);
      }

      unsigned
      getEid(const std::string& label)
      {
        try
        {
          return resolveEntity(label);
        }
        catch (const Entities::EntityDataBase::NonexistentLabel&)
        {
          return reserveEntity(label);
        }
      }

      static bool
      readCpu(CpuSnapshot& sample)
      {
        std::ifstream input("/proc/stat");
        return parseCpu(input, sample);
      }

      static bool
      readProcess(std::uint64_t& ticks)
      {
        std::ifstream input("/proc/self/stat");
        return parseProcess(input, ticks);
      }

      void
      onEntityReservation(void) override
      {
        CpuSnapshot sample;
        if (!readCpu(sample))
          throw std::runtime_error("Unable to discover CPUs from /proc/stat");
        m_cpus.clear();
        for (const auto& cpu: sample.cpus)
        {
          if (m_cpus.size() == c_max_cpu)
            break;
          CpuMessage entry;
          entry.id = cpu.first;
          entry.message.setSourceEntity(getEid(String::str("CPU%llu",
            static_cast<unsigned long long>(entry.id) + 1)));
          m_cpus.push_back(entry);
        }
        if (sample.cpus.size() > c_max_cpu)
          war("Per-CPU reporting limited to %u CPUs; process usage includes all CPUs.", c_max_cpu);
        m_process_cpu.setSourceEntity(getEid("DUNE-CPU"));
        m_ram[0].setSourceEntity(getEid("DUNE-RAM"));
        m_ram[1].setSourceEntity(getEid("DUNE-SWAP"));
      }

      void
      onResourceAcquisition(void) override
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      void
      onResourceInitialization(void) override
      {
        m_reads_check.setTop(c_time_between_reads);
        m_ram_cache_clean.setTop(c_time_between_ram_cache_clean);
        m_reads_check.reset();
        m_ram_cache_clean.reset();
        m_have_cpu = readCpu(m_previous);
        m_have_process = readProcess(m_previous_process);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
      }

      void
      onDeactivation(void) override
      {
        Tasks::Task::onDeactivation();
        m_have_cpu = m_have_process = false;
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      sampleResources(void)
      {
        const double timestamp = Clock::getSinceEpoch();
        CpuSnapshot current;
        std::uint64_t process = 0;
        const bool cpu_ok = readCpu(current);
        const bool process_ok = readProcess(process);
        unsigned usage = 0;
        unsigned imc_usage = 0;
        bool usage_ok = false;
        long double total = 0, active = 0;

        if (cpu_ok && m_have_cpu)
        {
          if (process_ok && m_have_process && process >= m_previous_process &&
              sameCpus(m_previous, current) &&
              deltaCpu(m_previous.total, current.total, total, active))
          {
            usage = percentage(100.0L * (process - m_previous_process) *
                               current.cpus.size() / total, 255);
            // CpuUsage::validate requires 0..100 (share of total host CPU).
            // Keep the original top-style per-core scale in entity text.
            imc_usage = percentage(100.0L * (process - m_previous_process) / total, 100);
            usage_ok = true;
          }

          for (auto& cpu: m_cpus)
          {
            const auto before = m_previous.cpus.find(cpu.id);
            const auto after = current.cpus.find(cpu.id);
            if (before == m_previous.cpus.end() || after == current.cpus.end() ||
                !deltaCpu(before->second, after->second, total, active))
              continue;
            cpu.message.value = percentage(100.0L * active / total, 100);
            cpu.message.setTimeStamp(timestamp);
            trace("CPU%llu: %u%%", static_cast<unsigned long long>(cpu.id) + 1,
                  static_cast<unsigned>(cpu.message.value));
            dispatch(cpu.message, DF_KEEP_TIME | DF_LOOP_BACK);
          }
        }

        m_have_cpu = cpu_ok;
        m_have_process = process_ok;
        if (cpu_ok)
          m_previous = current;
        if (process_ok)
          m_previous_process = process;
        if (!cpu_ok || !process_ok)
          war("Unable to read CPU statistics; discarding sample");

        if (usage_ok)
        {
          m_process_cpu.value = imc_usage;
          m_process_cpu.setTimeStamp(timestamp);
          dispatch(m_process_cpu, DF_KEEP_TIME);
        }

        std::ifstream status("/proc/self/status");
        std::ifstream meminfo("/proc/meminfo");
        const auto process_memory = parseMemory(status);
        const auto memory = parseMemory(meminfo);
        auto value = [](const std::map<std::string, double>& values, const char* key) {
          const auto item = values.find(key);
          return item == values.end() ? -1.0 : item->second;
        };
        const double ram = value(process_memory, "VmRSS:");
        const double swap = value(process_memory, "VmSwap:");
        const double values[] = {ram, swap};
        for (unsigned i = 0; i < 2; ++i)
        {
          if (values[i] < 0)
            continue;
          m_ram[i].value = static_cast<float>(values[i]);
          m_ram[i].setTimeStamp(timestamp);
          dispatch(m_ram[i], DF_KEEP_TIME);
        }

        // Missing readings are shown explicitly rather than as valid zeroes.
        auto format = [](double reading, double divisor) {
          return reading < 0 ? std::string("n/a") : String::str("%.1f", reading / divisor);
        };
        const std::string cpu_text = usage_ok ? String::str("%u%%", usage) : "n/a";
        const std::string text = String::str(
          "active | C:%u | DC:%s, DR:%sMB, DS:%sMB | HRF:%s of %s(GB), HSF:%s of %s(GB)",
          static_cast<unsigned>(cpu_ok ? current.cpus.size() : m_cpus.size()),
          cpu_text.c_str(), format(ram, 1024).c_str(), format(swap, 1024).c_str(),
          format(value(memory, "MemFree:"), 1048576).c_str(),
          format(value(memory, "MemTotal:"), 1048576).c_str(),
          format(value(memory, "SwapFree:"), 1048576).c_str(),
          format(value(memory, "SwapTotal:"), 1048576).c_str());
        setEntityState(IMC::EntityState::ESTA_NORMAL, text);
      }

      void
      onMain(void) override
      {
        while (!stopping())
        {
          waitForMessages(0.1);
          if (!isActive())
            continue;
          if (m_reads_check.overflow())
          {
            m_reads_check.reset();
            sampleResources();
          }
          if (m_ram_cache_clean.overflow())
          {
            m_ram_cache_clean.reset();
            // Preserve the existing hourly cache-cleaning feature.
            const int result = std::system("sync; echo 1 > /proc/sys/vm/drop_caches");
            if (result != 0)
              war("RAM cache clean failed with status %d", result);
          }
        }
      }
    };
  }
}

DUNE_TASK
