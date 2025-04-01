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
#include <thread>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace CPUSingleUsage
  {
    using DUNE_NAMESPACES;

    //! CPUData total times;
    static constexpr uint8_t c_total_times = 10;

    struct CPUData
    {
      std::string cpu;
      size_t times[c_total_times];
    };

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

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Cpu cores entity labels;
      std::vector<uint8_t> m_cpu_eid;
      //! Number of CPU cores.
      unsigned int m_cores;
      
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        try
        {
          m_cores = std::thread::hardware_concurrency();
          m_cpu_eid.resize(m_cores + 1);
          m_cpu_eid[0] = getEid("DUNE-CPU");
          for(uint8_t i = 1; i < m_cores + 1; i++)
          {
            std::string cpu_label = String::str("CPU%u", i + 1);
            m_cpu_eid[i] = getEid(cpu_label);
          }
        }
        catch(...)
        {
          requestDeactivation();
        }
      }

      unsigned
      getEid(std::string label)
      {
        unsigned eid = AddressResolver::invalid();
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
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      std::vector<CPUData>
      readStatsCPU(void)
      {
        std::ifstream fileStat("/proc/stat");

        const std::string l("cpu");
        const std::size_t s = l.size();
        
        std::vector<CPUData> entries;
        std::string line;
        while (std::getline(fileStat, line))
        {
          if (!line.compare(0, s, l))
          {
            std::istringstream ss(line);
            CPUData entry;
            ss >> entry.cpu;

            for (unsigned int i = 0; i < c_total_times; ++i)
              ss >> entry.times[i];

            entries.push_back(entry);
          }
        }

        return entries;
      }

      size_t
      getActiveTime(const CPUData& e)
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
      getIdleTime(const CPUData& e)
      {
        return e.times[S_IDLE] + e.times[S_IOWAIT];
      }

      void
      dispatchStatus(const std::vector<CPUData>& entries1, const std::vector<CPUData>& entries2, const double tstamp)
      {
        const size_t size1 = entries1.size();
        const size_t size2 = entries2.size();
        if (size1 != size2 || size1 != m_cores + 1)
          return;
        
        IMC::CpuUsage cpu_usage;
        cpu_usage.setSource(getSystemId());
        cpu_usage.setTimeStamp(tstamp);
        std::ostringstream debugMsg;
        for (size_t i = 0; i < size1; ++i)
        {
          const CPUData& e1 = entries1[i];
          const CPUData& e2 = entries2[i];
          const float ACTIVE_TIME = static_cast<float>(getActiveTime(e2) - getActiveTime(e1));
          const float IDLE_TIME = static_cast<float>(getIdleTime(e2) - getIdleTime(e1));
          const float TOTAL_TIME = ACTIVE_TIME + IDLE_TIME;
          cpu_usage.value = (100.f * ACTIVE_TIME / TOTAL_TIME);
          cpu_usage.setSourceEntity(m_cpu_eid[i]);
          dispatch(cpu_usage, DF_KEEP_TIME | DF_KEEP_SRC_EID);

          debugMsg << ((i > 0) ? " | " : "")
                   << "CPU"
                   << ((i > 0) ? std::to_string(i) : "")
                   << ": "
                   << std::to_string(cpu_usage.value) << "%";
        }
        
        debug("%s", debugMsg.str().c_str());
      }

      void
      task(void)
      {
        double tstamp = Clock::getSinceEpoch();
        std::vector<CPUData> entries1 = readStatsCPU();
        Delay::waitMsec(100);
        std::vector<CPUData> entries2 = readStatsCPU();
        dispatchStatus(entries1, entries2, tstamp);
      }
    };
  }
}

DUNE_TASK
