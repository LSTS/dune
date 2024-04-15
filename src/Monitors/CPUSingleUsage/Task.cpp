//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
//* https://github.com/vivaladav/BitsOfBytes/blob/master/cpp-program-to-get-*
//*       cpu-usage-from-command-line-in-linux/main.cpp                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace CPUSingleUsage
  {
    using DUNE_NAMESPACES;

    static const float c_time_between_reads = 2.0f;
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
      IMC::CpuUsage m_cpu[c_max_cpu];
      //! CpuEdiLabel
      uint8_t m_cpu_eid[c_max_cpu];
      //! state time to check usage of cpus
      Time::Counter<float> m_cpu_check;
      //! Read timestamp.
      double m_tstamp;
      //! Number of CPUs
      int m_num_cpus;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_tstamp(0)
      {
        m_num_cpus = sysconf(_SC_NPROCESSORS_ONLN);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        for(uint8_t i = 1 ; i <= m_num_cpus; i++)
        {
          std::string cpu_label = String::str("CPU%u", i);
          m_cpu_eid[i - 1] = getEid(cpu_label);
          m_cpu[i - 1].setSourceEntity(m_cpu_eid[i - 1]);
        }
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
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_cpu_check.setTop(c_time_between_reads);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      readStatsCPU(std::vector<CPUData> &entries)
      {
        std::ifstream fileStat("/proc/stat");

        std::string line;

        const std::string STR_CPU("cpu");
        const std::size_t LEN_STR_CPU = STR_CPU.size();
        const std::string STR_TOT("tot");

        while (std::getline(fileStat, line))
        {
          // cpu stats line found
          if (!line.compare(0, LEN_STR_CPU, STR_CPU))
          {
            std::istringstream ss(line);

            // store entry
            entries.emplace_back(CPUData());
            CPUData &entry = entries.back();

            // read cpu label
            ss >> entry.cpu;

            if (entry.cpu.size() > LEN_STR_CPU)
              entry.cpu.erase(0, LEN_STR_CPU);
            else
              entry.cpu = STR_TOT;

            // read times
            for (int i = 0; i < m_num_cpus; ++i)
              ss >> entry.times[i];
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
          m_cpu[id].setTimeStamp(m_tstamp);
          m_cpu[id].value = cpu_usage[id];
          debug("CPU%u: %d%%", id + 1, cpu_usage[id]);
          dispatch(m_cpu[id], DF_KEEP_TIME | DF_LOOP_BACK);
        }
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
            std::vector<CPUData> entries1;
	          std::vector<CPUData> entries2;
            m_tstamp = Clock::getSinceEpoch();
            readStatsCPU(entries1);
            Delay::waitMsec(100);
            readStatsCPU(entries2);
            dispatchStatus(entries1, entries2);
          }
        }
      }
    };
  }
}

DUNE_TASK
