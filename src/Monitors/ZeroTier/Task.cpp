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
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <regex>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Monitors
{
  namespace ZeroTier
  {
    using DUNE_NAMESPACES;
    //! Timeout for general monitor restart message.
    const double c_timeout_tx_request = 120.0;

    //! Task arguments.
    struct Arguments
    {
      //! Flag to control automatic restart of ZeroTier service.
      bool auto_restart;
      //! Timeout in minutes to check ZeroTier state.
      int zerotier_state_timeout;
      //! Flag to control force of restart of ZeroTier service.
      bool force_restart;
      //! Flag to control restar of modem GSM
      bool restart_modem_gsm;
      //! Power channel label for GSM modem.
      std::string gsm_modem_power_label;
      //! List of ip's to check for connectivity.
      std::vector<std::string> remote_hosts_ip;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Time between checks of the ZeroTier state.
      Time::Counter<float> m_zerotier_state_check;
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("AutoReconnect", m_args.auto_restart)
          .defaultValue("true")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .description("AutoReconnect the ZeroTier service if it is not running.");

        param("AutoCheck Interval in Minutes", m_args.zerotier_state_timeout)
          .defaultValue("10")
          .minimumValue("2")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .description("Timeout in minutes to check ZeroTier state. "
                       "If the ZeroTier service is not running, it will be restarted.");

        param("Force Restart", m_args.force_restart)
          .defaultValue("false")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .description("Force restart of ZeroTier service if it is not running. "
                       "If this is set to true, the service will be restarted even if it is running.");

        param("Restart Modem GSM", m_args.restart_modem_gsm)
          .defaultValue("false")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .description("Restart the GSM modem if it is not running. "
                       "If this is set to true, the modem will be restarted even if it is running.");

        param("Label of GSM Modem Power", m_args.gsm_modem_power_label)
          .defaultValue("MOBILE_1_C")
          .visibility(Tasks::Parameter::VISIBILITY_USER)
          .description("Label of the GSM modem power channel. "
                       "This is used to control the power of the GSM modem. ");

        param("Remote Hosts IP to Check for Connectivity", m_args.remote_hosts_ip)
        .defaultValue("")
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .description("List of Remote Hosts IP to Check for Connectivity");
      }

      void
      onUpdateParameters(void)
      {
        trace("onUpdateParameters");
        if (paramChanged(m_args.auto_restart))
        {
          inf("AutoReconnect parameter changed to: %s", m_args.auto_restart ? "true" : "false");
        }

        if (paramChanged(m_args.zerotier_state_timeout))
        {
          inf("AutoReconnect - Interval in Minutes parameter changed to: %d minutes", m_args.zerotier_state_timeout);
          m_zerotier_state_check.setTop(m_args.zerotier_state_timeout * 60.0f); // Convert minutes to seconds.
        }

        if (paramChanged(m_args.force_restart))
        {
          inf("Force Restart parameter changed to: %s", m_args.force_restart ? "true" : "false");
          if (m_args.force_restart)
          {
            restartZeroTierService();
            m_args.force_restart = false;  // Reset the flag after restart.
          }
        }

        if (paramChanged(m_args.restart_modem_gsm))
        {
          inf("Restart Modem GSM parameter changed to: %s", m_args.restart_modem_gsm ? "true" : "false");
          if (m_args.restart_modem_gsm)
          {
            restartGSMModem();
            m_args.restart_modem_gsm = false;  // Reset the flag after restart.
          }
        }

        if (paramChanged(m_args.gsm_modem_power_label))
        {
          inf("Label of GSM Modem Power parameter changed to: %s", m_args.gsm_modem_power_label.c_str());
        }
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
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVATING);
        m_zerotier_state_check.setTop(m_args.zerotier_state_timeout * 60.0f); // Convert minutes to seconds.
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        inf("Auto-restart: %s, check interval: %d minutes", m_args.auto_restart ? "true" : "false", m_args.zerotier_state_timeout);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      //! Task to execute comand to check state of ZeroTier.
      //! The function have safety checks to ensure that the application dont give segmentation
      //! fault or core dump.
      //! @return string with the state of ZeroTier.
      std::string
      getZeroTierState(void)
      {
        inf("Retrieving ZeroTier state...");
        std::string state;
        try
        {
          // Execute the command to get the ZeroTier state.
          std::array<char, 128> buffer;
          auto deleter = [](FILE* f) {
            if (f)
              pclose(f);
          };
          std::unique_ptr<FILE, decltype(deleter)> pipe(popen("zerotier-cli info", "r"), deleter);
          if (!pipe)
          {
            war("Failed to open pipe for ZeroTier command.");
            return "Error: Failed to open pipe for ZeroTier command.";
          }
          while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
          {
            state += buffer.data();
          }
          // Check if there was an error while reading from the pipe.
          if (ferror(pipe.get()))
          {
            war("Error reading from ZeroTier command pipe.");
            return "Error: Error reading from ZeroTier command pipe.";
          }

          // If the state is empty, indicate that no data was returned from the command.
          if (state.empty())
          {
            state = "Error: No data returned from ZeroTier command.";
          }
        }
        catch (const std::exception& e)
        {
          state = "Error: " + std::string(e.what());
        }

        // case the string is empty, return an error message.
        if (state.empty())
        {
          war("ZeroTier state is empty.");
          return "Error: ZeroTier state is empty.";
        }

        // case string state contains "\n", replace by "#"
        try
        {
          size_t pos = 0;
          while ((pos = state.find('\n', pos)) != std::string::npos)
          {
            state.replace(pos, 1, "#");
            pos += 1;  // Move past the replaced character.
          }
          return state;
        }
        catch (const std::exception& e)
        {
          war("Error processing ZeroTier state: %s", e.what());
          return "Error: " + std::string(e.what());
        }
      }

      void
      sendMessage(std::string message)
      {
        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());
        tr.setSourceEntity(getEntityId());
        tr.destination = "broadcast";
        tr.deadline = Time::Clock::getSinceEpoch() + c_timeout_tx_request;  // seconds
        tr.req_id = std::rand() % 0xFFFF;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_TEXT;
        std::string msg = std::string(getName()) + " - " + message;
        tr.txt_data = msg;
        dispatch(tr);
      }

      void
      restartZeroTierService(void)
      {
        inf("Attempting to restart ZeroTier service...");
        // Use timeout to prevent blocking indefinitely
        int result = system("timeout 5 systemctl restart zerotier-one");

        if (result == 0)
        {
          inf("ZeroTier service restarted successfully.");
          sendMessage("ZeroTier service restarted successfully.");
        }
        else if (WIFEXITED(result) && WEXITSTATUS(result) == 124)
        {
          err("Restart command timed out.");
          sendMessage("Error: Restart command timed out.");
        }
        else
        {
          err("Failed to restart ZeroTier service. (%d)", result);
          sendMessage("Failed to restart ZeroTier service. Error code: " + std::to_string(result));
        }
      }

      void
      restartGSMModem(void)
      {
        // Attempt to restart GSM modem.
        inf("Attempting to restart GSM modem...");
        inf("Powering off GSM modem %s...", m_args.gsm_modem_power_label.c_str());
        IMC::PowerChannelControl pcc;
        pcc.name = m_args.gsm_modem_power_label;
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
        dispatch(pcc, DF_LOOP_BACK);
        Time::Delay::wait(10.0);  // Wait for 5 seconds before powering on again.
        inf("Powering on GSM modem %s...", m_args.gsm_modem_power_label.c_str());
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(pcc, DF_LOOP_BACK);
        inf("GSM modem %s restarted successfully.", m_args.gsm_modem_power_label.c_str());
        sendMessage("GSM modem " + m_args.gsm_modem_power_label + " restarted successfully.");
      }

      bool
      checkInternetConnectionTo(std::string ip_to_check, std::string interface)
      {
        if(interface.empty())
          inf("Checking internet connection to %s ...", ip_to_check.c_str());
        else
          inf("Checking internet connection to %s on interface %s...", ip_to_check.c_str(), interface.c_str());

        std::string cmd = "";
        if (!interface.empty())
        {
          cmd = "ping -I " + interface + " -c 1 -W 2 " + ip_to_check + " > /dev/null 2>&1";  // silent output
        }
        else
        {
          cmd = "ping -c 1 -W 2 " + ip_to_check + " > /dev/null 2>&1";  // silent output
          war("ZeroTier interface name is empty, using default ping command without interface.");
        }
        int returnCode = std::system(cmd.c_str());
        if (returnCode == 0)
        {
          if (!interface.empty())
            inf("Internet connection to %s is OK on interface %s.", ip_to_check.c_str(), interface.c_str());
          else
            inf("Internet connection to %s is OK.", ip_to_check.c_str());

          return true;
        }
        else
        {
          if (!interface.empty())
            war("No internet connection to %s on interface %s", ip_to_check.c_str(), interface.c_str());
          else
            war("No internet connection to %s", ip_to_check.c_str());

          return false;
        }
      }

      void
      checkZeroTierState(void)
      {
        inf("Checking ZeroTier state...");
        std::string state_zerotier = getZeroTierState();
        if (state_zerotier.find("200") != std::string::npos || state_zerotier.find("ONLINE") != std::string::npos)
        {
          inf("ZeroTier is running: %s", state_zerotier.c_str());
          // Check internet connection to remote hosts, if all fail, send a message to warning
          if (!m_args.remote_hosts_ip.empty())
          {
            bool all_hosts_fail = true;
            inf("Checking internet connection to remote hosts...");
            std::vector<std::string> interfaces = getZeroTierInterfaceNames();
            if(interfaces.empty())
            {
              war("No ZeroTier interfaces found, using default ping command without interface.");
              for (const auto& ip : m_args.remote_hosts_ip)
              {
                if (checkInternetConnectionTo(ip, ""))
                {
                  all_hosts_fail = false;
                }
              }
              if (all_hosts_fail)
              {
                war("No internet connection to any of the configured remote hosts.");
                std::string message_iri = "No internet connection to any of the configured remote hosts | [" + state_zerotier + "]";
                sendMessage(message_iri);
                if (m_args.auto_restart)
                {
                  inf("Attempting restart of GSM modem due to no internet connection.");
                  restartGSMModem();
                  Time::Delay::wait(20.0);  // Wait for 20 seconds before restarting ZeroTier state again.
                  inf("Attempting to restart ZeroTier service due to no internet connection.");
                  restartZeroTierService();
                }
              }
              else
              {
                inf("Internet connection to at least one remote host is OK.");
              }
            }
            else
            {
              inf("Found %zu ZeroTier interfaces.", interfaces.size());
              for (const auto& ip : m_args.remote_hosts_ip)
              {
                bool host_connected = false;
                for (const auto& iface : interfaces)
                {
                  if (checkInternetConnectionTo(ip, iface))
                  {
                    host_connected = true;
                    all_hosts_fail = false;
                    break;  // Exit the loop if one interface is successful.
                  }
                }
                if (!host_connected)
                {
                  war("No internet connection to remote host %s on any ZeroTier interface.", ip.c_str());
                }
              }
              if (all_hosts_fail)
              {
                war("No internet connection to any of the configured remote hosts.");
                std::string message_iri = "No internet connection to any of the configured remote hosts | [" + state_zerotier + "]";
                sendMessage(message_iri);
                if (m_args.auto_restart)
                {
                  inf("Attempting restart of GSM modem due to no internet connection.");
                  restartGSMModem();
                  Time::Delay::wait(20.0);  // Wait for 20 seconds before restarting ZeroTier state again.
                  inf("Attempting to restart ZeroTier service due to no internet connection.");
                  restartZeroTierService();
                }
              }
              else
              {
                inf("Internet connection to at least one remote host is OK.");
              }
            }
          }
          else
          {
            inf("No remote hosts IPs configured for connectivity check.");
          }
        }
        else
        {
          war("ZeroTier is not running or in an error state: %s", state_zerotier.c_str());
          sendMessage("ZeroTier is not running or in an error state: " + state_zerotier);
          if (m_args.auto_restart)
          {
            restartZeroTierService();
          }
        }
      }

      std::vector<std::string>
      getZeroTierInterfaceNames()
      {
        inf("Retrieving ZeroTier interface names...");
        std::vector<std::string> interfaces;
        std::string output;
        try
        {
          const char* cmd = "timeout 3 zerotier-cli listnetworks 2>&1";
          std::array<char, 256> buffer;

          auto deleter = [](FILE* f) {
            if (f)
              pclose(f);
          };
          std::unique_ptr<FILE, decltype(deleter)> pipe(popen(cmd, "r"), deleter);
          if (!pipe)
          {
            war("Failed to open pipe for ZeroTier command.");
            return interfaces;
          }

          while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
          {
            output += buffer.data();
          }

          if (ferror(pipe.get()))
          {
            war("Error reading from ZeroTier command pipe.");
            return interfaces;
          }

          if (output.find("command not found") != std::string::npos)
          {
            war("ZeroTier CLI command not found. Ensure ZeroTier is installed and in PATH.");
            return interfaces;
          }

          std::istringstream iss(output);
          std::string line;
          while (std::getline(iss, line))
          {
            trace("Processing line: %s", line.c_str());

            // Skip the header line
            if (line.find("<nwid>") != std::string::npos)
              continue;

            std::istringstream lineStream(line);
            std::string token;

            // Skip first two tokens: "200" and "listnetworks"
            lineStream >> token;  // 200
            lineStream >> token;  // listnetworks

            // Now parse the rest
            int index = 0;
            std::string iface;
            while (lineStream >> token)
            {
              if (index == 5)  // The 6th field is the interface name
              {
                iface = token;
              }
              ++index;
            }

            if (!iface.empty())
            {
              inf("Found ZeroTier interface: %s", iface.c_str());
              interfaces.push_back(iface);
            }
          }

          if (interfaces.empty())
          {
            war("No ZeroTier interfaces found.");
          }

          return interfaces;
        }
        catch (const std::exception& e)
        {
          war("Exception while retrieving ZeroTier interfaces: %s", e.what());
          return interfaces;
        }
        catch (...)
        {
          war("Unknown error while retrieving ZeroTier interfaces.");
          return interfaces;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(0.01);
          if (m_zerotier_state_check.overflow())
          {
            checkZeroTierState();
            m_zerotier_state_check.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK