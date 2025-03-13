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
//* https://github.com/vivaladav/BitsOfBytes/blob/master/cpp-program-to-get-*
//*       cpu-usage-from-command-line-in-linux/main.cpp                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <cstring>
#include <fstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace CPUScaling
  {
    using DUNE_NAMESPACES;

    static const float c_time_between_reads = 2.0f;

    enum CPUGovernor
    {
      GOV_POWERSAVE = 0,
      GOV_OTHER
    };

    struct Arguments
    {
      //! Set CPU In Mode
      std::string set_cpu_mode;
      //! Use Linux Liquorix
      bool use_liquorix;
      //! Set Maximum CPU Frequency
      int set_max_freq;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! state time to check usage of cpus
      Time::Counter<float> m_cpu_check;
      //! Buffer forEntityState
      char m_bufer_entity[512];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Set CPU In Mode", m_args.set_cpu_mode)
        .defaultValue("ondemand")
        .description("Set CPU In Mode.");

        param("Use Linux Liquorix", m_args.use_liquorix)
        .defaultValue("false")
        .description("Use Linux Liquorix.");

        param("Set Maximum CPU Frequency in MHz", m_args.set_max_freq)
        .defaultValue("1000")
        .description("Set Maximum CPU Frequency in MHz.");

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
        if(m_args.use_liquorix)
        {
          std::string cpu_freq_string_command = "cpufreq-set -u " + std::to_string(m_args.set_max_freq) + "MHz";

          if(std::system(cpu_freq_string_command.c_str()) != 0)
          {
            war("Error setting CPU frequency to %dMHz", m_args.set_max_freq);
            setEntityState(IMC::EntityState::ESTA_FAULT, Status::CODE_INTERNAL_ERROR);
          }
          else
          {
            inf("CPU frequency set to %dMHz", m_args.set_max_freq);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
        }
        else
        {
          std::string governor_string_command = "sh -c 'for governor in /sys/devices/system/cpu/cpu*/cpufreq/scaling_governor; do echo \""
                                                + m_args.set_cpu_mode + "\" > $governor; done'";
          if(std::system(governor_string_command.c_str()) != 0)
          {
            war("Error setting CPU governor to %s", m_args.set_cpu_mode.c_str());
            setEntityState(IMC::EntityState::ESTA_FAULT, Status::CODE_INTERNAL_ERROR);
          }
          else
          {
            inf("CPU governor set to %s", m_args.set_cpu_mode.c_str());
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          }
          m_cpu_check.setTop(c_time_between_reads);
        }
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      std::string
      getCpuScalingGovernor()
      {
        std::string m_governor = "null";
        std::ifstream file("/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
        if (file.is_open())
        {
          std::getline(file, m_governor);
          file.close();
        }

        if(m_args.use_liquorix)
        {
          m_governor = m_governor + " (Liquorix)";
        }
        return m_governor;
      }

      std::string
      readCPUFreq()
      {
        std::string output = "";
        // Open a pipe to execute the command and read its output
        FILE *pipe = popen("cat /proc/cpuinfo | grep \"MHz\"", "r");
        if (!pipe)
        {
          war("Error executing command to read frequency.");
          return output;
        }

        char buffer[1024];
        // Read the output of the command line by line
        uint8_t cpu_id = 1;
        while (!feof(pipe))
        {
          if (fgets(buffer, 1024, pipe) != NULL)
          {
            // Tokenize the buffer using ':' as delimiter
            char *token = strtok(buffer, ":");
            if (token != NULL)
            {
              // Extract the MHz value
              token = strtok(NULL, ":");
              if (token != NULL)
              {
                trace("CPU%d frequency: %s", cpu_id++, token);
                // Convert MHz value to double
                double mhz = std::atof(token);
                // Append MHz value to the output string
                output += "| " + std::to_string((int)mhz) + " MHz ";
              }
            }
          }
        }

        // Close the pipe
        pclose(pipe);
        return output;
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
            std::sprintf(m_bufer_entity, "active | %s %s", getCpuScalingGovernor().c_str(), readCPUFreq().c_str());
            setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR(m_bufer_entity)));
          }
        }
      }
    };
  }
}

DUNE_TASK
